#include "block.h"
#include "gl_helpers.h"
#include "line.h"
#include "loader.h"
#include "matrix.h"
#include "render.h"
#include "texgen.h"
#include "texture.h"
#include "remote.h"

// q2t winding doesn't change, so we can globally precalculate/cache it
struct {
    GLushort *cache;
    uint32_t len;
} q2t = {0};

static void q2t_calc(int len) {
    if (len <= q2t.len)
        return;

    if (q2t.cache)
        free(q2t.cache);
    q2t.cache = malloc(len * 1.5 * sizeof(GLushort));
    q2t.len = len;

    int a = 0, b = 1, c = 2, d = 3;
    int winding[6] = {
        a, b, d,
        b, c, d,
    };

    GLushort *indices = q2t.cache;
    for (int i = 0; i < len; i += 4) {
        for (int j = 0; j < 6; j++) {
            indices[j] = i + winding[j];
        }
        indices += 6;
    }
}

block_t *bl_new(GLenum mode) {
    block_t *block = calloc(1, sizeof(block_t));
    block->cap = DEFAULT_BLOCK_CAPACITY;
    block->attr = calloc(1, block->cap * sizeof(block_attr_t));
    block->open = true;
    block->mode = mode;

    block->incomplete.color = -1;
    block->incomplete.normal = -1;
    for (int i = 0; i < MAX_TEX; i++) {
        block->incomplete.tex[i] = -1;
    }

    return block;
}

void bl_free(block_t *block) {
    if (block->solid) {
        free(block->solid);
        return;
    }
    free(block->attr);
    free(block->indices);
    free(block);
}

static inline void bl_grow(block_t *block) {
    if (block->len >= block->cap) {
        block->cap += DEFAULT_BLOCK_CAPACITY;
        block->attr = realloc(block->attr, block->cap * sizeof(block_attr_t));
    }
}

void bl_q2t(block_t *block) {
    if (!block->len || !block->attr || block->q2t) return;
    // TODO: split to multiple blocks if block->len > 65535

    q2t_calc(block->len);
    block->q2t = true;
    block->count = block->len * 1.5;
    if (block->indices) {
        GLushort *indices = malloc(block->count * sizeof(GLushort));
        for (int i = 0; i < block->count; i++) {
            indices[i] = block->indices[q2t.cache[i]];
        }
        free(block->indices);
        block->indices = indices;
    }
    return;
}

// affects global state based on the ending state of a block
// (used when a display list executes or a global block ends)
void bl_pollute(block_t *block) {
    // artificial (non-glBegin) blocks don't pollute global state
    // and empty blocks would cause undefined memcpy (negative index)
    if (!block || block->len <= 0 || block->artificial) {
        return;
    }
    int last = (block->len - 1);
    for (int t = 0; t < MAX_TEX; t++) {
        if (block->tex[t]) {
            glMultiTexCoord4fv(GL_TEXTURE0 + t, block->attr[last].tex[t]);
        }
    }
    if (block->color) {
        glColor4fv(block->attr[last].color);
    }
    if (block->normal) {
        glNormal3fv(block->attr[last].normal);
    }
}

void bl_end(block_t *block) {
    if (! block->open)
        return;

    // only call this here if we're not compiling
    if (! state.list.active) {
        bl_pollute(block);
    }

    block->open = false;
    for (int t = 0; t < MAX_TEX; t++) {
        gltexture_t *bound = state.texture.bound[t];
        if (block->tex[t] && bound) {
            if (bound->width != bound->nwidth || bound->height != bound->nheight) {
                tex_coord_npot(block->attr, t, block->len, bound->width, bound->height, bound->nwidth, bound->nheight);
            }
            // GL_ARB_texture_rectangle
            if (state.texture.rect_arb[t]) {
                tex_coord_rect_arb(block->attr, t, block->len, bound->width, bound->height);
            }
        }
    }
    switch (block->mode) {
        case GL_QUADS:
            block->mode = GL_TRIANGLES;
            bl_q2t(block);
            break;
        case GL_POLYGON:
            block->mode = GL_TRIANGLE_FAN;
            break;
        case GL_QUAD_STRIP:
            block->mode = GL_TRIANGLE_STRIP;
            break;
    }
}

void bl_draw(block_t *block) {
    if (!block || block->len == 0 || !block->attr) {
        return;
    }

    int pos;
    // texture is never incomplete, because we check enabled state on start?
    // TODO: the texture array could exist but be incomplete :(
    for (int t = 0; t < MAX_TEX; t++) {
        if ((pos = block->incomplete.tex[t]) >= 0) {
            for (int i = 0; i < block->len; i++) {
                memcpy(block->attr[i].tex[t], CURRENT->tex[t], 4 * sizeof(GLfloat));
            }
        }
    }
    if ((pos = block->incomplete.color) >= 0) {
        for (int i = 0; i <= pos; i++) {
            memcpy(block->attr[i].color, CURRENT->color, 4 * sizeof(GLfloat));
        }
    }
    if ((pos = block->incomplete.normal) >= 0) {
        for (int i = 0; i <= pos; i++) {
            memcpy(block->attr[i].normal, CURRENT->normal, 3 * sizeof(GLfloat));
        }
    }
    if (state.render.mode == GL_SELECT) {
        return gl_select_block(block);
    } else if (state.render.mode == GL_FEEDBACK) {
        return gl_feedback_block(block);
    }

    block_attr_t *attr = block->attr;
    // glTexGen
    for (int i = 0; i < MAX_TEX; i++) {
        if (attr == block->attr) {
            attr = malloc(block->len * sizeof(block_attr_t));
            memcpy(attr, block->attr, block->len * sizeof(block_attr_t));
        }
        if (state.enable.texgen_s[i] || state.enable.texgen_t[i] || state.enable.texgen_r[i] || state.enable.texgen_q[i]) {
            gen_tex_coords(block, attr, i);
        }
    }

#ifdef LOCAL_MATRIX
    if (attr == block->attr) {
        attr = malloc(block->len * sizeof(block_attr_t));
        memcpy(attr, block->attr, block->len * sizeof(block_attr_t));
    }
    for (int i = 0; i < block->len; i++) {
        gl_transform_vertex(attr[i].vert, block->attr[i].vert);
    }
    for (int t = 0; t < MAX_TEX; t++) {
        if (block->tex[t]) {
            for (int i = 0; i < block->len; i++) {
                gl_transform_texture(GL_TEXTURE0 + t, attr[i]->tex[t], attr[i]->tex[t]);
            }
        }
    }
#endif
    if (state.remote) {
        if (attr != block->attr) {
            block_t tmp = *block;
            tmp.attr = attr;
            remote_block_draw(&tmp);
            free(attr);
        } else {
            remote_block_draw(block);
        }
        return;
    }

    LOAD_GLES(glDrawArrays);
    LOAD_GLES(glDrawElements);

    glPushClientAttrib(GL_CLIENT_VERTEX_ARRAY_BIT);
#ifdef USE_ES2
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(block_attr_t), attr);
    gles_glDrawArrays(block->mode, 0, block->len);
#else
    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(3, GL_FLOAT, sizeof(block_attr_t), &attr[0].vert);
    if (block->normal) {
        glEnableClientState(GL_NORMAL_ARRAY);
        glNormalPointer(GL_FLOAT, sizeof(block_attr_t), &attr[0].normal);
    } else {
        glDisableClientState(GL_NORMAL_ARRAY);
    }
    if (block->color) {
        glEnableClientState(GL_COLOR_ARRAY);
        glColorPointer(4, GL_FLOAT, sizeof(block_attr_t), &attr[0].color);
    } else {
        glDisableClientState(GL_COLOR_ARRAY);
    }

    /*
    bool stipple = false;
    // TODO: how do I stipple with texture?
    // TODO: what about multitexturing?
    if (! tex[0]) {
        // TODO: do we need to support GL_LINE_STRIP?
        if (block->mode == GL_LINES && state.enable.line_stipple) {
            stipple = true;
            glPushAttrib(GL_COLOR_BUFFER_BIT | GL_ENABLE_BIT | GL_TEXTURE_BIT);
            glEnable(GL_BLEND);
            glEnable(GL_TEXTURE_2D);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE);
            tex[0] = gen_stipple_tex_coords(vert, block->len);
            bind_stipple_tex();
        }
    }
    */
    for (int i = 0; i < MAX_TEX; i++) {
        GLuint old = state.texture.client + GL_TEXTURE0;
        if (block->tex[i]) {
            glClientActiveTexture(GL_TEXTURE0 + i);
            glEnableClientState(GL_TEXTURE_COORD_ARRAY);
            glTexCoordPointer(4, GL_FLOAT, sizeof(block_attr_t), &block->attr[0].tex);
            glClientActiveTexture(old);
        } else if (state.enable.tex_coord_array[i]) {
            glClientActiveTexture(GL_TEXTURE0 + i);
            glDisableClientState(GL_TEXTURE_COORD_ARRAY);
            glClientActiveTexture(old);
        }
    }

    GLushort *indices = block->indices;
    // if glDrawElements or glArrayElement was used, we should have already updated block->indices with q2t
    if (block->q2t && !indices) {
        // make sure we resized q2t. this block might be from remote.
        q2t_calc(block->len);
        indices = q2t.cache;
    }

    if (indices) {
        gles_glDrawElements(block->mode, block->count, GL_UNSIGNED_SHORT, indices);
    } else {
        gles_glDrawArrays(block->mode, 0, block->len);
    }
    /*
    if (stipple) {
        glPopAttrib();
        free(tex[0]);
    }
    */
#endif
    glPopClientAttrib();
    if (attr != block->attr) {
        free(attr);
    }
}

void bl_vertex3f(block_t *block, GLfloat x, GLfloat y, GLfloat z) {
    bl_grow(block);

    block_attr_t *attr = &block->attr[block->len++];
    if (block->normal) {
        memcpy(attr->normal, CURRENT->normal, sizeof(GLfloat) * 3);
    }

    if (block->color) {
        memcpy(attr->color, CURRENT->color, sizeof(GLfloat) * 4);
    }

    for (int i = 0; i < MAX_TEX; i++) {
        if (block->tex[i]) {
            memcpy(attr->tex[i], CURRENT->tex[i], sizeof(GLfloat) * 4);
        }
    }

    GLfloat *vert = attr->vert;
    vert[0] = x;
    vert[1] = y;
    vert[2] = z;
}

void bl_track_color(block_t *block) {
    if (! block->color) {
        block->color = true;
        if (state.list.active) {
            block->incomplete.color = block->len - 1;
        } else {
            for (int i = 0; i < block->len; i++) {
                memcpy(block->attr[i].color, CURRENT->color, 4 * sizeof(GLfloat));
            }
        }
    }
}

void bl_track_normal(block_t *block) {
    if (! block->normal) {
        block->normal = true;
        if (state.list.active) {
            block->incomplete.normal = block->len - 1;
        } else {
            for (int i = 0; i < block->len; i++) {
                memcpy(block->attr[i].normal, CURRENT->normal, 3 * sizeof(GLfloat));
            }
        }
    }
}

void bl_track_tex(block_t *block, GLenum target) {
    target -= GL_TEXTURE0;
    if (! block->tex[target]) {
        block->tex[target] = true;
        if (state.list.active) {
            block->incomplete.tex[target] = block->len - 1;
        } else {
            for (int i = 0; i < block->len; i++) {
                memcpy(block->attr[i].tex[target], CURRENT->tex[target], 4 * sizeof(GLfloat));
            }
        }
    }
}

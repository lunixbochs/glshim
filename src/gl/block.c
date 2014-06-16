#include "gl.h"
#include "block.h"

#define alloc_sublist(n, type, cap) \
    (GLfloat *)malloc(n * gl_sizeof(type) * cap)

#define realloc_sublist(ref, n, type, cap) \
    if (ref)                         \
        ref = (GLfloat *)realloc(ref, n * gl_sizeof(type) * cap)

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
    q2t.cache = malloc(len * sizeof(GLushort));
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
    block->open = true;
    block->mode = mode;
    return block;
}

void bl_free(block_t *block) {
    free(block->vert);
    free(block->normal);
    free(block->color);
    free(block->tex);
    free(block->indices);
    free(block);
}

static inline void bl_grow(block_t *block) {
    if (block->len >= block->cap) {
        block->cap += DEFAULT_BLOCK_CAPACITY;
        // TODO: store list types on block and use block->types.vert, etc directly?
        realloc_sublist(block->vert, 2, GL_FLOAT, block->cap);
        realloc_sublist(block->normal, 3, GL_FLOAT, block->cap);
        realloc_sublist(block->color, 4, GL_FLOAT, block->cap);
        realloc_sublist(block->tex, 2, GL_FLOAT, block->cap);
    }
}

void bl_q2t(block_t *block) {
    if (!block->len || !block->vert || block->q2t) return;
    // TODO: split to multiple blocks if block->len > 65535

    // TODO: q2t on glDrawElements?
    // just set new_indices[i] = indices[q2t.cache[i]]
    if (block->indices)
        free(block->indices);

    q2t_calc(block->len);
    // TODO: just use q2t.cache when rendering sees block->q2t
    block->q2t = true;
    block->len *= 1.5;
    return;
}

void bl_end(block_t *block) {
    if (! block->open)
        return;

    block->open = false;
    // TODO: what about multitexturing?
    gltexture_t *bound = state.texture.bound;
    if (block->tex && bound && (bound->width != bound->nwidth || bound->height != bound->nheight)) {
        tex_coord_npot(block->tex, block->len, bound->width, bound->height, bound->nwidth, bound->nheight);
    }
    // TODO: how does multitexturing affect this?
    // GL_ARB_texture_rectangle
    if (block->tex && state.texture.rect_arb && bound) {
        tex_coord_rect_arb(block->tex, block->len, bound->width, bound->height);
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
    if (! block || block->len == 0)
        return;
    LOAD_GLES(glDrawArrays);
    LOAD_GLES(glDrawElements);

    glPushClientAttrib(GL_CLIENT_VERTEX_ARRAY_BIT);
#ifdef USE_ES2
    if (block->vert) {
        glEnableVertexAttribArray(0);
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, block->vert);
    }
    gles_glDrawArrays(block->mode, 0, block->len);
#else
    if (block->vert) {
        glEnableClientState(GL_VERTEX_ARRAY);
        glVertexPointer(3, GL_FLOAT, 0, block->vert);
    } else {
        glDisableClientState(GL_VERTEX_ARRAY);
    }

    if (block->normal) {
        glEnableClientState(GL_NORMAL_ARRAY);
        glNormalPointer(GL_FLOAT, 0, block->normal);
    } else {
        glDisableClientState(GL_NORMAL_ARRAY);
    }

    if (block->color) {
        glEnableClientState(GL_COLOR_ARRAY);
        glColorPointer(4, GL_FLOAT, 0, block->color);
    } else {
        glDisableClientState(GL_COLOR_ARRAY);
    }

    bool stipple = false;
    if (! block->tex) {
        // TODO: do we need to support GL_LINE_STRIP?
        if (block->mode == GL_LINES && state.enable.line_stipple) {
            stipple = true;
            glPushAttrib(GL_COLOR_BUFFER_BIT | GL_ENABLE_BIT | GL_TEXTURE_BIT);
            glEnable(GL_BLEND);
            glEnable(GL_TEXTURE_2D);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE);
            block->tex = gen_stipple_tex_coords(block->vert, block->len);
            bind_stipple_tex();
        } else if (state.enable.texgen_s || state.enable.texgen_t) {
            gen_tex_coords(block->vert, &block->tex, block->len);
        }
    }

    if (block->tex) {
        glEnableClientState(GL_TEXTURE_COORD_ARRAY);
        glTexCoordPointer(2, GL_FLOAT, 0, block->tex);
    } else {
        glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    }

    GLushort *indices = block->indices;
    // if glDrawElements or glArrayElement was used, we should have already updated block->indices with q2t
    if (block->q2t && !indices)
        indices = q2t.cache;

    if (indices) {
        gles_glDrawElements(block->mode, block->len, GL_UNSIGNED_SHORT, indices);
    } else {
        gles_glDrawArrays(block->mode, 0, block->len);
    }
    if (stipple) {
        glPopAttrib();
    }
#endif
    glPopClientAttrib();
}

void bl_vertex3f(block_t *block, GLfloat x, GLfloat y, GLfloat z) {
    if (block->vert == NULL) {
        block->vert = alloc_sublist(3, GL_FLOAT, block->cap);
    } else {
        bl_grow(block);
    }

    if (block->normal) {
        GLfloat *normal = block->normal + (block->len * 3);
        memcpy(normal, state.normal, sizeof(GLfloat) * 3);
    }

    if (block->color) {
        GLfloat *color = block->color + (block->len * 4);
        memcpy(color, state.color, sizeof(GLfloat) * 4);
    }

    if (block->tex) {
        GLfloat *tex = block->tex + (block->len * 2);
        memcpy(tex, block->last.tex, sizeof(GLfloat) * 2);
    }

    GLfloat *vert = block->vert + (block->len++ * 3);
    vert[0] = x;
    vert[1] = y;
    vert[2] = z;
}

void bl_normal3f(block_t *block, GLfloat x, GLfloat y, GLfloat z) {
    if (block->normal == NULL) {
        block->normal = alloc_sublist(3, GL_FLOAT, block->cap);
        // catch up
        int i;
        for (i = 0; i < block->len; i++) {
            GLfloat *normal = (block->normal + (i * 3));
            memcpy(normal, state.normal, sizeof(GLfloat) * 3);
        }
    }
}

void bl_color3f(block_t *block, GLfloat r, GLfloat g, GLfloat b, GLfloat a) {
    if (block->color == NULL) {
        block->color = alloc_sublist(4, GL_FLOAT, block->cap);
        // catch up
        int i;
        for (i = 0; i < block->len; i++) {
            GLfloat *color = (block->color + (i * 4));
            memcpy(color, state.color, sizeof(GLfloat) * 4);
        }
    }
}

void bl_tex_coord2f(block_t *block, GLfloat s, GLfloat t) {
    if (block->tex == NULL) {
        block->tex = alloc_sublist(2, GL_FLOAT, block->cap);
        // catch up
        GLfloat *tex = block->tex;
        for (int i = 0; i < block->len; i++) {
            // TODO: copy_sublist(block, GL_TYPE, size)?
            // what about the globals? gl_convert(list, GL_FLOAT, GL_UNSIGNED_CHAR)?
            // also need to consider the resulting number rescale
            memcpy(tex, block->last.tex, sizeof(GLfloat) * 2);
            tex += 2;
        }
    }
    GLfloat *tex = block->last.tex;
    tex[0] = s;
    tex[1] = t;
}

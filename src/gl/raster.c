#include "error.h"
#include "loader.h"
#include "pixel.h"
#include "raster.h"
#include "texture.h"
#include "matrix.h"

/* raster engine:
    we render pixels to memory somewhere
    until someone else wants to use the framebuffer
    then we throw 'em quickly into a texture, render to the whole screen
    then let the other function do their thing
*/


void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z) {
    ERROR_IN_BLOCK();
    PROXY_GLES(glRasterPos3f);
    GLfloat v[3] = {x, y, z};
    gl_transform_vertex(v, v);
    glWindowPos3f(v[0], v[1], v[2]);
}

void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z) {
    ERROR_IN_BLOCK();
    PROXY_GLES(glWindowPos3f);
    raster_state_t *raster = &state.raster;
    raster->pos.x = x;
    raster->pos.y = y;
    raster->pos.z = z;
    viewport_state_t *v = &state.viewport;
    if (x < v->x || x >= v->width || y < v->y || y >= v->height) {
        raster->valid = 0;
    } else {
        raster->valid = 1;
    }
    GLuint *dst = NULL;
    GLfloat *color = raster->color;
    if (pixel_convert(CURRENT->color, (GLvoid **)&dst, 1, 1, GL_RGBA, GL_FLOAT, GL_RGBA, GL_UNSIGNED_BYTE)) {
        memcpy(color, CURRENT->color, sizeof(GLfloat) * 4);
        raster->pixel = *dst;
        free(dst);
    } else {
        for (int i = 0; i < 4; i++) {
            color[i] = 1.0f;
        }
        raster->pixel = 0xFFFFFFFF;
    }
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
    PUSH_IF_COMPILING(glViewport);
    PROXY_GLES(glViewport);
    if (state.raster.buf) {
        render_raster();
    }
    if (width < 0 || height < 0) {
        ERROR(GL_INVALID_VALUE);
    }
    gles_glViewport(x, y, width, height);
    viewport_state_t *vp = &state.viewport;
    vp->x = x, vp->y = y;
    vp->width = width, vp->height = height;
    vp->nwidth = npot(width);
    vp->nheight = npot(height);
}

void init_raster() {
    viewport_state_t *vp = &state.viewport;
    if (!vp->width || !vp->height) {
        GLint tmp[4];
        glGetIntegerv(GL_VIEWPORT, tmp);
        vp->x = tmp[0], vp->y = tmp[1];
        vp->width = tmp[2], vp->height = tmp[3];
        vp->nwidth = npot(vp->width);
        vp->nheight = npot(vp->height);
    }
    if (! state.raster.buf) {
        state.raster.buf = (GLubyte *)malloc(4 * vp->nwidth * vp->nheight * sizeof(GLubyte));
    }
}

void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig,
              GLfloat xmove, GLfloat ymove, const GLubyte *bitmap) {
    PROXY_GLES(glBitmap);
    raster_state_t *raster = &state.raster;
    if (! raster->valid) {
        return;
    }
    // TODO: negative width/height mirrors bitmap?
    if (!width && !height) {
        raster->pos.x += xmove;
        raster->pos.y -= ymove;
        return;
    }
    init_raster();

    const GLubyte *from;
    GLuint *to;
    int x, y;

    // copy to pixel data
    // TODO: strip blank lines and mirror vertically?
    for (y = 0; y < height; y++) {
        to = (GLuint *)raster->buf + (GLuint)(raster->pos.x + ((raster->pos.y - y) * state.viewport.nwidth));
        from = bitmap + (y * 2);
        for (x = 0; x < width; x += 8) {
            if (raster->pos.x + x > state.viewport.width || raster->pos.y - y > state.viewport.height)
                continue;

            GLubyte b = *from++;
            for (int j = 8; j--; ) {
                *to++ = (b & (1 << j)) ? raster->pixel : 0;
            }
        }
    }

    raster->pos.x += xmove;
    raster->pos.y += ymove;
}

void glDrawPixels(GLsizei width, GLsizei height, GLenum format,
                  GLenum type, const GLvoid *data) {
    raster_state_t *raster = &state.raster;
    if (! raster->valid) {
        return;
    }
    const GLubyte *from, *pixels = data;
    GLubyte *to;
    GLvoid *dst = NULL;

    PROXY_GLES(glDrawPixels);

    init_raster();
    if (! pixel_convert(data, &dst, width, height,
                        format, type, GL_RGBA, GL_UNSIGNED_BYTE)) {
        return;
    }
    pixels = (GLubyte *)dst;

    // shrink our pixel ranges to stay inside the viewport
    int ystart = MAX(0, -raster->pos.y);
    height = MIN(raster->pos.y, height);

    int xstart = MAX(0, -raster->pos.x);
    int screen_width = MIN(state.viewport.width - raster->pos.x, width);

    for (int y = ystart; y < height; y++) {
        to = raster->buf + 4 * (GLuint)(raster->pos.x + ((raster->pos.y - y) * state.viewport.nwidth));
        from = pixels + 4 * (xstart + y * width);
        memcpy(to, from, 4 * screen_width);
    }
    if (pixels != data)
        free((void *)pixels);
}

void render_raster() {
    if (!state.viewport.width || !state.viewport.height || !state.raster.buf)
        return;

// FIXME
#ifndef USE_ES2
    glPushAttrib(GL_TEXTURE_BIT | GL_ENABLE_BIT);
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    GLfloat vert[] = {
        -1, -1, 0,
        1, -1, 0,
        1, 1, 0,
        -1, 1, 0,
    };

    float sw = state.viewport.width / (GLfloat)state.viewport.nwidth;
    float sh = state.viewport.height / (GLfloat)state.viewport.nheight;

    GLfloat tex[] = {
        0, sh,
        sw, sh,
        sw, 0,
        0, 0,
    };

    glPushClientAttrib(GL_CLIENT_VERTEX_ARRAY_BIT | GL_CLIENT_PIXEL_STORE_BIT);
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, vert);
    glTexCoordPointer(2, GL_FLOAT, 0, tex);

    glEnable(GL_BLEND);
    glEnable(GL_TEXTURE_2D);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE);

    GLuint texture;
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);

    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
    glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, state.viewport.nwidth, state.viewport.nheight,
                 0, GL_RGBA, GL_UNSIGNED_BYTE, state.raster.buf);

    LOAD_GLES(glDrawArrays);
    gles_glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
    glDeleteTextures(1, &texture);

    glDisable(GL_BLEND);
    glDisable(GL_TEXTURE_2D);
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glPopClientAttrib();

    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glPopAttrib();
#endif
    free(state.raster.buf);
    state.raster.buf = NULL;
}

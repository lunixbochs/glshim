#include "zgl.h"

void tglViewport(GLint x, GLint y, GLint width, GLint height) {
    GLContext *c = gl_get_context();
    int xsize, ysize, xmin, ymin, xsize_req, ysize_req;

    xmin = x;
    ymin = y;
    xsize = width;
    ysize = height;

    /* we may need to resize the zbuffer */

    if (c->viewport.xmin != xmin ||
            c->viewport.ymin != ymin ||
            c->viewport.xsize != xsize ||
            c->viewport.ysize != ysize) {

        xsize_req = xmin + xsize;
        ysize_req = ymin + ysize;

        if (c->gl_resize_viewport && c->gl_resize_viewport(c, &xsize_req, &ysize_req) != 0) {
            fprintf(stderr, "glViewport: error while resizing display");
        }

        xsize = xsize_req - xmin;
        ysize = ysize_req - ymin;
        if (xsize <= 0 || ysize <= 0) {
            fprintf(stderr, "glViewport: size too small");
        }

        c->viewport.xmin  = xmin;
        c->viewport.ymin  = ymin;
        c->viewport.xsize = xsize;
        c->viewport.ysize = ysize;

        c->viewport.updated = 1;
    }
}


void tglShadeModel(GLenum mode) {
    GLContext *c = gl_get_context();
    assert(mode == GL_FLAT || mode == GL_SMOOTH);
    c->current_shade_model = mode;
}

void tglCullFace(GLenum mode) {
    GLContext *c = gl_get_context();
    assert(mode == GL_BACK || mode == GL_FRONT || mode == GL_FRONT_AND_BACK);
    c->current_cull_face = mode;
}

void tglFrontFace(GLenum mode) {
    GLContext *c = gl_get_context();
    assert(mode == GL_CCW || mode == GL_CW);
    c->current_front_face = (mode != GL_CCW);
}

void tglPolygonMode(GLenum face, GLenum mode) {
    GLContext *c = gl_get_context();
    assert(face == GL_BACK || face == GL_FRONT || face == GL_FRONT_AND_BACK);
    assert(mode == GL_POINT || mode == GL_LINE || mode == GL_FILL);

    switch(face) {
        case GL_BACK:
            c->polygon_mode_back = mode;
            break;
        case GL_FRONT:
            c->polygon_mode_front = mode;
            break;
        case GL_FRONT_AND_BACK:
            c->polygon_mode_front = mode;
            c->polygon_mode_back = mode;
            break;
        default:
            assert(0);
    }
}

void tglHint(GLenum target, GLenum mode) {
#if 0
    int target = p[1].i;
    int mode = p[2].i;

    /* do nothing */
#endif
}

void tglPolygonOffset(GLfloat factor, GLfloat units) {
    GLContext *c = gl_get_context();
    c->offset.factor = factor;
    c->offset.units = units;
}

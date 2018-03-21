#include "zgl.h"

// TODO: do something with this
const GLubyte *tglGetString(GLenum name) {
    return (GLubyte *)"";
}

void tglGetIntegerv(GLenum pname, GLint *params) {
    GLContext *c = gl_get_context();

    switch(pname) {
        case GL_VIEWPORT:
            params[0] = c->viewport.xmin;
            params[1] = c->viewport.ymin;
            params[2] = c->viewport.xsize;
            params[3] = c->viewport.ysize;
            break;
        case GL_MAX_MODELVIEW_STACK_DEPTH:
            *params = MAX_MODELVIEW_STACK_DEPTH;
            break;
        case GL_MAX_PROJECTION_STACK_DEPTH:
            *params = MAX_PROJECTION_STACK_DEPTH;
            break;
        case GL_MAX_LIGHTS:
            *params = MAX_LIGHTS;
            break;
        case GL_MAX_TEXTURE_SIZE:
            *params = 256; /* not completely true, but... */
            break;
        case GL_MAX_TEXTURE_STACK_DEPTH:
            *params = MAX_TEXTURE_STACK_DEPTH;
            break;
        default:
            *params = 0;
            fprintf(stderr, "glGet: option not implemented: %x\n", pname);
            break;
    }
}

void tglGetFloatv(GLenum pname, GLfloat *v) {
    int i;
    GLContext *c = gl_get_context();
    switch (pname) {
        case GL_LINE_WIDTH:
            *v = 1.0f;
            break;
        case GL_LINE_WIDTH_RANGE:
            v[0] = v[1] = 1.0f;
            break;
        case GL_POINT_SIZE:
            *v = 1.0f;
            break;
        case GL_POINT_SIZE_RANGE:
            v[0] = v[1] = 1.0f;
        default:
            fprintf(stderr, "warning: unknown pname in tglGetFloatv(): %x\n", pname);
            break;
    }
}

void tglGetBooleanv(GLenum pname, GLboolean *v) {
    fprintf(stderr, "warning: unknown pname in tglGetBooleanv(): %x\n", pname);
}

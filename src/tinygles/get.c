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
    int mnr = 0; /* just a trick to return the correct matrix */
    GLContext *c = gl_get_context();
    switch (pname) {
        case GL_CURRENT_COLOR: {
            GLfloat *color = c->current.color.v;
            *v++ = *color++;
            *v++ = *color++;
            *v++ = *color++;
            *v++ = *color++;
            break;
        }
        case GL_CURRENT_NORMAL: {
            GLfloat *normal = c->current.normal.v;
            *v++ = *normal++;
            *v++ = *normal++;
            *v++ = *normal++;
            break;
        }
        case GL_CURRENT_TEXTURE_COORDS: {
            GLfloat *tex_coord = c->current.tex_coord.v;
            *v++ = *tex_coord++;
            *v++ = *tex_coord++;
            *v++ = *tex_coord++;
            *v++ = *tex_coord++;
            break;
        }
        case GL_TEXTURE_MATRIX:
            mnr++;
        case GL_PROJECTION_MATRIX:
            mnr++;
        case GL_MODELVIEW_MATRIX:
            {
                float *p = &c->matrix.stack_ptr[mnr]->m[0][0];
                for (i = 0; i < 4; i++) {
                    *v++ = p[0];
                    *v++ = p[4];
                    *v++ = p[8];
                    *v++ = p[12];
                    p++;
                }
            }
            break;
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

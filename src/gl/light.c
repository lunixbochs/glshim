#include "error.h"
#include "gl_str.h"
#include "light.h"
#include "list.h"
#include "loader.h"
#include "matrix.h"
#include "remote.h"

#ifndef USE_ES2
void glLightModelf(GLenum pname, GLfloat param) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glLightModelf);
    LOAD_GLES(glLightModelf);
    switch (pname) {
        case GL_LIGHT_MODEL_AMBIENT:
        case GL_LIGHT_MODEL_TWO_SIDE:
            gles_glLightModelf(pname, param);
        default:
            fprintf(stderr, "stubbed glLightModelf(%s, %.2f)\n", gl_str(pname), param);
            break;
    }
}

void glMaterialfv(GLenum face, GLenum pname, const GLfloat *params) {
    if (state.list.active) {
        int len = 0;
        switch (pname) {
            case GL_AMBIENT_AND_DIFFUSE:
            case GL_AMBIENT:
            case GL_DIFFUSE:
            case GL_EMISSION:
            case GL_SPECULAR:
                len = 4;
                break;
            case GL_COLOR_INDEXES:
                len = 3;
                break;
            case GL_SHININESS:
                len = 1;
                break;
            default:
                fprintf(stderr, "Warning: unknown glMaterialfv() pname=0x%x\n", pname);
                return;
        }
        params = dl_retain(state.list.active, params, len * sizeof(GLfloat));
    }
    PUSH_IF_COMPILING(glMaterialfv);
    LOAD_GLES(glMaterialfv);
    gles_glMaterialfv(GL_FRONT_AND_BACK, pname, params);
}

void glLightfv(GLenum light, GLenum pname, const GLfloat *params) {
    ERROR_IN_BLOCK();
    GLfloat tmp[4];
    if (state.list.active) {
        int len = 0;
        switch (pname) {
            case GL_AMBIENT:
            case GL_DIFFUSE:
            case GL_SPECULAR:
            case GL_POSITION:
                len = 4;
                break;
            case GL_SPOT_DIRECTION:
                len = 3;
                break;
            case GL_SPOT_EXPONENT:
            case GL_SPOT_CUTOFF:
            case GL_CONSTANT_ATTENUATION:
            case GL_LINEAR_ATTENUATION:
            case GL_QUADRATIC_ATTENUATION:
                len = 1;
                break;
            default:
                fprintf(stderr, "Warning: unknown glLightfv() pname=0x%x\n", pname);
                return;
        }
        params = dl_retain(state.list.active, params, len * sizeof(GLfloat));
    }
    PUSH_IF_COMPILING(glLightfv);
    LOAD_GLES(glLightfv);
#ifdef LOCAL_MATRIX
    switch (pname) {
        case GL_POSITION:
            gl_transform_light(tmp, params);
            params = tmp;
        default:
            gles_glLightfv(light, pname, params);
            break;
    }
#else
    gles_glLightfv(light, pname, params);
#endif
}

void glFogfv(GLenum pname, const GLfloat *params) {
    params = dl_retain(state.list.active, params, gl_fogv_length(pname) * sizeof(GLfloat));
    PUSH_IF_COMPILING(glFogfv);
    PROXY_GLES(glFogfv);
}

#endif

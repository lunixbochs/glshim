#include <GL/gl.h>

#include "gl_helpers.h"
#include "loader.h"
#include "matrix.h"

// config functions
const GLubyte *glGetString(GLenum name) {
    LOAD_GLES(glGetString);
    switch (name) {
        case GL_VERSION:
#ifdef USE_ES2
            return (GLubyte *)"4.3 glshim wrapper";
#else
            return (GLubyte *)"1.4 glshim wrapper";
#endif
        case GL_EXTENSIONS:
            return (const GLubyte *)(char *){
#ifndef USE_ES2
                // "GL_ARB_vertex_buffer_object "
                "GL_ARB_multitexture "
                "GL_ARB_texture_cube_map "
                "GL_EXT_secondary_color "
                "GL_EXT_texture_env_combine "
                "GL_EXT_texture_env_dot3 "
#else
                "GL_ARB_vertex_shader "
                "GL_ARB_fragment_shader "
                "GL_ARB_vertex_buffer_object "
                "GL_EXT_framebuffer_object "
#endif
            };
        default:
            return gles_glGetString(name);
    }
}

static void gl_get(GLenum pname, GLenum type, GLvoid *params) {
    LOAD_GLES(glGetBooleanv);
    LOAD_GLES(glGetFloatv);
    LOAD_GLES(glGetIntegerv);


    int width = 1;
    switch (pname) {
        // GL_BOOL
        case GL_CURRENT_RASTER_POSITION_VALID:
        {
            GLboolean tmp[4];
            GLboolean *out = tmp;
            if (type == GL_BOOL) {
                out = params;
            }
            switch (pname) {
                case GL_CURRENT_RASTER_POSITION_VALID:
                    *out = state.raster.valid;
                    break;
            }
            if (type != GL_BOOL) {
                for (int i = 0; i < width; i++) {
                    if (type == GL_INT) {
                        GLint *ret = params;
                        ret[i] = out[i];
                    } else if (type == GL_FLOAT) {
                        GLfloat *ret = params;
                        ret[i] = out[i];
                    }
                }
            }
            break;
        }
        // GL_FLOAT
        case GL_CURRENT_RASTER_COLOR:
        case GL_CURRENT_RASTER_POSITION:
        case GL_MODELVIEW_MATRIX:
        case GL_PROJECTION_MATRIX:
        case GL_TEXTURE_MATRIX:
        {
            bool scale = false;
            GLfloat tmp[4];
            GLfloat *out = tmp;
            if (type == GL_FLOAT) {
                out = params;
            }
            switch (pname) {
                case GL_CURRENT_RASTER_COLOR:
                    width = 4;
                    memcpy(out, &state.raster.color, sizeof(GLfloat) * 4);
                    break;
                case GL_CURRENT_RASTER_POSITION:
                    width = 4;
                    memcpy(out, &state.raster.pos, sizeof(GLfloat) * 4);
                    break;
                case GL_MODELVIEW_MATRIX:
                    width = 4;
                    gl_get_matrix(GL_MODELVIEW, out);
                    break;
                case GL_PROJECTION_MATRIX:
                    width = 4;
                    gl_get_matrix(GL_PROJECTION, out);
                    break;
                case GL_TEXTURE_MATRIX:
                    width = 4;
                    gl_get_matrix(GL_TEXTURE, out);
                    break;
            }
            if (type != GL_FLOAT) {
                for (int i = 0; i < width; i++) {
                    if (type == GL_INT) {
                        GLint *ret = params;
                        if (scale) {
                            ret[i] = out[i] * gl_max_value(type);
                        } else {
                            ret[i] = out[i];
                        }
                    } else if (type == GL_BOOL) {
                        GLboolean *ret = params;
                        ret[i] = !! out[i];
                    }
                }
            }
            break;
        }
        // GL_INT
        case GL_AUX_BUFFERS:
        case GL_MAX_ELEMENTS_INDICES:
        {
            GLint tmp[4];
            GLint *out = tmp;
            if (type == GL_INT) {
                out = params;
            }
            switch (pname) {
                case GL_MAX_ELEMENTS_INDICES:
                    *out = 65535;
                    break;
                case GL_AUX_BUFFERS:
                    *out = 0;
                    break;
            }
            if (type != GL_INT) {
                for (int i = 0; i < width; i++) {
                    if (type == GL_FLOAT) {
                        GLfloat *ret = params;
                        ret[i] = out[i];
                    } else if (type == GL_BOOL) {
                        GLboolean *ret = params;
                        ret[i] = !! out[i];
                    }
                }
            }
            break;
        }
        default:
            switch (type) {
                case GL_BOOL:
                    return glGetBooleanv(pname, params);
                case GL_FLOAT:
                    return glGetFloatv(pname, params);
                case GL_INT:
                    return glGetIntegerv(pname, params);
            }
            break;
    }
}

void glGetBooleanv(GLenum pname, GLboolean *params) {
    gl_get(pname, GL_BOOL, params);
}

void glGetFloatv(GLenum pname, GLfloat *params) {
    gl_get(pname, GL_FLOAT, params);
}

void glGetIntegerv(GLenum pname, GLint *params) {
    gl_get(pname, GL_INT, params);
}

/*
void glGetFixedv(GLenum pname, GLfloat *params) {
    // meh
}
*/

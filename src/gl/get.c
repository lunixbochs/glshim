#include <GL/gl.h>

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

void glGetIntegerv(GLenum pname, GLint *params) {
    LOAD_GLES(glGetIntegerv);
    switch (pname) {
        case GL_MAX_ELEMENTS_INDICES:
            *params = 65535;
            break;
        case GL_AUX_BUFFERS:
            *params = 0;
            break;
        default:
            gles_glGetIntegerv(pname, params);
    }
}

void glGetFloatv(GLenum pname, GLfloat *params) {
    LOAD_GLES(glGetFloatv);
    switch (pname) {
        case GL_MODELVIEW_MATRIX:
            gl_get_matrix(GL_MODELVIEW, params);
            break;
        case GL_PROJECTION_MATRIX:
            gl_get_matrix(GL_PROJECTION, params);
            break;
        case GL_TEXTURE_MATRIX:
            gl_get_matrix(GL_TEXTURE, params);
            break;
        default:
            gles_glGetFloatv(pname, params);
    }
}

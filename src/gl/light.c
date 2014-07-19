#include "gl_str.h"
#include "light.h"
#include "loader.h"

#ifndef USE_ES2
void glLightModelf(GLenum pname, GLfloat param) {
    LOAD_GLES(glLightModelf);
    switch (pname) {
        case GL_LIGHT_MODEL_AMBIENT:
        case GL_LIGHT_MODEL_TWO_SIDE:
            gles_glLightModelf(pname, param);
        default:
            printf("stubbed glLightModelf(%s, %.2f)\n", gl_str(pname), param);
            break;
    }
}
#endif

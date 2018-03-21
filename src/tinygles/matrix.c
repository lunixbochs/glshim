#include "zgl.h"

void tgl_matrix_set(int mode, mat4 *m) {
    GLContext *c = gl_get_context();
    switch (mode) {
        case GL_MODELVIEW:
            c->matrix.model_view = *m;
            c->matrix.model_projection_updated = 1;
            break;
        case GL_PROJECTION:
            mode = 1;
            c->matrix.projection = *m;
            c->matrix.model_projection_updated = 1;
            break;
        case GL_TEXTURE:
            c->matrix.texture = *m;
            mode = 2;
            break;
        default:
            assert(0);
    }
}

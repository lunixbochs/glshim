#include "loader.h"
#include "matrix.h"
#include "types.h"
#include "vectorial/simd4f.h"
#include "vectorial/simd4x4f.h"

#define CURRENT_MATRIX_MODE state.matrix.mode ? state.matrix.mode : GL_MODELVIEW

#ifdef LOCAL_MATRIX
// helper functions
static matrix_state_t *get_matrix_state(GLenum mode) {
    matrix_state_t *m;
    switch (mode) {
        case GL_MODELVIEW:
            m = &state.matrix.model;
            break;
        case GL_PROJECTION:
            m = &state.matrix.projection;
            break;
        case GL_TEXTURE:
            m = &state.matrix.texture;
            break;
    /* defined in ARB_imaging extension
        case GL_COLOR:
            m = &state.matrix.color;
            break;
    */
    }

    if (! m->init) {
        simd4x4f_identity(&m->matrix);
        m->init = true;
    }
    return m;
}

static simd4x4f *get_matrix(GLenum mode) {
    return &get_matrix_state(mode)->matrix;
}

static simd4x4f *get_current_matrix() {
    return get_matrix(CURRENT_MATRIX_MODE);
}

static matrix_state_t *get_current_state() {
    return get_matrix_state(CURRENT_MATRIX_MODE);
}

// GL matrix functions
void glLoadIdentity() {
    PUSH_IF_COMPILING(glLoadIdentity);
    simd4x4f_identity(get_current_matrix());
}

void glLoadMatrixf(const GLfloat *m) {
    PUSH_IF_COMPILING(glLoadMatrixf);
    simd4x4f_uload(get_current_matrix(), m);
}

void glMatrixMode(GLenum mode) {
    PUSH_IF_COMPILING(glMatrixMode);
    state.matrix.mode = mode;
}

void glMultMatrixf(const GLfloat *m) {
    PUSH_IF_COMPILING(glMultMatrixf);
    simd4x4f out, load, *cur = get_current_matrix();
    simd4x4f_uload(&load, m);
    simd4x4f_matrix_mul(cur, &load, &out);
    *cur = out;
}

void glPopMatrix() {
    PUSH_IF_COMPILING(glPopMatrix);
    matrix_state_t *m = get_current_state();
    simd4x4f *top = tack_pop(&m->stack);
    if (top != NULL) {
        m->matrix = *top;
        free(top);
    }
}

void glPushMatrix() {
    PUSH_IF_COMPILING(glPushMatrix);
    matrix_state_t *m = get_current_state();
    simd4x4f *push = malloc(sizeof(simd4x4f));
    *push = m->matrix;
    tack_push(&m->stack, push);
}

// GL transform functions
void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    PUSH_IF_COMPILING(glRotatef);
    float radians = angle * VECTORIAL_PI / 180;
    simd4x4f *m = get_current_matrix(), rotate, out;
    simd4x4f_axis_rotation(&rotate, radians, simd4f_create(x, y, z, 1.0f));
    simd4x4f_matrix_mul(m, &rotate, &out);
    *m = out;
}

void glScalef(GLfloat x, GLfloat y, GLfloat z) {
    PUSH_IF_COMPILING(glScalef);
    simd4x4f *m = get_current_matrix(), scale, out;
    simd4x4f_scaling(&scale, x, y, z);
    simd4x4f_matrix_mul(m, &scale, &out);
    *m = out;
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z) {
    PUSH_IF_COMPILING(glTranslatef);
    simd4x4f *m = get_current_matrix(), translate, out;
    simd4x4f_translation(&translate, x, y, z);
    simd4x4f_matrix_mul(m, &translate, &out);
    *m = out;
}

void glOrthof(GLfloat left, GLfloat right,
              GLfloat bottom, GLfloat top,
              GLfloat near, GLfloat far) {
    PUSH_IF_COMPILING(glOrthof);
    simd4x4f *m = get_current_matrix(), ortho, out;
    simd4x4f_ortho(&ortho, left, right, bottom, top, near, far);
    simd4x4f_matrix_mul(m, &ortho, &out);
    *m = out;
}

void glFrustumf(GLfloat left, GLfloat right,
                GLfloat bottom, GLfloat top,
                GLfloat near, GLfloat far) {
    PUSH_IF_COMPILING(glFrustumf);
    simd4x4f *m = get_current_matrix(), frustum, out;
    simd4x4f_frustum(&frustum, left, right, bottom, top, near, far);
    simd4x4f_matrix_mul(m, &frustum, &out);
    *m = out;
}

void gl_get_matrix(GLenum mode, GLfloat *out) {
    simd4x4f_ustore(get_matrix(mode), out);
}

void gl_transform_vertex(GLfloat out[3], GLfloat in[3]) {
    simd4x4f *model = get_matrix(GL_MODELVIEW);
    simd4x4f *projection = get_matrix(GL_PROJECTION);
    simd4x4f mvp;

    simd4x4f_matrix_mul(projection, model, &mvp);
    simd4f vert = simd4f_create(in[0], in[1], in[2], 1);
    simd4f tmp;

    simd4x4f_matrix_vector_mul(&mvp, &vert, &tmp);
    simd4f_ustore3(tmp, out);
}

#endif

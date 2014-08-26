#include "error.h"
#include "loader.h"
#include "matrix.h"
#include "types.h"
#include "vectorial/simd4f.h"
#include "vectorial/simd4x4f.h"

#ifdef LOCAL_MATRIX
#define PROXY_MATRIX(name)
#else
#define PROXY_MATRIX(name) PROXY_GLES(name)
#endif

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
            m = &state.matrix.texture[state.texture.client];
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

static void transpose(GLfloat *out, const GLfloat *m) {
    simd4x4f tmp;
    simd4x4f_uload(&tmp, m);
    simd4x4f_transpose_inplace(&tmp);
    simd4x4f_ustore(&tmp, out);
}

static bool mvp_dirty = true;
static simd4x4f mvp;

static simd4x4f *get_matrix(GLenum mode) {
    return &get_matrix_state(mode)->matrix;
}

static simd4x4f *get_current_matrix() {
    return get_matrix(state.matrix.mode);
}

static matrix_state_t *get_current_state() {
    return get_matrix_state(state.matrix.mode);
}

static void update_mvp() {
    simd4x4f *model = get_matrix(GL_MODELVIEW);
    simd4x4f *projection = get_matrix(GL_PROJECTION);
    simd4x4f_matrix_mul(projection, model, &mvp);
    mvp_dirty = false;
}

static void upload_matrix() {
    LOAD_GLES(glLoadMatrixf);
    GLfloat tmp[16];
    simd4x4f_ustore(get_current_matrix(), tmp);
    gles_glLoadMatrixf(tmp);
}

// GL matrix functions
void glLoadIdentity() {
    PUSH_IF_COMPILING(glLoadIdentity);
    ERROR_IN_BLOCK();
    mvp_dirty = true;
    simd4x4f_identity(get_current_matrix());
    PROXY_MATRIX(glLoadIdentity);
}

void glLoadMatrixf(const GLfloat *m) {
    PUSH_IF_COMPILING(glLoadMatrixf);
    ERROR_IN_BLOCK();
    mvp_dirty = true;
    simd4x4f_uload(get_current_matrix(), m);
    PROXY_MATRIX(glLoadMatrixf);
}

void glLoadTransposeMatrixf(const GLfloat *m) {
    PUSH_IF_COMPILING(glLoadTransposeMatrixf);
    ERROR_IN_BLOCK();
    GLfloat tmp[16];
    transpose(tmp, m);
    glLoadMatrixf(tmp);
}

void glMatrixMode(GLenum mode) {
    PUSH_IF_COMPILING(glMatrixMode);
    ERROR_IN_BLOCK();
    switch (mode) {
        case GL_MODELVIEW:
        case GL_PROJECTION:
        case GL_TEXTURE:
        case GL_COLOR:
            break;
        default:
            ERROR(GL_INVALID_ENUM);
    }
    state.matrix.mode = mode;
    PROXY_MATRIX(glMatrixMode);
}

void glMultMatrixf(const GLfloat *m) {
    PUSH_IF_COMPILING(glMultMatrixf);
    ERROR_IN_BLOCK();
    mvp_dirty = true;
    simd4x4f out, load, *cur = get_current_matrix();
    simd4x4f_uload(&load, m);
    simd4x4f_matrix_mul(cur, &load, &out);
    *cur = out;
    upload_matrix();
}

void glMultTransposeMatrixf(const GLfloat *m) {
    PUSH_IF_COMPILING(glMultTransposeMatrixf);
    ERROR_IN_BLOCK();
    GLfloat tmp[16];
    transpose(tmp, m);
    glMultMatrixf(tmp);
}

void glPopMatrix() {
    PUSH_IF_COMPILING(glPopMatrix);
    ERROR_IN_BLOCK();
    mvp_dirty = true;
    matrix_state_t *m = get_current_state();
    simd4x4f *top = tack_pop(&m->stack);
    if (top == NULL) {
       ERROR(GL_STACK_UNDERFLOW);
    }
    m->matrix = *top;
    free(top);
    upload_matrix();
}

void glPushMatrix() {
    PUSH_IF_COMPILING(glPushMatrix);
    ERROR_IN_BLOCK();
    matrix_state_t *m = get_current_state();
    simd4x4f *push = malloc(sizeof(simd4x4f));
    *push = m->matrix;
    tack_push(&m->stack, push);
}

// GL transform functions
void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    PUSH_IF_COMPILING(glRotatef);
    ERROR_IN_BLOCK();
    mvp_dirty = true;
    float radians = angle * VECTORIAL_PI / 180;
    simd4x4f *m = get_current_matrix(), rotate, out;
    simd4x4f_axis_rotation(&rotate, radians, simd4f_create(x, y, z, 1.0f));
    simd4x4f_matrix_mul(m, &rotate, &out);
    *m = out;
    upload_matrix();
}

void glScalef(GLfloat x, GLfloat y, GLfloat z) {
    PUSH_IF_COMPILING(glScalef);
    ERROR_IN_BLOCK();
    mvp_dirty = true;
    simd4x4f *m = get_current_matrix(), scale, out;
    simd4x4f_scaling(&scale, x, y, z);
    simd4x4f_matrix_mul(m, &scale, &out);
    *m = out;
    upload_matrix();
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z) {
    PUSH_IF_COMPILING(glTranslatef);
    ERROR_IN_BLOCK();
    mvp_dirty = true;
    simd4x4f *m = get_current_matrix(), translate, out;
    simd4x4f_translation(&translate, x, y, z);
    simd4x4f_matrix_mul(m, &translate, &out);
    *m = out;
    upload_matrix();
}

void glOrthof(GLfloat left, GLfloat right,
              GLfloat bottom, GLfloat top,
              GLfloat near, GLfloat far) {
    PUSH_IF_COMPILING(glOrthof);
    ERROR_IN_BLOCK();
    if (left == right || bottom == top || near == far) {
        ERROR(GL_INVALID_VALUE);
    }
    mvp_dirty = true;
    simd4x4f *m = get_current_matrix(), ortho, out;
    simd4x4f_ortho(&ortho, left, right, bottom, top, near, far);
    simd4x4f_matrix_mul(m, &ortho, &out);
    *m = out;
    upload_matrix();
}

void glFrustumf(GLfloat left, GLfloat right,
                GLfloat bottom, GLfloat top,
                GLfloat near, GLfloat far) {
    PUSH_IF_COMPILING(glFrustumf);
    ERROR_IN_BLOCK();
    if (near < 0 || far < 0 || left == right || bottom == top || near == far) {
        ERROR(GL_INVALID_VALUE);
    }
    mvp_dirty = true;
    simd4x4f *m = get_current_matrix(), frustum, out;
    simd4x4f_frustum(&frustum, left, right, bottom, top, near, far);
    simd4x4f_matrix_mul(m, &frustum, &out);
    *m = out;
    upload_matrix();
}

void gl_get_matrix(GLenum mode, GLfloat *out) {
    simd4x4f_ustore(get_matrix(mode), out);
}

void gl_transform_light(GLfloat out[4], const GLfloat in[4]) {
    simd4x4f *model = get_matrix(GL_MODELVIEW);
    simd4f coord = simd4f_create(in[0], in[1], in[2], in[3]);
    simd4f tmp;
    simd4x4f_matrix_vector_mul(model, &coord, &tmp);
    simd4f_ustore4(coord, out);
}

void gl_transform_texture(GLenum texture, GLfloat out[2], const GLfloat in[2]) {
    matrix_state_t *unit = &state.matrix.texture[texture - GL_TEXTURE0];
    if (! unit->init) {
        out[0] = in[0];
        out[1] = in[1];
    } else {
        simd4f coord = simd4f_create(in[0], in[1], 0.0f, 1.0f);
        simd4f tmp;
        simd4x4f_matrix_vector_mul(&unit->matrix, &coord, &tmp);
        simd4f_ustore2(coord, out);
    }
}

void gl_transform_vertex(GLfloat out[3], GLfloat in[3]) {
    if (mvp_dirty) {
        update_mvp();
    }
    simd4f tmp, vert = simd4f_create(in[0], in[1], in[2], 1);
    simd4x4f_matrix_vector_mul(&mvp, &vert, &tmp);
    tmp = simd4f_div(tmp, simd4f_splat_w(tmp));
    simd4f_ustore3(tmp, out);
}

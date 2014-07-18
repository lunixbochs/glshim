#define GLM_FORCE_RADIANS

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

extern "C" {

#include "loader.h"
#include "matrix.h"
#include "types.h"

#define CURRENT_MATRIX_MODE state.matrix.mode ? state.matrix.mode : GL_MODELVIEW

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

    if (! m->matrix) {
        glm::mat4 *matrix = new glm::mat4();
        m->matrix = static_cast<void *>(matrix);
    }
    return m;
}

static glm::mat4 *get_matrix(GLenum mode) {
    matrix_state_t *state = get_matrix_state(mode);
    return static_cast<glm::mat4 *>(state->matrix);
}

static glm::mat4 *get_current_matrix() {
    return get_matrix(CURRENT_MATRIX_MODE);
}

static matrix_state_t *get_current_state() {
    return get_matrix_state(CURRENT_MATRIX_MODE);
}

// GL matrix functions
void glLoadIdentity() {
    PUSH_IF_COMPILING(glLoadIdentity);
    *get_current_matrix() = glm::mat4();
}

void glLoadMatrixf(const GLfloat *m) {
    PUSH_IF_COMPILING(glLoadMatrixf);
    *get_current_matrix() = glm::make_mat4(m);
}

void glMatrixMode(GLenum mode) {
    PUSH_IF_COMPILING(glMatrixMode);
    state.matrix.mode = mode;
}

void glMultMatrixf(const GLfloat *m) {
    PUSH_IF_COMPILING(glMultMatrixf);
    *get_current_matrix() *= glm::make_mat4(m);
}

void glPopMatrix() {
    PUSH_IF_COMPILING(glPopMatrix);
    matrix_state_t *m = get_current_state();
    void *top = tack_pop(&m->stack);
    if (top != NULL) {
        delete static_cast<glm::mat4 *>(m->matrix);
        m->matrix = top;
    }
}

void glPushMatrix() {
    PUSH_IF_COMPILING(glPushMatrix);
    matrix_state_t *m = get_current_state();
    glm::mat4 *matrix = new glm::mat4(*static_cast<glm::mat4 *>(m->matrix));
    tack_push(&m->stack, static_cast<void *>(matrix));
}

// GL transform functions
void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    PUSH_IF_COMPILING(glRotatef);
    glm::mat4 *m = get_current_matrix();
    *m = glm::rotate(*m, glm::radians(angle), glm::vec3(x, y, z));
}

void glScalef(GLfloat x, GLfloat y, GLfloat z) {
    PUSH_IF_COMPILING(glScalef);
    glm::mat4 *m = get_current_matrix();
    *m = glm::scale(*m, glm::vec3(x, y, z));
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z) {
    PUSH_IF_COMPILING(glTranslatef);
    glm::mat4 *m = get_current_matrix();
    *m = glm::translate(*m, glm::vec3(x, y, z));
}

void glOrthof(GLfloat left, GLfloat right,
              GLfloat bottom, GLfloat top,
              GLfloat near, GLfloat far) {
    PUSH_IF_COMPILING(glOrthof);
    *get_current_matrix() *= glm::ortho(left, right, bottom, top, near, far);
}

void glFrustumf(GLfloat left, GLfloat right,
                GLfloat bottom, GLfloat top,
                GLfloat near, GLfloat far) {
    PUSH_IF_COMPILING(glFrustumf);
    *get_current_matrix() *= glm::frustum(left, right, bottom, top, near, far);
}

void gl_get_matrix(GLenum mode, GLfloat *out) {
    memcpy(out, glm::value_ptr(*get_matrix(mode)), sizeof(GLfloat) * 16);
}

void gl_transform_vertex(GLfloat out[3], GLfloat in[3]) {
    glm::mat4 *model = get_matrix(GL_MODELVIEW);
    glm::mat4 *projection = get_matrix(GL_PROJECTION);

    glm::vec4 vert = glm::vec4(in[0], in[1], in[2], 1);
    vert = (*projection) * (*model) * vert;
    memcpy(out, glm::value_ptr(vert), sizeof(GLfloat) * 3);
}

} // extern "C"

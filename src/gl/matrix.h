#ifndef GL_MATRIX_H
#define GL_MATRIX_H

#include <GL/gl.h>

#ifdef __cplusplus
extern "C" {
#endif

void glLoadIdentity();
void glLoadMatrixf(const GLfloat *m);
void glMatrixMode(GLenum mode);
void glMultMatrixf(const GLfloat *m);
void glPopMatrix();
void glPushMatrix();
void gl_transform_vertex(GLfloat out[3], GLfloat in[3]);
void gl_get_matrix(GLenum mode, GLfloat *out);

#ifdef __cplusplus
}
#endif

#endif

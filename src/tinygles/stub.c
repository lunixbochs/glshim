#include <stdbool.h>

#include "zgl.h"

void tglScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
    fprintf(stderr, "STUB: tglScissor()\n");
}

void tglColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
    fprintf(stderr, "STUB: tglColorMask()\n");
}

void tglDepthFunc(GLenum func) {
    fprintf(stderr, "STUB: tglDepthFunc()\n");
}

void tglClearDepthf(GLclampf depth) {
    fprintf(stderr, "STUB: tglClearDepthf()\n");
}

void tglDepthMask(GLboolean flag) {
    fprintf(stderr, "STUB: tglDepthMask()\n");
}

void tglFogfv(GLenum pname, const GLfloat *params) {
    fprintf(stderr, "STUB: tglFogfv()\n");
}

void tglFogf(GLenum pname, GLfloat param) {
    fprintf(stderr, "STUB: tglFogf()\n");
}

void tglLineWidth(GLfloat width) {
    fprintf(stderr, "STUB: glLineWidth\n");
}

void tglPointSize(GLfloat size) {
    fprintf(stderr, "STUB: glPointSize\n");
}

void tglFinish() {
    fprintf(stderr, "STUB: tglFinish()\n");
}

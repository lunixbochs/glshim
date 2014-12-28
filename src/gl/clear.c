#include "error.h"
#include "loader.h"
#include "types.h"

void glClear(GLbitfield mask) {
#ifndef USE_ES2
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glClear);
    PROXY_GLES(glClear);
#endif
}

void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
#ifndef USE_ES2
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glClearColor);
    PROXY_GLES(glClearColor);
#endif
}

void glClearDepthf(GLclampf depth) {
#ifndef USE_ES2
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glClearDepthf);
    PROXY_GLES(glClearDepthf);
#endif
}

void glClearStencil(GLint s) {
#ifndef USE_ES2
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glClearStencil);
    PROXY_GLES(glClearStencil);
#endif
}

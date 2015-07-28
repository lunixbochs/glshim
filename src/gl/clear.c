#include "error.h"
#include "loader.h"
#include "remote.h"

void glClear(GLbitfield mask) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glClear);
    FORWARD_IF_REMOTE(glClear);
    PROXY_GLES(glClear);
}

void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glClearColor);
    FORWARD_IF_REMOTE(glClearColor);
    PROXY_GLES(glClearColor);
}

void glClearDepthf(GLclampf depth) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glClearDepthf);
    FORWARD_IF_REMOTE(glClearDepthf);
    PROXY_GLES(glClearDepthf);
}

void glClearStencil(GLint s) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glClearStencil);
    FORWARD_IF_REMOTE(glClearStencil);
    PROXY_GLES(glClearStencil);
}

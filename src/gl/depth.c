#include "error.h"
#include "loader.h"
#include "remote.h"

void glDepthFunc(GLenum func) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glDepthFunc);
    FORWARD_IF_REMOTE(glDepthFunc);
    PROXY_GLES(glDepthFunc);
}

void glDepthMask(GLboolean flag) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glDepthMask);
    FORWARD_IF_REMOTE(glDepthMask);
    PROXY_GLES(glDepthMask);
}

void glDepthRangef(GLclampf near, GLclampf far) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glDepthRangef);
    FORWARD_IF_REMOTE(glDepthRangef);
    PROXY_GLES(glDepthRangef);
}

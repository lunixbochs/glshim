#include "error.h"
#include "loader.h"
#include "remote.h"

void glAlphaFunc(GLenum func, GLclampf ref) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glAlphaFunc);
    PROXY_GLES(glAlphaFunc);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glBlendFunc);
    PROXY_GLES(glBlendFunc);
}

#ifndef USE_ES2
void glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glBlendColor);
    PROXY_OES(glBlendColorOES);
}

void glBlendEquation(GLenum mode) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glBlendEquation);
    PROXY_OES(glBlendEquationOES);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glBlendEquationSeparate);
    PROXY_OES(glBlendEquationSeparateOES);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
    ERROR_IN_BLOCK();
    PUSH_IF_COMPILING(glBlendFuncSeparate);
    PROXY_OES(glBlendFuncSeparateOES);
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
    printf("warning: neutered glBlendFuncSeparatei()\n");
    glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
    printf("warning: neutered glBlendEquationSeparatei()\n");
    glBlendEquationSeparate(modeRGB, modeAlpha);
}
#endif

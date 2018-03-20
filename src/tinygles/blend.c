#include "zgl.h"

void tglAlphaFunc(GLenum func, GLclampf ref) {
    GLContext *c = gl_get_context();
    c->alpha.func = func;
    c->alpha.ref = ref;
}

void tglBlendFunc(GLenum sfactor, GLenum dfactor) {
    GLContext *c = gl_get_context();
    c->blend.sfactor = sfactor;
    c->blend.dfactor = dfactor;
}

void tglLogicOp(GLenum opcode) {
    GLContext *c = gl_get_context();
    c->logic.op = opcode;
}

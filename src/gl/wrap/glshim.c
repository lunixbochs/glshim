#ifndef USE_ES2
#include "glpack.h"
#include "../loader.h"
#include "../skip.h"
#include "../remote.h"

#ifndef skip_glActiveTexture
void glActiveTexture(GLenum texture) {
    LOAD_GLES(glActiveTexture);
#ifndef direct_glActiveTexture
    PUSH_IF_COMPILING(glActiveTexture);
#endif
    FORWARD_IF_REMOTE(glActiveTexture);
    gles_glActiveTexture(texture);
}
#endif
#ifndef skip_glAlphaFunc
void glAlphaFunc(GLenum func, GLclampf ref) {
    LOAD_GLES(glAlphaFunc);
#ifndef direct_glAlphaFunc
    PUSH_IF_COMPILING(glAlphaFunc);
#endif
    FORWARD_IF_REMOTE(glAlphaFunc);
    gles_glAlphaFunc(func, ref);
}
#endif
#ifndef skip_glAlphaFuncx
void glAlphaFuncx(GLenum func, GLclampx ref) {
    LOAD_GLES(glAlphaFuncx);
#ifndef direct_glAlphaFuncx
    PUSH_IF_COMPILING(glAlphaFuncx);
#endif
    FORWARD_IF_REMOTE(glAlphaFuncx);
    gles_glAlphaFuncx(func, ref);
}
#endif
#ifndef skip_glBindBuffer
void glBindBuffer(GLenum target, GLuint buffer) {
    LOAD_GLES(glBindBuffer);
#ifndef direct_glBindBuffer
    PUSH_IF_COMPILING(glBindBuffer);
#endif
    FORWARD_IF_REMOTE(glBindBuffer);
    gles_glBindBuffer(target, buffer);
}
#endif
#ifndef skip_glBindTexture
void glBindTexture(GLenum target, GLuint texture) {
    LOAD_GLES(glBindTexture);
#ifndef direct_glBindTexture
    PUSH_IF_COMPILING(glBindTexture);
#endif
    FORWARD_IF_REMOTE(glBindTexture);
    gles_glBindTexture(target, texture);
}
#endif
#ifndef skip_glBlendColorOES
void glBlendColorOES(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    LOAD_GLES(glBlendColorOES);
#ifndef direct_glBlendColorOES
    PUSH_IF_COMPILING(glBlendColorOES);
#endif
    FORWARD_IF_REMOTE(glBlendColorOES);
    gles_glBlendColorOES(red, green, blue, alpha);
}
#endif
#ifndef skip_glBlendEquationOES
void glBlendEquationOES(GLenum mode) {
    LOAD_GLES(glBlendEquationOES);
#ifndef direct_glBlendEquationOES
    PUSH_IF_COMPILING(glBlendEquationOES);
#endif
    FORWARD_IF_REMOTE(glBlendEquationOES);
    gles_glBlendEquationOES(mode);
}
#endif
#ifndef skip_glBlendEquationSeparateOES
void glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha) {
    LOAD_GLES(glBlendEquationSeparateOES);
#ifndef direct_glBlendEquationSeparateOES
    PUSH_IF_COMPILING(glBlendEquationSeparateOES);
#endif
    FORWARD_IF_REMOTE(glBlendEquationSeparateOES);
    gles_glBlendEquationSeparateOES(modeRGB, modeAlpha);
}
#endif
#ifndef skip_glBlendFunc
void glBlendFunc(GLenum sfactor, GLenum dfactor) {
    LOAD_GLES(glBlendFunc);
#ifndef direct_glBlendFunc
    PUSH_IF_COMPILING(glBlendFunc);
#endif
    FORWARD_IF_REMOTE(glBlendFunc);
    gles_glBlendFunc(sfactor, dfactor);
}
#endif
#ifndef skip_glBlendFuncSeparateOES
void glBlendFuncSeparateOES(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
    LOAD_GLES(glBlendFuncSeparateOES);
#ifndef direct_glBlendFuncSeparateOES
    PUSH_IF_COMPILING(glBlendFuncSeparateOES);
#endif
    FORWARD_IF_REMOTE(glBlendFuncSeparateOES);
    gles_glBlendFuncSeparateOES(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}
#endif
#ifndef skip_glBufferData
void glBufferData(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage) {
    LOAD_GLES(glBufferData);
#ifndef direct_glBufferData
    PUSH_IF_COMPILING(glBufferData);
#endif
    FORWARD_IF_REMOTE(glBufferData);
    gles_glBufferData(target, size, data, usage);
}
#endif
#ifndef skip_glBufferSubData
void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data) {
    LOAD_GLES(glBufferSubData);
#ifndef direct_glBufferSubData
    PUSH_IF_COMPILING(glBufferSubData);
#endif
    FORWARD_IF_REMOTE(glBufferSubData);
    gles_glBufferSubData(target, offset, size, data);
}
#endif
#ifndef skip_glClear
void glClear(GLbitfield mask) {
    LOAD_GLES(glClear);
#ifndef direct_glClear
    PUSH_IF_COMPILING(glClear);
#endif
    FORWARD_IF_REMOTE(glClear);
    gles_glClear(mask);
}
#endif
#ifndef skip_glClearColor
void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    LOAD_GLES(glClearColor);
#ifndef direct_glClearColor
    PUSH_IF_COMPILING(glClearColor);
#endif
    FORWARD_IF_REMOTE(glClearColor);
    gles_glClearColor(red, green, blue, alpha);
}
#endif
#ifndef skip_glClearColorx
void glClearColorx(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha) {
    LOAD_GLES(glClearColorx);
#ifndef direct_glClearColorx
    PUSH_IF_COMPILING(glClearColorx);
#endif
    FORWARD_IF_REMOTE(glClearColorx);
    gles_glClearColorx(red, green, blue, alpha);
}
#endif
#ifndef skip_glClearDepthf
void glClearDepthf(GLclampf depth) {
    LOAD_GLES(glClearDepthf);
#ifndef direct_glClearDepthf
    PUSH_IF_COMPILING(glClearDepthf);
#endif
    FORWARD_IF_REMOTE(glClearDepthf);
    gles_glClearDepthf(depth);
}
#endif
#ifndef skip_glClearDepthx
void glClearDepthx(GLclampx depth) {
    LOAD_GLES(glClearDepthx);
#ifndef direct_glClearDepthx
    PUSH_IF_COMPILING(glClearDepthx);
#endif
    FORWARD_IF_REMOTE(glClearDepthx);
    gles_glClearDepthx(depth);
}
#endif
#ifndef skip_glClearStencil
void glClearStencil(GLint s) {
    LOAD_GLES(glClearStencil);
#ifndef direct_glClearStencil
    PUSH_IF_COMPILING(glClearStencil);
#endif
    FORWARD_IF_REMOTE(glClearStencil);
    gles_glClearStencil(s);
}
#endif
#ifndef skip_glClientActiveTexture
void glClientActiveTexture(GLenum texture) {
    LOAD_GLES(glClientActiveTexture);
#ifndef direct_glClientActiveTexture
    PUSH_IF_COMPILING(glClientActiveTexture);
#endif
    FORWARD_IF_REMOTE(glClientActiveTexture);
    gles_glClientActiveTexture(texture);
}
#endif
#ifndef skip_glClipPlanef
void glClipPlanef(GLenum plane, const GLfloat * equation) {
    LOAD_GLES(glClipPlanef);
#ifndef direct_glClipPlanef
    PUSH_IF_COMPILING(glClipPlanef);
#endif
    FORWARD_IF_REMOTE(glClipPlanef);
    gles_glClipPlanef(plane, equation);
}
#endif
#ifndef skip_glClipPlanex
void glClipPlanex(GLenum plane, const GLfixed * equation) {
    LOAD_GLES(glClipPlanex);
#ifndef direct_glClipPlanex
    PUSH_IF_COMPILING(glClipPlanex);
#endif
    FORWARD_IF_REMOTE(glClipPlanex);
    gles_glClipPlanex(plane, equation);
}
#endif
#ifndef skip_glColor4f
void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    LOAD_GLES(glColor4f);
#ifndef direct_glColor4f
    PUSH_IF_COMPILING(glColor4f);
#endif
    FORWARD_IF_REMOTE(glColor4f);
    gles_glColor4f(red, green, blue, alpha);
}
#endif
#ifndef skip_glColor4ub
void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) {
    LOAD_GLES(glColor4ub);
#ifndef direct_glColor4ub
    PUSH_IF_COMPILING(glColor4ub);
#endif
    FORWARD_IF_REMOTE(glColor4ub);
    gles_glColor4ub(red, green, blue, alpha);
}
#endif
#ifndef skip_glColor4x
void glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
    LOAD_GLES(glColor4x);
#ifndef direct_glColor4x
    PUSH_IF_COMPILING(glColor4x);
#endif
    FORWARD_IF_REMOTE(glColor4x);
    gles_glColor4x(red, green, blue, alpha);
}
#endif
#ifndef skip_glColorMask
void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
    LOAD_GLES(glColorMask);
#ifndef direct_glColorMask
    PUSH_IF_COMPILING(glColorMask);
#endif
    FORWARD_IF_REMOTE(glColorMask);
    gles_glColorMask(red, green, blue, alpha);
}
#endif
#ifndef skip_glColorPointer
void glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    LOAD_GLES(glColorPointer);
#ifndef direct_glColorPointer
    PUSH_IF_COMPILING(glColorPointer);
#endif
    FORWARD_IF_REMOTE(glColorPointer);
    gles_glColorPointer(size, type, stride, pointer);
}
#endif
#ifndef skip_glCompressedTexImage2D
void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data) {
    LOAD_GLES(glCompressedTexImage2D);
#ifndef direct_glCompressedTexImage2D
    PUSH_IF_COMPILING(glCompressedTexImage2D);
#endif
    FORWARD_IF_REMOTE(glCompressedTexImage2D);
    gles_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}
#endif
#ifndef skip_glCompressedTexSubImage2D
void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data) {
    LOAD_GLES(glCompressedTexSubImage2D);
#ifndef direct_glCompressedTexSubImage2D
    PUSH_IF_COMPILING(glCompressedTexSubImage2D);
#endif
    FORWARD_IF_REMOTE(glCompressedTexSubImage2D);
    gles_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}
#endif
#ifndef skip_glCopyTexImage2D
void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
    LOAD_GLES(glCopyTexImage2D);
#ifndef direct_glCopyTexImage2D
    PUSH_IF_COMPILING(glCopyTexImage2D);
#endif
    FORWARD_IF_REMOTE(glCopyTexImage2D);
    gles_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}
#endif
#ifndef skip_glCopyTexSubImage2D
void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
    LOAD_GLES(glCopyTexSubImage2D);
#ifndef direct_glCopyTexSubImage2D
    PUSH_IF_COMPILING(glCopyTexSubImage2D);
#endif
    FORWARD_IF_REMOTE(glCopyTexSubImage2D);
    gles_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}
#endif
#ifndef skip_glCullFace
void glCullFace(GLenum mode) {
    LOAD_GLES(glCullFace);
#ifndef direct_glCullFace
    PUSH_IF_COMPILING(glCullFace);
#endif
    FORWARD_IF_REMOTE(glCullFace);
    gles_glCullFace(mode);
}
#endif
#ifndef skip_glDeleteBuffers
void glDeleteBuffers(GLsizei n, const GLuint * buffers) {
    LOAD_GLES(glDeleteBuffers);
#ifndef direct_glDeleteBuffers
    PUSH_IF_COMPILING(glDeleteBuffers);
#endif
    FORWARD_IF_REMOTE(glDeleteBuffers);
    gles_glDeleteBuffers(n, buffers);
}
#endif
#ifndef skip_glDeleteTextures
void glDeleteTextures(GLsizei n, const GLuint * textures) {
    LOAD_GLES(glDeleteTextures);
#ifndef direct_glDeleteTextures
    PUSH_IF_COMPILING(glDeleteTextures);
#endif
    FORWARD_IF_REMOTE(glDeleteTextures);
    gles_glDeleteTextures(n, textures);
}
#endif
#ifndef skip_glDepthFunc
void glDepthFunc(GLenum func) {
    LOAD_GLES(glDepthFunc);
#ifndef direct_glDepthFunc
    PUSH_IF_COMPILING(glDepthFunc);
#endif
    FORWARD_IF_REMOTE(glDepthFunc);
    gles_glDepthFunc(func);
}
#endif
#ifndef skip_glDepthMask
void glDepthMask(GLboolean flag) {
    LOAD_GLES(glDepthMask);
#ifndef direct_glDepthMask
    PUSH_IF_COMPILING(glDepthMask);
#endif
    FORWARD_IF_REMOTE(glDepthMask);
    gles_glDepthMask(flag);
}
#endif
#ifndef skip_glDepthRangef
void glDepthRangef(GLclampf near, GLclampf far) {
    LOAD_GLES(glDepthRangef);
#ifndef direct_glDepthRangef
    PUSH_IF_COMPILING(glDepthRangef);
#endif
    FORWARD_IF_REMOTE(glDepthRangef);
    gles_glDepthRangef(near, far);
}
#endif
#ifndef skip_glDepthRangex
void glDepthRangex(GLclampx near, GLclampx far) {
    LOAD_GLES(glDepthRangex);
#ifndef direct_glDepthRangex
    PUSH_IF_COMPILING(glDepthRangex);
#endif
    FORWARD_IF_REMOTE(glDepthRangex);
    gles_glDepthRangex(near, far);
}
#endif
#ifndef skip_glDisable
void glDisable(GLenum cap) {
    LOAD_GLES(glDisable);
#ifndef direct_glDisable
    PUSH_IF_COMPILING(glDisable);
#endif
    FORWARD_IF_REMOTE(glDisable);
    gles_glDisable(cap);
}
#endif
#ifndef skip_glDisableClientState
void glDisableClientState(GLenum array) {
    LOAD_GLES(glDisableClientState);
#ifndef direct_glDisableClientState
    PUSH_IF_COMPILING(glDisableClientState);
#endif
    FORWARD_IF_REMOTE(glDisableClientState);
    gles_glDisableClientState(array);
}
#endif
#ifndef skip_glDrawArrays
void glDrawArrays(GLenum mode, GLint first, GLsizei count) {
    LOAD_GLES(glDrawArrays);
#ifndef direct_glDrawArrays
    PUSH_IF_COMPILING(glDrawArrays);
#endif
    FORWARD_IF_REMOTE(glDrawArrays);
    gles_glDrawArrays(mode, first, count);
}
#endif
#ifndef skip_glDrawElements
void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices) {
    LOAD_GLES(glDrawElements);
#ifndef direct_glDrawElements
    PUSH_IF_COMPILING(glDrawElements);
#endif
    FORWARD_IF_REMOTE(glDrawElements);
    gles_glDrawElements(mode, count, type, indices);
}
#endif
#ifndef skip_glEnable
void glEnable(GLenum cap) {
    LOAD_GLES(glEnable);
#ifndef direct_glEnable
    PUSH_IF_COMPILING(glEnable);
#endif
    FORWARD_IF_REMOTE(glEnable);
    gles_glEnable(cap);
}
#endif
#ifndef skip_glEnableClientState
void glEnableClientState(GLenum array) {
    LOAD_GLES(glEnableClientState);
#ifndef direct_glEnableClientState
    PUSH_IF_COMPILING(glEnableClientState);
#endif
    FORWARD_IF_REMOTE(glEnableClientState);
    gles_glEnableClientState(array);
}
#endif
#ifndef skip_glFinish
void glFinish() {
    LOAD_GLES(glFinish);
#ifndef direct_glFinish
    PUSH_IF_COMPILING(glFinish);
#endif
    FORWARD_IF_REMOTE(glFinish);
    gles_glFinish();
}
#endif
#ifndef skip_glFlush
void glFlush() {
    LOAD_GLES(glFlush);
#ifndef direct_glFlush
    PUSH_IF_COMPILING(glFlush);
#endif
    FORWARD_IF_REMOTE(glFlush);
    gles_glFlush();
}
#endif
#ifndef skip_glFogf
void glFogf(GLenum pname, GLfloat param) {
    LOAD_GLES(glFogf);
#ifndef direct_glFogf
    PUSH_IF_COMPILING(glFogf);
#endif
    FORWARD_IF_REMOTE(glFogf);
    gles_glFogf(pname, param);
}
#endif
#ifndef skip_glFogfv
void glFogfv(GLenum pname, const GLfloat * params) {
    LOAD_GLES(glFogfv);
#ifndef direct_glFogfv
    PUSH_IF_COMPILING(glFogfv);
#endif
    FORWARD_IF_REMOTE(glFogfv);
    gles_glFogfv(pname, params);
}
#endif
#ifndef skip_glFogx
void glFogx(GLenum pname, GLfixed param) {
    LOAD_GLES(glFogx);
#ifndef direct_glFogx
    PUSH_IF_COMPILING(glFogx);
#endif
    FORWARD_IF_REMOTE(glFogx);
    gles_glFogx(pname, param);
}
#endif
#ifndef skip_glFogxv
void glFogxv(GLenum pname, const GLfixed * params) {
    LOAD_GLES(glFogxv);
#ifndef direct_glFogxv
    PUSH_IF_COMPILING(glFogxv);
#endif
    FORWARD_IF_REMOTE(glFogxv);
    gles_glFogxv(pname, params);
}
#endif
#ifndef skip_glFrontFace
void glFrontFace(GLenum mode) {
    LOAD_GLES(glFrontFace);
#ifndef direct_glFrontFace
    PUSH_IF_COMPILING(glFrontFace);
#endif
    FORWARD_IF_REMOTE(glFrontFace);
    gles_glFrontFace(mode);
}
#endif
#ifndef skip_glFrustumf
void glFrustumf(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far) {
    LOAD_GLES(glFrustumf);
#ifndef direct_glFrustumf
    PUSH_IF_COMPILING(glFrustumf);
#endif
    FORWARD_IF_REMOTE(glFrustumf);
    gles_glFrustumf(left, right, bottom, top, near, far);
}
#endif
#ifndef skip_glFrustumx
void glFrustumx(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far) {
    LOAD_GLES(glFrustumx);
#ifndef direct_glFrustumx
    PUSH_IF_COMPILING(glFrustumx);
#endif
    FORWARD_IF_REMOTE(glFrustumx);
    gles_glFrustumx(left, right, bottom, top, near, far);
}
#endif
#ifndef skip_glGenBuffers
void glGenBuffers(GLsizei n, GLuint * buffers) {
    LOAD_GLES(glGenBuffers);
#ifndef direct_glGenBuffers
    PUSH_IF_COMPILING(glGenBuffers);
#endif
    FORWARD_IF_REMOTE(glGenBuffers);
    gles_glGenBuffers(n, buffers);
}
#endif
#ifndef skip_glGenTextures
void glGenTextures(GLsizei n, GLuint * textures) {
    LOAD_GLES(glGenTextures);
#ifndef direct_glGenTextures
    PUSH_IF_COMPILING(glGenTextures);
#endif
    FORWARD_IF_REMOTE(glGenTextures);
    gles_glGenTextures(n, textures);
}
#endif
#ifndef skip_glGetBooleanv
void glGetBooleanv(GLenum pname, GLboolean * params) {
    LOAD_GLES(glGetBooleanv);
#ifndef direct_glGetBooleanv
    PUSH_IF_COMPILING(glGetBooleanv);
#endif
    FORWARD_IF_REMOTE(glGetBooleanv);
    gles_glGetBooleanv(pname, params);
}
#endif
#ifndef skip_glGetBufferParameteriv
void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params) {
    LOAD_GLES(glGetBufferParameteriv);
#ifndef direct_glGetBufferParameteriv
    PUSH_IF_COMPILING(glGetBufferParameteriv);
#endif
    FORWARD_IF_REMOTE(glGetBufferParameteriv);
    gles_glGetBufferParameteriv(target, pname, params);
}
#endif
#ifndef skip_glGetClipPlanef
void glGetClipPlanef(GLenum plane, GLfloat * equation) {
    LOAD_GLES(glGetClipPlanef);
#ifndef direct_glGetClipPlanef
    PUSH_IF_COMPILING(glGetClipPlanef);
#endif
    FORWARD_IF_REMOTE(glGetClipPlanef);
    gles_glGetClipPlanef(plane, equation);
}
#endif
#ifndef skip_glGetClipPlanex
void glGetClipPlanex(GLenum plane, GLfixed * equation) {
    LOAD_GLES(glGetClipPlanex);
#ifndef direct_glGetClipPlanex
    PUSH_IF_COMPILING(glGetClipPlanex);
#endif
    FORWARD_IF_REMOTE(glGetClipPlanex);
    gles_glGetClipPlanex(plane, equation);
}
#endif
#ifndef skip_glGetError
GLenum glGetError() {
    LOAD_GLES(glGetError);
#ifndef direct_glGetError
    PUSH_IF_COMPILING(glGetError);
#endif
    FORWARD_IF_REMOTE(glGetError);
    return gles_glGetError();
}
#endif
#ifndef skip_glGetFixedv
void glGetFixedv(GLenum pname, GLfixed * params) {
    LOAD_GLES(glGetFixedv);
#ifndef direct_glGetFixedv
    PUSH_IF_COMPILING(glGetFixedv);
#endif
    FORWARD_IF_REMOTE(glGetFixedv);
    gles_glGetFixedv(pname, params);
}
#endif
#ifndef skip_glGetFloatv
void glGetFloatv(GLenum pname, GLfloat * params) {
    LOAD_GLES(glGetFloatv);
#ifndef direct_glGetFloatv
    PUSH_IF_COMPILING(glGetFloatv);
#endif
    FORWARD_IF_REMOTE(glGetFloatv);
    gles_glGetFloatv(pname, params);
}
#endif
#ifndef skip_glGetIntegerv
void glGetIntegerv(GLenum pname, GLint * params) {
    LOAD_GLES(glGetIntegerv);
#ifndef direct_glGetIntegerv
    PUSH_IF_COMPILING(glGetIntegerv);
#endif
    FORWARD_IF_REMOTE(glGetIntegerv);
    gles_glGetIntegerv(pname, params);
}
#endif
#ifndef skip_glGetLightfv
void glGetLightfv(GLenum light, GLenum pname, GLfloat * params) {
    LOAD_GLES(glGetLightfv);
#ifndef direct_glGetLightfv
    PUSH_IF_COMPILING(glGetLightfv);
#endif
    FORWARD_IF_REMOTE(glGetLightfv);
    gles_glGetLightfv(light, pname, params);
}
#endif
#ifndef skip_glGetLightxv
void glGetLightxv(GLenum light, GLenum pname, GLfixed * params) {
    LOAD_GLES(glGetLightxv);
#ifndef direct_glGetLightxv
    PUSH_IF_COMPILING(glGetLightxv);
#endif
    FORWARD_IF_REMOTE(glGetLightxv);
    gles_glGetLightxv(light, pname, params);
}
#endif
#ifndef skip_glGetMaterialfv
void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params) {
    LOAD_GLES(glGetMaterialfv);
#ifndef direct_glGetMaterialfv
    PUSH_IF_COMPILING(glGetMaterialfv);
#endif
    FORWARD_IF_REMOTE(glGetMaterialfv);
    gles_glGetMaterialfv(face, pname, params);
}
#endif
#ifndef skip_glGetMaterialxv
void glGetMaterialxv(GLenum face, GLenum pname, GLfixed * params) {
    LOAD_GLES(glGetMaterialxv);
#ifndef direct_glGetMaterialxv
    PUSH_IF_COMPILING(glGetMaterialxv);
#endif
    FORWARD_IF_REMOTE(glGetMaterialxv);
    gles_glGetMaterialxv(face, pname, params);
}
#endif
#ifndef skip_glGetPointerv
void glGetPointerv(GLenum pname, GLvoid ** params) {
    LOAD_GLES(glGetPointerv);
#ifndef direct_glGetPointerv
    PUSH_IF_COMPILING(glGetPointerv);
#endif
    FORWARD_IF_REMOTE(glGetPointerv);
    gles_glGetPointerv(pname, params);
}
#endif
#ifndef skip_glGetString
const GLubyte * glGetString(GLenum name) {
    LOAD_GLES(glGetString);
#ifndef direct_glGetString
    PUSH_IF_COMPILING(glGetString);
#endif
    FORWARD_IF_REMOTE(glGetString);
    return gles_glGetString(name);
}
#endif
#ifndef skip_glGetTexEnvfv
void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params) {
    LOAD_GLES(glGetTexEnvfv);
#ifndef direct_glGetTexEnvfv
    PUSH_IF_COMPILING(glGetTexEnvfv);
#endif
    FORWARD_IF_REMOTE(glGetTexEnvfv);
    gles_glGetTexEnvfv(target, pname, params);
}
#endif
#ifndef skip_glGetTexEnviv
void glGetTexEnviv(GLenum target, GLenum pname, GLint * params) {
    LOAD_GLES(glGetTexEnviv);
#ifndef direct_glGetTexEnviv
    PUSH_IF_COMPILING(glGetTexEnviv);
#endif
    FORWARD_IF_REMOTE(glGetTexEnviv);
    gles_glGetTexEnviv(target, pname, params);
}
#endif
#ifndef skip_glGetTexEnvxv
void glGetTexEnvxv(GLenum target, GLenum pname, GLfixed * params) {
    LOAD_GLES(glGetTexEnvxv);
#ifndef direct_glGetTexEnvxv
    PUSH_IF_COMPILING(glGetTexEnvxv);
#endif
    FORWARD_IF_REMOTE(glGetTexEnvxv);
    gles_glGetTexEnvxv(target, pname, params);
}
#endif
#ifndef skip_glGetTexParameterfv
void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params) {
    LOAD_GLES(glGetTexParameterfv);
#ifndef direct_glGetTexParameterfv
    PUSH_IF_COMPILING(glGetTexParameterfv);
#endif
    FORWARD_IF_REMOTE(glGetTexParameterfv);
    gles_glGetTexParameterfv(target, pname, params);
}
#endif
#ifndef skip_glGetTexParameteriv
void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params) {
    LOAD_GLES(glGetTexParameteriv);
#ifndef direct_glGetTexParameteriv
    PUSH_IF_COMPILING(glGetTexParameteriv);
#endif
    FORWARD_IF_REMOTE(glGetTexParameteriv);
    gles_glGetTexParameteriv(target, pname, params);
}
#endif
#ifndef skip_glGetTexParameterxv
void glGetTexParameterxv(GLenum target, GLenum pname, GLfixed * params) {
    LOAD_GLES(glGetTexParameterxv);
#ifndef direct_glGetTexParameterxv
    PUSH_IF_COMPILING(glGetTexParameterxv);
#endif
    FORWARD_IF_REMOTE(glGetTexParameterxv);
    gles_glGetTexParameterxv(target, pname, params);
}
#endif
#ifndef skip_glHint
void glHint(GLenum target, GLenum mode) {
    LOAD_GLES(glHint);
#ifndef direct_glHint
    PUSH_IF_COMPILING(glHint);
#endif
    FORWARD_IF_REMOTE(glHint);
    gles_glHint(target, mode);
}
#endif
#ifndef skip_glIsBuffer
GLboolean glIsBuffer(GLuint buffer) {
    LOAD_GLES(glIsBuffer);
#ifndef direct_glIsBuffer
    PUSH_IF_COMPILING(glIsBuffer);
#endif
    FORWARD_IF_REMOTE(glIsBuffer);
    return gles_glIsBuffer(buffer);
}
#endif
#ifndef skip_glIsEnabled
GLboolean glIsEnabled(GLenum cap) {
    LOAD_GLES(glIsEnabled);
#ifndef direct_glIsEnabled
    PUSH_IF_COMPILING(glIsEnabled);
#endif
    FORWARD_IF_REMOTE(glIsEnabled);
    return gles_glIsEnabled(cap);
}
#endif
#ifndef skip_glIsTexture
GLboolean glIsTexture(GLuint texture) {
    LOAD_GLES(glIsTexture);
#ifndef direct_glIsTexture
    PUSH_IF_COMPILING(glIsTexture);
#endif
    FORWARD_IF_REMOTE(glIsTexture);
    return gles_glIsTexture(texture);
}
#endif
#ifndef skip_glLightModelf
void glLightModelf(GLenum pname, GLfloat param) {
    LOAD_GLES(glLightModelf);
#ifndef direct_glLightModelf
    PUSH_IF_COMPILING(glLightModelf);
#endif
    FORWARD_IF_REMOTE(glLightModelf);
    gles_glLightModelf(pname, param);
}
#endif
#ifndef skip_glLightModelfv
void glLightModelfv(GLenum pname, const GLfloat * params) {
    LOAD_GLES(glLightModelfv);
#ifndef direct_glLightModelfv
    PUSH_IF_COMPILING(glLightModelfv);
#endif
    FORWARD_IF_REMOTE(glLightModelfv);
    gles_glLightModelfv(pname, params);
}
#endif
#ifndef skip_glLightModelx
void glLightModelx(GLenum pname, GLfixed param) {
    LOAD_GLES(glLightModelx);
#ifndef direct_glLightModelx
    PUSH_IF_COMPILING(glLightModelx);
#endif
    FORWARD_IF_REMOTE(glLightModelx);
    gles_glLightModelx(pname, param);
}
#endif
#ifndef skip_glLightModelxv
void glLightModelxv(GLenum pname, const GLfixed * params) {
    LOAD_GLES(glLightModelxv);
#ifndef direct_glLightModelxv
    PUSH_IF_COMPILING(glLightModelxv);
#endif
    FORWARD_IF_REMOTE(glLightModelxv);
    gles_glLightModelxv(pname, params);
}
#endif
#ifndef skip_glLightf
void glLightf(GLenum light, GLenum pname, GLfloat param) {
    LOAD_GLES(glLightf);
#ifndef direct_glLightf
    PUSH_IF_COMPILING(glLightf);
#endif
    FORWARD_IF_REMOTE(glLightf);
    gles_glLightf(light, pname, param);
}
#endif
#ifndef skip_glLightfv
void glLightfv(GLenum light, GLenum pname, const GLfloat * params) {
    LOAD_GLES(glLightfv);
#ifndef direct_glLightfv
    PUSH_IF_COMPILING(glLightfv);
#endif
    FORWARD_IF_REMOTE(glLightfv);
    gles_glLightfv(light, pname, params);
}
#endif
#ifndef skip_glLightx
void glLightx(GLenum light, GLenum pname, GLfixed param) {
    LOAD_GLES(glLightx);
#ifndef direct_glLightx
    PUSH_IF_COMPILING(glLightx);
#endif
    FORWARD_IF_REMOTE(glLightx);
    gles_glLightx(light, pname, param);
}
#endif
#ifndef skip_glLightxv
void glLightxv(GLenum light, GLenum pname, const GLfixed * params) {
    LOAD_GLES(glLightxv);
#ifndef direct_glLightxv
    PUSH_IF_COMPILING(glLightxv);
#endif
    FORWARD_IF_REMOTE(glLightxv);
    gles_glLightxv(light, pname, params);
}
#endif
#ifndef skip_glLineWidth
void glLineWidth(GLfloat width) {
    LOAD_GLES(glLineWidth);
#ifndef direct_glLineWidth
    PUSH_IF_COMPILING(glLineWidth);
#endif
    FORWARD_IF_REMOTE(glLineWidth);
    gles_glLineWidth(width);
}
#endif
#ifndef skip_glLineWidthx
void glLineWidthx(GLfixed width) {
    LOAD_GLES(glLineWidthx);
#ifndef direct_glLineWidthx
    PUSH_IF_COMPILING(glLineWidthx);
#endif
    FORWARD_IF_REMOTE(glLineWidthx);
    gles_glLineWidthx(width);
}
#endif
#ifndef skip_glLoadIdentity
void glLoadIdentity() {
    LOAD_GLES(glLoadIdentity);
#ifndef direct_glLoadIdentity
    PUSH_IF_COMPILING(glLoadIdentity);
#endif
    FORWARD_IF_REMOTE(glLoadIdentity);
    gles_glLoadIdentity();
}
#endif
#ifndef skip_glLoadMatrixf
void glLoadMatrixf(const GLfloat * m) {
    LOAD_GLES(glLoadMatrixf);
#ifndef direct_glLoadMatrixf
    PUSH_IF_COMPILING(glLoadMatrixf);
#endif
    FORWARD_IF_REMOTE(glLoadMatrixf);
    gles_glLoadMatrixf(m);
}
#endif
#ifndef skip_glLoadMatrixx
void glLoadMatrixx(const GLfixed * m) {
    LOAD_GLES(glLoadMatrixx);
#ifndef direct_glLoadMatrixx
    PUSH_IF_COMPILING(glLoadMatrixx);
#endif
    FORWARD_IF_REMOTE(glLoadMatrixx);
    gles_glLoadMatrixx(m);
}
#endif
#ifndef skip_glLogicOp
void glLogicOp(GLenum opcode) {
    LOAD_GLES(glLogicOp);
#ifndef direct_glLogicOp
    PUSH_IF_COMPILING(glLogicOp);
#endif
    FORWARD_IF_REMOTE(glLogicOp);
    gles_glLogicOp(opcode);
}
#endif
#ifndef skip_glMaterialf
void glMaterialf(GLenum face, GLenum pname, GLfloat param) {
    LOAD_GLES(glMaterialf);
#ifndef direct_glMaterialf
    PUSH_IF_COMPILING(glMaterialf);
#endif
    FORWARD_IF_REMOTE(glMaterialf);
    gles_glMaterialf(face, pname, param);
}
#endif
#ifndef skip_glMaterialfv
void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params) {
    LOAD_GLES(glMaterialfv);
#ifndef direct_glMaterialfv
    PUSH_IF_COMPILING(glMaterialfv);
#endif
    FORWARD_IF_REMOTE(glMaterialfv);
    gles_glMaterialfv(face, pname, params);
}
#endif
#ifndef skip_glMaterialx
void glMaterialx(GLenum face, GLenum pname, GLfixed param) {
    LOAD_GLES(glMaterialx);
#ifndef direct_glMaterialx
    PUSH_IF_COMPILING(glMaterialx);
#endif
    FORWARD_IF_REMOTE(glMaterialx);
    gles_glMaterialx(face, pname, param);
}
#endif
#ifndef skip_glMaterialxv
void glMaterialxv(GLenum face, GLenum pname, const GLfixed * params) {
    LOAD_GLES(glMaterialxv);
#ifndef direct_glMaterialxv
    PUSH_IF_COMPILING(glMaterialxv);
#endif
    FORWARD_IF_REMOTE(glMaterialxv);
    gles_glMaterialxv(face, pname, params);
}
#endif
#ifndef skip_glMatrixMode
void glMatrixMode(GLenum mode) {
    LOAD_GLES(glMatrixMode);
#ifndef direct_glMatrixMode
    PUSH_IF_COMPILING(glMatrixMode);
#endif
    FORWARD_IF_REMOTE(glMatrixMode);
    gles_glMatrixMode(mode);
}
#endif
#ifndef skip_glMultMatrixf
void glMultMatrixf(const GLfloat * m) {
    LOAD_GLES(glMultMatrixf);
#ifndef direct_glMultMatrixf
    PUSH_IF_COMPILING(glMultMatrixf);
#endif
    FORWARD_IF_REMOTE(glMultMatrixf);
    gles_glMultMatrixf(m);
}
#endif
#ifndef skip_glMultMatrixx
void glMultMatrixx(const GLfixed * m) {
    LOAD_GLES(glMultMatrixx);
#ifndef direct_glMultMatrixx
    PUSH_IF_COMPILING(glMultMatrixx);
#endif
    FORWARD_IF_REMOTE(glMultMatrixx);
    gles_glMultMatrixx(m);
}
#endif
#ifndef skip_glMultiTexCoord4f
void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
    LOAD_GLES(glMultiTexCoord4f);
#ifndef direct_glMultiTexCoord4f
    PUSH_IF_COMPILING(glMultiTexCoord4f);
#endif
    FORWARD_IF_REMOTE(glMultiTexCoord4f);
    gles_glMultiTexCoord4f(target, s, t, r, q);
}
#endif
#ifndef skip_glMultiTexCoord4x
void glMultiTexCoord4x(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q) {
    LOAD_GLES(glMultiTexCoord4x);
#ifndef direct_glMultiTexCoord4x
    PUSH_IF_COMPILING(glMultiTexCoord4x);
#endif
    FORWARD_IF_REMOTE(glMultiTexCoord4x);
    gles_glMultiTexCoord4x(target, s, t, r, q);
}
#endif
#ifndef skip_glNormal3f
void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz) {
    LOAD_GLES(glNormal3f);
#ifndef direct_glNormal3f
    PUSH_IF_COMPILING(glNormal3f);
#endif
    FORWARD_IF_REMOTE(glNormal3f);
    gles_glNormal3f(nx, ny, nz);
}
#endif
#ifndef skip_glNormal3x
void glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz) {
    LOAD_GLES(glNormal3x);
#ifndef direct_glNormal3x
    PUSH_IF_COMPILING(glNormal3x);
#endif
    FORWARD_IF_REMOTE(glNormal3x);
    gles_glNormal3x(nx, ny, nz);
}
#endif
#ifndef skip_glNormalPointer
void glNormalPointer(GLenum type, GLsizei stride, const GLvoid * pointer) {
    LOAD_GLES(glNormalPointer);
#ifndef direct_glNormalPointer
    PUSH_IF_COMPILING(glNormalPointer);
#endif
    FORWARD_IF_REMOTE(glNormalPointer);
    gles_glNormalPointer(type, stride, pointer);
}
#endif
#ifndef skip_glOrthof
void glOrthof(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far) {
    LOAD_GLES(glOrthof);
#ifndef direct_glOrthof
    PUSH_IF_COMPILING(glOrthof);
#endif
    FORWARD_IF_REMOTE(glOrthof);
    gles_glOrthof(left, right, bottom, top, near, far);
}
#endif
#ifndef skip_glOrthox
void glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far) {
    LOAD_GLES(glOrthox);
#ifndef direct_glOrthox
    PUSH_IF_COMPILING(glOrthox);
#endif
    FORWARD_IF_REMOTE(glOrthox);
    gles_glOrthox(left, right, bottom, top, near, far);
}
#endif
#ifndef skip_glPixelStorei
void glPixelStorei(GLenum pname, GLint param) {
    LOAD_GLES(glPixelStorei);
#ifndef direct_glPixelStorei
    PUSH_IF_COMPILING(glPixelStorei);
#endif
    FORWARD_IF_REMOTE(glPixelStorei);
    gles_glPixelStorei(pname, param);
}
#endif
#ifndef skip_glPointParameterf
void glPointParameterf(GLenum pname, GLfloat param) {
    LOAD_GLES(glPointParameterf);
#ifndef direct_glPointParameterf
    PUSH_IF_COMPILING(glPointParameterf);
#endif
    FORWARD_IF_REMOTE(glPointParameterf);
    gles_glPointParameterf(pname, param);
}
#endif
#ifndef skip_glPointParameterfv
void glPointParameterfv(GLenum pname, const GLfloat * params) {
    LOAD_GLES(glPointParameterfv);
#ifndef direct_glPointParameterfv
    PUSH_IF_COMPILING(glPointParameterfv);
#endif
    FORWARD_IF_REMOTE(glPointParameterfv);
    gles_glPointParameterfv(pname, params);
}
#endif
#ifndef skip_glPointParameterx
void glPointParameterx(GLenum pname, GLfixed param) {
    LOAD_GLES(glPointParameterx);
#ifndef direct_glPointParameterx
    PUSH_IF_COMPILING(glPointParameterx);
#endif
    FORWARD_IF_REMOTE(glPointParameterx);
    gles_glPointParameterx(pname, param);
}
#endif
#ifndef skip_glPointParameterxv
void glPointParameterxv(GLenum pname, const GLfixed * params) {
    LOAD_GLES(glPointParameterxv);
#ifndef direct_glPointParameterxv
    PUSH_IF_COMPILING(glPointParameterxv);
#endif
    FORWARD_IF_REMOTE(glPointParameterxv);
    gles_glPointParameterxv(pname, params);
}
#endif
#ifndef skip_glPointSize
void glPointSize(GLfloat size) {
    LOAD_GLES(glPointSize);
#ifndef direct_glPointSize
    PUSH_IF_COMPILING(glPointSize);
#endif
    FORWARD_IF_REMOTE(glPointSize);
    gles_glPointSize(size);
}
#endif
#ifndef skip_glPointSizePointerOES
void glPointSizePointerOES(GLenum type, GLsizei stride, const GLvoid * pointer) {
    LOAD_GLES(glPointSizePointerOES);
#ifndef direct_glPointSizePointerOES
    PUSH_IF_COMPILING(glPointSizePointerOES);
#endif
    FORWARD_IF_REMOTE(glPointSizePointerOES);
    gles_glPointSizePointerOES(type, stride, pointer);
}
#endif
#ifndef skip_glPointSizex
void glPointSizex(GLfixed size) {
    LOAD_GLES(glPointSizex);
#ifndef direct_glPointSizex
    PUSH_IF_COMPILING(glPointSizex);
#endif
    FORWARD_IF_REMOTE(glPointSizex);
    gles_glPointSizex(size);
}
#endif
#ifndef skip_glPolygonOffset
void glPolygonOffset(GLfloat factor, GLfloat units) {
    LOAD_GLES(glPolygonOffset);
#ifndef direct_glPolygonOffset
    PUSH_IF_COMPILING(glPolygonOffset);
#endif
    FORWARD_IF_REMOTE(glPolygonOffset);
    gles_glPolygonOffset(factor, units);
}
#endif
#ifndef skip_glPolygonOffsetx
void glPolygonOffsetx(GLfixed factor, GLfixed units) {
    LOAD_GLES(glPolygonOffsetx);
#ifndef direct_glPolygonOffsetx
    PUSH_IF_COMPILING(glPolygonOffsetx);
#endif
    FORWARD_IF_REMOTE(glPolygonOffsetx);
    gles_glPolygonOffsetx(factor, units);
}
#endif
#ifndef skip_glPopMatrix
void glPopMatrix() {
    LOAD_GLES(glPopMatrix);
#ifndef direct_glPopMatrix
    PUSH_IF_COMPILING(glPopMatrix);
#endif
    FORWARD_IF_REMOTE(glPopMatrix);
    gles_glPopMatrix();
}
#endif
#ifndef skip_glPushMatrix
void glPushMatrix() {
    LOAD_GLES(glPushMatrix);
#ifndef direct_glPushMatrix
    PUSH_IF_COMPILING(glPushMatrix);
#endif
    FORWARD_IF_REMOTE(glPushMatrix);
    gles_glPushMatrix();
}
#endif
#ifndef skip_glReadPixels
void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels) {
    LOAD_GLES(glReadPixels);
#ifndef direct_glReadPixels
    PUSH_IF_COMPILING(glReadPixels);
#endif
    FORWARD_IF_REMOTE(glReadPixels);
    gles_glReadPixels(x, y, width, height, format, type, pixels);
}
#endif
#ifndef skip_glRotatef
void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    LOAD_GLES(glRotatef);
#ifndef direct_glRotatef
    PUSH_IF_COMPILING(glRotatef);
#endif
    FORWARD_IF_REMOTE(glRotatef);
    gles_glRotatef(angle, x, y, z);
}
#endif
#ifndef skip_glRotatex
void glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z) {
    LOAD_GLES(glRotatex);
#ifndef direct_glRotatex
    PUSH_IF_COMPILING(glRotatex);
#endif
    FORWARD_IF_REMOTE(glRotatex);
    gles_glRotatex(angle, x, y, z);
}
#endif
#ifndef skip_glSampleCoverage
void glSampleCoverage(GLclampf value, GLboolean invert) {
    LOAD_GLES(glSampleCoverage);
#ifndef direct_glSampleCoverage
    PUSH_IF_COMPILING(glSampleCoverage);
#endif
    FORWARD_IF_REMOTE(glSampleCoverage);
    gles_glSampleCoverage(value, invert);
}
#endif
#ifndef skip_glSampleCoveragex
void glSampleCoveragex(GLclampx value, GLboolean invert) {
    LOAD_GLES(glSampleCoveragex);
#ifndef direct_glSampleCoveragex
    PUSH_IF_COMPILING(glSampleCoveragex);
#endif
    FORWARD_IF_REMOTE(glSampleCoveragex);
    gles_glSampleCoveragex(value, invert);
}
#endif
#ifndef skip_glScalef
void glScalef(GLfloat x, GLfloat y, GLfloat z) {
    LOAD_GLES(glScalef);
#ifndef direct_glScalef
    PUSH_IF_COMPILING(glScalef);
#endif
    FORWARD_IF_REMOTE(glScalef);
    gles_glScalef(x, y, z);
}
#endif
#ifndef skip_glScalex
void glScalex(GLfixed x, GLfixed y, GLfixed z) {
    LOAD_GLES(glScalex);
#ifndef direct_glScalex
    PUSH_IF_COMPILING(glScalex);
#endif
    FORWARD_IF_REMOTE(glScalex);
    gles_glScalex(x, y, z);
}
#endif
#ifndef skip_glScissor
void glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
    LOAD_GLES(glScissor);
#ifndef direct_glScissor
    PUSH_IF_COMPILING(glScissor);
#endif
    FORWARD_IF_REMOTE(glScissor);
    gles_glScissor(x, y, width, height);
}
#endif
#ifndef skip_glShadeModel
void glShadeModel(GLenum mode) {
    LOAD_GLES(glShadeModel);
#ifndef direct_glShadeModel
    PUSH_IF_COMPILING(glShadeModel);
#endif
    FORWARD_IF_REMOTE(glShadeModel);
    gles_glShadeModel(mode);
}
#endif
#ifndef skip_glStencilFunc
void glStencilFunc(GLenum func, GLint ref, GLuint mask) {
    LOAD_GLES(glStencilFunc);
#ifndef direct_glStencilFunc
    PUSH_IF_COMPILING(glStencilFunc);
#endif
    FORWARD_IF_REMOTE(glStencilFunc);
    gles_glStencilFunc(func, ref, mask);
}
#endif
#ifndef skip_glStencilMask
void glStencilMask(GLuint mask) {
    LOAD_GLES(glStencilMask);
#ifndef direct_glStencilMask
    PUSH_IF_COMPILING(glStencilMask);
#endif
    FORWARD_IF_REMOTE(glStencilMask);
    gles_glStencilMask(mask);
}
#endif
#ifndef skip_glStencilOp
void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) {
    LOAD_GLES(glStencilOp);
#ifndef direct_glStencilOp
    PUSH_IF_COMPILING(glStencilOp);
#endif
    FORWARD_IF_REMOTE(glStencilOp);
    gles_glStencilOp(fail, zfail, zpass);
}
#endif
#ifndef skip_glTexCoordPointer
void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    LOAD_GLES(glTexCoordPointer);
#ifndef direct_glTexCoordPointer
    PUSH_IF_COMPILING(glTexCoordPointer);
#endif
    FORWARD_IF_REMOTE(glTexCoordPointer);
    gles_glTexCoordPointer(size, type, stride, pointer);
}
#endif
#ifndef skip_glTexEnvf
void glTexEnvf(GLenum target, GLenum pname, GLfloat param) {
    LOAD_GLES(glTexEnvf);
#ifndef direct_glTexEnvf
    PUSH_IF_COMPILING(glTexEnvf);
#endif
    FORWARD_IF_REMOTE(glTexEnvf);
    gles_glTexEnvf(target, pname, param);
}
#endif
#ifndef skip_glTexEnvfv
void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params) {
    LOAD_GLES(glTexEnvfv);
#ifndef direct_glTexEnvfv
    PUSH_IF_COMPILING(glTexEnvfv);
#endif
    FORWARD_IF_REMOTE(glTexEnvfv);
    gles_glTexEnvfv(target, pname, params);
}
#endif
#ifndef skip_glTexEnvi
void glTexEnvi(GLenum target, GLenum pname, GLint param) {
    LOAD_GLES(glTexEnvi);
#ifndef direct_glTexEnvi
    PUSH_IF_COMPILING(glTexEnvi);
#endif
    FORWARD_IF_REMOTE(glTexEnvi);
    gles_glTexEnvi(target, pname, param);
}
#endif
#ifndef skip_glTexEnviv
void glTexEnviv(GLenum target, GLenum pname, const GLint * params) {
    LOAD_GLES(glTexEnviv);
#ifndef direct_glTexEnviv
    PUSH_IF_COMPILING(glTexEnviv);
#endif
    FORWARD_IF_REMOTE(glTexEnviv);
    gles_glTexEnviv(target, pname, params);
}
#endif
#ifndef skip_glTexEnvx
void glTexEnvx(GLenum target, GLenum pname, GLfixed param) {
    LOAD_GLES(glTexEnvx);
#ifndef direct_glTexEnvx
    PUSH_IF_COMPILING(glTexEnvx);
#endif
    FORWARD_IF_REMOTE(glTexEnvx);
    gles_glTexEnvx(target, pname, param);
}
#endif
#ifndef skip_glTexEnvxv
void glTexEnvxv(GLenum target, GLenum pname, const GLfixed * params) {
    LOAD_GLES(glTexEnvxv);
#ifndef direct_glTexEnvxv
    PUSH_IF_COMPILING(glTexEnvxv);
#endif
    FORWARD_IF_REMOTE(glTexEnvxv);
    gles_glTexEnvxv(target, pname, params);
}
#endif
#ifndef skip_glTexImage2D
void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels) {
    LOAD_GLES(glTexImage2D);
#ifndef direct_glTexImage2D
    PUSH_IF_COMPILING(glTexImage2D);
#endif
    FORWARD_IF_REMOTE(glTexImage2D);
    gles_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}
#endif
#ifndef skip_glTexParameterf
void glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
    LOAD_GLES(glTexParameterf);
#ifndef direct_glTexParameterf
    PUSH_IF_COMPILING(glTexParameterf);
#endif
    FORWARD_IF_REMOTE(glTexParameterf);
    gles_glTexParameterf(target, pname, param);
}
#endif
#ifndef skip_glTexParameterfv
void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params) {
    LOAD_GLES(glTexParameterfv);
#ifndef direct_glTexParameterfv
    PUSH_IF_COMPILING(glTexParameterfv);
#endif
    FORWARD_IF_REMOTE(glTexParameterfv);
    gles_glTexParameterfv(target, pname, params);
}
#endif
#ifndef skip_glTexParameteri
void glTexParameteri(GLenum target, GLenum pname, GLint param) {
    LOAD_GLES(glTexParameteri);
#ifndef direct_glTexParameteri
    PUSH_IF_COMPILING(glTexParameteri);
#endif
    FORWARD_IF_REMOTE(glTexParameteri);
    gles_glTexParameteri(target, pname, param);
}
#endif
#ifndef skip_glTexParameteriv
void glTexParameteriv(GLenum target, GLenum pname, const GLint * params) {
    LOAD_GLES(glTexParameteriv);
#ifndef direct_glTexParameteriv
    PUSH_IF_COMPILING(glTexParameteriv);
#endif
    FORWARD_IF_REMOTE(glTexParameteriv);
    gles_glTexParameteriv(target, pname, params);
}
#endif
#ifndef skip_glTexParameterx
void glTexParameterx(GLenum target, GLenum pname, GLfixed param) {
    LOAD_GLES(glTexParameterx);
#ifndef direct_glTexParameterx
    PUSH_IF_COMPILING(glTexParameterx);
#endif
    FORWARD_IF_REMOTE(glTexParameterx);
    gles_glTexParameterx(target, pname, param);
}
#endif
#ifndef skip_glTexParameterxv
void glTexParameterxv(GLenum target, GLenum pname, const GLfixed * params) {
    LOAD_GLES(glTexParameterxv);
#ifndef direct_glTexParameterxv
    PUSH_IF_COMPILING(glTexParameterxv);
#endif
    FORWARD_IF_REMOTE(glTexParameterxv);
    gles_glTexParameterxv(target, pname, params);
}
#endif
#ifndef skip_glTexSubImage2D
void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) {
    LOAD_GLES(glTexSubImage2D);
#ifndef direct_glTexSubImage2D
    PUSH_IF_COMPILING(glTexSubImage2D);
#endif
    FORWARD_IF_REMOTE(glTexSubImage2D);
    gles_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}
#endif
#ifndef skip_glTranslatef
void glTranslatef(GLfloat x, GLfloat y, GLfloat z) {
    LOAD_GLES(glTranslatef);
#ifndef direct_glTranslatef
    PUSH_IF_COMPILING(glTranslatef);
#endif
    FORWARD_IF_REMOTE(glTranslatef);
    gles_glTranslatef(x, y, z);
}
#endif
#ifndef skip_glTranslatex
void glTranslatex(GLfixed x, GLfixed y, GLfixed z) {
    LOAD_GLES(glTranslatex);
#ifndef direct_glTranslatex
    PUSH_IF_COMPILING(glTranslatex);
#endif
    FORWARD_IF_REMOTE(glTranslatex);
    gles_glTranslatex(x, y, z);
}
#endif
#ifndef skip_glVertexPointer
void glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    LOAD_GLES(glVertexPointer);
#ifndef direct_glVertexPointer
    PUSH_IF_COMPILING(glVertexPointer);
#endif
    FORWARD_IF_REMOTE(glVertexPointer);
    gles_glVertexPointer(size, type, stride, pointer);
}
#endif
#ifndef skip_glViewport
void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
    LOAD_GLES(glViewport);
#ifndef direct_glViewport
    PUSH_IF_COMPILING(glViewport);
#endif
    FORWARD_IF_REMOTE(glViewport);
    gles_glViewport(x, y, width, height);
}
#endif
#endif

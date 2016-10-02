#ifdef USE_ES2
#include "stub2.h"
#include "../loader.h"

void stub_glActiveTexture(GLenum texture) {
    debugf("stub glActiveTexture(0x%04X);\n", texture);
}
void stub_glAlphaFunc(GLenum func, GLclampf ref) {
    debugf("stub glAlphaFunc(0x%04X, %0.2f);\n", func, ref);
}
void stub_glAlphaFuncx(GLenum func, GLclampx ref) {
    debugf("stub glAlphaFuncx(0x%04X, %d);\n", func, ref);
}
void stub_glBindBuffer(GLenum target, GLuint buffer) {
    debugf("stub glBindBuffer(0x%04X, %u);\n", target, buffer);
}
void stub_glBindTexture(GLenum target, GLuint texture) {
    debugf("stub glBindTexture(0x%04X, %u);\n", target, texture);
}
void stub_glBlendColorOES(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    debugf("stub glBlendColorOES(%0.2f, %0.2f, %0.2f, %0.2f);\n", red, green, blue, alpha);
}
void stub_glBlendEquationOES(GLenum mode) {
    debugf("stub glBlendEquationOES(0x%04X);\n", mode);
}
void stub_glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha) {
    debugf("stub glBlendEquationSeparateOES(0x%04X, 0x%04X);\n", modeRGB, modeAlpha);
}
void stub_glBlendFunc(GLenum sfactor, GLenum dfactor) {
    debugf("stub glBlendFunc(0x%04X, 0x%04X);\n", sfactor, dfactor);
}
void stub_glBlendFuncSeparateOES(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
    debugf("stub glBlendFuncSeparateOES(0x%04X, 0x%04X, 0x%04X, 0x%04X);\n", sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}
void stub_glBufferData(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage) {
    debugf("stub glBufferData(0x%04X, %td, %p, 0x%04X);\n", target, size, data, usage);
}
void stub_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data) {
    debugf("stub glBufferSubData(0x%04X, %td, %td, %p);\n", target, offset, size, data);
}
void stub_glClear(GLbitfield mask) {
    debugf("stub glClear(%d);\n", mask);
}
void stub_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    debugf("stub glClearColor(%0.2f, %0.2f, %0.2f, %0.2f);\n", red, green, blue, alpha);
}
void stub_glClearColorx(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha) {
    debugf("stub glClearColorx(%d, %d, %d, %d);\n", red, green, blue, alpha);
}
void stub_glClearDepthf(GLclampf depth) {
    debugf("stub glClearDepthf(%0.2f);\n", depth);
}
void stub_glClearDepthx(GLclampx depth) {
    debugf("stub glClearDepthx(%d);\n", depth);
}
void stub_glClearStencil(GLint s) {
    debugf("stub glClearStencil(%d);\n", s);
}
void stub_glClientActiveTexture(GLenum texture) {
    debugf("stub glClientActiveTexture(0x%04X);\n", texture);
}
void stub_glClipPlanef(GLenum plane, const GLfloat * equation) {
    debugf("stub glClipPlanef(0x%04X, %p);\n", plane, equation);
}
void stub_glClipPlanex(GLenum plane, const GLfixed * equation) {
    debugf("stub glClipPlanex(0x%04X, %p);\n", plane, equation);
}
void stub_glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    debugf("stub glColor4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", red, green, blue, alpha);
}
void stub_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) {
    debugf("stub glColor4ub(%c, %c, %c, %c);\n", red, green, blue, alpha);
}
void stub_glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
    debugf("stub glColor4x(%d, %d, %d, %d);\n", red, green, blue, alpha);
}
void stub_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
    debugf("stub glColorMask(%d, %d, %d, %d);\n", red, green, blue, alpha);
}
void stub_glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    debugf("stub glColorPointer(%d, 0x%04X, %d, %p);\n", size, type, stride, pointer);
}
void stub_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data) {
    debugf("stub glCompressedTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %p);\n", target, level, internalformat, width, height, border, imageSize, data);
}
void stub_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data) {
    debugf("stub glCompressedTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, %d, %p);\n", target, level, xoffset, yoffset, width, height, format, imageSize, data);
}
void stub_glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
    debugf("stub glCopyTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %d);\n", target, level, internalformat, x, y, width, height, border);
}
void stub_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
    debugf("stub glCopyTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, %d, %d);\n", target, level, xoffset, yoffset, x, y, width, height);
}
void stub_glCullFace(GLenum mode) {
    debugf("stub glCullFace(0x%04X);\n", mode);
}
void stub_glDeleteBuffers(GLsizei n, const GLuint * buffers) {
    debugf("stub glDeleteBuffers(%d, %p);\n", n, buffers);
}
void stub_glDeleteTextures(GLsizei n, const GLuint * textures) {
    debugf("stub glDeleteTextures(%d, %p);\n", n, textures);
}
void stub_glDepthFunc(GLenum func) {
    debugf("stub glDepthFunc(0x%04X);\n", func);
}
void stub_glDepthMask(GLboolean flag) {
    debugf("stub glDepthMask(%d);\n", flag);
}
void stub_glDepthRangef(GLclampf near, GLclampf far) {
    debugf("stub glDepthRangef(%0.2f, %0.2f);\n", near, far);
}
void stub_glDepthRangex(GLclampx near, GLclampx far) {
    debugf("stub glDepthRangex(%d, %d);\n", near, far);
}
void stub_glDisable(GLenum cap) {
    debugf("stub glDisable(0x%04X);\n", cap);
}
void stub_glDisableClientState(GLenum array) {
    debugf("stub glDisableClientState(0x%04X);\n", array);
}
void stub_glDrawArrays(GLenum mode, GLint first, GLsizei count) {
    debugf("stub glDrawArrays(0x%04X, %d, %d);\n", mode, first, count);
}
void stub_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices) {
    debugf("stub glDrawElements(0x%04X, %d, 0x%04X, %p);\n", mode, count, type, indices);
}
void stub_glEnable(GLenum cap) {
    debugf("stub glEnable(0x%04X);\n", cap);
}
void stub_glEnableClientState(GLenum array) {
    debugf("stub glEnableClientState(0x%04X);\n", array);
}
void stub_glFinish() {
    debugf("stub glFinish();\n");
}
void stub_glFlush() {
    debugf("stub glFlush();\n");
}
void stub_glFogf(GLenum pname, GLfloat param) {
    debugf("stub glFogf(0x%04X, %0.2f);\n", pname, param);
}
void stub_glFogfv(GLenum pname, const GLfloat * params) {
    debugf("stub glFogfv(0x%04X, %p);\n", pname, params);
}
void stub_glFogx(GLenum pname, GLfixed param) {
    debugf("stub glFogx(0x%04X, %d);\n", pname, param);
}
void stub_glFogxv(GLenum pname, const GLfixed * params) {
    debugf("stub glFogxv(0x%04X, %p);\n", pname, params);
}
void stub_glFrontFace(GLenum mode) {
    debugf("stub glFrontFace(0x%04X);\n", mode);
}
void stub_glFrustumf(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far) {
    debugf("stub glFrustumf(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", left, right, bottom, top, near, far);
}
void stub_glFrustumx(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far) {
    debugf("stub glFrustumx(%d, %d, %d, %d, %d, %d);\n", left, right, bottom, top, near, far);
}
void stub_glGenBuffers(GLsizei n, GLuint * buffers) {
    debugf("stub glGenBuffers(%d, %p);\n", n, buffers);
}
void stub_glGenTextures(GLsizei n, GLuint * textures) {
    debugf("stub glGenTextures(%d, %p);\n", n, textures);
}
void stub_glGetBooleanv(GLenum pname, GLboolean * params) {
    debugf("stub glGetBooleanv(0x%04X, %p);\n", pname, params);
}
void stub_glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params) {
    debugf("stub glGetBufferParameteriv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glGetClipPlanef(GLenum plane, GLfloat * equation) {
    debugf("stub glGetClipPlanef(0x%04X, %p);\n", plane, equation);
}
void stub_glGetClipPlanex(GLenum plane, GLfixed * equation) {
    debugf("stub glGetClipPlanex(0x%04X, %p);\n", plane, equation);
}
GLenum stub_glGetError() {
    debugf("stub glGetError();\n");
    return 0;
}
void stub_glGetFixedv(GLenum pname, GLfixed * params) {
    debugf("stub glGetFixedv(0x%04X, %p);\n", pname, params);
}
void stub_glGetFloatv(GLenum pname, GLfloat * params) {
    debugf("stub glGetFloatv(0x%04X, %p);\n", pname, params);
}
void stub_glGetIntegerv(GLenum pname, GLint * params) {
    debugf("stub glGetIntegerv(0x%04X, %p);\n", pname, params);
}
void stub_glGetLightfv(GLenum light, GLenum pname, GLfloat * params) {
    debugf("stub glGetLightfv(0x%04X, 0x%04X, %p);\n", light, pname, params);
}
void stub_glGetLightxv(GLenum light, GLenum pname, GLfixed * params) {
    debugf("stub glGetLightxv(0x%04X, 0x%04X, %p);\n", light, pname, params);
}
void stub_glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params) {
    debugf("stub glGetMaterialfv(0x%04X, 0x%04X, %p);\n", face, pname, params);
}
void stub_glGetMaterialxv(GLenum face, GLenum pname, GLfixed * params) {
    debugf("stub glGetMaterialxv(0x%04X, 0x%04X, %p);\n", face, pname, params);
}
void stub_glGetPointerv(GLenum pname, GLvoid ** params) {
    debugf("stub glGetPointerv(0x%04X, %p);\n", pname, params);
}
const GLubyte * stub_glGetString(GLenum name) {
    debugf("stub glGetString(0x%04X);\n", name);
    return 0;
}
void stub_glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params) {
    debugf("stub glGetTexEnvfv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glGetTexEnviv(GLenum target, GLenum pname, GLint * params) {
    debugf("stub glGetTexEnviv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glGetTexEnvxv(GLenum target, GLenum pname, GLfixed * params) {
    debugf("stub glGetTexEnvxv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params) {
    debugf("stub glGetTexParameterfv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glGetTexParameteriv(GLenum target, GLenum pname, GLint * params) {
    debugf("stub glGetTexParameteriv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glGetTexParameterxv(GLenum target, GLenum pname, GLfixed * params) {
    debugf("stub glGetTexParameterxv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glHint(GLenum target, GLenum mode) {
    debugf("stub glHint(0x%04X, 0x%04X);\n", target, mode);
}
GLboolean stub_glIsBuffer(GLuint buffer) {
    debugf("stub glIsBuffer(%u);\n", buffer);
    return 0;
}
GLboolean stub_glIsEnabled(GLenum cap) {
    debugf("stub glIsEnabled(0x%04X);\n", cap);
    return 0;
}
GLboolean stub_glIsTexture(GLuint texture) {
    debugf("stub glIsTexture(%u);\n", texture);
    return 0;
}
void stub_glLightModelf(GLenum pname, GLfloat param) {
    debugf("stub glLightModelf(0x%04X, %0.2f);\n", pname, param);
}
void stub_glLightModelfv(GLenum pname, const GLfloat * params) {
    debugf("stub glLightModelfv(0x%04X, %p);\n", pname, params);
}
void stub_glLightModelx(GLenum pname, GLfixed param) {
    debugf("stub glLightModelx(0x%04X, %d);\n", pname, param);
}
void stub_glLightModelxv(GLenum pname, const GLfixed * params) {
    debugf("stub glLightModelxv(0x%04X, %p);\n", pname, params);
}
void stub_glLightf(GLenum light, GLenum pname, GLfloat param) {
    debugf("stub glLightf(0x%04X, 0x%04X, %0.2f);\n", light, pname, param);
}
void stub_glLightfv(GLenum light, GLenum pname, const GLfloat * params) {
    debugf("stub glLightfv(0x%04X, 0x%04X, %p);\n", light, pname, params);
}
void stub_glLightx(GLenum light, GLenum pname, GLfixed param) {
    debugf("stub glLightx(0x%04X, 0x%04X, %d);\n", light, pname, param);
}
void stub_glLightxv(GLenum light, GLenum pname, const GLfixed * params) {
    debugf("stub glLightxv(0x%04X, 0x%04X, %p);\n", light, pname, params);
}
void stub_glLineWidth(GLfloat width) {
    debugf("stub glLineWidth(%0.2f);\n", width);
}
void stub_glLineWidthx(GLfixed width) {
    debugf("stub glLineWidthx(%d);\n", width);
}
void stub_glLoadIdentity() {
    debugf("stub glLoadIdentity();\n");
}
void stub_glLoadMatrixf(const GLfloat * m) {
    debugf("stub glLoadMatrixf(%p);\n", m);
}
void stub_glLoadMatrixx(const GLfixed * m) {
    debugf("stub glLoadMatrixx(%p);\n", m);
}
void stub_glLogicOp(GLenum opcode) {
    debugf("stub glLogicOp(0x%04X);\n", opcode);
}
void stub_glMaterialf(GLenum face, GLenum pname, GLfloat param) {
    debugf("stub glMaterialf(0x%04X, 0x%04X, %0.2f);\n", face, pname, param);
}
void stub_glMaterialfv(GLenum face, GLenum pname, const GLfloat * params) {
    debugf("stub glMaterialfv(0x%04X, 0x%04X, %p);\n", face, pname, params);
}
void stub_glMaterialx(GLenum face, GLenum pname, GLfixed param) {
    debugf("stub glMaterialx(0x%04X, 0x%04X, %d);\n", face, pname, param);
}
void stub_glMaterialxv(GLenum face, GLenum pname, const GLfixed * params) {
    debugf("stub glMaterialxv(0x%04X, 0x%04X, %p);\n", face, pname, params);
}
void stub_glMatrixMode(GLenum mode) {
    debugf("stub glMatrixMode(0x%04X);\n", mode);
}
void stub_glMultMatrixf(const GLfloat * m) {
    debugf("stub glMultMatrixf(%p);\n", m);
}
void stub_glMultMatrixx(const GLfixed * m) {
    debugf("stub glMultMatrixx(%p);\n", m);
}
void stub_glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
    debugf("stub glMultiTexCoord4f(0x%04X, %0.2f, %0.2f, %0.2f, %0.2f);\n", target, s, t, r, q);
}
void stub_glMultiTexCoord4x(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q) {
    debugf("stub glMultiTexCoord4x(0x%04X, %d, %d, %d, %d);\n", target, s, t, r, q);
}
void stub_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz) {
    debugf("stub glNormal3f(%0.2f, %0.2f, %0.2f);\n", nx, ny, nz);
}
void stub_glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz) {
    debugf("stub glNormal3x(%d, %d, %d);\n", nx, ny, nz);
}
void stub_glNormalPointer(GLenum type, GLsizei stride, const GLvoid * pointer) {
    debugf("stub glNormalPointer(0x%04X, %d, %p);\n", type, stride, pointer);
}
void stub_glOrthof(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far) {
    debugf("stub glOrthof(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", left, right, bottom, top, near, far);
}
void stub_glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far) {
    debugf("stub glOrthox(%d, %d, %d, %d, %d, %d);\n", left, right, bottom, top, near, far);
}
void stub_glPixelStorei(GLenum pname, GLint param) {
    debugf("stub glPixelStorei(0x%04X, %d);\n", pname, param);
}
void stub_glPointParameterf(GLenum pname, GLfloat param) {
    debugf("stub glPointParameterf(0x%04X, %0.2f);\n", pname, param);
}
void stub_glPointParameterfv(GLenum pname, const GLfloat * params) {
    debugf("stub glPointParameterfv(0x%04X, %p);\n", pname, params);
}
void stub_glPointParameterx(GLenum pname, GLfixed param) {
    debugf("stub glPointParameterx(0x%04X, %d);\n", pname, param);
}
void stub_glPointParameterxv(GLenum pname, const GLfixed * params) {
    debugf("stub glPointParameterxv(0x%04X, %p);\n", pname, params);
}
void stub_glPointSize(GLfloat size) {
    debugf("stub glPointSize(%0.2f);\n", size);
}
void stub_glPointSizePointerOES(GLenum type, GLsizei stride, const GLvoid * pointer) {
    debugf("stub glPointSizePointerOES(0x%04X, %d, %p);\n", type, stride, pointer);
}
void stub_glPointSizex(GLfixed size) {
    debugf("stub glPointSizex(%d);\n", size);
}
void stub_glPolygonOffset(GLfloat factor, GLfloat units) {
    debugf("stub glPolygonOffset(%0.2f, %0.2f);\n", factor, units);
}
void stub_glPolygonOffsetx(GLfixed factor, GLfixed units) {
    debugf("stub glPolygonOffsetx(%d, %d);\n", factor, units);
}
void stub_glPopMatrix() {
    debugf("stub glPopMatrix();\n");
}
void stub_glPushMatrix() {
    debugf("stub glPushMatrix();\n");
}
void stub_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels) {
    debugf("stub glReadPixels(%d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", x, y, width, height, format, type, pixels);
}
void stub_glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    debugf("stub glRotatef(%0.2f, %0.2f, %0.2f, %0.2f);\n", angle, x, y, z);
}
void stub_glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z) {
    debugf("stub glRotatex(%d, %d, %d, %d);\n", angle, x, y, z);
}
void stub_glSampleCoverage(GLclampf value, GLboolean invert) {
    debugf("stub glSampleCoverage(%0.2f, %d);\n", value, invert);
}
void stub_glSampleCoveragex(GLclampx value, GLboolean invert) {
    debugf("stub glSampleCoveragex(%d, %d);\n", value, invert);
}
void stub_glScalef(GLfloat x, GLfloat y, GLfloat z) {
    debugf("stub glScalef(%0.2f, %0.2f, %0.2f);\n", x, y, z);
}
void stub_glScalex(GLfixed x, GLfixed y, GLfixed z) {
    debugf("stub glScalex(%d, %d, %d);\n", x, y, z);
}
void stub_glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
    debugf("stub glScissor(%d, %d, %d, %d);\n", x, y, width, height);
}
void stub_glShadeModel(GLenum mode) {
    debugf("stub glShadeModel(0x%04X);\n", mode);
}
void stub_glStencilFunc(GLenum func, GLint ref, GLuint mask) {
    debugf("stub glStencilFunc(0x%04X, %d, %u);\n", func, ref, mask);
}
void stub_glStencilMask(GLuint mask) {
    debugf("stub glStencilMask(%u);\n", mask);
}
void stub_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) {
    debugf("stub glStencilOp(0x%04X, 0x%04X, 0x%04X);\n", fail, zfail, zpass);
}
void stub_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    debugf("stub glTexCoordPointer(%d, 0x%04X, %d, %p);\n", size, type, stride, pointer);
}
void stub_glTexEnvf(GLenum target, GLenum pname, GLfloat param) {
    debugf("stub glTexEnvf(0x%04X, 0x%04X, %0.2f);\n", target, pname, param);
}
void stub_glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params) {
    debugf("stub glTexEnvfv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glTexEnvi(GLenum target, GLenum pname, GLint param) {
    debugf("stub glTexEnvi(0x%04X, 0x%04X, %d);\n", target, pname, param);
}
void stub_glTexEnviv(GLenum target, GLenum pname, const GLint * params) {
    debugf("stub glTexEnviv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glTexEnvx(GLenum target, GLenum pname, GLfixed param) {
    debugf("stub glTexEnvx(0x%04X, 0x%04X, %d);\n", target, pname, param);
}
void stub_glTexEnvxv(GLenum target, GLenum pname, const GLfixed * params) {
    debugf("stub glTexEnvxv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels) {
    debugf("stub glTexImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", target, level, internalformat, width, height, border, format, type, pixels);
}
void stub_glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
    debugf("stub glTexParameterf(0x%04X, 0x%04X, %0.2f);\n", target, pname, param);
}
void stub_glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params) {
    debugf("stub glTexParameterfv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glTexParameteri(GLenum target, GLenum pname, GLint param) {
    debugf("stub glTexParameteri(0x%04X, 0x%04X, %d);\n", target, pname, param);
}
void stub_glTexParameteriv(GLenum target, GLenum pname, const GLint * params) {
    debugf("stub glTexParameteriv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glTexParameterx(GLenum target, GLenum pname, GLfixed param) {
    debugf("stub glTexParameterx(0x%04X, 0x%04X, %d);\n", target, pname, param);
}
void stub_glTexParameterxv(GLenum target, GLenum pname, const GLfixed * params) {
    debugf("stub glTexParameterxv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) {
    debugf("stub glTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", target, level, xoffset, yoffset, width, height, format, type, pixels);
}
void stub_glTranslatef(GLfloat x, GLfloat y, GLfloat z) {
    debugf("stub glTranslatef(%0.2f, %0.2f, %0.2f);\n", x, y, z);
}
void stub_glTranslatex(GLfixed x, GLfixed y, GLfixed z) {
    debugf("stub glTranslatex(%d, %d, %d);\n", x, y, z);
}
void stub_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    debugf("stub glVertexPointer(%d, 0x%04X, %d, %p);\n", size, type, stride, pointer);
}
void stub_glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
    debugf("stub glViewport(%d, %d, %d, %d);\n", x, y, width, height);
}

#endif

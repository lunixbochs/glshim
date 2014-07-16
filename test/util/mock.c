#ifndef USE_ES2
#include "wrap/gles.h"


void gles_glActiveTexture(GLenum texture) {
    printf("glActiveTexture(%u);\n", texture);
    return (void)0;
}
void gles_glAlphaFunc(GLenum func, GLclampf ref) {
    printf("glAlphaFunc(%u, %p);\n", func, ref);
    return (void)0;
}
void gles_glAlphaFuncx(GLenum func, GLclampx ref) {
    printf("glAlphaFuncx(%u, %p);\n", func, ref);
    return (void)0;
}
void gles_glBindBuffer(GLenum target, GLuint buffer) {
    printf("glBindBuffer(%u, %u);\n", target, buffer);
    return (void)0;
}
void gles_glBindTexture(GLenum target, GLuint texture) {
    printf("glBindTexture(%u, %u);\n", target, texture);
    return (void)0;
}
void gles_glBlendFunc(GLenum sfactor, GLenum dfactor) {
    printf("glBlendFunc(%u, %u);\n", sfactor, dfactor);
    return (void)0;
}
void gles_glBufferData(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage) {
    printf("glBufferData(%u, %d, %p, %u);\n", target, size, data, usage);
    return (void)0;
}
void gles_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data) {
    printf("glBufferSubData(%u, %d, %d, %p);\n", target, offset, size, data);
    return (void)0;
}
void gles_glClear(GLbitfield mask) {
    printf("glClear(%d);\n", mask);
    return (void)0;
}
void gles_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    printf("glClearColor(%p, %p, %p, %p);\n", red, green, blue, alpha);
    return (void)0;
}
void gles_glClearColorx(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha) {
    printf("glClearColorx(%p, %p, %p, %p);\n", red, green, blue, alpha);
    return (void)0;
}
void gles_glClearDepthf(GLclampf depth) {
    printf("glClearDepthf(%p);\n", depth);
    return (void)0;
}
void gles_glClearDepthx(GLclampx depth) {
    printf("glClearDepthx(%p);\n", depth);
    return (void)0;
}
void gles_glClearStencil(GLint s) {
    printf("glClearStencil(%d);\n", s);
    return (void)0;
}
void gles_glClientActiveTexture(GLenum texture) {
    printf("glClientActiveTexture(%u);\n", texture);
    return (void)0;
}
void gles_glClipPlanef(GLenum plane, const GLfloat * equation) {
    printf("glClipPlanef(%u, %p);\n", plane, equation);
    return (void)0;
}
void gles_glClipPlanex(GLenum plane, const GLfixed * equation) {
    printf("glClipPlanex(%u, %p);\n", plane, equation);
    return (void)0;
}
void gles_glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    printf("glColor4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", red, green, blue, alpha);
    return (void)0;
}
void gles_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) {
    printf("glColor4ub(%c, %c, %c, %c);\n", red, green, blue, alpha);
    return (void)0;
}
void gles_glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
    printf("glColor4x(%p, %p, %p, %p);\n", red, green, blue, alpha);
    return (void)0;
}
void gles_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
    printf("glColorMask(%d, %d, %d, %d);\n", red, green, blue, alpha);
    return (void)0;
}
void gles_glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    printf("glColorPointer(%d, %u, %d, %p);\n", size, type, stride, pointer);
    return (void)0;
}
void gles_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data) {
    printf("glCompressedTexImage2D(%u, %d, %u, %d, %d, %d, %d, %p);\n", target, level, internalformat, width, height, border, imageSize, data);
    return (void)0;
}
void gles_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data) {
    printf("glCompressedTexSubImage2D(%u, %d, %d, %d, %d, %d, %u, %d, %p);\n", target, level, xoffset, yoffset, width, height, format, imageSize, data);
    return (void)0;
}
void gles_glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
    printf("glCopyTexImage2D(%u, %d, %u, %d, %d, %d, %d, %d);\n", target, level, internalformat, x, y, width, height, border);
    return (void)0;
}
void gles_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
    printf("glCopyTexSubImage2D(%u, %d, %d, %d, %d, %d, %d, %d);\n", target, level, xoffset, yoffset, x, y, width, height);
    return (void)0;
}
void gles_glCullFace(GLenum mode) {
    printf("glCullFace(%u);\n", mode);
    return (void)0;
}
void gles_glDeleteBuffers(GLsizei n, const GLuint * buffers) {
    printf("glDeleteBuffers(%d, %p);\n", n, buffers);
    return (void)0;
}
void gles_glDeleteTextures(GLsizei n, const GLuint * textures) {
    printf("glDeleteTextures(%d, %p);\n", n, textures);
    return (void)0;
}
void gles_glDepthFunc(GLenum func) {
    printf("glDepthFunc(%u);\n", func);
    return (void)0;
}
void gles_glDepthMask(GLboolean flag) {
    printf("glDepthMask(%d);\n", flag);
    return (void)0;
}
void gles_glDepthRangef(GLclampf near, GLclampf far) {
    printf("glDepthRangef(%p, %p);\n", near, far);
    return (void)0;
}
void gles_glDepthRangex(GLclampx near, GLclampx far) {
    printf("glDepthRangex(%p, %p);\n", near, far);
    return (void)0;
}
void gles_glDisable(GLenum cap) {
    printf("glDisable(%u);\n", cap);
    return (void)0;
}
void gles_glDisableClientState(GLenum array) {
    printf("glDisableClientState(%u);\n", array);
    return (void)0;
}
void gles_glDrawArrays(GLenum mode, GLint first, GLsizei count) {
    printf("glDrawArrays(%u, %d, %d);\n", mode, first, count);
    return (void)0;
}
void gles_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices) {
    printf("glDrawElements(%u, %d, %u, %p);\n", mode, count, type, indices);
    return (void)0;
}
void gles_glEnable(GLenum cap) {
    printf("glEnable(%u);\n", cap);
    return (void)0;
}
void gles_glEnableClientState(GLenum array) {
    printf("glEnableClientState(%u);\n", array);
    return (void)0;
}
void gles_glFinish() {
    printf("glFinish();\n");
    return (void)0;
}
void gles_glFlush() {
    printf("glFlush();\n");
    return (void)0;
}
void gles_glFogf(GLenum pname, GLfloat param) {
    printf("glFogf(%u, %0.2f);\n", pname, param);
    return (void)0;
}
void gles_glFogfv(GLenum pname, const GLfloat * params) {
    printf("glFogfv(%u, %p);\n", pname, params);
    return (void)0;
}
void gles_glFogx(GLenum pname, GLfixed param) {
    printf("glFogx(%u, %p);\n", pname, param);
    return (void)0;
}
void gles_glFogxv(GLenum pname, const GLfixed * params) {
    printf("glFogxv(%u, %p);\n", pname, params);
    return (void)0;
}
void gles_glFrontFace(GLenum mode) {
    printf("glFrontFace(%u);\n", mode);
    return (void)0;
}
void gles_glFrustumf(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far) {
    printf("glFrustumf(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", left, right, bottom, top, near, far);
    return (void)0;
}
void gles_glFrustumx(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far) {
    printf("glFrustumx(%p, %p, %p, %p, %p, %p);\n", left, right, bottom, top, near, far);
    return (void)0;
}
void gles_glGenBuffers(GLsizei n, GLuint * buffers) {
    printf("glGenBuffers(%d, %p);\n", n, buffers);
    return (void)0;
}
void gles_glGenTextures(GLsizei n, GLuint * textures) {
    printf("glGenTextures(%d, %p);\n", n, textures);
    return (void)0;
}
void gles_glGetBooleanv(GLenum pname, GLboolean * params) {
    printf("glGetBooleanv(%u, %p);\n", pname, params);
    return (void)0;
}
void gles_glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params) {
    printf("glGetBufferParameteriv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glGetClipPlanef(GLenum plane, GLfloat * equation) {
    printf("glGetClipPlanef(%u, %p);\n", plane, equation);
    return (void)0;
}
void gles_glGetClipPlanex(GLenum plane, GLfixed * equation) {
    printf("glGetClipPlanex(%u, %p);\n", plane, equation);
    return (void)0;
}
GLenum gles_glGetError() {
    printf("glGetError();\n");
    return (GLenum)0;
}
void gles_glGetFixedv(GLenum pname, GLfixed * params) {
    printf("glGetFixedv(%u, %p);\n", pname, params);
    return (void)0;
}
void gles_glGetFloatv(GLenum pname, GLfloat * params) {
    printf("glGetFloatv(%u, %p);\n", pname, params);
    return (void)0;
}
void gles_glGetIntegerv(GLenum pname, GLint * params) {
    printf("glGetIntegerv(%u, %p);\n", pname, params);
    return (void)0;
}
void gles_glGetLightfv(GLenum light, GLenum pname, GLfloat * params) {
    printf("glGetLightfv(%u, %u, %p);\n", light, pname, params);
    return (void)0;
}
void gles_glGetLightxv(GLenum light, GLenum pname, GLfixed * params) {
    printf("glGetLightxv(%u, %u, %p);\n", light, pname, params);
    return (void)0;
}
void gles_glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params) {
    printf("glGetMaterialfv(%u, %u, %p);\n", face, pname, params);
    return (void)0;
}
void gles_glGetMaterialxv(GLenum face, GLenum pname, GLfixed * params) {
    printf("glGetMaterialxv(%u, %u, %p);\n", face, pname, params);
    return (void)0;
}
void gles_glGetPointerv(GLenum pname, GLvoid ** params) {
    printf("glGetPointerv(%u, %p);\n", pname, params);
    return (void)0;
}
const GLubyte * gles_glGetString(GLenum name) {
    printf("glGetString(%u);\n", name);
    return (const GLubyte *)0;
}
void gles_glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params) {
    printf("glGetTexEnvfv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glGetTexEnviv(GLenum target, GLenum pname, GLint * params) {
    printf("glGetTexEnviv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glGetTexEnvxv(GLenum target, GLenum pname, GLfixed * params) {
    printf("glGetTexEnvxv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params) {
    printf("glGetTexParameterfv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glGetTexParameteriv(GLenum target, GLenum pname, GLint * params) {
    printf("glGetTexParameteriv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glGetTexParameterxv(GLenum target, GLenum pname, GLfixed * params) {
    printf("glGetTexParameterxv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glHint(GLenum target, GLenum mode) {
    printf("glHint(%u, %u);\n", target, mode);
    return (void)0;
}
GLboolean gles_glIsBuffer(GLuint buffer) {
    printf("glIsBuffer(%u);\n", buffer);
    return (GLboolean)0;
}
GLboolean gles_glIsEnabled(GLenum cap) {
    printf("glIsEnabled(%u);\n", cap);
    return (GLboolean)0;
}
GLboolean gles_glIsTexture(GLuint texture) {
    printf("glIsTexture(%u);\n", texture);
    return (GLboolean)0;
}
void gles_glLightModelf(GLenum pname, GLfloat param) {
    printf("glLightModelf(%u, %0.2f);\n", pname, param);
    return (void)0;
}
void gles_glLightModelfv(GLenum pname, const GLfloat * params) {
    printf("glLightModelfv(%u, %p);\n", pname, params);
    return (void)0;
}
void gles_glLightModelx(GLenum pname, GLfixed param) {
    printf("glLightModelx(%u, %p);\n", pname, param);
    return (void)0;
}
void gles_glLightModelxv(GLenum pname, const GLfixed * params) {
    printf("glLightModelxv(%u, %p);\n", pname, params);
    return (void)0;
}
void gles_glLightf(GLenum light, GLenum pname, GLfloat param) {
    printf("glLightf(%u, %u, %0.2f);\n", light, pname, param);
    return (void)0;
}
void gles_glLightfv(GLenum light, GLenum pname, const GLfloat * params) {
    printf("glLightfv(%u, %u, %p);\n", light, pname, params);
    return (void)0;
}
void gles_glLightx(GLenum light, GLenum pname, GLfixed param) {
    printf("glLightx(%u, %u, %p);\n", light, pname, param);
    return (void)0;
}
void gles_glLightxv(GLenum light, GLenum pname, const GLfixed * params) {
    printf("glLightxv(%u, %u, %p);\n", light, pname, params);
    return (void)0;
}
void gles_glLineWidth(GLfloat width) {
    printf("glLineWidth(%0.2f);\n", width);
    return (void)0;
}
void gles_glLineWidthx(GLfixed width) {
    printf("glLineWidthx(%p);\n", width);
    return (void)0;
}
void gles_glLoadIdentity() {
    printf("glLoadIdentity();\n");
    return (void)0;
}
void gles_glLoadMatrixf(const GLfloat * m) {
    printf("glLoadMatrixf(%p);\n", m);
    return (void)0;
}
void gles_glLoadMatrixx(const GLfixed * m) {
    printf("glLoadMatrixx(%p);\n", m);
    return (void)0;
}
void gles_glLogicOp(GLenum opcode) {
    printf("glLogicOp(%u);\n", opcode);
    return (void)0;
}
void gles_glMaterialf(GLenum face, GLenum pname, GLfloat param) {
    printf("glMaterialf(%u, %u, %0.2f);\n", face, pname, param);
    return (void)0;
}
void gles_glMaterialfv(GLenum face, GLenum pname, const GLfloat * params) {
    printf("glMaterialfv(%u, %u, %p);\n", face, pname, params);
    return (void)0;
}
void gles_glMaterialx(GLenum face, GLenum pname, GLfixed param) {
    printf("glMaterialx(%u, %u, %p);\n", face, pname, param);
    return (void)0;
}
void gles_glMaterialxv(GLenum face, GLenum pname, const GLfixed * params) {
    printf("glMaterialxv(%u, %u, %p);\n", face, pname, params);
    return (void)0;
}
void gles_glMatrixMode(GLenum mode) {
    printf("glMatrixMode(%u);\n", mode);
    return (void)0;
}
void gles_glMultMatrixf(const GLfloat * m) {
    printf("glMultMatrixf(%p);\n", m);
    return (void)0;
}
void gles_glMultMatrixx(const GLfixed * m) {
    printf("glMultMatrixx(%p);\n", m);
    return (void)0;
}
void gles_glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
    printf("glMultiTexCoord4f(%u, %0.2f, %0.2f, %0.2f, %0.2f);\n", target, s, t, r, q);
    return (void)0;
}
void gles_glMultiTexCoord4x(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q) {
    printf("glMultiTexCoord4x(%u, %p, %p, %p, %p);\n", target, s, t, r, q);
    return (void)0;
}
void gles_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz) {
    printf("glNormal3f(%0.2f, %0.2f, %0.2f);\n", nx, ny, nz);
    return (void)0;
}
void gles_glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz) {
    printf("glNormal3x(%p, %p, %p);\n", nx, ny, nz);
    return (void)0;
}
void gles_glNormalPointer(GLenum type, GLsizei stride, const GLvoid * pointer) {
    printf("glNormalPointer(%u, %d, %p);\n", type, stride, pointer);
    return (void)0;
}
void gles_glOrthof(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far) {
    printf("glOrthof(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", left, right, bottom, top, near, far);
    return (void)0;
}
void gles_glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far) {
    printf("glOrthox(%p, %p, %p, %p, %p, %p);\n", left, right, bottom, top, near, far);
    return (void)0;
}
void gles_glPixelStorei(GLenum pname, GLint param) {
    printf("glPixelStorei(%u, %d);\n", pname, param);
    return (void)0;
}
void gles_glPointParameterf(GLenum pname, GLfloat param) {
    printf("glPointParameterf(%u, %0.2f);\n", pname, param);
    return (void)0;
}
void gles_glPointParameterfv(GLenum pname, const GLfloat * params) {
    printf("glPointParameterfv(%u, %p);\n", pname, params);
    return (void)0;
}
void gles_glPointParameterx(GLenum pname, GLfixed param) {
    printf("glPointParameterx(%u, %p);\n", pname, param);
    return (void)0;
}
void gles_glPointParameterxv(GLenum pname, const GLfixed * params) {
    printf("glPointParameterxv(%u, %p);\n", pname, params);
    return (void)0;
}
void gles_glPointSize(GLfloat size) {
    printf("glPointSize(%0.2f);\n", size);
    return (void)0;
}
void gles_glPointSizePointerOES(GLenum type, GLsizei stride, const GLvoid * pointer) {
    printf("glPointSizePointerOES(%u, %d, %p);\n", type, stride, pointer);
    return (void)0;
}
void gles_glPointSizex(GLfixed size) {
    printf("glPointSizex(%p);\n", size);
    return (void)0;
}
void gles_glPolygonOffset(GLfloat factor, GLfloat units) {
    printf("glPolygonOffset(%0.2f, %0.2f);\n", factor, units);
    return (void)0;
}
void gles_glPolygonOffsetx(GLfixed factor, GLfixed units) {
    printf("glPolygonOffsetx(%p, %p);\n", factor, units);
    return (void)0;
}
void gles_glPopMatrix() {
    printf("glPopMatrix();\n");
    return (void)0;
}
void gles_glPushMatrix() {
    printf("glPushMatrix();\n");
    return (void)0;
}
void gles_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels) {
    printf("glReadPixels(%d, %d, %d, %d, %u, %u, %p);\n", x, y, width, height, format, type, pixels);
    return (void)0;
}
void gles_glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    printf("glRotatef(%0.2f, %0.2f, %0.2f, %0.2f);\n", angle, x, y, z);
    return (void)0;
}
void gles_glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z) {
    printf("glRotatex(%p, %p, %p, %p);\n", angle, x, y, z);
    return (void)0;
}
void gles_glSampleCoverage(GLclampf value, GLboolean invert) {
    printf("glSampleCoverage(%p, %d);\n", value, invert);
    return (void)0;
}
void gles_glSampleCoveragex(GLclampx value, GLboolean invert) {
    printf("glSampleCoveragex(%p, %d);\n", value, invert);
    return (void)0;
}
void gles_glScalef(GLfloat x, GLfloat y, GLfloat z) {
    printf("glScalef(%0.2f, %0.2f, %0.2f);\n", x, y, z);
    return (void)0;
}
void gles_glScalex(GLfixed x, GLfixed y, GLfixed z) {
    printf("glScalex(%p, %p, %p);\n", x, y, z);
    return (void)0;
}
void gles_glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
    printf("glScissor(%d, %d, %d, %d);\n", x, y, width, height);
    return (void)0;
}
void gles_glShadeModel(GLenum mode) {
    printf("glShadeModel(%u);\n", mode);
    return (void)0;
}
void gles_glStencilFunc(GLenum func, GLint ref, GLuint mask) {
    printf("glStencilFunc(%u, %d, %u);\n", func, ref, mask);
    return (void)0;
}
void gles_glStencilMask(GLuint mask) {
    printf("glStencilMask(%u);\n", mask);
    return (void)0;
}
void gles_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) {
    printf("glStencilOp(%u, %u, %u);\n", fail, zfail, zpass);
    return (void)0;
}
void gles_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    printf("glTexCoordPointer(%d, %u, %d, %p);\n", size, type, stride, pointer);
    return (void)0;
}
void gles_glTexEnvf(GLenum target, GLenum pname, GLfloat param) {
    printf("glTexEnvf(%u, %u, %0.2f);\n", target, pname, param);
    return (void)0;
}
void gles_glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params) {
    printf("glTexEnvfv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glTexEnvi(GLenum target, GLenum pname, GLint param) {
    printf("glTexEnvi(%u, %u, %d);\n", target, pname, param);
    return (void)0;
}
void gles_glTexEnviv(GLenum target, GLenum pname, const GLint * params) {
    printf("glTexEnviv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glTexEnvx(GLenum target, GLenum pname, GLfixed param) {
    printf("glTexEnvx(%u, %u, %p);\n", target, pname, param);
    return (void)0;
}
void gles_glTexEnvxv(GLenum target, GLenum pname, const GLfixed * params) {
    printf("glTexEnvxv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels) {
    printf("glTexImage2D(%u, %d, %d, %d, %d, %d, %u, %u, %p);\n", target, level, internalformat, width, height, border, format, type, pixels);
    return (void)0;
}
void gles_glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
    printf("glTexParameterf(%u, %u, %0.2f);\n", target, pname, param);
    return (void)0;
}
void gles_glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params) {
    printf("glTexParameterfv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glTexParameteri(GLenum target, GLenum pname, GLint param) {
    printf("glTexParameteri(%u, %u, %d);\n", target, pname, param);
    return (void)0;
}
void gles_glTexParameteriv(GLenum target, GLenum pname, const GLint * params) {
    printf("glTexParameteriv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glTexParameterx(GLenum target, GLenum pname, GLfixed param) {
    printf("glTexParameterx(%u, %u, %p);\n", target, pname, param);
    return (void)0;
}
void gles_glTexParameterxv(GLenum target, GLenum pname, const GLfixed * params) {
    printf("glTexParameterxv(%u, %u, %p);\n", target, pname, params);
    return (void)0;
}
void gles_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) {
    printf("glTexSubImage2D(%u, %d, %d, %d, %d, %d, %u, %u, %p);\n", target, level, xoffset, yoffset, width, height, format, type, pixels);
    return (void)0;
}
void gles_glTranslatef(GLfloat x, GLfloat y, GLfloat z) {
    printf("glTranslatef(%0.2f, %0.2f, %0.2f);\n", x, y, z);
    return (void)0;
}
void gles_glTranslatex(GLfixed x, GLfixed y, GLfixed z) {
    printf("glTranslatex(%p, %p, %p);\n", x, y, z);
    return (void)0;
}
void gles_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    printf("glVertexPointer(%d, %u, %d, %p);\n", size, type, stride, pointer);
    return (void)0;
}
void gles_glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
    printf("glViewport(%d, %d, %d, %d);\n", x, y, width, height);
    return (void)0;
}
#endif

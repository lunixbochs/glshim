#ifdef USE_ES2
#include "glpack.h"
#include "../loader.h"

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
#ifndef skip_glAttachShader
void glAttachShader(GLuint program, GLuint shader) {
    LOAD_GLES(glAttachShader);
#ifndef direct_glAttachShader
    PUSH_IF_COMPILING(glAttachShader);
#endif
    FORWARD_IF_REMOTE(glAttachShader);
    gles_glAttachShader(program, shader);
}
#endif
#ifndef skip_glBindAttribLocation
void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name) {
    LOAD_GLES(glBindAttribLocation);
#ifndef direct_glBindAttribLocation
    PUSH_IF_COMPILING(glBindAttribLocation);
#endif
    FORWARD_IF_REMOTE(glBindAttribLocation);
    gles_glBindAttribLocation(program, index, name);
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
#ifndef skip_glBindFramebuffer
void glBindFramebuffer(GLenum target, GLuint framebuffer) {
    LOAD_GLES(glBindFramebuffer);
#ifndef direct_glBindFramebuffer
    PUSH_IF_COMPILING(glBindFramebuffer);
#endif
    FORWARD_IF_REMOTE(glBindFramebuffer);
    gles_glBindFramebuffer(target, framebuffer);
}
#endif
#ifndef skip_glBindRenderbuffer
void glBindRenderbuffer(GLenum target, GLuint renderbuffer) {
    LOAD_GLES(glBindRenderbuffer);
#ifndef direct_glBindRenderbuffer
    PUSH_IF_COMPILING(glBindRenderbuffer);
#endif
    FORWARD_IF_REMOTE(glBindRenderbuffer);
    gles_glBindRenderbuffer(target, renderbuffer);
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
#ifndef skip_glBlendColor
void glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    LOAD_GLES(glBlendColor);
#ifndef direct_glBlendColor
    PUSH_IF_COMPILING(glBlendColor);
#endif
    FORWARD_IF_REMOTE(glBlendColor);
    gles_glBlendColor(red, green, blue, alpha);
}
#endif
#ifndef skip_glBlendEquation
void glBlendEquation(GLenum mode) {
    LOAD_GLES(glBlendEquation);
#ifndef direct_glBlendEquation
    PUSH_IF_COMPILING(glBlendEquation);
#endif
    FORWARD_IF_REMOTE(glBlendEquation);
    gles_glBlendEquation(mode);
}
#endif
#ifndef skip_glBlendEquationSeparate
void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) {
    LOAD_GLES(glBlendEquationSeparate);
#ifndef direct_glBlendEquationSeparate
    PUSH_IF_COMPILING(glBlendEquationSeparate);
#endif
    FORWARD_IF_REMOTE(glBlendEquationSeparate);
    gles_glBlendEquationSeparate(modeRGB, modeAlpha);
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
#ifndef skip_glBlendFuncSeparate
void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
    LOAD_GLES(glBlendFuncSeparate);
#ifndef direct_glBlendFuncSeparate
    PUSH_IF_COMPILING(glBlendFuncSeparate);
#endif
    FORWARD_IF_REMOTE(glBlendFuncSeparate);
    gles_glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
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
#ifndef skip_glCheckFramebufferStatus
GLenum glCheckFramebufferStatus(GLenum target) {
    LOAD_GLES(glCheckFramebufferStatus);
#ifndef direct_glCheckFramebufferStatus
    PUSH_IF_COMPILING(glCheckFramebufferStatus);
#endif
    FORWARD_IF_REMOTE(glCheckFramebufferStatus);
    return gles_glCheckFramebufferStatus(target);
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
#ifndef skip_glCompileShader
void glCompileShader(GLuint shader) {
    LOAD_GLES(glCompileShader);
#ifndef direct_glCompileShader
    PUSH_IF_COMPILING(glCompileShader);
#endif
    FORWARD_IF_REMOTE(glCompileShader);
    gles_glCompileShader(shader);
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
#ifndef skip_glCreateProgram
GLuint glCreateProgram() {
    LOAD_GLES(glCreateProgram);
#ifndef direct_glCreateProgram
    PUSH_IF_COMPILING(glCreateProgram);
#endif
    FORWARD_IF_REMOTE(glCreateProgram);
    return gles_glCreateProgram();
}
#endif
#ifndef skip_glCreateShader
GLuint glCreateShader(GLenum type) {
    LOAD_GLES(glCreateShader);
#ifndef direct_glCreateShader
    PUSH_IF_COMPILING(glCreateShader);
#endif
    FORWARD_IF_REMOTE(glCreateShader);
    return gles_glCreateShader(type);
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
#ifndef skip_glDeleteFramebuffers
void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers) {
    LOAD_GLES(glDeleteFramebuffers);
#ifndef direct_glDeleteFramebuffers
    PUSH_IF_COMPILING(glDeleteFramebuffers);
#endif
    FORWARD_IF_REMOTE(glDeleteFramebuffers);
    gles_glDeleteFramebuffers(n, framebuffers);
}
#endif
#ifndef skip_glDeleteProgram
void glDeleteProgram(GLuint program) {
    LOAD_GLES(glDeleteProgram);
#ifndef direct_glDeleteProgram
    PUSH_IF_COMPILING(glDeleteProgram);
#endif
    FORWARD_IF_REMOTE(glDeleteProgram);
    gles_glDeleteProgram(program);
}
#endif
#ifndef skip_glDeleteRenderbuffers
void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers) {
    LOAD_GLES(glDeleteRenderbuffers);
#ifndef direct_glDeleteRenderbuffers
    PUSH_IF_COMPILING(glDeleteRenderbuffers);
#endif
    FORWARD_IF_REMOTE(glDeleteRenderbuffers);
    gles_glDeleteRenderbuffers(n, renderbuffers);
}
#endif
#ifndef skip_glDeleteShader
void glDeleteShader(GLuint shader) {
    LOAD_GLES(glDeleteShader);
#ifndef direct_glDeleteShader
    PUSH_IF_COMPILING(glDeleteShader);
#endif
    FORWARD_IF_REMOTE(glDeleteShader);
    gles_glDeleteShader(shader);
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
#ifndef skip_glDetachShader
void glDetachShader(GLuint program, GLuint shader) {
    LOAD_GLES(glDetachShader);
#ifndef direct_glDetachShader
    PUSH_IF_COMPILING(glDetachShader);
#endif
    FORWARD_IF_REMOTE(glDetachShader);
    gles_glDetachShader(program, shader);
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
#ifndef skip_glDisableVertexAttribArray
void glDisableVertexAttribArray(GLuint index) {
    LOAD_GLES(glDisableVertexAttribArray);
#ifndef direct_glDisableVertexAttribArray
    PUSH_IF_COMPILING(glDisableVertexAttribArray);
#endif
    FORWARD_IF_REMOTE(glDisableVertexAttribArray);
    gles_glDisableVertexAttribArray(index);
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
#ifndef skip_glEnableVertexAttribArray
void glEnableVertexAttribArray(GLuint index) {
    LOAD_GLES(glEnableVertexAttribArray);
#ifndef direct_glEnableVertexAttribArray
    PUSH_IF_COMPILING(glEnableVertexAttribArray);
#endif
    FORWARD_IF_REMOTE(glEnableVertexAttribArray);
    gles_glEnableVertexAttribArray(index);
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
#ifndef skip_glFramebufferRenderbuffer
void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
    LOAD_GLES(glFramebufferRenderbuffer);
#ifndef direct_glFramebufferRenderbuffer
    PUSH_IF_COMPILING(glFramebufferRenderbuffer);
#endif
    FORWARD_IF_REMOTE(glFramebufferRenderbuffer);
    gles_glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}
#endif
#ifndef skip_glFramebufferTexture2D
void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    LOAD_GLES(glFramebufferTexture2D);
#ifndef direct_glFramebufferTexture2D
    PUSH_IF_COMPILING(glFramebufferTexture2D);
#endif
    FORWARD_IF_REMOTE(glFramebufferTexture2D);
    gles_glFramebufferTexture2D(target, attachment, textarget, texture, level);
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
#ifndef skip_glGenFramebuffers
void glGenFramebuffers(GLsizei n, GLuint * framebuffers) {
    LOAD_GLES(glGenFramebuffers);
#ifndef direct_glGenFramebuffers
    PUSH_IF_COMPILING(glGenFramebuffers);
#endif
    FORWARD_IF_REMOTE(glGenFramebuffers);
    gles_glGenFramebuffers(n, framebuffers);
}
#endif
#ifndef skip_glGenRenderbuffers
void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers) {
    LOAD_GLES(glGenRenderbuffers);
#ifndef direct_glGenRenderbuffers
    PUSH_IF_COMPILING(glGenRenderbuffers);
#endif
    FORWARD_IF_REMOTE(glGenRenderbuffers);
    gles_glGenRenderbuffers(n, renderbuffers);
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
#ifndef skip_glGenerateMipmap
void glGenerateMipmap(GLenum target) {
    LOAD_GLES(glGenerateMipmap);
#ifndef direct_glGenerateMipmap
    PUSH_IF_COMPILING(glGenerateMipmap);
#endif
    FORWARD_IF_REMOTE(glGenerateMipmap);
    gles_glGenerateMipmap(target);
}
#endif
#ifndef skip_glGetActiveAttrib
void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) {
    LOAD_GLES(glGetActiveAttrib);
#ifndef direct_glGetActiveAttrib
    PUSH_IF_COMPILING(glGetActiveAttrib);
#endif
    FORWARD_IF_REMOTE(glGetActiveAttrib);
    gles_glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}
#endif
#ifndef skip_glGetActiveUniform
void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) {
    LOAD_GLES(glGetActiveUniform);
#ifndef direct_glGetActiveUniform
    PUSH_IF_COMPILING(glGetActiveUniform);
#endif
    FORWARD_IF_REMOTE(glGetActiveUniform);
    gles_glGetActiveUniform(program, index, bufSize, length, size, type, name);
}
#endif
#ifndef skip_glGetAttachedShaders
void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * obj) {
    LOAD_GLES(glGetAttachedShaders);
#ifndef direct_glGetAttachedShaders
    PUSH_IF_COMPILING(glGetAttachedShaders);
#endif
    FORWARD_IF_REMOTE(glGetAttachedShaders);
    gles_glGetAttachedShaders(program, maxCount, count, obj);
}
#endif
#ifndef skip_glGetAttribLocation
GLint glGetAttribLocation(GLuint program, const GLchar * name) {
    LOAD_GLES(glGetAttribLocation);
#ifndef direct_glGetAttribLocation
    PUSH_IF_COMPILING(glGetAttribLocation);
#endif
    FORWARD_IF_REMOTE(glGetAttribLocation);
    return gles_glGetAttribLocation(program, name);
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
#ifndef skip_glGetFramebufferAttachmentParameteriv
void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params) {
    LOAD_GLES(glGetFramebufferAttachmentParameteriv);
#ifndef direct_glGetFramebufferAttachmentParameteriv
    PUSH_IF_COMPILING(glGetFramebufferAttachmentParameteriv);
#endif
    FORWARD_IF_REMOTE(glGetFramebufferAttachmentParameteriv);
    gles_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
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
#ifndef skip_glGetProgramInfoLog
void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
    LOAD_GLES(glGetProgramInfoLog);
#ifndef direct_glGetProgramInfoLog
    PUSH_IF_COMPILING(glGetProgramInfoLog);
#endif
    FORWARD_IF_REMOTE(glGetProgramInfoLog);
    gles_glGetProgramInfoLog(program, bufSize, length, infoLog);
}
#endif
#ifndef skip_glGetProgramiv
void glGetProgramiv(GLuint program, GLenum pname, GLint * params) {
    LOAD_GLES(glGetProgramiv);
#ifndef direct_glGetProgramiv
    PUSH_IF_COMPILING(glGetProgramiv);
#endif
    FORWARD_IF_REMOTE(glGetProgramiv);
    gles_glGetProgramiv(program, pname, params);
}
#endif
#ifndef skip_glGetRenderbufferParameteriv
void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params) {
    LOAD_GLES(glGetRenderbufferParameteriv);
#ifndef direct_glGetRenderbufferParameteriv
    PUSH_IF_COMPILING(glGetRenderbufferParameteriv);
#endif
    FORWARD_IF_REMOTE(glGetRenderbufferParameteriv);
    gles_glGetRenderbufferParameteriv(target, pname, params);
}
#endif
#ifndef skip_glGetShaderInfoLog
void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
    LOAD_GLES(glGetShaderInfoLog);
#ifndef direct_glGetShaderInfoLog
    PUSH_IF_COMPILING(glGetShaderInfoLog);
#endif
    FORWARD_IF_REMOTE(glGetShaderInfoLog);
    gles_glGetShaderInfoLog(shader, bufSize, length, infoLog);
}
#endif
#ifndef skip_glGetShaderPrecisionFormat
void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision) {
    LOAD_GLES(glGetShaderPrecisionFormat);
#ifndef direct_glGetShaderPrecisionFormat
    PUSH_IF_COMPILING(glGetShaderPrecisionFormat);
#endif
    FORWARD_IF_REMOTE(glGetShaderPrecisionFormat);
    gles_glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}
#endif
#ifndef skip_glGetShaderSource
void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source) {
    LOAD_GLES(glGetShaderSource);
#ifndef direct_glGetShaderSource
    PUSH_IF_COMPILING(glGetShaderSource);
#endif
    FORWARD_IF_REMOTE(glGetShaderSource);
    gles_glGetShaderSource(shader, bufSize, length, source);
}
#endif
#ifndef skip_glGetShaderiv
void glGetShaderiv(GLuint shader, GLenum pname, GLint * params) {
    LOAD_GLES(glGetShaderiv);
#ifndef direct_glGetShaderiv
    PUSH_IF_COMPILING(glGetShaderiv);
#endif
    FORWARD_IF_REMOTE(glGetShaderiv);
    gles_glGetShaderiv(shader, pname, params);
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
#ifndef skip_glGetUniformLocation
GLint glGetUniformLocation(GLuint program, const GLchar * name) {
    LOAD_GLES(glGetUniformLocation);
#ifndef direct_glGetUniformLocation
    PUSH_IF_COMPILING(glGetUniformLocation);
#endif
    FORWARD_IF_REMOTE(glGetUniformLocation);
    return gles_glGetUniformLocation(program, name);
}
#endif
#ifndef skip_glGetUniformfv
void glGetUniformfv(GLuint program, GLint location, GLfloat * params) {
    LOAD_GLES(glGetUniformfv);
#ifndef direct_glGetUniformfv
    PUSH_IF_COMPILING(glGetUniformfv);
#endif
    FORWARD_IF_REMOTE(glGetUniformfv);
    gles_glGetUniformfv(program, location, params);
}
#endif
#ifndef skip_glGetUniformiv
void glGetUniformiv(GLuint program, GLint location, GLint * params) {
    LOAD_GLES(glGetUniformiv);
#ifndef direct_glGetUniformiv
    PUSH_IF_COMPILING(glGetUniformiv);
#endif
    FORWARD_IF_REMOTE(glGetUniformiv);
    gles_glGetUniformiv(program, location, params);
}
#endif
#ifndef skip_glGetVertexAttribPointerv
void glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid ** pointer) {
    LOAD_GLES(glGetVertexAttribPointerv);
#ifndef direct_glGetVertexAttribPointerv
    PUSH_IF_COMPILING(glGetVertexAttribPointerv);
#endif
    FORWARD_IF_REMOTE(glGetVertexAttribPointerv);
    gles_glGetVertexAttribPointerv(index, pname, pointer);
}
#endif
#ifndef skip_glGetVertexAttribfv
void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params) {
    LOAD_GLES(glGetVertexAttribfv);
#ifndef direct_glGetVertexAttribfv
    PUSH_IF_COMPILING(glGetVertexAttribfv);
#endif
    FORWARD_IF_REMOTE(glGetVertexAttribfv);
    gles_glGetVertexAttribfv(index, pname, params);
}
#endif
#ifndef skip_glGetVertexAttribiv
void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params) {
    LOAD_GLES(glGetVertexAttribiv);
#ifndef direct_glGetVertexAttribiv
    PUSH_IF_COMPILING(glGetVertexAttribiv);
#endif
    FORWARD_IF_REMOTE(glGetVertexAttribiv);
    gles_glGetVertexAttribiv(index, pname, params);
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
#ifndef skip_glIsFramebuffer
GLboolean glIsFramebuffer(GLuint framebuffer) {
    LOAD_GLES(glIsFramebuffer);
#ifndef direct_glIsFramebuffer
    PUSH_IF_COMPILING(glIsFramebuffer);
#endif
    FORWARD_IF_REMOTE(glIsFramebuffer);
    return gles_glIsFramebuffer(framebuffer);
}
#endif
#ifndef skip_glIsProgram
GLboolean glIsProgram(GLuint program) {
    LOAD_GLES(glIsProgram);
#ifndef direct_glIsProgram
    PUSH_IF_COMPILING(glIsProgram);
#endif
    FORWARD_IF_REMOTE(glIsProgram);
    return gles_glIsProgram(program);
}
#endif
#ifndef skip_glIsRenderbuffer
GLboolean glIsRenderbuffer(GLuint renderbuffer) {
    LOAD_GLES(glIsRenderbuffer);
#ifndef direct_glIsRenderbuffer
    PUSH_IF_COMPILING(glIsRenderbuffer);
#endif
    FORWARD_IF_REMOTE(glIsRenderbuffer);
    return gles_glIsRenderbuffer(renderbuffer);
}
#endif
#ifndef skip_glIsShader
GLboolean glIsShader(GLuint shader) {
    LOAD_GLES(glIsShader);
#ifndef direct_glIsShader
    PUSH_IF_COMPILING(glIsShader);
#endif
    FORWARD_IF_REMOTE(glIsShader);
    return gles_glIsShader(shader);
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
#ifndef skip_glLinkProgram
void glLinkProgram(GLuint program) {
    LOAD_GLES(glLinkProgram);
#ifndef direct_glLinkProgram
    PUSH_IF_COMPILING(glLinkProgram);
#endif
    FORWARD_IF_REMOTE(glLinkProgram);
    gles_glLinkProgram(program);
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
#ifndef skip_glReleaseShaderCompiler
void glReleaseShaderCompiler() {
    LOAD_GLES(glReleaseShaderCompiler);
#ifndef direct_glReleaseShaderCompiler
    PUSH_IF_COMPILING(glReleaseShaderCompiler);
#endif
    FORWARD_IF_REMOTE(glReleaseShaderCompiler);
    gles_glReleaseShaderCompiler();
}
#endif
#ifndef skip_glRenderbufferStorage
void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
    LOAD_GLES(glRenderbufferStorage);
#ifndef direct_glRenderbufferStorage
    PUSH_IF_COMPILING(glRenderbufferStorage);
#endif
    FORWARD_IF_REMOTE(glRenderbufferStorage);
    gles_glRenderbufferStorage(target, internalformat, width, height);
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
#ifndef skip_glShaderBinary
void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const GLvoid * binary, GLsizei length) {
    LOAD_GLES(glShaderBinary);
#ifndef direct_glShaderBinary
    PUSH_IF_COMPILING(glShaderBinary);
#endif
    FORWARD_IF_REMOTE(glShaderBinary);
    gles_glShaderBinary(count, shaders, binaryformat, binary, length);
}
#endif
#ifndef skip_glShaderSource
void glShaderSource(GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length) {
    LOAD_GLES(glShaderSource);
#ifndef direct_glShaderSource
    PUSH_IF_COMPILING(glShaderSource);
#endif
    FORWARD_IF_REMOTE(glShaderSource);
    gles_glShaderSource(shader, count, string, length);
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
#ifndef skip_glStencilFuncSeparate
void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) {
    LOAD_GLES(glStencilFuncSeparate);
#ifndef direct_glStencilFuncSeparate
    PUSH_IF_COMPILING(glStencilFuncSeparate);
#endif
    FORWARD_IF_REMOTE(glStencilFuncSeparate);
    gles_glStencilFuncSeparate(face, func, ref, mask);
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
#ifndef skip_glStencilMaskSeparate
void glStencilMaskSeparate(GLenum face, GLuint mask) {
    LOAD_GLES(glStencilMaskSeparate);
#ifndef direct_glStencilMaskSeparate
    PUSH_IF_COMPILING(glStencilMaskSeparate);
#endif
    FORWARD_IF_REMOTE(glStencilMaskSeparate);
    gles_glStencilMaskSeparate(face, mask);
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
#ifndef skip_glStencilOpSeparate
void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
    LOAD_GLES(glStencilOpSeparate);
#ifndef direct_glStencilOpSeparate
    PUSH_IF_COMPILING(glStencilOpSeparate);
#endif
    FORWARD_IF_REMOTE(glStencilOpSeparate);
    gles_glStencilOpSeparate(face, sfail, dpfail, dppass);
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
#ifndef skip_glUniform1f
void glUniform1f(GLint location, GLfloat v0) {
    LOAD_GLES(glUniform1f);
#ifndef direct_glUniform1f
    PUSH_IF_COMPILING(glUniform1f);
#endif
    FORWARD_IF_REMOTE(glUniform1f);
    gles_glUniform1f(location, v0);
}
#endif
#ifndef skip_glUniform1fv
void glUniform1fv(GLint location, GLsizei count, const GLfloat * value) {
    LOAD_GLES(glUniform1fv);
#ifndef direct_glUniform1fv
    PUSH_IF_COMPILING(glUniform1fv);
#endif
    FORWARD_IF_REMOTE(glUniform1fv);
    gles_glUniform1fv(location, count, value);
}
#endif
#ifndef skip_glUniform1i
void glUniform1i(GLint location, GLint v0) {
    LOAD_GLES(glUniform1i);
#ifndef direct_glUniform1i
    PUSH_IF_COMPILING(glUniform1i);
#endif
    FORWARD_IF_REMOTE(glUniform1i);
    gles_glUniform1i(location, v0);
}
#endif
#ifndef skip_glUniform1iv
void glUniform1iv(GLint location, GLsizei count, const GLint * value) {
    LOAD_GLES(glUniform1iv);
#ifndef direct_glUniform1iv
    PUSH_IF_COMPILING(glUniform1iv);
#endif
    FORWARD_IF_REMOTE(glUniform1iv);
    gles_glUniform1iv(location, count, value);
}
#endif
#ifndef skip_glUniform2f
void glUniform2f(GLint location, GLfloat v0, GLfloat v1) {
    LOAD_GLES(glUniform2f);
#ifndef direct_glUniform2f
    PUSH_IF_COMPILING(glUniform2f);
#endif
    FORWARD_IF_REMOTE(glUniform2f);
    gles_glUniform2f(location, v0, v1);
}
#endif
#ifndef skip_glUniform2fv
void glUniform2fv(GLint location, GLsizei count, const GLfloat * value) {
    LOAD_GLES(glUniform2fv);
#ifndef direct_glUniform2fv
    PUSH_IF_COMPILING(glUniform2fv);
#endif
    FORWARD_IF_REMOTE(glUniform2fv);
    gles_glUniform2fv(location, count, value);
}
#endif
#ifndef skip_glUniform2i
void glUniform2i(GLint location, GLint v0, GLint v1) {
    LOAD_GLES(glUniform2i);
#ifndef direct_glUniform2i
    PUSH_IF_COMPILING(glUniform2i);
#endif
    FORWARD_IF_REMOTE(glUniform2i);
    gles_glUniform2i(location, v0, v1);
}
#endif
#ifndef skip_glUniform2iv
void glUniform2iv(GLint location, GLsizei count, const GLint * value) {
    LOAD_GLES(glUniform2iv);
#ifndef direct_glUniform2iv
    PUSH_IF_COMPILING(glUniform2iv);
#endif
    FORWARD_IF_REMOTE(glUniform2iv);
    gles_glUniform2iv(location, count, value);
}
#endif
#ifndef skip_glUniform3f
void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
    LOAD_GLES(glUniform3f);
#ifndef direct_glUniform3f
    PUSH_IF_COMPILING(glUniform3f);
#endif
    FORWARD_IF_REMOTE(glUniform3f);
    gles_glUniform3f(location, v0, v1, v2);
}
#endif
#ifndef skip_glUniform3fv
void glUniform3fv(GLint location, GLsizei count, const GLfloat * value) {
    LOAD_GLES(glUniform3fv);
#ifndef direct_glUniform3fv
    PUSH_IF_COMPILING(glUniform3fv);
#endif
    FORWARD_IF_REMOTE(glUniform3fv);
    gles_glUniform3fv(location, count, value);
}
#endif
#ifndef skip_glUniform3i
void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) {
    LOAD_GLES(glUniform3i);
#ifndef direct_glUniform3i
    PUSH_IF_COMPILING(glUniform3i);
#endif
    FORWARD_IF_REMOTE(glUniform3i);
    gles_glUniform3i(location, v0, v1, v2);
}
#endif
#ifndef skip_glUniform3iv
void glUniform3iv(GLint location, GLsizei count, const GLint * value) {
    LOAD_GLES(glUniform3iv);
#ifndef direct_glUniform3iv
    PUSH_IF_COMPILING(glUniform3iv);
#endif
    FORWARD_IF_REMOTE(glUniform3iv);
    gles_glUniform3iv(location, count, value);
}
#endif
#ifndef skip_glUniform4f
void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
    LOAD_GLES(glUniform4f);
#ifndef direct_glUniform4f
    PUSH_IF_COMPILING(glUniform4f);
#endif
    FORWARD_IF_REMOTE(glUniform4f);
    gles_glUniform4f(location, v0, v1, v2, v3);
}
#endif
#ifndef skip_glUniform4fv
void glUniform4fv(GLint location, GLsizei count, const GLfloat * value) {
    LOAD_GLES(glUniform4fv);
#ifndef direct_glUniform4fv
    PUSH_IF_COMPILING(glUniform4fv);
#endif
    FORWARD_IF_REMOTE(glUniform4fv);
    gles_glUniform4fv(location, count, value);
}
#endif
#ifndef skip_glUniform4i
void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
    LOAD_GLES(glUniform4i);
#ifndef direct_glUniform4i
    PUSH_IF_COMPILING(glUniform4i);
#endif
    FORWARD_IF_REMOTE(glUniform4i);
    gles_glUniform4i(location, v0, v1, v2, v3);
}
#endif
#ifndef skip_glUniform4iv
void glUniform4iv(GLint location, GLsizei count, const GLint * value) {
    LOAD_GLES(glUniform4iv);
#ifndef direct_glUniform4iv
    PUSH_IF_COMPILING(glUniform4iv);
#endif
    FORWARD_IF_REMOTE(glUniform4iv);
    gles_glUniform4iv(location, count, value);
}
#endif
#ifndef skip_glUniformMatrix2fv
void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
    LOAD_GLES(glUniformMatrix2fv);
#ifndef direct_glUniformMatrix2fv
    PUSH_IF_COMPILING(glUniformMatrix2fv);
#endif
    FORWARD_IF_REMOTE(glUniformMatrix2fv);
    gles_glUniformMatrix2fv(location, count, transpose, value);
}
#endif
#ifndef skip_glUniformMatrix3fv
void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
    LOAD_GLES(glUniformMatrix3fv);
#ifndef direct_glUniformMatrix3fv
    PUSH_IF_COMPILING(glUniformMatrix3fv);
#endif
    FORWARD_IF_REMOTE(glUniformMatrix3fv);
    gles_glUniformMatrix3fv(location, count, transpose, value);
}
#endif
#ifndef skip_glUniformMatrix4fv
void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
    LOAD_GLES(glUniformMatrix4fv);
#ifndef direct_glUniformMatrix4fv
    PUSH_IF_COMPILING(glUniformMatrix4fv);
#endif
    FORWARD_IF_REMOTE(glUniformMatrix4fv);
    gles_glUniformMatrix4fv(location, count, transpose, value);
}
#endif
#ifndef skip_glUseProgram
void glUseProgram(GLuint program) {
    LOAD_GLES(glUseProgram);
#ifndef direct_glUseProgram
    PUSH_IF_COMPILING(glUseProgram);
#endif
    FORWARD_IF_REMOTE(glUseProgram);
    gles_glUseProgram(program);
}
#endif
#ifndef skip_glValidateProgram
void glValidateProgram(GLuint program) {
    LOAD_GLES(glValidateProgram);
#ifndef direct_glValidateProgram
    PUSH_IF_COMPILING(glValidateProgram);
#endif
    FORWARD_IF_REMOTE(glValidateProgram);
    gles_glValidateProgram(program);
}
#endif
#ifndef skip_glVertexAttrib1f
void glVertexAttrib1f(GLuint index, GLfloat x) {
    LOAD_GLES(glVertexAttrib1f);
#ifndef direct_glVertexAttrib1f
    PUSH_IF_COMPILING(glVertexAttrib1f);
#endif
    FORWARD_IF_REMOTE(glVertexAttrib1f);
    gles_glVertexAttrib1f(index, x);
}
#endif
#ifndef skip_glVertexAttrib1fv
void glVertexAttrib1fv(GLuint index, const GLfloat * v) {
    LOAD_GLES(glVertexAttrib1fv);
#ifndef direct_glVertexAttrib1fv
    PUSH_IF_COMPILING(glVertexAttrib1fv);
#endif
    FORWARD_IF_REMOTE(glVertexAttrib1fv);
    gles_glVertexAttrib1fv(index, v);
}
#endif
#ifndef skip_glVertexAttrib2f
void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y) {
    LOAD_GLES(glVertexAttrib2f);
#ifndef direct_glVertexAttrib2f
    PUSH_IF_COMPILING(glVertexAttrib2f);
#endif
    FORWARD_IF_REMOTE(glVertexAttrib2f);
    gles_glVertexAttrib2f(index, x, y);
}
#endif
#ifndef skip_glVertexAttrib2fv
void glVertexAttrib2fv(GLuint index, const GLfloat * v) {
    LOAD_GLES(glVertexAttrib2fv);
#ifndef direct_glVertexAttrib2fv
    PUSH_IF_COMPILING(glVertexAttrib2fv);
#endif
    FORWARD_IF_REMOTE(glVertexAttrib2fv);
    gles_glVertexAttrib2fv(index, v);
}
#endif
#ifndef skip_glVertexAttrib3f
void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
    LOAD_GLES(glVertexAttrib3f);
#ifndef direct_glVertexAttrib3f
    PUSH_IF_COMPILING(glVertexAttrib3f);
#endif
    FORWARD_IF_REMOTE(glVertexAttrib3f);
    gles_glVertexAttrib3f(index, x, y, z);
}
#endif
#ifndef skip_glVertexAttrib3fv
void glVertexAttrib3fv(GLuint index, const GLfloat * v) {
    LOAD_GLES(glVertexAttrib3fv);
#ifndef direct_glVertexAttrib3fv
    PUSH_IF_COMPILING(glVertexAttrib3fv);
#endif
    FORWARD_IF_REMOTE(glVertexAttrib3fv);
    gles_glVertexAttrib3fv(index, v);
}
#endif
#ifndef skip_glVertexAttrib4f
void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
    LOAD_GLES(glVertexAttrib4f);
#ifndef direct_glVertexAttrib4f
    PUSH_IF_COMPILING(glVertexAttrib4f);
#endif
    FORWARD_IF_REMOTE(glVertexAttrib4f);
    gles_glVertexAttrib4f(index, x, y, z, w);
}
#endif
#ifndef skip_glVertexAttrib4fv
void glVertexAttrib4fv(GLuint index, const GLfloat * v) {
    LOAD_GLES(glVertexAttrib4fv);
#ifndef direct_glVertexAttrib4fv
    PUSH_IF_COMPILING(glVertexAttrib4fv);
#endif
    FORWARD_IF_REMOTE(glVertexAttrib4fv);
    gles_glVertexAttrib4fv(index, v);
}
#endif
#ifndef skip_glVertexAttribPointer
void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer) {
    LOAD_GLES(glVertexAttribPointer);
#ifndef direct_glVertexAttribPointer
    PUSH_IF_COMPILING(glVertexAttribPointer);
#endif
    FORWARD_IF_REMOTE(glVertexAttribPointer);
    gles_glVertexAttribPointer(index, size, type, normalized, stride, pointer);
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

void stub_glActiveTexture(GLenum texture) {
    printf("stub glActiveTexture(0x%04X);\n", texture);
}
void stub_glAttachShader(GLuint program, GLuint shader) {
    printf("stub glAttachShader(%u, %u);\n", program, shader);
}
void stub_glBindAttribLocation(GLuint program, GLuint index, const GLchar * name) {
    printf("stub glBindAttribLocation(%u, %u, %p);\n", program, index, name);
}
void stub_glBindBuffer(GLenum target, GLuint buffer) {
    printf("stub glBindBuffer(0x%04X, %u);\n", target, buffer);
}
void stub_glBindFramebuffer(GLenum target, GLuint framebuffer) {
    printf("stub glBindFramebuffer(0x%04X, %u);\n", target, framebuffer);
}
void stub_glBindRenderbuffer(GLenum target, GLuint renderbuffer) {
    printf("stub glBindRenderbuffer(0x%04X, %u);\n", target, renderbuffer);
}
void stub_glBindTexture(GLenum target, GLuint texture) {
    printf("stub glBindTexture(0x%04X, %u);\n", target, texture);
}
void stub_glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    printf("stub glBlendColor(%0.2f, %0.2f, %0.2f, %0.2f);\n", red, green, blue, alpha);
}
void stub_glBlendEquation(GLenum mode) {
    printf("stub glBlendEquation(0x%04X);\n", mode);
}
void stub_glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) {
    printf("stub glBlendEquationSeparate(0x%04X, 0x%04X);\n", modeRGB, modeAlpha);
}
void stub_glBlendFunc(GLenum sfactor, GLenum dfactor) {
    printf("stub glBlendFunc(0x%04X, 0x%04X);\n", sfactor, dfactor);
}
void stub_glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
    printf("stub glBlendFuncSeparate(0x%04X, 0x%04X, 0x%04X, 0x%04X);\n", sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}
void stub_glBufferData(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage) {
    printf("stub glBufferData(0x%04X, %td, %p, 0x%04X);\n", target, size, data, usage);
}
void stub_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data) {
    printf("stub glBufferSubData(0x%04X, %td, %td, %p);\n", target, offset, size, data);
}
GLenum stub_glCheckFramebufferStatus(GLenum target) {
    printf("stub glCheckFramebufferStatus(0x%04X);\n", target);
    return 0;
}
void stub_glClear(GLbitfield mask) {
    printf("stub glClear(%d);\n", mask);
}
void stub_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    printf("stub glClearColor(%0.2f, %0.2f, %0.2f, %0.2f);\n", red, green, blue, alpha);
}
void stub_glClearDepthf(GLclampf depth) {
    printf("stub glClearDepthf(%0.2f);\n", depth);
}
void stub_glClearStencil(GLint s) {
    printf("stub glClearStencil(%d);\n", s);
}
void stub_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
    printf("stub glColorMask(%d, %d, %d, %d);\n", red, green, blue, alpha);
}
void stub_glCompileShader(GLuint shader) {
    printf("stub glCompileShader(%u);\n", shader);
}
void stub_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data) {
    printf("stub glCompressedTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %p);\n", target, level, internalformat, width, height, border, imageSize, data);
}
void stub_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data) {
    printf("stub glCompressedTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, %d, %p);\n", target, level, xoffset, yoffset, width, height, format, imageSize, data);
}
void stub_glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
    printf("stub glCopyTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %d);\n", target, level, internalformat, x, y, width, height, border);
}
void stub_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
    printf("stub glCopyTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, %d, %d);\n", target, level, xoffset, yoffset, x, y, width, height);
}
GLuint stub_glCreateProgram() {
    printf("stub glCreateProgram();\n");
    return 0;
}
GLuint stub_glCreateShader(GLenum type) {
    printf("stub glCreateShader(0x%04X);\n", type);
    return 0;
}
void stub_glCullFace(GLenum mode) {
    printf("stub glCullFace(0x%04X);\n", mode);
}
void stub_glDeleteBuffers(GLsizei n, const GLuint * buffers) {
    printf("stub glDeleteBuffers(%d, %p);\n", n, buffers);
}
void stub_glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers) {
    printf("stub glDeleteFramebuffers(%d, %p);\n", n, framebuffers);
}
void stub_glDeleteProgram(GLuint program) {
    printf("stub glDeleteProgram(%u);\n", program);
}
void stub_glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers) {
    printf("stub glDeleteRenderbuffers(%d, %p);\n", n, renderbuffers);
}
void stub_glDeleteShader(GLuint shader) {
    printf("stub glDeleteShader(%u);\n", shader);
}
void stub_glDeleteTextures(GLsizei n, const GLuint * textures) {
    printf("stub glDeleteTextures(%d, %p);\n", n, textures);
}
void stub_glDepthFunc(GLenum func) {
    printf("stub glDepthFunc(0x%04X);\n", func);
}
void stub_glDepthMask(GLboolean flag) {
    printf("stub glDepthMask(%d);\n", flag);
}
void stub_glDepthRangef(GLclampf near, GLclampf far) {
    printf("stub glDepthRangef(%0.2f, %0.2f);\n", near, far);
}
void stub_glDetachShader(GLuint program, GLuint shader) {
    printf("stub glDetachShader(%u, %u);\n", program, shader);
}
void stub_glDisable(GLenum cap) {
    printf("stub glDisable(0x%04X);\n", cap);
}
void stub_glDisableVertexAttribArray(GLuint index) {
    printf("stub glDisableVertexAttribArray(%u);\n", index);
}
void stub_glDrawArrays(GLenum mode, GLint first, GLsizei count) {
    printf("stub glDrawArrays(0x%04X, %d, %d);\n", mode, first, count);
}
void stub_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices) {
    printf("stub glDrawElements(0x%04X, %d, 0x%04X, %p);\n", mode, count, type, indices);
}
void stub_glEnable(GLenum cap) {
    printf("stub glEnable(0x%04X);\n", cap);
}
void stub_glEnableVertexAttribArray(GLuint index) {
    printf("stub glEnableVertexAttribArray(%u);\n", index);
}
void stub_glFinish() {
    printf("stub glFinish();\n");
}
void stub_glFlush() {
    printf("stub glFlush();\n");
}
void stub_glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
    printf("stub glFramebufferRenderbuffer(0x%04X, 0x%04X, 0x%04X, %u);\n", target, attachment, renderbuffertarget, renderbuffer);
}
void stub_glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    printf("stub glFramebufferTexture2D(0x%04X, 0x%04X, 0x%04X, %u, %d);\n", target, attachment, textarget, texture, level);
}
void stub_glFrontFace(GLenum mode) {
    printf("stub glFrontFace(0x%04X);\n", mode);
}
void stub_glGenBuffers(GLsizei n, GLuint * buffers) {
    printf("stub glGenBuffers(%d, %p);\n", n, buffers);
}
void stub_glGenFramebuffers(GLsizei n, GLuint * framebuffers) {
    printf("stub glGenFramebuffers(%d, %p);\n", n, framebuffers);
}
void stub_glGenRenderbuffers(GLsizei n, GLuint * renderbuffers) {
    printf("stub glGenRenderbuffers(%d, %p);\n", n, renderbuffers);
}
void stub_glGenTextures(GLsizei n, GLuint * textures) {
    printf("stub glGenTextures(%d, %p);\n", n, textures);
}
void stub_glGenerateMipmap(GLenum target) {
    printf("stub glGenerateMipmap(0x%04X);\n", target);
}
void stub_glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) {
    printf("stub glGetActiveAttrib(%u, %u, %d, %p, %p, %p, %p);\n", program, index, bufSize, length, size, type, name);
}
void stub_glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) {
    printf("stub glGetActiveUniform(%u, %u, %d, %p, %p, %p, %p);\n", program, index, bufSize, length, size, type, name);
}
void stub_glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * obj) {
    printf("stub glGetAttachedShaders(%u, %d, %p, %p);\n", program, maxCount, count, obj);
}
GLint stub_glGetAttribLocation(GLuint program, const GLchar * name) {
    printf("stub glGetAttribLocation(%u, %p);\n", program, name);
    return 0;
}
void stub_glGetBooleanv(GLenum pname, GLboolean * params) {
    printf("stub glGetBooleanv(0x%04X, %p);\n", pname, params);
}
void stub_glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params) {
    printf("stub glGetBufferParameteriv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
GLenum stub_glGetError() {
    printf("stub glGetError();\n");
    return 0;
}
void stub_glGetFloatv(GLenum pname, GLfloat * params) {
    printf("stub glGetFloatv(0x%04X, %p);\n", pname, params);
}
void stub_glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params) {
    printf("stub glGetFramebufferAttachmentParameteriv(0x%04X, 0x%04X, 0x%04X, %p);\n", target, attachment, pname, params);
}
void stub_glGetIntegerv(GLenum pname, GLint * params) {
    printf("stub glGetIntegerv(0x%04X, %p);\n", pname, params);
}
void stub_glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
    printf("stub glGetProgramInfoLog(%u, %d, %p, %p);\n", program, bufSize, length, infoLog);
}
void stub_glGetProgramiv(GLuint program, GLenum pname, GLint * params) {
    printf("stub glGetProgramiv(%u, 0x%04X, %p);\n", program, pname, params);
}
void stub_glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params) {
    printf("stub glGetRenderbufferParameteriv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
    printf("stub glGetShaderInfoLog(%u, %d, %p, %p);\n", shader, bufSize, length, infoLog);
}
void stub_glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision) {
    printf("stub glGetShaderPrecisionFormat(0x%04X, 0x%04X, %p, %p);\n", shadertype, precisiontype, range, precision);
}
void stub_glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source) {
    printf("stub glGetShaderSource(%u, %d, %p, %p);\n", shader, bufSize, length, source);
}
void stub_glGetShaderiv(GLuint shader, GLenum pname, GLint * params) {
    printf("stub glGetShaderiv(%u, 0x%04X, %p);\n", shader, pname, params);
}
const GLubyte * stub_glGetString(GLenum name) {
    printf("stub glGetString(0x%04X);\n", name);
    return 0;
}
void stub_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params) {
    printf("stub glGetTexParameterfv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glGetTexParameteriv(GLenum target, GLenum pname, GLint * params) {
    printf("stub glGetTexParameteriv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
GLint stub_glGetUniformLocation(GLuint program, const GLchar * name) {
    printf("stub glGetUniformLocation(%u, %p);\n", program, name);
    return 0;
}
void stub_glGetUniformfv(GLuint program, GLint location, GLfloat * params) {
    printf("stub glGetUniformfv(%u, %d, %p);\n", program, location, params);
}
void stub_glGetUniformiv(GLuint program, GLint location, GLint * params) {
    printf("stub glGetUniformiv(%u, %d, %p);\n", program, location, params);
}
void stub_glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid ** pointer) {
    printf("stub glGetVertexAttribPointerv(%u, 0x%04X, %p);\n", index, pname, pointer);
}
void stub_glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params) {
    printf("stub glGetVertexAttribfv(%u, 0x%04X, %p);\n", index, pname, params);
}
void stub_glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params) {
    printf("stub glGetVertexAttribiv(%u, 0x%04X, %p);\n", index, pname, params);
}
void stub_glHint(GLenum target, GLenum mode) {
    printf("stub glHint(0x%04X, 0x%04X);\n", target, mode);
}
GLboolean stub_glIsBuffer(GLuint buffer) {
    printf("stub glIsBuffer(%u);\n", buffer);
    return 0;
}
GLboolean stub_glIsEnabled(GLenum cap) {
    printf("stub glIsEnabled(0x%04X);\n", cap);
    return 0;
}
GLboolean stub_glIsFramebuffer(GLuint framebuffer) {
    printf("stub glIsFramebuffer(%u);\n", framebuffer);
    return 0;
}
GLboolean stub_glIsProgram(GLuint program) {
    printf("stub glIsProgram(%u);\n", program);
    return 0;
}
GLboolean stub_glIsRenderbuffer(GLuint renderbuffer) {
    printf("stub glIsRenderbuffer(%u);\n", renderbuffer);
    return 0;
}
GLboolean stub_glIsShader(GLuint shader) {
    printf("stub glIsShader(%u);\n", shader);
    return 0;
}
GLboolean stub_glIsTexture(GLuint texture) {
    printf("stub glIsTexture(%u);\n", texture);
    return 0;
}
void stub_glLineWidth(GLfloat width) {
    printf("stub glLineWidth(%0.2f);\n", width);
}
void stub_glLinkProgram(GLuint program) {
    printf("stub glLinkProgram(%u);\n", program);
}
void stub_glPixelStorei(GLenum pname, GLint param) {
    printf("stub glPixelStorei(0x%04X, %d);\n", pname, param);
}
void stub_glPolygonOffset(GLfloat factor, GLfloat units) {
    printf("stub glPolygonOffset(%0.2f, %0.2f);\n", factor, units);
}
void stub_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels) {
    printf("stub glReadPixels(%d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", x, y, width, height, format, type, pixels);
}
void stub_glReleaseShaderCompiler() {
    printf("stub glReleaseShaderCompiler();\n");
}
void stub_glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
    printf("stub glRenderbufferStorage(0x%04X, 0x%04X, %d, %d);\n", target, internalformat, width, height);
}
void stub_glSampleCoverage(GLclampf value, GLboolean invert) {
    printf("stub glSampleCoverage(%0.2f, %d);\n", value, invert);
}
void stub_glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
    printf("stub glScissor(%d, %d, %d, %d);\n", x, y, width, height);
}
void stub_glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryformat, const GLvoid * binary, GLsizei length) {
    printf("stub glShaderBinary(%d, %p, 0x%04X, %p, %d);\n", count, shaders, binaryformat, binary, length);
}
void stub_glShaderSource(GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length) {
    printf("stub glShaderSource(%u, %d, %p, %p);\n", shader, count, string, length);
}
void stub_glStencilFunc(GLenum func, GLint ref, GLuint mask) {
    printf("stub glStencilFunc(0x%04X, %d, %u);\n", func, ref, mask);
}
void stub_glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) {
    printf("stub glStencilFuncSeparate(0x%04X, 0x%04X, %d, %u);\n", face, func, ref, mask);
}
void stub_glStencilMask(GLuint mask) {
    printf("stub glStencilMask(%u);\n", mask);
}
void stub_glStencilMaskSeparate(GLenum face, GLuint mask) {
    printf("stub glStencilMaskSeparate(0x%04X, %u);\n", face, mask);
}
void stub_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) {
    printf("stub glStencilOp(0x%04X, 0x%04X, 0x%04X);\n", fail, zfail, zpass);
}
void stub_glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
    printf("stub glStencilOpSeparate(0x%04X, 0x%04X, 0x%04X, 0x%04X);\n", face, sfail, dpfail, dppass);
}
void stub_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels) {
    printf("stub glTexImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", target, level, internalformat, width, height, border, format, type, pixels);
}
void stub_glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
    printf("stub glTexParameterf(0x%04X, 0x%04X, %0.2f);\n", target, pname, param);
}
void stub_glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params) {
    printf("stub glTexParameterfv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glTexParameteri(GLenum target, GLenum pname, GLint param) {
    printf("stub glTexParameteri(0x%04X, 0x%04X, %d);\n", target, pname, param);
}
void stub_glTexParameteriv(GLenum target, GLenum pname, const GLint * params) {
    printf("stub glTexParameteriv(0x%04X, 0x%04X, %p);\n", target, pname, params);
}
void stub_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) {
    printf("stub glTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", target, level, xoffset, yoffset, width, height, format, type, pixels);
}
void stub_glUniform1f(GLint location, GLfloat v0) {
    printf("stub glUniform1f(%d, %0.2f);\n", location, v0);
}
void stub_glUniform1fv(GLint location, GLsizei count, const GLfloat * value) {
    printf("stub glUniform1fv(%d, %d, %p);\n", location, count, value);
}
void stub_glUniform1i(GLint location, GLint v0) {
    printf("stub glUniform1i(%d, %d);\n", location, v0);
}
void stub_glUniform1iv(GLint location, GLsizei count, const GLint * value) {
    printf("stub glUniform1iv(%d, %d, %p);\n", location, count, value);
}
void stub_glUniform2f(GLint location, GLfloat v0, GLfloat v1) {
    printf("stub glUniform2f(%d, %0.2f, %0.2f);\n", location, v0, v1);
}
void stub_glUniform2fv(GLint location, GLsizei count, const GLfloat * value) {
    printf("stub glUniform2fv(%d, %d, %p);\n", location, count, value);
}
void stub_glUniform2i(GLint location, GLint v0, GLint v1) {
    printf("stub glUniform2i(%d, %d, %d);\n", location, v0, v1);
}
void stub_glUniform2iv(GLint location, GLsizei count, const GLint * value) {
    printf("stub glUniform2iv(%d, %d, %p);\n", location, count, value);
}
void stub_glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
    printf("stub glUniform3f(%d, %0.2f, %0.2f, %0.2f);\n", location, v0, v1, v2);
}
void stub_glUniform3fv(GLint location, GLsizei count, const GLfloat * value) {
    printf("stub glUniform3fv(%d, %d, %p);\n", location, count, value);
}
void stub_glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) {
    printf("stub glUniform3i(%d, %d, %d, %d);\n", location, v0, v1, v2);
}
void stub_glUniform3iv(GLint location, GLsizei count, const GLint * value) {
    printf("stub glUniform3iv(%d, %d, %p);\n", location, count, value);
}
void stub_glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
    printf("stub glUniform4f(%d, %0.2f, %0.2f, %0.2f, %0.2f);\n", location, v0, v1, v2, v3);
}
void stub_glUniform4fv(GLint location, GLsizei count, const GLfloat * value) {
    printf("stub glUniform4fv(%d, %d, %p);\n", location, count, value);
}
void stub_glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
    printf("stub glUniform4i(%d, %d, %d, %d, %d);\n", location, v0, v1, v2, v3);
}
void stub_glUniform4iv(GLint location, GLsizei count, const GLint * value) {
    printf("stub glUniform4iv(%d, %d, %p);\n", location, count, value);
}
void stub_glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
    printf("stub glUniformMatrix2fv(%d, %d, %d, %p);\n", location, count, transpose, value);
}
void stub_glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
    printf("stub glUniformMatrix3fv(%d, %d, %d, %p);\n", location, count, transpose, value);
}
void stub_glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
    printf("stub glUniformMatrix4fv(%d, %d, %d, %p);\n", location, count, transpose, value);
}
void stub_glUseProgram(GLuint program) {
    printf("stub glUseProgram(%u);\n", program);
}
void stub_glValidateProgram(GLuint program) {
    printf("stub glValidateProgram(%u);\n", program);
}
void stub_glVertexAttrib1f(GLuint index, GLfloat x) {
    printf("stub glVertexAttrib1f(%u, %0.2f);\n", index, x);
}
void stub_glVertexAttrib1fv(GLuint index, const GLfloat * v) {
    printf("stub glVertexAttrib1fv(%u, %p);\n", index, v);
}
void stub_glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y) {
    printf("stub glVertexAttrib2f(%u, %0.2f, %0.2f);\n", index, x, y);
}
void stub_glVertexAttrib2fv(GLuint index, const GLfloat * v) {
    printf("stub glVertexAttrib2fv(%u, %p);\n", index, v);
}
void stub_glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
    printf("stub glVertexAttrib3f(%u, %0.2f, %0.2f, %0.2f);\n", index, x, y, z);
}
void stub_glVertexAttrib3fv(GLuint index, const GLfloat * v) {
    printf("stub glVertexAttrib3fv(%u, %p);\n", index, v);
}
void stub_glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
    printf("stub glVertexAttrib4f(%u, %0.2f, %0.2f, %0.2f, %0.2f);\n", index, x, y, z, w);
}
void stub_glVertexAttrib4fv(GLuint index, const GLfloat * v) {
    printf("stub glVertexAttrib4fv(%u, %p);\n", index, v);
}
void stub_glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer) {
    printf("stub glVertexAttribPointer(%u, %d, 0x%04X, %d, %d, %p);\n", index, size, type, normalized, stride, pointer);
}
void stub_glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
    printf("stub glViewport(%d, %d, %d, %d);\n", x, y, width, height);
}
#endif

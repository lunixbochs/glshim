#include "loader.h"

void glGenFramebuffers(GLsizei n, GLuint *framebuffers) {
    PROXY_OES(glGenFramebuffersOES);
}

void glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers) {
    PROXY_OES(glDeleteFramebuffersOES);
}

GLboolean glIsFramebuffer(GLuint framebuffer) {
    LOAD_OES(glIsFramebufferOES);
    return gles_glIsFramebufferOES(framebuffer);
}

GLenum glCheckFramebufferStatus(GLenum target) {
    LOAD_OES(glCheckFramebufferStatusOES);
    return gles_glCheckFramebufferStatusOES(target);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer) {
    PROXY_OES(glBindFramebufferOES);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    PROXY_OES(glFramebufferTexture2DOES);
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    glFramebufferTexture2D(target, attachment, GL_TEXTURE_2D, texture, level);
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint layer) {
    glFramebufferTexture2D(target, attachment, GL_TEXTURE_2D, texture, level);
}

void glGenRenderbuffers(GLsizei n, GLuint *renderbuffers) {
    PROXY_OES(glGenRenderbuffersOES);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers) {
    PROXY_OES(glDeleteRenderbuffersOES);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
    PROXY_OES(glFramebufferRenderbufferOES);
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
    PROXY_OES(glRenderbufferStorageOES);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {    //STUB
    glRenderbufferStorage(target, internalformat, width, height);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer) {
    PROXY_OES(glBindRenderbufferOES);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer) {
    LOAD_OES(glIsRenderbufferOES);
    return gles_glIsRenderbufferOES(renderbuffer);
}

void glGenerateMipmap(GLenum target) {
    PROXY_OES(glGenerateMipmapOES);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params) {
    PROXY_OES(glGetFramebufferAttachmentParameterivOES);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params) {
    PROXY_OES(glGetRenderbufferParameterivOES);
}

void glGenFramebuffersEXT(GLsizei n, GLuint *ids) {
    glGenFramebuffers(n, ids);
}
void glDeleteFramebuffersEXT(GLsizei n, const GLuint *framebuffers) {
    glDeleteFramebuffers(n, framebuffers);
}
GLboolean glIsFramebufferEXT(GLuint framebuffer) {
    return glIsFramebuffer(framebuffer);
}
GLenum glCheckFramebufferStatusEXT(GLenum target) {
    return glCheckFramebufferStatus(target);
}
void glBindFramebufferEXT(GLenum target, GLuint framebuffer) {
    glBindFramebuffer(target, framebuffer);
}
void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    glFramebufferTexture1D(target, attachment, textarget, texture, level);
}
void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    glFramebufferTexture2D(target, attachment, textarget, texture, level);
}
void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint layer) {
    glFramebufferTexture3D(target, attachment, textarget, texture, level, layer);
}
void glGenRenderbuffersEXT(GLsizei n, GLuint *renderbuffers) {
    glGenRenderbuffers(n, renderbuffers);
}
void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
    glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}
void glDeleteRenderbuffersEXT(GLsizei n, const GLuint *renderbuffers) {
    glDeleteRenderbuffers(n, renderbuffers);
}
void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
    glRenderbufferStorage(target, internalformat, width, height);
}
void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer) {
    glBindRenderbuffer(target, renderbuffer);
}
GLboolean glIsRenderbufferEXT(GLuint renderbuffer) {
    return glIsRenderbuffer(renderbuffer);
}
void glGenerateMipmapEXT(GLenum target) {
    glGenerateMipmap(target);
}
void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint *params) {
    glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}
void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint *params) {
    glGetRenderbufferParameteriv(target, pname, params);
}

#include "../types.h"
#ifndef PACK_GLES2_H
#define PACK_GLES2_H

#ifndef glActiveTexture_RETURN
typedef struct {
    GLenum texture;
} glActiveTexture_ARGS;
typedef struct {
    int index;
    glActiveTexture_ARGS args;
} glActiveTexture_PACKED;
#endif
#ifndef glAttachShader_RETURN
typedef struct {
    GLuint program;
    GLuint shader;
} glAttachShader_ARGS;
typedef struct {
    int index;
    glAttachShader_ARGS args;
} glAttachShader_PACKED;
#endif
#ifndef glBindAttribLocation_RETURN
typedef struct {
    GLuint program;
    GLuint index;
    GLchar * name;
} glBindAttribLocation_ARGS;
typedef struct {
    int index;
    glBindAttribLocation_ARGS args;
} glBindAttribLocation_PACKED;
#endif
#ifndef glBindBuffer_RETURN
typedef struct {
    GLenum target;
    GLuint buffer;
} glBindBuffer_ARGS;
typedef struct {
    int index;
    glBindBuffer_ARGS args;
} glBindBuffer_PACKED;
#endif
#ifndef glBindFramebuffer_RETURN
typedef struct {
    GLenum target;
    GLuint framebuffer;
} glBindFramebuffer_ARGS;
typedef struct {
    int index;
    glBindFramebuffer_ARGS args;
} glBindFramebuffer_PACKED;
#endif
#ifndef glBindRenderbuffer_RETURN
typedef struct {
    GLenum target;
    GLuint renderbuffer;
} glBindRenderbuffer_ARGS;
typedef struct {
    int index;
    glBindRenderbuffer_ARGS args;
} glBindRenderbuffer_PACKED;
#endif
#ifndef glBindTexture_RETURN
typedef struct {
    GLenum target;
    GLuint texture;
} glBindTexture_ARGS;
typedef struct {
    int index;
    glBindTexture_ARGS args;
} glBindTexture_PACKED;
#endif
#ifndef glBlendColor_RETURN
typedef struct {
    GLclampf red;
    GLclampf green;
    GLclampf blue;
    GLclampf alpha;
} glBlendColor_ARGS;
typedef struct {
    int index;
    glBlendColor_ARGS args;
} glBlendColor_PACKED;
#endif
#ifndef glBlendEquation_RETURN
typedef struct {
    GLenum mode;
} glBlendEquation_ARGS;
typedef struct {
    int index;
    glBlendEquation_ARGS args;
} glBlendEquation_PACKED;
#endif
#ifndef glBlendEquationSeparate_RETURN
typedef struct {
    GLenum modeRGB;
    GLenum modeAlpha;
} glBlendEquationSeparate_ARGS;
typedef struct {
    int index;
    glBlendEquationSeparate_ARGS args;
} glBlendEquationSeparate_PACKED;
#endif
#ifndef glBlendFunc_RETURN
typedef struct {
    GLenum sfactor;
    GLenum dfactor;
} glBlendFunc_ARGS;
typedef struct {
    int index;
    glBlendFunc_ARGS args;
} glBlendFunc_PACKED;
#endif
#ifndef glBlendFuncSeparate_RETURN
typedef struct {
    GLenum sfactorRGB;
    GLenum dfactorRGB;
    GLenum sfactorAlpha;
    GLenum dfactorAlpha;
} glBlendFuncSeparate_ARGS;
typedef struct {
    int index;
    glBlendFuncSeparate_ARGS args;
} glBlendFuncSeparate_PACKED;
#endif
#ifndef glBufferData_RETURN
typedef struct {
    GLenum target;
    GLsizeiptr size;
    GLvoid * data;
    GLenum usage;
} glBufferData_ARGS;
typedef struct {
    int index;
    glBufferData_ARGS args;
} glBufferData_PACKED;
#endif
#ifndef glBufferSubData_RETURN
typedef struct {
    GLenum target;
    GLintptr offset;
    GLsizeiptr size;
    GLvoid * data;
} glBufferSubData_ARGS;
typedef struct {
    int index;
    glBufferSubData_ARGS args;
} glBufferSubData_PACKED;
#endif
#ifndef glCheckFramebufferStatus_RETURN
typedef struct {
    GLenum target;
} glCheckFramebufferStatus_ARGS;
typedef struct {
    int index;
    glCheckFramebufferStatus_ARGS args;
} glCheckFramebufferStatus_PACKED;
#endif
#ifndef glClear_RETURN
typedef struct {
    GLbitfield mask;
} glClear_ARGS;
typedef struct {
    int index;
    glClear_ARGS args;
} glClear_PACKED;
#endif
#ifndef glClearColor_RETURN
typedef struct {
    GLclampf red;
    GLclampf green;
    GLclampf blue;
    GLclampf alpha;
} glClearColor_ARGS;
typedef struct {
    int index;
    glClearColor_ARGS args;
} glClearColor_PACKED;
#endif
#ifndef glClearDepthf_RETURN
typedef struct {
    GLclampf depth;
} glClearDepthf_ARGS;
typedef struct {
    int index;
    glClearDepthf_ARGS args;
} glClearDepthf_PACKED;
#endif
#ifndef glClearStencil_RETURN
typedef struct {
    GLint s;
} glClearStencil_ARGS;
typedef struct {
    int index;
    glClearStencil_ARGS args;
} glClearStencil_PACKED;
#endif
#ifndef glColorMask_RETURN
typedef struct {
    GLboolean red;
    GLboolean green;
    GLboolean blue;
    GLboolean alpha;
} glColorMask_ARGS;
typedef struct {
    int index;
    glColorMask_ARGS args;
} glColorMask_PACKED;
#endif
#ifndef glCompileShader_RETURN
typedef struct {
    GLuint shader;
} glCompileShader_ARGS;
typedef struct {
    int index;
    glCompileShader_ARGS args;
} glCompileShader_PACKED;
#endif
#ifndef glCompressedTexImage2D_RETURN
typedef struct {
    GLenum target;
    GLint level;
    GLenum internalformat;
    GLsizei width;
    GLsizei height;
    GLint border;
    GLsizei imageSize;
    GLvoid * data;
} glCompressedTexImage2D_ARGS;
typedef struct {
    int index;
    glCompressedTexImage2D_ARGS args;
} glCompressedTexImage2D_PACKED;
#endif
#ifndef glCompressedTexSubImage2D_RETURN
typedef struct {
    GLenum target;
    GLint level;
    GLint xoffset;
    GLint yoffset;
    GLsizei width;
    GLsizei height;
    GLenum format;
    GLsizei imageSize;
    GLvoid * data;
} glCompressedTexSubImage2D_ARGS;
typedef struct {
    int index;
    glCompressedTexSubImage2D_ARGS args;
} glCompressedTexSubImage2D_PACKED;
#endif
#ifndef glCopyTexImage2D_RETURN
typedef struct {
    GLenum target;
    GLint level;
    GLenum internalformat;
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
    GLint border;
} glCopyTexImage2D_ARGS;
typedef struct {
    int index;
    glCopyTexImage2D_ARGS args;
} glCopyTexImage2D_PACKED;
#endif
#ifndef glCopyTexSubImage2D_RETURN
typedef struct {
    GLenum target;
    GLint level;
    GLint xoffset;
    GLint yoffset;
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
} glCopyTexSubImage2D_ARGS;
typedef struct {
    int index;
    glCopyTexSubImage2D_ARGS args;
} glCopyTexSubImage2D_PACKED;
#endif
#ifndef glCreateProgram_RETURN
typedef struct {
    int index;
} glCreateProgram_PACKED;
#endif
#ifndef glCreateShader_RETURN
typedef struct {
    GLenum type;
} glCreateShader_ARGS;
typedef struct {
    int index;
    glCreateShader_ARGS args;
} glCreateShader_PACKED;
#endif
#ifndef glCullFace_RETURN
typedef struct {
    GLenum mode;
} glCullFace_ARGS;
typedef struct {
    int index;
    glCullFace_ARGS args;
} glCullFace_PACKED;
#endif
#ifndef glDeleteBuffers_RETURN
typedef struct {
    GLsizei n;
    GLuint * buffers;
} glDeleteBuffers_ARGS;
typedef struct {
    int index;
    glDeleteBuffers_ARGS args;
} glDeleteBuffers_PACKED;
#endif
#ifndef glDeleteFramebuffers_RETURN
typedef struct {
    GLsizei n;
    GLuint * framebuffers;
} glDeleteFramebuffers_ARGS;
typedef struct {
    int index;
    glDeleteFramebuffers_ARGS args;
} glDeleteFramebuffers_PACKED;
#endif
#ifndef glDeleteProgram_RETURN
typedef struct {
    GLuint program;
} glDeleteProgram_ARGS;
typedef struct {
    int index;
    glDeleteProgram_ARGS args;
} glDeleteProgram_PACKED;
#endif
#ifndef glDeleteRenderbuffers_RETURN
typedef struct {
    GLsizei n;
    GLuint * renderbuffers;
} glDeleteRenderbuffers_ARGS;
typedef struct {
    int index;
    glDeleteRenderbuffers_ARGS args;
} glDeleteRenderbuffers_PACKED;
#endif
#ifndef glDeleteShader_RETURN
typedef struct {
    GLuint shader;
} glDeleteShader_ARGS;
typedef struct {
    int index;
    glDeleteShader_ARGS args;
} glDeleteShader_PACKED;
#endif
#ifndef glDeleteTextures_RETURN
typedef struct {
    GLsizei n;
    GLuint * textures;
} glDeleteTextures_ARGS;
typedef struct {
    int index;
    glDeleteTextures_ARGS args;
} glDeleteTextures_PACKED;
#endif
#ifndef glDepthFunc_RETURN
typedef struct {
    GLenum func;
} glDepthFunc_ARGS;
typedef struct {
    int index;
    glDepthFunc_ARGS args;
} glDepthFunc_PACKED;
#endif
#ifndef glDepthMask_RETURN
typedef struct {
    GLboolean flag;
} glDepthMask_ARGS;
typedef struct {
    int index;
    glDepthMask_ARGS args;
} glDepthMask_PACKED;
#endif
#ifndef glDepthRangef_RETURN
typedef struct {
    GLclampf near;
    GLclampf far;
} glDepthRangef_ARGS;
typedef struct {
    int index;
    glDepthRangef_ARGS args;
} glDepthRangef_PACKED;
#endif
#ifndef glDetachShader_RETURN
typedef struct {
    GLuint program;
    GLuint shader;
} glDetachShader_ARGS;
typedef struct {
    int index;
    glDetachShader_ARGS args;
} glDetachShader_PACKED;
#endif
#ifndef glDisable_RETURN
typedef struct {
    GLenum cap;
} glDisable_ARGS;
typedef struct {
    int index;
    glDisable_ARGS args;
} glDisable_PACKED;
#endif
#ifndef glDisableVertexAttribArray_RETURN
typedef struct {
    GLuint index;
} glDisableVertexAttribArray_ARGS;
typedef struct {
    int index;
    glDisableVertexAttribArray_ARGS args;
} glDisableVertexAttribArray_PACKED;
#endif
#ifndef glDrawArrays_RETURN
typedef struct {
    GLenum mode;
    GLint first;
    GLsizei count;
} glDrawArrays_ARGS;
typedef struct {
    int index;
    glDrawArrays_ARGS args;
} glDrawArrays_PACKED;
#endif
#ifndef glDrawElements_RETURN
typedef struct {
    GLenum mode;
    GLsizei count;
    GLenum type;
    GLvoid * indices;
} glDrawElements_ARGS;
typedef struct {
    int index;
    glDrawElements_ARGS args;
} glDrawElements_PACKED;
#endif
#ifndef glEnable_RETURN
typedef struct {
    GLenum cap;
} glEnable_ARGS;
typedef struct {
    int index;
    glEnable_ARGS args;
} glEnable_PACKED;
#endif
#ifndef glEnableVertexAttribArray_RETURN
typedef struct {
    GLuint index;
} glEnableVertexAttribArray_ARGS;
typedef struct {
    int index;
    glEnableVertexAttribArray_ARGS args;
} glEnableVertexAttribArray_PACKED;
#endif
#ifndef glFinish_RETURN
typedef struct {
    int index;
} glFinish_PACKED;
#endif
#ifndef glFlush_RETURN
typedef struct {
    int index;
} glFlush_PACKED;
#endif
#ifndef glFramebufferRenderbuffer_RETURN
typedef struct {
    GLenum target;
    GLenum attachment;
    GLenum renderbuffertarget;
    GLuint renderbuffer;
} glFramebufferRenderbuffer_ARGS;
typedef struct {
    int index;
    glFramebufferRenderbuffer_ARGS args;
} glFramebufferRenderbuffer_PACKED;
#endif
#ifndef glFramebufferTexture2D_RETURN
typedef struct {
    GLenum target;
    GLenum attachment;
    GLenum textarget;
    GLuint texture;
    GLint level;
} glFramebufferTexture2D_ARGS;
typedef struct {
    int index;
    glFramebufferTexture2D_ARGS args;
} glFramebufferTexture2D_PACKED;
#endif
#ifndef glFrontFace_RETURN
typedef struct {
    GLenum mode;
} glFrontFace_ARGS;
typedef struct {
    int index;
    glFrontFace_ARGS args;
} glFrontFace_PACKED;
#endif
#ifndef glGenBuffers_RETURN
typedef struct {
    GLsizei n;
    GLuint * buffers;
} glGenBuffers_ARGS;
typedef struct {
    int index;
    glGenBuffers_ARGS args;
} glGenBuffers_PACKED;
#endif
#ifndef glGenFramebuffers_RETURN
typedef struct {
    GLsizei n;
    GLuint * framebuffers;
} glGenFramebuffers_ARGS;
typedef struct {
    int index;
    glGenFramebuffers_ARGS args;
} glGenFramebuffers_PACKED;
#endif
#ifndef glGenRenderbuffers_RETURN
typedef struct {
    GLsizei n;
    GLuint * renderbuffers;
} glGenRenderbuffers_ARGS;
typedef struct {
    int index;
    glGenRenderbuffers_ARGS args;
} glGenRenderbuffers_PACKED;
#endif
#ifndef glGenTextures_RETURN
typedef struct {
    GLsizei n;
    GLuint * textures;
} glGenTextures_ARGS;
typedef struct {
    int index;
    glGenTextures_ARGS args;
} glGenTextures_PACKED;
#endif
#ifndef glGenerateMipmap_RETURN
typedef struct {
    GLenum target;
} glGenerateMipmap_ARGS;
typedef struct {
    int index;
    glGenerateMipmap_ARGS args;
} glGenerateMipmap_PACKED;
#endif
#ifndef glGetActiveAttrib_RETURN
typedef struct {
    GLuint program;
    GLuint index;
    GLsizei bufSize;
    GLsizei * length;
    GLint * size;
    GLenum * type;
    GLchar * name;
} glGetActiveAttrib_ARGS;
typedef struct {
    int index;
    glGetActiveAttrib_ARGS args;
} glGetActiveAttrib_PACKED;
#endif
#ifndef glGetActiveUniform_RETURN
typedef struct {
    GLuint program;
    GLuint index;
    GLsizei bufSize;
    GLsizei * length;
    GLint * size;
    GLenum * type;
    GLchar * name;
} glGetActiveUniform_ARGS;
typedef struct {
    int index;
    glGetActiveUniform_ARGS args;
} glGetActiveUniform_PACKED;
#endif
#ifndef glGetAttachedShaders_RETURN
typedef struct {
    GLuint program;
    GLsizei maxCount;
    GLsizei * count;
    GLuint * obj;
} glGetAttachedShaders_ARGS;
typedef struct {
    int index;
    glGetAttachedShaders_ARGS args;
} glGetAttachedShaders_PACKED;
#endif
#ifndef glGetAttribLocation_RETURN
typedef struct {
    GLuint program;
    GLchar * name;
} glGetAttribLocation_ARGS;
typedef struct {
    int index;
    glGetAttribLocation_ARGS args;
} glGetAttribLocation_PACKED;
#endif
#ifndef glGetBooleanv_RETURN
typedef struct {
    GLenum pname;
    GLboolean * params;
} glGetBooleanv_ARGS;
typedef struct {
    int index;
    glGetBooleanv_ARGS args;
} glGetBooleanv_PACKED;
#endif
#ifndef glGetBufferParameteriv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLint * params;
} glGetBufferParameteriv_ARGS;
typedef struct {
    int index;
    glGetBufferParameteriv_ARGS args;
} glGetBufferParameteriv_PACKED;
#endif
#ifndef glGetError_RETURN
typedef struct {
    int index;
} glGetError_PACKED;
#endif
#ifndef glGetFloatv_RETURN
typedef struct {
    GLenum pname;
    GLfloat * params;
} glGetFloatv_ARGS;
typedef struct {
    int index;
    glGetFloatv_ARGS args;
} glGetFloatv_PACKED;
#endif
#ifndef glGetFramebufferAttachmentParameteriv_RETURN
typedef struct {
    GLenum target;
    GLenum attachment;
    GLenum pname;
    GLint * params;
} glGetFramebufferAttachmentParameteriv_ARGS;
typedef struct {
    int index;
    glGetFramebufferAttachmentParameteriv_ARGS args;
} glGetFramebufferAttachmentParameteriv_PACKED;
#endif
#ifndef glGetIntegerv_RETURN
typedef struct {
    GLenum pname;
    GLint * params;
} glGetIntegerv_ARGS;
typedef struct {
    int index;
    glGetIntegerv_ARGS args;
} glGetIntegerv_PACKED;
#endif
#ifndef glGetProgramInfoLog_RETURN
typedef struct {
    GLuint program;
    GLsizei bufSize;
    GLsizei * length;
    GLchar * infoLog;
} glGetProgramInfoLog_ARGS;
typedef struct {
    int index;
    glGetProgramInfoLog_ARGS args;
} glGetProgramInfoLog_PACKED;
#endif
#ifndef glGetProgramiv_RETURN
typedef struct {
    GLuint program;
    GLenum pname;
    GLint * params;
} glGetProgramiv_ARGS;
typedef struct {
    int index;
    glGetProgramiv_ARGS args;
} glGetProgramiv_PACKED;
#endif
#ifndef glGetRenderbufferParameteriv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLint * params;
} glGetRenderbufferParameteriv_ARGS;
typedef struct {
    int index;
    glGetRenderbufferParameteriv_ARGS args;
} glGetRenderbufferParameteriv_PACKED;
#endif
#ifndef glGetShaderInfoLog_RETURN
typedef struct {
    GLuint shader;
    GLsizei bufSize;
    GLsizei * length;
    GLchar * infoLog;
} glGetShaderInfoLog_ARGS;
typedef struct {
    int index;
    glGetShaderInfoLog_ARGS args;
} glGetShaderInfoLog_PACKED;
#endif
#ifndef glGetShaderPrecisionFormat_RETURN
typedef struct {
    GLenum shadertype;
    GLenum precisiontype;
    GLint * range;
    GLint * precision;
} glGetShaderPrecisionFormat_ARGS;
typedef struct {
    int index;
    glGetShaderPrecisionFormat_ARGS args;
} glGetShaderPrecisionFormat_PACKED;
#endif
#ifndef glGetShaderSource_RETURN
typedef struct {
    GLuint shader;
    GLsizei bufSize;
    GLsizei * length;
    GLchar * source;
} glGetShaderSource_ARGS;
typedef struct {
    int index;
    glGetShaderSource_ARGS args;
} glGetShaderSource_PACKED;
#endif
#ifndef glGetShaderiv_RETURN
typedef struct {
    GLuint shader;
    GLenum pname;
    GLint * params;
} glGetShaderiv_ARGS;
typedef struct {
    int index;
    glGetShaderiv_ARGS args;
} glGetShaderiv_PACKED;
#endif
#ifndef glGetString_RETURN
typedef struct {
    GLenum name;
} glGetString_ARGS;
typedef struct {
    int index;
    glGetString_ARGS args;
} glGetString_PACKED;
#endif
#ifndef glGetTexParameterfv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfloat * params;
} glGetTexParameterfv_ARGS;
typedef struct {
    int index;
    glGetTexParameterfv_ARGS args;
} glGetTexParameterfv_PACKED;
#endif
#ifndef glGetTexParameteriv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLint * params;
} glGetTexParameteriv_ARGS;
typedef struct {
    int index;
    glGetTexParameteriv_ARGS args;
} glGetTexParameteriv_PACKED;
#endif
#ifndef glGetUniformLocation_RETURN
typedef struct {
    GLuint program;
    GLchar * name;
} glGetUniformLocation_ARGS;
typedef struct {
    int index;
    glGetUniformLocation_ARGS args;
} glGetUniformLocation_PACKED;
#endif
#ifndef glGetUniformfv_RETURN
typedef struct {
    GLuint program;
    GLint location;
    GLfloat * params;
} glGetUniformfv_ARGS;
typedef struct {
    int index;
    glGetUniformfv_ARGS args;
} glGetUniformfv_PACKED;
#endif
#ifndef glGetUniformiv_RETURN
typedef struct {
    GLuint program;
    GLint location;
    GLint * params;
} glGetUniformiv_ARGS;
typedef struct {
    int index;
    glGetUniformiv_ARGS args;
} glGetUniformiv_PACKED;
#endif
#ifndef glGetVertexAttribPointerv_RETURN
typedef struct {
    GLuint index;
    GLenum pname;
    GLvoid ** pointer;
} glGetVertexAttribPointerv_ARGS;
typedef struct {
    int index;
    glGetVertexAttribPointerv_ARGS args;
} glGetVertexAttribPointerv_PACKED;
#endif
#ifndef glGetVertexAttribfv_RETURN
typedef struct {
    GLuint index;
    GLenum pname;
    GLfloat * params;
} glGetVertexAttribfv_ARGS;
typedef struct {
    int index;
    glGetVertexAttribfv_ARGS args;
} glGetVertexAttribfv_PACKED;
#endif
#ifndef glGetVertexAttribiv_RETURN
typedef struct {
    GLuint index;
    GLenum pname;
    GLint * params;
} glGetVertexAttribiv_ARGS;
typedef struct {
    int index;
    glGetVertexAttribiv_ARGS args;
} glGetVertexAttribiv_PACKED;
#endif
#ifndef glHint_RETURN
typedef struct {
    GLenum target;
    GLenum mode;
} glHint_ARGS;
typedef struct {
    int index;
    glHint_ARGS args;
} glHint_PACKED;
#endif
#ifndef glIsBuffer_RETURN
typedef struct {
    GLuint buffer;
} glIsBuffer_ARGS;
typedef struct {
    int index;
    glIsBuffer_ARGS args;
} glIsBuffer_PACKED;
#endif
#ifndef glIsEnabled_RETURN
typedef struct {
    GLenum cap;
} glIsEnabled_ARGS;
typedef struct {
    int index;
    glIsEnabled_ARGS args;
} glIsEnabled_PACKED;
#endif
#ifndef glIsFramebuffer_RETURN
typedef struct {
    GLuint framebuffer;
} glIsFramebuffer_ARGS;
typedef struct {
    int index;
    glIsFramebuffer_ARGS args;
} glIsFramebuffer_PACKED;
#endif
#ifndef glIsProgram_RETURN
typedef struct {
    GLuint program;
} glIsProgram_ARGS;
typedef struct {
    int index;
    glIsProgram_ARGS args;
} glIsProgram_PACKED;
#endif
#ifndef glIsRenderbuffer_RETURN
typedef struct {
    GLuint renderbuffer;
} glIsRenderbuffer_ARGS;
typedef struct {
    int index;
    glIsRenderbuffer_ARGS args;
} glIsRenderbuffer_PACKED;
#endif
#ifndef glIsShader_RETURN
typedef struct {
    GLuint shader;
} glIsShader_ARGS;
typedef struct {
    int index;
    glIsShader_ARGS args;
} glIsShader_PACKED;
#endif
#ifndef glIsTexture_RETURN
typedef struct {
    GLuint texture;
} glIsTexture_ARGS;
typedef struct {
    int index;
    glIsTexture_ARGS args;
} glIsTexture_PACKED;
#endif
#ifndef glLineWidth_RETURN
typedef struct {
    GLfloat width;
} glLineWidth_ARGS;
typedef struct {
    int index;
    glLineWidth_ARGS args;
} glLineWidth_PACKED;
#endif
#ifndef glLinkProgram_RETURN
typedef struct {
    GLuint program;
} glLinkProgram_ARGS;
typedef struct {
    int index;
    glLinkProgram_ARGS args;
} glLinkProgram_PACKED;
#endif
#ifndef glPixelStorei_RETURN
typedef struct {
    GLenum pname;
    GLint param;
} glPixelStorei_ARGS;
typedef struct {
    int index;
    glPixelStorei_ARGS args;
} glPixelStorei_PACKED;
#endif
#ifndef glPolygonOffset_RETURN
typedef struct {
    GLfloat factor;
    GLfloat units;
} glPolygonOffset_ARGS;
typedef struct {
    int index;
    glPolygonOffset_ARGS args;
} glPolygonOffset_PACKED;
#endif
#ifndef glReadPixels_RETURN
typedef struct {
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
    GLenum format;
    GLenum type;
    GLvoid * pixels;
} glReadPixels_ARGS;
typedef struct {
    int index;
    glReadPixels_ARGS args;
} glReadPixels_PACKED;
#endif
#ifndef glReleaseShaderCompiler_RETURN
typedef struct {
    int index;
} glReleaseShaderCompiler_PACKED;
#endif
#ifndef glRenderbufferStorage_RETURN
typedef struct {
    GLenum target;
    GLenum internalformat;
    GLsizei width;
    GLsizei height;
} glRenderbufferStorage_ARGS;
typedef struct {
    int index;
    glRenderbufferStorage_ARGS args;
} glRenderbufferStorage_PACKED;
#endif
#ifndef glSampleCoverage_RETURN
typedef struct {
    GLclampf value;
    GLboolean invert;
} glSampleCoverage_ARGS;
typedef struct {
    int index;
    glSampleCoverage_ARGS args;
} glSampleCoverage_PACKED;
#endif
#ifndef glScissor_RETURN
typedef struct {
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
} glScissor_ARGS;
typedef struct {
    int index;
    glScissor_ARGS args;
} glScissor_PACKED;
#endif
#ifndef glShaderBinary_RETURN
typedef struct {
    GLsizei count;
    GLuint * shaders;
    GLenum binaryformat;
    GLvoid * binary;
    GLsizei length;
} glShaderBinary_ARGS;
typedef struct {
    int index;
    glShaderBinary_ARGS args;
} glShaderBinary_PACKED;
#endif
#ifndef glShaderSource_RETURN
typedef struct {
    GLuint shader;
    GLsizei count;
    GLchar * * string;
    GLint * length;
} glShaderSource_ARGS;
typedef struct {
    int index;
    glShaderSource_ARGS args;
} glShaderSource_PACKED;
#endif
#ifndef glStencilFunc_RETURN
typedef struct {
    GLenum func;
    GLint ref;
    GLuint mask;
} glStencilFunc_ARGS;
typedef struct {
    int index;
    glStencilFunc_ARGS args;
} glStencilFunc_PACKED;
#endif
#ifndef glStencilFuncSeparate_RETURN
typedef struct {
    GLenum face;
    GLenum func;
    GLint ref;
    GLuint mask;
} glStencilFuncSeparate_ARGS;
typedef struct {
    int index;
    glStencilFuncSeparate_ARGS args;
} glStencilFuncSeparate_PACKED;
#endif
#ifndef glStencilMask_RETURN
typedef struct {
    GLuint mask;
} glStencilMask_ARGS;
typedef struct {
    int index;
    glStencilMask_ARGS args;
} glStencilMask_PACKED;
#endif
#ifndef glStencilMaskSeparate_RETURN
typedef struct {
    GLenum face;
    GLuint mask;
} glStencilMaskSeparate_ARGS;
typedef struct {
    int index;
    glStencilMaskSeparate_ARGS args;
} glStencilMaskSeparate_PACKED;
#endif
#ifndef glStencilOp_RETURN
typedef struct {
    GLenum fail;
    GLenum zfail;
    GLenum zpass;
} glStencilOp_ARGS;
typedef struct {
    int index;
    glStencilOp_ARGS args;
} glStencilOp_PACKED;
#endif
#ifndef glStencilOpSeparate_RETURN
typedef struct {
    GLenum face;
    GLenum sfail;
    GLenum dpfail;
    GLenum dppass;
} glStencilOpSeparate_ARGS;
typedef struct {
    int index;
    glStencilOpSeparate_ARGS args;
} glStencilOpSeparate_PACKED;
#endif
#ifndef glTexImage2D_RETURN
typedef struct {
    GLenum target;
    GLint level;
    GLint internalformat;
    GLsizei width;
    GLsizei height;
    GLint border;
    GLenum format;
    GLenum type;
    GLvoid * pixels;
} glTexImage2D_ARGS;
typedef struct {
    int index;
    glTexImage2D_ARGS args;
} glTexImage2D_PACKED;
#endif
#ifndef glTexParameterf_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfloat param;
} glTexParameterf_ARGS;
typedef struct {
    int index;
    glTexParameterf_ARGS args;
} glTexParameterf_PACKED;
#endif
#ifndef glTexParameterfv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfloat * params;
} glTexParameterfv_ARGS;
typedef struct {
    int index;
    glTexParameterfv_ARGS args;
} glTexParameterfv_PACKED;
#endif
#ifndef glTexParameteri_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLint param;
} glTexParameteri_ARGS;
typedef struct {
    int index;
    glTexParameteri_ARGS args;
} glTexParameteri_PACKED;
#endif
#ifndef glTexParameteriv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLint * params;
} glTexParameteriv_ARGS;
typedef struct {
    int index;
    glTexParameteriv_ARGS args;
} glTexParameteriv_PACKED;
#endif
#ifndef glTexSubImage2D_RETURN
typedef struct {
    GLenum target;
    GLint level;
    GLint xoffset;
    GLint yoffset;
    GLsizei width;
    GLsizei height;
    GLenum format;
    GLenum type;
    GLvoid * pixels;
} glTexSubImage2D_ARGS;
typedef struct {
    int index;
    glTexSubImage2D_ARGS args;
} glTexSubImage2D_PACKED;
#endif
#ifndef glUniform1f_RETURN
typedef struct {
    GLint location;
    GLfloat v0;
} glUniform1f_ARGS;
typedef struct {
    int index;
    glUniform1f_ARGS args;
} glUniform1f_PACKED;
#endif
#ifndef glUniform1fv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLfloat * value;
} glUniform1fv_ARGS;
typedef struct {
    int index;
    glUniform1fv_ARGS args;
} glUniform1fv_PACKED;
#endif
#ifndef glUniform1i_RETURN
typedef struct {
    GLint location;
    GLint v0;
} glUniform1i_ARGS;
typedef struct {
    int index;
    glUniform1i_ARGS args;
} glUniform1i_PACKED;
#endif
#ifndef glUniform1iv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLint * value;
} glUniform1iv_ARGS;
typedef struct {
    int index;
    glUniform1iv_ARGS args;
} glUniform1iv_PACKED;
#endif
#ifndef glUniform2f_RETURN
typedef struct {
    GLint location;
    GLfloat v0;
    GLfloat v1;
} glUniform2f_ARGS;
typedef struct {
    int index;
    glUniform2f_ARGS args;
} glUniform2f_PACKED;
#endif
#ifndef glUniform2fv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLfloat * value;
} glUniform2fv_ARGS;
typedef struct {
    int index;
    glUniform2fv_ARGS args;
} glUniform2fv_PACKED;
#endif
#ifndef glUniform2i_RETURN
typedef struct {
    GLint location;
    GLint v0;
    GLint v1;
} glUniform2i_ARGS;
typedef struct {
    int index;
    glUniform2i_ARGS args;
} glUniform2i_PACKED;
#endif
#ifndef glUniform2iv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLint * value;
} glUniform2iv_ARGS;
typedef struct {
    int index;
    glUniform2iv_ARGS args;
} glUniform2iv_PACKED;
#endif
#ifndef glUniform3f_RETURN
typedef struct {
    GLint location;
    GLfloat v0;
    GLfloat v1;
    GLfloat v2;
} glUniform3f_ARGS;
typedef struct {
    int index;
    glUniform3f_ARGS args;
} glUniform3f_PACKED;
#endif
#ifndef glUniform3fv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLfloat * value;
} glUniform3fv_ARGS;
typedef struct {
    int index;
    glUniform3fv_ARGS args;
} glUniform3fv_PACKED;
#endif
#ifndef glUniform3i_RETURN
typedef struct {
    GLint location;
    GLint v0;
    GLint v1;
    GLint v2;
} glUniform3i_ARGS;
typedef struct {
    int index;
    glUniform3i_ARGS args;
} glUniform3i_PACKED;
#endif
#ifndef glUniform3iv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLint * value;
} glUniform3iv_ARGS;
typedef struct {
    int index;
    glUniform3iv_ARGS args;
} glUniform3iv_PACKED;
#endif
#ifndef glUniform4f_RETURN
typedef struct {
    GLint location;
    GLfloat v0;
    GLfloat v1;
    GLfloat v2;
    GLfloat v3;
} glUniform4f_ARGS;
typedef struct {
    int index;
    glUniform4f_ARGS args;
} glUniform4f_PACKED;
#endif
#ifndef glUniform4fv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLfloat * value;
} glUniform4fv_ARGS;
typedef struct {
    int index;
    glUniform4fv_ARGS args;
} glUniform4fv_PACKED;
#endif
#ifndef glUniform4i_RETURN
typedef struct {
    GLint location;
    GLint v0;
    GLint v1;
    GLint v2;
    GLint v3;
} glUniform4i_ARGS;
typedef struct {
    int index;
    glUniform4i_ARGS args;
} glUniform4i_PACKED;
#endif
#ifndef glUniform4iv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLint * value;
} glUniform4iv_ARGS;
typedef struct {
    int index;
    glUniform4iv_ARGS args;
} glUniform4iv_PACKED;
#endif
#ifndef glUniformMatrix2fv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLboolean transpose;
    GLfloat * value;
} glUniformMatrix2fv_ARGS;
typedef struct {
    int index;
    glUniformMatrix2fv_ARGS args;
} glUniformMatrix2fv_PACKED;
#endif
#ifndef glUniformMatrix3fv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLboolean transpose;
    GLfloat * value;
} glUniformMatrix3fv_ARGS;
typedef struct {
    int index;
    glUniformMatrix3fv_ARGS args;
} glUniformMatrix3fv_PACKED;
#endif
#ifndef glUniformMatrix4fv_RETURN
typedef struct {
    GLint location;
    GLsizei count;
    GLboolean transpose;
    GLfloat * value;
} glUniformMatrix4fv_ARGS;
typedef struct {
    int index;
    glUniformMatrix4fv_ARGS args;
} glUniformMatrix4fv_PACKED;
#endif
#ifndef glUseProgram_RETURN
typedef struct {
    GLuint program;
} glUseProgram_ARGS;
typedef struct {
    int index;
    glUseProgram_ARGS args;
} glUseProgram_PACKED;
#endif
#ifndef glValidateProgram_RETURN
typedef struct {
    GLuint program;
} glValidateProgram_ARGS;
typedef struct {
    int index;
    glValidateProgram_ARGS args;
} glValidateProgram_PACKED;
#endif
#ifndef glVertexAttrib1f_RETURN
typedef struct {
    GLuint index;
    GLfloat x;
} glVertexAttrib1f_ARGS;
typedef struct {
    int index;
    glVertexAttrib1f_ARGS args;
} glVertexAttrib1f_PACKED;
#endif
#ifndef glVertexAttrib1fv_RETURN
typedef struct {
    GLuint index;
    GLfloat * v;
} glVertexAttrib1fv_ARGS;
typedef struct {
    int index;
    glVertexAttrib1fv_ARGS args;
} glVertexAttrib1fv_PACKED;
#endif
#ifndef glVertexAttrib2f_RETURN
typedef struct {
    GLuint index;
    GLfloat x;
    GLfloat y;
} glVertexAttrib2f_ARGS;
typedef struct {
    int index;
    glVertexAttrib2f_ARGS args;
} glVertexAttrib2f_PACKED;
#endif
#ifndef glVertexAttrib2fv_RETURN
typedef struct {
    GLuint index;
    GLfloat * v;
} glVertexAttrib2fv_ARGS;
typedef struct {
    int index;
    glVertexAttrib2fv_ARGS args;
} glVertexAttrib2fv_PACKED;
#endif
#ifndef glVertexAttrib3f_RETURN
typedef struct {
    GLuint index;
    GLfloat x;
    GLfloat y;
    GLfloat z;
} glVertexAttrib3f_ARGS;
typedef struct {
    int index;
    glVertexAttrib3f_ARGS args;
} glVertexAttrib3f_PACKED;
#endif
#ifndef glVertexAttrib3fv_RETURN
typedef struct {
    GLuint index;
    GLfloat * v;
} glVertexAttrib3fv_ARGS;
typedef struct {
    int index;
    glVertexAttrib3fv_ARGS args;
} glVertexAttrib3fv_PACKED;
#endif
#ifndef glVertexAttrib4f_RETURN
typedef struct {
    GLuint index;
    GLfloat x;
    GLfloat y;
    GLfloat z;
    GLfloat w;
} glVertexAttrib4f_ARGS;
typedef struct {
    int index;
    glVertexAttrib4f_ARGS args;
} glVertexAttrib4f_PACKED;
#endif
#ifndef glVertexAttrib4fv_RETURN
typedef struct {
    GLuint index;
    GLfloat * v;
} glVertexAttrib4fv_ARGS;
typedef struct {
    int index;
    glVertexAttrib4fv_ARGS args;
} glVertexAttrib4fv_PACKED;
#endif
#ifndef glVertexAttribPointer_RETURN
typedef struct {
    GLuint index;
    GLint size;
    GLenum type;
    GLboolean normalized;
    GLsizei stride;
    GLvoid * pointer;
} glVertexAttribPointer_ARGS;
typedef struct {
    int index;
    glVertexAttribPointer_ARGS args;
} glVertexAttribPointer_PACKED;
#endif
#ifndef glViewport_RETURN
typedef struct {
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
} glViewport_ARGS;
typedef struct {
    int index;
    glViewport_ARGS args;
} glViewport_PACKED;
#endif

#ifndef glActiveTexture_RETURN
#define glActiveTexture_RETURN void
#define glActiveTexture_ARG_NAMES texture
#define glActiveTexture_ARG_EXPAND GLenum texture
#define glActiveTexture_ARG_NAMES_TAIL , texture
#define glActiveTexture_ARG_EXPAND_TAIL , GLenum texture
#define forward_glActiveTexture(_texture) \
    ({ \
        void *dst = remote_dma(sizeof(glActiveTexture_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glActiveTexture(dst, _texture), NULL); \
    });
#define call_glActiveTexture(packed, ret_v) do { \
    glActiveTexture_PACKED *unpacked = (glActiveTexture_PACKED *)packed; \
    glActiveTexture_ARGS *args = (glActiveTexture_ARGS *)&unpacked->args; \
    glActiveTexture(args->texture);; \
} while(0)
void glActiveTexture(glActiveTexture_ARG_EXPAND);
packed_call_t *pack_glActiveTexture(glActiveTexture_PACKED *_dst glActiveTexture_ARG_EXPAND_TAIL);
typedef void (*glActiveTexture_PTR)(glActiveTexture_ARG_EXPAND);
#endif
#ifndef glAttachShader_RETURN
#define glAttachShader_RETURN void
#define glAttachShader_ARG_NAMES program, shader
#define glAttachShader_ARG_EXPAND GLuint program, GLuint shader
#define glAttachShader_ARG_NAMES_TAIL , program, shader
#define glAttachShader_ARG_EXPAND_TAIL , GLuint program, GLuint shader
#define forward_glAttachShader(_program, _shader) \
    ({ \
        void *dst = remote_dma(sizeof(glAttachShader_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glAttachShader(dst, _program, _shader), NULL); \
    });
#define call_glAttachShader(packed, ret_v) do { \
    glAttachShader_PACKED *unpacked = (glAttachShader_PACKED *)packed; \
    glAttachShader_ARGS *args = (glAttachShader_ARGS *)&unpacked->args; \
    glAttachShader(args->program, args->shader);; \
} while(0)
void glAttachShader(glAttachShader_ARG_EXPAND);
packed_call_t *pack_glAttachShader(glAttachShader_PACKED *_dst glAttachShader_ARG_EXPAND_TAIL);
typedef void (*glAttachShader_PTR)(glAttachShader_ARG_EXPAND);
#endif
#ifndef glBindAttribLocation_RETURN
#define glBindAttribLocation_RETURN void
#define glBindAttribLocation_ARG_NAMES program, index, name
#define glBindAttribLocation_ARG_EXPAND GLuint program, GLuint index, const GLchar * name
#define glBindAttribLocation_ARG_NAMES_TAIL , program, index, name
#define glBindAttribLocation_ARG_EXPAND_TAIL , GLuint program, GLuint index, const GLchar * name
#define forward_glBindAttribLocation(_program, _index, _name) \
    ({ \
        void *dst = remote_dma(sizeof(glBindAttribLocation_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBindAttribLocation(dst, _program, _index, _name), NULL); \
    });
#define call_glBindAttribLocation(packed, ret_v) do { \
    glBindAttribLocation_PACKED *unpacked = (glBindAttribLocation_PACKED *)packed; \
    glBindAttribLocation_ARGS *args = (glBindAttribLocation_ARGS *)&unpacked->args; \
    glBindAttribLocation(args->program, args->index, args->name);; \
} while(0)
void glBindAttribLocation(glBindAttribLocation_ARG_EXPAND);
packed_call_t *pack_glBindAttribLocation(glBindAttribLocation_PACKED *_dst glBindAttribLocation_ARG_EXPAND_TAIL);
typedef void (*glBindAttribLocation_PTR)(glBindAttribLocation_ARG_EXPAND);
#endif
#ifndef glBindBuffer_RETURN
#define glBindBuffer_RETURN void
#define glBindBuffer_ARG_NAMES target, buffer
#define glBindBuffer_ARG_EXPAND GLenum target, GLuint buffer
#define glBindBuffer_ARG_NAMES_TAIL , target, buffer
#define glBindBuffer_ARG_EXPAND_TAIL , GLenum target, GLuint buffer
#define forward_glBindBuffer(_target, _buffer) \
    ({ \
        void *dst = remote_dma(sizeof(glBindBuffer_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBindBuffer(dst, _target, _buffer), NULL); \
    });
#define call_glBindBuffer(packed, ret_v) do { \
    glBindBuffer_PACKED *unpacked = (glBindBuffer_PACKED *)packed; \
    glBindBuffer_ARGS *args = (glBindBuffer_ARGS *)&unpacked->args; \
    glBindBuffer(args->target, args->buffer);; \
} while(0)
void glBindBuffer(glBindBuffer_ARG_EXPAND);
packed_call_t *pack_glBindBuffer(glBindBuffer_PACKED *_dst glBindBuffer_ARG_EXPAND_TAIL);
typedef void (*glBindBuffer_PTR)(glBindBuffer_ARG_EXPAND);
#endif
#ifndef glBindFramebuffer_RETURN
#define glBindFramebuffer_RETURN void
#define glBindFramebuffer_ARG_NAMES target, framebuffer
#define glBindFramebuffer_ARG_EXPAND GLenum target, GLuint framebuffer
#define glBindFramebuffer_ARG_NAMES_TAIL , target, framebuffer
#define glBindFramebuffer_ARG_EXPAND_TAIL , GLenum target, GLuint framebuffer
#define forward_glBindFramebuffer(_target, _framebuffer) \
    ({ \
        void *dst = remote_dma(sizeof(glBindFramebuffer_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBindFramebuffer(dst, _target, _framebuffer), NULL); \
    });
#define call_glBindFramebuffer(packed, ret_v) do { \
    glBindFramebuffer_PACKED *unpacked = (glBindFramebuffer_PACKED *)packed; \
    glBindFramebuffer_ARGS *args = (glBindFramebuffer_ARGS *)&unpacked->args; \
    glBindFramebuffer(args->target, args->framebuffer);; \
} while(0)
void glBindFramebuffer(glBindFramebuffer_ARG_EXPAND);
packed_call_t *pack_glBindFramebuffer(glBindFramebuffer_PACKED *_dst glBindFramebuffer_ARG_EXPAND_TAIL);
typedef void (*glBindFramebuffer_PTR)(glBindFramebuffer_ARG_EXPAND);
#endif
#ifndef glBindRenderbuffer_RETURN
#define glBindRenderbuffer_RETURN void
#define glBindRenderbuffer_ARG_NAMES target, renderbuffer
#define glBindRenderbuffer_ARG_EXPAND GLenum target, GLuint renderbuffer
#define glBindRenderbuffer_ARG_NAMES_TAIL , target, renderbuffer
#define glBindRenderbuffer_ARG_EXPAND_TAIL , GLenum target, GLuint renderbuffer
#define forward_glBindRenderbuffer(_target, _renderbuffer) \
    ({ \
        void *dst = remote_dma(sizeof(glBindRenderbuffer_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBindRenderbuffer(dst, _target, _renderbuffer), NULL); \
    });
#define call_glBindRenderbuffer(packed, ret_v) do { \
    glBindRenderbuffer_PACKED *unpacked = (glBindRenderbuffer_PACKED *)packed; \
    glBindRenderbuffer_ARGS *args = (glBindRenderbuffer_ARGS *)&unpacked->args; \
    glBindRenderbuffer(args->target, args->renderbuffer);; \
} while(0)
void glBindRenderbuffer(glBindRenderbuffer_ARG_EXPAND);
packed_call_t *pack_glBindRenderbuffer(glBindRenderbuffer_PACKED *_dst glBindRenderbuffer_ARG_EXPAND_TAIL);
typedef void (*glBindRenderbuffer_PTR)(glBindRenderbuffer_ARG_EXPAND);
#endif
#ifndef glBindTexture_RETURN
#define glBindTexture_RETURN void
#define glBindTexture_ARG_NAMES target, texture
#define glBindTexture_ARG_EXPAND GLenum target, GLuint texture
#define glBindTexture_ARG_NAMES_TAIL , target, texture
#define glBindTexture_ARG_EXPAND_TAIL , GLenum target, GLuint texture
#define forward_glBindTexture(_target, _texture) \
    ({ \
        void *dst = remote_dma(sizeof(glBindTexture_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBindTexture(dst, _target, _texture), NULL); \
    });
#define call_glBindTexture(packed, ret_v) do { \
    glBindTexture_PACKED *unpacked = (glBindTexture_PACKED *)packed; \
    glBindTexture_ARGS *args = (glBindTexture_ARGS *)&unpacked->args; \
    glBindTexture(args->target, args->texture);; \
} while(0)
void glBindTexture(glBindTexture_ARG_EXPAND);
packed_call_t *pack_glBindTexture(glBindTexture_PACKED *_dst glBindTexture_ARG_EXPAND_TAIL);
typedef void (*glBindTexture_PTR)(glBindTexture_ARG_EXPAND);
#endif
#ifndef glBlendColor_RETURN
#define glBlendColor_RETURN void
#define glBlendColor_ARG_NAMES red, green, blue, alpha
#define glBlendColor_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define glBlendColor_ARG_NAMES_TAIL , red, green, blue, alpha
#define glBlendColor_ARG_EXPAND_TAIL , GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define forward_glBlendColor(_red, _green, _blue, _alpha) \
    ({ \
        void *dst = remote_dma(sizeof(glBlendColor_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBlendColor(dst, _red, _green, _blue, _alpha), NULL); \
    });
#define call_glBlendColor(packed, ret_v) do { \
    glBlendColor_PACKED *unpacked = (glBlendColor_PACKED *)packed; \
    glBlendColor_ARGS *args = (glBlendColor_ARGS *)&unpacked->args; \
    glBlendColor(args->red, args->green, args->blue, args->alpha);; \
} while(0)
void glBlendColor(glBlendColor_ARG_EXPAND);
packed_call_t *pack_glBlendColor(glBlendColor_PACKED *_dst glBlendColor_ARG_EXPAND_TAIL);
typedef void (*glBlendColor_PTR)(glBlendColor_ARG_EXPAND);
#endif
#ifndef glBlendEquation_RETURN
#define glBlendEquation_RETURN void
#define glBlendEquation_ARG_NAMES mode
#define glBlendEquation_ARG_EXPAND GLenum mode
#define glBlendEquation_ARG_NAMES_TAIL , mode
#define glBlendEquation_ARG_EXPAND_TAIL , GLenum mode
#define forward_glBlendEquation(_mode) \
    ({ \
        void *dst = remote_dma(sizeof(glBlendEquation_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBlendEquation(dst, _mode), NULL); \
    });
#define call_glBlendEquation(packed, ret_v) do { \
    glBlendEquation_PACKED *unpacked = (glBlendEquation_PACKED *)packed; \
    glBlendEquation_ARGS *args = (glBlendEquation_ARGS *)&unpacked->args; \
    glBlendEquation(args->mode);; \
} while(0)
void glBlendEquation(glBlendEquation_ARG_EXPAND);
packed_call_t *pack_glBlendEquation(glBlendEquation_PACKED *_dst glBlendEquation_ARG_EXPAND_TAIL);
typedef void (*glBlendEquation_PTR)(glBlendEquation_ARG_EXPAND);
#endif
#ifndef glBlendEquationSeparate_RETURN
#define glBlendEquationSeparate_RETURN void
#define glBlendEquationSeparate_ARG_NAMES modeRGB, modeAlpha
#define glBlendEquationSeparate_ARG_EXPAND GLenum modeRGB, GLenum modeAlpha
#define glBlendEquationSeparate_ARG_NAMES_TAIL , modeRGB, modeAlpha
#define glBlendEquationSeparate_ARG_EXPAND_TAIL , GLenum modeRGB, GLenum modeAlpha
#define forward_glBlendEquationSeparate(_modeRGB, _modeAlpha) \
    ({ \
        void *dst = remote_dma(sizeof(glBlendEquationSeparate_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBlendEquationSeparate(dst, _modeRGB, _modeAlpha), NULL); \
    });
#define call_glBlendEquationSeparate(packed, ret_v) do { \
    glBlendEquationSeparate_PACKED *unpacked = (glBlendEquationSeparate_PACKED *)packed; \
    glBlendEquationSeparate_ARGS *args = (glBlendEquationSeparate_ARGS *)&unpacked->args; \
    glBlendEquationSeparate(args->modeRGB, args->modeAlpha);; \
} while(0)
void glBlendEquationSeparate(glBlendEquationSeparate_ARG_EXPAND);
packed_call_t *pack_glBlendEquationSeparate(glBlendEquationSeparate_PACKED *_dst glBlendEquationSeparate_ARG_EXPAND_TAIL);
typedef void (*glBlendEquationSeparate_PTR)(glBlendEquationSeparate_ARG_EXPAND);
#endif
#ifndef glBlendFunc_RETURN
#define glBlendFunc_RETURN void
#define glBlendFunc_ARG_NAMES sfactor, dfactor
#define glBlendFunc_ARG_EXPAND GLenum sfactor, GLenum dfactor
#define glBlendFunc_ARG_NAMES_TAIL , sfactor, dfactor
#define glBlendFunc_ARG_EXPAND_TAIL , GLenum sfactor, GLenum dfactor
#define forward_glBlendFunc(_sfactor, _dfactor) \
    ({ \
        void *dst = remote_dma(sizeof(glBlendFunc_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBlendFunc(dst, _sfactor, _dfactor), NULL); \
    });
#define call_glBlendFunc(packed, ret_v) do { \
    glBlendFunc_PACKED *unpacked = (glBlendFunc_PACKED *)packed; \
    glBlendFunc_ARGS *args = (glBlendFunc_ARGS *)&unpacked->args; \
    glBlendFunc(args->sfactor, args->dfactor);; \
} while(0)
void glBlendFunc(glBlendFunc_ARG_EXPAND);
packed_call_t *pack_glBlendFunc(glBlendFunc_PACKED *_dst glBlendFunc_ARG_EXPAND_TAIL);
typedef void (*glBlendFunc_PTR)(glBlendFunc_ARG_EXPAND);
#endif
#ifndef glBlendFuncSeparate_RETURN
#define glBlendFuncSeparate_RETURN void
#define glBlendFuncSeparate_ARG_NAMES sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha
#define glBlendFuncSeparate_ARG_EXPAND GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha
#define glBlendFuncSeparate_ARG_NAMES_TAIL , sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha
#define glBlendFuncSeparate_ARG_EXPAND_TAIL , GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha
#define forward_glBlendFuncSeparate(_sfactorRGB, _dfactorRGB, _sfactorAlpha, _dfactorAlpha) \
    ({ \
        void *dst = remote_dma(sizeof(glBlendFuncSeparate_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBlendFuncSeparate(dst, _sfactorRGB, _dfactorRGB, _sfactorAlpha, _dfactorAlpha), NULL); \
    });
#define call_glBlendFuncSeparate(packed, ret_v) do { \
    glBlendFuncSeparate_PACKED *unpacked = (glBlendFuncSeparate_PACKED *)packed; \
    glBlendFuncSeparate_ARGS *args = (glBlendFuncSeparate_ARGS *)&unpacked->args; \
    glBlendFuncSeparate(args->sfactorRGB, args->dfactorRGB, args->sfactorAlpha, args->dfactorAlpha);; \
} while(0)
void glBlendFuncSeparate(glBlendFuncSeparate_ARG_EXPAND);
packed_call_t *pack_glBlendFuncSeparate(glBlendFuncSeparate_PACKED *_dst glBlendFuncSeparate_ARG_EXPAND_TAIL);
typedef void (*glBlendFuncSeparate_PTR)(glBlendFuncSeparate_ARG_EXPAND);
#endif
#ifndef glBufferData_RETURN
#define glBufferData_RETURN void
#define glBufferData_ARG_NAMES target, size, data, usage
#define glBufferData_ARG_EXPAND GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage
#define glBufferData_ARG_NAMES_TAIL , target, size, data, usage
#define glBufferData_ARG_EXPAND_TAIL , GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage
#define forward_glBufferData(_target, _size, _data, _usage) \
    ({ \
        void *dst = remote_dma(sizeof(glBufferData_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBufferData(dst, _target, _size, _data, _usage), NULL); \
    });
#define call_glBufferData(packed, ret_v) do { \
    glBufferData_PACKED *unpacked = (glBufferData_PACKED *)packed; \
    glBufferData_ARGS *args = (glBufferData_ARGS *)&unpacked->args; \
    glBufferData(args->target, args->size, args->data, args->usage);; \
} while(0)
void glBufferData(glBufferData_ARG_EXPAND);
packed_call_t *pack_glBufferData(glBufferData_PACKED *_dst glBufferData_ARG_EXPAND_TAIL);
typedef void (*glBufferData_PTR)(glBufferData_ARG_EXPAND);
#endif
#ifndef glBufferSubData_RETURN
#define glBufferSubData_RETURN void
#define glBufferSubData_ARG_NAMES target, offset, size, data
#define glBufferSubData_ARG_EXPAND GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data
#define glBufferSubData_ARG_NAMES_TAIL , target, offset, size, data
#define glBufferSubData_ARG_EXPAND_TAIL , GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data
#define forward_glBufferSubData(_target, _offset, _size, _data) \
    ({ \
        void *dst = remote_dma(sizeof(glBufferSubData_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBufferSubData(dst, _target, _offset, _size, _data), NULL); \
    });
#define call_glBufferSubData(packed, ret_v) do { \
    glBufferSubData_PACKED *unpacked = (glBufferSubData_PACKED *)packed; \
    glBufferSubData_ARGS *args = (glBufferSubData_ARGS *)&unpacked->args; \
    glBufferSubData(args->target, args->offset, args->size, args->data);; \
} while(0)
void glBufferSubData(glBufferSubData_ARG_EXPAND);
packed_call_t *pack_glBufferSubData(glBufferSubData_PACKED *_dst glBufferSubData_ARG_EXPAND_TAIL);
typedef void (*glBufferSubData_PTR)(glBufferSubData_ARG_EXPAND);
#endif
#ifndef glCheckFramebufferStatus_RETURN
#define glCheckFramebufferStatus_RETURN GLenum
#define glCheckFramebufferStatus_ARG_NAMES target
#define glCheckFramebufferStatus_ARG_EXPAND GLenum target
#define glCheckFramebufferStatus_ARG_NAMES_TAIL , target
#define glCheckFramebufferStatus_ARG_EXPAND_TAIL , GLenum target
#define forward_glCheckFramebufferStatus(_target) \
    ({ \
        void *dst = remote_dma(sizeof(glCheckFramebufferStatus_PACKED)); \
        GLenum ret = (GLenum)0; \
        remote_dma_send((packed_call_t *)pack_glCheckFramebufferStatus(dst, _target), &ret); \
        ret; \
    });
#define call_glCheckFramebufferStatus(packed, ret_v) do { \
    glCheckFramebufferStatus_PACKED *unpacked = (glCheckFramebufferStatus_PACKED *)packed; \
    glCheckFramebufferStatus_ARGS *args = (glCheckFramebufferStatus_ARGS *)&unpacked->args; \
    GLenum *ret = (GLenum *)ret_v; \
    if (ret != NULL) { \
        *ret = glCheckFramebufferStatus(args->target);; \
    } else { \
        glCheckFramebufferStatus(args->target);; \
    } \
} while(0)
GLenum glCheckFramebufferStatus(glCheckFramebufferStatus_ARG_EXPAND);
packed_call_t *pack_glCheckFramebufferStatus(glCheckFramebufferStatus_PACKED *_dst glCheckFramebufferStatus_ARG_EXPAND_TAIL);
typedef GLenum (*glCheckFramebufferStatus_PTR)(glCheckFramebufferStatus_ARG_EXPAND);
#endif
#ifndef glClear_RETURN
#define glClear_RETURN void
#define glClear_ARG_NAMES mask
#define glClear_ARG_EXPAND GLbitfield mask
#define glClear_ARG_NAMES_TAIL , mask
#define glClear_ARG_EXPAND_TAIL , GLbitfield mask
#define forward_glClear(_mask) \
    ({ \
        void *dst = remote_dma(sizeof(glClear_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glClear(dst, _mask), NULL); \
    });
#define call_glClear(packed, ret_v) do { \
    glClear_PACKED *unpacked = (glClear_PACKED *)packed; \
    glClear_ARGS *args = (glClear_ARGS *)&unpacked->args; \
    glClear(args->mask);; \
} while(0)
void glClear(glClear_ARG_EXPAND);
packed_call_t *pack_glClear(glClear_PACKED *_dst glClear_ARG_EXPAND_TAIL);
typedef void (*glClear_PTR)(glClear_ARG_EXPAND);
#endif
#ifndef glClearColor_RETURN
#define glClearColor_RETURN void
#define glClearColor_ARG_NAMES red, green, blue, alpha
#define glClearColor_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define glClearColor_ARG_NAMES_TAIL , red, green, blue, alpha
#define glClearColor_ARG_EXPAND_TAIL , GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define forward_glClearColor(_red, _green, _blue, _alpha) \
    ({ \
        void *dst = remote_dma(sizeof(glClearColor_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glClearColor(dst, _red, _green, _blue, _alpha), NULL); \
    });
#define call_glClearColor(packed, ret_v) do { \
    glClearColor_PACKED *unpacked = (glClearColor_PACKED *)packed; \
    glClearColor_ARGS *args = (glClearColor_ARGS *)&unpacked->args; \
    glClearColor(args->red, args->green, args->blue, args->alpha);; \
} while(0)
void glClearColor(glClearColor_ARG_EXPAND);
packed_call_t *pack_glClearColor(glClearColor_PACKED *_dst glClearColor_ARG_EXPAND_TAIL);
typedef void (*glClearColor_PTR)(glClearColor_ARG_EXPAND);
#endif
#ifndef glClearDepthf_RETURN
#define glClearDepthf_RETURN void
#define glClearDepthf_ARG_NAMES depth
#define glClearDepthf_ARG_EXPAND GLclampf depth
#define glClearDepthf_ARG_NAMES_TAIL , depth
#define glClearDepthf_ARG_EXPAND_TAIL , GLclampf depth
#define forward_glClearDepthf(_depth) \
    ({ \
        void *dst = remote_dma(sizeof(glClearDepthf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glClearDepthf(dst, _depth), NULL); \
    });
#define call_glClearDepthf(packed, ret_v) do { \
    glClearDepthf_PACKED *unpacked = (glClearDepthf_PACKED *)packed; \
    glClearDepthf_ARGS *args = (glClearDepthf_ARGS *)&unpacked->args; \
    glClearDepthf(args->depth);; \
} while(0)
void glClearDepthf(glClearDepthf_ARG_EXPAND);
packed_call_t *pack_glClearDepthf(glClearDepthf_PACKED *_dst glClearDepthf_ARG_EXPAND_TAIL);
typedef void (*glClearDepthf_PTR)(glClearDepthf_ARG_EXPAND);
#endif
#ifndef glClearStencil_RETURN
#define glClearStencil_RETURN void
#define glClearStencil_ARG_NAMES s
#define glClearStencil_ARG_EXPAND GLint s
#define glClearStencil_ARG_NAMES_TAIL , s
#define glClearStencil_ARG_EXPAND_TAIL , GLint s
#define forward_glClearStencil(_s) \
    ({ \
        void *dst = remote_dma(sizeof(glClearStencil_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glClearStencil(dst, _s), NULL); \
    });
#define call_glClearStencil(packed, ret_v) do { \
    glClearStencil_PACKED *unpacked = (glClearStencil_PACKED *)packed; \
    glClearStencil_ARGS *args = (glClearStencil_ARGS *)&unpacked->args; \
    glClearStencil(args->s);; \
} while(0)
void glClearStencil(glClearStencil_ARG_EXPAND);
packed_call_t *pack_glClearStencil(glClearStencil_PACKED *_dst glClearStencil_ARG_EXPAND_TAIL);
typedef void (*glClearStencil_PTR)(glClearStencil_ARG_EXPAND);
#endif
#ifndef glColorMask_RETURN
#define glColorMask_RETURN void
#define glColorMask_ARG_NAMES red, green, blue, alpha
#define glColorMask_ARG_EXPAND GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha
#define glColorMask_ARG_NAMES_TAIL , red, green, blue, alpha
#define glColorMask_ARG_EXPAND_TAIL , GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha
#define forward_glColorMask(_red, _green, _blue, _alpha) \
    ({ \
        void *dst = remote_dma(sizeof(glColorMask_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glColorMask(dst, _red, _green, _blue, _alpha), NULL); \
    });
#define call_glColorMask(packed, ret_v) do { \
    glColorMask_PACKED *unpacked = (glColorMask_PACKED *)packed; \
    glColorMask_ARGS *args = (glColorMask_ARGS *)&unpacked->args; \
    glColorMask(args->red, args->green, args->blue, args->alpha);; \
} while(0)
void glColorMask(glColorMask_ARG_EXPAND);
packed_call_t *pack_glColorMask(glColorMask_PACKED *_dst glColorMask_ARG_EXPAND_TAIL);
typedef void (*glColorMask_PTR)(glColorMask_ARG_EXPAND);
#endif
#ifndef glCompileShader_RETURN
#define glCompileShader_RETURN void
#define glCompileShader_ARG_NAMES shader
#define glCompileShader_ARG_EXPAND GLuint shader
#define glCompileShader_ARG_NAMES_TAIL , shader
#define glCompileShader_ARG_EXPAND_TAIL , GLuint shader
#define forward_glCompileShader(_shader) \
    ({ \
        void *dst = remote_dma(sizeof(glCompileShader_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glCompileShader(dst, _shader), NULL); \
    });
#define call_glCompileShader(packed, ret_v) do { \
    glCompileShader_PACKED *unpacked = (glCompileShader_PACKED *)packed; \
    glCompileShader_ARGS *args = (glCompileShader_ARGS *)&unpacked->args; \
    glCompileShader(args->shader);; \
} while(0)
void glCompileShader(glCompileShader_ARG_EXPAND);
packed_call_t *pack_glCompileShader(glCompileShader_PACKED *_dst glCompileShader_ARG_EXPAND_TAIL);
typedef void (*glCompileShader_PTR)(glCompileShader_ARG_EXPAND);
#endif
#ifndef glCompressedTexImage2D_RETURN
#define glCompressedTexImage2D_RETURN void
#define glCompressedTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, imageSize, data
#define glCompressedTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data
#define glCompressedTexImage2D_ARG_NAMES_TAIL , target, level, internalformat, width, height, border, imageSize, data
#define glCompressedTexImage2D_ARG_EXPAND_TAIL , GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data
#define forward_glCompressedTexImage2D(_target, _level, _internalformat, _width, _height, _border, _imageSize, _data) \
    ({ \
        void *dst = remote_dma(sizeof(glCompressedTexImage2D_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glCompressedTexImage2D(dst, _target, _level, _internalformat, _width, _height, _border, _imageSize, _data), NULL); \
    });
#define call_glCompressedTexImage2D(packed, ret_v) do { \
    glCompressedTexImage2D_PACKED *unpacked = (glCompressedTexImage2D_PACKED *)packed; \
    glCompressedTexImage2D_ARGS *args = (glCompressedTexImage2D_ARGS *)&unpacked->args; \
    glCompressedTexImage2D(args->target, args->level, args->internalformat, args->width, args->height, args->border, args->imageSize, args->data);; \
} while(0)
void glCompressedTexImage2D(glCompressedTexImage2D_ARG_EXPAND);
packed_call_t *pack_glCompressedTexImage2D(glCompressedTexImage2D_PACKED *_dst glCompressedTexImage2D_ARG_EXPAND_TAIL);
typedef void (*glCompressedTexImage2D_PTR)(glCompressedTexImage2D_ARG_EXPAND);
#endif
#ifndef glCompressedTexSubImage2D_RETURN
#define glCompressedTexSubImage2D_RETURN void
#define glCompressedTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, imageSize, data
#define glCompressedTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data
#define glCompressedTexSubImage2D_ARG_NAMES_TAIL , target, level, xoffset, yoffset, width, height, format, imageSize, data
#define glCompressedTexSubImage2D_ARG_EXPAND_TAIL , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data
#define forward_glCompressedTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _imageSize, _data) \
    ({ \
        void *dst = remote_dma(sizeof(glCompressedTexSubImage2D_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glCompressedTexSubImage2D(dst, _target, _level, _xoffset, _yoffset, _width, _height, _format, _imageSize, _data), NULL); \
    });
#define call_glCompressedTexSubImage2D(packed, ret_v) do { \
    glCompressedTexSubImage2D_PACKED *unpacked = (glCompressedTexSubImage2D_PACKED *)packed; \
    glCompressedTexSubImage2D_ARGS *args = (glCompressedTexSubImage2D_ARGS *)&unpacked->args; \
    glCompressedTexSubImage2D(args->target, args->level, args->xoffset, args->yoffset, args->width, args->height, args->format, args->imageSize, args->data);; \
} while(0)
void glCompressedTexSubImage2D(glCompressedTexSubImage2D_ARG_EXPAND);
packed_call_t *pack_glCompressedTexSubImage2D(glCompressedTexSubImage2D_PACKED *_dst glCompressedTexSubImage2D_ARG_EXPAND_TAIL);
typedef void (*glCompressedTexSubImage2D_PTR)(glCompressedTexSubImage2D_ARG_EXPAND);
#endif
#ifndef glCopyTexImage2D_RETURN
#define glCopyTexImage2D_RETURN void
#define glCopyTexImage2D_ARG_NAMES target, level, internalformat, x, y, width, height, border
#define glCopyTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border
#define glCopyTexImage2D_ARG_NAMES_TAIL , target, level, internalformat, x, y, width, height, border
#define glCopyTexImage2D_ARG_EXPAND_TAIL , GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border
#define forward_glCopyTexImage2D(_target, _level, _internalformat, _x, _y, _width, _height, _border) \
    ({ \
        void *dst = remote_dma(sizeof(glCopyTexImage2D_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glCopyTexImage2D(dst, _target, _level, _internalformat, _x, _y, _width, _height, _border), NULL); \
    });
#define call_glCopyTexImage2D(packed, ret_v) do { \
    glCopyTexImage2D_PACKED *unpacked = (glCopyTexImage2D_PACKED *)packed; \
    glCopyTexImage2D_ARGS *args = (glCopyTexImage2D_ARGS *)&unpacked->args; \
    glCopyTexImage2D(args->target, args->level, args->internalformat, args->x, args->y, args->width, args->height, args->border);; \
} while(0)
void glCopyTexImage2D(glCopyTexImage2D_ARG_EXPAND);
packed_call_t *pack_glCopyTexImage2D(glCopyTexImage2D_PACKED *_dst glCopyTexImage2D_ARG_EXPAND_TAIL);
typedef void (*glCopyTexImage2D_PTR)(glCopyTexImage2D_ARG_EXPAND);
#endif
#ifndef glCopyTexSubImage2D_RETURN
#define glCopyTexSubImage2D_RETURN void
#define glCopyTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, x, y, width, height
#define glCopyTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height
#define glCopyTexSubImage2D_ARG_NAMES_TAIL , target, level, xoffset, yoffset, x, y, width, height
#define glCopyTexSubImage2D_ARG_EXPAND_TAIL , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height
#define forward_glCopyTexSubImage2D(_target, _level, _xoffset, _yoffset, _x, _y, _width, _height) \
    ({ \
        void *dst = remote_dma(sizeof(glCopyTexSubImage2D_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glCopyTexSubImage2D(dst, _target, _level, _xoffset, _yoffset, _x, _y, _width, _height), NULL); \
    });
#define call_glCopyTexSubImage2D(packed, ret_v) do { \
    glCopyTexSubImage2D_PACKED *unpacked = (glCopyTexSubImage2D_PACKED *)packed; \
    glCopyTexSubImage2D_ARGS *args = (glCopyTexSubImage2D_ARGS *)&unpacked->args; \
    glCopyTexSubImage2D(args->target, args->level, args->xoffset, args->yoffset, args->x, args->y, args->width, args->height);; \
} while(0)
void glCopyTexSubImage2D(glCopyTexSubImage2D_ARG_EXPAND);
packed_call_t *pack_glCopyTexSubImage2D(glCopyTexSubImage2D_PACKED *_dst glCopyTexSubImage2D_ARG_EXPAND_TAIL);
typedef void (*glCopyTexSubImage2D_PTR)(glCopyTexSubImage2D_ARG_EXPAND);
#endif
#ifndef glCreateProgram_RETURN
#define glCreateProgram_RETURN GLuint
#define glCreateProgram_ARG_NAMES 
#define glCreateProgram_ARG_EXPAND 
#define glCreateProgram_ARG_NAMES_TAIL 
#define glCreateProgram_ARG_EXPAND_TAIL 
#define forward_glCreateProgram() \
    ({ \
        void *dst = remote_dma(sizeof(glCreateProgram_PACKED)); \
        GLuint ret = (GLuint)0; \
        remote_dma_send((packed_call_t *)pack_glCreateProgram(dst), &ret); \
        ret; \
    });
#define call_glCreateProgram(packed, ret_v) do { \
    GLuint *ret = (GLuint *)ret_v; \
    if (ret != NULL) { \
        *ret = glCreateProgram();; \
    } else { \
        glCreateProgram();; \
    } \
} while(0)
GLuint glCreateProgram(glCreateProgram_ARG_EXPAND);
packed_call_t *pack_glCreateProgram(glCreateProgram_PACKED *_dst glCreateProgram_ARG_EXPAND_TAIL);
typedef GLuint (*glCreateProgram_PTR)(glCreateProgram_ARG_EXPAND);
#endif
#ifndef glCreateShader_RETURN
#define glCreateShader_RETURN GLuint
#define glCreateShader_ARG_NAMES type
#define glCreateShader_ARG_EXPAND GLenum type
#define glCreateShader_ARG_NAMES_TAIL , type
#define glCreateShader_ARG_EXPAND_TAIL , GLenum type
#define forward_glCreateShader(_type) \
    ({ \
        void *dst = remote_dma(sizeof(glCreateShader_PACKED)); \
        GLuint ret = (GLuint)0; \
        remote_dma_send((packed_call_t *)pack_glCreateShader(dst, _type), &ret); \
        ret; \
    });
#define call_glCreateShader(packed, ret_v) do { \
    glCreateShader_PACKED *unpacked = (glCreateShader_PACKED *)packed; \
    glCreateShader_ARGS *args = (glCreateShader_ARGS *)&unpacked->args; \
    GLuint *ret = (GLuint *)ret_v; \
    if (ret != NULL) { \
        *ret = glCreateShader(args->type);; \
    } else { \
        glCreateShader(args->type);; \
    } \
} while(0)
GLuint glCreateShader(glCreateShader_ARG_EXPAND);
packed_call_t *pack_glCreateShader(glCreateShader_PACKED *_dst glCreateShader_ARG_EXPAND_TAIL);
typedef GLuint (*glCreateShader_PTR)(glCreateShader_ARG_EXPAND);
#endif
#ifndef glCullFace_RETURN
#define glCullFace_RETURN void
#define glCullFace_ARG_NAMES mode
#define glCullFace_ARG_EXPAND GLenum mode
#define glCullFace_ARG_NAMES_TAIL , mode
#define glCullFace_ARG_EXPAND_TAIL , GLenum mode
#define forward_glCullFace(_mode) \
    ({ \
        void *dst = remote_dma(sizeof(glCullFace_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glCullFace(dst, _mode), NULL); \
    });
#define call_glCullFace(packed, ret_v) do { \
    glCullFace_PACKED *unpacked = (glCullFace_PACKED *)packed; \
    glCullFace_ARGS *args = (glCullFace_ARGS *)&unpacked->args; \
    glCullFace(args->mode);; \
} while(0)
void glCullFace(glCullFace_ARG_EXPAND);
packed_call_t *pack_glCullFace(glCullFace_PACKED *_dst glCullFace_ARG_EXPAND_TAIL);
typedef void (*glCullFace_PTR)(glCullFace_ARG_EXPAND);
#endif
#ifndef glDeleteBuffers_RETURN
#define glDeleteBuffers_RETURN void
#define glDeleteBuffers_ARG_NAMES n, buffers
#define glDeleteBuffers_ARG_EXPAND GLsizei n, const GLuint * buffers
#define glDeleteBuffers_ARG_NAMES_TAIL , n, buffers
#define glDeleteBuffers_ARG_EXPAND_TAIL , GLsizei n, const GLuint * buffers
#define forward_glDeleteBuffers(_n, _buffers) \
    ({ \
        void *dst = remote_dma(sizeof(glDeleteBuffers_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDeleteBuffers(dst, _n, _buffers), NULL); \
    });
#define call_glDeleteBuffers(packed, ret_v) do { \
    glDeleteBuffers_PACKED *unpacked = (glDeleteBuffers_PACKED *)packed; \
    glDeleteBuffers_ARGS *args = (glDeleteBuffers_ARGS *)&unpacked->args; \
    glDeleteBuffers(args->n, args->buffers);; \
} while(0)
void glDeleteBuffers(glDeleteBuffers_ARG_EXPAND);
packed_call_t *pack_glDeleteBuffers(glDeleteBuffers_PACKED *_dst glDeleteBuffers_ARG_EXPAND_TAIL);
typedef void (*glDeleteBuffers_PTR)(glDeleteBuffers_ARG_EXPAND);
#endif
#ifndef glDeleteFramebuffers_RETURN
#define glDeleteFramebuffers_RETURN void
#define glDeleteFramebuffers_ARG_NAMES n, framebuffers
#define glDeleteFramebuffers_ARG_EXPAND GLsizei n, const GLuint * framebuffers
#define glDeleteFramebuffers_ARG_NAMES_TAIL , n, framebuffers
#define glDeleteFramebuffers_ARG_EXPAND_TAIL , GLsizei n, const GLuint * framebuffers
#define forward_glDeleteFramebuffers(_n, _framebuffers) \
    ({ \
        void *dst = remote_dma(sizeof(glDeleteFramebuffers_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDeleteFramebuffers(dst, _n, _framebuffers), NULL); \
    });
#define call_glDeleteFramebuffers(packed, ret_v) do { \
    glDeleteFramebuffers_PACKED *unpacked = (glDeleteFramebuffers_PACKED *)packed; \
    glDeleteFramebuffers_ARGS *args = (glDeleteFramebuffers_ARGS *)&unpacked->args; \
    glDeleteFramebuffers(args->n, args->framebuffers);; \
} while(0)
void glDeleteFramebuffers(glDeleteFramebuffers_ARG_EXPAND);
packed_call_t *pack_glDeleteFramebuffers(glDeleteFramebuffers_PACKED *_dst glDeleteFramebuffers_ARG_EXPAND_TAIL);
typedef void (*glDeleteFramebuffers_PTR)(glDeleteFramebuffers_ARG_EXPAND);
#endif
#ifndef glDeleteProgram_RETURN
#define glDeleteProgram_RETURN void
#define glDeleteProgram_ARG_NAMES program
#define glDeleteProgram_ARG_EXPAND GLuint program
#define glDeleteProgram_ARG_NAMES_TAIL , program
#define glDeleteProgram_ARG_EXPAND_TAIL , GLuint program
#define forward_glDeleteProgram(_program) \
    ({ \
        void *dst = remote_dma(sizeof(glDeleteProgram_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDeleteProgram(dst, _program), NULL); \
    });
#define call_glDeleteProgram(packed, ret_v) do { \
    glDeleteProgram_PACKED *unpacked = (glDeleteProgram_PACKED *)packed; \
    glDeleteProgram_ARGS *args = (glDeleteProgram_ARGS *)&unpacked->args; \
    glDeleteProgram(args->program);; \
} while(0)
void glDeleteProgram(glDeleteProgram_ARG_EXPAND);
packed_call_t *pack_glDeleteProgram(glDeleteProgram_PACKED *_dst glDeleteProgram_ARG_EXPAND_TAIL);
typedef void (*glDeleteProgram_PTR)(glDeleteProgram_ARG_EXPAND);
#endif
#ifndef glDeleteRenderbuffers_RETURN
#define glDeleteRenderbuffers_RETURN void
#define glDeleteRenderbuffers_ARG_NAMES n, renderbuffers
#define glDeleteRenderbuffers_ARG_EXPAND GLsizei n, const GLuint * renderbuffers
#define glDeleteRenderbuffers_ARG_NAMES_TAIL , n, renderbuffers
#define glDeleteRenderbuffers_ARG_EXPAND_TAIL , GLsizei n, const GLuint * renderbuffers
#define forward_glDeleteRenderbuffers(_n, _renderbuffers) \
    ({ \
        void *dst = remote_dma(sizeof(glDeleteRenderbuffers_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDeleteRenderbuffers(dst, _n, _renderbuffers), NULL); \
    });
#define call_glDeleteRenderbuffers(packed, ret_v) do { \
    glDeleteRenderbuffers_PACKED *unpacked = (glDeleteRenderbuffers_PACKED *)packed; \
    glDeleteRenderbuffers_ARGS *args = (glDeleteRenderbuffers_ARGS *)&unpacked->args; \
    glDeleteRenderbuffers(args->n, args->renderbuffers);; \
} while(0)
void glDeleteRenderbuffers(glDeleteRenderbuffers_ARG_EXPAND);
packed_call_t *pack_glDeleteRenderbuffers(glDeleteRenderbuffers_PACKED *_dst glDeleteRenderbuffers_ARG_EXPAND_TAIL);
typedef void (*glDeleteRenderbuffers_PTR)(glDeleteRenderbuffers_ARG_EXPAND);
#endif
#ifndef glDeleteShader_RETURN
#define glDeleteShader_RETURN void
#define glDeleteShader_ARG_NAMES shader
#define glDeleteShader_ARG_EXPAND GLuint shader
#define glDeleteShader_ARG_NAMES_TAIL , shader
#define glDeleteShader_ARG_EXPAND_TAIL , GLuint shader
#define forward_glDeleteShader(_shader) \
    ({ \
        void *dst = remote_dma(sizeof(glDeleteShader_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDeleteShader(dst, _shader), NULL); \
    });
#define call_glDeleteShader(packed, ret_v) do { \
    glDeleteShader_PACKED *unpacked = (glDeleteShader_PACKED *)packed; \
    glDeleteShader_ARGS *args = (glDeleteShader_ARGS *)&unpacked->args; \
    glDeleteShader(args->shader);; \
} while(0)
void glDeleteShader(glDeleteShader_ARG_EXPAND);
packed_call_t *pack_glDeleteShader(glDeleteShader_PACKED *_dst glDeleteShader_ARG_EXPAND_TAIL);
typedef void (*glDeleteShader_PTR)(glDeleteShader_ARG_EXPAND);
#endif
#ifndef glDeleteTextures_RETURN
#define glDeleteTextures_RETURN void
#define glDeleteTextures_ARG_NAMES n, textures
#define glDeleteTextures_ARG_EXPAND GLsizei n, const GLuint * textures
#define glDeleteTextures_ARG_NAMES_TAIL , n, textures
#define glDeleteTextures_ARG_EXPAND_TAIL , GLsizei n, const GLuint * textures
#define forward_glDeleteTextures(_n, _textures) \
    ({ \
        void *dst = remote_dma(sizeof(glDeleteTextures_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDeleteTextures(dst, _n, _textures), NULL); \
    });
#define call_glDeleteTextures(packed, ret_v) do { \
    glDeleteTextures_PACKED *unpacked = (glDeleteTextures_PACKED *)packed; \
    glDeleteTextures_ARGS *args = (glDeleteTextures_ARGS *)&unpacked->args; \
    glDeleteTextures(args->n, args->textures);; \
} while(0)
void glDeleteTextures(glDeleteTextures_ARG_EXPAND);
packed_call_t *pack_glDeleteTextures(glDeleteTextures_PACKED *_dst glDeleteTextures_ARG_EXPAND_TAIL);
typedef void (*glDeleteTextures_PTR)(glDeleteTextures_ARG_EXPAND);
#endif
#ifndef glDepthFunc_RETURN
#define glDepthFunc_RETURN void
#define glDepthFunc_ARG_NAMES func
#define glDepthFunc_ARG_EXPAND GLenum func
#define glDepthFunc_ARG_NAMES_TAIL , func
#define glDepthFunc_ARG_EXPAND_TAIL , GLenum func
#define forward_glDepthFunc(_func) \
    ({ \
        void *dst = remote_dma(sizeof(glDepthFunc_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDepthFunc(dst, _func), NULL); \
    });
#define call_glDepthFunc(packed, ret_v) do { \
    glDepthFunc_PACKED *unpacked = (glDepthFunc_PACKED *)packed; \
    glDepthFunc_ARGS *args = (glDepthFunc_ARGS *)&unpacked->args; \
    glDepthFunc(args->func);; \
} while(0)
void glDepthFunc(glDepthFunc_ARG_EXPAND);
packed_call_t *pack_glDepthFunc(glDepthFunc_PACKED *_dst glDepthFunc_ARG_EXPAND_TAIL);
typedef void (*glDepthFunc_PTR)(glDepthFunc_ARG_EXPAND);
#endif
#ifndef glDepthMask_RETURN
#define glDepthMask_RETURN void
#define glDepthMask_ARG_NAMES flag
#define glDepthMask_ARG_EXPAND GLboolean flag
#define glDepthMask_ARG_NAMES_TAIL , flag
#define glDepthMask_ARG_EXPAND_TAIL , GLboolean flag
#define forward_glDepthMask(_flag) \
    ({ \
        void *dst = remote_dma(sizeof(glDepthMask_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDepthMask(dst, _flag), NULL); \
    });
#define call_glDepthMask(packed, ret_v) do { \
    glDepthMask_PACKED *unpacked = (glDepthMask_PACKED *)packed; \
    glDepthMask_ARGS *args = (glDepthMask_ARGS *)&unpacked->args; \
    glDepthMask(args->flag);; \
} while(0)
void glDepthMask(glDepthMask_ARG_EXPAND);
packed_call_t *pack_glDepthMask(glDepthMask_PACKED *_dst glDepthMask_ARG_EXPAND_TAIL);
typedef void (*glDepthMask_PTR)(glDepthMask_ARG_EXPAND);
#endif
#ifndef glDepthRangef_RETURN
#define glDepthRangef_RETURN void
#define glDepthRangef_ARG_NAMES near, far
#define glDepthRangef_ARG_EXPAND GLclampf near, GLclampf far
#define glDepthRangef_ARG_NAMES_TAIL , near, far
#define glDepthRangef_ARG_EXPAND_TAIL , GLclampf near, GLclampf far
#define forward_glDepthRangef(_near, _far) \
    ({ \
        void *dst = remote_dma(sizeof(glDepthRangef_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDepthRangef(dst, _near, _far), NULL); \
    });
#define call_glDepthRangef(packed, ret_v) do { \
    glDepthRangef_PACKED *unpacked = (glDepthRangef_PACKED *)packed; \
    glDepthRangef_ARGS *args = (glDepthRangef_ARGS *)&unpacked->args; \
    glDepthRangef(args->near, args->far);; \
} while(0)
void glDepthRangef(glDepthRangef_ARG_EXPAND);
packed_call_t *pack_glDepthRangef(glDepthRangef_PACKED *_dst glDepthRangef_ARG_EXPAND_TAIL);
typedef void (*glDepthRangef_PTR)(glDepthRangef_ARG_EXPAND);
#endif
#ifndef glDetachShader_RETURN
#define glDetachShader_RETURN void
#define glDetachShader_ARG_NAMES program, shader
#define glDetachShader_ARG_EXPAND GLuint program, GLuint shader
#define glDetachShader_ARG_NAMES_TAIL , program, shader
#define glDetachShader_ARG_EXPAND_TAIL , GLuint program, GLuint shader
#define forward_glDetachShader(_program, _shader) \
    ({ \
        void *dst = remote_dma(sizeof(glDetachShader_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDetachShader(dst, _program, _shader), NULL); \
    });
#define call_glDetachShader(packed, ret_v) do { \
    glDetachShader_PACKED *unpacked = (glDetachShader_PACKED *)packed; \
    glDetachShader_ARGS *args = (glDetachShader_ARGS *)&unpacked->args; \
    glDetachShader(args->program, args->shader);; \
} while(0)
void glDetachShader(glDetachShader_ARG_EXPAND);
packed_call_t *pack_glDetachShader(glDetachShader_PACKED *_dst glDetachShader_ARG_EXPAND_TAIL);
typedef void (*glDetachShader_PTR)(glDetachShader_ARG_EXPAND);
#endif
#ifndef glDisable_RETURN
#define glDisable_RETURN void
#define glDisable_ARG_NAMES cap
#define glDisable_ARG_EXPAND GLenum cap
#define glDisable_ARG_NAMES_TAIL , cap
#define glDisable_ARG_EXPAND_TAIL , GLenum cap
#define forward_glDisable(_cap) \
    ({ \
        void *dst = remote_dma(sizeof(glDisable_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDisable(dst, _cap), NULL); \
    });
#define call_glDisable(packed, ret_v) do { \
    glDisable_PACKED *unpacked = (glDisable_PACKED *)packed; \
    glDisable_ARGS *args = (glDisable_ARGS *)&unpacked->args; \
    glDisable(args->cap);; \
} while(0)
void glDisable(glDisable_ARG_EXPAND);
packed_call_t *pack_glDisable(glDisable_PACKED *_dst glDisable_ARG_EXPAND_TAIL);
typedef void (*glDisable_PTR)(glDisable_ARG_EXPAND);
#endif
#ifndef glDisableVertexAttribArray_RETURN
#define glDisableVertexAttribArray_RETURN void
#define glDisableVertexAttribArray_ARG_NAMES index
#define glDisableVertexAttribArray_ARG_EXPAND GLuint index
#define glDisableVertexAttribArray_ARG_NAMES_TAIL , index
#define glDisableVertexAttribArray_ARG_EXPAND_TAIL , GLuint index
#define forward_glDisableVertexAttribArray(_index) \
    ({ \
        void *dst = remote_dma(sizeof(glDisableVertexAttribArray_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDisableVertexAttribArray(dst, _index), NULL); \
    });
#define call_glDisableVertexAttribArray(packed, ret_v) do { \
    glDisableVertexAttribArray_PACKED *unpacked = (glDisableVertexAttribArray_PACKED *)packed; \
    glDisableVertexAttribArray_ARGS *args = (glDisableVertexAttribArray_ARGS *)&unpacked->args; \
    glDisableVertexAttribArray(args->index);; \
} while(0)
void glDisableVertexAttribArray(glDisableVertexAttribArray_ARG_EXPAND);
packed_call_t *pack_glDisableVertexAttribArray(glDisableVertexAttribArray_PACKED *_dst glDisableVertexAttribArray_ARG_EXPAND_TAIL);
typedef void (*glDisableVertexAttribArray_PTR)(glDisableVertexAttribArray_ARG_EXPAND);
#endif
#ifndef glDrawArrays_RETURN
#define glDrawArrays_RETURN void
#define glDrawArrays_ARG_NAMES mode, first, count
#define glDrawArrays_ARG_EXPAND GLenum mode, GLint first, GLsizei count
#define glDrawArrays_ARG_NAMES_TAIL , mode, first, count
#define glDrawArrays_ARG_EXPAND_TAIL , GLenum mode, GLint first, GLsizei count
#define forward_glDrawArrays(_mode, _first, _count) \
    ({ \
        void *dst = remote_dma(sizeof(glDrawArrays_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDrawArrays(dst, _mode, _first, _count), NULL); \
    });
#define call_glDrawArrays(packed, ret_v) do { \
    glDrawArrays_PACKED *unpacked = (glDrawArrays_PACKED *)packed; \
    glDrawArrays_ARGS *args = (glDrawArrays_ARGS *)&unpacked->args; \
    glDrawArrays(args->mode, args->first, args->count);; \
} while(0)
void glDrawArrays(glDrawArrays_ARG_EXPAND);
packed_call_t *pack_glDrawArrays(glDrawArrays_PACKED *_dst glDrawArrays_ARG_EXPAND_TAIL);
typedef void (*glDrawArrays_PTR)(glDrawArrays_ARG_EXPAND);
#endif
#ifndef glDrawElements_RETURN
#define glDrawElements_RETURN void
#define glDrawElements_ARG_NAMES mode, count, type, indices
#define glDrawElements_ARG_EXPAND GLenum mode, GLsizei count, GLenum type, const GLvoid * indices
#define glDrawElements_ARG_NAMES_TAIL , mode, count, type, indices
#define glDrawElements_ARG_EXPAND_TAIL , GLenum mode, GLsizei count, GLenum type, const GLvoid * indices
#define forward_glDrawElements(_mode, _count, _type, _indices) \
    ({ \
        void *dst = remote_dma(sizeof(glDrawElements_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDrawElements(dst, _mode, _count, _type, _indices), NULL); \
    });
#define call_glDrawElements(packed, ret_v) do { \
    glDrawElements_PACKED *unpacked = (glDrawElements_PACKED *)packed; \
    glDrawElements_ARGS *args = (glDrawElements_ARGS *)&unpacked->args; \
    glDrawElements(args->mode, args->count, args->type, args->indices);; \
} while(0)
void glDrawElements(glDrawElements_ARG_EXPAND);
packed_call_t *pack_glDrawElements(glDrawElements_PACKED *_dst glDrawElements_ARG_EXPAND_TAIL);
typedef void (*glDrawElements_PTR)(glDrawElements_ARG_EXPAND);
#endif
#ifndef glEnable_RETURN
#define glEnable_RETURN void
#define glEnable_ARG_NAMES cap
#define glEnable_ARG_EXPAND GLenum cap
#define glEnable_ARG_NAMES_TAIL , cap
#define glEnable_ARG_EXPAND_TAIL , GLenum cap
#define forward_glEnable(_cap) \
    ({ \
        void *dst = remote_dma(sizeof(glEnable_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glEnable(dst, _cap), NULL); \
    });
#define call_glEnable(packed, ret_v) do { \
    glEnable_PACKED *unpacked = (glEnable_PACKED *)packed; \
    glEnable_ARGS *args = (glEnable_ARGS *)&unpacked->args; \
    glEnable(args->cap);; \
} while(0)
void glEnable(glEnable_ARG_EXPAND);
packed_call_t *pack_glEnable(glEnable_PACKED *_dst glEnable_ARG_EXPAND_TAIL);
typedef void (*glEnable_PTR)(glEnable_ARG_EXPAND);
#endif
#ifndef glEnableVertexAttribArray_RETURN
#define glEnableVertexAttribArray_RETURN void
#define glEnableVertexAttribArray_ARG_NAMES index
#define glEnableVertexAttribArray_ARG_EXPAND GLuint index
#define glEnableVertexAttribArray_ARG_NAMES_TAIL , index
#define glEnableVertexAttribArray_ARG_EXPAND_TAIL , GLuint index
#define forward_glEnableVertexAttribArray(_index) \
    ({ \
        void *dst = remote_dma(sizeof(glEnableVertexAttribArray_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glEnableVertexAttribArray(dst, _index), NULL); \
    });
#define call_glEnableVertexAttribArray(packed, ret_v) do { \
    glEnableVertexAttribArray_PACKED *unpacked = (glEnableVertexAttribArray_PACKED *)packed; \
    glEnableVertexAttribArray_ARGS *args = (glEnableVertexAttribArray_ARGS *)&unpacked->args; \
    glEnableVertexAttribArray(args->index);; \
} while(0)
void glEnableVertexAttribArray(glEnableVertexAttribArray_ARG_EXPAND);
packed_call_t *pack_glEnableVertexAttribArray(glEnableVertexAttribArray_PACKED *_dst glEnableVertexAttribArray_ARG_EXPAND_TAIL);
typedef void (*glEnableVertexAttribArray_PTR)(glEnableVertexAttribArray_ARG_EXPAND);
#endif
#ifndef glFinish_RETURN
#define glFinish_RETURN void
#define glFinish_ARG_NAMES 
#define glFinish_ARG_EXPAND 
#define glFinish_ARG_NAMES_TAIL 
#define glFinish_ARG_EXPAND_TAIL 
#define forward_glFinish() \
    ({ \
        void *dst = remote_dma(sizeof(glFinish_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFinish(dst), NULL); \
    });
#define call_glFinish(packed, ret_v) do { \
    glFinish();; \
} while(0)
void glFinish(glFinish_ARG_EXPAND);
packed_call_t *pack_glFinish(glFinish_PACKED *_dst glFinish_ARG_EXPAND_TAIL);
typedef void (*glFinish_PTR)(glFinish_ARG_EXPAND);
#endif
#ifndef glFlush_RETURN
#define glFlush_RETURN void
#define glFlush_ARG_NAMES 
#define glFlush_ARG_EXPAND 
#define glFlush_ARG_NAMES_TAIL 
#define glFlush_ARG_EXPAND_TAIL 
#define forward_glFlush() \
    ({ \
        void *dst = remote_dma(sizeof(glFlush_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFlush(dst), NULL); \
    });
#define call_glFlush(packed, ret_v) do { \
    glFlush();; \
} while(0)
void glFlush(glFlush_ARG_EXPAND);
packed_call_t *pack_glFlush(glFlush_PACKED *_dst glFlush_ARG_EXPAND_TAIL);
typedef void (*glFlush_PTR)(glFlush_ARG_EXPAND);
#endif
#ifndef glFramebufferRenderbuffer_RETURN
#define glFramebufferRenderbuffer_RETURN void
#define glFramebufferRenderbuffer_ARG_NAMES target, attachment, renderbuffertarget, renderbuffer
#define glFramebufferRenderbuffer_ARG_EXPAND GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer
#define glFramebufferRenderbuffer_ARG_NAMES_TAIL , target, attachment, renderbuffertarget, renderbuffer
#define glFramebufferRenderbuffer_ARG_EXPAND_TAIL , GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer
#define forward_glFramebufferRenderbuffer(_target, _attachment, _renderbuffertarget, _renderbuffer) \
    ({ \
        void *dst = remote_dma(sizeof(glFramebufferRenderbuffer_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFramebufferRenderbuffer(dst, _target, _attachment, _renderbuffertarget, _renderbuffer), NULL); \
    });
#define call_glFramebufferRenderbuffer(packed, ret_v) do { \
    glFramebufferRenderbuffer_PACKED *unpacked = (glFramebufferRenderbuffer_PACKED *)packed; \
    glFramebufferRenderbuffer_ARGS *args = (glFramebufferRenderbuffer_ARGS *)&unpacked->args; \
    glFramebufferRenderbuffer(args->target, args->attachment, args->renderbuffertarget, args->renderbuffer);; \
} while(0)
void glFramebufferRenderbuffer(glFramebufferRenderbuffer_ARG_EXPAND);
packed_call_t *pack_glFramebufferRenderbuffer(glFramebufferRenderbuffer_PACKED *_dst glFramebufferRenderbuffer_ARG_EXPAND_TAIL);
typedef void (*glFramebufferRenderbuffer_PTR)(glFramebufferRenderbuffer_ARG_EXPAND);
#endif
#ifndef glFramebufferTexture2D_RETURN
#define glFramebufferTexture2D_RETURN void
#define glFramebufferTexture2D_ARG_NAMES target, attachment, textarget, texture, level
#define glFramebufferTexture2D_ARG_EXPAND GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level
#define glFramebufferTexture2D_ARG_NAMES_TAIL , target, attachment, textarget, texture, level
#define glFramebufferTexture2D_ARG_EXPAND_TAIL , GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level
#define forward_glFramebufferTexture2D(_target, _attachment, _textarget, _texture, _level) \
    ({ \
        void *dst = remote_dma(sizeof(glFramebufferTexture2D_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFramebufferTexture2D(dst, _target, _attachment, _textarget, _texture, _level), NULL); \
    });
#define call_glFramebufferTexture2D(packed, ret_v) do { \
    glFramebufferTexture2D_PACKED *unpacked = (glFramebufferTexture2D_PACKED *)packed; \
    glFramebufferTexture2D_ARGS *args = (glFramebufferTexture2D_ARGS *)&unpacked->args; \
    glFramebufferTexture2D(args->target, args->attachment, args->textarget, args->texture, args->level);; \
} while(0)
void glFramebufferTexture2D(glFramebufferTexture2D_ARG_EXPAND);
packed_call_t *pack_glFramebufferTexture2D(glFramebufferTexture2D_PACKED *_dst glFramebufferTexture2D_ARG_EXPAND_TAIL);
typedef void (*glFramebufferTexture2D_PTR)(glFramebufferTexture2D_ARG_EXPAND);
#endif
#ifndef glFrontFace_RETURN
#define glFrontFace_RETURN void
#define glFrontFace_ARG_NAMES mode
#define glFrontFace_ARG_EXPAND GLenum mode
#define glFrontFace_ARG_NAMES_TAIL , mode
#define glFrontFace_ARG_EXPAND_TAIL , GLenum mode
#define forward_glFrontFace(_mode) \
    ({ \
        void *dst = remote_dma(sizeof(glFrontFace_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFrontFace(dst, _mode), NULL); \
    });
#define call_glFrontFace(packed, ret_v) do { \
    glFrontFace_PACKED *unpacked = (glFrontFace_PACKED *)packed; \
    glFrontFace_ARGS *args = (glFrontFace_ARGS *)&unpacked->args; \
    glFrontFace(args->mode);; \
} while(0)
void glFrontFace(glFrontFace_ARG_EXPAND);
packed_call_t *pack_glFrontFace(glFrontFace_PACKED *_dst glFrontFace_ARG_EXPAND_TAIL);
typedef void (*glFrontFace_PTR)(glFrontFace_ARG_EXPAND);
#endif
#ifndef glGenBuffers_RETURN
#define glGenBuffers_RETURN void
#define glGenBuffers_ARG_NAMES n, buffers
#define glGenBuffers_ARG_EXPAND GLsizei n, GLuint * buffers
#define glGenBuffers_ARG_NAMES_TAIL , n, buffers
#define glGenBuffers_ARG_EXPAND_TAIL , GLsizei n, GLuint * buffers
#define forward_glGenBuffers(_n, _buffers) \
    ({ \
        void *dst = remote_dma(sizeof(glGenBuffers_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGenBuffers(dst, _n, _buffers), NULL); \
    });
#define call_glGenBuffers(packed, ret_v) do { \
    glGenBuffers_PACKED *unpacked = (glGenBuffers_PACKED *)packed; \
    glGenBuffers_ARGS *args = (glGenBuffers_ARGS *)&unpacked->args; \
    glGenBuffers(args->n, args->buffers);; \
} while(0)
void glGenBuffers(glGenBuffers_ARG_EXPAND);
packed_call_t *pack_glGenBuffers(glGenBuffers_PACKED *_dst glGenBuffers_ARG_EXPAND_TAIL);
typedef void (*glGenBuffers_PTR)(glGenBuffers_ARG_EXPAND);
#endif
#ifndef glGenFramebuffers_RETURN
#define glGenFramebuffers_RETURN void
#define glGenFramebuffers_ARG_NAMES n, framebuffers
#define glGenFramebuffers_ARG_EXPAND GLsizei n, GLuint * framebuffers
#define glGenFramebuffers_ARG_NAMES_TAIL , n, framebuffers
#define glGenFramebuffers_ARG_EXPAND_TAIL , GLsizei n, GLuint * framebuffers
#define forward_glGenFramebuffers(_n, _framebuffers) \
    ({ \
        void *dst = remote_dma(sizeof(glGenFramebuffers_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGenFramebuffers(dst, _n, _framebuffers), NULL); \
    });
#define call_glGenFramebuffers(packed, ret_v) do { \
    glGenFramebuffers_PACKED *unpacked = (glGenFramebuffers_PACKED *)packed; \
    glGenFramebuffers_ARGS *args = (glGenFramebuffers_ARGS *)&unpacked->args; \
    glGenFramebuffers(args->n, args->framebuffers);; \
} while(0)
void glGenFramebuffers(glGenFramebuffers_ARG_EXPAND);
packed_call_t *pack_glGenFramebuffers(glGenFramebuffers_PACKED *_dst glGenFramebuffers_ARG_EXPAND_TAIL);
typedef void (*glGenFramebuffers_PTR)(glGenFramebuffers_ARG_EXPAND);
#endif
#ifndef glGenRenderbuffers_RETURN
#define glGenRenderbuffers_RETURN void
#define glGenRenderbuffers_ARG_NAMES n, renderbuffers
#define glGenRenderbuffers_ARG_EXPAND GLsizei n, GLuint * renderbuffers
#define glGenRenderbuffers_ARG_NAMES_TAIL , n, renderbuffers
#define glGenRenderbuffers_ARG_EXPAND_TAIL , GLsizei n, GLuint * renderbuffers
#define forward_glGenRenderbuffers(_n, _renderbuffers) \
    ({ \
        void *dst = remote_dma(sizeof(glGenRenderbuffers_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGenRenderbuffers(dst, _n, _renderbuffers), NULL); \
    });
#define call_glGenRenderbuffers(packed, ret_v) do { \
    glGenRenderbuffers_PACKED *unpacked = (glGenRenderbuffers_PACKED *)packed; \
    glGenRenderbuffers_ARGS *args = (glGenRenderbuffers_ARGS *)&unpacked->args; \
    glGenRenderbuffers(args->n, args->renderbuffers);; \
} while(0)
void glGenRenderbuffers(glGenRenderbuffers_ARG_EXPAND);
packed_call_t *pack_glGenRenderbuffers(glGenRenderbuffers_PACKED *_dst glGenRenderbuffers_ARG_EXPAND_TAIL);
typedef void (*glGenRenderbuffers_PTR)(glGenRenderbuffers_ARG_EXPAND);
#endif
#ifndef glGenTextures_RETURN
#define glGenTextures_RETURN void
#define glGenTextures_ARG_NAMES n, textures
#define glGenTextures_ARG_EXPAND GLsizei n, GLuint * textures
#define glGenTextures_ARG_NAMES_TAIL , n, textures
#define glGenTextures_ARG_EXPAND_TAIL , GLsizei n, GLuint * textures
#define forward_glGenTextures(_n, _textures) \
    ({ \
        void *dst = remote_dma(sizeof(glGenTextures_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGenTextures(dst, _n, _textures), NULL); \
    });
#define call_glGenTextures(packed, ret_v) do { \
    glGenTextures_PACKED *unpacked = (glGenTextures_PACKED *)packed; \
    glGenTextures_ARGS *args = (glGenTextures_ARGS *)&unpacked->args; \
    glGenTextures(args->n, args->textures);; \
} while(0)
void glGenTextures(glGenTextures_ARG_EXPAND);
packed_call_t *pack_glGenTextures(glGenTextures_PACKED *_dst glGenTextures_ARG_EXPAND_TAIL);
typedef void (*glGenTextures_PTR)(glGenTextures_ARG_EXPAND);
#endif
#ifndef glGenerateMipmap_RETURN
#define glGenerateMipmap_RETURN void
#define glGenerateMipmap_ARG_NAMES target
#define glGenerateMipmap_ARG_EXPAND GLenum target
#define glGenerateMipmap_ARG_NAMES_TAIL , target
#define glGenerateMipmap_ARG_EXPAND_TAIL , GLenum target
#define forward_glGenerateMipmap(_target) \
    ({ \
        void *dst = remote_dma(sizeof(glGenerateMipmap_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGenerateMipmap(dst, _target), NULL); \
    });
#define call_glGenerateMipmap(packed, ret_v) do { \
    glGenerateMipmap_PACKED *unpacked = (glGenerateMipmap_PACKED *)packed; \
    glGenerateMipmap_ARGS *args = (glGenerateMipmap_ARGS *)&unpacked->args; \
    glGenerateMipmap(args->target);; \
} while(0)
void glGenerateMipmap(glGenerateMipmap_ARG_EXPAND);
packed_call_t *pack_glGenerateMipmap(glGenerateMipmap_PACKED *_dst glGenerateMipmap_ARG_EXPAND_TAIL);
typedef void (*glGenerateMipmap_PTR)(glGenerateMipmap_ARG_EXPAND);
#endif
#ifndef glGetActiveAttrib_RETURN
#define glGetActiveAttrib_RETURN void
#define glGetActiveAttrib_ARG_NAMES program, index, bufSize, length, size, type, name
#define glGetActiveAttrib_ARG_EXPAND GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name
#define glGetActiveAttrib_ARG_NAMES_TAIL , program, index, bufSize, length, size, type, name
#define glGetActiveAttrib_ARG_EXPAND_TAIL , GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name
#define forward_glGetActiveAttrib(_program, _index, _bufSize, _length, _size, _type, _name) \
    ({ \
        void *dst = remote_dma(sizeof(glGetActiveAttrib_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetActiveAttrib(dst, _program, _index, _bufSize, _length, _size, _type, _name), NULL); \
    });
#define call_glGetActiveAttrib(packed, ret_v) do { \
    glGetActiveAttrib_PACKED *unpacked = (glGetActiveAttrib_PACKED *)packed; \
    glGetActiveAttrib_ARGS *args = (glGetActiveAttrib_ARGS *)&unpacked->args; \
    glGetActiveAttrib(args->program, args->index, args->bufSize, args->length, args->size, args->type, args->name);; \
} while(0)
void glGetActiveAttrib(glGetActiveAttrib_ARG_EXPAND);
packed_call_t *pack_glGetActiveAttrib(glGetActiveAttrib_PACKED *_dst glGetActiveAttrib_ARG_EXPAND_TAIL);
typedef void (*glGetActiveAttrib_PTR)(glGetActiveAttrib_ARG_EXPAND);
#endif
#ifndef glGetActiveUniform_RETURN
#define glGetActiveUniform_RETURN void
#define glGetActiveUniform_ARG_NAMES program, index, bufSize, length, size, type, name
#define glGetActiveUniform_ARG_EXPAND GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name
#define glGetActiveUniform_ARG_NAMES_TAIL , program, index, bufSize, length, size, type, name
#define glGetActiveUniform_ARG_EXPAND_TAIL , GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name
#define forward_glGetActiveUniform(_program, _index, _bufSize, _length, _size, _type, _name) \
    ({ \
        void *dst = remote_dma(sizeof(glGetActiveUniform_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetActiveUniform(dst, _program, _index, _bufSize, _length, _size, _type, _name), NULL); \
    });
#define call_glGetActiveUniform(packed, ret_v) do { \
    glGetActiveUniform_PACKED *unpacked = (glGetActiveUniform_PACKED *)packed; \
    glGetActiveUniform_ARGS *args = (glGetActiveUniform_ARGS *)&unpacked->args; \
    glGetActiveUniform(args->program, args->index, args->bufSize, args->length, args->size, args->type, args->name);; \
} while(0)
void glGetActiveUniform(glGetActiveUniform_ARG_EXPAND);
packed_call_t *pack_glGetActiveUniform(glGetActiveUniform_PACKED *_dst glGetActiveUniform_ARG_EXPAND_TAIL);
typedef void (*glGetActiveUniform_PTR)(glGetActiveUniform_ARG_EXPAND);
#endif
#ifndef glGetAttachedShaders_RETURN
#define glGetAttachedShaders_RETURN void
#define glGetAttachedShaders_ARG_NAMES program, maxCount, count, obj
#define glGetAttachedShaders_ARG_EXPAND GLuint program, GLsizei maxCount, GLsizei * count, GLuint * obj
#define glGetAttachedShaders_ARG_NAMES_TAIL , program, maxCount, count, obj
#define glGetAttachedShaders_ARG_EXPAND_TAIL , GLuint program, GLsizei maxCount, GLsizei * count, GLuint * obj
#define forward_glGetAttachedShaders(_program, _maxCount, _count, _obj) \
    ({ \
        void *dst = remote_dma(sizeof(glGetAttachedShaders_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetAttachedShaders(dst, _program, _maxCount, _count, _obj), NULL); \
    });
#define call_glGetAttachedShaders(packed, ret_v) do { \
    glGetAttachedShaders_PACKED *unpacked = (glGetAttachedShaders_PACKED *)packed; \
    glGetAttachedShaders_ARGS *args = (glGetAttachedShaders_ARGS *)&unpacked->args; \
    glGetAttachedShaders(args->program, args->maxCount, args->count, args->obj);; \
} while(0)
void glGetAttachedShaders(glGetAttachedShaders_ARG_EXPAND);
packed_call_t *pack_glGetAttachedShaders(glGetAttachedShaders_PACKED *_dst glGetAttachedShaders_ARG_EXPAND_TAIL);
typedef void (*glGetAttachedShaders_PTR)(glGetAttachedShaders_ARG_EXPAND);
#endif
#ifndef glGetAttribLocation_RETURN
#define glGetAttribLocation_RETURN GLint
#define glGetAttribLocation_ARG_NAMES program, name
#define glGetAttribLocation_ARG_EXPAND GLuint program, const GLchar * name
#define glGetAttribLocation_ARG_NAMES_TAIL , program, name
#define glGetAttribLocation_ARG_EXPAND_TAIL , GLuint program, const GLchar * name
#define forward_glGetAttribLocation(_program, _name) \
    ({ \
        void *dst = remote_dma(sizeof(glGetAttribLocation_PACKED)); \
        GLint ret = (GLint)0; \
        remote_dma_send((packed_call_t *)pack_glGetAttribLocation(dst, _program, _name), &ret); \
        ret; \
    });
#define call_glGetAttribLocation(packed, ret_v) do { \
    glGetAttribLocation_PACKED *unpacked = (glGetAttribLocation_PACKED *)packed; \
    glGetAttribLocation_ARGS *args = (glGetAttribLocation_ARGS *)&unpacked->args; \
    GLint *ret = (GLint *)ret_v; \
    if (ret != NULL) { \
        *ret = glGetAttribLocation(args->program, args->name);; \
    } else { \
        glGetAttribLocation(args->program, args->name);; \
    } \
} while(0)
GLint glGetAttribLocation(glGetAttribLocation_ARG_EXPAND);
packed_call_t *pack_glGetAttribLocation(glGetAttribLocation_PACKED *_dst glGetAttribLocation_ARG_EXPAND_TAIL);
typedef GLint (*glGetAttribLocation_PTR)(glGetAttribLocation_ARG_EXPAND);
#endif
#ifndef glGetBooleanv_RETURN
#define glGetBooleanv_RETURN void
#define glGetBooleanv_ARG_NAMES pname, params
#define glGetBooleanv_ARG_EXPAND GLenum pname, GLboolean * params
#define glGetBooleanv_ARG_NAMES_TAIL , pname, params
#define glGetBooleanv_ARG_EXPAND_TAIL , GLenum pname, GLboolean * params
#define forward_glGetBooleanv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetBooleanv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetBooleanv(dst, _pname, _params), NULL); \
    });
#define call_glGetBooleanv(packed, ret_v) do { \
    glGetBooleanv_PACKED *unpacked = (glGetBooleanv_PACKED *)packed; \
    glGetBooleanv_ARGS *args = (glGetBooleanv_ARGS *)&unpacked->args; \
    glGetBooleanv(args->pname, args->params);; \
} while(0)
void glGetBooleanv(glGetBooleanv_ARG_EXPAND);
packed_call_t *pack_glGetBooleanv(glGetBooleanv_PACKED *_dst glGetBooleanv_ARG_EXPAND_TAIL);
typedef void (*glGetBooleanv_PTR)(glGetBooleanv_ARG_EXPAND);
#endif
#ifndef glGetBufferParameteriv_RETURN
#define glGetBufferParameteriv_RETURN void
#define glGetBufferParameteriv_ARG_NAMES target, pname, params
#define glGetBufferParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetBufferParameteriv_ARG_NAMES_TAIL , target, pname, params
#define glGetBufferParameteriv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLint * params
#define forward_glGetBufferParameteriv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetBufferParameteriv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetBufferParameteriv(dst, _target, _pname, _params), NULL); \
    });
#define call_glGetBufferParameteriv(packed, ret_v) do { \
    glGetBufferParameteriv_PACKED *unpacked = (glGetBufferParameteriv_PACKED *)packed; \
    glGetBufferParameteriv_ARGS *args = (glGetBufferParameteriv_ARGS *)&unpacked->args; \
    glGetBufferParameteriv(args->target, args->pname, args->params);; \
} while(0)
void glGetBufferParameteriv(glGetBufferParameteriv_ARG_EXPAND);
packed_call_t *pack_glGetBufferParameteriv(glGetBufferParameteriv_PACKED *_dst glGetBufferParameteriv_ARG_EXPAND_TAIL);
typedef void (*glGetBufferParameteriv_PTR)(glGetBufferParameteriv_ARG_EXPAND);
#endif
#ifndef glGetError_RETURN
#define glGetError_RETURN GLenum
#define glGetError_ARG_NAMES 
#define glGetError_ARG_EXPAND 
#define glGetError_ARG_NAMES_TAIL 
#define glGetError_ARG_EXPAND_TAIL 
#define forward_glGetError() \
    ({ \
        void *dst = remote_dma(sizeof(glGetError_PACKED)); \
        GLenum ret = (GLenum)0; \
        remote_dma_send((packed_call_t *)pack_glGetError(dst), &ret); \
        ret; \
    });
#define call_glGetError(packed, ret_v) do { \
    GLenum *ret = (GLenum *)ret_v; \
    if (ret != NULL) { \
        *ret = glGetError();; \
    } else { \
        glGetError();; \
    } \
} while(0)
GLenum glGetError(glGetError_ARG_EXPAND);
packed_call_t *pack_glGetError(glGetError_PACKED *_dst glGetError_ARG_EXPAND_TAIL);
typedef GLenum (*glGetError_PTR)(glGetError_ARG_EXPAND);
#endif
#ifndef glGetFloatv_RETURN
#define glGetFloatv_RETURN void
#define glGetFloatv_ARG_NAMES pname, params
#define glGetFloatv_ARG_EXPAND GLenum pname, GLfloat * params
#define glGetFloatv_ARG_NAMES_TAIL , pname, params
#define glGetFloatv_ARG_EXPAND_TAIL , GLenum pname, GLfloat * params
#define forward_glGetFloatv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetFloatv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetFloatv(dst, _pname, _params), NULL); \
    });
#define call_glGetFloatv(packed, ret_v) do { \
    glGetFloatv_PACKED *unpacked = (glGetFloatv_PACKED *)packed; \
    glGetFloatv_ARGS *args = (glGetFloatv_ARGS *)&unpacked->args; \
    glGetFloatv(args->pname, args->params);; \
} while(0)
void glGetFloatv(glGetFloatv_ARG_EXPAND);
packed_call_t *pack_glGetFloatv(glGetFloatv_PACKED *_dst glGetFloatv_ARG_EXPAND_TAIL);
typedef void (*glGetFloatv_PTR)(glGetFloatv_ARG_EXPAND);
#endif
#ifndef glGetFramebufferAttachmentParameteriv_RETURN
#define glGetFramebufferAttachmentParameteriv_RETURN void
#define glGetFramebufferAttachmentParameteriv_ARG_NAMES target, attachment, pname, params
#define glGetFramebufferAttachmentParameteriv_ARG_EXPAND GLenum target, GLenum attachment, GLenum pname, GLint * params
#define glGetFramebufferAttachmentParameteriv_ARG_NAMES_TAIL , target, attachment, pname, params
#define glGetFramebufferAttachmentParameteriv_ARG_EXPAND_TAIL , GLenum target, GLenum attachment, GLenum pname, GLint * params
#define forward_glGetFramebufferAttachmentParameteriv(_target, _attachment, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetFramebufferAttachmentParameteriv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetFramebufferAttachmentParameteriv(dst, _target, _attachment, _pname, _params), NULL); \
    });
#define call_glGetFramebufferAttachmentParameteriv(packed, ret_v) do { \
    glGetFramebufferAttachmentParameteriv_PACKED *unpacked = (glGetFramebufferAttachmentParameteriv_PACKED *)packed; \
    glGetFramebufferAttachmentParameteriv_ARGS *args = (glGetFramebufferAttachmentParameteriv_ARGS *)&unpacked->args; \
    glGetFramebufferAttachmentParameteriv(args->target, args->attachment, args->pname, args->params);; \
} while(0)
void glGetFramebufferAttachmentParameteriv(glGetFramebufferAttachmentParameteriv_ARG_EXPAND);
packed_call_t *pack_glGetFramebufferAttachmentParameteriv(glGetFramebufferAttachmentParameteriv_PACKED *_dst glGetFramebufferAttachmentParameteriv_ARG_EXPAND_TAIL);
typedef void (*glGetFramebufferAttachmentParameteriv_PTR)(glGetFramebufferAttachmentParameteriv_ARG_EXPAND);
#endif
#ifndef glGetIntegerv_RETURN
#define glGetIntegerv_RETURN void
#define glGetIntegerv_ARG_NAMES pname, params
#define glGetIntegerv_ARG_EXPAND GLenum pname, GLint * params
#define glGetIntegerv_ARG_NAMES_TAIL , pname, params
#define glGetIntegerv_ARG_EXPAND_TAIL , GLenum pname, GLint * params
#define forward_glGetIntegerv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetIntegerv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetIntegerv(dst, _pname, _params), NULL); \
    });
#define call_glGetIntegerv(packed, ret_v) do { \
    glGetIntegerv_PACKED *unpacked = (glGetIntegerv_PACKED *)packed; \
    glGetIntegerv_ARGS *args = (glGetIntegerv_ARGS *)&unpacked->args; \
    glGetIntegerv(args->pname, args->params);; \
} while(0)
void glGetIntegerv(glGetIntegerv_ARG_EXPAND);
packed_call_t *pack_glGetIntegerv(glGetIntegerv_PACKED *_dst glGetIntegerv_ARG_EXPAND_TAIL);
typedef void (*glGetIntegerv_PTR)(glGetIntegerv_ARG_EXPAND);
#endif
#ifndef glGetProgramInfoLog_RETURN
#define glGetProgramInfoLog_RETURN void
#define glGetProgramInfoLog_ARG_NAMES program, bufSize, length, infoLog
#define glGetProgramInfoLog_ARG_EXPAND GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog
#define glGetProgramInfoLog_ARG_NAMES_TAIL , program, bufSize, length, infoLog
#define glGetProgramInfoLog_ARG_EXPAND_TAIL , GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog
#define forward_glGetProgramInfoLog(_program, _bufSize, _length, _infoLog) \
    ({ \
        void *dst = remote_dma(sizeof(glGetProgramInfoLog_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetProgramInfoLog(dst, _program, _bufSize, _length, _infoLog), NULL); \
    });
#define call_glGetProgramInfoLog(packed, ret_v) do { \
    glGetProgramInfoLog_PACKED *unpacked = (glGetProgramInfoLog_PACKED *)packed; \
    glGetProgramInfoLog_ARGS *args = (glGetProgramInfoLog_ARGS *)&unpacked->args; \
    glGetProgramInfoLog(args->program, args->bufSize, args->length, args->infoLog);; \
} while(0)
void glGetProgramInfoLog(glGetProgramInfoLog_ARG_EXPAND);
packed_call_t *pack_glGetProgramInfoLog(glGetProgramInfoLog_PACKED *_dst glGetProgramInfoLog_ARG_EXPAND_TAIL);
typedef void (*glGetProgramInfoLog_PTR)(glGetProgramInfoLog_ARG_EXPAND);
#endif
#ifndef glGetProgramiv_RETURN
#define glGetProgramiv_RETURN void
#define glGetProgramiv_ARG_NAMES program, pname, params
#define glGetProgramiv_ARG_EXPAND GLuint program, GLenum pname, GLint * params
#define glGetProgramiv_ARG_NAMES_TAIL , program, pname, params
#define glGetProgramiv_ARG_EXPAND_TAIL , GLuint program, GLenum pname, GLint * params
#define forward_glGetProgramiv(_program, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetProgramiv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetProgramiv(dst, _program, _pname, _params), NULL); \
    });
#define call_glGetProgramiv(packed, ret_v) do { \
    glGetProgramiv_PACKED *unpacked = (glGetProgramiv_PACKED *)packed; \
    glGetProgramiv_ARGS *args = (glGetProgramiv_ARGS *)&unpacked->args; \
    glGetProgramiv(args->program, args->pname, args->params);; \
} while(0)
void glGetProgramiv(glGetProgramiv_ARG_EXPAND);
packed_call_t *pack_glGetProgramiv(glGetProgramiv_PACKED *_dst glGetProgramiv_ARG_EXPAND_TAIL);
typedef void (*glGetProgramiv_PTR)(glGetProgramiv_ARG_EXPAND);
#endif
#ifndef glGetRenderbufferParameteriv_RETURN
#define glGetRenderbufferParameteriv_RETURN void
#define glGetRenderbufferParameteriv_ARG_NAMES target, pname, params
#define glGetRenderbufferParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetRenderbufferParameteriv_ARG_NAMES_TAIL , target, pname, params
#define glGetRenderbufferParameteriv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLint * params
#define forward_glGetRenderbufferParameteriv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetRenderbufferParameteriv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetRenderbufferParameteriv(dst, _target, _pname, _params), NULL); \
    });
#define call_glGetRenderbufferParameteriv(packed, ret_v) do { \
    glGetRenderbufferParameteriv_PACKED *unpacked = (glGetRenderbufferParameteriv_PACKED *)packed; \
    glGetRenderbufferParameteriv_ARGS *args = (glGetRenderbufferParameteriv_ARGS *)&unpacked->args; \
    glGetRenderbufferParameteriv(args->target, args->pname, args->params);; \
} while(0)
void glGetRenderbufferParameteriv(glGetRenderbufferParameteriv_ARG_EXPAND);
packed_call_t *pack_glGetRenderbufferParameteriv(glGetRenderbufferParameteriv_PACKED *_dst glGetRenderbufferParameteriv_ARG_EXPAND_TAIL);
typedef void (*glGetRenderbufferParameteriv_PTR)(glGetRenderbufferParameteriv_ARG_EXPAND);
#endif
#ifndef glGetShaderInfoLog_RETURN
#define glGetShaderInfoLog_RETURN void
#define glGetShaderInfoLog_ARG_NAMES shader, bufSize, length, infoLog
#define glGetShaderInfoLog_ARG_EXPAND GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog
#define glGetShaderInfoLog_ARG_NAMES_TAIL , shader, bufSize, length, infoLog
#define glGetShaderInfoLog_ARG_EXPAND_TAIL , GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog
#define forward_glGetShaderInfoLog(_shader, _bufSize, _length, _infoLog) \
    ({ \
        void *dst = remote_dma(sizeof(glGetShaderInfoLog_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetShaderInfoLog(dst, _shader, _bufSize, _length, _infoLog), NULL); \
    });
#define call_glGetShaderInfoLog(packed, ret_v) do { \
    glGetShaderInfoLog_PACKED *unpacked = (glGetShaderInfoLog_PACKED *)packed; \
    glGetShaderInfoLog_ARGS *args = (glGetShaderInfoLog_ARGS *)&unpacked->args; \
    glGetShaderInfoLog(args->shader, args->bufSize, args->length, args->infoLog);; \
} while(0)
void glGetShaderInfoLog(glGetShaderInfoLog_ARG_EXPAND);
packed_call_t *pack_glGetShaderInfoLog(glGetShaderInfoLog_PACKED *_dst glGetShaderInfoLog_ARG_EXPAND_TAIL);
typedef void (*glGetShaderInfoLog_PTR)(glGetShaderInfoLog_ARG_EXPAND);
#endif
#ifndef glGetShaderPrecisionFormat_RETURN
#define glGetShaderPrecisionFormat_RETURN void
#define glGetShaderPrecisionFormat_ARG_NAMES shadertype, precisiontype, range, precision
#define glGetShaderPrecisionFormat_ARG_EXPAND GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision
#define glGetShaderPrecisionFormat_ARG_NAMES_TAIL , shadertype, precisiontype, range, precision
#define glGetShaderPrecisionFormat_ARG_EXPAND_TAIL , GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision
#define forward_glGetShaderPrecisionFormat(_shadertype, _precisiontype, _range, _precision) \
    ({ \
        void *dst = remote_dma(sizeof(glGetShaderPrecisionFormat_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetShaderPrecisionFormat(dst, _shadertype, _precisiontype, _range, _precision), NULL); \
    });
#define call_glGetShaderPrecisionFormat(packed, ret_v) do { \
    glGetShaderPrecisionFormat_PACKED *unpacked = (glGetShaderPrecisionFormat_PACKED *)packed; \
    glGetShaderPrecisionFormat_ARGS *args = (glGetShaderPrecisionFormat_ARGS *)&unpacked->args; \
    glGetShaderPrecisionFormat(args->shadertype, args->precisiontype, args->range, args->precision);; \
} while(0)
void glGetShaderPrecisionFormat(glGetShaderPrecisionFormat_ARG_EXPAND);
packed_call_t *pack_glGetShaderPrecisionFormat(glGetShaderPrecisionFormat_PACKED *_dst glGetShaderPrecisionFormat_ARG_EXPAND_TAIL);
typedef void (*glGetShaderPrecisionFormat_PTR)(glGetShaderPrecisionFormat_ARG_EXPAND);
#endif
#ifndef glGetShaderSource_RETURN
#define glGetShaderSource_RETURN void
#define glGetShaderSource_ARG_NAMES shader, bufSize, length, source
#define glGetShaderSource_ARG_EXPAND GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source
#define glGetShaderSource_ARG_NAMES_TAIL , shader, bufSize, length, source
#define glGetShaderSource_ARG_EXPAND_TAIL , GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source
#define forward_glGetShaderSource(_shader, _bufSize, _length, _source) \
    ({ \
        void *dst = remote_dma(sizeof(glGetShaderSource_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetShaderSource(dst, _shader, _bufSize, _length, _source), NULL); \
    });
#define call_glGetShaderSource(packed, ret_v) do { \
    glGetShaderSource_PACKED *unpacked = (glGetShaderSource_PACKED *)packed; \
    glGetShaderSource_ARGS *args = (glGetShaderSource_ARGS *)&unpacked->args; \
    glGetShaderSource(args->shader, args->bufSize, args->length, args->source);; \
} while(0)
void glGetShaderSource(glGetShaderSource_ARG_EXPAND);
packed_call_t *pack_glGetShaderSource(glGetShaderSource_PACKED *_dst glGetShaderSource_ARG_EXPAND_TAIL);
typedef void (*glGetShaderSource_PTR)(glGetShaderSource_ARG_EXPAND);
#endif
#ifndef glGetShaderiv_RETURN
#define glGetShaderiv_RETURN void
#define glGetShaderiv_ARG_NAMES shader, pname, params
#define glGetShaderiv_ARG_EXPAND GLuint shader, GLenum pname, GLint * params
#define glGetShaderiv_ARG_NAMES_TAIL , shader, pname, params
#define glGetShaderiv_ARG_EXPAND_TAIL , GLuint shader, GLenum pname, GLint * params
#define forward_glGetShaderiv(_shader, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetShaderiv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetShaderiv(dst, _shader, _pname, _params), NULL); \
    });
#define call_glGetShaderiv(packed, ret_v) do { \
    glGetShaderiv_PACKED *unpacked = (glGetShaderiv_PACKED *)packed; \
    glGetShaderiv_ARGS *args = (glGetShaderiv_ARGS *)&unpacked->args; \
    glGetShaderiv(args->shader, args->pname, args->params);; \
} while(0)
void glGetShaderiv(glGetShaderiv_ARG_EXPAND);
packed_call_t *pack_glGetShaderiv(glGetShaderiv_PACKED *_dst glGetShaderiv_ARG_EXPAND_TAIL);
typedef void (*glGetShaderiv_PTR)(glGetShaderiv_ARG_EXPAND);
#endif
#ifndef glGetString_RETURN
#define glGetString_RETURN const GLubyte *
#define glGetString_ARG_NAMES name
#define glGetString_ARG_EXPAND GLenum name
#define glGetString_ARG_NAMES_TAIL , name
#define glGetString_ARG_EXPAND_TAIL , GLenum name
#define forward_glGetString(_name) \
    ({ \
        void *dst = remote_dma(sizeof(glGetString_PACKED)); \
        const GLubyte * ret = (const GLubyte *)0; \
        remote_dma_send((packed_call_t *)pack_glGetString(dst, _name), &ret); \
        ret; \
    });
#define call_glGetString(packed, ret_v) do { \
    glGetString_PACKED *unpacked = (glGetString_PACKED *)packed; \
    glGetString_ARGS *args = (glGetString_ARGS *)&unpacked->args; \
    const GLubyte * *ret = (const GLubyte * *)ret_v; \
    if (ret != NULL) { \
        *ret = glGetString(args->name);; \
    } else { \
        glGetString(args->name);; \
    } \
} while(0)
const GLubyte * glGetString(glGetString_ARG_EXPAND);
packed_call_t *pack_glGetString(glGetString_PACKED *_dst glGetString_ARG_EXPAND_TAIL);
typedef const GLubyte * (*glGetString_PTR)(glGetString_ARG_EXPAND);
#endif
#ifndef glGetTexParameterfv_RETURN
#define glGetTexParameterfv_RETURN void
#define glGetTexParameterfv_ARG_NAMES target, pname, params
#define glGetTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, GLfloat * params
#define glGetTexParameterfv_ARG_NAMES_TAIL , target, pname, params
#define glGetTexParameterfv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLfloat * params
#define forward_glGetTexParameterfv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetTexParameterfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetTexParameterfv(dst, _target, _pname, _params), NULL); \
    });
#define call_glGetTexParameterfv(packed, ret_v) do { \
    glGetTexParameterfv_PACKED *unpacked = (glGetTexParameterfv_PACKED *)packed; \
    glGetTexParameterfv_ARGS *args = (glGetTexParameterfv_ARGS *)&unpacked->args; \
    glGetTexParameterfv(args->target, args->pname, args->params);; \
} while(0)
void glGetTexParameterfv(glGetTexParameterfv_ARG_EXPAND);
packed_call_t *pack_glGetTexParameterfv(glGetTexParameterfv_PACKED *_dst glGetTexParameterfv_ARG_EXPAND_TAIL);
typedef void (*glGetTexParameterfv_PTR)(glGetTexParameterfv_ARG_EXPAND);
#endif
#ifndef glGetTexParameteriv_RETURN
#define glGetTexParameteriv_RETURN void
#define glGetTexParameteriv_ARG_NAMES target, pname, params
#define glGetTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetTexParameteriv_ARG_NAMES_TAIL , target, pname, params
#define glGetTexParameteriv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLint * params
#define forward_glGetTexParameteriv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetTexParameteriv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetTexParameteriv(dst, _target, _pname, _params), NULL); \
    });
#define call_glGetTexParameteriv(packed, ret_v) do { \
    glGetTexParameteriv_PACKED *unpacked = (glGetTexParameteriv_PACKED *)packed; \
    glGetTexParameteriv_ARGS *args = (glGetTexParameteriv_ARGS *)&unpacked->args; \
    glGetTexParameteriv(args->target, args->pname, args->params);; \
} while(0)
void glGetTexParameteriv(glGetTexParameteriv_ARG_EXPAND);
packed_call_t *pack_glGetTexParameteriv(glGetTexParameteriv_PACKED *_dst glGetTexParameteriv_ARG_EXPAND_TAIL);
typedef void (*glGetTexParameteriv_PTR)(glGetTexParameteriv_ARG_EXPAND);
#endif
#ifndef glGetUniformLocation_RETURN
#define glGetUniformLocation_RETURN GLint
#define glGetUniformLocation_ARG_NAMES program, name
#define glGetUniformLocation_ARG_EXPAND GLuint program, const GLchar * name
#define glGetUniformLocation_ARG_NAMES_TAIL , program, name
#define glGetUniformLocation_ARG_EXPAND_TAIL , GLuint program, const GLchar * name
#define forward_glGetUniformLocation(_program, _name) \
    ({ \
        void *dst = remote_dma(sizeof(glGetUniformLocation_PACKED)); \
        GLint ret = (GLint)0; \
        remote_dma_send((packed_call_t *)pack_glGetUniformLocation(dst, _program, _name), &ret); \
        ret; \
    });
#define call_glGetUniformLocation(packed, ret_v) do { \
    glGetUniformLocation_PACKED *unpacked = (glGetUniformLocation_PACKED *)packed; \
    glGetUniformLocation_ARGS *args = (glGetUniformLocation_ARGS *)&unpacked->args; \
    GLint *ret = (GLint *)ret_v; \
    if (ret != NULL) { \
        *ret = glGetUniformLocation(args->program, args->name);; \
    } else { \
        glGetUniformLocation(args->program, args->name);; \
    } \
} while(0)
GLint glGetUniformLocation(glGetUniformLocation_ARG_EXPAND);
packed_call_t *pack_glGetUniformLocation(glGetUniformLocation_PACKED *_dst glGetUniformLocation_ARG_EXPAND_TAIL);
typedef GLint (*glGetUniformLocation_PTR)(glGetUniformLocation_ARG_EXPAND);
#endif
#ifndef glGetUniformfv_RETURN
#define glGetUniformfv_RETURN void
#define glGetUniformfv_ARG_NAMES program, location, params
#define glGetUniformfv_ARG_EXPAND GLuint program, GLint location, GLfloat * params
#define glGetUniformfv_ARG_NAMES_TAIL , program, location, params
#define glGetUniformfv_ARG_EXPAND_TAIL , GLuint program, GLint location, GLfloat * params
#define forward_glGetUniformfv(_program, _location, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetUniformfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetUniformfv(dst, _program, _location, _params), NULL); \
    });
#define call_glGetUniformfv(packed, ret_v) do { \
    glGetUniformfv_PACKED *unpacked = (glGetUniformfv_PACKED *)packed; \
    glGetUniformfv_ARGS *args = (glGetUniformfv_ARGS *)&unpacked->args; \
    glGetUniformfv(args->program, args->location, args->params);; \
} while(0)
void glGetUniformfv(glGetUniformfv_ARG_EXPAND);
packed_call_t *pack_glGetUniformfv(glGetUniformfv_PACKED *_dst glGetUniformfv_ARG_EXPAND_TAIL);
typedef void (*glGetUniformfv_PTR)(glGetUniformfv_ARG_EXPAND);
#endif
#ifndef glGetUniformiv_RETURN
#define glGetUniformiv_RETURN void
#define glGetUniformiv_ARG_NAMES program, location, params
#define glGetUniformiv_ARG_EXPAND GLuint program, GLint location, GLint * params
#define glGetUniformiv_ARG_NAMES_TAIL , program, location, params
#define glGetUniformiv_ARG_EXPAND_TAIL , GLuint program, GLint location, GLint * params
#define forward_glGetUniformiv(_program, _location, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetUniformiv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetUniformiv(dst, _program, _location, _params), NULL); \
    });
#define call_glGetUniformiv(packed, ret_v) do { \
    glGetUniformiv_PACKED *unpacked = (glGetUniformiv_PACKED *)packed; \
    glGetUniformiv_ARGS *args = (glGetUniformiv_ARGS *)&unpacked->args; \
    glGetUniformiv(args->program, args->location, args->params);; \
} while(0)
void glGetUniformiv(glGetUniformiv_ARG_EXPAND);
packed_call_t *pack_glGetUniformiv(glGetUniformiv_PACKED *_dst glGetUniformiv_ARG_EXPAND_TAIL);
typedef void (*glGetUniformiv_PTR)(glGetUniformiv_ARG_EXPAND);
#endif
#ifndef glGetVertexAttribPointerv_RETURN
#define glGetVertexAttribPointerv_RETURN void
#define glGetVertexAttribPointerv_ARG_NAMES index, pname, pointer
#define glGetVertexAttribPointerv_ARG_EXPAND GLuint index, GLenum pname, GLvoid ** pointer
#define glGetVertexAttribPointerv_ARG_NAMES_TAIL , index, pname, pointer
#define glGetVertexAttribPointerv_ARG_EXPAND_TAIL , GLuint index, GLenum pname, GLvoid ** pointer
#define forward_glGetVertexAttribPointerv(_index, _pname, _pointer) \
    ({ \
        void *dst = remote_dma(sizeof(glGetVertexAttribPointerv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetVertexAttribPointerv(dst, _index, _pname, _pointer), NULL); \
    });
#define call_glGetVertexAttribPointerv(packed, ret_v) do { \
    glGetVertexAttribPointerv_PACKED *unpacked = (glGetVertexAttribPointerv_PACKED *)packed; \
    glGetVertexAttribPointerv_ARGS *args = (glGetVertexAttribPointerv_ARGS *)&unpacked->args; \
    glGetVertexAttribPointerv(args->index, args->pname, args->pointer);; \
} while(0)
void glGetVertexAttribPointerv(glGetVertexAttribPointerv_ARG_EXPAND);
packed_call_t *pack_glGetVertexAttribPointerv(glGetVertexAttribPointerv_PACKED *_dst glGetVertexAttribPointerv_ARG_EXPAND_TAIL);
typedef void (*glGetVertexAttribPointerv_PTR)(glGetVertexAttribPointerv_ARG_EXPAND);
#endif
#ifndef glGetVertexAttribfv_RETURN
#define glGetVertexAttribfv_RETURN void
#define glGetVertexAttribfv_ARG_NAMES index, pname, params
#define glGetVertexAttribfv_ARG_EXPAND GLuint index, GLenum pname, GLfloat * params
#define glGetVertexAttribfv_ARG_NAMES_TAIL , index, pname, params
#define glGetVertexAttribfv_ARG_EXPAND_TAIL , GLuint index, GLenum pname, GLfloat * params
#define forward_glGetVertexAttribfv(_index, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetVertexAttribfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetVertexAttribfv(dst, _index, _pname, _params), NULL); \
    });
#define call_glGetVertexAttribfv(packed, ret_v) do { \
    glGetVertexAttribfv_PACKED *unpacked = (glGetVertexAttribfv_PACKED *)packed; \
    glGetVertexAttribfv_ARGS *args = (glGetVertexAttribfv_ARGS *)&unpacked->args; \
    glGetVertexAttribfv(args->index, args->pname, args->params);; \
} while(0)
void glGetVertexAttribfv(glGetVertexAttribfv_ARG_EXPAND);
packed_call_t *pack_glGetVertexAttribfv(glGetVertexAttribfv_PACKED *_dst glGetVertexAttribfv_ARG_EXPAND_TAIL);
typedef void (*glGetVertexAttribfv_PTR)(glGetVertexAttribfv_ARG_EXPAND);
#endif
#ifndef glGetVertexAttribiv_RETURN
#define glGetVertexAttribiv_RETURN void
#define glGetVertexAttribiv_ARG_NAMES index, pname, params
#define glGetVertexAttribiv_ARG_EXPAND GLuint index, GLenum pname, GLint * params
#define glGetVertexAttribiv_ARG_NAMES_TAIL , index, pname, params
#define glGetVertexAttribiv_ARG_EXPAND_TAIL , GLuint index, GLenum pname, GLint * params
#define forward_glGetVertexAttribiv(_index, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetVertexAttribiv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetVertexAttribiv(dst, _index, _pname, _params), NULL); \
    });
#define call_glGetVertexAttribiv(packed, ret_v) do { \
    glGetVertexAttribiv_PACKED *unpacked = (glGetVertexAttribiv_PACKED *)packed; \
    glGetVertexAttribiv_ARGS *args = (glGetVertexAttribiv_ARGS *)&unpacked->args; \
    glGetVertexAttribiv(args->index, args->pname, args->params);; \
} while(0)
void glGetVertexAttribiv(glGetVertexAttribiv_ARG_EXPAND);
packed_call_t *pack_glGetVertexAttribiv(glGetVertexAttribiv_PACKED *_dst glGetVertexAttribiv_ARG_EXPAND_TAIL);
typedef void (*glGetVertexAttribiv_PTR)(glGetVertexAttribiv_ARG_EXPAND);
#endif
#ifndef glHint_RETURN
#define glHint_RETURN void
#define glHint_ARG_NAMES target, mode
#define glHint_ARG_EXPAND GLenum target, GLenum mode
#define glHint_ARG_NAMES_TAIL , target, mode
#define glHint_ARG_EXPAND_TAIL , GLenum target, GLenum mode
#define forward_glHint(_target, _mode) \
    ({ \
        void *dst = remote_dma(sizeof(glHint_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glHint(dst, _target, _mode), NULL); \
    });
#define call_glHint(packed, ret_v) do { \
    glHint_PACKED *unpacked = (glHint_PACKED *)packed; \
    glHint_ARGS *args = (glHint_ARGS *)&unpacked->args; \
    glHint(args->target, args->mode);; \
} while(0)
void glHint(glHint_ARG_EXPAND);
packed_call_t *pack_glHint(glHint_PACKED *_dst glHint_ARG_EXPAND_TAIL);
typedef void (*glHint_PTR)(glHint_ARG_EXPAND);
#endif
#ifndef glIsBuffer_RETURN
#define glIsBuffer_RETURN GLboolean
#define glIsBuffer_ARG_NAMES buffer
#define glIsBuffer_ARG_EXPAND GLuint buffer
#define glIsBuffer_ARG_NAMES_TAIL , buffer
#define glIsBuffer_ARG_EXPAND_TAIL , GLuint buffer
#define forward_glIsBuffer(_buffer) \
    ({ \
        void *dst = remote_dma(sizeof(glIsBuffer_PACKED)); \
        GLboolean ret = (GLboolean)0; \
        remote_dma_send((packed_call_t *)pack_glIsBuffer(dst, _buffer), &ret); \
        ret; \
    });
#define call_glIsBuffer(packed, ret_v) do { \
    glIsBuffer_PACKED *unpacked = (glIsBuffer_PACKED *)packed; \
    glIsBuffer_ARGS *args = (glIsBuffer_ARGS *)&unpacked->args; \
    GLboolean *ret = (GLboolean *)ret_v; \
    if (ret != NULL) { \
        *ret = glIsBuffer(args->buffer);; \
    } else { \
        glIsBuffer(args->buffer);; \
    } \
} while(0)
GLboolean glIsBuffer(glIsBuffer_ARG_EXPAND);
packed_call_t *pack_glIsBuffer(glIsBuffer_PACKED *_dst glIsBuffer_ARG_EXPAND_TAIL);
typedef GLboolean (*glIsBuffer_PTR)(glIsBuffer_ARG_EXPAND);
#endif
#ifndef glIsEnabled_RETURN
#define glIsEnabled_RETURN GLboolean
#define glIsEnabled_ARG_NAMES cap
#define glIsEnabled_ARG_EXPAND GLenum cap
#define glIsEnabled_ARG_NAMES_TAIL , cap
#define glIsEnabled_ARG_EXPAND_TAIL , GLenum cap
#define forward_glIsEnabled(_cap) \
    ({ \
        void *dst = remote_dma(sizeof(glIsEnabled_PACKED)); \
        GLboolean ret = (GLboolean)0; \
        remote_dma_send((packed_call_t *)pack_glIsEnabled(dst, _cap), &ret); \
        ret; \
    });
#define call_glIsEnabled(packed, ret_v) do { \
    glIsEnabled_PACKED *unpacked = (glIsEnabled_PACKED *)packed; \
    glIsEnabled_ARGS *args = (glIsEnabled_ARGS *)&unpacked->args; \
    GLboolean *ret = (GLboolean *)ret_v; \
    if (ret != NULL) { \
        *ret = glIsEnabled(args->cap);; \
    } else { \
        glIsEnabled(args->cap);; \
    } \
} while(0)
GLboolean glIsEnabled(glIsEnabled_ARG_EXPAND);
packed_call_t *pack_glIsEnabled(glIsEnabled_PACKED *_dst glIsEnabled_ARG_EXPAND_TAIL);
typedef GLboolean (*glIsEnabled_PTR)(glIsEnabled_ARG_EXPAND);
#endif
#ifndef glIsFramebuffer_RETURN
#define glIsFramebuffer_RETURN GLboolean
#define glIsFramebuffer_ARG_NAMES framebuffer
#define glIsFramebuffer_ARG_EXPAND GLuint framebuffer
#define glIsFramebuffer_ARG_NAMES_TAIL , framebuffer
#define glIsFramebuffer_ARG_EXPAND_TAIL , GLuint framebuffer
#define forward_glIsFramebuffer(_framebuffer) \
    ({ \
        void *dst = remote_dma(sizeof(glIsFramebuffer_PACKED)); \
        GLboolean ret = (GLboolean)0; \
        remote_dma_send((packed_call_t *)pack_glIsFramebuffer(dst, _framebuffer), &ret); \
        ret; \
    });
#define call_glIsFramebuffer(packed, ret_v) do { \
    glIsFramebuffer_PACKED *unpacked = (glIsFramebuffer_PACKED *)packed; \
    glIsFramebuffer_ARGS *args = (glIsFramebuffer_ARGS *)&unpacked->args; \
    GLboolean *ret = (GLboolean *)ret_v; \
    if (ret != NULL) { \
        *ret = glIsFramebuffer(args->framebuffer);; \
    } else { \
        glIsFramebuffer(args->framebuffer);; \
    } \
} while(0)
GLboolean glIsFramebuffer(glIsFramebuffer_ARG_EXPAND);
packed_call_t *pack_glIsFramebuffer(glIsFramebuffer_PACKED *_dst glIsFramebuffer_ARG_EXPAND_TAIL);
typedef GLboolean (*glIsFramebuffer_PTR)(glIsFramebuffer_ARG_EXPAND);
#endif
#ifndef glIsProgram_RETURN
#define glIsProgram_RETURN GLboolean
#define glIsProgram_ARG_NAMES program
#define glIsProgram_ARG_EXPAND GLuint program
#define glIsProgram_ARG_NAMES_TAIL , program
#define glIsProgram_ARG_EXPAND_TAIL , GLuint program
#define forward_glIsProgram(_program) \
    ({ \
        void *dst = remote_dma(sizeof(glIsProgram_PACKED)); \
        GLboolean ret = (GLboolean)0; \
        remote_dma_send((packed_call_t *)pack_glIsProgram(dst, _program), &ret); \
        ret; \
    });
#define call_glIsProgram(packed, ret_v) do { \
    glIsProgram_PACKED *unpacked = (glIsProgram_PACKED *)packed; \
    glIsProgram_ARGS *args = (glIsProgram_ARGS *)&unpacked->args; \
    GLboolean *ret = (GLboolean *)ret_v; \
    if (ret != NULL) { \
        *ret = glIsProgram(args->program);; \
    } else { \
        glIsProgram(args->program);; \
    } \
} while(0)
GLboolean glIsProgram(glIsProgram_ARG_EXPAND);
packed_call_t *pack_glIsProgram(glIsProgram_PACKED *_dst glIsProgram_ARG_EXPAND_TAIL);
typedef GLboolean (*glIsProgram_PTR)(glIsProgram_ARG_EXPAND);
#endif
#ifndef glIsRenderbuffer_RETURN
#define glIsRenderbuffer_RETURN GLboolean
#define glIsRenderbuffer_ARG_NAMES renderbuffer
#define glIsRenderbuffer_ARG_EXPAND GLuint renderbuffer
#define glIsRenderbuffer_ARG_NAMES_TAIL , renderbuffer
#define glIsRenderbuffer_ARG_EXPAND_TAIL , GLuint renderbuffer
#define forward_glIsRenderbuffer(_renderbuffer) \
    ({ \
        void *dst = remote_dma(sizeof(glIsRenderbuffer_PACKED)); \
        GLboolean ret = (GLboolean)0; \
        remote_dma_send((packed_call_t *)pack_glIsRenderbuffer(dst, _renderbuffer), &ret); \
        ret; \
    });
#define call_glIsRenderbuffer(packed, ret_v) do { \
    glIsRenderbuffer_PACKED *unpacked = (glIsRenderbuffer_PACKED *)packed; \
    glIsRenderbuffer_ARGS *args = (glIsRenderbuffer_ARGS *)&unpacked->args; \
    GLboolean *ret = (GLboolean *)ret_v; \
    if (ret != NULL) { \
        *ret = glIsRenderbuffer(args->renderbuffer);; \
    } else { \
        glIsRenderbuffer(args->renderbuffer);; \
    } \
} while(0)
GLboolean glIsRenderbuffer(glIsRenderbuffer_ARG_EXPAND);
packed_call_t *pack_glIsRenderbuffer(glIsRenderbuffer_PACKED *_dst glIsRenderbuffer_ARG_EXPAND_TAIL);
typedef GLboolean (*glIsRenderbuffer_PTR)(glIsRenderbuffer_ARG_EXPAND);
#endif
#ifndef glIsShader_RETURN
#define glIsShader_RETURN GLboolean
#define glIsShader_ARG_NAMES shader
#define glIsShader_ARG_EXPAND GLuint shader
#define glIsShader_ARG_NAMES_TAIL , shader
#define glIsShader_ARG_EXPAND_TAIL , GLuint shader
#define forward_glIsShader(_shader) \
    ({ \
        void *dst = remote_dma(sizeof(glIsShader_PACKED)); \
        GLboolean ret = (GLboolean)0; \
        remote_dma_send((packed_call_t *)pack_glIsShader(dst, _shader), &ret); \
        ret; \
    });
#define call_glIsShader(packed, ret_v) do { \
    glIsShader_PACKED *unpacked = (glIsShader_PACKED *)packed; \
    glIsShader_ARGS *args = (glIsShader_ARGS *)&unpacked->args; \
    GLboolean *ret = (GLboolean *)ret_v; \
    if (ret != NULL) { \
        *ret = glIsShader(args->shader);; \
    } else { \
        glIsShader(args->shader);; \
    } \
} while(0)
GLboolean glIsShader(glIsShader_ARG_EXPAND);
packed_call_t *pack_glIsShader(glIsShader_PACKED *_dst glIsShader_ARG_EXPAND_TAIL);
typedef GLboolean (*glIsShader_PTR)(glIsShader_ARG_EXPAND);
#endif
#ifndef glIsTexture_RETURN
#define glIsTexture_RETURN GLboolean
#define glIsTexture_ARG_NAMES texture
#define glIsTexture_ARG_EXPAND GLuint texture
#define glIsTexture_ARG_NAMES_TAIL , texture
#define glIsTexture_ARG_EXPAND_TAIL , GLuint texture
#define forward_glIsTexture(_texture) \
    ({ \
        void *dst = remote_dma(sizeof(glIsTexture_PACKED)); \
        GLboolean ret = (GLboolean)0; \
        remote_dma_send((packed_call_t *)pack_glIsTexture(dst, _texture), &ret); \
        ret; \
    });
#define call_glIsTexture(packed, ret_v) do { \
    glIsTexture_PACKED *unpacked = (glIsTexture_PACKED *)packed; \
    glIsTexture_ARGS *args = (glIsTexture_ARGS *)&unpacked->args; \
    GLboolean *ret = (GLboolean *)ret_v; \
    if (ret != NULL) { \
        *ret = glIsTexture(args->texture);; \
    } else { \
        glIsTexture(args->texture);; \
    } \
} while(0)
GLboolean glIsTexture(glIsTexture_ARG_EXPAND);
packed_call_t *pack_glIsTexture(glIsTexture_PACKED *_dst glIsTexture_ARG_EXPAND_TAIL);
typedef GLboolean (*glIsTexture_PTR)(glIsTexture_ARG_EXPAND);
#endif
#ifndef glLineWidth_RETURN
#define glLineWidth_RETURN void
#define glLineWidth_ARG_NAMES width
#define glLineWidth_ARG_EXPAND GLfloat width
#define glLineWidth_ARG_NAMES_TAIL , width
#define glLineWidth_ARG_EXPAND_TAIL , GLfloat width
#define forward_glLineWidth(_width) \
    ({ \
        void *dst = remote_dma(sizeof(glLineWidth_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLineWidth(dst, _width), NULL); \
    });
#define call_glLineWidth(packed, ret_v) do { \
    glLineWidth_PACKED *unpacked = (glLineWidth_PACKED *)packed; \
    glLineWidth_ARGS *args = (glLineWidth_ARGS *)&unpacked->args; \
    glLineWidth(args->width);; \
} while(0)
void glLineWidth(glLineWidth_ARG_EXPAND);
packed_call_t *pack_glLineWidth(glLineWidth_PACKED *_dst glLineWidth_ARG_EXPAND_TAIL);
typedef void (*glLineWidth_PTR)(glLineWidth_ARG_EXPAND);
#endif
#ifndef glLinkProgram_RETURN
#define glLinkProgram_RETURN void
#define glLinkProgram_ARG_NAMES program
#define glLinkProgram_ARG_EXPAND GLuint program
#define glLinkProgram_ARG_NAMES_TAIL , program
#define glLinkProgram_ARG_EXPAND_TAIL , GLuint program
#define forward_glLinkProgram(_program) \
    ({ \
        void *dst = remote_dma(sizeof(glLinkProgram_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLinkProgram(dst, _program), NULL); \
    });
#define call_glLinkProgram(packed, ret_v) do { \
    glLinkProgram_PACKED *unpacked = (glLinkProgram_PACKED *)packed; \
    glLinkProgram_ARGS *args = (glLinkProgram_ARGS *)&unpacked->args; \
    glLinkProgram(args->program);; \
} while(0)
void glLinkProgram(glLinkProgram_ARG_EXPAND);
packed_call_t *pack_glLinkProgram(glLinkProgram_PACKED *_dst glLinkProgram_ARG_EXPAND_TAIL);
typedef void (*glLinkProgram_PTR)(glLinkProgram_ARG_EXPAND);
#endif
#ifndef glPixelStorei_RETURN
#define glPixelStorei_RETURN void
#define glPixelStorei_ARG_NAMES pname, param
#define glPixelStorei_ARG_EXPAND GLenum pname, GLint param
#define glPixelStorei_ARG_NAMES_TAIL , pname, param
#define glPixelStorei_ARG_EXPAND_TAIL , GLenum pname, GLint param
#define forward_glPixelStorei(_pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glPixelStorei_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPixelStorei(dst, _pname, _param), NULL); \
    });
#define call_glPixelStorei(packed, ret_v) do { \
    glPixelStorei_PACKED *unpacked = (glPixelStorei_PACKED *)packed; \
    glPixelStorei_ARGS *args = (glPixelStorei_ARGS *)&unpacked->args; \
    glPixelStorei(args->pname, args->param);; \
} while(0)
void glPixelStorei(glPixelStorei_ARG_EXPAND);
packed_call_t *pack_glPixelStorei(glPixelStorei_PACKED *_dst glPixelStorei_ARG_EXPAND_TAIL);
typedef void (*glPixelStorei_PTR)(glPixelStorei_ARG_EXPAND);
#endif
#ifndef glPolygonOffset_RETURN
#define glPolygonOffset_RETURN void
#define glPolygonOffset_ARG_NAMES factor, units
#define glPolygonOffset_ARG_EXPAND GLfloat factor, GLfloat units
#define glPolygonOffset_ARG_NAMES_TAIL , factor, units
#define glPolygonOffset_ARG_EXPAND_TAIL , GLfloat factor, GLfloat units
#define forward_glPolygonOffset(_factor, _units) \
    ({ \
        void *dst = remote_dma(sizeof(glPolygonOffset_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPolygonOffset(dst, _factor, _units), NULL); \
    });
#define call_glPolygonOffset(packed, ret_v) do { \
    glPolygonOffset_PACKED *unpacked = (glPolygonOffset_PACKED *)packed; \
    glPolygonOffset_ARGS *args = (glPolygonOffset_ARGS *)&unpacked->args; \
    glPolygonOffset(args->factor, args->units);; \
} while(0)
void glPolygonOffset(glPolygonOffset_ARG_EXPAND);
packed_call_t *pack_glPolygonOffset(glPolygonOffset_PACKED *_dst glPolygonOffset_ARG_EXPAND_TAIL);
typedef void (*glPolygonOffset_PTR)(glPolygonOffset_ARG_EXPAND);
#endif
#ifndef glReadPixels_RETURN
#define glReadPixels_RETURN void
#define glReadPixels_ARG_NAMES x, y, width, height, format, type, pixels
#define glReadPixels_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels
#define glReadPixels_ARG_NAMES_TAIL , x, y, width, height, format, type, pixels
#define glReadPixels_ARG_EXPAND_TAIL , GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels
#define forward_glReadPixels(_x, _y, _width, _height, _format, _type, _pixels) \
    ({ \
        void *dst = remote_dma(sizeof(glReadPixels_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glReadPixels(dst, _x, _y, _width, _height, _format, _type, _pixels), NULL); \
    });
#define call_glReadPixels(packed, ret_v) do { \
    glReadPixels_PACKED *unpacked = (glReadPixels_PACKED *)packed; \
    glReadPixels_ARGS *args = (glReadPixels_ARGS *)&unpacked->args; \
    glReadPixels(args->x, args->y, args->width, args->height, args->format, args->type, args->pixels);; \
} while(0)
void glReadPixels(glReadPixels_ARG_EXPAND);
packed_call_t *pack_glReadPixels(glReadPixels_PACKED *_dst glReadPixels_ARG_EXPAND_TAIL);
typedef void (*glReadPixels_PTR)(glReadPixels_ARG_EXPAND);
#endif
#ifndef glReleaseShaderCompiler_RETURN
#define glReleaseShaderCompiler_RETURN void
#define glReleaseShaderCompiler_ARG_NAMES 
#define glReleaseShaderCompiler_ARG_EXPAND 
#define glReleaseShaderCompiler_ARG_NAMES_TAIL 
#define glReleaseShaderCompiler_ARG_EXPAND_TAIL 
#define forward_glReleaseShaderCompiler() \
    ({ \
        void *dst = remote_dma(sizeof(glReleaseShaderCompiler_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glReleaseShaderCompiler(dst), NULL); \
    });
#define call_glReleaseShaderCompiler(packed, ret_v) do { \
    glReleaseShaderCompiler();; \
} while(0)
void glReleaseShaderCompiler(glReleaseShaderCompiler_ARG_EXPAND);
packed_call_t *pack_glReleaseShaderCompiler(glReleaseShaderCompiler_PACKED *_dst glReleaseShaderCompiler_ARG_EXPAND_TAIL);
typedef void (*glReleaseShaderCompiler_PTR)(glReleaseShaderCompiler_ARG_EXPAND);
#endif
#ifndef glRenderbufferStorage_RETURN
#define glRenderbufferStorage_RETURN void
#define glRenderbufferStorage_ARG_NAMES target, internalformat, width, height
#define glRenderbufferStorage_ARG_EXPAND GLenum target, GLenum internalformat, GLsizei width, GLsizei height
#define glRenderbufferStorage_ARG_NAMES_TAIL , target, internalformat, width, height
#define glRenderbufferStorage_ARG_EXPAND_TAIL , GLenum target, GLenum internalformat, GLsizei width, GLsizei height
#define forward_glRenderbufferStorage(_target, _internalformat, _width, _height) \
    ({ \
        void *dst = remote_dma(sizeof(glRenderbufferStorage_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glRenderbufferStorage(dst, _target, _internalformat, _width, _height), NULL); \
    });
#define call_glRenderbufferStorage(packed, ret_v) do { \
    glRenderbufferStorage_PACKED *unpacked = (glRenderbufferStorage_PACKED *)packed; \
    glRenderbufferStorage_ARGS *args = (glRenderbufferStorage_ARGS *)&unpacked->args; \
    glRenderbufferStorage(args->target, args->internalformat, args->width, args->height);; \
} while(0)
void glRenderbufferStorage(glRenderbufferStorage_ARG_EXPAND);
packed_call_t *pack_glRenderbufferStorage(glRenderbufferStorage_PACKED *_dst glRenderbufferStorage_ARG_EXPAND_TAIL);
typedef void (*glRenderbufferStorage_PTR)(glRenderbufferStorage_ARG_EXPAND);
#endif
#ifndef glSampleCoverage_RETURN
#define glSampleCoverage_RETURN void
#define glSampleCoverage_ARG_NAMES value, invert
#define glSampleCoverage_ARG_EXPAND GLclampf value, GLboolean invert
#define glSampleCoverage_ARG_NAMES_TAIL , value, invert
#define glSampleCoverage_ARG_EXPAND_TAIL , GLclampf value, GLboolean invert
#define forward_glSampleCoverage(_value, _invert) \
    ({ \
        void *dst = remote_dma(sizeof(glSampleCoverage_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glSampleCoverage(dst, _value, _invert), NULL); \
    });
#define call_glSampleCoverage(packed, ret_v) do { \
    glSampleCoverage_PACKED *unpacked = (glSampleCoverage_PACKED *)packed; \
    glSampleCoverage_ARGS *args = (glSampleCoverage_ARGS *)&unpacked->args; \
    glSampleCoverage(args->value, args->invert);; \
} while(0)
void glSampleCoverage(glSampleCoverage_ARG_EXPAND);
packed_call_t *pack_glSampleCoverage(glSampleCoverage_PACKED *_dst glSampleCoverage_ARG_EXPAND_TAIL);
typedef void (*glSampleCoverage_PTR)(glSampleCoverage_ARG_EXPAND);
#endif
#ifndef glScissor_RETURN
#define glScissor_RETURN void
#define glScissor_ARG_NAMES x, y, width, height
#define glScissor_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glScissor_ARG_NAMES_TAIL , x, y, width, height
#define glScissor_ARG_EXPAND_TAIL , GLint x, GLint y, GLsizei width, GLsizei height
#define forward_glScissor(_x, _y, _width, _height) \
    ({ \
        void *dst = remote_dma(sizeof(glScissor_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glScissor(dst, _x, _y, _width, _height), NULL); \
    });
#define call_glScissor(packed, ret_v) do { \
    glScissor_PACKED *unpacked = (glScissor_PACKED *)packed; \
    glScissor_ARGS *args = (glScissor_ARGS *)&unpacked->args; \
    glScissor(args->x, args->y, args->width, args->height);; \
} while(0)
void glScissor(glScissor_ARG_EXPAND);
packed_call_t *pack_glScissor(glScissor_PACKED *_dst glScissor_ARG_EXPAND_TAIL);
typedef void (*glScissor_PTR)(glScissor_ARG_EXPAND);
#endif
#ifndef glShaderBinary_RETURN
#define glShaderBinary_RETURN void
#define glShaderBinary_ARG_NAMES count, shaders, binaryformat, binary, length
#define glShaderBinary_ARG_EXPAND GLsizei count, const GLuint * shaders, GLenum binaryformat, const GLvoid * binary, GLsizei length
#define glShaderBinary_ARG_NAMES_TAIL , count, shaders, binaryformat, binary, length
#define glShaderBinary_ARG_EXPAND_TAIL , GLsizei count, const GLuint * shaders, GLenum binaryformat, const GLvoid * binary, GLsizei length
#define forward_glShaderBinary(_count, _shaders, _binaryformat, _binary, _length) \
    ({ \
        void *dst = remote_dma(sizeof(glShaderBinary_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glShaderBinary(dst, _count, _shaders, _binaryformat, _binary, _length), NULL); \
    });
#define call_glShaderBinary(packed, ret_v) do { \
    glShaderBinary_PACKED *unpacked = (glShaderBinary_PACKED *)packed; \
    glShaderBinary_ARGS *args = (glShaderBinary_ARGS *)&unpacked->args; \
    glShaderBinary(args->count, args->shaders, args->binaryformat, args->binary, args->length);; \
} while(0)
void glShaderBinary(glShaderBinary_ARG_EXPAND);
packed_call_t *pack_glShaderBinary(glShaderBinary_PACKED *_dst glShaderBinary_ARG_EXPAND_TAIL);
typedef void (*glShaderBinary_PTR)(glShaderBinary_ARG_EXPAND);
#endif
#ifndef glShaderSource_RETURN
#define glShaderSource_RETURN void
#define glShaderSource_ARG_NAMES shader, count, string, length
#define glShaderSource_ARG_EXPAND GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length
#define glShaderSource_ARG_NAMES_TAIL , shader, count, string, length
#define glShaderSource_ARG_EXPAND_TAIL , GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length
#define forward_glShaderSource(_shader, _count, _string, _length) \
    ({ \
        void *dst = remote_dma(sizeof(glShaderSource_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glShaderSource(dst, _shader, _count, _string, _length), NULL); \
    });
#define call_glShaderSource(packed, ret_v) do { \
    glShaderSource_PACKED *unpacked = (glShaderSource_PACKED *)packed; \
    glShaderSource_ARGS *args = (glShaderSource_ARGS *)&unpacked->args; \
    glShaderSource(args->shader, args->count, args->string, args->length);; \
} while(0)
void glShaderSource(glShaderSource_ARG_EXPAND);
packed_call_t *pack_glShaderSource(glShaderSource_PACKED *_dst glShaderSource_ARG_EXPAND_TAIL);
typedef void (*glShaderSource_PTR)(glShaderSource_ARG_EXPAND);
#endif
#ifndef glStencilFunc_RETURN
#define glStencilFunc_RETURN void
#define glStencilFunc_ARG_NAMES func, ref, mask
#define glStencilFunc_ARG_EXPAND GLenum func, GLint ref, GLuint mask
#define glStencilFunc_ARG_NAMES_TAIL , func, ref, mask
#define glStencilFunc_ARG_EXPAND_TAIL , GLenum func, GLint ref, GLuint mask
#define forward_glStencilFunc(_func, _ref, _mask) \
    ({ \
        void *dst = remote_dma(sizeof(glStencilFunc_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glStencilFunc(dst, _func, _ref, _mask), NULL); \
    });
#define call_glStencilFunc(packed, ret_v) do { \
    glStencilFunc_PACKED *unpacked = (glStencilFunc_PACKED *)packed; \
    glStencilFunc_ARGS *args = (glStencilFunc_ARGS *)&unpacked->args; \
    glStencilFunc(args->func, args->ref, args->mask);; \
} while(0)
void glStencilFunc(glStencilFunc_ARG_EXPAND);
packed_call_t *pack_glStencilFunc(glStencilFunc_PACKED *_dst glStencilFunc_ARG_EXPAND_TAIL);
typedef void (*glStencilFunc_PTR)(glStencilFunc_ARG_EXPAND);
#endif
#ifndef glStencilFuncSeparate_RETURN
#define glStencilFuncSeparate_RETURN void
#define glStencilFuncSeparate_ARG_NAMES face, func, ref, mask
#define glStencilFuncSeparate_ARG_EXPAND GLenum face, GLenum func, GLint ref, GLuint mask
#define glStencilFuncSeparate_ARG_NAMES_TAIL , face, func, ref, mask
#define glStencilFuncSeparate_ARG_EXPAND_TAIL , GLenum face, GLenum func, GLint ref, GLuint mask
#define forward_glStencilFuncSeparate(_face, _func, _ref, _mask) \
    ({ \
        void *dst = remote_dma(sizeof(glStencilFuncSeparate_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glStencilFuncSeparate(dst, _face, _func, _ref, _mask), NULL); \
    });
#define call_glStencilFuncSeparate(packed, ret_v) do { \
    glStencilFuncSeparate_PACKED *unpacked = (glStencilFuncSeparate_PACKED *)packed; \
    glStencilFuncSeparate_ARGS *args = (glStencilFuncSeparate_ARGS *)&unpacked->args; \
    glStencilFuncSeparate(args->face, args->func, args->ref, args->mask);; \
} while(0)
void glStencilFuncSeparate(glStencilFuncSeparate_ARG_EXPAND);
packed_call_t *pack_glStencilFuncSeparate(glStencilFuncSeparate_PACKED *_dst glStencilFuncSeparate_ARG_EXPAND_TAIL);
typedef void (*glStencilFuncSeparate_PTR)(glStencilFuncSeparate_ARG_EXPAND);
#endif
#ifndef glStencilMask_RETURN
#define glStencilMask_RETURN void
#define glStencilMask_ARG_NAMES mask
#define glStencilMask_ARG_EXPAND GLuint mask
#define glStencilMask_ARG_NAMES_TAIL , mask
#define glStencilMask_ARG_EXPAND_TAIL , GLuint mask
#define forward_glStencilMask(_mask) \
    ({ \
        void *dst = remote_dma(sizeof(glStencilMask_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glStencilMask(dst, _mask), NULL); \
    });
#define call_glStencilMask(packed, ret_v) do { \
    glStencilMask_PACKED *unpacked = (glStencilMask_PACKED *)packed; \
    glStencilMask_ARGS *args = (glStencilMask_ARGS *)&unpacked->args; \
    glStencilMask(args->mask);; \
} while(0)
void glStencilMask(glStencilMask_ARG_EXPAND);
packed_call_t *pack_glStencilMask(glStencilMask_PACKED *_dst glStencilMask_ARG_EXPAND_TAIL);
typedef void (*glStencilMask_PTR)(glStencilMask_ARG_EXPAND);
#endif
#ifndef glStencilMaskSeparate_RETURN
#define glStencilMaskSeparate_RETURN void
#define glStencilMaskSeparate_ARG_NAMES face, mask
#define glStencilMaskSeparate_ARG_EXPAND GLenum face, GLuint mask
#define glStencilMaskSeparate_ARG_NAMES_TAIL , face, mask
#define glStencilMaskSeparate_ARG_EXPAND_TAIL , GLenum face, GLuint mask
#define forward_glStencilMaskSeparate(_face, _mask) \
    ({ \
        void *dst = remote_dma(sizeof(glStencilMaskSeparate_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glStencilMaskSeparate(dst, _face, _mask), NULL); \
    });
#define call_glStencilMaskSeparate(packed, ret_v) do { \
    glStencilMaskSeparate_PACKED *unpacked = (glStencilMaskSeparate_PACKED *)packed; \
    glStencilMaskSeparate_ARGS *args = (glStencilMaskSeparate_ARGS *)&unpacked->args; \
    glStencilMaskSeparate(args->face, args->mask);; \
} while(0)
void glStencilMaskSeparate(glStencilMaskSeparate_ARG_EXPAND);
packed_call_t *pack_glStencilMaskSeparate(glStencilMaskSeparate_PACKED *_dst glStencilMaskSeparate_ARG_EXPAND_TAIL);
typedef void (*glStencilMaskSeparate_PTR)(glStencilMaskSeparate_ARG_EXPAND);
#endif
#ifndef glStencilOp_RETURN
#define glStencilOp_RETURN void
#define glStencilOp_ARG_NAMES fail, zfail, zpass
#define glStencilOp_ARG_EXPAND GLenum fail, GLenum zfail, GLenum zpass
#define glStencilOp_ARG_NAMES_TAIL , fail, zfail, zpass
#define glStencilOp_ARG_EXPAND_TAIL , GLenum fail, GLenum zfail, GLenum zpass
#define forward_glStencilOp(_fail, _zfail, _zpass) \
    ({ \
        void *dst = remote_dma(sizeof(glStencilOp_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glStencilOp(dst, _fail, _zfail, _zpass), NULL); \
    });
#define call_glStencilOp(packed, ret_v) do { \
    glStencilOp_PACKED *unpacked = (glStencilOp_PACKED *)packed; \
    glStencilOp_ARGS *args = (glStencilOp_ARGS *)&unpacked->args; \
    glStencilOp(args->fail, args->zfail, args->zpass);; \
} while(0)
void glStencilOp(glStencilOp_ARG_EXPAND);
packed_call_t *pack_glStencilOp(glStencilOp_PACKED *_dst glStencilOp_ARG_EXPAND_TAIL);
typedef void (*glStencilOp_PTR)(glStencilOp_ARG_EXPAND);
#endif
#ifndef glStencilOpSeparate_RETURN
#define glStencilOpSeparate_RETURN void
#define glStencilOpSeparate_ARG_NAMES face, sfail, dpfail, dppass
#define glStencilOpSeparate_ARG_EXPAND GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass
#define glStencilOpSeparate_ARG_NAMES_TAIL , face, sfail, dpfail, dppass
#define glStencilOpSeparate_ARG_EXPAND_TAIL , GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass
#define forward_glStencilOpSeparate(_face, _sfail, _dpfail, _dppass) \
    ({ \
        void *dst = remote_dma(sizeof(glStencilOpSeparate_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glStencilOpSeparate(dst, _face, _sfail, _dpfail, _dppass), NULL); \
    });
#define call_glStencilOpSeparate(packed, ret_v) do { \
    glStencilOpSeparate_PACKED *unpacked = (glStencilOpSeparate_PACKED *)packed; \
    glStencilOpSeparate_ARGS *args = (glStencilOpSeparate_ARGS *)&unpacked->args; \
    glStencilOpSeparate(args->face, args->sfail, args->dpfail, args->dppass);; \
} while(0)
void glStencilOpSeparate(glStencilOpSeparate_ARG_EXPAND);
packed_call_t *pack_glStencilOpSeparate(glStencilOpSeparate_PACKED *_dst glStencilOpSeparate_ARG_EXPAND_TAIL);
typedef void (*glStencilOpSeparate_PTR)(glStencilOpSeparate_ARG_EXPAND);
#endif
#ifndef glTexImage2D_RETURN
#define glTexImage2D_RETURN void
#define glTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, format, type, pixels
#define glTexImage2D_ARG_EXPAND GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels
#define glTexImage2D_ARG_NAMES_TAIL , target, level, internalformat, width, height, border, format, type, pixels
#define glTexImage2D_ARG_EXPAND_TAIL , GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels
#define forward_glTexImage2D(_target, _level, _internalformat, _width, _height, _border, _format, _type, _pixels) \
    ({ \
        void *dst = remote_dma(sizeof(glTexImage2D_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexImage2D(dst, _target, _level, _internalformat, _width, _height, _border, _format, _type, _pixels), NULL); \
    });
#define call_glTexImage2D(packed, ret_v) do { \
    glTexImage2D_PACKED *unpacked = (glTexImage2D_PACKED *)packed; \
    glTexImage2D_ARGS *args = (glTexImage2D_ARGS *)&unpacked->args; \
    glTexImage2D(args->target, args->level, args->internalformat, args->width, args->height, args->border, args->format, args->type, args->pixels);; \
} while(0)
void glTexImage2D(glTexImage2D_ARG_EXPAND);
packed_call_t *pack_glTexImage2D(glTexImage2D_PACKED *_dst glTexImage2D_ARG_EXPAND_TAIL);
typedef void (*glTexImage2D_PTR)(glTexImage2D_ARG_EXPAND);
#endif
#ifndef glTexParameterf_RETURN
#define glTexParameterf_RETURN void
#define glTexParameterf_ARG_NAMES target, pname, param
#define glTexParameterf_ARG_EXPAND GLenum target, GLenum pname, GLfloat param
#define glTexParameterf_ARG_NAMES_TAIL , target, pname, param
#define glTexParameterf_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLfloat param
#define forward_glTexParameterf(_target, _pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glTexParameterf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexParameterf(dst, _target, _pname, _param), NULL); \
    });
#define call_glTexParameterf(packed, ret_v) do { \
    glTexParameterf_PACKED *unpacked = (glTexParameterf_PACKED *)packed; \
    glTexParameterf_ARGS *args = (glTexParameterf_ARGS *)&unpacked->args; \
    glTexParameterf(args->target, args->pname, args->param);; \
} while(0)
void glTexParameterf(glTexParameterf_ARG_EXPAND);
packed_call_t *pack_glTexParameterf(glTexParameterf_PACKED *_dst glTexParameterf_ARG_EXPAND_TAIL);
typedef void (*glTexParameterf_PTR)(glTexParameterf_ARG_EXPAND);
#endif
#ifndef glTexParameterfv_RETURN
#define glTexParameterfv_RETURN void
#define glTexParameterfv_ARG_NAMES target, pname, params
#define glTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, const GLfloat * params
#define glTexParameterfv_ARG_NAMES_TAIL , target, pname, params
#define glTexParameterfv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, const GLfloat * params
#define forward_glTexParameterfv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glTexParameterfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexParameterfv(dst, _target, _pname, _params), NULL); \
    });
#define call_glTexParameterfv(packed, ret_v) do { \
    glTexParameterfv_PACKED *unpacked = (glTexParameterfv_PACKED *)packed; \
    glTexParameterfv_ARGS *args = (glTexParameterfv_ARGS *)&unpacked->args; \
    glTexParameterfv(args->target, args->pname, args->params);; \
} while(0)
void glTexParameterfv(glTexParameterfv_ARG_EXPAND);
packed_call_t *pack_glTexParameterfv(glTexParameterfv_PACKED *_dst glTexParameterfv_ARG_EXPAND_TAIL);
typedef void (*glTexParameterfv_PTR)(glTexParameterfv_ARG_EXPAND);
#endif
#ifndef glTexParameteri_RETURN
#define glTexParameteri_RETURN void
#define glTexParameteri_ARG_NAMES target, pname, param
#define glTexParameteri_ARG_EXPAND GLenum target, GLenum pname, GLint param
#define glTexParameteri_ARG_NAMES_TAIL , target, pname, param
#define glTexParameteri_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLint param
#define forward_glTexParameteri(_target, _pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glTexParameteri_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexParameteri(dst, _target, _pname, _param), NULL); \
    });
#define call_glTexParameteri(packed, ret_v) do { \
    glTexParameteri_PACKED *unpacked = (glTexParameteri_PACKED *)packed; \
    glTexParameteri_ARGS *args = (glTexParameteri_ARGS *)&unpacked->args; \
    glTexParameteri(args->target, args->pname, args->param);; \
} while(0)
void glTexParameteri(glTexParameteri_ARG_EXPAND);
packed_call_t *pack_glTexParameteri(glTexParameteri_PACKED *_dst glTexParameteri_ARG_EXPAND_TAIL);
typedef void (*glTexParameteri_PTR)(glTexParameteri_ARG_EXPAND);
#endif
#ifndef glTexParameteriv_RETURN
#define glTexParameteriv_RETURN void
#define glTexParameteriv_ARG_NAMES target, pname, params
#define glTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, const GLint * params
#define glTexParameteriv_ARG_NAMES_TAIL , target, pname, params
#define glTexParameteriv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, const GLint * params
#define forward_glTexParameteriv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glTexParameteriv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexParameteriv(dst, _target, _pname, _params), NULL); \
    });
#define call_glTexParameteriv(packed, ret_v) do { \
    glTexParameteriv_PACKED *unpacked = (glTexParameteriv_PACKED *)packed; \
    glTexParameteriv_ARGS *args = (glTexParameteriv_ARGS *)&unpacked->args; \
    glTexParameteriv(args->target, args->pname, args->params);; \
} while(0)
void glTexParameteriv(glTexParameteriv_ARG_EXPAND);
packed_call_t *pack_glTexParameteriv(glTexParameteriv_PACKED *_dst glTexParameteriv_ARG_EXPAND_TAIL);
typedef void (*glTexParameteriv_PTR)(glTexParameteriv_ARG_EXPAND);
#endif
#ifndef glTexSubImage2D_RETURN
#define glTexSubImage2D_RETURN void
#define glTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, type, pixels
#define glTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels
#define glTexSubImage2D_ARG_NAMES_TAIL , target, level, xoffset, yoffset, width, height, format, type, pixels
#define glTexSubImage2D_ARG_EXPAND_TAIL , GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels
#define forward_glTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _type, _pixels) \
    ({ \
        void *dst = remote_dma(sizeof(glTexSubImage2D_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexSubImage2D(dst, _target, _level, _xoffset, _yoffset, _width, _height, _format, _type, _pixels), NULL); \
    });
#define call_glTexSubImage2D(packed, ret_v) do { \
    glTexSubImage2D_PACKED *unpacked = (glTexSubImage2D_PACKED *)packed; \
    glTexSubImage2D_ARGS *args = (glTexSubImage2D_ARGS *)&unpacked->args; \
    glTexSubImage2D(args->target, args->level, args->xoffset, args->yoffset, args->width, args->height, args->format, args->type, args->pixels);; \
} while(0)
void glTexSubImage2D(glTexSubImage2D_ARG_EXPAND);
packed_call_t *pack_glTexSubImage2D(glTexSubImage2D_PACKED *_dst glTexSubImage2D_ARG_EXPAND_TAIL);
typedef void (*glTexSubImage2D_PTR)(glTexSubImage2D_ARG_EXPAND);
#endif
#ifndef glUniform1f_RETURN
#define glUniform1f_RETURN void
#define glUniform1f_ARG_NAMES location, v0
#define glUniform1f_ARG_EXPAND GLint location, GLfloat v0
#define glUniform1f_ARG_NAMES_TAIL , location, v0
#define glUniform1f_ARG_EXPAND_TAIL , GLint location, GLfloat v0
#define forward_glUniform1f(_location, _v0) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform1f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform1f(dst, _location, _v0), NULL); \
    });
#define call_glUniform1f(packed, ret_v) do { \
    glUniform1f_PACKED *unpacked = (glUniform1f_PACKED *)packed; \
    glUniform1f_ARGS *args = (glUniform1f_ARGS *)&unpacked->args; \
    glUniform1f(args->location, args->v0);; \
} while(0)
void glUniform1f(glUniform1f_ARG_EXPAND);
packed_call_t *pack_glUniform1f(glUniform1f_PACKED *_dst glUniform1f_ARG_EXPAND_TAIL);
typedef void (*glUniform1f_PTR)(glUniform1f_ARG_EXPAND);
#endif
#ifndef glUniform1fv_RETURN
#define glUniform1fv_RETURN void
#define glUniform1fv_ARG_NAMES location, count, value
#define glUniform1fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform1fv_ARG_NAMES_TAIL , location, count, value
#define glUniform1fv_ARG_EXPAND_TAIL , GLint location, GLsizei count, const GLfloat * value
#define forward_glUniform1fv(_location, _count, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform1fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform1fv(dst, _location, _count, _value), NULL); \
    });
#define call_glUniform1fv(packed, ret_v) do { \
    glUniform1fv_PACKED *unpacked = (glUniform1fv_PACKED *)packed; \
    glUniform1fv_ARGS *args = (glUniform1fv_ARGS *)&unpacked->args; \
    glUniform1fv(args->location, args->count, args->value);; \
} while(0)
void glUniform1fv(glUniform1fv_ARG_EXPAND);
packed_call_t *pack_glUniform1fv(glUniform1fv_PACKED *_dst glUniform1fv_ARG_EXPAND_TAIL);
typedef void (*glUniform1fv_PTR)(glUniform1fv_ARG_EXPAND);
#endif
#ifndef glUniform1i_RETURN
#define glUniform1i_RETURN void
#define glUniform1i_ARG_NAMES location, v0
#define glUniform1i_ARG_EXPAND GLint location, GLint v0
#define glUniform1i_ARG_NAMES_TAIL , location, v0
#define glUniform1i_ARG_EXPAND_TAIL , GLint location, GLint v0
#define forward_glUniform1i(_location, _v0) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform1i_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform1i(dst, _location, _v0), NULL); \
    });
#define call_glUniform1i(packed, ret_v) do { \
    glUniform1i_PACKED *unpacked = (glUniform1i_PACKED *)packed; \
    glUniform1i_ARGS *args = (glUniform1i_ARGS *)&unpacked->args; \
    glUniform1i(args->location, args->v0);; \
} while(0)
void glUniform1i(glUniform1i_ARG_EXPAND);
packed_call_t *pack_glUniform1i(glUniform1i_PACKED *_dst glUniform1i_ARG_EXPAND_TAIL);
typedef void (*glUniform1i_PTR)(glUniform1i_ARG_EXPAND);
#endif
#ifndef glUniform1iv_RETURN
#define glUniform1iv_RETURN void
#define glUniform1iv_ARG_NAMES location, count, value
#define glUniform1iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform1iv_ARG_NAMES_TAIL , location, count, value
#define glUniform1iv_ARG_EXPAND_TAIL , GLint location, GLsizei count, const GLint * value
#define forward_glUniform1iv(_location, _count, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform1iv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform1iv(dst, _location, _count, _value), NULL); \
    });
#define call_glUniform1iv(packed, ret_v) do { \
    glUniform1iv_PACKED *unpacked = (glUniform1iv_PACKED *)packed; \
    glUniform1iv_ARGS *args = (glUniform1iv_ARGS *)&unpacked->args; \
    glUniform1iv(args->location, args->count, args->value);; \
} while(0)
void glUniform1iv(glUniform1iv_ARG_EXPAND);
packed_call_t *pack_glUniform1iv(glUniform1iv_PACKED *_dst glUniform1iv_ARG_EXPAND_TAIL);
typedef void (*glUniform1iv_PTR)(glUniform1iv_ARG_EXPAND);
#endif
#ifndef glUniform2f_RETURN
#define glUniform2f_RETURN void
#define glUniform2f_ARG_NAMES location, v0, v1
#define glUniform2f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1
#define glUniform2f_ARG_NAMES_TAIL , location, v0, v1
#define glUniform2f_ARG_EXPAND_TAIL , GLint location, GLfloat v0, GLfloat v1
#define forward_glUniform2f(_location, _v0, _v1) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform2f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform2f(dst, _location, _v0, _v1), NULL); \
    });
#define call_glUniform2f(packed, ret_v) do { \
    glUniform2f_PACKED *unpacked = (glUniform2f_PACKED *)packed; \
    glUniform2f_ARGS *args = (glUniform2f_ARGS *)&unpacked->args; \
    glUniform2f(args->location, args->v0, args->v1);; \
} while(0)
void glUniform2f(glUniform2f_ARG_EXPAND);
packed_call_t *pack_glUniform2f(glUniform2f_PACKED *_dst glUniform2f_ARG_EXPAND_TAIL);
typedef void (*glUniform2f_PTR)(glUniform2f_ARG_EXPAND);
#endif
#ifndef glUniform2fv_RETURN
#define glUniform2fv_RETURN void
#define glUniform2fv_ARG_NAMES location, count, value
#define glUniform2fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform2fv_ARG_NAMES_TAIL , location, count, value
#define glUniform2fv_ARG_EXPAND_TAIL , GLint location, GLsizei count, const GLfloat * value
#define forward_glUniform2fv(_location, _count, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform2fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform2fv(dst, _location, _count, _value), NULL); \
    });
#define call_glUniform2fv(packed, ret_v) do { \
    glUniform2fv_PACKED *unpacked = (glUniform2fv_PACKED *)packed; \
    glUniform2fv_ARGS *args = (glUniform2fv_ARGS *)&unpacked->args; \
    glUniform2fv(args->location, args->count, args->value);; \
} while(0)
void glUniform2fv(glUniform2fv_ARG_EXPAND);
packed_call_t *pack_glUniform2fv(glUniform2fv_PACKED *_dst glUniform2fv_ARG_EXPAND_TAIL);
typedef void (*glUniform2fv_PTR)(glUniform2fv_ARG_EXPAND);
#endif
#ifndef glUniform2i_RETURN
#define glUniform2i_RETURN void
#define glUniform2i_ARG_NAMES location, v0, v1
#define glUniform2i_ARG_EXPAND GLint location, GLint v0, GLint v1
#define glUniform2i_ARG_NAMES_TAIL , location, v0, v1
#define glUniform2i_ARG_EXPAND_TAIL , GLint location, GLint v0, GLint v1
#define forward_glUniform2i(_location, _v0, _v1) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform2i_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform2i(dst, _location, _v0, _v1), NULL); \
    });
#define call_glUniform2i(packed, ret_v) do { \
    glUniform2i_PACKED *unpacked = (glUniform2i_PACKED *)packed; \
    glUniform2i_ARGS *args = (glUniform2i_ARGS *)&unpacked->args; \
    glUniform2i(args->location, args->v0, args->v1);; \
} while(0)
void glUniform2i(glUniform2i_ARG_EXPAND);
packed_call_t *pack_glUniform2i(glUniform2i_PACKED *_dst glUniform2i_ARG_EXPAND_TAIL);
typedef void (*glUniform2i_PTR)(glUniform2i_ARG_EXPAND);
#endif
#ifndef glUniform2iv_RETURN
#define glUniform2iv_RETURN void
#define glUniform2iv_ARG_NAMES location, count, value
#define glUniform2iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform2iv_ARG_NAMES_TAIL , location, count, value
#define glUniform2iv_ARG_EXPAND_TAIL , GLint location, GLsizei count, const GLint * value
#define forward_glUniform2iv(_location, _count, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform2iv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform2iv(dst, _location, _count, _value), NULL); \
    });
#define call_glUniform2iv(packed, ret_v) do { \
    glUniform2iv_PACKED *unpacked = (glUniform2iv_PACKED *)packed; \
    glUniform2iv_ARGS *args = (glUniform2iv_ARGS *)&unpacked->args; \
    glUniform2iv(args->location, args->count, args->value);; \
} while(0)
void glUniform2iv(glUniform2iv_ARG_EXPAND);
packed_call_t *pack_glUniform2iv(glUniform2iv_PACKED *_dst glUniform2iv_ARG_EXPAND_TAIL);
typedef void (*glUniform2iv_PTR)(glUniform2iv_ARG_EXPAND);
#endif
#ifndef glUniform3f_RETURN
#define glUniform3f_RETURN void
#define glUniform3f_ARG_NAMES location, v0, v1, v2
#define glUniform3f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1, GLfloat v2
#define glUniform3f_ARG_NAMES_TAIL , location, v0, v1, v2
#define glUniform3f_ARG_EXPAND_TAIL , GLint location, GLfloat v0, GLfloat v1, GLfloat v2
#define forward_glUniform3f(_location, _v0, _v1, _v2) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform3f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform3f(dst, _location, _v0, _v1, _v2), NULL); \
    });
#define call_glUniform3f(packed, ret_v) do { \
    glUniform3f_PACKED *unpacked = (glUniform3f_PACKED *)packed; \
    glUniform3f_ARGS *args = (glUniform3f_ARGS *)&unpacked->args; \
    glUniform3f(args->location, args->v0, args->v1, args->v2);; \
} while(0)
void glUniform3f(glUniform3f_ARG_EXPAND);
packed_call_t *pack_glUniform3f(glUniform3f_PACKED *_dst glUniform3f_ARG_EXPAND_TAIL);
typedef void (*glUniform3f_PTR)(glUniform3f_ARG_EXPAND);
#endif
#ifndef glUniform3fv_RETURN
#define glUniform3fv_RETURN void
#define glUniform3fv_ARG_NAMES location, count, value
#define glUniform3fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform3fv_ARG_NAMES_TAIL , location, count, value
#define glUniform3fv_ARG_EXPAND_TAIL , GLint location, GLsizei count, const GLfloat * value
#define forward_glUniform3fv(_location, _count, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform3fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform3fv(dst, _location, _count, _value), NULL); \
    });
#define call_glUniform3fv(packed, ret_v) do { \
    glUniform3fv_PACKED *unpacked = (glUniform3fv_PACKED *)packed; \
    glUniform3fv_ARGS *args = (glUniform3fv_ARGS *)&unpacked->args; \
    glUniform3fv(args->location, args->count, args->value);; \
} while(0)
void glUniform3fv(glUniform3fv_ARG_EXPAND);
packed_call_t *pack_glUniform3fv(glUniform3fv_PACKED *_dst glUniform3fv_ARG_EXPAND_TAIL);
typedef void (*glUniform3fv_PTR)(glUniform3fv_ARG_EXPAND);
#endif
#ifndef glUniform3i_RETURN
#define glUniform3i_RETURN void
#define glUniform3i_ARG_NAMES location, v0, v1, v2
#define glUniform3i_ARG_EXPAND GLint location, GLint v0, GLint v1, GLint v2
#define glUniform3i_ARG_NAMES_TAIL , location, v0, v1, v2
#define glUniform3i_ARG_EXPAND_TAIL , GLint location, GLint v0, GLint v1, GLint v2
#define forward_glUniform3i(_location, _v0, _v1, _v2) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform3i_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform3i(dst, _location, _v0, _v1, _v2), NULL); \
    });
#define call_glUniform3i(packed, ret_v) do { \
    glUniform3i_PACKED *unpacked = (glUniform3i_PACKED *)packed; \
    glUniform3i_ARGS *args = (glUniform3i_ARGS *)&unpacked->args; \
    glUniform3i(args->location, args->v0, args->v1, args->v2);; \
} while(0)
void glUniform3i(glUniform3i_ARG_EXPAND);
packed_call_t *pack_glUniform3i(glUniform3i_PACKED *_dst glUniform3i_ARG_EXPAND_TAIL);
typedef void (*glUniform3i_PTR)(glUniform3i_ARG_EXPAND);
#endif
#ifndef glUniform3iv_RETURN
#define glUniform3iv_RETURN void
#define glUniform3iv_ARG_NAMES location, count, value
#define glUniform3iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform3iv_ARG_NAMES_TAIL , location, count, value
#define glUniform3iv_ARG_EXPAND_TAIL , GLint location, GLsizei count, const GLint * value
#define forward_glUniform3iv(_location, _count, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform3iv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform3iv(dst, _location, _count, _value), NULL); \
    });
#define call_glUniform3iv(packed, ret_v) do { \
    glUniform3iv_PACKED *unpacked = (glUniform3iv_PACKED *)packed; \
    glUniform3iv_ARGS *args = (glUniform3iv_ARGS *)&unpacked->args; \
    glUniform3iv(args->location, args->count, args->value);; \
} while(0)
void glUniform3iv(glUniform3iv_ARG_EXPAND);
packed_call_t *pack_glUniform3iv(glUniform3iv_PACKED *_dst glUniform3iv_ARG_EXPAND_TAIL);
typedef void (*glUniform3iv_PTR)(glUniform3iv_ARG_EXPAND);
#endif
#ifndef glUniform4f_RETURN
#define glUniform4f_RETURN void
#define glUniform4f_ARG_NAMES location, v0, v1, v2, v3
#define glUniform4f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3
#define glUniform4f_ARG_NAMES_TAIL , location, v0, v1, v2, v3
#define glUniform4f_ARG_EXPAND_TAIL , GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3
#define forward_glUniform4f(_location, _v0, _v1, _v2, _v3) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform4f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform4f(dst, _location, _v0, _v1, _v2, _v3), NULL); \
    });
#define call_glUniform4f(packed, ret_v) do { \
    glUniform4f_PACKED *unpacked = (glUniform4f_PACKED *)packed; \
    glUniform4f_ARGS *args = (glUniform4f_ARGS *)&unpacked->args; \
    glUniform4f(args->location, args->v0, args->v1, args->v2, args->v3);; \
} while(0)
void glUniform4f(glUniform4f_ARG_EXPAND);
packed_call_t *pack_glUniform4f(glUniform4f_PACKED *_dst glUniform4f_ARG_EXPAND_TAIL);
typedef void (*glUniform4f_PTR)(glUniform4f_ARG_EXPAND);
#endif
#ifndef glUniform4fv_RETURN
#define glUniform4fv_RETURN void
#define glUniform4fv_ARG_NAMES location, count, value
#define glUniform4fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform4fv_ARG_NAMES_TAIL , location, count, value
#define glUniform4fv_ARG_EXPAND_TAIL , GLint location, GLsizei count, const GLfloat * value
#define forward_glUniform4fv(_location, _count, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform4fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform4fv(dst, _location, _count, _value), NULL); \
    });
#define call_glUniform4fv(packed, ret_v) do { \
    glUniform4fv_PACKED *unpacked = (glUniform4fv_PACKED *)packed; \
    glUniform4fv_ARGS *args = (glUniform4fv_ARGS *)&unpacked->args; \
    glUniform4fv(args->location, args->count, args->value);; \
} while(0)
void glUniform4fv(glUniform4fv_ARG_EXPAND);
packed_call_t *pack_glUniform4fv(glUniform4fv_PACKED *_dst glUniform4fv_ARG_EXPAND_TAIL);
typedef void (*glUniform4fv_PTR)(glUniform4fv_ARG_EXPAND);
#endif
#ifndef glUniform4i_RETURN
#define glUniform4i_RETURN void
#define glUniform4i_ARG_NAMES location, v0, v1, v2, v3
#define glUniform4i_ARG_EXPAND GLint location, GLint v0, GLint v1, GLint v2, GLint v3
#define glUniform4i_ARG_NAMES_TAIL , location, v0, v1, v2, v3
#define glUniform4i_ARG_EXPAND_TAIL , GLint location, GLint v0, GLint v1, GLint v2, GLint v3
#define forward_glUniform4i(_location, _v0, _v1, _v2, _v3) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform4i_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform4i(dst, _location, _v0, _v1, _v2, _v3), NULL); \
    });
#define call_glUniform4i(packed, ret_v) do { \
    glUniform4i_PACKED *unpacked = (glUniform4i_PACKED *)packed; \
    glUniform4i_ARGS *args = (glUniform4i_ARGS *)&unpacked->args; \
    glUniform4i(args->location, args->v0, args->v1, args->v2, args->v3);; \
} while(0)
void glUniform4i(glUniform4i_ARG_EXPAND);
packed_call_t *pack_glUniform4i(glUniform4i_PACKED *_dst glUniform4i_ARG_EXPAND_TAIL);
typedef void (*glUniform4i_PTR)(glUniform4i_ARG_EXPAND);
#endif
#ifndef glUniform4iv_RETURN
#define glUniform4iv_RETURN void
#define glUniform4iv_ARG_NAMES location, count, value
#define glUniform4iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform4iv_ARG_NAMES_TAIL , location, count, value
#define glUniform4iv_ARG_EXPAND_TAIL , GLint location, GLsizei count, const GLint * value
#define forward_glUniform4iv(_location, _count, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniform4iv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniform4iv(dst, _location, _count, _value), NULL); \
    });
#define call_glUniform4iv(packed, ret_v) do { \
    glUniform4iv_PACKED *unpacked = (glUniform4iv_PACKED *)packed; \
    glUniform4iv_ARGS *args = (glUniform4iv_ARGS *)&unpacked->args; \
    glUniform4iv(args->location, args->count, args->value);; \
} while(0)
void glUniform4iv(glUniform4iv_ARG_EXPAND);
packed_call_t *pack_glUniform4iv(glUniform4iv_PACKED *_dst glUniform4iv_ARG_EXPAND_TAIL);
typedef void (*glUniform4iv_PTR)(glUniform4iv_ARG_EXPAND);
#endif
#ifndef glUniformMatrix2fv_RETURN
#define glUniformMatrix2fv_RETURN void
#define glUniformMatrix2fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix2fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix2fv_ARG_NAMES_TAIL , location, count, transpose, value
#define glUniformMatrix2fv_ARG_EXPAND_TAIL , GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define forward_glUniformMatrix2fv(_location, _count, _transpose, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniformMatrix2fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniformMatrix2fv(dst, _location, _count, _transpose, _value), NULL); \
    });
#define call_glUniformMatrix2fv(packed, ret_v) do { \
    glUniformMatrix2fv_PACKED *unpacked = (glUniformMatrix2fv_PACKED *)packed; \
    glUniformMatrix2fv_ARGS *args = (glUniformMatrix2fv_ARGS *)&unpacked->args; \
    glUniformMatrix2fv(args->location, args->count, args->transpose, args->value);; \
} while(0)
void glUniformMatrix2fv(glUniformMatrix2fv_ARG_EXPAND);
packed_call_t *pack_glUniformMatrix2fv(glUniformMatrix2fv_PACKED *_dst glUniformMatrix2fv_ARG_EXPAND_TAIL);
typedef void (*glUniformMatrix2fv_PTR)(glUniformMatrix2fv_ARG_EXPAND);
#endif
#ifndef glUniformMatrix3fv_RETURN
#define glUniformMatrix3fv_RETURN void
#define glUniformMatrix3fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix3fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix3fv_ARG_NAMES_TAIL , location, count, transpose, value
#define glUniformMatrix3fv_ARG_EXPAND_TAIL , GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define forward_glUniformMatrix3fv(_location, _count, _transpose, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniformMatrix3fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniformMatrix3fv(dst, _location, _count, _transpose, _value), NULL); \
    });
#define call_glUniformMatrix3fv(packed, ret_v) do { \
    glUniformMatrix3fv_PACKED *unpacked = (glUniformMatrix3fv_PACKED *)packed; \
    glUniformMatrix3fv_ARGS *args = (glUniformMatrix3fv_ARGS *)&unpacked->args; \
    glUniformMatrix3fv(args->location, args->count, args->transpose, args->value);; \
} while(0)
void glUniformMatrix3fv(glUniformMatrix3fv_ARG_EXPAND);
packed_call_t *pack_glUniformMatrix3fv(glUniformMatrix3fv_PACKED *_dst glUniformMatrix3fv_ARG_EXPAND_TAIL);
typedef void (*glUniformMatrix3fv_PTR)(glUniformMatrix3fv_ARG_EXPAND);
#endif
#ifndef glUniformMatrix4fv_RETURN
#define glUniformMatrix4fv_RETURN void
#define glUniformMatrix4fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix4fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix4fv_ARG_NAMES_TAIL , location, count, transpose, value
#define glUniformMatrix4fv_ARG_EXPAND_TAIL , GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define forward_glUniformMatrix4fv(_location, _count, _transpose, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glUniformMatrix4fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUniformMatrix4fv(dst, _location, _count, _transpose, _value), NULL); \
    });
#define call_glUniformMatrix4fv(packed, ret_v) do { \
    glUniformMatrix4fv_PACKED *unpacked = (glUniformMatrix4fv_PACKED *)packed; \
    glUniformMatrix4fv_ARGS *args = (glUniformMatrix4fv_ARGS *)&unpacked->args; \
    glUniformMatrix4fv(args->location, args->count, args->transpose, args->value);; \
} while(0)
void glUniformMatrix4fv(glUniformMatrix4fv_ARG_EXPAND);
packed_call_t *pack_glUniformMatrix4fv(glUniformMatrix4fv_PACKED *_dst glUniformMatrix4fv_ARG_EXPAND_TAIL);
typedef void (*glUniformMatrix4fv_PTR)(glUniformMatrix4fv_ARG_EXPAND);
#endif
#ifndef glUseProgram_RETURN
#define glUseProgram_RETURN void
#define glUseProgram_ARG_NAMES program
#define glUseProgram_ARG_EXPAND GLuint program
#define glUseProgram_ARG_NAMES_TAIL , program
#define glUseProgram_ARG_EXPAND_TAIL , GLuint program
#define forward_glUseProgram(_program) \
    ({ \
        void *dst = remote_dma(sizeof(glUseProgram_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glUseProgram(dst, _program), NULL); \
    });
#define call_glUseProgram(packed, ret_v) do { \
    glUseProgram_PACKED *unpacked = (glUseProgram_PACKED *)packed; \
    glUseProgram_ARGS *args = (glUseProgram_ARGS *)&unpacked->args; \
    glUseProgram(args->program);; \
} while(0)
void glUseProgram(glUseProgram_ARG_EXPAND);
packed_call_t *pack_glUseProgram(glUseProgram_PACKED *_dst glUseProgram_ARG_EXPAND_TAIL);
typedef void (*glUseProgram_PTR)(glUseProgram_ARG_EXPAND);
#endif
#ifndef glValidateProgram_RETURN
#define glValidateProgram_RETURN void
#define glValidateProgram_ARG_NAMES program
#define glValidateProgram_ARG_EXPAND GLuint program
#define glValidateProgram_ARG_NAMES_TAIL , program
#define glValidateProgram_ARG_EXPAND_TAIL , GLuint program
#define forward_glValidateProgram(_program) \
    ({ \
        void *dst = remote_dma(sizeof(glValidateProgram_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glValidateProgram(dst, _program), NULL); \
    });
#define call_glValidateProgram(packed, ret_v) do { \
    glValidateProgram_PACKED *unpacked = (glValidateProgram_PACKED *)packed; \
    glValidateProgram_ARGS *args = (glValidateProgram_ARGS *)&unpacked->args; \
    glValidateProgram(args->program);; \
} while(0)
void glValidateProgram(glValidateProgram_ARG_EXPAND);
packed_call_t *pack_glValidateProgram(glValidateProgram_PACKED *_dst glValidateProgram_ARG_EXPAND_TAIL);
typedef void (*glValidateProgram_PTR)(glValidateProgram_ARG_EXPAND);
#endif
#ifndef glVertexAttrib1f_RETURN
#define glVertexAttrib1f_RETURN void
#define glVertexAttrib1f_ARG_NAMES index, x
#define glVertexAttrib1f_ARG_EXPAND GLuint index, GLfloat x
#define glVertexAttrib1f_ARG_NAMES_TAIL , index, x
#define glVertexAttrib1f_ARG_EXPAND_TAIL , GLuint index, GLfloat x
#define forward_glVertexAttrib1f(_index, _x) \
    ({ \
        void *dst = remote_dma(sizeof(glVertexAttrib1f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glVertexAttrib1f(dst, _index, _x), NULL); \
    });
#define call_glVertexAttrib1f(packed, ret_v) do { \
    glVertexAttrib1f_PACKED *unpacked = (glVertexAttrib1f_PACKED *)packed; \
    glVertexAttrib1f_ARGS *args = (glVertexAttrib1f_ARGS *)&unpacked->args; \
    glVertexAttrib1f(args->index, args->x);; \
} while(0)
void glVertexAttrib1f(glVertexAttrib1f_ARG_EXPAND);
packed_call_t *pack_glVertexAttrib1f(glVertexAttrib1f_PACKED *_dst glVertexAttrib1f_ARG_EXPAND_TAIL);
typedef void (*glVertexAttrib1f_PTR)(glVertexAttrib1f_ARG_EXPAND);
#endif
#ifndef glVertexAttrib1fv_RETURN
#define glVertexAttrib1fv_RETURN void
#define glVertexAttrib1fv_ARG_NAMES index, v
#define glVertexAttrib1fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib1fv_ARG_NAMES_TAIL , index, v
#define glVertexAttrib1fv_ARG_EXPAND_TAIL , GLuint index, const GLfloat * v
#define forward_glVertexAttrib1fv(_index, _v) \
    ({ \
        void *dst = remote_dma(sizeof(glVertexAttrib1fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glVertexAttrib1fv(dst, _index, _v), NULL); \
    });
#define call_glVertexAttrib1fv(packed, ret_v) do { \
    glVertexAttrib1fv_PACKED *unpacked = (glVertexAttrib1fv_PACKED *)packed; \
    glVertexAttrib1fv_ARGS *args = (glVertexAttrib1fv_ARGS *)&unpacked->args; \
    glVertexAttrib1fv(args->index, args->v);; \
} while(0)
void glVertexAttrib1fv(glVertexAttrib1fv_ARG_EXPAND);
packed_call_t *pack_glVertexAttrib1fv(glVertexAttrib1fv_PACKED *_dst glVertexAttrib1fv_ARG_EXPAND_TAIL);
typedef void (*glVertexAttrib1fv_PTR)(glVertexAttrib1fv_ARG_EXPAND);
#endif
#ifndef glVertexAttrib2f_RETURN
#define glVertexAttrib2f_RETURN void
#define glVertexAttrib2f_ARG_NAMES index, x, y
#define glVertexAttrib2f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y
#define glVertexAttrib2f_ARG_NAMES_TAIL , index, x, y
#define glVertexAttrib2f_ARG_EXPAND_TAIL , GLuint index, GLfloat x, GLfloat y
#define forward_glVertexAttrib2f(_index, _x, _y) \
    ({ \
        void *dst = remote_dma(sizeof(glVertexAttrib2f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glVertexAttrib2f(dst, _index, _x, _y), NULL); \
    });
#define call_glVertexAttrib2f(packed, ret_v) do { \
    glVertexAttrib2f_PACKED *unpacked = (glVertexAttrib2f_PACKED *)packed; \
    glVertexAttrib2f_ARGS *args = (glVertexAttrib2f_ARGS *)&unpacked->args; \
    glVertexAttrib2f(args->index, args->x, args->y);; \
} while(0)
void glVertexAttrib2f(glVertexAttrib2f_ARG_EXPAND);
packed_call_t *pack_glVertexAttrib2f(glVertexAttrib2f_PACKED *_dst glVertexAttrib2f_ARG_EXPAND_TAIL);
typedef void (*glVertexAttrib2f_PTR)(glVertexAttrib2f_ARG_EXPAND);
#endif
#ifndef glVertexAttrib2fv_RETURN
#define glVertexAttrib2fv_RETURN void
#define glVertexAttrib2fv_ARG_NAMES index, v
#define glVertexAttrib2fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib2fv_ARG_NAMES_TAIL , index, v
#define glVertexAttrib2fv_ARG_EXPAND_TAIL , GLuint index, const GLfloat * v
#define forward_glVertexAttrib2fv(_index, _v) \
    ({ \
        void *dst = remote_dma(sizeof(glVertexAttrib2fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glVertexAttrib2fv(dst, _index, _v), NULL); \
    });
#define call_glVertexAttrib2fv(packed, ret_v) do { \
    glVertexAttrib2fv_PACKED *unpacked = (glVertexAttrib2fv_PACKED *)packed; \
    glVertexAttrib2fv_ARGS *args = (glVertexAttrib2fv_ARGS *)&unpacked->args; \
    glVertexAttrib2fv(args->index, args->v);; \
} while(0)
void glVertexAttrib2fv(glVertexAttrib2fv_ARG_EXPAND);
packed_call_t *pack_glVertexAttrib2fv(glVertexAttrib2fv_PACKED *_dst glVertexAttrib2fv_ARG_EXPAND_TAIL);
typedef void (*glVertexAttrib2fv_PTR)(glVertexAttrib2fv_ARG_EXPAND);
#endif
#ifndef glVertexAttrib3f_RETURN
#define glVertexAttrib3f_RETURN void
#define glVertexAttrib3f_ARG_NAMES index, x, y, z
#define glVertexAttrib3f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y, GLfloat z
#define glVertexAttrib3f_ARG_NAMES_TAIL , index, x, y, z
#define glVertexAttrib3f_ARG_EXPAND_TAIL , GLuint index, GLfloat x, GLfloat y, GLfloat z
#define forward_glVertexAttrib3f(_index, _x, _y, _z) \
    ({ \
        void *dst = remote_dma(sizeof(glVertexAttrib3f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glVertexAttrib3f(dst, _index, _x, _y, _z), NULL); \
    });
#define call_glVertexAttrib3f(packed, ret_v) do { \
    glVertexAttrib3f_PACKED *unpacked = (glVertexAttrib3f_PACKED *)packed; \
    glVertexAttrib3f_ARGS *args = (glVertexAttrib3f_ARGS *)&unpacked->args; \
    glVertexAttrib3f(args->index, args->x, args->y, args->z);; \
} while(0)
void glVertexAttrib3f(glVertexAttrib3f_ARG_EXPAND);
packed_call_t *pack_glVertexAttrib3f(glVertexAttrib3f_PACKED *_dst glVertexAttrib3f_ARG_EXPAND_TAIL);
typedef void (*glVertexAttrib3f_PTR)(glVertexAttrib3f_ARG_EXPAND);
#endif
#ifndef glVertexAttrib3fv_RETURN
#define glVertexAttrib3fv_RETURN void
#define glVertexAttrib3fv_ARG_NAMES index, v
#define glVertexAttrib3fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib3fv_ARG_NAMES_TAIL , index, v
#define glVertexAttrib3fv_ARG_EXPAND_TAIL , GLuint index, const GLfloat * v
#define forward_glVertexAttrib3fv(_index, _v) \
    ({ \
        void *dst = remote_dma(sizeof(glVertexAttrib3fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glVertexAttrib3fv(dst, _index, _v), NULL); \
    });
#define call_glVertexAttrib3fv(packed, ret_v) do { \
    glVertexAttrib3fv_PACKED *unpacked = (glVertexAttrib3fv_PACKED *)packed; \
    glVertexAttrib3fv_ARGS *args = (glVertexAttrib3fv_ARGS *)&unpacked->args; \
    glVertexAttrib3fv(args->index, args->v);; \
} while(0)
void glVertexAttrib3fv(glVertexAttrib3fv_ARG_EXPAND);
packed_call_t *pack_glVertexAttrib3fv(glVertexAttrib3fv_PACKED *_dst glVertexAttrib3fv_ARG_EXPAND_TAIL);
typedef void (*glVertexAttrib3fv_PTR)(glVertexAttrib3fv_ARG_EXPAND);
#endif
#ifndef glVertexAttrib4f_RETURN
#define glVertexAttrib4f_RETURN void
#define glVertexAttrib4f_ARG_NAMES index, x, y, z, w
#define glVertexAttrib4f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w
#define glVertexAttrib4f_ARG_NAMES_TAIL , index, x, y, z, w
#define glVertexAttrib4f_ARG_EXPAND_TAIL , GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w
#define forward_glVertexAttrib4f(_index, _x, _y, _z, _w) \
    ({ \
        void *dst = remote_dma(sizeof(glVertexAttrib4f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glVertexAttrib4f(dst, _index, _x, _y, _z, _w), NULL); \
    });
#define call_glVertexAttrib4f(packed, ret_v) do { \
    glVertexAttrib4f_PACKED *unpacked = (glVertexAttrib4f_PACKED *)packed; \
    glVertexAttrib4f_ARGS *args = (glVertexAttrib4f_ARGS *)&unpacked->args; \
    glVertexAttrib4f(args->index, args->x, args->y, args->z, args->w);; \
} while(0)
void glVertexAttrib4f(glVertexAttrib4f_ARG_EXPAND);
packed_call_t *pack_glVertexAttrib4f(glVertexAttrib4f_PACKED *_dst glVertexAttrib4f_ARG_EXPAND_TAIL);
typedef void (*glVertexAttrib4f_PTR)(glVertexAttrib4f_ARG_EXPAND);
#endif
#ifndef glVertexAttrib4fv_RETURN
#define glVertexAttrib4fv_RETURN void
#define glVertexAttrib4fv_ARG_NAMES index, v
#define glVertexAttrib4fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib4fv_ARG_NAMES_TAIL , index, v
#define glVertexAttrib4fv_ARG_EXPAND_TAIL , GLuint index, const GLfloat * v
#define forward_glVertexAttrib4fv(_index, _v) \
    ({ \
        void *dst = remote_dma(sizeof(glVertexAttrib4fv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glVertexAttrib4fv(dst, _index, _v), NULL); \
    });
#define call_glVertexAttrib4fv(packed, ret_v) do { \
    glVertexAttrib4fv_PACKED *unpacked = (glVertexAttrib4fv_PACKED *)packed; \
    glVertexAttrib4fv_ARGS *args = (glVertexAttrib4fv_ARGS *)&unpacked->args; \
    glVertexAttrib4fv(args->index, args->v);; \
} while(0)
void glVertexAttrib4fv(glVertexAttrib4fv_ARG_EXPAND);
packed_call_t *pack_glVertexAttrib4fv(glVertexAttrib4fv_PACKED *_dst glVertexAttrib4fv_ARG_EXPAND_TAIL);
typedef void (*glVertexAttrib4fv_PTR)(glVertexAttrib4fv_ARG_EXPAND);
#endif
#ifndef glVertexAttribPointer_RETURN
#define glVertexAttribPointer_RETURN void
#define glVertexAttribPointer_ARG_NAMES index, size, type, normalized, stride, pointer
#define glVertexAttribPointer_ARG_EXPAND GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer
#define glVertexAttribPointer_ARG_NAMES_TAIL , index, size, type, normalized, stride, pointer
#define glVertexAttribPointer_ARG_EXPAND_TAIL , GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer
#define forward_glVertexAttribPointer(_index, _size, _type, _normalized, _stride, _pointer) \
    ({ \
        void *dst = remote_dma(sizeof(glVertexAttribPointer_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glVertexAttribPointer(dst, _index, _size, _type, _normalized, _stride, _pointer), NULL); \
    });
#define call_glVertexAttribPointer(packed, ret_v) do { \
    glVertexAttribPointer_PACKED *unpacked = (glVertexAttribPointer_PACKED *)packed; \
    glVertexAttribPointer_ARGS *args = (glVertexAttribPointer_ARGS *)&unpacked->args; \
    glVertexAttribPointer(args->index, args->size, args->type, args->normalized, args->stride, args->pointer);; \
} while(0)
void glVertexAttribPointer(glVertexAttribPointer_ARG_EXPAND);
packed_call_t *pack_glVertexAttribPointer(glVertexAttribPointer_PACKED *_dst glVertexAttribPointer_ARG_EXPAND_TAIL);
typedef void (*glVertexAttribPointer_PTR)(glVertexAttribPointer_ARG_EXPAND);
#endif
#ifndef glViewport_RETURN
#define glViewport_RETURN void
#define glViewport_ARG_NAMES x, y, width, height
#define glViewport_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glViewport_ARG_NAMES_TAIL , x, y, width, height
#define glViewport_ARG_EXPAND_TAIL , GLint x, GLint y, GLsizei width, GLsizei height
#define forward_glViewport(_x, _y, _width, _height) \
    ({ \
        void *dst = remote_dma(sizeof(glViewport_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glViewport(dst, _x, _y, _width, _height), NULL); \
    });
#define call_glViewport(packed, ret_v) do { \
    glViewport_PACKED *unpacked = (glViewport_PACKED *)packed; \
    glViewport_ARGS *args = (glViewport_ARGS *)&unpacked->args; \
    glViewport(args->x, args->y, args->width, args->height);; \
} while(0)
void glViewport(glViewport_ARG_EXPAND);
packed_call_t *pack_glViewport(glViewport_PACKED *_dst glViewport_ARG_EXPAND_TAIL);
typedef void (*glViewport_PTR)(glViewport_ARG_EXPAND);
#endif

#endif

#ifdef USE_ES2

#ifndef GLES2WRAP_H
#define GLES2WRAP_H

typedef struct {
    GLenum texture;
} ARGS_glActiveTexture;
typedef struct {
    int index;
    ARGS_glActiveTexture args;
} PACKED_glActiveTexture;
typedef struct {
    GLuint program;
    GLuint shader;
} ARGS_glAttachShader;
typedef struct {
    int index;
    ARGS_glAttachShader args;
} PACKED_glAttachShader;
typedef struct {
    GLuint program;
    GLuint index;
    GLchar * name;
} ARGS_glBindAttribLocation;
typedef struct {
    int index;
    ARGS_glBindAttribLocation args;
} PACKED_glBindAttribLocation;
typedef struct {
    GLenum target;
    GLuint buffer;
} ARGS_glBindBuffer;
typedef struct {
    int index;
    ARGS_glBindBuffer args;
} PACKED_glBindBuffer;
typedef struct {
    GLenum target;
    GLuint framebuffer;
} ARGS_glBindFramebuffer;
typedef struct {
    int index;
    ARGS_glBindFramebuffer args;
} PACKED_glBindFramebuffer;
typedef struct {
    GLenum target;
    GLuint renderbuffer;
} ARGS_glBindRenderbuffer;
typedef struct {
    int index;
    ARGS_glBindRenderbuffer args;
} PACKED_glBindRenderbuffer;
typedef struct {
    GLenum target;
    GLuint texture;
} ARGS_glBindTexture;
typedef struct {
    int index;
    ARGS_glBindTexture args;
} PACKED_glBindTexture;
typedef struct {
    GLclampf red;
    GLclampf green;
    GLclampf blue;
    GLclampf alpha;
} ARGS_glBlendColor;
typedef struct {
    int index;
    ARGS_glBlendColor args;
} PACKED_glBlendColor;
typedef struct {
    GLenum mode;
} ARGS_glBlendEquation;
typedef struct {
    int index;
    ARGS_glBlendEquation args;
} PACKED_glBlendEquation;
typedef struct {
    GLenum modeRGB;
    GLenum modeA;
} ARGS_glBlendEquationSeparate;
typedef struct {
    int index;
    ARGS_glBlendEquationSeparate args;
} PACKED_glBlendEquationSeparate;
typedef struct {
    GLenum sfactor;
    GLenum dfactor;
} ARGS_glBlendFunc;
typedef struct {
    int index;
    ARGS_glBlendFunc args;
} PACKED_glBlendFunc;
typedef struct {
    GLenum sfactorRGB;
    GLenum dfactorRGB;
    GLenum sfactorAlpha;
    GLenum dfactorAlpha;
} ARGS_glBlendFuncSeparate;
typedef struct {
    int index;
    ARGS_glBlendFuncSeparate args;
} PACKED_glBlendFuncSeparate;
typedef struct {
    GLenum target;
    GLsizeiptr size;
    GLvoid * data;
    GLenum usage;
} ARGS_glBufferData;
typedef struct {
    int index;
    ARGS_glBufferData args;
} PACKED_glBufferData;
typedef struct {
    GLenum target;
    GLintptr offset;
    GLsizeiptr size;
    GLvoid * data;
} ARGS_glBufferSubData;
typedef struct {
    int index;
    ARGS_glBufferSubData args;
} PACKED_glBufferSubData;
typedef struct {
    GLenum target;
} ARGS_glCheckFramebufferStatus;
typedef struct {
    int index;
    ARGS_glCheckFramebufferStatus args;
} PACKED_glCheckFramebufferStatus;
typedef struct {
    GLbitfield mask;
} ARGS_glClear;
typedef struct {
    int index;
    ARGS_glClear args;
} PACKED_glClear;
typedef struct {
    GLclampf red;
    GLclampf green;
    GLclampf blue;
    GLclampf alpha;
} ARGS_glClearColor;
typedef struct {
    int index;
    ARGS_glClearColor args;
} PACKED_glClearColor;
typedef struct {
    GLclampf depth;
} ARGS_glClearDepthf;
typedef struct {
    int index;
    ARGS_glClearDepthf args;
} PACKED_glClearDepthf;
typedef struct {
    GLint s;
} ARGS_glClearStencil;
typedef struct {
    int index;
    ARGS_glClearStencil args;
} PACKED_glClearStencil;
typedef struct {
    GLboolean red;
    GLboolean green;
    GLboolean blue;
    GLboolean alpha;
} ARGS_glColorMask;
typedef struct {
    int index;
    ARGS_glColorMask args;
} PACKED_glColorMask;
typedef struct {
    GLuint shader;
} ARGS_glCompileShader;
typedef struct {
    int index;
    ARGS_glCompileShader args;
} PACKED_glCompileShader;
typedef struct {
    GLenum target;
    GLint level;
    GLenum internalformat;
    GLsizei width;
    GLsizei height;
    GLint border;
    GLsizei imageSize;
    GLvoid * data;
} ARGS_glCompressedTexImage2D;
typedef struct {
    int index;
    ARGS_glCompressedTexImage2D args;
} PACKED_glCompressedTexImage2D;
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
} ARGS_glCompressedTexSubImage2D;
typedef struct {
    int index;
    ARGS_glCompressedTexSubImage2D args;
} PACKED_glCompressedTexSubImage2D;
typedef struct {
    GLenum target;
    GLint level;
    GLenum internalformat;
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
    GLint border;
} ARGS_glCopyTexImage2D;
typedef struct {
    int index;
    ARGS_glCopyTexImage2D args;
} PACKED_glCopyTexImage2D;
typedef struct {
    GLenum target;
    GLint level;
    GLint xoffset;
    GLint yoffset;
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
} ARGS_glCopyTexSubImage2D;
typedef struct {
    int index;
    ARGS_glCopyTexSubImage2D args;
} PACKED_glCopyTexSubImage2D;
typedef struct {
    int index;
} PACKED_glCreateProgram;
typedef struct {
    GLenum type;
} ARGS_glCreateShader;
typedef struct {
    int index;
    ARGS_glCreateShader args;
} PACKED_glCreateShader;
typedef struct {
    GLenum mode;
} ARGS_glCullFace;
typedef struct {
    int index;
    ARGS_glCullFace args;
} PACKED_glCullFace;
typedef struct {
    GLsizei n;
    GLuint * buffer;
} ARGS_glDeleteBuffers;
typedef struct {
    int index;
    ARGS_glDeleteBuffers args;
} PACKED_glDeleteBuffers;
typedef struct {
    GLsizei n;
    GLuint * framebuffers;
} ARGS_glDeleteFramebuffers;
typedef struct {
    int index;
    ARGS_glDeleteFramebuffers args;
} PACKED_glDeleteFramebuffers;
typedef struct {
    GLuint program;
} ARGS_glDeleteProgram;
typedef struct {
    int index;
    ARGS_glDeleteProgram args;
} PACKED_glDeleteProgram;
typedef struct {
    GLsizei n;
    GLuint * renderbuffers;
} ARGS_glDeleteRenderbuffers;
typedef struct {
    int index;
    ARGS_glDeleteRenderbuffers args;
} PACKED_glDeleteRenderbuffers;
typedef struct {
    GLuint program;
} ARGS_glDeleteShader;
typedef struct {
    int index;
    ARGS_glDeleteShader args;
} PACKED_glDeleteShader;
typedef struct {
    GLsizei n;
    GLuint * textures;
} ARGS_glDeleteTextures;
typedef struct {
    int index;
    ARGS_glDeleteTextures args;
} PACKED_glDeleteTextures;
typedef struct {
    GLenum func;
} ARGS_glDepthFunc;
typedef struct {
    int index;
    ARGS_glDepthFunc args;
} PACKED_glDepthFunc;
typedef struct {
    GLboolean flag;
} ARGS_glDepthMask;
typedef struct {
    int index;
    ARGS_glDepthMask args;
} PACKED_glDepthMask;
typedef struct {
    GLclampf near;
    GLclampf far;
} ARGS_glDepthRangef;
typedef struct {
    int index;
    ARGS_glDepthRangef args;
} PACKED_glDepthRangef;
typedef struct {
    GLuint program;
    GLuint shader;
} ARGS_glDetachShader;
typedef struct {
    int index;
    ARGS_glDetachShader args;
} PACKED_glDetachShader;
typedef struct {
    GLenum cap;
} ARGS_glDisable;
typedef struct {
    int index;
    ARGS_glDisable args;
} PACKED_glDisable;
typedef struct {
    GLuint index;
} ARGS_glDisableVertexAttribArray;
typedef struct {
    int index;
    ARGS_glDisableVertexAttribArray args;
} PACKED_glDisableVertexAttribArray;
typedef struct {
    GLenum mode;
    GLint first;
    GLsizei count;
} ARGS_glDrawArrays;
typedef struct {
    int index;
    ARGS_glDrawArrays args;
} PACKED_glDrawArrays;
typedef struct {
    GLenum mode;
    GLsizei count;
    GLenum type;
    GLvoid * indices;
} ARGS_glDrawElements;
typedef struct {
    int index;
    ARGS_glDrawElements args;
} PACKED_glDrawElements;
typedef struct {
    GLenum cap;
} ARGS_glEnable;
typedef struct {
    int index;
    ARGS_glEnable args;
} PACKED_glEnable;
typedef struct {
    GLuint index;
} ARGS_glEnableVertexAttribArray;
typedef struct {
    int index;
    ARGS_glEnableVertexAttribArray args;
} PACKED_glEnableVertexAttribArray;
typedef struct {
    int index;
} PACKED_glFinish;
typedef struct {
    int index;
} PACKED_glFlush;
typedef struct {
    GLenum target;
    GLenum attachment;
    GLenum renderbuffertarget;
    GLuint renderbuffer;
} ARGS_glFramebufferRenderbuffer;
typedef struct {
    int index;
    ARGS_glFramebufferRenderbuffer args;
} PACKED_glFramebufferRenderbuffer;
typedef struct {
    GLenum target;
    GLenum attachment;
    GLenum textarget;
    GLuint texture;
    GLint level;
} ARGS_glFramebufferTexture2D;
typedef struct {
    int index;
    ARGS_glFramebufferTexture2D args;
} PACKED_glFramebufferTexture2D;
typedef struct {
    GLenum mode;
} ARGS_glFrontFace;
typedef struct {
    int index;
    ARGS_glFrontFace args;
} PACKED_glFrontFace;
typedef struct {
    GLsizei n;
    GLuint * buffer;
} ARGS_glGenBuffers;
typedef struct {
    int index;
    ARGS_glGenBuffers args;
} PACKED_glGenBuffers;
typedef struct {
    GLsizei n;
    GLuint * framebuffers;
} ARGS_glGenFramebuffers;
typedef struct {
    int index;
    ARGS_glGenFramebuffers args;
} PACKED_glGenFramebuffers;
typedef struct {
    GLsizei n;
    GLuint * renderbuffers;
} ARGS_glGenRenderbuffers;
typedef struct {
    int index;
    ARGS_glGenRenderbuffers args;
} PACKED_glGenRenderbuffers;
typedef struct {
    GLsizei n;
    GLuint * textures;
} ARGS_glGenTextures;
typedef struct {
    int index;
    ARGS_glGenTextures args;
} PACKED_glGenTextures;
typedef struct {
    GLenum target;
} ARGS_glGenerateMipmap;
typedef struct {
    int index;
    ARGS_glGenerateMipmap args;
} PACKED_glGenerateMipmap;
typedef struct {
    GLuint program;
    GLuint index;
    GLsizei bufSize;
    GLsizei * length;
    GLint * size;
    GLenum * type;
    GLchar * name;
} ARGS_glGetActiveAttrib;
typedef struct {
    int index;
    ARGS_glGetActiveAttrib args;
} PACKED_glGetActiveAttrib;
typedef struct {
    GLuint program;
    GLuint index;
    GLsizei bufSize;
    GLsizei * length;
    GLint * size;
    GLenum * type;
    GLchar * name;
} ARGS_glGetActiveUniform;
typedef struct {
    int index;
    ARGS_glGetActiveUniform args;
} PACKED_glGetActiveUniform;
typedef struct {
    GLuint program;
    GLsizei maxCount;
    GLsizei * count;
    GLuint * obj;
} ARGS_glGetAttachedShaders;
typedef struct {
    int index;
    ARGS_glGetAttachedShaders args;
} PACKED_glGetAttachedShaders;
typedef struct {
    GLuint program;
    GLchar * name;
} ARGS_glGetAttribLocation;
typedef struct {
    int index;
    ARGS_glGetAttribLocation args;
} PACKED_glGetAttribLocation;
typedef struct {
    GLenum pname;
    GLboolean * params;
} ARGS_glGetBooleanv;
typedef struct {
    int index;
    ARGS_glGetBooleanv args;
} PACKED_glGetBooleanv;
typedef struct {
    GLenum target;
    GLenum pname;
    GLint * params;
} ARGS_glGetBufferParameteriv;
typedef struct {
    int index;
    ARGS_glGetBufferParameteriv args;
} PACKED_glGetBufferParameteriv;
typedef struct {
    int index;
} PACKED_glGetError;
typedef struct {
    GLenum pname;
    GLfloat * params;
} ARGS_glGetFloatv;
typedef struct {
    int index;
    ARGS_glGetFloatv args;
} PACKED_glGetFloatv;
typedef struct {
    GLenum target;
    GLenum attachment;
    GLenum pname;
    GLint * params;
} ARGS_glGetFramebufferAttachmentParameteriv;
typedef struct {
    int index;
    ARGS_glGetFramebufferAttachmentParameteriv args;
} PACKED_glGetFramebufferAttachmentParameteriv;
typedef struct {
    GLenum pname;
    GLint * params;
} ARGS_glGetIntegerv;
typedef struct {
    int index;
    ARGS_glGetIntegerv args;
} PACKED_glGetIntegerv;
typedef struct {
    GLuint program;
    GLsizei bufSize;
    GLsizei * length;
    GLchar * infoLog;
} ARGS_glGetProgramInfoLog;
typedef struct {
    int index;
    ARGS_glGetProgramInfoLog args;
} PACKED_glGetProgramInfoLog;
typedef struct {
    GLuint program;
    GLenum pname;
    GLint * params;
} ARGS_glGetProgramiv;
typedef struct {
    int index;
    ARGS_glGetProgramiv args;
} PACKED_glGetProgramiv;
typedef struct {
    GLenum target;
    GLenum pname;
    GLint * params;
} ARGS_glGetRenderbufferParameteriv;
typedef struct {
    int index;
    ARGS_glGetRenderbufferParameteriv args;
} PACKED_glGetRenderbufferParameteriv;
typedef struct {
    GLuint shader;
    GLsizei bufSize;
    GLsizei * length;
    GLchar * infoLog;
} ARGS_glGetShaderInfoLog;
typedef struct {
    int index;
    ARGS_glGetShaderInfoLog args;
} PACKED_glGetShaderInfoLog;
typedef struct {
    GLenum shadertype;
    GLenum precisiontype;
    GLint * range;
    GLint * precision;
} ARGS_glGetShaderPrecisionFormat;
typedef struct {
    int index;
    ARGS_glGetShaderPrecisionFormat args;
} PACKED_glGetShaderPrecisionFormat;
typedef struct {
    GLuint shader;
    GLsizei bufSize;
    GLsizei * length;
    GLchar * source;
} ARGS_glGetShaderSource;
typedef struct {
    int index;
    ARGS_glGetShaderSource args;
} PACKED_glGetShaderSource;
typedef struct {
    GLuint shader;
    GLenum pname;
    GLint * params;
} ARGS_glGetShaderiv;
typedef struct {
    int index;
    ARGS_glGetShaderiv args;
} PACKED_glGetShaderiv;
typedef struct {
    GLenum name;
} ARGS_glGetString;
typedef struct {
    int index;
    ARGS_glGetString args;
} PACKED_glGetString;
typedef struct {
    GLenum target;
    GLenum pname;
    GLfloat * params;
} ARGS_glGetTexParameterfv;
typedef struct {
    int index;
    ARGS_glGetTexParameterfv args;
} PACKED_glGetTexParameterfv;
typedef struct {
    GLenum target;
    GLenum pname;
    GLint * params;
} ARGS_glGetTexParameteriv;
typedef struct {
    int index;
    ARGS_glGetTexParameteriv args;
} PACKED_glGetTexParameteriv;
typedef struct {
    GLuint program;
    GLchar * name;
} ARGS_glGetUniformLocation;
typedef struct {
    int index;
    ARGS_glGetUniformLocation args;
} PACKED_glGetUniformLocation;
typedef struct {
    GLuint program;
    GLint location;
    GLfloat * params;
} ARGS_glGetUniformfv;
typedef struct {
    int index;
    ARGS_glGetUniformfv args;
} PACKED_glGetUniformfv;
typedef struct {
    GLuint program;
    GLint location;
    GLint * params;
} ARGS_glGetUniformiv;
typedef struct {
    int index;
    ARGS_glGetUniformiv args;
} PACKED_glGetUniformiv;
typedef struct {
    GLuint index;
    GLenum pname;
    GLvoid ** pointer;
} ARGS_glGetVertexAttribPointerv;
typedef struct {
    int index;
    ARGS_glGetVertexAttribPointerv args;
} PACKED_glGetVertexAttribPointerv;
typedef struct {
    GLuint index;
    GLenum pname;
    GLfloat * params;
} ARGS_glGetVertexAttribfv;
typedef struct {
    int index;
    ARGS_glGetVertexAttribfv args;
} PACKED_glGetVertexAttribfv;
typedef struct {
    GLuint index;
    GLenum pname;
    GLint * params;
} ARGS_glGetVertexAttribiv;
typedef struct {
    int index;
    ARGS_glGetVertexAttribiv args;
} PACKED_glGetVertexAttribiv;
typedef struct {
    GLenum target;
    GLenum mode;
} ARGS_glHint;
typedef struct {
    int index;
    ARGS_glHint args;
} PACKED_glHint;
typedef struct {
    GLuint buffer;
} ARGS_glIsBuffer;
typedef struct {
    int index;
    ARGS_glIsBuffer args;
} PACKED_glIsBuffer;
typedef struct {
    GLenum cap;
} ARGS_glIsEnabled;
typedef struct {
    int index;
    ARGS_glIsEnabled args;
} PACKED_glIsEnabled;
typedef struct {
    GLuint framebuffer;
} ARGS_glIsFramebuffer;
typedef struct {
    int index;
    ARGS_glIsFramebuffer args;
} PACKED_glIsFramebuffer;
typedef struct {
    GLuint program;
} ARGS_glIsProgram;
typedef struct {
    int index;
    ARGS_glIsProgram args;
} PACKED_glIsProgram;
typedef struct {
    GLuint renderbuffer;
} ARGS_glIsRenderbuffer;
typedef struct {
    int index;
    ARGS_glIsRenderbuffer args;
} PACKED_glIsRenderbuffer;
typedef struct {
    GLuint shader;
} ARGS_glIsShader;
typedef struct {
    int index;
    ARGS_glIsShader args;
} PACKED_glIsShader;
typedef struct {
    GLuint texture;
} ARGS_glIsTexture;
typedef struct {
    int index;
    ARGS_glIsTexture args;
} PACKED_glIsTexture;
typedef struct {
    GLfloat width;
} ARGS_glLineWidth;
typedef struct {
    int index;
    ARGS_glLineWidth args;
} PACKED_glLineWidth;
typedef struct {
    GLuint program;
} ARGS_glLinkProgram;
typedef struct {
    int index;
    ARGS_glLinkProgram args;
} PACKED_glLinkProgram;
typedef struct {
    GLenum pname;
    GLint param;
} ARGS_glPixelStorei;
typedef struct {
    int index;
    ARGS_glPixelStorei args;
} PACKED_glPixelStorei;
typedef struct {
    GLfloat factor;
    GLfloat units;
} ARGS_glPolygonOffset;
typedef struct {
    int index;
    ARGS_glPolygonOffset args;
} PACKED_glPolygonOffset;
typedef struct {
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
    GLenum format;
    GLenum type;
    GLvoid * pixels;
} ARGS_glReadPixels;
typedef struct {
    int index;
    ARGS_glReadPixels args;
} PACKED_glReadPixels;
typedef struct {
    int index;
} PACKED_glReleaseShaderCompiler;
typedef struct {
    GLenum target;
    GLenum internalformat;
    GLsizei width;
    GLsizei height;
} ARGS_glRenderbufferStorage;
typedef struct {
    int index;
    ARGS_glRenderbufferStorage args;
} PACKED_glRenderbufferStorage;
typedef struct {
    GLclampf value;
    GLboolean invert;
} ARGS_glSampleCoverage;
typedef struct {
    int index;
    ARGS_glSampleCoverage args;
} PACKED_glSampleCoverage;
typedef struct {
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
} ARGS_glScissor;
typedef struct {
    int index;
    ARGS_glScissor args;
} PACKED_glScissor;
typedef struct {
    GLsizei n;
    GLuint * shaders;
    GLenum binaryformat;
    GLvoid * binary;
    GLsizei length;
} ARGS_glShaderBinary;
typedef struct {
    int index;
    ARGS_glShaderBinary args;
} PACKED_glShaderBinary;
typedef struct {
    GLuint shader;
    GLsizei count;
    GLchar * * string;
    GLint * length;
} ARGS_glShaderSource;
typedef struct {
    int index;
    ARGS_glShaderSource args;
} PACKED_glShaderSource;
typedef struct {
    GLenum func;
    GLint ref;
    GLuint mask;
} ARGS_glStencilFunc;
typedef struct {
    int index;
    ARGS_glStencilFunc args;
} PACKED_glStencilFunc;
typedef struct {
    GLenum face;
    GLenum func;
    GLint ref;
    GLuint mask;
} ARGS_glStencilFuncSeparate;
typedef struct {
    int index;
    ARGS_glStencilFuncSeparate args;
} PACKED_glStencilFuncSeparate;
typedef struct {
    GLuint mask;
} ARGS_glStencilMask;
typedef struct {
    int index;
    ARGS_glStencilMask args;
} PACKED_glStencilMask;
typedef struct {
    GLenum face;
    GLuint mask;
} ARGS_glStencilMaskSeparate;
typedef struct {
    int index;
    ARGS_glStencilMaskSeparate args;
} PACKED_glStencilMaskSeparate;
typedef struct {
    GLenum fail;
    GLenum zfail;
    GLenum zpass;
} ARGS_glStencilOp;
typedef struct {
    int index;
    ARGS_glStencilOp args;
} PACKED_glStencilOp;
typedef struct {
    GLenum face;
    GLenum sfail;
    GLenum zfail;
    GLenum zpass;
} ARGS_glStencilOpSeparate;
typedef struct {
    int index;
    ARGS_glStencilOpSeparate args;
} PACKED_glStencilOpSeparate;
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
} ARGS_glTexImage2D;
typedef struct {
    int index;
    ARGS_glTexImage2D args;
} PACKED_glTexImage2D;
typedef struct {
    GLenum target;
    GLenum pname;
    GLfloat param;
} ARGS_glTexParameterf;
typedef struct {
    int index;
    ARGS_glTexParameterf args;
} PACKED_glTexParameterf;
typedef struct {
    GLenum target;
    GLenum pname;
    GLfloat * params;
} ARGS_glTexParameterfv;
typedef struct {
    int index;
    ARGS_glTexParameterfv args;
} PACKED_glTexParameterfv;
typedef struct {
    GLenum target;
    GLenum pname;
    GLint param;
} ARGS_glTexParameteri;
typedef struct {
    int index;
    ARGS_glTexParameteri args;
} PACKED_glTexParameteri;
typedef struct {
    GLenum target;
    GLenum pname;
    GLint * params;
} ARGS_glTexParameteriv;
typedef struct {
    int index;
    ARGS_glTexParameteriv args;
} PACKED_glTexParameteriv;
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
} ARGS_glTexSubImage2D;
typedef struct {
    int index;
    ARGS_glTexSubImage2D args;
} PACKED_glTexSubImage2D;
typedef struct {
    GLint location;
    GLfloat v0;
} ARGS_glUniform1f;
typedef struct {
    int index;
    ARGS_glUniform1f args;
} PACKED_glUniform1f;
typedef struct {
    GLint location;
    GLsizei count;
    GLfloat * value;
} ARGS_glUniform1fv;
typedef struct {
    int index;
    ARGS_glUniform1fv args;
} PACKED_glUniform1fv;
typedef struct {
    GLint location;
    GLint v0;
} ARGS_glUniform1i;
typedef struct {
    int index;
    ARGS_glUniform1i args;
} PACKED_glUniform1i;
typedef struct {
    GLint location;
    GLsizei count;
    GLint * value;
} ARGS_glUniform1iv;
typedef struct {
    int index;
    ARGS_glUniform1iv args;
} PACKED_glUniform1iv;
typedef struct {
    GLint location;
    GLfloat v0;
    GLfloat v1;
} ARGS_glUniform2f;
typedef struct {
    int index;
    ARGS_glUniform2f args;
} PACKED_glUniform2f;
typedef struct {
    GLint location;
    GLsizei count;
    GLfloat * value;
} ARGS_glUniform2fv;
typedef struct {
    int index;
    ARGS_glUniform2fv args;
} PACKED_glUniform2fv;
typedef struct {
    GLint location;
    GLint v0;
    GLint v1;
} ARGS_glUniform2i;
typedef struct {
    int index;
    ARGS_glUniform2i args;
} PACKED_glUniform2i;
typedef struct {
    GLint location;
    GLsizei count;
    GLint * value;
} ARGS_glUniform2iv;
typedef struct {
    int index;
    ARGS_glUniform2iv args;
} PACKED_glUniform2iv;
typedef struct {
    GLint location;
    GLfloat v0;
    GLfloat v1;
    GLfloat v2;
} ARGS_glUniform3f;
typedef struct {
    int index;
    ARGS_glUniform3f args;
} PACKED_glUniform3f;
typedef struct {
    GLint location;
    GLsizei count;
    GLfloat * value;
} ARGS_glUniform3fv;
typedef struct {
    int index;
    ARGS_glUniform3fv args;
} PACKED_glUniform3fv;
typedef struct {
    GLint location;
    GLint v0;
    GLint v1;
    GLint v2;
} ARGS_glUniform3i;
typedef struct {
    int index;
    ARGS_glUniform3i args;
} PACKED_glUniform3i;
typedef struct {
    GLint location;
    GLsizei count;
    GLint * value;
} ARGS_glUniform3iv;
typedef struct {
    int index;
    ARGS_glUniform3iv args;
} PACKED_glUniform3iv;
typedef struct {
    GLint location;
    GLfloat v0;
    GLfloat v1;
    GLfloat v2;
    GLfloat v3;
} ARGS_glUniform4f;
typedef struct {
    int index;
    ARGS_glUniform4f args;
} PACKED_glUniform4f;
typedef struct {
    GLint location;
    GLsizei count;
    GLfloat * value;
} ARGS_glUniform4fv;
typedef struct {
    int index;
    ARGS_glUniform4fv args;
} PACKED_glUniform4fv;
typedef struct {
    GLint location;
    GLint v0;
    GLint v1;
    GLint v2;
    GLint v3;
} ARGS_glUniform4i;
typedef struct {
    int index;
    ARGS_glUniform4i args;
} PACKED_glUniform4i;
typedef struct {
    GLint location;
    GLsizei count;
    GLint * value;
} ARGS_glUniform4iv;
typedef struct {
    int index;
    ARGS_glUniform4iv args;
} PACKED_glUniform4iv;
typedef struct {
    GLint location;
    GLsizei count;
    GLboolean transpose;
    GLfloat * value;
} ARGS_glUniformMatrix2fv;
typedef struct {
    int index;
    ARGS_glUniformMatrix2fv args;
} PACKED_glUniformMatrix2fv;
typedef struct {
    GLint location;
    GLsizei count;
    GLboolean transpose;
    GLfloat * value;
} ARGS_glUniformMatrix3fv;
typedef struct {
    int index;
    ARGS_glUniformMatrix3fv args;
} PACKED_glUniformMatrix3fv;
typedef struct {
    GLint location;
    GLsizei count;
    GLboolean transpose;
    GLfloat * value;
} ARGS_glUniformMatrix4fv;
typedef struct {
    int index;
    ARGS_glUniformMatrix4fv args;
} PACKED_glUniformMatrix4fv;
typedef struct {
    GLuint program;
} ARGS_glUseProgram;
typedef struct {
    int index;
    ARGS_glUseProgram args;
} PACKED_glUseProgram;
typedef struct {
    GLuint program;
} ARGS_glValidateProgram;
typedef struct {
    int index;
    ARGS_glValidateProgram args;
} PACKED_glValidateProgram;
typedef struct {
    GLuint index;
    GLfloat x;
} ARGS_glVertexAttrib1f;
typedef struct {
    int index;
    ARGS_glVertexAttrib1f args;
} PACKED_glVertexAttrib1f;
typedef struct {
    GLuint index;
    GLfloat * v;
} ARGS_glVertexAttrib1fv;
typedef struct {
    int index;
    ARGS_glVertexAttrib1fv args;
} PACKED_glVertexAttrib1fv;
typedef struct {
    GLuint index;
    GLfloat x;
    GLfloat y;
} ARGS_glVertexAttrib2f;
typedef struct {
    int index;
    ARGS_glVertexAttrib2f args;
} PACKED_glVertexAttrib2f;
typedef struct {
    GLuint index;
    GLfloat * v;
} ARGS_glVertexAttrib2fv;
typedef struct {
    int index;
    ARGS_glVertexAttrib2fv args;
} PACKED_glVertexAttrib2fv;
typedef struct {
    GLuint index;
    GLfloat x;
    GLfloat y;
    GLfloat z;
} ARGS_glVertexAttrib3f;
typedef struct {
    int index;
    ARGS_glVertexAttrib3f args;
} PACKED_glVertexAttrib3f;
typedef struct {
    GLuint index;
    GLfloat * v;
} ARGS_glVertexAttrib3fv;
typedef struct {
    int index;
    ARGS_glVertexAttrib3fv args;
} PACKED_glVertexAttrib3fv;
typedef struct {
    GLuint index;
    GLfloat x;
    GLfloat y;
    GLfloat z;
    GLfloat w;
} ARGS_glVertexAttrib4f;
typedef struct {
    int index;
    ARGS_glVertexAttrib4f args;
} PACKED_glVertexAttrib4f;
typedef struct {
    GLuint index;
    GLfloat * v;
} ARGS_glVertexAttrib4fv;
typedef struct {
    int index;
    ARGS_glVertexAttrib4fv args;
} PACKED_glVertexAttrib4fv;
typedef struct {
    GLuint index;
    GLint size;
    GLenum type;
    GLboolean normalized;
    GLsizei stride;
    GLvoid * pointer;
} ARGS_glVertexAttribPointer;
typedef struct {
    int index;
    ARGS_glVertexAttribPointer args;
} PACKED_glVertexAttribPointer;
typedef struct {
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
} ARGS_glViewport;
typedef struct {
    int index;
    ARGS_glViewport args;
} PACKED_glViewport;

extern const int INDEX_RET_SIZE[];
extern const int INDEX_PACKED_SIZE[];
extern const char *INDEX_NAME[];
extern void glPushCall(void *data);
void glIndexedCall(const packed_call_t *packed, void *ret_v);
void glIndexedPrint(const packed_call_t *packed);

#define glActiveTexture_INDEX 1
#define glActiveTexture_RETURN void
#define glActiveTexture_ARG_NAMES texture
#define glActiveTexture_ARG_EXPAND GLenum texture
#define glActiveTexture_PACKED PACKED_glActiveTexture
#define glActiveTexture_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glActiveTexture_NOT_VOID_WRAP(...) {}
#define glAttachShader_INDEX 2
#define glAttachShader_RETURN void
#define glAttachShader_ARG_NAMES program, shader
#define glAttachShader_ARG_EXPAND GLuint program, GLuint shader
#define glAttachShader_PACKED PACKED_glAttachShader
#define glAttachShader_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glAttachShader_NOT_VOID_WRAP(...) {}
#define glBindAttribLocation_INDEX 3
#define glBindAttribLocation_RETURN void
#define glBindAttribLocation_ARG_NAMES program, index, name
#define glBindAttribLocation_ARG_EXPAND GLuint program, GLuint index, const GLchar * name
#define glBindAttribLocation_PACKED PACKED_glBindAttribLocation
#define glBindAttribLocation_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBindAttribLocation_NOT_VOID_WRAP(...) {}
#define glBindBuffer_INDEX 4
#define glBindBuffer_RETURN void
#define glBindBuffer_ARG_NAMES target, buffer
#define glBindBuffer_ARG_EXPAND GLenum target, GLuint buffer
#define glBindBuffer_PACKED PACKED_glBindBuffer
#define glBindBuffer_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBindBuffer_NOT_VOID_WRAP(...) {}
#define glBindFramebuffer_INDEX 5
#define glBindFramebuffer_RETURN void
#define glBindFramebuffer_ARG_NAMES target, framebuffer
#define glBindFramebuffer_ARG_EXPAND GLenum target, GLuint framebuffer
#define glBindFramebuffer_PACKED PACKED_glBindFramebuffer
#define glBindFramebuffer_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBindFramebuffer_NOT_VOID_WRAP(...) {}
#define glBindRenderbuffer_INDEX 6
#define glBindRenderbuffer_RETURN void
#define glBindRenderbuffer_ARG_NAMES target, renderbuffer
#define glBindRenderbuffer_ARG_EXPAND GLenum target, GLuint renderbuffer
#define glBindRenderbuffer_PACKED PACKED_glBindRenderbuffer
#define glBindRenderbuffer_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBindRenderbuffer_NOT_VOID_WRAP(...) {}
#define glBindTexture_INDEX 7
#define glBindTexture_RETURN void
#define glBindTexture_ARG_NAMES target, texture
#define glBindTexture_ARG_EXPAND GLenum target, GLuint texture
#define glBindTexture_PACKED PACKED_glBindTexture
#define glBindTexture_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBindTexture_NOT_VOID_WRAP(...) {}
#define glBlendColor_INDEX 8
#define glBlendColor_RETURN void
#define glBlendColor_ARG_NAMES red, green, blue, alpha
#define glBlendColor_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define glBlendColor_PACKED PACKED_glBlendColor
#define glBlendColor_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBlendColor_NOT_VOID_WRAP(...) {}
#define glBlendEquation_INDEX 9
#define glBlendEquation_RETURN void
#define glBlendEquation_ARG_NAMES mode
#define glBlendEquation_ARG_EXPAND GLenum mode
#define glBlendEquation_PACKED PACKED_glBlendEquation
#define glBlendEquation_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBlendEquation_NOT_VOID_WRAP(...) {}
#define glBlendEquationSeparate_INDEX 10
#define glBlendEquationSeparate_RETURN void
#define glBlendEquationSeparate_ARG_NAMES modeRGB, modeA
#define glBlendEquationSeparate_ARG_EXPAND GLenum modeRGB, GLenum modeA
#define glBlendEquationSeparate_PACKED PACKED_glBlendEquationSeparate
#define glBlendEquationSeparate_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBlendEquationSeparate_NOT_VOID_WRAP(...) {}
#define glBlendFunc_INDEX 11
#define glBlendFunc_RETURN void
#define glBlendFunc_ARG_NAMES sfactor, dfactor
#define glBlendFunc_ARG_EXPAND GLenum sfactor, GLenum dfactor
#define glBlendFunc_PACKED PACKED_glBlendFunc
#define glBlendFunc_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBlendFunc_NOT_VOID_WRAP(...) {}
#define glBlendFuncSeparate_INDEX 12
#define glBlendFuncSeparate_RETURN void
#define glBlendFuncSeparate_ARG_NAMES sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha
#define glBlendFuncSeparate_ARG_EXPAND GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha
#define glBlendFuncSeparate_PACKED PACKED_glBlendFuncSeparate
#define glBlendFuncSeparate_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBlendFuncSeparate_NOT_VOID_WRAP(...) {}
#define glBufferData_INDEX 13
#define glBufferData_RETURN void
#define glBufferData_ARG_NAMES target, size, data, usage
#define glBufferData_ARG_EXPAND GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage
#define glBufferData_PACKED PACKED_glBufferData
#define glBufferData_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBufferData_NOT_VOID_WRAP(...) {}
#define glBufferSubData_INDEX 14
#define glBufferSubData_RETURN void
#define glBufferSubData_ARG_NAMES target, offset, size, data
#define glBufferSubData_ARG_EXPAND GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data
#define glBufferSubData_PACKED PACKED_glBufferSubData
#define glBufferSubData_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glBufferSubData_NOT_VOID_WRAP(...) {}
#define glCheckFramebufferStatus_INDEX 15
#define glCheckFramebufferStatus_RETURN GLenum
#define glCheckFramebufferStatus_ARG_NAMES target
#define glCheckFramebufferStatus_ARG_EXPAND GLenum target
#define glCheckFramebufferStatus_PACKED PACKED_glCheckFramebufferStatus
#define glCheckFramebufferStatus_VOID_ONLY_WRAP(...) {}
#define glCheckFramebufferStatus_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glClear_INDEX 16
#define glClear_RETURN void
#define glClear_ARG_NAMES mask
#define glClear_ARG_EXPAND GLbitfield mask
#define glClear_PACKED PACKED_glClear
#define glClear_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glClear_NOT_VOID_WRAP(...) {}
#define glClearColor_INDEX 17
#define glClearColor_RETURN void
#define glClearColor_ARG_NAMES red, green, blue, alpha
#define glClearColor_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define glClearColor_PACKED PACKED_glClearColor
#define glClearColor_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glClearColor_NOT_VOID_WRAP(...) {}
#define glClearDepthf_INDEX 18
#define glClearDepthf_RETURN void
#define glClearDepthf_ARG_NAMES depth
#define glClearDepthf_ARG_EXPAND GLclampf depth
#define glClearDepthf_PACKED PACKED_glClearDepthf
#define glClearDepthf_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glClearDepthf_NOT_VOID_WRAP(...) {}
#define glClearStencil_INDEX 19
#define glClearStencil_RETURN void
#define glClearStencil_ARG_NAMES s
#define glClearStencil_ARG_EXPAND GLint s
#define glClearStencil_PACKED PACKED_glClearStencil
#define glClearStencil_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glClearStencil_NOT_VOID_WRAP(...) {}
#define glColorMask_INDEX 20
#define glColorMask_RETURN void
#define glColorMask_ARG_NAMES red, green, blue, alpha
#define glColorMask_ARG_EXPAND GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha
#define glColorMask_PACKED PACKED_glColorMask
#define glColorMask_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glColorMask_NOT_VOID_WRAP(...) {}
#define glCompileShader_INDEX 21
#define glCompileShader_RETURN void
#define glCompileShader_ARG_NAMES shader
#define glCompileShader_ARG_EXPAND GLuint shader
#define glCompileShader_PACKED PACKED_glCompileShader
#define glCompileShader_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glCompileShader_NOT_VOID_WRAP(...) {}
#define glCompressedTexImage2D_INDEX 22
#define glCompressedTexImage2D_RETURN void
#define glCompressedTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, imageSize, data
#define glCompressedTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data
#define glCompressedTexImage2D_PACKED PACKED_glCompressedTexImage2D
#define glCompressedTexImage2D_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glCompressedTexImage2D_NOT_VOID_WRAP(...) {}
#define glCompressedTexSubImage2D_INDEX 23
#define glCompressedTexSubImage2D_RETURN void
#define glCompressedTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, imageSize, data
#define glCompressedTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data
#define glCompressedTexSubImage2D_PACKED PACKED_glCompressedTexSubImage2D
#define glCompressedTexSubImage2D_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glCompressedTexSubImage2D_NOT_VOID_WRAP(...) {}
#define glCopyTexImage2D_INDEX 24
#define glCopyTexImage2D_RETURN void
#define glCopyTexImage2D_ARG_NAMES target, level, internalformat, x, y, width, height, border
#define glCopyTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border
#define glCopyTexImage2D_PACKED PACKED_glCopyTexImage2D
#define glCopyTexImage2D_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glCopyTexImage2D_NOT_VOID_WRAP(...) {}
#define glCopyTexSubImage2D_INDEX 25
#define glCopyTexSubImage2D_RETURN void
#define glCopyTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, x, y, width, height
#define glCopyTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height
#define glCopyTexSubImage2D_PACKED PACKED_glCopyTexSubImage2D
#define glCopyTexSubImage2D_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glCopyTexSubImage2D_NOT_VOID_WRAP(...) {}
#define glCreateProgram_INDEX 26
#define glCreateProgram_RETURN GLuint
#define glCreateProgram_ARG_NAMES 
#define glCreateProgram_ARG_EXPAND 
#define glCreateProgram_PACKED PACKED_glCreateProgram
#define glCreateProgram_VOID_ONLY_WRAP(...) {}
#define glCreateProgram_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glCreateShader_INDEX 27
#define glCreateShader_RETURN GLuint
#define glCreateShader_ARG_NAMES type
#define glCreateShader_ARG_EXPAND GLenum type
#define glCreateShader_PACKED PACKED_glCreateShader
#define glCreateShader_VOID_ONLY_WRAP(...) {}
#define glCreateShader_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glCullFace_INDEX 28
#define glCullFace_RETURN void
#define glCullFace_ARG_NAMES mode
#define glCullFace_ARG_EXPAND GLenum mode
#define glCullFace_PACKED PACKED_glCullFace
#define glCullFace_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glCullFace_NOT_VOID_WRAP(...) {}
#define glDeleteBuffers_INDEX 29
#define glDeleteBuffers_RETURN void
#define glDeleteBuffers_ARG_NAMES n, buffer
#define glDeleteBuffers_ARG_EXPAND GLsizei n, const GLuint * buffer
#define glDeleteBuffers_PACKED PACKED_glDeleteBuffers
#define glDeleteBuffers_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDeleteBuffers_NOT_VOID_WRAP(...) {}
#define glDeleteFramebuffers_INDEX 30
#define glDeleteFramebuffers_RETURN void
#define glDeleteFramebuffers_ARG_NAMES n, framebuffers
#define glDeleteFramebuffers_ARG_EXPAND GLsizei n, const GLuint * framebuffers
#define glDeleteFramebuffers_PACKED PACKED_glDeleteFramebuffers
#define glDeleteFramebuffers_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDeleteFramebuffers_NOT_VOID_WRAP(...) {}
#define glDeleteProgram_INDEX 31
#define glDeleteProgram_RETURN void
#define glDeleteProgram_ARG_NAMES program
#define glDeleteProgram_ARG_EXPAND GLuint program
#define glDeleteProgram_PACKED PACKED_glDeleteProgram
#define glDeleteProgram_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDeleteProgram_NOT_VOID_WRAP(...) {}
#define glDeleteRenderbuffers_INDEX 32
#define glDeleteRenderbuffers_RETURN void
#define glDeleteRenderbuffers_ARG_NAMES n, renderbuffers
#define glDeleteRenderbuffers_ARG_EXPAND GLsizei n, const GLuint * renderbuffers
#define glDeleteRenderbuffers_PACKED PACKED_glDeleteRenderbuffers
#define glDeleteRenderbuffers_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDeleteRenderbuffers_NOT_VOID_WRAP(...) {}
#define glDeleteShader_INDEX 33
#define glDeleteShader_RETURN void
#define glDeleteShader_ARG_NAMES program
#define glDeleteShader_ARG_EXPAND GLuint program
#define glDeleteShader_PACKED PACKED_glDeleteShader
#define glDeleteShader_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDeleteShader_NOT_VOID_WRAP(...) {}
#define glDeleteTextures_INDEX 34
#define glDeleteTextures_RETURN void
#define glDeleteTextures_ARG_NAMES n, textures
#define glDeleteTextures_ARG_EXPAND GLsizei n, const GLuint * textures
#define glDeleteTextures_PACKED PACKED_glDeleteTextures
#define glDeleteTextures_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDeleteTextures_NOT_VOID_WRAP(...) {}
#define glDepthFunc_INDEX 35
#define glDepthFunc_RETURN void
#define glDepthFunc_ARG_NAMES func
#define glDepthFunc_ARG_EXPAND GLenum func
#define glDepthFunc_PACKED PACKED_glDepthFunc
#define glDepthFunc_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDepthFunc_NOT_VOID_WRAP(...) {}
#define glDepthMask_INDEX 36
#define glDepthMask_RETURN void
#define glDepthMask_ARG_NAMES flag
#define glDepthMask_ARG_EXPAND GLboolean flag
#define glDepthMask_PACKED PACKED_glDepthMask
#define glDepthMask_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDepthMask_NOT_VOID_WRAP(...) {}
#define glDepthRangef_INDEX 37
#define glDepthRangef_RETURN void
#define glDepthRangef_ARG_NAMES near, far
#define glDepthRangef_ARG_EXPAND GLclampf near, GLclampf far
#define glDepthRangef_PACKED PACKED_glDepthRangef
#define glDepthRangef_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDepthRangef_NOT_VOID_WRAP(...) {}
#define glDetachShader_INDEX 38
#define glDetachShader_RETURN void
#define glDetachShader_ARG_NAMES program, shader
#define glDetachShader_ARG_EXPAND GLuint program, GLuint shader
#define glDetachShader_PACKED PACKED_glDetachShader
#define glDetachShader_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDetachShader_NOT_VOID_WRAP(...) {}
#define glDisable_INDEX 39
#define glDisable_RETURN void
#define glDisable_ARG_NAMES cap
#define glDisable_ARG_EXPAND GLenum cap
#define glDisable_PACKED PACKED_glDisable
#define glDisable_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDisable_NOT_VOID_WRAP(...) {}
#define glDisableVertexAttribArray_INDEX 40
#define glDisableVertexAttribArray_RETURN void
#define glDisableVertexAttribArray_ARG_NAMES index
#define glDisableVertexAttribArray_ARG_EXPAND GLuint index
#define glDisableVertexAttribArray_PACKED PACKED_glDisableVertexAttribArray
#define glDisableVertexAttribArray_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDisableVertexAttribArray_NOT_VOID_WRAP(...) {}
#define glDrawArrays_INDEX 41
#define glDrawArrays_RETURN void
#define glDrawArrays_ARG_NAMES mode, first, count
#define glDrawArrays_ARG_EXPAND GLenum mode, GLint first, GLsizei count
#define glDrawArrays_PACKED PACKED_glDrawArrays
#define glDrawArrays_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDrawArrays_NOT_VOID_WRAP(...) {}
#define glDrawElements_INDEX 42
#define glDrawElements_RETURN void
#define glDrawElements_ARG_NAMES mode, count, type, indices
#define glDrawElements_ARG_EXPAND GLenum mode, GLsizei count, GLenum type, const GLvoid * indices
#define glDrawElements_PACKED PACKED_glDrawElements
#define glDrawElements_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glDrawElements_NOT_VOID_WRAP(...) {}
#define glEnable_INDEX 43
#define glEnable_RETURN void
#define glEnable_ARG_NAMES cap
#define glEnable_ARG_EXPAND GLenum cap
#define glEnable_PACKED PACKED_glEnable
#define glEnable_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glEnable_NOT_VOID_WRAP(...) {}
#define glEnableVertexAttribArray_INDEX 44
#define glEnableVertexAttribArray_RETURN void
#define glEnableVertexAttribArray_ARG_NAMES index
#define glEnableVertexAttribArray_ARG_EXPAND GLuint index
#define glEnableVertexAttribArray_PACKED PACKED_glEnableVertexAttribArray
#define glEnableVertexAttribArray_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glEnableVertexAttribArray_NOT_VOID_WRAP(...) {}
#define glFinish_INDEX 45
#define glFinish_RETURN void
#define glFinish_ARG_NAMES 
#define glFinish_ARG_EXPAND 
#define glFinish_PACKED PACKED_glFinish
#define glFinish_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glFinish_NOT_VOID_WRAP(...) {}
#define glFlush_INDEX 46
#define glFlush_RETURN void
#define glFlush_ARG_NAMES 
#define glFlush_ARG_EXPAND 
#define glFlush_PACKED PACKED_glFlush
#define glFlush_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glFlush_NOT_VOID_WRAP(...) {}
#define glFramebufferRenderbuffer_INDEX 47
#define glFramebufferRenderbuffer_RETURN void
#define glFramebufferRenderbuffer_ARG_NAMES target, attachment, renderbuffertarget, renderbuffer
#define glFramebufferRenderbuffer_ARG_EXPAND GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer
#define glFramebufferRenderbuffer_PACKED PACKED_glFramebufferRenderbuffer
#define glFramebufferRenderbuffer_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glFramebufferRenderbuffer_NOT_VOID_WRAP(...) {}
#define glFramebufferTexture2D_INDEX 48
#define glFramebufferTexture2D_RETURN void
#define glFramebufferTexture2D_ARG_NAMES target, attachment, textarget, texture, level
#define glFramebufferTexture2D_ARG_EXPAND GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level
#define glFramebufferTexture2D_PACKED PACKED_glFramebufferTexture2D
#define glFramebufferTexture2D_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glFramebufferTexture2D_NOT_VOID_WRAP(...) {}
#define glFrontFace_INDEX 49
#define glFrontFace_RETURN void
#define glFrontFace_ARG_NAMES mode
#define glFrontFace_ARG_EXPAND GLenum mode
#define glFrontFace_PACKED PACKED_glFrontFace
#define glFrontFace_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glFrontFace_NOT_VOID_WRAP(...) {}
#define glGenBuffers_INDEX 50
#define glGenBuffers_RETURN void
#define glGenBuffers_ARG_NAMES n, buffer
#define glGenBuffers_ARG_EXPAND GLsizei n, GLuint * buffer
#define glGenBuffers_PACKED PACKED_glGenBuffers
#define glGenBuffers_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGenBuffers_NOT_VOID_WRAP(...) {}
#define glGenFramebuffers_INDEX 51
#define glGenFramebuffers_RETURN void
#define glGenFramebuffers_ARG_NAMES n, framebuffers
#define glGenFramebuffers_ARG_EXPAND GLsizei n, GLuint * framebuffers
#define glGenFramebuffers_PACKED PACKED_glGenFramebuffers
#define glGenFramebuffers_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGenFramebuffers_NOT_VOID_WRAP(...) {}
#define glGenRenderbuffers_INDEX 52
#define glGenRenderbuffers_RETURN void
#define glGenRenderbuffers_ARG_NAMES n, renderbuffers
#define glGenRenderbuffers_ARG_EXPAND GLsizei n, GLuint * renderbuffers
#define glGenRenderbuffers_PACKED PACKED_glGenRenderbuffers
#define glGenRenderbuffers_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGenRenderbuffers_NOT_VOID_WRAP(...) {}
#define glGenTextures_INDEX 53
#define glGenTextures_RETURN void
#define glGenTextures_ARG_NAMES n, textures
#define glGenTextures_ARG_EXPAND GLsizei n, GLuint * textures
#define glGenTextures_PACKED PACKED_glGenTextures
#define glGenTextures_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGenTextures_NOT_VOID_WRAP(...) {}
#define glGenerateMipmap_INDEX 54
#define glGenerateMipmap_RETURN void
#define glGenerateMipmap_ARG_NAMES target
#define glGenerateMipmap_ARG_EXPAND GLenum target
#define glGenerateMipmap_PACKED PACKED_glGenerateMipmap
#define glGenerateMipmap_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGenerateMipmap_NOT_VOID_WRAP(...) {}
#define glGetActiveAttrib_INDEX 55
#define glGetActiveAttrib_RETURN void
#define glGetActiveAttrib_ARG_NAMES program, index, bufSize, length, size, type, name
#define glGetActiveAttrib_ARG_EXPAND GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name
#define glGetActiveAttrib_PACKED PACKED_glGetActiveAttrib
#define glGetActiveAttrib_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetActiveAttrib_NOT_VOID_WRAP(...) {}
#define glGetActiveUniform_INDEX 56
#define glGetActiveUniform_RETURN void
#define glGetActiveUniform_ARG_NAMES program, index, bufSize, length, size, type, name
#define glGetActiveUniform_ARG_EXPAND GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name
#define glGetActiveUniform_PACKED PACKED_glGetActiveUniform
#define glGetActiveUniform_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetActiveUniform_NOT_VOID_WRAP(...) {}
#define glGetAttachedShaders_INDEX 57
#define glGetAttachedShaders_RETURN void
#define glGetAttachedShaders_ARG_NAMES program, maxCount, count, obj
#define glGetAttachedShaders_ARG_EXPAND GLuint program, GLsizei maxCount, GLsizei * count, GLuint * obj
#define glGetAttachedShaders_PACKED PACKED_glGetAttachedShaders
#define glGetAttachedShaders_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetAttachedShaders_NOT_VOID_WRAP(...) {}
#define glGetAttribLocation_INDEX 58
#define glGetAttribLocation_RETURN GLint
#define glGetAttribLocation_ARG_NAMES program, name
#define glGetAttribLocation_ARG_EXPAND GLuint program, const GLchar * name
#define glGetAttribLocation_PACKED PACKED_glGetAttribLocation
#define glGetAttribLocation_VOID_ONLY_WRAP(...) {}
#define glGetAttribLocation_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glGetBooleanv_INDEX 59
#define glGetBooleanv_RETURN void
#define glGetBooleanv_ARG_NAMES pname, params
#define glGetBooleanv_ARG_EXPAND GLenum pname, GLboolean * params
#define glGetBooleanv_PACKED PACKED_glGetBooleanv
#define glGetBooleanv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetBooleanv_NOT_VOID_WRAP(...) {}
#define glGetBufferParameteriv_INDEX 60
#define glGetBufferParameteriv_RETURN void
#define glGetBufferParameteriv_ARG_NAMES target, pname, params
#define glGetBufferParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetBufferParameteriv_PACKED PACKED_glGetBufferParameteriv
#define glGetBufferParameteriv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetBufferParameteriv_NOT_VOID_WRAP(...) {}
#define glGetError_INDEX 61
#define glGetError_RETURN GLenum
#define glGetError_ARG_NAMES 
#define glGetError_ARG_EXPAND 
#define glGetError_PACKED PACKED_glGetError
#define glGetError_VOID_ONLY_WRAP(...) {}
#define glGetError_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glGetFloatv_INDEX 62
#define glGetFloatv_RETURN void
#define glGetFloatv_ARG_NAMES pname, params
#define glGetFloatv_ARG_EXPAND GLenum pname, GLfloat * params
#define glGetFloatv_PACKED PACKED_glGetFloatv
#define glGetFloatv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetFloatv_NOT_VOID_WRAP(...) {}
#define glGetFramebufferAttachmentParameteriv_INDEX 63
#define glGetFramebufferAttachmentParameteriv_RETURN void
#define glGetFramebufferAttachmentParameteriv_ARG_NAMES target, attachment, pname, params
#define glGetFramebufferAttachmentParameteriv_ARG_EXPAND GLenum target, GLenum attachment, GLenum pname, GLint * params
#define glGetFramebufferAttachmentParameteriv_PACKED PACKED_glGetFramebufferAttachmentParameteriv
#define glGetFramebufferAttachmentParameteriv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetFramebufferAttachmentParameteriv_NOT_VOID_WRAP(...) {}
#define glGetIntegerv_INDEX 64
#define glGetIntegerv_RETURN void
#define glGetIntegerv_ARG_NAMES pname, params
#define glGetIntegerv_ARG_EXPAND GLenum pname, GLint * params
#define glGetIntegerv_PACKED PACKED_glGetIntegerv
#define glGetIntegerv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetIntegerv_NOT_VOID_WRAP(...) {}
#define glGetProgramInfoLog_INDEX 65
#define glGetProgramInfoLog_RETURN void
#define glGetProgramInfoLog_ARG_NAMES program, bufSize, length, infoLog
#define glGetProgramInfoLog_ARG_EXPAND GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog
#define glGetProgramInfoLog_PACKED PACKED_glGetProgramInfoLog
#define glGetProgramInfoLog_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetProgramInfoLog_NOT_VOID_WRAP(...) {}
#define glGetProgramiv_INDEX 66
#define glGetProgramiv_RETURN void
#define glGetProgramiv_ARG_NAMES program, pname, params
#define glGetProgramiv_ARG_EXPAND GLuint program, GLenum pname, GLint * params
#define glGetProgramiv_PACKED PACKED_glGetProgramiv
#define glGetProgramiv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetProgramiv_NOT_VOID_WRAP(...) {}
#define glGetRenderbufferParameteriv_INDEX 67
#define glGetRenderbufferParameteriv_RETURN void
#define glGetRenderbufferParameteriv_ARG_NAMES target, pname, params
#define glGetRenderbufferParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetRenderbufferParameteriv_PACKED PACKED_glGetRenderbufferParameteriv
#define glGetRenderbufferParameteriv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetRenderbufferParameteriv_NOT_VOID_WRAP(...) {}
#define glGetShaderInfoLog_INDEX 68
#define glGetShaderInfoLog_RETURN void
#define glGetShaderInfoLog_ARG_NAMES shader, bufSize, length, infoLog
#define glGetShaderInfoLog_ARG_EXPAND GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog
#define glGetShaderInfoLog_PACKED PACKED_glGetShaderInfoLog
#define glGetShaderInfoLog_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetShaderInfoLog_NOT_VOID_WRAP(...) {}
#define glGetShaderPrecisionFormat_INDEX 69
#define glGetShaderPrecisionFormat_RETURN void
#define glGetShaderPrecisionFormat_ARG_NAMES shadertype, precisiontype, range, precision
#define glGetShaderPrecisionFormat_ARG_EXPAND GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision
#define glGetShaderPrecisionFormat_PACKED PACKED_glGetShaderPrecisionFormat
#define glGetShaderPrecisionFormat_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetShaderPrecisionFormat_NOT_VOID_WRAP(...) {}
#define glGetShaderSource_INDEX 70
#define glGetShaderSource_RETURN void
#define glGetShaderSource_ARG_NAMES shader, bufSize, length, source
#define glGetShaderSource_ARG_EXPAND GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source
#define glGetShaderSource_PACKED PACKED_glGetShaderSource
#define glGetShaderSource_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetShaderSource_NOT_VOID_WRAP(...) {}
#define glGetShaderiv_INDEX 71
#define glGetShaderiv_RETURN void
#define glGetShaderiv_ARG_NAMES shader, pname, params
#define glGetShaderiv_ARG_EXPAND GLuint shader, GLenum pname, GLint * params
#define glGetShaderiv_PACKED PACKED_glGetShaderiv
#define glGetShaderiv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetShaderiv_NOT_VOID_WRAP(...) {}
#define glGetString_INDEX 72
#define glGetString_RETURN const GLubyte *
#define glGetString_ARG_NAMES name
#define glGetString_ARG_EXPAND GLenum name
#define glGetString_PACKED PACKED_glGetString
#define glGetString_VOID_ONLY_WRAP(...) {}
#define glGetString_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glGetTexParameterfv_INDEX 73
#define glGetTexParameterfv_RETURN void
#define glGetTexParameterfv_ARG_NAMES target, pname, params
#define glGetTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, GLfloat * params
#define glGetTexParameterfv_PACKED PACKED_glGetTexParameterfv
#define glGetTexParameterfv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetTexParameterfv_NOT_VOID_WRAP(...) {}
#define glGetTexParameteriv_INDEX 74
#define glGetTexParameteriv_RETURN void
#define glGetTexParameteriv_ARG_NAMES target, pname, params
#define glGetTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetTexParameteriv_PACKED PACKED_glGetTexParameteriv
#define glGetTexParameteriv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetTexParameteriv_NOT_VOID_WRAP(...) {}
#define glGetUniformLocation_INDEX 75
#define glGetUniformLocation_RETURN GLint
#define glGetUniformLocation_ARG_NAMES program, name
#define glGetUniformLocation_ARG_EXPAND GLuint program, const GLchar * name
#define glGetUniformLocation_PACKED PACKED_glGetUniformLocation
#define glGetUniformLocation_VOID_ONLY_WRAP(...) {}
#define glGetUniformLocation_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glGetUniformfv_INDEX 76
#define glGetUniformfv_RETURN void
#define glGetUniformfv_ARG_NAMES program, location, params
#define glGetUniformfv_ARG_EXPAND GLuint program, GLint location, GLfloat * params
#define glGetUniformfv_PACKED PACKED_glGetUniformfv
#define glGetUniformfv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetUniformfv_NOT_VOID_WRAP(...) {}
#define glGetUniformiv_INDEX 77
#define glGetUniformiv_RETURN void
#define glGetUniformiv_ARG_NAMES program, location, params
#define glGetUniformiv_ARG_EXPAND GLuint program, GLint location, GLint * params
#define glGetUniformiv_PACKED PACKED_glGetUniformiv
#define glGetUniformiv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetUniformiv_NOT_VOID_WRAP(...) {}
#define glGetVertexAttribPointerv_INDEX 78
#define glGetVertexAttribPointerv_RETURN void
#define glGetVertexAttribPointerv_ARG_NAMES index, pname, pointer
#define glGetVertexAttribPointerv_ARG_EXPAND GLuint index, GLenum pname, GLvoid ** pointer
#define glGetVertexAttribPointerv_PACKED PACKED_glGetVertexAttribPointerv
#define glGetVertexAttribPointerv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetVertexAttribPointerv_NOT_VOID_WRAP(...) {}
#define glGetVertexAttribfv_INDEX 79
#define glGetVertexAttribfv_RETURN void
#define glGetVertexAttribfv_ARG_NAMES index, pname, params
#define glGetVertexAttribfv_ARG_EXPAND GLuint index, GLenum pname, GLfloat * params
#define glGetVertexAttribfv_PACKED PACKED_glGetVertexAttribfv
#define glGetVertexAttribfv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetVertexAttribfv_NOT_VOID_WRAP(...) {}
#define glGetVertexAttribiv_INDEX 80
#define glGetVertexAttribiv_RETURN void
#define glGetVertexAttribiv_ARG_NAMES index, pname, params
#define glGetVertexAttribiv_ARG_EXPAND GLuint index, GLenum pname, GLint * params
#define glGetVertexAttribiv_PACKED PACKED_glGetVertexAttribiv
#define glGetVertexAttribiv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glGetVertexAttribiv_NOT_VOID_WRAP(...) {}
#define glHint_INDEX 81
#define glHint_RETURN void
#define glHint_ARG_NAMES target, mode
#define glHint_ARG_EXPAND GLenum target, GLenum mode
#define glHint_PACKED PACKED_glHint
#define glHint_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glHint_NOT_VOID_WRAP(...) {}
#define glIsBuffer_INDEX 82
#define glIsBuffer_RETURN GLboolean
#define glIsBuffer_ARG_NAMES buffer
#define glIsBuffer_ARG_EXPAND GLuint buffer
#define glIsBuffer_PACKED PACKED_glIsBuffer
#define glIsBuffer_VOID_ONLY_WRAP(...) {}
#define glIsBuffer_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glIsEnabled_INDEX 83
#define glIsEnabled_RETURN GLboolean
#define glIsEnabled_ARG_NAMES cap
#define glIsEnabled_ARG_EXPAND GLenum cap
#define glIsEnabled_PACKED PACKED_glIsEnabled
#define glIsEnabled_VOID_ONLY_WRAP(...) {}
#define glIsEnabled_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glIsFramebuffer_INDEX 84
#define glIsFramebuffer_RETURN GLboolean
#define glIsFramebuffer_ARG_NAMES framebuffer
#define glIsFramebuffer_ARG_EXPAND GLuint framebuffer
#define glIsFramebuffer_PACKED PACKED_glIsFramebuffer
#define glIsFramebuffer_VOID_ONLY_WRAP(...) {}
#define glIsFramebuffer_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glIsProgram_INDEX 85
#define glIsProgram_RETURN GLboolean
#define glIsProgram_ARG_NAMES program
#define glIsProgram_ARG_EXPAND GLuint program
#define glIsProgram_PACKED PACKED_glIsProgram
#define glIsProgram_VOID_ONLY_WRAP(...) {}
#define glIsProgram_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glIsRenderbuffer_INDEX 86
#define glIsRenderbuffer_RETURN GLboolean
#define glIsRenderbuffer_ARG_NAMES renderbuffer
#define glIsRenderbuffer_ARG_EXPAND GLuint renderbuffer
#define glIsRenderbuffer_PACKED PACKED_glIsRenderbuffer
#define glIsRenderbuffer_VOID_ONLY_WRAP(...) {}
#define glIsRenderbuffer_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glIsShader_INDEX 87
#define glIsShader_RETURN GLboolean
#define glIsShader_ARG_NAMES shader
#define glIsShader_ARG_EXPAND GLuint shader
#define glIsShader_PACKED PACKED_glIsShader
#define glIsShader_VOID_ONLY_WRAP(...) {}
#define glIsShader_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glIsTexture_INDEX 88
#define glIsTexture_RETURN GLboolean
#define glIsTexture_ARG_NAMES texture
#define glIsTexture_ARG_EXPAND GLuint texture
#define glIsTexture_PACKED PACKED_glIsTexture
#define glIsTexture_VOID_ONLY_WRAP(...) {}
#define glIsTexture_NOT_VOID_WRAP(...) { __VA_ARGS__ }
#define glLineWidth_INDEX 89
#define glLineWidth_RETURN void
#define glLineWidth_ARG_NAMES width
#define glLineWidth_ARG_EXPAND GLfloat width
#define glLineWidth_PACKED PACKED_glLineWidth
#define glLineWidth_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glLineWidth_NOT_VOID_WRAP(...) {}
#define glLinkProgram_INDEX 90
#define glLinkProgram_RETURN void
#define glLinkProgram_ARG_NAMES program
#define glLinkProgram_ARG_EXPAND GLuint program
#define glLinkProgram_PACKED PACKED_glLinkProgram
#define glLinkProgram_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glLinkProgram_NOT_VOID_WRAP(...) {}
#define glPixelStorei_INDEX 91
#define glPixelStorei_RETURN void
#define glPixelStorei_ARG_NAMES pname, param
#define glPixelStorei_ARG_EXPAND GLenum pname, GLint param
#define glPixelStorei_PACKED PACKED_glPixelStorei
#define glPixelStorei_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glPixelStorei_NOT_VOID_WRAP(...) {}
#define glPolygonOffset_INDEX 92
#define glPolygonOffset_RETURN void
#define glPolygonOffset_ARG_NAMES factor, units
#define glPolygonOffset_ARG_EXPAND GLfloat factor, GLfloat units
#define glPolygonOffset_PACKED PACKED_glPolygonOffset
#define glPolygonOffset_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glPolygonOffset_NOT_VOID_WRAP(...) {}
#define glReadPixels_INDEX 93
#define glReadPixels_RETURN void
#define glReadPixels_ARG_NAMES x, y, width, height, format, type, pixels
#define glReadPixels_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels
#define glReadPixels_PACKED PACKED_glReadPixels
#define glReadPixels_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glReadPixels_NOT_VOID_WRAP(...) {}
#define glReleaseShaderCompiler_INDEX 94
#define glReleaseShaderCompiler_RETURN void
#define glReleaseShaderCompiler_ARG_NAMES 
#define glReleaseShaderCompiler_ARG_EXPAND 
#define glReleaseShaderCompiler_PACKED PACKED_glReleaseShaderCompiler
#define glReleaseShaderCompiler_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glReleaseShaderCompiler_NOT_VOID_WRAP(...) {}
#define glRenderbufferStorage_INDEX 95
#define glRenderbufferStorage_RETURN void
#define glRenderbufferStorage_ARG_NAMES target, internalformat, width, height
#define glRenderbufferStorage_ARG_EXPAND GLenum target, GLenum internalformat, GLsizei width, GLsizei height
#define glRenderbufferStorage_PACKED PACKED_glRenderbufferStorage
#define glRenderbufferStorage_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glRenderbufferStorage_NOT_VOID_WRAP(...) {}
#define glSampleCoverage_INDEX 96
#define glSampleCoverage_RETURN void
#define glSampleCoverage_ARG_NAMES value, invert
#define glSampleCoverage_ARG_EXPAND GLclampf value, GLboolean invert
#define glSampleCoverage_PACKED PACKED_glSampleCoverage
#define glSampleCoverage_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glSampleCoverage_NOT_VOID_WRAP(...) {}
#define glScissor_INDEX 97
#define glScissor_RETURN void
#define glScissor_ARG_NAMES x, y, width, height
#define glScissor_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glScissor_PACKED PACKED_glScissor
#define glScissor_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glScissor_NOT_VOID_WRAP(...) {}
#define glShaderBinary_INDEX 98
#define glShaderBinary_RETURN void
#define glShaderBinary_ARG_NAMES n, shaders, binaryformat, binary, length
#define glShaderBinary_ARG_EXPAND GLsizei n, const GLuint * shaders, GLenum binaryformat, const GLvoid * binary, GLsizei length
#define glShaderBinary_PACKED PACKED_glShaderBinary
#define glShaderBinary_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glShaderBinary_NOT_VOID_WRAP(...) {}
#define glShaderSource_INDEX 99
#define glShaderSource_RETURN void
#define glShaderSource_ARG_NAMES shader, count, string, length
#define glShaderSource_ARG_EXPAND GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length
#define glShaderSource_PACKED PACKED_glShaderSource
#define glShaderSource_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glShaderSource_NOT_VOID_WRAP(...) {}
#define glStencilFunc_INDEX 100
#define glStencilFunc_RETURN void
#define glStencilFunc_ARG_NAMES func, ref, mask
#define glStencilFunc_ARG_EXPAND GLenum func, GLint ref, GLuint mask
#define glStencilFunc_PACKED PACKED_glStencilFunc
#define glStencilFunc_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glStencilFunc_NOT_VOID_WRAP(...) {}
#define glStencilFuncSeparate_INDEX 101
#define glStencilFuncSeparate_RETURN void
#define glStencilFuncSeparate_ARG_NAMES face, func, ref, mask
#define glStencilFuncSeparate_ARG_EXPAND GLenum face, GLenum func, GLint ref, GLuint mask
#define glStencilFuncSeparate_PACKED PACKED_glStencilFuncSeparate
#define glStencilFuncSeparate_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glStencilFuncSeparate_NOT_VOID_WRAP(...) {}
#define glStencilMask_INDEX 102
#define glStencilMask_RETURN void
#define glStencilMask_ARG_NAMES mask
#define glStencilMask_ARG_EXPAND GLuint mask
#define glStencilMask_PACKED PACKED_glStencilMask
#define glStencilMask_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glStencilMask_NOT_VOID_WRAP(...) {}
#define glStencilMaskSeparate_INDEX 103
#define glStencilMaskSeparate_RETURN void
#define glStencilMaskSeparate_ARG_NAMES face, mask
#define glStencilMaskSeparate_ARG_EXPAND GLenum face, GLuint mask
#define glStencilMaskSeparate_PACKED PACKED_glStencilMaskSeparate
#define glStencilMaskSeparate_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glStencilMaskSeparate_NOT_VOID_WRAP(...) {}
#define glStencilOp_INDEX 104
#define glStencilOp_RETURN void
#define glStencilOp_ARG_NAMES fail, zfail, zpass
#define glStencilOp_ARG_EXPAND GLenum fail, GLenum zfail, GLenum zpass
#define glStencilOp_PACKED PACKED_glStencilOp
#define glStencilOp_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glStencilOp_NOT_VOID_WRAP(...) {}
#define glStencilOpSeparate_INDEX 105
#define glStencilOpSeparate_RETURN void
#define glStencilOpSeparate_ARG_NAMES face, sfail, zfail, zpass
#define glStencilOpSeparate_ARG_EXPAND GLenum face, GLenum sfail, GLenum zfail, GLenum zpass
#define glStencilOpSeparate_PACKED PACKED_glStencilOpSeparate
#define glStencilOpSeparate_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glStencilOpSeparate_NOT_VOID_WRAP(...) {}
#define glTexImage2D_INDEX 106
#define glTexImage2D_RETURN void
#define glTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, format, type, pixels
#define glTexImage2D_ARG_EXPAND GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels
#define glTexImage2D_PACKED PACKED_glTexImage2D
#define glTexImage2D_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glTexImage2D_NOT_VOID_WRAP(...) {}
#define glTexParameterf_INDEX 107
#define glTexParameterf_RETURN void
#define glTexParameterf_ARG_NAMES target, pname, param
#define glTexParameterf_ARG_EXPAND GLenum target, GLenum pname, GLfloat param
#define glTexParameterf_PACKED PACKED_glTexParameterf
#define glTexParameterf_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glTexParameterf_NOT_VOID_WRAP(...) {}
#define glTexParameterfv_INDEX 108
#define glTexParameterfv_RETURN void
#define glTexParameterfv_ARG_NAMES target, pname, params
#define glTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, const GLfloat * params
#define glTexParameterfv_PACKED PACKED_glTexParameterfv
#define glTexParameterfv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glTexParameterfv_NOT_VOID_WRAP(...) {}
#define glTexParameteri_INDEX 109
#define glTexParameteri_RETURN void
#define glTexParameteri_ARG_NAMES target, pname, param
#define glTexParameteri_ARG_EXPAND GLenum target, GLenum pname, GLint param
#define glTexParameteri_PACKED PACKED_glTexParameteri
#define glTexParameteri_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glTexParameteri_NOT_VOID_WRAP(...) {}
#define glTexParameteriv_INDEX 110
#define glTexParameteriv_RETURN void
#define glTexParameteriv_ARG_NAMES target, pname, params
#define glTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, const GLint * params
#define glTexParameteriv_PACKED PACKED_glTexParameteriv
#define glTexParameteriv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glTexParameteriv_NOT_VOID_WRAP(...) {}
#define glTexSubImage2D_INDEX 111
#define glTexSubImage2D_RETURN void
#define glTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, type, pixels
#define glTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels
#define glTexSubImage2D_PACKED PACKED_glTexSubImage2D
#define glTexSubImage2D_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glTexSubImage2D_NOT_VOID_WRAP(...) {}
#define glUniform1f_INDEX 112
#define glUniform1f_RETURN void
#define glUniform1f_ARG_NAMES location, v0
#define glUniform1f_ARG_EXPAND GLint location, GLfloat v0
#define glUniform1f_PACKED PACKED_glUniform1f
#define glUniform1f_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform1f_NOT_VOID_WRAP(...) {}
#define glUniform1fv_INDEX 113
#define glUniform1fv_RETURN void
#define glUniform1fv_ARG_NAMES location, count, value
#define glUniform1fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform1fv_PACKED PACKED_glUniform1fv
#define glUniform1fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform1fv_NOT_VOID_WRAP(...) {}
#define glUniform1i_INDEX 114
#define glUniform1i_RETURN void
#define glUniform1i_ARG_NAMES location, v0
#define glUniform1i_ARG_EXPAND GLint location, GLint v0
#define glUniform1i_PACKED PACKED_glUniform1i
#define glUniform1i_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform1i_NOT_VOID_WRAP(...) {}
#define glUniform1iv_INDEX 115
#define glUniform1iv_RETURN void
#define glUniform1iv_ARG_NAMES location, count, value
#define glUniform1iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform1iv_PACKED PACKED_glUniform1iv
#define glUniform1iv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform1iv_NOT_VOID_WRAP(...) {}
#define glUniform2f_INDEX 116
#define glUniform2f_RETURN void
#define glUniform2f_ARG_NAMES location, v0, v1
#define glUniform2f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1
#define glUniform2f_PACKED PACKED_glUniform2f
#define glUniform2f_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform2f_NOT_VOID_WRAP(...) {}
#define glUniform2fv_INDEX 117
#define glUniform2fv_RETURN void
#define glUniform2fv_ARG_NAMES location, count, value
#define glUniform2fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform2fv_PACKED PACKED_glUniform2fv
#define glUniform2fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform2fv_NOT_VOID_WRAP(...) {}
#define glUniform2i_INDEX 118
#define glUniform2i_RETURN void
#define glUniform2i_ARG_NAMES location, v0, v1
#define glUniform2i_ARG_EXPAND GLint location, GLint v0, GLint v1
#define glUniform2i_PACKED PACKED_glUniform2i
#define glUniform2i_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform2i_NOT_VOID_WRAP(...) {}
#define glUniform2iv_INDEX 119
#define glUniform2iv_RETURN void
#define glUniform2iv_ARG_NAMES location, count, value
#define glUniform2iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform2iv_PACKED PACKED_glUniform2iv
#define glUniform2iv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform2iv_NOT_VOID_WRAP(...) {}
#define glUniform3f_INDEX 120
#define glUniform3f_RETURN void
#define glUniform3f_ARG_NAMES location, v0, v1, v2
#define glUniform3f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1, GLfloat v2
#define glUniform3f_PACKED PACKED_glUniform3f
#define glUniform3f_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform3f_NOT_VOID_WRAP(...) {}
#define glUniform3fv_INDEX 121
#define glUniform3fv_RETURN void
#define glUniform3fv_ARG_NAMES location, count, value
#define glUniform3fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform3fv_PACKED PACKED_glUniform3fv
#define glUniform3fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform3fv_NOT_VOID_WRAP(...) {}
#define glUniform3i_INDEX 122
#define glUniform3i_RETURN void
#define glUniform3i_ARG_NAMES location, v0, v1, v2
#define glUniform3i_ARG_EXPAND GLint location, GLint v0, GLint v1, GLint v2
#define glUniform3i_PACKED PACKED_glUniform3i
#define glUniform3i_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform3i_NOT_VOID_WRAP(...) {}
#define glUniform3iv_INDEX 123
#define glUniform3iv_RETURN void
#define glUniform3iv_ARG_NAMES location, count, value
#define glUniform3iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform3iv_PACKED PACKED_glUniform3iv
#define glUniform3iv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform3iv_NOT_VOID_WRAP(...) {}
#define glUniform4f_INDEX 124
#define glUniform4f_RETURN void
#define glUniform4f_ARG_NAMES location, v0, v1, v2, v3
#define glUniform4f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3
#define glUniform4f_PACKED PACKED_glUniform4f
#define glUniform4f_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform4f_NOT_VOID_WRAP(...) {}
#define glUniform4fv_INDEX 125
#define glUniform4fv_RETURN void
#define glUniform4fv_ARG_NAMES location, count, value
#define glUniform4fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform4fv_PACKED PACKED_glUniform4fv
#define glUniform4fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform4fv_NOT_VOID_WRAP(...) {}
#define glUniform4i_INDEX 126
#define glUniform4i_RETURN void
#define glUniform4i_ARG_NAMES location, v0, v1, v2, v3
#define glUniform4i_ARG_EXPAND GLint location, GLint v0, GLint v1, GLint v2, GLint v3
#define glUniform4i_PACKED PACKED_glUniform4i
#define glUniform4i_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform4i_NOT_VOID_WRAP(...) {}
#define glUniform4iv_INDEX 127
#define glUniform4iv_RETURN void
#define glUniform4iv_ARG_NAMES location, count, value
#define glUniform4iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform4iv_PACKED PACKED_glUniform4iv
#define glUniform4iv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniform4iv_NOT_VOID_WRAP(...) {}
#define glUniformMatrix2fv_INDEX 128
#define glUniformMatrix2fv_RETURN void
#define glUniformMatrix2fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix2fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix2fv_PACKED PACKED_glUniformMatrix2fv
#define glUniformMatrix2fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniformMatrix2fv_NOT_VOID_WRAP(...) {}
#define glUniformMatrix3fv_INDEX 129
#define glUniformMatrix3fv_RETURN void
#define glUniformMatrix3fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix3fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix3fv_PACKED PACKED_glUniformMatrix3fv
#define glUniformMatrix3fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniformMatrix3fv_NOT_VOID_WRAP(...) {}
#define glUniformMatrix4fv_INDEX 130
#define glUniformMatrix4fv_RETURN void
#define glUniformMatrix4fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix4fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix4fv_PACKED PACKED_glUniformMatrix4fv
#define glUniformMatrix4fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUniformMatrix4fv_NOT_VOID_WRAP(...) {}
#define glUseProgram_INDEX 131
#define glUseProgram_RETURN void
#define glUseProgram_ARG_NAMES program
#define glUseProgram_ARG_EXPAND GLuint program
#define glUseProgram_PACKED PACKED_glUseProgram
#define glUseProgram_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glUseProgram_NOT_VOID_WRAP(...) {}
#define glValidateProgram_INDEX 132
#define glValidateProgram_RETURN void
#define glValidateProgram_ARG_NAMES program
#define glValidateProgram_ARG_EXPAND GLuint program
#define glValidateProgram_PACKED PACKED_glValidateProgram
#define glValidateProgram_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glValidateProgram_NOT_VOID_WRAP(...) {}
#define glVertexAttrib1f_INDEX 133
#define glVertexAttrib1f_RETURN void
#define glVertexAttrib1f_ARG_NAMES index, x
#define glVertexAttrib1f_ARG_EXPAND GLuint index, GLfloat x
#define glVertexAttrib1f_PACKED PACKED_glVertexAttrib1f
#define glVertexAttrib1f_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glVertexAttrib1f_NOT_VOID_WRAP(...) {}
#define glVertexAttrib1fv_INDEX 134
#define glVertexAttrib1fv_RETURN void
#define glVertexAttrib1fv_ARG_NAMES index, v
#define glVertexAttrib1fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib1fv_PACKED PACKED_glVertexAttrib1fv
#define glVertexAttrib1fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glVertexAttrib1fv_NOT_VOID_WRAP(...) {}
#define glVertexAttrib2f_INDEX 135
#define glVertexAttrib2f_RETURN void
#define glVertexAttrib2f_ARG_NAMES index, x, y
#define glVertexAttrib2f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y
#define glVertexAttrib2f_PACKED PACKED_glVertexAttrib2f
#define glVertexAttrib2f_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glVertexAttrib2f_NOT_VOID_WRAP(...) {}
#define glVertexAttrib2fv_INDEX 136
#define glVertexAttrib2fv_RETURN void
#define glVertexAttrib2fv_ARG_NAMES index, v
#define glVertexAttrib2fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib2fv_PACKED PACKED_glVertexAttrib2fv
#define glVertexAttrib2fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glVertexAttrib2fv_NOT_VOID_WRAP(...) {}
#define glVertexAttrib3f_INDEX 137
#define glVertexAttrib3f_RETURN void
#define glVertexAttrib3f_ARG_NAMES index, x, y, z
#define glVertexAttrib3f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y, GLfloat z
#define glVertexAttrib3f_PACKED PACKED_glVertexAttrib3f
#define glVertexAttrib3f_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glVertexAttrib3f_NOT_VOID_WRAP(...) {}
#define glVertexAttrib3fv_INDEX 138
#define glVertexAttrib3fv_RETURN void
#define glVertexAttrib3fv_ARG_NAMES index, v
#define glVertexAttrib3fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib3fv_PACKED PACKED_glVertexAttrib3fv
#define glVertexAttrib3fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glVertexAttrib3fv_NOT_VOID_WRAP(...) {}
#define glVertexAttrib4f_INDEX 139
#define glVertexAttrib4f_RETURN void
#define glVertexAttrib4f_ARG_NAMES index, x, y, z, w
#define glVertexAttrib4f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w
#define glVertexAttrib4f_PACKED PACKED_glVertexAttrib4f
#define glVertexAttrib4f_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glVertexAttrib4f_NOT_VOID_WRAP(...) {}
#define glVertexAttrib4fv_INDEX 140
#define glVertexAttrib4fv_RETURN void
#define glVertexAttrib4fv_ARG_NAMES index, v
#define glVertexAttrib4fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib4fv_PACKED PACKED_glVertexAttrib4fv
#define glVertexAttrib4fv_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glVertexAttrib4fv_NOT_VOID_WRAP(...) {}
#define glVertexAttribPointer_INDEX 141
#define glVertexAttribPointer_RETURN void
#define glVertexAttribPointer_ARG_NAMES index, size, type, normalized, stride, pointer
#define glVertexAttribPointer_ARG_EXPAND GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer
#define glVertexAttribPointer_PACKED PACKED_glVertexAttribPointer
#define glVertexAttribPointer_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glVertexAttribPointer_NOT_VOID_WRAP(...) {}
#define glViewport_INDEX 142
#define glViewport_RETURN void
#define glViewport_ARG_NAMES x, y, width, height
#define glViewport_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glViewport_PACKED PACKED_glViewport
#define glViewport_VOID_ONLY_WRAP(...) { __VA_ARGS__ }
#define glViewport_NOT_VOID_WRAP(...) {}

void glActiveTexture(glActiveTexture_ARG_EXPAND);
typedef void (*glActiveTexture_PTR)(glActiveTexture_ARG_EXPAND);
void glAttachShader(glAttachShader_ARG_EXPAND);
typedef void (*glAttachShader_PTR)(glAttachShader_ARG_EXPAND);
void glBindAttribLocation(glBindAttribLocation_ARG_EXPAND);
typedef void (*glBindAttribLocation_PTR)(glBindAttribLocation_ARG_EXPAND);
void glBindBuffer(glBindBuffer_ARG_EXPAND);
typedef void (*glBindBuffer_PTR)(glBindBuffer_ARG_EXPAND);
void glBindFramebuffer(glBindFramebuffer_ARG_EXPAND);
typedef void (*glBindFramebuffer_PTR)(glBindFramebuffer_ARG_EXPAND);
void glBindRenderbuffer(glBindRenderbuffer_ARG_EXPAND);
typedef void (*glBindRenderbuffer_PTR)(glBindRenderbuffer_ARG_EXPAND);
void glBindTexture(glBindTexture_ARG_EXPAND);
typedef void (*glBindTexture_PTR)(glBindTexture_ARG_EXPAND);
void glBlendColor(glBlendColor_ARG_EXPAND);
typedef void (*glBlendColor_PTR)(glBlendColor_ARG_EXPAND);
void glBlendEquation(glBlendEquation_ARG_EXPAND);
typedef void (*glBlendEquation_PTR)(glBlendEquation_ARG_EXPAND);
void glBlendEquationSeparate(glBlendEquationSeparate_ARG_EXPAND);
typedef void (*glBlendEquationSeparate_PTR)(glBlendEquationSeparate_ARG_EXPAND);
void glBlendFunc(glBlendFunc_ARG_EXPAND);
typedef void (*glBlendFunc_PTR)(glBlendFunc_ARG_EXPAND);
void glBlendFuncSeparate(glBlendFuncSeparate_ARG_EXPAND);
typedef void (*glBlendFuncSeparate_PTR)(glBlendFuncSeparate_ARG_EXPAND);
void glBufferData(glBufferData_ARG_EXPAND);
typedef void (*glBufferData_PTR)(glBufferData_ARG_EXPAND);
void glBufferSubData(glBufferSubData_ARG_EXPAND);
typedef void (*glBufferSubData_PTR)(glBufferSubData_ARG_EXPAND);
GLenum glCheckFramebufferStatus(glCheckFramebufferStatus_ARG_EXPAND);
typedef GLenum (*glCheckFramebufferStatus_PTR)(glCheckFramebufferStatus_ARG_EXPAND);
void glClear(glClear_ARG_EXPAND);
typedef void (*glClear_PTR)(glClear_ARG_EXPAND);
void glClearColor(glClearColor_ARG_EXPAND);
typedef void (*glClearColor_PTR)(glClearColor_ARG_EXPAND);
void glClearDepthf(glClearDepthf_ARG_EXPAND);
typedef void (*glClearDepthf_PTR)(glClearDepthf_ARG_EXPAND);
void glClearStencil(glClearStencil_ARG_EXPAND);
typedef void (*glClearStencil_PTR)(glClearStencil_ARG_EXPAND);
void glColorMask(glColorMask_ARG_EXPAND);
typedef void (*glColorMask_PTR)(glColorMask_ARG_EXPAND);
void glCompileShader(glCompileShader_ARG_EXPAND);
typedef void (*glCompileShader_PTR)(glCompileShader_ARG_EXPAND);
void glCompressedTexImage2D(glCompressedTexImage2D_ARG_EXPAND);
typedef void (*glCompressedTexImage2D_PTR)(glCompressedTexImage2D_ARG_EXPAND);
void glCompressedTexSubImage2D(glCompressedTexSubImage2D_ARG_EXPAND);
typedef void (*glCompressedTexSubImage2D_PTR)(glCompressedTexSubImage2D_ARG_EXPAND);
void glCopyTexImage2D(glCopyTexImage2D_ARG_EXPAND);
typedef void (*glCopyTexImage2D_PTR)(glCopyTexImage2D_ARG_EXPAND);
void glCopyTexSubImage2D(glCopyTexSubImage2D_ARG_EXPAND);
typedef void (*glCopyTexSubImage2D_PTR)(glCopyTexSubImage2D_ARG_EXPAND);
GLuint glCreateProgram(glCreateProgram_ARG_EXPAND);
typedef GLuint (*glCreateProgram_PTR)(glCreateProgram_ARG_EXPAND);
GLuint glCreateShader(glCreateShader_ARG_EXPAND);
typedef GLuint (*glCreateShader_PTR)(glCreateShader_ARG_EXPAND);
void glCullFace(glCullFace_ARG_EXPAND);
typedef void (*glCullFace_PTR)(glCullFace_ARG_EXPAND);
void glDeleteBuffers(glDeleteBuffers_ARG_EXPAND);
typedef void (*glDeleteBuffers_PTR)(glDeleteBuffers_ARG_EXPAND);
void glDeleteFramebuffers(glDeleteFramebuffers_ARG_EXPAND);
typedef void (*glDeleteFramebuffers_PTR)(glDeleteFramebuffers_ARG_EXPAND);
void glDeleteProgram(glDeleteProgram_ARG_EXPAND);
typedef void (*glDeleteProgram_PTR)(glDeleteProgram_ARG_EXPAND);
void glDeleteRenderbuffers(glDeleteRenderbuffers_ARG_EXPAND);
typedef void (*glDeleteRenderbuffers_PTR)(glDeleteRenderbuffers_ARG_EXPAND);
void glDeleteShader(glDeleteShader_ARG_EXPAND);
typedef void (*glDeleteShader_PTR)(glDeleteShader_ARG_EXPAND);
void glDeleteTextures(glDeleteTextures_ARG_EXPAND);
typedef void (*glDeleteTextures_PTR)(glDeleteTextures_ARG_EXPAND);
void glDepthFunc(glDepthFunc_ARG_EXPAND);
typedef void (*glDepthFunc_PTR)(glDepthFunc_ARG_EXPAND);
void glDepthMask(glDepthMask_ARG_EXPAND);
typedef void (*glDepthMask_PTR)(glDepthMask_ARG_EXPAND);
void glDepthRangef(glDepthRangef_ARG_EXPAND);
typedef void (*glDepthRangef_PTR)(glDepthRangef_ARG_EXPAND);
void glDetachShader(glDetachShader_ARG_EXPAND);
typedef void (*glDetachShader_PTR)(glDetachShader_ARG_EXPAND);
void glDisable(glDisable_ARG_EXPAND);
typedef void (*glDisable_PTR)(glDisable_ARG_EXPAND);
void glDisableVertexAttribArray(glDisableVertexAttribArray_ARG_EXPAND);
typedef void (*glDisableVertexAttribArray_PTR)(glDisableVertexAttribArray_ARG_EXPAND);
void glDrawArrays(glDrawArrays_ARG_EXPAND);
typedef void (*glDrawArrays_PTR)(glDrawArrays_ARG_EXPAND);
void glDrawElements(glDrawElements_ARG_EXPAND);
typedef void (*glDrawElements_PTR)(glDrawElements_ARG_EXPAND);
void glEnable(glEnable_ARG_EXPAND);
typedef void (*glEnable_PTR)(glEnable_ARG_EXPAND);
void glEnableVertexAttribArray(glEnableVertexAttribArray_ARG_EXPAND);
typedef void (*glEnableVertexAttribArray_PTR)(glEnableVertexAttribArray_ARG_EXPAND);
void glFinish(glFinish_ARG_EXPAND);
typedef void (*glFinish_PTR)(glFinish_ARG_EXPAND);
void glFlush(glFlush_ARG_EXPAND);
typedef void (*glFlush_PTR)(glFlush_ARG_EXPAND);
void glFramebufferRenderbuffer(glFramebufferRenderbuffer_ARG_EXPAND);
typedef void (*glFramebufferRenderbuffer_PTR)(glFramebufferRenderbuffer_ARG_EXPAND);
void glFramebufferTexture2D(glFramebufferTexture2D_ARG_EXPAND);
typedef void (*glFramebufferTexture2D_PTR)(glFramebufferTexture2D_ARG_EXPAND);
void glFrontFace(glFrontFace_ARG_EXPAND);
typedef void (*glFrontFace_PTR)(glFrontFace_ARG_EXPAND);
void glGenBuffers(glGenBuffers_ARG_EXPAND);
typedef void (*glGenBuffers_PTR)(glGenBuffers_ARG_EXPAND);
void glGenFramebuffers(glGenFramebuffers_ARG_EXPAND);
typedef void (*glGenFramebuffers_PTR)(glGenFramebuffers_ARG_EXPAND);
void glGenRenderbuffers(glGenRenderbuffers_ARG_EXPAND);
typedef void (*glGenRenderbuffers_PTR)(glGenRenderbuffers_ARG_EXPAND);
void glGenTextures(glGenTextures_ARG_EXPAND);
typedef void (*glGenTextures_PTR)(glGenTextures_ARG_EXPAND);
void glGenerateMipmap(glGenerateMipmap_ARG_EXPAND);
typedef void (*glGenerateMipmap_PTR)(glGenerateMipmap_ARG_EXPAND);
void glGetActiveAttrib(glGetActiveAttrib_ARG_EXPAND);
typedef void (*glGetActiveAttrib_PTR)(glGetActiveAttrib_ARG_EXPAND);
void glGetActiveUniform(glGetActiveUniform_ARG_EXPAND);
typedef void (*glGetActiveUniform_PTR)(glGetActiveUniform_ARG_EXPAND);
void glGetAttachedShaders(glGetAttachedShaders_ARG_EXPAND);
typedef void (*glGetAttachedShaders_PTR)(glGetAttachedShaders_ARG_EXPAND);
GLint glGetAttribLocation(glGetAttribLocation_ARG_EXPAND);
typedef GLint (*glGetAttribLocation_PTR)(glGetAttribLocation_ARG_EXPAND);
void glGetBooleanv(glGetBooleanv_ARG_EXPAND);
typedef void (*glGetBooleanv_PTR)(glGetBooleanv_ARG_EXPAND);
void glGetBufferParameteriv(glGetBufferParameteriv_ARG_EXPAND);
typedef void (*glGetBufferParameteriv_PTR)(glGetBufferParameteriv_ARG_EXPAND);
GLenum glGetError(glGetError_ARG_EXPAND);
typedef GLenum (*glGetError_PTR)(glGetError_ARG_EXPAND);
void glGetFloatv(glGetFloatv_ARG_EXPAND);
typedef void (*glGetFloatv_PTR)(glGetFloatv_ARG_EXPAND);
void glGetFramebufferAttachmentParameteriv(glGetFramebufferAttachmentParameteriv_ARG_EXPAND);
typedef void (*glGetFramebufferAttachmentParameteriv_PTR)(glGetFramebufferAttachmentParameteriv_ARG_EXPAND);
void glGetIntegerv(glGetIntegerv_ARG_EXPAND);
typedef void (*glGetIntegerv_PTR)(glGetIntegerv_ARG_EXPAND);
void glGetProgramInfoLog(glGetProgramInfoLog_ARG_EXPAND);
typedef void (*glGetProgramInfoLog_PTR)(glGetProgramInfoLog_ARG_EXPAND);
void glGetProgramiv(glGetProgramiv_ARG_EXPAND);
typedef void (*glGetProgramiv_PTR)(glGetProgramiv_ARG_EXPAND);
void glGetRenderbufferParameteriv(glGetRenderbufferParameteriv_ARG_EXPAND);
typedef void (*glGetRenderbufferParameteriv_PTR)(glGetRenderbufferParameteriv_ARG_EXPAND);
void glGetShaderInfoLog(glGetShaderInfoLog_ARG_EXPAND);
typedef void (*glGetShaderInfoLog_PTR)(glGetShaderInfoLog_ARG_EXPAND);
void glGetShaderPrecisionFormat(glGetShaderPrecisionFormat_ARG_EXPAND);
typedef void (*glGetShaderPrecisionFormat_PTR)(glGetShaderPrecisionFormat_ARG_EXPAND);
void glGetShaderSource(glGetShaderSource_ARG_EXPAND);
typedef void (*glGetShaderSource_PTR)(glGetShaderSource_ARG_EXPAND);
void glGetShaderiv(glGetShaderiv_ARG_EXPAND);
typedef void (*glGetShaderiv_PTR)(glGetShaderiv_ARG_EXPAND);
const GLubyte * glGetString(glGetString_ARG_EXPAND);
typedef const GLubyte * (*glGetString_PTR)(glGetString_ARG_EXPAND);
void glGetTexParameterfv(glGetTexParameterfv_ARG_EXPAND);
typedef void (*glGetTexParameterfv_PTR)(glGetTexParameterfv_ARG_EXPAND);
void glGetTexParameteriv(glGetTexParameteriv_ARG_EXPAND);
typedef void (*glGetTexParameteriv_PTR)(glGetTexParameteriv_ARG_EXPAND);
GLint glGetUniformLocation(glGetUniformLocation_ARG_EXPAND);
typedef GLint (*glGetUniformLocation_PTR)(glGetUniformLocation_ARG_EXPAND);
void glGetUniformfv(glGetUniformfv_ARG_EXPAND);
typedef void (*glGetUniformfv_PTR)(glGetUniformfv_ARG_EXPAND);
void glGetUniformiv(glGetUniformiv_ARG_EXPAND);
typedef void (*glGetUniformiv_PTR)(glGetUniformiv_ARG_EXPAND);
void glGetVertexAttribPointerv(glGetVertexAttribPointerv_ARG_EXPAND);
typedef void (*glGetVertexAttribPointerv_PTR)(glGetVertexAttribPointerv_ARG_EXPAND);
void glGetVertexAttribfv(glGetVertexAttribfv_ARG_EXPAND);
typedef void (*glGetVertexAttribfv_PTR)(glGetVertexAttribfv_ARG_EXPAND);
void glGetVertexAttribiv(glGetVertexAttribiv_ARG_EXPAND);
typedef void (*glGetVertexAttribiv_PTR)(glGetVertexAttribiv_ARG_EXPAND);
void glHint(glHint_ARG_EXPAND);
typedef void (*glHint_PTR)(glHint_ARG_EXPAND);
GLboolean glIsBuffer(glIsBuffer_ARG_EXPAND);
typedef GLboolean (*glIsBuffer_PTR)(glIsBuffer_ARG_EXPAND);
GLboolean glIsEnabled(glIsEnabled_ARG_EXPAND);
typedef GLboolean (*glIsEnabled_PTR)(glIsEnabled_ARG_EXPAND);
GLboolean glIsFramebuffer(glIsFramebuffer_ARG_EXPAND);
typedef GLboolean (*glIsFramebuffer_PTR)(glIsFramebuffer_ARG_EXPAND);
GLboolean glIsProgram(glIsProgram_ARG_EXPAND);
typedef GLboolean (*glIsProgram_PTR)(glIsProgram_ARG_EXPAND);
GLboolean glIsRenderbuffer(glIsRenderbuffer_ARG_EXPAND);
typedef GLboolean (*glIsRenderbuffer_PTR)(glIsRenderbuffer_ARG_EXPAND);
GLboolean glIsShader(glIsShader_ARG_EXPAND);
typedef GLboolean (*glIsShader_PTR)(glIsShader_ARG_EXPAND);
GLboolean glIsTexture(glIsTexture_ARG_EXPAND);
typedef GLboolean (*glIsTexture_PTR)(glIsTexture_ARG_EXPAND);
void glLineWidth(glLineWidth_ARG_EXPAND);
typedef void (*glLineWidth_PTR)(glLineWidth_ARG_EXPAND);
void glLinkProgram(glLinkProgram_ARG_EXPAND);
typedef void (*glLinkProgram_PTR)(glLinkProgram_ARG_EXPAND);
void glPixelStorei(glPixelStorei_ARG_EXPAND);
typedef void (*glPixelStorei_PTR)(glPixelStorei_ARG_EXPAND);
void glPolygonOffset(glPolygonOffset_ARG_EXPAND);
typedef void (*glPolygonOffset_PTR)(glPolygonOffset_ARG_EXPAND);
void glReadPixels(glReadPixels_ARG_EXPAND);
typedef void (*glReadPixels_PTR)(glReadPixels_ARG_EXPAND);
void glReleaseShaderCompiler(glReleaseShaderCompiler_ARG_EXPAND);
typedef void (*glReleaseShaderCompiler_PTR)(glReleaseShaderCompiler_ARG_EXPAND);
void glRenderbufferStorage(glRenderbufferStorage_ARG_EXPAND);
typedef void (*glRenderbufferStorage_PTR)(glRenderbufferStorage_ARG_EXPAND);
void glSampleCoverage(glSampleCoverage_ARG_EXPAND);
typedef void (*glSampleCoverage_PTR)(glSampleCoverage_ARG_EXPAND);
void glScissor(glScissor_ARG_EXPAND);
typedef void (*glScissor_PTR)(glScissor_ARG_EXPAND);
void glShaderBinary(glShaderBinary_ARG_EXPAND);
typedef void (*glShaderBinary_PTR)(glShaderBinary_ARG_EXPAND);
void glShaderSource(glShaderSource_ARG_EXPAND);
typedef void (*glShaderSource_PTR)(glShaderSource_ARG_EXPAND);
void glStencilFunc(glStencilFunc_ARG_EXPAND);
typedef void (*glStencilFunc_PTR)(glStencilFunc_ARG_EXPAND);
void glStencilFuncSeparate(glStencilFuncSeparate_ARG_EXPAND);
typedef void (*glStencilFuncSeparate_PTR)(glStencilFuncSeparate_ARG_EXPAND);
void glStencilMask(glStencilMask_ARG_EXPAND);
typedef void (*glStencilMask_PTR)(glStencilMask_ARG_EXPAND);
void glStencilMaskSeparate(glStencilMaskSeparate_ARG_EXPAND);
typedef void (*glStencilMaskSeparate_PTR)(glStencilMaskSeparate_ARG_EXPAND);
void glStencilOp(glStencilOp_ARG_EXPAND);
typedef void (*glStencilOp_PTR)(glStencilOp_ARG_EXPAND);
void glStencilOpSeparate(glStencilOpSeparate_ARG_EXPAND);
typedef void (*glStencilOpSeparate_PTR)(glStencilOpSeparate_ARG_EXPAND);
void glTexImage2D(glTexImage2D_ARG_EXPAND);
typedef void (*glTexImage2D_PTR)(glTexImage2D_ARG_EXPAND);
void glTexParameterf(glTexParameterf_ARG_EXPAND);
typedef void (*glTexParameterf_PTR)(glTexParameterf_ARG_EXPAND);
void glTexParameterfv(glTexParameterfv_ARG_EXPAND);
typedef void (*glTexParameterfv_PTR)(glTexParameterfv_ARG_EXPAND);
void glTexParameteri(glTexParameteri_ARG_EXPAND);
typedef void (*glTexParameteri_PTR)(glTexParameteri_ARG_EXPAND);
void glTexParameteriv(glTexParameteriv_ARG_EXPAND);
typedef void (*glTexParameteriv_PTR)(glTexParameteriv_ARG_EXPAND);
void glTexSubImage2D(glTexSubImage2D_ARG_EXPAND);
typedef void (*glTexSubImage2D_PTR)(glTexSubImage2D_ARG_EXPAND);
void glUniform1f(glUniform1f_ARG_EXPAND);
typedef void (*glUniform1f_PTR)(glUniform1f_ARG_EXPAND);
void glUniform1fv(glUniform1fv_ARG_EXPAND);
typedef void (*glUniform1fv_PTR)(glUniform1fv_ARG_EXPAND);
void glUniform1i(glUniform1i_ARG_EXPAND);
typedef void (*glUniform1i_PTR)(glUniform1i_ARG_EXPAND);
void glUniform1iv(glUniform1iv_ARG_EXPAND);
typedef void (*glUniform1iv_PTR)(glUniform1iv_ARG_EXPAND);
void glUniform2f(glUniform2f_ARG_EXPAND);
typedef void (*glUniform2f_PTR)(glUniform2f_ARG_EXPAND);
void glUniform2fv(glUniform2fv_ARG_EXPAND);
typedef void (*glUniform2fv_PTR)(glUniform2fv_ARG_EXPAND);
void glUniform2i(glUniform2i_ARG_EXPAND);
typedef void (*glUniform2i_PTR)(glUniform2i_ARG_EXPAND);
void glUniform2iv(glUniform2iv_ARG_EXPAND);
typedef void (*glUniform2iv_PTR)(glUniform2iv_ARG_EXPAND);
void glUniform3f(glUniform3f_ARG_EXPAND);
typedef void (*glUniform3f_PTR)(glUniform3f_ARG_EXPAND);
void glUniform3fv(glUniform3fv_ARG_EXPAND);
typedef void (*glUniform3fv_PTR)(glUniform3fv_ARG_EXPAND);
void glUniform3i(glUniform3i_ARG_EXPAND);
typedef void (*glUniform3i_PTR)(glUniform3i_ARG_EXPAND);
void glUniform3iv(glUniform3iv_ARG_EXPAND);
typedef void (*glUniform3iv_PTR)(glUniform3iv_ARG_EXPAND);
void glUniform4f(glUniform4f_ARG_EXPAND);
typedef void (*glUniform4f_PTR)(glUniform4f_ARG_EXPAND);
void glUniform4fv(glUniform4fv_ARG_EXPAND);
typedef void (*glUniform4fv_PTR)(glUniform4fv_ARG_EXPAND);
void glUniform4i(glUniform4i_ARG_EXPAND);
typedef void (*glUniform4i_PTR)(glUniform4i_ARG_EXPAND);
void glUniform4iv(glUniform4iv_ARG_EXPAND);
typedef void (*glUniform4iv_PTR)(glUniform4iv_ARG_EXPAND);
void glUniformMatrix2fv(glUniformMatrix2fv_ARG_EXPAND);
typedef void (*glUniformMatrix2fv_PTR)(glUniformMatrix2fv_ARG_EXPAND);
void glUniformMatrix3fv(glUniformMatrix3fv_ARG_EXPAND);
typedef void (*glUniformMatrix3fv_PTR)(glUniformMatrix3fv_ARG_EXPAND);
void glUniformMatrix4fv(glUniformMatrix4fv_ARG_EXPAND);
typedef void (*glUniformMatrix4fv_PTR)(glUniformMatrix4fv_ARG_EXPAND);
void glUseProgram(glUseProgram_ARG_EXPAND);
typedef void (*glUseProgram_PTR)(glUseProgram_ARG_EXPAND);
void glValidateProgram(glValidateProgram_ARG_EXPAND);
typedef void (*glValidateProgram_PTR)(glValidateProgram_ARG_EXPAND);
void glVertexAttrib1f(glVertexAttrib1f_ARG_EXPAND);
typedef void (*glVertexAttrib1f_PTR)(glVertexAttrib1f_ARG_EXPAND);
void glVertexAttrib1fv(glVertexAttrib1fv_ARG_EXPAND);
typedef void (*glVertexAttrib1fv_PTR)(glVertexAttrib1fv_ARG_EXPAND);
void glVertexAttrib2f(glVertexAttrib2f_ARG_EXPAND);
typedef void (*glVertexAttrib2f_PTR)(glVertexAttrib2f_ARG_EXPAND);
void glVertexAttrib2fv(glVertexAttrib2fv_ARG_EXPAND);
typedef void (*glVertexAttrib2fv_PTR)(glVertexAttrib2fv_ARG_EXPAND);
void glVertexAttrib3f(glVertexAttrib3f_ARG_EXPAND);
typedef void (*glVertexAttrib3f_PTR)(glVertexAttrib3f_ARG_EXPAND);
void glVertexAttrib3fv(glVertexAttrib3fv_ARG_EXPAND);
typedef void (*glVertexAttrib3fv_PTR)(glVertexAttrib3fv_ARG_EXPAND);
void glVertexAttrib4f(glVertexAttrib4f_ARG_EXPAND);
typedef void (*glVertexAttrib4f_PTR)(glVertexAttrib4f_ARG_EXPAND);
void glVertexAttrib4fv(glVertexAttrib4fv_ARG_EXPAND);
typedef void (*glVertexAttrib4fv_PTR)(glVertexAttrib4fv_ARG_EXPAND);
void glVertexAttribPointer(glVertexAttribPointer_ARG_EXPAND);
typedef void (*glVertexAttribPointer_PTR)(glVertexAttribPointer_ARG_EXPAND);
void glViewport(glViewport_ARG_EXPAND);
typedef void (*glViewport_PTR)(glViewport_ARG_EXPAND);


#define pack_glActiveTexture(_texture) ({ \
    glActiveTexture_PACKED *packed_data = malloc(sizeof(glActiveTexture_PACKED)); \
    packed_data->index = glActiveTexture_INDEX; \
    packed_data->args.texture = (GLenum)_texture; \
    (packed_call_t *)packed_data; \
})
#define pack_glAttachShader(_program, _shader) ({ \
    glAttachShader_PACKED *packed_data = malloc(sizeof(glAttachShader_PACKED)); \
    packed_data->index = glAttachShader_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.shader = (GLuint)_shader; \
    (packed_call_t *)packed_data; \
})
#define pack_glBindAttribLocation(_program, _index, _name) ({ \
    glBindAttribLocation_PACKED *packed_data = malloc(sizeof(glBindAttribLocation_PACKED)); \
    packed_data->index = glBindAttribLocation_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.name = (GLchar *)_name; \
    (packed_call_t *)packed_data; \
})
#define pack_glBindBuffer(_target, _buffer) ({ \
    glBindBuffer_PACKED *packed_data = malloc(sizeof(glBindBuffer_PACKED)); \
    packed_data->index = glBindBuffer_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.buffer = (GLuint)_buffer; \
    (packed_call_t *)packed_data; \
})
#define pack_glBindFramebuffer(_target, _framebuffer) ({ \
    glBindFramebuffer_PACKED *packed_data = malloc(sizeof(glBindFramebuffer_PACKED)); \
    packed_data->index = glBindFramebuffer_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.framebuffer = (GLuint)_framebuffer; \
    (packed_call_t *)packed_data; \
})
#define pack_glBindRenderbuffer(_target, _renderbuffer) ({ \
    glBindRenderbuffer_PACKED *packed_data = malloc(sizeof(glBindRenderbuffer_PACKED)); \
    packed_data->index = glBindRenderbuffer_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.renderbuffer = (GLuint)_renderbuffer; \
    (packed_call_t *)packed_data; \
})
#define pack_glBindTexture(_target, _texture) ({ \
    glBindTexture_PACKED *packed_data = malloc(sizeof(glBindTexture_PACKED)); \
    packed_data->index = glBindTexture_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.texture = (GLuint)_texture; \
    (packed_call_t *)packed_data; \
})
#define pack_glBlendColor(_red, _green, _blue, _alpha) ({ \
    glBlendColor_PACKED *packed_data = malloc(sizeof(glBlendColor_PACKED)); \
    packed_data->index = glBlendColor_INDEX; \
    packed_data->args.red = (GLclampf)_red; \
    packed_data->args.green = (GLclampf)_green; \
    packed_data->args.blue = (GLclampf)_blue; \
    packed_data->args.alpha = (GLclampf)_alpha; \
    (packed_call_t *)packed_data; \
})
#define pack_glBlendEquation(_mode) ({ \
    glBlendEquation_PACKED *packed_data = malloc(sizeof(glBlendEquation_PACKED)); \
    packed_data->index = glBlendEquation_INDEX; \
    packed_data->args.mode = (GLenum)_mode; \
    (packed_call_t *)packed_data; \
})
#define pack_glBlendEquationSeparate(_modeRGB, _modeA) ({ \
    glBlendEquationSeparate_PACKED *packed_data = malloc(sizeof(glBlendEquationSeparate_PACKED)); \
    packed_data->index = glBlendEquationSeparate_INDEX; \
    packed_data->args.modeRGB = (GLenum)_modeRGB; \
    packed_data->args.modeA = (GLenum)_modeA; \
    (packed_call_t *)packed_data; \
})
#define pack_glBlendFunc(_sfactor, _dfactor) ({ \
    glBlendFunc_PACKED *packed_data = malloc(sizeof(glBlendFunc_PACKED)); \
    packed_data->index = glBlendFunc_INDEX; \
    packed_data->args.sfactor = (GLenum)_sfactor; \
    packed_data->args.dfactor = (GLenum)_dfactor; \
    (packed_call_t *)packed_data; \
})
#define pack_glBlendFuncSeparate(_sfactorRGB, _dfactorRGB, _sfactorAlpha, _dfactorAlpha) ({ \
    glBlendFuncSeparate_PACKED *packed_data = malloc(sizeof(glBlendFuncSeparate_PACKED)); \
    packed_data->index = glBlendFuncSeparate_INDEX; \
    packed_data->args.sfactorRGB = (GLenum)_sfactorRGB; \
    packed_data->args.dfactorRGB = (GLenum)_dfactorRGB; \
    packed_data->args.sfactorAlpha = (GLenum)_sfactorAlpha; \
    packed_data->args.dfactorAlpha = (GLenum)_dfactorAlpha; \
    (packed_call_t *)packed_data; \
})
#define pack_glBufferData(_target, _size, _data, _usage) ({ \
    glBufferData_PACKED *packed_data = malloc(sizeof(glBufferData_PACKED)); \
    packed_data->index = glBufferData_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.size = (GLsizeiptr)_size; \
    packed_data->args.data = (GLvoid *)_data; \
    packed_data->args.usage = (GLenum)_usage; \
    (packed_call_t *)packed_data; \
})
#define pack_glBufferSubData(_target, _offset, _size, _data) ({ \
    glBufferSubData_PACKED *packed_data = malloc(sizeof(glBufferSubData_PACKED)); \
    packed_data->index = glBufferSubData_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.offset = (GLintptr)_offset; \
    packed_data->args.size = (GLsizeiptr)_size; \
    packed_data->args.data = (GLvoid *)_data; \
    (packed_call_t *)packed_data; \
})
#define pack_glCheckFramebufferStatus(_target) ({ \
    glCheckFramebufferStatus_PACKED *packed_data = malloc(sizeof(glCheckFramebufferStatus_PACKED)); \
    packed_data->index = glCheckFramebufferStatus_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    (packed_call_t *)packed_data; \
})
#define pack_glClear(_mask) ({ \
    glClear_PACKED *packed_data = malloc(sizeof(glClear_PACKED)); \
    packed_data->index = glClear_INDEX; \
    packed_data->args.mask = (GLbitfield)_mask; \
    (packed_call_t *)packed_data; \
})
#define pack_glClearColor(_red, _green, _blue, _alpha) ({ \
    glClearColor_PACKED *packed_data = malloc(sizeof(glClearColor_PACKED)); \
    packed_data->index = glClearColor_INDEX; \
    packed_data->args.red = (GLclampf)_red; \
    packed_data->args.green = (GLclampf)_green; \
    packed_data->args.blue = (GLclampf)_blue; \
    packed_data->args.alpha = (GLclampf)_alpha; \
    (packed_call_t *)packed_data; \
})
#define pack_glClearDepthf(_depth) ({ \
    glClearDepthf_PACKED *packed_data = malloc(sizeof(glClearDepthf_PACKED)); \
    packed_data->index = glClearDepthf_INDEX; \
    packed_data->args.depth = (GLclampf)_depth; \
    (packed_call_t *)packed_data; \
})
#define pack_glClearStencil(_s) ({ \
    glClearStencil_PACKED *packed_data = malloc(sizeof(glClearStencil_PACKED)); \
    packed_data->index = glClearStencil_INDEX; \
    packed_data->args.s = (GLint)_s; \
    (packed_call_t *)packed_data; \
})
#define pack_glColorMask(_red, _green, _blue, _alpha) ({ \
    glColorMask_PACKED *packed_data = malloc(sizeof(glColorMask_PACKED)); \
    packed_data->index = glColorMask_INDEX; \
    packed_data->args.red = (GLboolean)_red; \
    packed_data->args.green = (GLboolean)_green; \
    packed_data->args.blue = (GLboolean)_blue; \
    packed_data->args.alpha = (GLboolean)_alpha; \
    (packed_call_t *)packed_data; \
})
#define pack_glCompileShader(_shader) ({ \
    glCompileShader_PACKED *packed_data = malloc(sizeof(glCompileShader_PACKED)); \
    packed_data->index = glCompileShader_INDEX; \
    packed_data->args.shader = (GLuint)_shader; \
    (packed_call_t *)packed_data; \
})
#define pack_glCompressedTexImage2D(_target, _level, _internalformat, _width, _height, _border, _imageSize, _data) ({ \
    glCompressedTexImage2D_PACKED *packed_data = malloc(sizeof(glCompressedTexImage2D_PACKED)); \
    packed_data->index = glCompressedTexImage2D_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.level = (GLint)_level; \
    packed_data->args.internalformat = (GLenum)_internalformat; \
    packed_data->args.width = (GLsizei)_width; \
    packed_data->args.height = (GLsizei)_height; \
    packed_data->args.border = (GLint)_border; \
    packed_data->args.imageSize = (GLsizei)_imageSize; \
    packed_data->args.data = (GLvoid *)_data; \
    (packed_call_t *)packed_data; \
})
#define pack_glCompressedTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _imageSize, _data) ({ \
    glCompressedTexSubImage2D_PACKED *packed_data = malloc(sizeof(glCompressedTexSubImage2D_PACKED)); \
    packed_data->index = glCompressedTexSubImage2D_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.level = (GLint)_level; \
    packed_data->args.xoffset = (GLint)_xoffset; \
    packed_data->args.yoffset = (GLint)_yoffset; \
    packed_data->args.width = (GLsizei)_width; \
    packed_data->args.height = (GLsizei)_height; \
    packed_data->args.format = (GLenum)_format; \
    packed_data->args.imageSize = (GLsizei)_imageSize; \
    packed_data->args.data = (GLvoid *)_data; \
    (packed_call_t *)packed_data; \
})
#define pack_glCopyTexImage2D(_target, _level, _internalformat, _x, _y, _width, _height, _border) ({ \
    glCopyTexImage2D_PACKED *packed_data = malloc(sizeof(glCopyTexImage2D_PACKED)); \
    packed_data->index = glCopyTexImage2D_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.level = (GLint)_level; \
    packed_data->args.internalformat = (GLenum)_internalformat; \
    packed_data->args.x = (GLint)_x; \
    packed_data->args.y = (GLint)_y; \
    packed_data->args.width = (GLsizei)_width; \
    packed_data->args.height = (GLsizei)_height; \
    packed_data->args.border = (GLint)_border; \
    (packed_call_t *)packed_data; \
})
#define pack_glCopyTexSubImage2D(_target, _level, _xoffset, _yoffset, _x, _y, _width, _height) ({ \
    glCopyTexSubImage2D_PACKED *packed_data = malloc(sizeof(glCopyTexSubImage2D_PACKED)); \
    packed_data->index = glCopyTexSubImage2D_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.level = (GLint)_level; \
    packed_data->args.xoffset = (GLint)_xoffset; \
    packed_data->args.yoffset = (GLint)_yoffset; \
    packed_data->args.x = (GLint)_x; \
    packed_data->args.y = (GLint)_y; \
    packed_data->args.width = (GLsizei)_width; \
    packed_data->args.height = (GLsizei)_height; \
    (packed_call_t *)packed_data; \
})
#define pack_glCreateProgram() ({ \
    glCreateProgram_PACKED *packed_data = malloc(sizeof(glCreateProgram_PACKED)); \
    packed_data->index = glCreateProgram_INDEX; \
    (packed_call_t *)packed_data; \
})
#define pack_glCreateShader(_type) ({ \
    glCreateShader_PACKED *packed_data = malloc(sizeof(glCreateShader_PACKED)); \
    packed_data->index = glCreateShader_INDEX; \
    packed_data->args.type = (GLenum)_type; \
    (packed_call_t *)packed_data; \
})
#define pack_glCullFace(_mode) ({ \
    glCullFace_PACKED *packed_data = malloc(sizeof(glCullFace_PACKED)); \
    packed_data->index = glCullFace_INDEX; \
    packed_data->args.mode = (GLenum)_mode; \
    (packed_call_t *)packed_data; \
})
#define pack_glDeleteBuffers(_n, _buffer) ({ \
    glDeleteBuffers_PACKED *packed_data = malloc(sizeof(glDeleteBuffers_PACKED)); \
    packed_data->index = glDeleteBuffers_INDEX; \
    packed_data->args.n = (GLsizei)_n; \
    packed_data->args.buffer = (GLuint *)_buffer; \
    (packed_call_t *)packed_data; \
})
#define pack_glDeleteFramebuffers(_n, _framebuffers) ({ \
    glDeleteFramebuffers_PACKED *packed_data = malloc(sizeof(glDeleteFramebuffers_PACKED)); \
    packed_data->index = glDeleteFramebuffers_INDEX; \
    packed_data->args.n = (GLsizei)_n; \
    packed_data->args.framebuffers = (GLuint *)_framebuffers; \
    (packed_call_t *)packed_data; \
})
#define pack_glDeleteProgram(_program) ({ \
    glDeleteProgram_PACKED *packed_data = malloc(sizeof(glDeleteProgram_PACKED)); \
    packed_data->index = glDeleteProgram_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    (packed_call_t *)packed_data; \
})
#define pack_glDeleteRenderbuffers(_n, _renderbuffers) ({ \
    glDeleteRenderbuffers_PACKED *packed_data = malloc(sizeof(glDeleteRenderbuffers_PACKED)); \
    packed_data->index = glDeleteRenderbuffers_INDEX; \
    packed_data->args.n = (GLsizei)_n; \
    packed_data->args.renderbuffers = (GLuint *)_renderbuffers; \
    (packed_call_t *)packed_data; \
})
#define pack_glDeleteShader(_program) ({ \
    glDeleteShader_PACKED *packed_data = malloc(sizeof(glDeleteShader_PACKED)); \
    packed_data->index = glDeleteShader_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    (packed_call_t *)packed_data; \
})
#define pack_glDeleteTextures(_n, _textures) ({ \
    glDeleteTextures_PACKED *packed_data = malloc(sizeof(glDeleteTextures_PACKED)); \
    packed_data->index = glDeleteTextures_INDEX; \
    packed_data->args.n = (GLsizei)_n; \
    packed_data->args.textures = (GLuint *)_textures; \
    (packed_call_t *)packed_data; \
})
#define pack_glDepthFunc(_func) ({ \
    glDepthFunc_PACKED *packed_data = malloc(sizeof(glDepthFunc_PACKED)); \
    packed_data->index = glDepthFunc_INDEX; \
    packed_data->args.func = (GLenum)_func; \
    (packed_call_t *)packed_data; \
})
#define pack_glDepthMask(_flag) ({ \
    glDepthMask_PACKED *packed_data = malloc(sizeof(glDepthMask_PACKED)); \
    packed_data->index = glDepthMask_INDEX; \
    packed_data->args.flag = (GLboolean)_flag; \
    (packed_call_t *)packed_data; \
})
#define pack_glDepthRangef(_near, _far) ({ \
    glDepthRangef_PACKED *packed_data = malloc(sizeof(glDepthRangef_PACKED)); \
    packed_data->index = glDepthRangef_INDEX; \
    packed_data->args.near = (GLclampf)_near; \
    packed_data->args.far = (GLclampf)_far; \
    (packed_call_t *)packed_data; \
})
#define pack_glDetachShader(_program, _shader) ({ \
    glDetachShader_PACKED *packed_data = malloc(sizeof(glDetachShader_PACKED)); \
    packed_data->index = glDetachShader_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.shader = (GLuint)_shader; \
    (packed_call_t *)packed_data; \
})
#define pack_glDisable(_cap) ({ \
    glDisable_PACKED *packed_data = malloc(sizeof(glDisable_PACKED)); \
    packed_data->index = glDisable_INDEX; \
    packed_data->args.cap = (GLenum)_cap; \
    (packed_call_t *)packed_data; \
})
#define pack_glDisableVertexAttribArray(_index) ({ \
    glDisableVertexAttribArray_PACKED *packed_data = malloc(sizeof(glDisableVertexAttribArray_PACKED)); \
    packed_data->index = glDisableVertexAttribArray_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    (packed_call_t *)packed_data; \
})
#define pack_glDrawArrays(_mode, _first, _count) ({ \
    glDrawArrays_PACKED *packed_data = malloc(sizeof(glDrawArrays_PACKED)); \
    packed_data->index = glDrawArrays_INDEX; \
    packed_data->args.mode = (GLenum)_mode; \
    packed_data->args.first = (GLint)_first; \
    packed_data->args.count = (GLsizei)_count; \
    (packed_call_t *)packed_data; \
})
#define pack_glDrawElements(_mode, _count, _type, _indices) ({ \
    glDrawElements_PACKED *packed_data = malloc(sizeof(glDrawElements_PACKED)); \
    packed_data->index = glDrawElements_INDEX; \
    packed_data->args.mode = (GLenum)_mode; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.type = (GLenum)_type; \
    packed_data->args.indices = (GLvoid *)_indices; \
    (packed_call_t *)packed_data; \
})
#define pack_glEnable(_cap) ({ \
    glEnable_PACKED *packed_data = malloc(sizeof(glEnable_PACKED)); \
    packed_data->index = glEnable_INDEX; \
    packed_data->args.cap = (GLenum)_cap; \
    (packed_call_t *)packed_data; \
})
#define pack_glEnableVertexAttribArray(_index) ({ \
    glEnableVertexAttribArray_PACKED *packed_data = malloc(sizeof(glEnableVertexAttribArray_PACKED)); \
    packed_data->index = glEnableVertexAttribArray_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    (packed_call_t *)packed_data; \
})
#define pack_glFinish() ({ \
    glFinish_PACKED *packed_data = malloc(sizeof(glFinish_PACKED)); \
    packed_data->index = glFinish_INDEX; \
    (packed_call_t *)packed_data; \
})
#define pack_glFlush() ({ \
    glFlush_PACKED *packed_data = malloc(sizeof(glFlush_PACKED)); \
    packed_data->index = glFlush_INDEX; \
    (packed_call_t *)packed_data; \
})
#define pack_glFramebufferRenderbuffer(_target, _attachment, _renderbuffertarget, _renderbuffer) ({ \
    glFramebufferRenderbuffer_PACKED *packed_data = malloc(sizeof(glFramebufferRenderbuffer_PACKED)); \
    packed_data->index = glFramebufferRenderbuffer_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.attachment = (GLenum)_attachment; \
    packed_data->args.renderbuffertarget = (GLenum)_renderbuffertarget; \
    packed_data->args.renderbuffer = (GLuint)_renderbuffer; \
    (packed_call_t *)packed_data; \
})
#define pack_glFramebufferTexture2D(_target, _attachment, _textarget, _texture, _level) ({ \
    glFramebufferTexture2D_PACKED *packed_data = malloc(sizeof(glFramebufferTexture2D_PACKED)); \
    packed_data->index = glFramebufferTexture2D_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.attachment = (GLenum)_attachment; \
    packed_data->args.textarget = (GLenum)_textarget; \
    packed_data->args.texture = (GLuint)_texture; \
    packed_data->args.level = (GLint)_level; \
    (packed_call_t *)packed_data; \
})
#define pack_glFrontFace(_mode) ({ \
    glFrontFace_PACKED *packed_data = malloc(sizeof(glFrontFace_PACKED)); \
    packed_data->index = glFrontFace_INDEX; \
    packed_data->args.mode = (GLenum)_mode; \
    (packed_call_t *)packed_data; \
})
#define pack_glGenBuffers(_n, _buffer) ({ \
    glGenBuffers_PACKED *packed_data = malloc(sizeof(glGenBuffers_PACKED)); \
    packed_data->index = glGenBuffers_INDEX; \
    packed_data->args.n = (GLsizei)_n; \
    packed_data->args.buffer = (GLuint *)_buffer; \
    (packed_call_t *)packed_data; \
})
#define pack_glGenFramebuffers(_n, _framebuffers) ({ \
    glGenFramebuffers_PACKED *packed_data = malloc(sizeof(glGenFramebuffers_PACKED)); \
    packed_data->index = glGenFramebuffers_INDEX; \
    packed_data->args.n = (GLsizei)_n; \
    packed_data->args.framebuffers = (GLuint *)_framebuffers; \
    (packed_call_t *)packed_data; \
})
#define pack_glGenRenderbuffers(_n, _renderbuffers) ({ \
    glGenRenderbuffers_PACKED *packed_data = malloc(sizeof(glGenRenderbuffers_PACKED)); \
    packed_data->index = glGenRenderbuffers_INDEX; \
    packed_data->args.n = (GLsizei)_n; \
    packed_data->args.renderbuffers = (GLuint *)_renderbuffers; \
    (packed_call_t *)packed_data; \
})
#define pack_glGenTextures(_n, _textures) ({ \
    glGenTextures_PACKED *packed_data = malloc(sizeof(glGenTextures_PACKED)); \
    packed_data->index = glGenTextures_INDEX; \
    packed_data->args.n = (GLsizei)_n; \
    packed_data->args.textures = (GLuint *)_textures; \
    (packed_call_t *)packed_data; \
})
#define pack_glGenerateMipmap(_target) ({ \
    glGenerateMipmap_PACKED *packed_data = malloc(sizeof(glGenerateMipmap_PACKED)); \
    packed_data->index = glGenerateMipmap_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetActiveAttrib(_program, _index, _bufSize, _length, _size, _type, _name) ({ \
    glGetActiveAttrib_PACKED *packed_data = malloc(sizeof(glGetActiveAttrib_PACKED)); \
    packed_data->index = glGetActiveAttrib_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.bufSize = (GLsizei)_bufSize; \
    packed_data->args.length = (GLsizei *)_length; \
    packed_data->args.size = (GLint *)_size; \
    packed_data->args.type = (GLenum *)_type; \
    packed_data->args.name = (GLchar *)_name; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetActiveUniform(_program, _index, _bufSize, _length, _size, _type, _name) ({ \
    glGetActiveUniform_PACKED *packed_data = malloc(sizeof(glGetActiveUniform_PACKED)); \
    packed_data->index = glGetActiveUniform_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.bufSize = (GLsizei)_bufSize; \
    packed_data->args.length = (GLsizei *)_length; \
    packed_data->args.size = (GLint *)_size; \
    packed_data->args.type = (GLenum *)_type; \
    packed_data->args.name = (GLchar *)_name; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetAttachedShaders(_program, _maxCount, _count, _obj) ({ \
    glGetAttachedShaders_PACKED *packed_data = malloc(sizeof(glGetAttachedShaders_PACKED)); \
    packed_data->index = glGetAttachedShaders_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.maxCount = (GLsizei)_maxCount; \
    packed_data->args.count = (GLsizei *)_count; \
    packed_data->args.obj = (GLuint *)_obj; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetAttribLocation(_program, _name) ({ \
    glGetAttribLocation_PACKED *packed_data = malloc(sizeof(glGetAttribLocation_PACKED)); \
    packed_data->index = glGetAttribLocation_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.name = (GLchar *)_name; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetBooleanv(_pname, _params) ({ \
    glGetBooleanv_PACKED *packed_data = malloc(sizeof(glGetBooleanv_PACKED)); \
    packed_data->index = glGetBooleanv_INDEX; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLboolean *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetBufferParameteriv(_target, _pname, _params) ({ \
    glGetBufferParameteriv_PACKED *packed_data = malloc(sizeof(glGetBufferParameteriv_PACKED)); \
    packed_data->index = glGetBufferParameteriv_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLint *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetError() ({ \
    glGetError_PACKED *packed_data = malloc(sizeof(glGetError_PACKED)); \
    packed_data->index = glGetError_INDEX; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetFloatv(_pname, _params) ({ \
    glGetFloatv_PACKED *packed_data = malloc(sizeof(glGetFloatv_PACKED)); \
    packed_data->index = glGetFloatv_INDEX; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLfloat *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetFramebufferAttachmentParameteriv(_target, _attachment, _pname, _params) ({ \
    glGetFramebufferAttachmentParameteriv_PACKED *packed_data = malloc(sizeof(glGetFramebufferAttachmentParameteriv_PACKED)); \
    packed_data->index = glGetFramebufferAttachmentParameteriv_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.attachment = (GLenum)_attachment; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLint *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetIntegerv(_pname, _params) ({ \
    glGetIntegerv_PACKED *packed_data = malloc(sizeof(glGetIntegerv_PACKED)); \
    packed_data->index = glGetIntegerv_INDEX; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLint *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetProgramInfoLog(_program, _bufSize, _length, _infoLog) ({ \
    glGetProgramInfoLog_PACKED *packed_data = malloc(sizeof(glGetProgramInfoLog_PACKED)); \
    packed_data->index = glGetProgramInfoLog_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.bufSize = (GLsizei)_bufSize; \
    packed_data->args.length = (GLsizei *)_length; \
    packed_data->args.infoLog = (GLchar *)_infoLog; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetProgramiv(_program, _pname, _params) ({ \
    glGetProgramiv_PACKED *packed_data = malloc(sizeof(glGetProgramiv_PACKED)); \
    packed_data->index = glGetProgramiv_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLint *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetRenderbufferParameteriv(_target, _pname, _params) ({ \
    glGetRenderbufferParameteriv_PACKED *packed_data = malloc(sizeof(glGetRenderbufferParameteriv_PACKED)); \
    packed_data->index = glGetRenderbufferParameteriv_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLint *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetShaderInfoLog(_shader, _bufSize, _length, _infoLog) ({ \
    glGetShaderInfoLog_PACKED *packed_data = malloc(sizeof(glGetShaderInfoLog_PACKED)); \
    packed_data->index = glGetShaderInfoLog_INDEX; \
    packed_data->args.shader = (GLuint)_shader; \
    packed_data->args.bufSize = (GLsizei)_bufSize; \
    packed_data->args.length = (GLsizei *)_length; \
    packed_data->args.infoLog = (GLchar *)_infoLog; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetShaderPrecisionFormat(_shadertype, _precisiontype, _range, _precision) ({ \
    glGetShaderPrecisionFormat_PACKED *packed_data = malloc(sizeof(glGetShaderPrecisionFormat_PACKED)); \
    packed_data->index = glGetShaderPrecisionFormat_INDEX; \
    packed_data->args.shadertype = (GLenum)_shadertype; \
    packed_data->args.precisiontype = (GLenum)_precisiontype; \
    packed_data->args.range = (GLint *)_range; \
    packed_data->args.precision = (GLint *)_precision; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetShaderSource(_shader, _bufSize, _length, _source) ({ \
    glGetShaderSource_PACKED *packed_data = malloc(sizeof(glGetShaderSource_PACKED)); \
    packed_data->index = glGetShaderSource_INDEX; \
    packed_data->args.shader = (GLuint)_shader; \
    packed_data->args.bufSize = (GLsizei)_bufSize; \
    packed_data->args.length = (GLsizei *)_length; \
    packed_data->args.source = (GLchar *)_source; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetShaderiv(_shader, _pname, _params) ({ \
    glGetShaderiv_PACKED *packed_data = malloc(sizeof(glGetShaderiv_PACKED)); \
    packed_data->index = glGetShaderiv_INDEX; \
    packed_data->args.shader = (GLuint)_shader; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLint *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetString(_name) ({ \
    glGetString_PACKED *packed_data = malloc(sizeof(glGetString_PACKED)); \
    packed_data->index = glGetString_INDEX; \
    packed_data->args.name = (GLenum)_name; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetTexParameterfv(_target, _pname, _params) ({ \
    glGetTexParameterfv_PACKED *packed_data = malloc(sizeof(glGetTexParameterfv_PACKED)); \
    packed_data->index = glGetTexParameterfv_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLfloat *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetTexParameteriv(_target, _pname, _params) ({ \
    glGetTexParameteriv_PACKED *packed_data = malloc(sizeof(glGetTexParameteriv_PACKED)); \
    packed_data->index = glGetTexParameteriv_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLint *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetUniformLocation(_program, _name) ({ \
    glGetUniformLocation_PACKED *packed_data = malloc(sizeof(glGetUniformLocation_PACKED)); \
    packed_data->index = glGetUniformLocation_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.name = (GLchar *)_name; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetUniformfv(_program, _location, _params) ({ \
    glGetUniformfv_PACKED *packed_data = malloc(sizeof(glGetUniformfv_PACKED)); \
    packed_data->index = glGetUniformfv_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.params = (GLfloat *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetUniformiv(_program, _location, _params) ({ \
    glGetUniformiv_PACKED *packed_data = malloc(sizeof(glGetUniformiv_PACKED)); \
    packed_data->index = glGetUniformiv_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.params = (GLint *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetVertexAttribPointerv(_index, _pname, _pointer) ({ \
    glGetVertexAttribPointerv_PACKED *packed_data = malloc(sizeof(glGetVertexAttribPointerv_PACKED)); \
    packed_data->index = glGetVertexAttribPointerv_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.pointer = (GLvoid **)_pointer; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetVertexAttribfv(_index, _pname, _params) ({ \
    glGetVertexAttribfv_PACKED *packed_data = malloc(sizeof(glGetVertexAttribfv_PACKED)); \
    packed_data->index = glGetVertexAttribfv_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLfloat *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glGetVertexAttribiv(_index, _pname, _params) ({ \
    glGetVertexAttribiv_PACKED *packed_data = malloc(sizeof(glGetVertexAttribiv_PACKED)); \
    packed_data->index = glGetVertexAttribiv_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLint *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glHint(_target, _mode) ({ \
    glHint_PACKED *packed_data = malloc(sizeof(glHint_PACKED)); \
    packed_data->index = glHint_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.mode = (GLenum)_mode; \
    (packed_call_t *)packed_data; \
})
#define pack_glIsBuffer(_buffer) ({ \
    glIsBuffer_PACKED *packed_data = malloc(sizeof(glIsBuffer_PACKED)); \
    packed_data->index = glIsBuffer_INDEX; \
    packed_data->args.buffer = (GLuint)_buffer; \
    (packed_call_t *)packed_data; \
})
#define pack_glIsEnabled(_cap) ({ \
    glIsEnabled_PACKED *packed_data = malloc(sizeof(glIsEnabled_PACKED)); \
    packed_data->index = glIsEnabled_INDEX; \
    packed_data->args.cap = (GLenum)_cap; \
    (packed_call_t *)packed_data; \
})
#define pack_glIsFramebuffer(_framebuffer) ({ \
    glIsFramebuffer_PACKED *packed_data = malloc(sizeof(glIsFramebuffer_PACKED)); \
    packed_data->index = glIsFramebuffer_INDEX; \
    packed_data->args.framebuffer = (GLuint)_framebuffer; \
    (packed_call_t *)packed_data; \
})
#define pack_glIsProgram(_program) ({ \
    glIsProgram_PACKED *packed_data = malloc(sizeof(glIsProgram_PACKED)); \
    packed_data->index = glIsProgram_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    (packed_call_t *)packed_data; \
})
#define pack_glIsRenderbuffer(_renderbuffer) ({ \
    glIsRenderbuffer_PACKED *packed_data = malloc(sizeof(glIsRenderbuffer_PACKED)); \
    packed_data->index = glIsRenderbuffer_INDEX; \
    packed_data->args.renderbuffer = (GLuint)_renderbuffer; \
    (packed_call_t *)packed_data; \
})
#define pack_glIsShader(_shader) ({ \
    glIsShader_PACKED *packed_data = malloc(sizeof(glIsShader_PACKED)); \
    packed_data->index = glIsShader_INDEX; \
    packed_data->args.shader = (GLuint)_shader; \
    (packed_call_t *)packed_data; \
})
#define pack_glIsTexture(_texture) ({ \
    glIsTexture_PACKED *packed_data = malloc(sizeof(glIsTexture_PACKED)); \
    packed_data->index = glIsTexture_INDEX; \
    packed_data->args.texture = (GLuint)_texture; \
    (packed_call_t *)packed_data; \
})
#define pack_glLineWidth(_width) ({ \
    glLineWidth_PACKED *packed_data = malloc(sizeof(glLineWidth_PACKED)); \
    packed_data->index = glLineWidth_INDEX; \
    packed_data->args.width = (GLfloat)_width; \
    (packed_call_t *)packed_data; \
})
#define pack_glLinkProgram(_program) ({ \
    glLinkProgram_PACKED *packed_data = malloc(sizeof(glLinkProgram_PACKED)); \
    packed_data->index = glLinkProgram_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    (packed_call_t *)packed_data; \
})
#define pack_glPixelStorei(_pname, _param) ({ \
    glPixelStorei_PACKED *packed_data = malloc(sizeof(glPixelStorei_PACKED)); \
    packed_data->index = glPixelStorei_INDEX; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.param = (GLint)_param; \
    (packed_call_t *)packed_data; \
})
#define pack_glPolygonOffset(_factor, _units) ({ \
    glPolygonOffset_PACKED *packed_data = malloc(sizeof(glPolygonOffset_PACKED)); \
    packed_data->index = glPolygonOffset_INDEX; \
    packed_data->args.factor = (GLfloat)_factor; \
    packed_data->args.units = (GLfloat)_units; \
    (packed_call_t *)packed_data; \
})
#define pack_glReadPixels(_x, _y, _width, _height, _format, _type, _pixels) ({ \
    glReadPixels_PACKED *packed_data = malloc(sizeof(glReadPixels_PACKED)); \
    packed_data->index = glReadPixels_INDEX; \
    packed_data->args.x = (GLint)_x; \
    packed_data->args.y = (GLint)_y; \
    packed_data->args.width = (GLsizei)_width; \
    packed_data->args.height = (GLsizei)_height; \
    packed_data->args.format = (GLenum)_format; \
    packed_data->args.type = (GLenum)_type; \
    packed_data->args.pixels = (GLvoid *)_pixels; \
    (packed_call_t *)packed_data; \
})
#define pack_glReleaseShaderCompiler() ({ \
    glReleaseShaderCompiler_PACKED *packed_data = malloc(sizeof(glReleaseShaderCompiler_PACKED)); \
    packed_data->index = glReleaseShaderCompiler_INDEX; \
    (packed_call_t *)packed_data; \
})
#define pack_glRenderbufferStorage(_target, _internalformat, _width, _height) ({ \
    glRenderbufferStorage_PACKED *packed_data = malloc(sizeof(glRenderbufferStorage_PACKED)); \
    packed_data->index = glRenderbufferStorage_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.internalformat = (GLenum)_internalformat; \
    packed_data->args.width = (GLsizei)_width; \
    packed_data->args.height = (GLsizei)_height; \
    (packed_call_t *)packed_data; \
})
#define pack_glSampleCoverage(_value, _invert) ({ \
    glSampleCoverage_PACKED *packed_data = malloc(sizeof(glSampleCoverage_PACKED)); \
    packed_data->index = glSampleCoverage_INDEX; \
    packed_data->args.value = (GLclampf)_value; \
    packed_data->args.invert = (GLboolean)_invert; \
    (packed_call_t *)packed_data; \
})
#define pack_glScissor(_x, _y, _width, _height) ({ \
    glScissor_PACKED *packed_data = malloc(sizeof(glScissor_PACKED)); \
    packed_data->index = glScissor_INDEX; \
    packed_data->args.x = (GLint)_x; \
    packed_data->args.y = (GLint)_y; \
    packed_data->args.width = (GLsizei)_width; \
    packed_data->args.height = (GLsizei)_height; \
    (packed_call_t *)packed_data; \
})
#define pack_glShaderBinary(_n, _shaders, _binaryformat, _binary, _length) ({ \
    glShaderBinary_PACKED *packed_data = malloc(sizeof(glShaderBinary_PACKED)); \
    packed_data->index = glShaderBinary_INDEX; \
    packed_data->args.n = (GLsizei)_n; \
    packed_data->args.shaders = (GLuint *)_shaders; \
    packed_data->args.binaryformat = (GLenum)_binaryformat; \
    packed_data->args.binary = (GLvoid *)_binary; \
    packed_data->args.length = (GLsizei)_length; \
    (packed_call_t *)packed_data; \
})
#define pack_glShaderSource(_shader, _count, _string, _length) ({ \
    glShaderSource_PACKED *packed_data = malloc(sizeof(glShaderSource_PACKED)); \
    packed_data->index = glShaderSource_INDEX; \
    packed_data->args.shader = (GLuint)_shader; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.string = (GLchar * *)_string; \
    packed_data->args.length = (GLint *)_length; \
    (packed_call_t *)packed_data; \
})
#define pack_glStencilFunc(_func, _ref, _mask) ({ \
    glStencilFunc_PACKED *packed_data = malloc(sizeof(glStencilFunc_PACKED)); \
    packed_data->index = glStencilFunc_INDEX; \
    packed_data->args.func = (GLenum)_func; \
    packed_data->args.ref = (GLint)_ref; \
    packed_data->args.mask = (GLuint)_mask; \
    (packed_call_t *)packed_data; \
})
#define pack_glStencilFuncSeparate(_face, _func, _ref, _mask) ({ \
    glStencilFuncSeparate_PACKED *packed_data = malloc(sizeof(glStencilFuncSeparate_PACKED)); \
    packed_data->index = glStencilFuncSeparate_INDEX; \
    packed_data->args.face = (GLenum)_face; \
    packed_data->args.func = (GLenum)_func; \
    packed_data->args.ref = (GLint)_ref; \
    packed_data->args.mask = (GLuint)_mask; \
    (packed_call_t *)packed_data; \
})
#define pack_glStencilMask(_mask) ({ \
    glStencilMask_PACKED *packed_data = malloc(sizeof(glStencilMask_PACKED)); \
    packed_data->index = glStencilMask_INDEX; \
    packed_data->args.mask = (GLuint)_mask; \
    (packed_call_t *)packed_data; \
})
#define pack_glStencilMaskSeparate(_face, _mask) ({ \
    glStencilMaskSeparate_PACKED *packed_data = malloc(sizeof(glStencilMaskSeparate_PACKED)); \
    packed_data->index = glStencilMaskSeparate_INDEX; \
    packed_data->args.face = (GLenum)_face; \
    packed_data->args.mask = (GLuint)_mask; \
    (packed_call_t *)packed_data; \
})
#define pack_glStencilOp(_fail, _zfail, _zpass) ({ \
    glStencilOp_PACKED *packed_data = malloc(sizeof(glStencilOp_PACKED)); \
    packed_data->index = glStencilOp_INDEX; \
    packed_data->args.fail = (GLenum)_fail; \
    packed_data->args.zfail = (GLenum)_zfail; \
    packed_data->args.zpass = (GLenum)_zpass; \
    (packed_call_t *)packed_data; \
})
#define pack_glStencilOpSeparate(_face, _sfail, _zfail, _zpass) ({ \
    glStencilOpSeparate_PACKED *packed_data = malloc(sizeof(glStencilOpSeparate_PACKED)); \
    packed_data->index = glStencilOpSeparate_INDEX; \
    packed_data->args.face = (GLenum)_face; \
    packed_data->args.sfail = (GLenum)_sfail; \
    packed_data->args.zfail = (GLenum)_zfail; \
    packed_data->args.zpass = (GLenum)_zpass; \
    (packed_call_t *)packed_data; \
})
#define pack_glTexImage2D(_target, _level, _internalformat, _width, _height, _border, _format, _type, _pixels) ({ \
    glTexImage2D_PACKED *packed_data = malloc(sizeof(glTexImage2D_PACKED)); \
    packed_data->index = glTexImage2D_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.level = (GLint)_level; \
    packed_data->args.internalformat = (GLint)_internalformat; \
    packed_data->args.width = (GLsizei)_width; \
    packed_data->args.height = (GLsizei)_height; \
    packed_data->args.border = (GLint)_border; \
    packed_data->args.format = (GLenum)_format; \
    packed_data->args.type = (GLenum)_type; \
    packed_data->args.pixels = (GLvoid *)_pixels; \
    (packed_call_t *)packed_data; \
})
#define pack_glTexParameterf(_target, _pname, _param) ({ \
    glTexParameterf_PACKED *packed_data = malloc(sizeof(glTexParameterf_PACKED)); \
    packed_data->index = glTexParameterf_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.param = (GLfloat)_param; \
    (packed_call_t *)packed_data; \
})
#define pack_glTexParameterfv(_target, _pname, _params) ({ \
    glTexParameterfv_PACKED *packed_data = malloc(sizeof(glTexParameterfv_PACKED)); \
    packed_data->index = glTexParameterfv_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLfloat *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glTexParameteri(_target, _pname, _param) ({ \
    glTexParameteri_PACKED *packed_data = malloc(sizeof(glTexParameteri_PACKED)); \
    packed_data->index = glTexParameteri_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.param = (GLint)_param; \
    (packed_call_t *)packed_data; \
})
#define pack_glTexParameteriv(_target, _pname, _params) ({ \
    glTexParameteriv_PACKED *packed_data = malloc(sizeof(glTexParameteriv_PACKED)); \
    packed_data->index = glTexParameteriv_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.pname = (GLenum)_pname; \
    packed_data->args.params = (GLint *)_params; \
    (packed_call_t *)packed_data; \
})
#define pack_glTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _type, _pixels) ({ \
    glTexSubImage2D_PACKED *packed_data = malloc(sizeof(glTexSubImage2D_PACKED)); \
    packed_data->index = glTexSubImage2D_INDEX; \
    packed_data->args.target = (GLenum)_target; \
    packed_data->args.level = (GLint)_level; \
    packed_data->args.xoffset = (GLint)_xoffset; \
    packed_data->args.yoffset = (GLint)_yoffset; \
    packed_data->args.width = (GLsizei)_width; \
    packed_data->args.height = (GLsizei)_height; \
    packed_data->args.format = (GLenum)_format; \
    packed_data->args.type = (GLenum)_type; \
    packed_data->args.pixels = (GLvoid *)_pixels; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform1f(_location, _v0) ({ \
    glUniform1f_PACKED *packed_data = malloc(sizeof(glUniform1f_PACKED)); \
    packed_data->index = glUniform1f_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.v0 = (GLfloat)_v0; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform1fv(_location, _count, _value) ({ \
    glUniform1fv_PACKED *packed_data = malloc(sizeof(glUniform1fv_PACKED)); \
    packed_data->index = glUniform1fv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.value = (GLfloat *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform1i(_location, _v0) ({ \
    glUniform1i_PACKED *packed_data = malloc(sizeof(glUniform1i_PACKED)); \
    packed_data->index = glUniform1i_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.v0 = (GLint)_v0; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform1iv(_location, _count, _value) ({ \
    glUniform1iv_PACKED *packed_data = malloc(sizeof(glUniform1iv_PACKED)); \
    packed_data->index = glUniform1iv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.value = (GLint *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform2f(_location, _v0, _v1) ({ \
    glUniform2f_PACKED *packed_data = malloc(sizeof(glUniform2f_PACKED)); \
    packed_data->index = glUniform2f_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.v0 = (GLfloat)_v0; \
    packed_data->args.v1 = (GLfloat)_v1; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform2fv(_location, _count, _value) ({ \
    glUniform2fv_PACKED *packed_data = malloc(sizeof(glUniform2fv_PACKED)); \
    packed_data->index = glUniform2fv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.value = (GLfloat *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform2i(_location, _v0, _v1) ({ \
    glUniform2i_PACKED *packed_data = malloc(sizeof(glUniform2i_PACKED)); \
    packed_data->index = glUniform2i_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.v0 = (GLint)_v0; \
    packed_data->args.v1 = (GLint)_v1; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform2iv(_location, _count, _value) ({ \
    glUniform2iv_PACKED *packed_data = malloc(sizeof(glUniform2iv_PACKED)); \
    packed_data->index = glUniform2iv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.value = (GLint *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform3f(_location, _v0, _v1, _v2) ({ \
    glUniform3f_PACKED *packed_data = malloc(sizeof(glUniform3f_PACKED)); \
    packed_data->index = glUniform3f_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.v0 = (GLfloat)_v0; \
    packed_data->args.v1 = (GLfloat)_v1; \
    packed_data->args.v2 = (GLfloat)_v2; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform3fv(_location, _count, _value) ({ \
    glUniform3fv_PACKED *packed_data = malloc(sizeof(glUniform3fv_PACKED)); \
    packed_data->index = glUniform3fv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.value = (GLfloat *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform3i(_location, _v0, _v1, _v2) ({ \
    glUniform3i_PACKED *packed_data = malloc(sizeof(glUniform3i_PACKED)); \
    packed_data->index = glUniform3i_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.v0 = (GLint)_v0; \
    packed_data->args.v1 = (GLint)_v1; \
    packed_data->args.v2 = (GLint)_v2; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform3iv(_location, _count, _value) ({ \
    glUniform3iv_PACKED *packed_data = malloc(sizeof(glUniform3iv_PACKED)); \
    packed_data->index = glUniform3iv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.value = (GLint *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform4f(_location, _v0, _v1, _v2, _v3) ({ \
    glUniform4f_PACKED *packed_data = malloc(sizeof(glUniform4f_PACKED)); \
    packed_data->index = glUniform4f_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.v0 = (GLfloat)_v0; \
    packed_data->args.v1 = (GLfloat)_v1; \
    packed_data->args.v2 = (GLfloat)_v2; \
    packed_data->args.v3 = (GLfloat)_v3; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform4fv(_location, _count, _value) ({ \
    glUniform4fv_PACKED *packed_data = malloc(sizeof(glUniform4fv_PACKED)); \
    packed_data->index = glUniform4fv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.value = (GLfloat *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform4i(_location, _v0, _v1, _v2, _v3) ({ \
    glUniform4i_PACKED *packed_data = malloc(sizeof(glUniform4i_PACKED)); \
    packed_data->index = glUniform4i_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.v0 = (GLint)_v0; \
    packed_data->args.v1 = (GLint)_v1; \
    packed_data->args.v2 = (GLint)_v2; \
    packed_data->args.v3 = (GLint)_v3; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniform4iv(_location, _count, _value) ({ \
    glUniform4iv_PACKED *packed_data = malloc(sizeof(glUniform4iv_PACKED)); \
    packed_data->index = glUniform4iv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.value = (GLint *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniformMatrix2fv(_location, _count, _transpose, _value) ({ \
    glUniformMatrix2fv_PACKED *packed_data = malloc(sizeof(glUniformMatrix2fv_PACKED)); \
    packed_data->index = glUniformMatrix2fv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.transpose = (GLboolean)_transpose; \
    packed_data->args.value = (GLfloat *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniformMatrix3fv(_location, _count, _transpose, _value) ({ \
    glUniformMatrix3fv_PACKED *packed_data = malloc(sizeof(glUniformMatrix3fv_PACKED)); \
    packed_data->index = glUniformMatrix3fv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.transpose = (GLboolean)_transpose; \
    packed_data->args.value = (GLfloat *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUniformMatrix4fv(_location, _count, _transpose, _value) ({ \
    glUniformMatrix4fv_PACKED *packed_data = malloc(sizeof(glUniformMatrix4fv_PACKED)); \
    packed_data->index = glUniformMatrix4fv_INDEX; \
    packed_data->args.location = (GLint)_location; \
    packed_data->args.count = (GLsizei)_count; \
    packed_data->args.transpose = (GLboolean)_transpose; \
    packed_data->args.value = (GLfloat *)_value; \
    (packed_call_t *)packed_data; \
})
#define pack_glUseProgram(_program) ({ \
    glUseProgram_PACKED *packed_data = malloc(sizeof(glUseProgram_PACKED)); \
    packed_data->index = glUseProgram_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    (packed_call_t *)packed_data; \
})
#define pack_glValidateProgram(_program) ({ \
    glValidateProgram_PACKED *packed_data = malloc(sizeof(glValidateProgram_PACKED)); \
    packed_data->index = glValidateProgram_INDEX; \
    packed_data->args.program = (GLuint)_program; \
    (packed_call_t *)packed_data; \
})
#define pack_glVertexAttrib1f(_index, _x) ({ \
    glVertexAttrib1f_PACKED *packed_data = malloc(sizeof(glVertexAttrib1f_PACKED)); \
    packed_data->index = glVertexAttrib1f_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.x = (GLfloat)_x; \
    (packed_call_t *)packed_data; \
})
#define pack_glVertexAttrib1fv(_index, _v) ({ \
    glVertexAttrib1fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib1fv_PACKED)); \
    packed_data->index = glVertexAttrib1fv_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.v = (GLfloat *)_v; \
    (packed_call_t *)packed_data; \
})
#define pack_glVertexAttrib2f(_index, _x, _y) ({ \
    glVertexAttrib2f_PACKED *packed_data = malloc(sizeof(glVertexAttrib2f_PACKED)); \
    packed_data->index = glVertexAttrib2f_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.x = (GLfloat)_x; \
    packed_data->args.y = (GLfloat)_y; \
    (packed_call_t *)packed_data; \
})
#define pack_glVertexAttrib2fv(_index, _v) ({ \
    glVertexAttrib2fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib2fv_PACKED)); \
    packed_data->index = glVertexAttrib2fv_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.v = (GLfloat *)_v; \
    (packed_call_t *)packed_data; \
})
#define pack_glVertexAttrib3f(_index, _x, _y, _z) ({ \
    glVertexAttrib3f_PACKED *packed_data = malloc(sizeof(glVertexAttrib3f_PACKED)); \
    packed_data->index = glVertexAttrib3f_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.x = (GLfloat)_x; \
    packed_data->args.y = (GLfloat)_y; \
    packed_data->args.z = (GLfloat)_z; \
    (packed_call_t *)packed_data; \
})
#define pack_glVertexAttrib3fv(_index, _v) ({ \
    glVertexAttrib3fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib3fv_PACKED)); \
    packed_data->index = glVertexAttrib3fv_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.v = (GLfloat *)_v; \
    (packed_call_t *)packed_data; \
})
#define pack_glVertexAttrib4f(_index, _x, _y, _z, _w) ({ \
    glVertexAttrib4f_PACKED *packed_data = malloc(sizeof(glVertexAttrib4f_PACKED)); \
    packed_data->index = glVertexAttrib4f_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.x = (GLfloat)_x; \
    packed_data->args.y = (GLfloat)_y; \
    packed_data->args.z = (GLfloat)_z; \
    packed_data->args.w = (GLfloat)_w; \
    (packed_call_t *)packed_data; \
})
#define pack_glVertexAttrib4fv(_index, _v) ({ \
    glVertexAttrib4fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib4fv_PACKED)); \
    packed_data->index = glVertexAttrib4fv_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.v = (GLfloat *)_v; \
    (packed_call_t *)packed_data; \
})
#define pack_glVertexAttribPointer(_index, _size, _type, _normalized, _stride, _pointer) ({ \
    glVertexAttribPointer_PACKED *packed_data = malloc(sizeof(glVertexAttribPointer_PACKED)); \
    packed_data->index = glVertexAttribPointer_INDEX; \
    packed_data->args.index = (GLuint)_index; \
    packed_data->args.size = (GLint)_size; \
    packed_data->args.type = (GLenum)_type; \
    packed_data->args.normalized = (GLboolean)_normalized; \
    packed_data->args.stride = (GLsizei)_stride; \
    packed_data->args.pointer = (GLvoid *)_pointer; \
    (packed_call_t *)packed_data; \
})
#define pack_glViewport(_x, _y, _width, _height) ({ \
    glViewport_PACKED *packed_data = malloc(sizeof(glViewport_PACKED)); \
    packed_data->index = glViewport_INDEX; \
    packed_data->args.x = (GLint)_x; \
    packed_data->args.y = (GLint)_y; \
    packed_data->args.width = (GLsizei)_width; \
    packed_data->args.height = (GLsizei)_height; \
    (packed_call_t *)packed_data; \
})
#endif
#endif

#ifdef USE_ES2

#ifndef GLES2WRAP_H
#define GLES2WRAP_H

enum FORMAT {
    FORMAT_void_GLenum,
    FORMAT_void_GLuint_GLuint,
    FORMAT_void_GLuint_GLuint_const_GLchar___GENPT__,
    FORMAT_void_GLenum_GLuint,
    FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf,
    FORMAT_void_GLenum_GLenum,
    FORMAT_void_GLenum_GLenum_GLenum_GLenum,
    FORMAT_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum,
    FORMAT_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__,
    FORMAT_GLenum_GLenum,
    FORMAT_void_GLbitfield,
    FORMAT_void_GLclampf,
    FORMAT_void_GLint,
    FORMAT_void_GLboolean_GLboolean_GLboolean_GLboolean,
    FORMAT_void_GLuint,
    FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei,
    FORMAT_GLuint,
    FORMAT_GLuint_GLenum,
    FORMAT_void_GLsizei_const_GLuint___GENPT__,
    FORMAT_void_GLboolean,
    FORMAT_void_GLclampf_GLclampf,
    FORMAT_void_GLenum_GLint_GLsizei,
    FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__,
    FORMAT_void,
    FORMAT_void_GLenum_GLenum_GLenum_GLuint,
    FORMAT_void_GLenum_GLenum_GLenum_GLuint_GLint,
    FORMAT_void_GLsizei_GLuint___GENPT__,
    FORMAT_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__,
    FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__,
    FORMAT_GLint_GLuint_const_GLchar___GENPT__,
    FORMAT_void_GLenum_GLboolean___GENPT__,
    FORMAT_void_GLenum_GLenum_GLint___GENPT__,
    FORMAT_GLenum,
    FORMAT_void_GLenum_GLfloat___GENPT__,
    FORMAT_void_GLenum_GLenum_GLenum_GLint___GENPT__,
    FORMAT_void_GLenum_GLint___GENPT__,
    FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__,
    FORMAT_void_GLuint_GLenum_GLint___GENPT__,
    FORMAT_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__,
    FORMAT_const_GLubyte___GENPT___GLenum,
    FORMAT_void_GLenum_GLenum_GLfloat___GENPT__,
    FORMAT_void_GLuint_GLint_GLfloat___GENPT__,
    FORMAT_void_GLuint_GLint_GLint___GENPT__,
    FORMAT_void_GLuint_GLenum_GLvoid___GENPT____GENPT__,
    FORMAT_void_GLuint_GLenum_GLfloat___GENPT__,
    FORMAT_GLboolean_GLuint,
    FORMAT_GLboolean_GLenum,
    FORMAT_void_GLfloat,
    FORMAT_void_GLenum_GLint,
    FORMAT_void_GLfloat_GLfloat,
    FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLenum_GLsizei_GLsizei,
    FORMAT_void_GLclampf_GLboolean,
    FORMAT_void_GLint_GLint_GLsizei_GLsizei,
    FORMAT_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei,
    FORMAT_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__,
    FORMAT_void_GLenum_GLint_GLuint,
    FORMAT_void_GLenum_GLenum_GLint_GLuint,
    FORMAT_void_GLenum_GLenum_GLenum,
    FORMAT_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLenum_GLfloat,
    FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__,
    FORMAT_void_GLenum_GLenum_GLint,
    FORMAT_void_GLenum_GLenum_const_GLint___GENPT__,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__,
    FORMAT_void_GLint_GLfloat,
    FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__,
    FORMAT_void_GLint_GLint,
    FORMAT_void_GLint_GLsizei_const_GLint___GENPT__,
    FORMAT_void_GLint_GLfloat_GLfloat,
    FORMAT_void_GLint_GLint_GLint,
    FORMAT_void_GLint_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLint_GLint_GLint_GLint,
    FORMAT_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLint_GLint_GLint_GLint_GLint,
    FORMAT_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__,
    FORMAT_void_GLuint_GLfloat,
    FORMAT_void_GLuint_const_GLfloat___GENPT__,
    FORMAT_void_GLuint_GLfloat_GLfloat,
    FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__,
};

typedef void (*FUNC_void_GLenum)(GLenum texture);
typedef struct {
    GLenum a1;
} ARGS_void_GLenum;
typedef struct {
    int index;
    ARGS_void_GLenum args;
} PACKED_void_GLenum;
typedef void (*FUNC_void_GLuint_GLuint)(GLuint program, GLuint shader);
typedef struct {
    GLuint a1;
    GLuint a2;
} ARGS_void_GLuint_GLuint;
typedef struct {
    int index;
    ARGS_void_GLuint_GLuint args;
} PACKED_void_GLuint_GLuint;
typedef void (*FUNC_void_GLuint_GLuint_const_GLchar___GENPT__)(GLuint program, GLuint index, const GLchar * name);
typedef struct {
    GLuint a1;
    GLuint a2;
    GLchar * a3;
} ARGS_void_GLuint_GLuint_const_GLchar___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLuint_const_GLchar___GENPT__ args;
} PACKED_void_GLuint_GLuint_const_GLchar___GENPT__;
typedef void (*FUNC_void_GLenum_GLuint)(GLenum target, GLuint buffer);
typedef struct {
    GLenum a1;
    GLuint a2;
} ARGS_void_GLenum_GLuint;
typedef struct {
    int index;
    ARGS_void_GLenum_GLuint args;
} PACKED_void_GLenum_GLuint;
typedef void (*FUNC_void_GLclampf_GLclampf_GLclampf_GLclampf)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef struct {
    GLclampf a1;
    GLclampf a2;
    GLclampf a3;
    GLclampf a4;
} ARGS_void_GLclampf_GLclampf_GLclampf_GLclampf;
typedef struct {
    int index;
    ARGS_void_GLclampf_GLclampf_GLclampf_GLclampf args;
} PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf;
typedef void (*FUNC_void_GLenum_GLenum)(GLenum modeRGB, GLenum modeA);
typedef struct {
    GLenum a1;
    GLenum a2;
} ARGS_void_GLenum_GLenum;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum args;
} PACKED_void_GLenum_GLenum;
typedef void (*FUNC_void_GLenum_GLenum_GLenum_GLenum)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
    GLenum a4;
} ARGS_void_GLenum_GLenum_GLenum_GLenum;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLenum_GLenum args;
} PACKED_void_GLenum_GLenum_GLenum_GLenum;
typedef void (*FUNC_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum)(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage);
typedef struct {
    GLenum a1;
    GLsizeiptr a2;
    GLvoid * a3;
    GLenum a4;
} ARGS_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum;
typedef struct {
    int index;
    ARGS_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum args;
} PACKED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum;
typedef void (*FUNC_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data);
typedef struct {
    GLenum a1;
    GLintptr a2;
    GLsizeiptr a3;
    GLvoid * a4;
} ARGS_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__;
typedef GLenum (*FUNC_GLenum_GLenum)(GLenum target);
typedef struct {
    GLenum a1;
} ARGS_GLenum_GLenum;
typedef struct {
    int index;
    ARGS_GLenum_GLenum args;
} PACKED_GLenum_GLenum;
typedef void (*FUNC_void_GLbitfield)(GLbitfield mask);
typedef struct {
    GLbitfield a1;
} ARGS_void_GLbitfield;
typedef struct {
    int index;
    ARGS_void_GLbitfield args;
} PACKED_void_GLbitfield;
typedef void (*FUNC_void_GLclampf)(GLclampf depth);
typedef struct {
    GLclampf a1;
} ARGS_void_GLclampf;
typedef struct {
    int index;
    ARGS_void_GLclampf args;
} PACKED_void_GLclampf;
typedef void (*FUNC_void_GLint)(GLint s);
typedef struct {
    GLint a1;
} ARGS_void_GLint;
typedef struct {
    int index;
    ARGS_void_GLint args;
} PACKED_void_GLint;
typedef void (*FUNC_void_GLboolean_GLboolean_GLboolean_GLboolean)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef struct {
    GLboolean a1;
    GLboolean a2;
    GLboolean a3;
    GLboolean a4;
} ARGS_void_GLboolean_GLboolean_GLboolean_GLboolean;
typedef struct {
    int index;
    ARGS_void_GLboolean_GLboolean_GLboolean_GLboolean args;
} PACKED_void_GLboolean_GLboolean_GLboolean_GLboolean;
typedef void (*FUNC_void_GLuint)(GLuint shader);
typedef struct {
    GLuint a1;
} ARGS_void_GLuint;
typedef struct {
    int index;
    ARGS_void_GLuint args;
} PACKED_void_GLuint;
typedef void (*FUNC_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data);
typedef struct {
    GLenum a1;
    GLint a2;
    GLenum a3;
    GLsizei a4;
    GLsizei a5;
    GLint a6;
    GLsizei a7;
    GLvoid * a8;
} ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data);
typedef struct {
    GLenum a1;
    GLint a2;
    GLint a3;
    GLint a4;
    GLsizei a5;
    GLsizei a6;
    GLenum a7;
    GLsizei a8;
    GLvoid * a9;
} ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef struct {
    GLenum a1;
    GLint a2;
    GLenum a3;
    GLint a4;
    GLint a5;
    GLsizei a6;
    GLsizei a7;
    GLint a8;
} ARGS_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint;
typedef struct {
    int index;
    ARGS_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint args;
} PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint;
typedef void (*FUNC_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef struct {
    GLenum a1;
    GLint a2;
    GLint a3;
    GLint a4;
    GLint a5;
    GLint a6;
    GLsizei a7;
    GLsizei a8;
} ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei;
typedef struct {
    int index;
    ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args;
} PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei;
typedef GLuint (*FUNC_GLuint)();
typedef struct {
    int index;
} PACKED_GLuint;
typedef GLuint (*FUNC_GLuint_GLenum)(GLenum type);
typedef struct {
    GLenum a1;
} ARGS_GLuint_GLenum;
typedef struct {
    int index;
    ARGS_GLuint_GLenum args;
} PACKED_GLuint_GLenum;
typedef void (*FUNC_void_GLsizei_const_GLuint___GENPT__)(GLsizei n, const GLuint * buffer);
typedef struct {
    GLsizei a1;
    GLuint * a2;
} ARGS_void_GLsizei_const_GLuint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLsizei_const_GLuint___GENPT__ args;
} PACKED_void_GLsizei_const_GLuint___GENPT__;
typedef void (*FUNC_void_GLboolean)(GLboolean flag);
typedef struct {
    GLboolean a1;
} ARGS_void_GLboolean;
typedef struct {
    int index;
    ARGS_void_GLboolean args;
} PACKED_void_GLboolean;
typedef void (*FUNC_void_GLclampf_GLclampf)(GLclampf zNear, GLclampf zFar);
typedef struct {
    GLclampf a1;
    GLclampf a2;
} ARGS_void_GLclampf_GLclampf;
typedef struct {
    int index;
    ARGS_void_GLclampf_GLclampf args;
} PACKED_void_GLclampf_GLclampf;
typedef void (*FUNC_void_GLenum_GLint_GLsizei)(GLenum mode, GLint first, GLsizei count);
typedef struct {
    GLenum a1;
    GLint a2;
    GLsizei a3;
} ARGS_void_GLenum_GLint_GLsizei;
typedef struct {
    int index;
    ARGS_void_GLenum_GLint_GLsizei args;
} PACKED_void_GLenum_GLint_GLsizei;
typedef void (*FUNC_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__)(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
typedef struct {
    GLenum a1;
    GLsizei a2;
    GLenum a3;
    GLvoid * a4;
} ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__;
typedef void (*FUNC_void)();
typedef struct {
    int index;
} PACKED_void;
typedef void (*FUNC_void_GLenum_GLenum_GLenum_GLuint)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
    GLuint a4;
} ARGS_void_GLenum_GLenum_GLenum_GLuint;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLenum_GLuint args;
} PACKED_void_GLenum_GLenum_GLenum_GLuint;
typedef void (*FUNC_void_GLenum_GLenum_GLenum_GLuint_GLint)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
    GLuint a4;
    GLint a5;
} ARGS_void_GLenum_GLenum_GLenum_GLuint_GLint;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLenum_GLuint_GLint args;
} PACKED_void_GLenum_GLenum_GLenum_GLuint_GLint;
typedef void (*FUNC_void_GLsizei_GLuint___GENPT__)(GLsizei n, GLuint * buffer);
typedef struct {
    GLsizei a1;
    GLuint * a2;
} ARGS_void_GLsizei_GLuint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLsizei_GLuint___GENPT__ args;
} PACKED_void_GLsizei_GLuint___GENPT__;
typedef void (*FUNC_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
typedef struct {
    GLuint a1;
    GLuint a2;
    GLsizei a3;
    GLsizei * a4;
    GLint * a5;
    GLenum * a6;
    GLchar * a7;
} ARGS_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__ args;
} PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__;
typedef void (*FUNC_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__)(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * obj);
typedef struct {
    GLuint a1;
    GLsizei a2;
    GLsizei * a3;
    GLuint * a4;
} ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__ args;
} PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__;
typedef GLint (*FUNC_GLint_GLuint_const_GLchar___GENPT__)(GLuint program, const GLchar * name);
typedef struct {
    GLuint a1;
    GLchar * a2;
} ARGS_GLint_GLuint_const_GLchar___GENPT__;
typedef struct {
    int index;
    ARGS_GLint_GLuint_const_GLchar___GENPT__ args;
} PACKED_GLint_GLuint_const_GLchar___GENPT__;
typedef void (*FUNC_void_GLenum_GLboolean___GENPT__)(GLenum pname, GLboolean * params);
typedef struct {
    GLenum a1;
    GLboolean * a2;
} ARGS_void_GLenum_GLboolean___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLboolean___GENPT__ args;
} PACKED_void_GLenum_GLboolean___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLint___GENPT__)(GLenum target, GLenum pname, GLint * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint * a3;
} ARGS_void_GLenum_GLenum_GLint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLint___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLint___GENPT__;
typedef GLenum (*FUNC_GLenum)();
typedef struct {
    int index;
} PACKED_GLenum;
typedef void (*FUNC_void_GLenum_GLfloat___GENPT__)(GLenum pname, GLfloat * params);
typedef struct {
    GLenum a1;
    GLfloat * a2;
} ARGS_void_GLenum_GLfloat___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLfloat___GENPT__ args;
} PACKED_void_GLenum_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLenum_GLint___GENPT__)(GLenum target, GLenum attachment, GLenum pname, GLint * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
    GLint * a4;
} ARGS_void_GLenum_GLenum_GLenum_GLint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLenum_GLint___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLenum_GLint___GENPT__;
typedef void (*FUNC_void_GLenum_GLint___GENPT__)(GLenum pname, GLint * params);
typedef struct {
    GLenum a1;
    GLint * a2;
} ARGS_void_GLenum_GLint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLint___GENPT__ args;
} PACKED_void_GLenum_GLint___GENPT__;
typedef void (*FUNC_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__)(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
typedef struct {
    GLuint a1;
    GLsizei a2;
    GLsizei * a3;
    GLchar * a4;
} ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__ args;
} PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__;
typedef void (*FUNC_void_GLuint_GLenum_GLint___GENPT__)(GLuint program, GLenum pname, GLint * params);
typedef struct {
    GLuint a1;
    GLenum a2;
    GLint * a3;
} ARGS_void_GLuint_GLenum_GLint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLenum_GLint___GENPT__ args;
} PACKED_void_GLuint_GLenum_GLint___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__)(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint * a3;
    GLint * a4;
} ARGS_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__;
typedef const GLubyte * (*FUNC_const_GLubyte___GENPT___GLenum)(GLenum name);
typedef struct {
    GLenum a1;
} ARGS_const_GLubyte___GENPT___GLenum;
typedef struct {
    int index;
    ARGS_const_GLubyte___GENPT___GLenum args;
} PACKED_const_GLubyte___GENPT___GLenum;
typedef void (*FUNC_void_GLenum_GLenum_GLfloat___GENPT__)(GLenum target, GLenum pname, GLfloat * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfloat * a3;
} ARGS_void_GLenum_GLenum_GLfloat___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLfloat___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLfloat___GENPT__;
typedef void (*FUNC_void_GLuint_GLint_GLfloat___GENPT__)(GLuint program, GLint location, GLfloat * params);
typedef struct {
    GLuint a1;
    GLint a2;
    GLfloat * a3;
} ARGS_void_GLuint_GLint_GLfloat___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLint_GLfloat___GENPT__ args;
} PACKED_void_GLuint_GLint_GLfloat___GENPT__;
typedef void (*FUNC_void_GLuint_GLint_GLint___GENPT__)(GLuint program, GLint location, GLint * params);
typedef struct {
    GLuint a1;
    GLint a2;
    GLint * a3;
} ARGS_void_GLuint_GLint_GLint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLint_GLint___GENPT__ args;
} PACKED_void_GLuint_GLint_GLint___GENPT__;
typedef void (*FUNC_void_GLuint_GLenum_GLvoid___GENPT____GENPT__)(GLuint index, GLenum pname, GLvoid ** pointer);
typedef struct {
    GLuint a1;
    GLenum a2;
    GLvoid ** a3;
} ARGS_void_GLuint_GLenum_GLvoid___GENPT____GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLenum_GLvoid___GENPT____GENPT__ args;
} PACKED_void_GLuint_GLenum_GLvoid___GENPT____GENPT__;
typedef void (*FUNC_void_GLuint_GLenum_GLfloat___GENPT__)(GLuint index, GLenum pname, GLfloat * params);
typedef struct {
    GLuint a1;
    GLenum a2;
    GLfloat * a3;
} ARGS_void_GLuint_GLenum_GLfloat___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLenum_GLfloat___GENPT__ args;
} PACKED_void_GLuint_GLenum_GLfloat___GENPT__;
typedef GLboolean (*FUNC_GLboolean_GLuint)(GLuint buffer);
typedef struct {
    GLuint a1;
} ARGS_GLboolean_GLuint;
typedef struct {
    int index;
    ARGS_GLboolean_GLuint args;
} PACKED_GLboolean_GLuint;
typedef GLboolean (*FUNC_GLboolean_GLenum)(GLenum cap);
typedef struct {
    GLenum a1;
} ARGS_GLboolean_GLenum;
typedef struct {
    int index;
    ARGS_GLboolean_GLenum args;
} PACKED_GLboolean_GLenum;
typedef void (*FUNC_void_GLfloat)(GLfloat width);
typedef struct {
    GLfloat a1;
} ARGS_void_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLfloat args;
} PACKED_void_GLfloat;
typedef void (*FUNC_void_GLenum_GLint)(GLenum pname, GLint param);
typedef struct {
    GLenum a1;
    GLint a2;
} ARGS_void_GLenum_GLint;
typedef struct {
    int index;
    ARGS_void_GLenum_GLint args;
} PACKED_void_GLenum_GLint;
typedef void (*FUNC_void_GLfloat_GLfloat)(GLfloat factor, GLfloat units);
typedef struct {
    GLfloat a1;
    GLfloat a2;
} ARGS_void_GLfloat_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLfloat_GLfloat args;
} PACKED_void_GLfloat_GLfloat;
typedef void (*FUNC_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels);
typedef struct {
    GLint a1;
    GLint a2;
    GLsizei a3;
    GLsizei a4;
    GLenum a5;
    GLenum a6;
    GLvoid * a7;
} ARGS_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ args;
} PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLsizei_GLsizei)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLsizei a3;
    GLsizei a4;
} ARGS_void_GLenum_GLenum_GLsizei_GLsizei;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLsizei_GLsizei args;
} PACKED_void_GLenum_GLenum_GLsizei_GLsizei;
typedef void (*FUNC_void_GLclampf_GLboolean)(GLclampf value, GLboolean invert);
typedef struct {
    GLclampf a1;
    GLboolean a2;
} ARGS_void_GLclampf_GLboolean;
typedef struct {
    int index;
    ARGS_void_GLclampf_GLboolean args;
} PACKED_void_GLclampf_GLboolean;
typedef void (*FUNC_void_GLint_GLint_GLsizei_GLsizei)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef struct {
    GLint a1;
    GLint a2;
    GLsizei a3;
    GLsizei a4;
} ARGS_void_GLint_GLint_GLsizei_GLsizei;
typedef struct {
    int index;
    ARGS_void_GLint_GLint_GLsizei_GLsizei args;
} PACKED_void_GLint_GLint_GLsizei_GLsizei;
typedef void (*FUNC_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei)(GLsizei n, const GLuint * shaders, GLenum binaryformat, const GLvoid * binary, GLsizei length);
typedef struct {
    GLsizei a1;
    GLuint * a2;
    GLenum a3;
    GLvoid * a4;
    GLsizei a5;
} ARGS_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei;
typedef struct {
    int index;
    ARGS_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei args;
} PACKED_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei;
typedef void (*FUNC_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__)(GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length);
typedef struct {
    GLuint a1;
    GLsizei a2;
    GLchar * * a3;
    GLint * a4;
} ARGS_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__ args;
} PACKED_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__;
typedef void (*FUNC_void_GLenum_GLint_GLuint)(GLenum func, GLint ref, GLuint mask);
typedef struct {
    GLenum a1;
    GLint a2;
    GLuint a3;
} ARGS_void_GLenum_GLint_GLuint;
typedef struct {
    int index;
    ARGS_void_GLenum_GLint_GLuint args;
} PACKED_void_GLenum_GLint_GLuint;
typedef void (*FUNC_void_GLenum_GLenum_GLint_GLuint)(GLenum face, GLenum func, GLint ref, GLuint mask);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint a3;
    GLuint a4;
} ARGS_void_GLenum_GLenum_GLint_GLuint;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLint_GLuint args;
} PACKED_void_GLenum_GLenum_GLint_GLuint;
typedef void (*FUNC_void_GLenum_GLenum_GLenum)(GLenum fail, GLenum zfail, GLenum zpass);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
} ARGS_void_GLenum_GLenum_GLenum;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLenum args;
} PACKED_void_GLenum_GLenum_GLenum;
typedef void (*FUNC_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
typedef struct {
    GLenum a1;
    GLint a2;
    GLint a3;
    GLsizei a4;
    GLsizei a5;
    GLint a6;
    GLenum a7;
    GLenum a8;
    GLvoid * a9;
} ARGS_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLfloat)(GLenum target, GLenum pname, GLfloat param);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfloat a3;
} ARGS_void_GLenum_GLenum_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLfloat args;
} PACKED_void_GLenum_GLenum_GLfloat;
typedef void (*FUNC_void_GLenum_GLenum_const_GLfloat___GENPT__)(GLenum target, GLenum pname, const GLfloat * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfloat * a3;
} ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__ args;
} PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLint)(GLenum target, GLenum pname, GLint param);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint a3;
} ARGS_void_GLenum_GLenum_GLint;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_GLint args;
} PACKED_void_GLenum_GLenum_GLint;
typedef void (*FUNC_void_GLenum_GLenum_const_GLint___GENPT__)(GLenum target, GLenum pname, const GLint * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint * a3;
} ARGS_void_GLenum_GLenum_const_GLint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLenum_const_GLint___GENPT__ args;
} PACKED_void_GLenum_GLenum_const_GLint___GENPT__;
typedef void (*FUNC_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
typedef struct {
    GLenum a1;
    GLint a2;
    GLint a3;
    GLint a4;
    GLsizei a5;
    GLsizei a6;
    GLenum a7;
    GLenum a8;
    GLvoid * a9;
} ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLint_GLfloat)(GLint location, GLfloat v0);
typedef struct {
    GLint a1;
    GLfloat a2;
} ARGS_void_GLint_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLint_GLfloat args;
} PACKED_void_GLint_GLfloat;
typedef void (*FUNC_void_GLint_GLsizei_const_GLfloat___GENPT__)(GLint location, GLsizei count, const GLfloat * value);
typedef struct {
    GLint a1;
    GLsizei a2;
    GLfloat * a3;
} ARGS_void_GLint_GLsizei_const_GLfloat___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLint_GLsizei_const_GLfloat___GENPT__ args;
} PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLint_GLint)(GLint location, GLint v0);
typedef struct {
    GLint a1;
    GLint a2;
} ARGS_void_GLint_GLint;
typedef struct {
    int index;
    ARGS_void_GLint_GLint args;
} PACKED_void_GLint_GLint;
typedef void (*FUNC_void_GLint_GLsizei_const_GLint___GENPT__)(GLint location, GLsizei count, const GLint * value);
typedef struct {
    GLint a1;
    GLsizei a2;
    GLint * a3;
} ARGS_void_GLint_GLsizei_const_GLint___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLint_GLsizei_const_GLint___GENPT__ args;
} PACKED_void_GLint_GLsizei_const_GLint___GENPT__;
typedef void (*FUNC_void_GLint_GLfloat_GLfloat)(GLint location, GLfloat v0, GLfloat v1);
typedef struct {
    GLint a1;
    GLfloat a2;
    GLfloat a3;
} ARGS_void_GLint_GLfloat_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLint_GLfloat_GLfloat args;
} PACKED_void_GLint_GLfloat_GLfloat;
typedef void (*FUNC_void_GLint_GLint_GLint)(GLint location, GLint v0, GLint v1);
typedef struct {
    GLint a1;
    GLint a2;
    GLint a3;
} ARGS_void_GLint_GLint_GLint;
typedef struct {
    int index;
    ARGS_void_GLint_GLint_GLint args;
} PACKED_void_GLint_GLint_GLint;
typedef void (*FUNC_void_GLint_GLfloat_GLfloat_GLfloat)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef struct {
    GLint a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
} ARGS_void_GLint_GLfloat_GLfloat_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLint_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLint_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLint_GLint_GLint_GLint)(GLint location, GLint v0, GLint v1, GLint v2);
typedef struct {
    GLint a1;
    GLint a2;
    GLint a3;
    GLint a4;
} ARGS_void_GLint_GLint_GLint_GLint;
typedef struct {
    int index;
    ARGS_void_GLint_GLint_GLint_GLint args;
} PACKED_void_GLint_GLint_GLint_GLint;
typedef void (*FUNC_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef struct {
    GLint a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
    GLfloat a5;
} ARGS_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLint_GLint_GLint_GLint_GLint)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef struct {
    GLint a1;
    GLint a2;
    GLint a3;
    GLint a4;
    GLint a5;
} ARGS_void_GLint_GLint_GLint_GLint_GLint;
typedef struct {
    int index;
    ARGS_void_GLint_GLint_GLint_GLint_GLint args;
} PACKED_void_GLint_GLint_GLint_GLint_GLint;
typedef void (*FUNC_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef struct {
    GLint a1;
    GLsizei a2;
    GLboolean a3;
    GLfloat * a4;
} ARGS_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__ args;
} PACKED_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLuint_GLfloat)(GLuint index, GLfloat x);
typedef struct {
    GLuint a1;
    GLfloat a2;
} ARGS_void_GLuint_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLuint_GLfloat args;
} PACKED_void_GLuint_GLfloat;
typedef void (*FUNC_void_GLuint_const_GLfloat___GENPT__)(GLuint index, const GLfloat * v);
typedef struct {
    GLuint a1;
    GLfloat * a2;
} ARGS_void_GLuint_const_GLfloat___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_const_GLfloat___GENPT__ args;
} PACKED_void_GLuint_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLuint_GLfloat_GLfloat)(GLuint index, GLfloat x, GLfloat y);
typedef struct {
    GLuint a1;
    GLfloat a2;
    GLfloat a3;
} ARGS_void_GLuint_GLfloat_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLuint_GLfloat_GLfloat args;
} PACKED_void_GLuint_GLfloat_GLfloat;
typedef void (*FUNC_void_GLuint_GLfloat_GLfloat_GLfloat)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef struct {
    GLuint a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
} ARGS_void_GLuint_GLfloat_GLfloat_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLuint_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLuint_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef struct {
    GLuint a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
    GLfloat a5;
} ARGS_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int index;
    ARGS_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer);
typedef struct {
    GLuint a1;
    GLint a2;
    GLenum a3;
    GLboolean a4;
    GLsizei a5;
    GLvoid * a6;
} ARGS_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int index;
    ARGS_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__;

extern const int INDEX_RET_SIZE[];
extern const int INDEX_PACKED_SIZE[];
extern void glPushCall(void *data);
void glIndexedCall(const packed_call_t *packed, void *ret_v);

#define glActiveTexture_INDEX 1
#define glActiveTexture_RETURN void
#define glActiveTexture_ARG_NAMES texture
#define glActiveTexture_ARG_EXPAND GLenum texture
#define glActiveTexture_PACKED PACKED_void_GLenum
#define glActiveTexture_FORMAT FORMAT_void_GLenum
#define glAttachShader_INDEX 2
#define glAttachShader_RETURN void
#define glAttachShader_ARG_NAMES program, shader
#define glAttachShader_ARG_EXPAND GLuint program, GLuint shader
#define glAttachShader_PACKED PACKED_void_GLuint_GLuint
#define glAttachShader_FORMAT FORMAT_void_GLuint_GLuint
#define glBindAttribLocation_INDEX 3
#define glBindAttribLocation_RETURN void
#define glBindAttribLocation_ARG_NAMES program, index, name
#define glBindAttribLocation_ARG_EXPAND GLuint program, GLuint index, const GLchar * name
#define glBindAttribLocation_PACKED PACKED_void_GLuint_GLuint_const_GLchar___GENPT__
#define glBindAttribLocation_FORMAT FORMAT_void_GLuint_GLuint_const_GLchar___GENPT__
#define glBindBuffer_INDEX 4
#define glBindBuffer_RETURN void
#define glBindBuffer_ARG_NAMES target, buffer
#define glBindBuffer_ARG_EXPAND GLenum target, GLuint buffer
#define glBindBuffer_PACKED PACKED_void_GLenum_GLuint
#define glBindBuffer_FORMAT FORMAT_void_GLenum_GLuint
#define glBindFramebuffer_INDEX 5
#define glBindFramebuffer_RETURN void
#define glBindFramebuffer_ARG_NAMES target, framebuffer
#define glBindFramebuffer_ARG_EXPAND GLenum target, GLuint framebuffer
#define glBindFramebuffer_PACKED PACKED_void_GLenum_GLuint
#define glBindFramebuffer_FORMAT FORMAT_void_GLenum_GLuint
#define glBindRenderbuffer_INDEX 6
#define glBindRenderbuffer_RETURN void
#define glBindRenderbuffer_ARG_NAMES target, renderbuffer
#define glBindRenderbuffer_ARG_EXPAND GLenum target, GLuint renderbuffer
#define glBindRenderbuffer_PACKED PACKED_void_GLenum_GLuint
#define glBindRenderbuffer_FORMAT FORMAT_void_GLenum_GLuint
#define glBindTexture_INDEX 7
#define glBindTexture_RETURN void
#define glBindTexture_ARG_NAMES target, texture
#define glBindTexture_ARG_EXPAND GLenum target, GLuint texture
#define glBindTexture_PACKED PACKED_void_GLenum_GLuint
#define glBindTexture_FORMAT FORMAT_void_GLenum_GLuint
#define glBlendColor_INDEX 8
#define glBlendColor_RETURN void
#define glBlendColor_ARG_NAMES red, green, blue, alpha
#define glBlendColor_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define glBlendColor_PACKED PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glBlendColor_FORMAT FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glBlendEquation_INDEX 9
#define glBlendEquation_RETURN void
#define glBlendEquation_ARG_NAMES mode
#define glBlendEquation_ARG_EXPAND GLenum mode
#define glBlendEquation_PACKED PACKED_void_GLenum
#define glBlendEquation_FORMAT FORMAT_void_GLenum
#define glBlendEquationSeparate_INDEX 10
#define glBlendEquationSeparate_RETURN void
#define glBlendEquationSeparate_ARG_NAMES modeRGB, modeA
#define glBlendEquationSeparate_ARG_EXPAND GLenum modeRGB, GLenum modeA
#define glBlendEquationSeparate_PACKED PACKED_void_GLenum_GLenum
#define glBlendEquationSeparate_FORMAT FORMAT_void_GLenum_GLenum
#define glBlendFunc_INDEX 11
#define glBlendFunc_RETURN void
#define glBlendFunc_ARG_NAMES sfactor, dfactor
#define glBlendFunc_ARG_EXPAND GLenum sfactor, GLenum dfactor
#define glBlendFunc_PACKED PACKED_void_GLenum_GLenum
#define glBlendFunc_FORMAT FORMAT_void_GLenum_GLenum
#define glBlendFuncSeparate_INDEX 12
#define glBlendFuncSeparate_RETURN void
#define glBlendFuncSeparate_ARG_NAMES sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha
#define glBlendFuncSeparate_ARG_EXPAND GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha
#define glBlendFuncSeparate_PACKED PACKED_void_GLenum_GLenum_GLenum_GLenum
#define glBlendFuncSeparate_FORMAT FORMAT_void_GLenum_GLenum_GLenum_GLenum
#define glBufferData_INDEX 13
#define glBufferData_RETURN void
#define glBufferData_ARG_NAMES target, size, data, usage
#define glBufferData_ARG_EXPAND GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage
#define glBufferData_PACKED PACKED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum
#define glBufferData_FORMAT FORMAT_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum
#define glBufferSubData_INDEX 14
#define glBufferSubData_RETURN void
#define glBufferSubData_ARG_NAMES target, offset, size, data
#define glBufferSubData_ARG_EXPAND GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data
#define glBufferSubData_PACKED PACKED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__
#define glBufferSubData_FORMAT FORMAT_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__
#define glCheckFramebufferStatus_INDEX 15
#define glCheckFramebufferStatus_RETURN GLenum
#define glCheckFramebufferStatus_ARG_NAMES target
#define glCheckFramebufferStatus_ARG_EXPAND GLenum target
#define glCheckFramebufferStatus_PACKED PACKED_GLenum_GLenum
#define glCheckFramebufferStatus_FORMAT FORMAT_GLenum_GLenum
#define glClear_INDEX 16
#define glClear_RETURN void
#define glClear_ARG_NAMES mask
#define glClear_ARG_EXPAND GLbitfield mask
#define glClear_PACKED PACKED_void_GLbitfield
#define glClear_FORMAT FORMAT_void_GLbitfield
#define glClearColor_INDEX 17
#define glClearColor_RETURN void
#define glClearColor_ARG_NAMES red, green, blue, alpha
#define glClearColor_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define glClearColor_PACKED PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glClearColor_FORMAT FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glClearDepthf_INDEX 18
#define glClearDepthf_RETURN void
#define glClearDepthf_ARG_NAMES depth
#define glClearDepthf_ARG_EXPAND GLclampf depth
#define glClearDepthf_PACKED PACKED_void_GLclampf
#define glClearDepthf_FORMAT FORMAT_void_GLclampf
#define glClearStencil_INDEX 19
#define glClearStencil_RETURN void
#define glClearStencil_ARG_NAMES s
#define glClearStencil_ARG_EXPAND GLint s
#define glClearStencil_PACKED PACKED_void_GLint
#define glClearStencil_FORMAT FORMAT_void_GLint
#define glColorMask_INDEX 20
#define glColorMask_RETURN void
#define glColorMask_ARG_NAMES red, green, blue, alpha
#define glColorMask_ARG_EXPAND GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha
#define glColorMask_PACKED PACKED_void_GLboolean_GLboolean_GLboolean_GLboolean
#define glColorMask_FORMAT FORMAT_void_GLboolean_GLboolean_GLboolean_GLboolean
#define glCompileShader_INDEX 21
#define glCompileShader_RETURN void
#define glCompileShader_ARG_NAMES shader
#define glCompileShader_ARG_EXPAND GLuint shader
#define glCompileShader_PACKED PACKED_void_GLuint
#define glCompileShader_FORMAT FORMAT_void_GLuint
#define glCompressedTexImage2D_INDEX 22
#define glCompressedTexImage2D_RETURN void
#define glCompressedTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, imageSize, data
#define glCompressedTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data
#define glCompressedTexImage2D_PACKED PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexSubImage2D_INDEX 23
#define glCompressedTexSubImage2D_RETURN void
#define glCompressedTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, imageSize, data
#define glCompressedTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data
#define glCompressedTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__
#define glCopyTexImage2D_INDEX 24
#define glCopyTexImage2D_RETURN void
#define glCopyTexImage2D_ARG_NAMES target, level, internalformat, x, y, width, height, border
#define glCopyTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border
#define glCopyTexImage2D_PACKED PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint
#define glCopyTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint
#define glCopyTexSubImage2D_INDEX 25
#define glCopyTexSubImage2D_RETURN void
#define glCopyTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, x, y, width, height
#define glCopyTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height
#define glCopyTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei
#define glCopyTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei
#define glCreateProgram_INDEX 26
#define glCreateProgram_RETURN GLuint
#define glCreateProgram_ARG_NAMES 
#define glCreateProgram_ARG_EXPAND 
#define glCreateProgram_PACKED PACKED_GLuint
#define glCreateProgram_FORMAT FORMAT_GLuint
#define glCreateShader_INDEX 27
#define glCreateShader_RETURN GLuint
#define glCreateShader_ARG_NAMES type
#define glCreateShader_ARG_EXPAND GLenum type
#define glCreateShader_PACKED PACKED_GLuint_GLenum
#define glCreateShader_FORMAT FORMAT_GLuint_GLenum
#define glCullFace_INDEX 28
#define glCullFace_RETURN void
#define glCullFace_ARG_NAMES mode
#define glCullFace_ARG_EXPAND GLenum mode
#define glCullFace_PACKED PACKED_void_GLenum
#define glCullFace_FORMAT FORMAT_void_GLenum
#define glDeleteBuffers_INDEX 29
#define glDeleteBuffers_RETURN void
#define glDeleteBuffers_ARG_NAMES n, buffer
#define glDeleteBuffers_ARG_EXPAND GLsizei n, const GLuint * buffer
#define glDeleteBuffers_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteBuffers_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDeleteFramebuffers_INDEX 30
#define glDeleteFramebuffers_RETURN void
#define glDeleteFramebuffers_ARG_NAMES n, framebuffers
#define glDeleteFramebuffers_ARG_EXPAND GLsizei n, const GLuint * framebuffers
#define glDeleteFramebuffers_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteFramebuffers_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDeleteProgram_INDEX 31
#define glDeleteProgram_RETURN void
#define glDeleteProgram_ARG_NAMES program
#define glDeleteProgram_ARG_EXPAND GLuint program
#define glDeleteProgram_PACKED PACKED_void_GLuint
#define glDeleteProgram_FORMAT FORMAT_void_GLuint
#define glDeleteRenderbuffers_INDEX 32
#define glDeleteRenderbuffers_RETURN void
#define glDeleteRenderbuffers_ARG_NAMES n, renderbuffers
#define glDeleteRenderbuffers_ARG_EXPAND GLsizei n, const GLuint * renderbuffers
#define glDeleteRenderbuffers_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteRenderbuffers_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDeleteShader_INDEX 33
#define glDeleteShader_RETURN void
#define glDeleteShader_ARG_NAMES program
#define glDeleteShader_ARG_EXPAND GLuint program
#define glDeleteShader_PACKED PACKED_void_GLuint
#define glDeleteShader_FORMAT FORMAT_void_GLuint
#define glDeleteTextures_INDEX 34
#define glDeleteTextures_RETURN void
#define glDeleteTextures_ARG_NAMES n, textures
#define glDeleteTextures_ARG_EXPAND GLsizei n, const GLuint * textures
#define glDeleteTextures_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteTextures_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDepthFunc_INDEX 35
#define glDepthFunc_RETURN void
#define glDepthFunc_ARG_NAMES func
#define glDepthFunc_ARG_EXPAND GLenum func
#define glDepthFunc_PACKED PACKED_void_GLenum
#define glDepthFunc_FORMAT FORMAT_void_GLenum
#define glDepthMask_INDEX 36
#define glDepthMask_RETURN void
#define glDepthMask_ARG_NAMES flag
#define glDepthMask_ARG_EXPAND GLboolean flag
#define glDepthMask_PACKED PACKED_void_GLboolean
#define glDepthMask_FORMAT FORMAT_void_GLboolean
#define glDepthRangef_INDEX 37
#define glDepthRangef_RETURN void
#define glDepthRangef_ARG_NAMES zNear, zFar
#define glDepthRangef_ARG_EXPAND GLclampf zNear, GLclampf zFar
#define glDepthRangef_PACKED PACKED_void_GLclampf_GLclampf
#define glDepthRangef_FORMAT FORMAT_void_GLclampf_GLclampf
#define glDetachShader_INDEX 38
#define glDetachShader_RETURN void
#define glDetachShader_ARG_NAMES program, shader
#define glDetachShader_ARG_EXPAND GLuint program, GLuint shader
#define glDetachShader_PACKED PACKED_void_GLuint_GLuint
#define glDetachShader_FORMAT FORMAT_void_GLuint_GLuint
#define glDisable_INDEX 39
#define glDisable_RETURN void
#define glDisable_ARG_NAMES cap
#define glDisable_ARG_EXPAND GLenum cap
#define glDisable_PACKED PACKED_void_GLenum
#define glDisable_FORMAT FORMAT_void_GLenum
#define glDisableVertexAttribArray_INDEX 40
#define glDisableVertexAttribArray_RETURN void
#define glDisableVertexAttribArray_ARG_NAMES index
#define glDisableVertexAttribArray_ARG_EXPAND GLuint index
#define glDisableVertexAttribArray_PACKED PACKED_void_GLuint
#define glDisableVertexAttribArray_FORMAT FORMAT_void_GLuint
#define glDrawArrays_INDEX 41
#define glDrawArrays_RETURN void
#define glDrawArrays_ARG_NAMES mode, first, count
#define glDrawArrays_ARG_EXPAND GLenum mode, GLint first, GLsizei count
#define glDrawArrays_PACKED PACKED_void_GLenum_GLint_GLsizei
#define glDrawArrays_FORMAT FORMAT_void_GLenum_GLint_GLsizei
#define glDrawElements_INDEX 42
#define glDrawElements_RETURN void
#define glDrawElements_ARG_NAMES mode, count, type, indices
#define glDrawElements_ARG_EXPAND GLenum mode, GLsizei count, GLenum type, const GLvoid * indices
#define glDrawElements_PACKED PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__
#define glDrawElements_FORMAT FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__
#define glEnable_INDEX 43
#define glEnable_RETURN void
#define glEnable_ARG_NAMES cap
#define glEnable_ARG_EXPAND GLenum cap
#define glEnable_PACKED PACKED_void_GLenum
#define glEnable_FORMAT FORMAT_void_GLenum
#define glEnableVertexAttribArray_INDEX 44
#define glEnableVertexAttribArray_RETURN void
#define glEnableVertexAttribArray_ARG_NAMES index
#define glEnableVertexAttribArray_ARG_EXPAND GLuint index
#define glEnableVertexAttribArray_PACKED PACKED_void_GLuint
#define glEnableVertexAttribArray_FORMAT FORMAT_void_GLuint
#define glFinish_INDEX 45
#define glFinish_RETURN void
#define glFinish_ARG_NAMES 
#define glFinish_ARG_EXPAND 
#define glFinish_PACKED PACKED_void
#define glFinish_FORMAT FORMAT_void
#define glFlush_INDEX 46
#define glFlush_RETURN void
#define glFlush_ARG_NAMES 
#define glFlush_ARG_EXPAND 
#define glFlush_PACKED PACKED_void
#define glFlush_FORMAT FORMAT_void
#define glFramebufferRenderbuffer_INDEX 47
#define glFramebufferRenderbuffer_RETURN void
#define glFramebufferRenderbuffer_ARG_NAMES target, attachment, renderbuffertarget, renderbuffer
#define glFramebufferRenderbuffer_ARG_EXPAND GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer
#define glFramebufferRenderbuffer_PACKED PACKED_void_GLenum_GLenum_GLenum_GLuint
#define glFramebufferRenderbuffer_FORMAT FORMAT_void_GLenum_GLenum_GLenum_GLuint
#define glFramebufferTexture2D_INDEX 48
#define glFramebufferTexture2D_RETURN void
#define glFramebufferTexture2D_ARG_NAMES target, attachment, textarget, texture, level
#define glFramebufferTexture2D_ARG_EXPAND GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level
#define glFramebufferTexture2D_PACKED PACKED_void_GLenum_GLenum_GLenum_GLuint_GLint
#define glFramebufferTexture2D_FORMAT FORMAT_void_GLenum_GLenum_GLenum_GLuint_GLint
#define glFrontFace_INDEX 49
#define glFrontFace_RETURN void
#define glFrontFace_ARG_NAMES mode
#define glFrontFace_ARG_EXPAND GLenum mode
#define glFrontFace_PACKED PACKED_void_GLenum
#define glFrontFace_FORMAT FORMAT_void_GLenum
#define glGenBuffers_INDEX 50
#define glGenBuffers_RETURN void
#define glGenBuffers_ARG_NAMES n, buffer
#define glGenBuffers_ARG_EXPAND GLsizei n, GLuint * buffer
#define glGenBuffers_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenBuffers_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGenFramebuffers_INDEX 51
#define glGenFramebuffers_RETURN void
#define glGenFramebuffers_ARG_NAMES n, framebuffers
#define glGenFramebuffers_ARG_EXPAND GLsizei n, GLuint * framebuffers
#define glGenFramebuffers_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenFramebuffers_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGenRenderbuffers_INDEX 52
#define glGenRenderbuffers_RETURN void
#define glGenRenderbuffers_ARG_NAMES n, renderbuffers
#define glGenRenderbuffers_ARG_EXPAND GLsizei n, GLuint * renderbuffers
#define glGenRenderbuffers_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenRenderbuffers_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGenTextures_INDEX 53
#define glGenTextures_RETURN void
#define glGenTextures_ARG_NAMES n, textures
#define glGenTextures_ARG_EXPAND GLsizei n, GLuint * textures
#define glGenTextures_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenTextures_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGenerateMipmap_INDEX 54
#define glGenerateMipmap_RETURN void
#define glGenerateMipmap_ARG_NAMES target
#define glGenerateMipmap_ARG_EXPAND GLenum target
#define glGenerateMipmap_PACKED PACKED_void_GLenum
#define glGenerateMipmap_FORMAT FORMAT_void_GLenum
#define glGetActiveAttrib_INDEX 55
#define glGetActiveAttrib_RETURN void
#define glGetActiveAttrib_ARG_NAMES program, index, bufSize, length, size, type, name
#define glGetActiveAttrib_ARG_EXPAND GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name
#define glGetActiveAttrib_PACKED PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__
#define glGetActiveAttrib_FORMAT FORMAT_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__
#define glGetActiveUniform_INDEX 56
#define glGetActiveUniform_RETURN void
#define glGetActiveUniform_ARG_NAMES program, index, bufSize, length, size, type, name
#define glGetActiveUniform_ARG_EXPAND GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name
#define glGetActiveUniform_PACKED PACKED_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__
#define glGetActiveUniform_FORMAT FORMAT_void_GLuint_GLuint_GLsizei_GLsizei___GENPT___GLint___GENPT___GLenum___GENPT___GLchar___GENPT__
#define glGetAttachedShaders_INDEX 57
#define glGetAttachedShaders_RETURN void
#define glGetAttachedShaders_ARG_NAMES program, maxCount, count, obj
#define glGetAttachedShaders_ARG_EXPAND GLuint program, GLsizei maxCount, GLsizei * count, GLuint * obj
#define glGetAttachedShaders_PACKED PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__
#define glGetAttachedShaders_FORMAT FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLuint___GENPT__
#define glGetAttribLocation_INDEX 58
#define glGetAttribLocation_RETURN GLint
#define glGetAttribLocation_ARG_NAMES program, name
#define glGetAttribLocation_ARG_EXPAND GLuint program, const GLchar * name
#define glGetAttribLocation_PACKED PACKED_GLint_GLuint_const_GLchar___GENPT__
#define glGetAttribLocation_FORMAT FORMAT_GLint_GLuint_const_GLchar___GENPT__
#define glGetBooleanv_INDEX 59
#define glGetBooleanv_RETURN void
#define glGetBooleanv_ARG_NAMES pname, params
#define glGetBooleanv_ARG_EXPAND GLenum pname, GLboolean * params
#define glGetBooleanv_PACKED PACKED_void_GLenum_GLboolean___GENPT__
#define glGetBooleanv_FORMAT FORMAT_void_GLenum_GLboolean___GENPT__
#define glGetBufferParameteriv_INDEX 60
#define glGetBufferParameteriv_RETURN void
#define glGetBufferParameteriv_ARG_NAMES target, pname, params
#define glGetBufferParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetBufferParameteriv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define glGetBufferParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define glGetError_INDEX 61
#define glGetError_RETURN GLenum
#define glGetError_ARG_NAMES 
#define glGetError_ARG_EXPAND 
#define glGetError_PACKED PACKED_GLenum
#define glGetError_FORMAT FORMAT_GLenum
#define glGetFloatv_INDEX 62
#define glGetFloatv_RETURN void
#define glGetFloatv_ARG_NAMES pname, params
#define glGetFloatv_ARG_EXPAND GLenum pname, GLfloat * params
#define glGetFloatv_PACKED PACKED_void_GLenum_GLfloat___GENPT__
#define glGetFloatv_FORMAT FORMAT_void_GLenum_GLfloat___GENPT__
#define glGetFramebufferAttachmentParameteriv_INDEX 63
#define glGetFramebufferAttachmentParameteriv_RETURN void
#define glGetFramebufferAttachmentParameteriv_ARG_NAMES target, attachment, pname, params
#define glGetFramebufferAttachmentParameteriv_ARG_EXPAND GLenum target, GLenum attachment, GLenum pname, GLint * params
#define glGetFramebufferAttachmentParameteriv_PACKED PACKED_void_GLenum_GLenum_GLenum_GLint___GENPT__
#define glGetFramebufferAttachmentParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLenum_GLint___GENPT__
#define glGetIntegerv_INDEX 64
#define glGetIntegerv_RETURN void
#define glGetIntegerv_ARG_NAMES pname, params
#define glGetIntegerv_ARG_EXPAND GLenum pname, GLint * params
#define glGetIntegerv_PACKED PACKED_void_GLenum_GLint___GENPT__
#define glGetIntegerv_FORMAT FORMAT_void_GLenum_GLint___GENPT__
#define glGetProgramInfoLog_INDEX 65
#define glGetProgramInfoLog_RETURN void
#define glGetProgramInfoLog_ARG_NAMES program, bufSize, length, infoLog
#define glGetProgramInfoLog_ARG_EXPAND GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog
#define glGetProgramInfoLog_PACKED PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetProgramInfoLog_FORMAT FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetProgramiv_INDEX 66
#define glGetProgramiv_RETURN void
#define glGetProgramiv_ARG_NAMES program, pname, params
#define glGetProgramiv_ARG_EXPAND GLuint program, GLenum pname, GLint * params
#define glGetProgramiv_PACKED PACKED_void_GLuint_GLenum_GLint___GENPT__
#define glGetProgramiv_FORMAT FORMAT_void_GLuint_GLenum_GLint___GENPT__
#define glGetRenderbufferParameteriv_INDEX 67
#define glGetRenderbufferParameteriv_RETURN void
#define glGetRenderbufferParameteriv_ARG_NAMES target, pname, params
#define glGetRenderbufferParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetRenderbufferParameteriv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define glGetRenderbufferParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define glGetShaderInfoLog_INDEX 68
#define glGetShaderInfoLog_RETURN void
#define glGetShaderInfoLog_ARG_NAMES shader, bufSize, length, infoLog
#define glGetShaderInfoLog_ARG_EXPAND GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog
#define glGetShaderInfoLog_PACKED PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetShaderInfoLog_FORMAT FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetShaderPrecisionFormat_INDEX 69
#define glGetShaderPrecisionFormat_RETURN void
#define glGetShaderPrecisionFormat_ARG_NAMES shadertype, precisiontype, range, precision
#define glGetShaderPrecisionFormat_ARG_EXPAND GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision
#define glGetShaderPrecisionFormat_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__
#define glGetShaderPrecisionFormat_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT___GLint___GENPT__
#define glGetShaderSource_INDEX 70
#define glGetShaderSource_RETURN void
#define glGetShaderSource_ARG_NAMES shader, bufSize, length, source
#define glGetShaderSource_ARG_EXPAND GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source
#define glGetShaderSource_PACKED PACKED_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetShaderSource_FORMAT FORMAT_void_GLuint_GLsizei_GLsizei___GENPT___GLchar___GENPT__
#define glGetShaderiv_INDEX 71
#define glGetShaderiv_RETURN void
#define glGetShaderiv_ARG_NAMES shader, pname, params
#define glGetShaderiv_ARG_EXPAND GLuint shader, GLenum pname, GLint * params
#define glGetShaderiv_PACKED PACKED_void_GLuint_GLenum_GLint___GENPT__
#define glGetShaderiv_FORMAT FORMAT_void_GLuint_GLenum_GLint___GENPT__
#define glGetString_INDEX 72
#define glGetString_RETURN const GLubyte *
#define glGetString_ARG_NAMES name
#define glGetString_ARG_EXPAND GLenum name
#define glGetString_PACKED PACKED_const_GLubyte___GENPT___GLenum
#define glGetString_FORMAT FORMAT_const_GLubyte___GENPT___GLenum
#define glGetTexParameterfv_INDEX 73
#define glGetTexParameterfv_RETURN void
#define glGetTexParameterfv_ARG_NAMES target, pname, params
#define glGetTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, GLfloat * params
#define glGetTexParameterfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexParameterfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexParameteriv_INDEX 74
#define glGetTexParameteriv_RETURN void
#define glGetTexParameteriv_ARG_NAMES target, pname, params
#define glGetTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetTexParameteriv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define glGetUniformLocation_INDEX 75
#define glGetUniformLocation_RETURN GLint
#define glGetUniformLocation_ARG_NAMES program, name
#define glGetUniformLocation_ARG_EXPAND GLuint program, const GLchar * name
#define glGetUniformLocation_PACKED PACKED_GLint_GLuint_const_GLchar___GENPT__
#define glGetUniformLocation_FORMAT FORMAT_GLint_GLuint_const_GLchar___GENPT__
#define glGetUniformfv_INDEX 76
#define glGetUniformfv_RETURN void
#define glGetUniformfv_ARG_NAMES program, location, params
#define glGetUniformfv_ARG_EXPAND GLuint program, GLint location, GLfloat * params
#define glGetUniformfv_PACKED PACKED_void_GLuint_GLint_GLfloat___GENPT__
#define glGetUniformfv_FORMAT FORMAT_void_GLuint_GLint_GLfloat___GENPT__
#define glGetUniformiv_INDEX 77
#define glGetUniformiv_RETURN void
#define glGetUniformiv_ARG_NAMES program, location, params
#define glGetUniformiv_ARG_EXPAND GLuint program, GLint location, GLint * params
#define glGetUniformiv_PACKED PACKED_void_GLuint_GLint_GLint___GENPT__
#define glGetUniformiv_FORMAT FORMAT_void_GLuint_GLint_GLint___GENPT__
#define glGetVertexAttribPointerv_INDEX 78
#define glGetVertexAttribPointerv_RETURN void
#define glGetVertexAttribPointerv_ARG_NAMES index, pname, pointer
#define glGetVertexAttribPointerv_ARG_EXPAND GLuint index, GLenum pname, GLvoid ** pointer
#define glGetVertexAttribPointerv_PACKED PACKED_void_GLuint_GLenum_GLvoid___GENPT____GENPT__
#define glGetVertexAttribPointerv_FORMAT FORMAT_void_GLuint_GLenum_GLvoid___GENPT____GENPT__
#define glGetVertexAttribfv_INDEX 79
#define glGetVertexAttribfv_RETURN void
#define glGetVertexAttribfv_ARG_NAMES index, pname, params
#define glGetVertexAttribfv_ARG_EXPAND GLuint index, GLenum pname, GLfloat * params
#define glGetVertexAttribfv_PACKED PACKED_void_GLuint_GLenum_GLfloat___GENPT__
#define glGetVertexAttribfv_FORMAT FORMAT_void_GLuint_GLenum_GLfloat___GENPT__
#define glGetVertexAttribiv_INDEX 80
#define glGetVertexAttribiv_RETURN void
#define glGetVertexAttribiv_ARG_NAMES index, pname, params
#define glGetVertexAttribiv_ARG_EXPAND GLuint index, GLenum pname, GLint * params
#define glGetVertexAttribiv_PACKED PACKED_void_GLuint_GLenum_GLint___GENPT__
#define glGetVertexAttribiv_FORMAT FORMAT_void_GLuint_GLenum_GLint___GENPT__
#define glHint_INDEX 81
#define glHint_RETURN void
#define glHint_ARG_NAMES target, mode
#define glHint_ARG_EXPAND GLenum target, GLenum mode
#define glHint_PACKED PACKED_void_GLenum_GLenum
#define glHint_FORMAT FORMAT_void_GLenum_GLenum
#define glIsBuffer_INDEX 82
#define glIsBuffer_RETURN GLboolean
#define glIsBuffer_ARG_NAMES buffer
#define glIsBuffer_ARG_EXPAND GLuint buffer
#define glIsBuffer_PACKED PACKED_GLboolean_GLuint
#define glIsBuffer_FORMAT FORMAT_GLboolean_GLuint
#define glIsEnabled_INDEX 83
#define glIsEnabled_RETURN GLboolean
#define glIsEnabled_ARG_NAMES cap
#define glIsEnabled_ARG_EXPAND GLenum cap
#define glIsEnabled_PACKED PACKED_GLboolean_GLenum
#define glIsEnabled_FORMAT FORMAT_GLboolean_GLenum
#define glIsFramebuffer_INDEX 84
#define glIsFramebuffer_RETURN GLboolean
#define glIsFramebuffer_ARG_NAMES framebuffer
#define glIsFramebuffer_ARG_EXPAND GLuint framebuffer
#define glIsFramebuffer_PACKED PACKED_GLboolean_GLuint
#define glIsFramebuffer_FORMAT FORMAT_GLboolean_GLuint
#define glIsProgram_INDEX 85
#define glIsProgram_RETURN GLboolean
#define glIsProgram_ARG_NAMES program
#define glIsProgram_ARG_EXPAND GLuint program
#define glIsProgram_PACKED PACKED_GLboolean_GLuint
#define glIsProgram_FORMAT FORMAT_GLboolean_GLuint
#define glIsRenderbuffer_INDEX 86
#define glIsRenderbuffer_RETURN GLboolean
#define glIsRenderbuffer_ARG_NAMES renderbuffer
#define glIsRenderbuffer_ARG_EXPAND GLuint renderbuffer
#define glIsRenderbuffer_PACKED PACKED_GLboolean_GLuint
#define glIsRenderbuffer_FORMAT FORMAT_GLboolean_GLuint
#define glIsShader_INDEX 87
#define glIsShader_RETURN GLboolean
#define glIsShader_ARG_NAMES shader
#define glIsShader_ARG_EXPAND GLuint shader
#define glIsShader_PACKED PACKED_GLboolean_GLuint
#define glIsShader_FORMAT FORMAT_GLboolean_GLuint
#define glIsTexture_INDEX 88
#define glIsTexture_RETURN GLboolean
#define glIsTexture_ARG_NAMES texture
#define glIsTexture_ARG_EXPAND GLuint texture
#define glIsTexture_PACKED PACKED_GLboolean_GLuint
#define glIsTexture_FORMAT FORMAT_GLboolean_GLuint
#define glLineWidth_INDEX 89
#define glLineWidth_RETURN void
#define glLineWidth_ARG_NAMES width
#define glLineWidth_ARG_EXPAND GLfloat width
#define glLineWidth_PACKED PACKED_void_GLfloat
#define glLineWidth_FORMAT FORMAT_void_GLfloat
#define glLinkProgram_INDEX 90
#define glLinkProgram_RETURN void
#define glLinkProgram_ARG_NAMES program
#define glLinkProgram_ARG_EXPAND GLuint program
#define glLinkProgram_PACKED PACKED_void_GLuint
#define glLinkProgram_FORMAT FORMAT_void_GLuint
#define glPixelStorei_INDEX 91
#define glPixelStorei_RETURN void
#define glPixelStorei_ARG_NAMES pname, param
#define glPixelStorei_ARG_EXPAND GLenum pname, GLint param
#define glPixelStorei_PACKED PACKED_void_GLenum_GLint
#define glPixelStorei_FORMAT FORMAT_void_GLenum_GLint
#define glPolygonOffset_INDEX 92
#define glPolygonOffset_RETURN void
#define glPolygonOffset_ARG_NAMES factor, units
#define glPolygonOffset_ARG_EXPAND GLfloat factor, GLfloat units
#define glPolygonOffset_PACKED PACKED_void_GLfloat_GLfloat
#define glPolygonOffset_FORMAT FORMAT_void_GLfloat_GLfloat
#define glReadPixels_INDEX 93
#define glReadPixels_RETURN void
#define glReadPixels_ARG_NAMES x, y, width, height, format, type, pixels
#define glReadPixels_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels
#define glReadPixels_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define glReadPixels_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define glReleaseShaderCompiler_INDEX 94
#define glReleaseShaderCompiler_RETURN void
#define glReleaseShaderCompiler_ARG_NAMES 
#define glReleaseShaderCompiler_ARG_EXPAND 
#define glReleaseShaderCompiler_PACKED PACKED_void
#define glReleaseShaderCompiler_FORMAT FORMAT_void
#define glRenderbufferStorage_INDEX 95
#define glRenderbufferStorage_RETURN void
#define glRenderbufferStorage_ARG_NAMES target, internalformat, width, height
#define glRenderbufferStorage_ARG_EXPAND GLenum target, GLenum internalformat, GLsizei width, GLsizei height
#define glRenderbufferStorage_PACKED PACKED_void_GLenum_GLenum_GLsizei_GLsizei
#define glRenderbufferStorage_FORMAT FORMAT_void_GLenum_GLenum_GLsizei_GLsizei
#define glSampleCoverage_INDEX 96
#define glSampleCoverage_RETURN void
#define glSampleCoverage_ARG_NAMES value, invert
#define glSampleCoverage_ARG_EXPAND GLclampf value, GLboolean invert
#define glSampleCoverage_PACKED PACKED_void_GLclampf_GLboolean
#define glSampleCoverage_FORMAT FORMAT_void_GLclampf_GLboolean
#define glScissor_INDEX 97
#define glScissor_RETURN void
#define glScissor_ARG_NAMES x, y, width, height
#define glScissor_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glScissor_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei
#define glScissor_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei
#define glShaderBinary_INDEX 98
#define glShaderBinary_RETURN void
#define glShaderBinary_ARG_NAMES n, shaders, binaryformat, binary, length
#define glShaderBinary_ARG_EXPAND GLsizei n, const GLuint * shaders, GLenum binaryformat, const GLvoid * binary, GLsizei length
#define glShaderBinary_PACKED PACKED_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei
#define glShaderBinary_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT___GLenum_const_GLvoid___GENPT___GLsizei
#define glShaderSource_INDEX 99
#define glShaderSource_RETURN void
#define glShaderSource_ARG_NAMES shader, count, string, length
#define glShaderSource_ARG_EXPAND GLuint shader, GLsizei count, const GLchar * const * string, const GLint * length
#define glShaderSource_PACKED PACKED_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__
#define glShaderSource_FORMAT FORMAT_void_GLuint_GLsizei_const_GLchar___GENPT___const___GENPT___const_GLint___GENPT__
#define glStencilFunc_INDEX 100
#define glStencilFunc_RETURN void
#define glStencilFunc_ARG_NAMES func, ref, mask
#define glStencilFunc_ARG_EXPAND GLenum func, GLint ref, GLuint mask
#define glStencilFunc_PACKED PACKED_void_GLenum_GLint_GLuint
#define glStencilFunc_FORMAT FORMAT_void_GLenum_GLint_GLuint
#define glStencilFuncSeparate_INDEX 101
#define glStencilFuncSeparate_RETURN void
#define glStencilFuncSeparate_ARG_NAMES face, func, ref, mask
#define glStencilFuncSeparate_ARG_EXPAND GLenum face, GLenum func, GLint ref, GLuint mask
#define glStencilFuncSeparate_PACKED PACKED_void_GLenum_GLenum_GLint_GLuint
#define glStencilFuncSeparate_FORMAT FORMAT_void_GLenum_GLenum_GLint_GLuint
#define glStencilMask_INDEX 102
#define glStencilMask_RETURN void
#define glStencilMask_ARG_NAMES mask
#define glStencilMask_ARG_EXPAND GLuint mask
#define glStencilMask_PACKED PACKED_void_GLuint
#define glStencilMask_FORMAT FORMAT_void_GLuint
#define glStencilMaskSeparate_INDEX 103
#define glStencilMaskSeparate_RETURN void
#define glStencilMaskSeparate_ARG_NAMES face, mask
#define glStencilMaskSeparate_ARG_EXPAND GLenum face, GLuint mask
#define glStencilMaskSeparate_PACKED PACKED_void_GLenum_GLuint
#define glStencilMaskSeparate_FORMAT FORMAT_void_GLenum_GLuint
#define glStencilOp_INDEX 104
#define glStencilOp_RETURN void
#define glStencilOp_ARG_NAMES fail, zfail, zpass
#define glStencilOp_ARG_EXPAND GLenum fail, GLenum zfail, GLenum zpass
#define glStencilOp_PACKED PACKED_void_GLenum_GLenum_GLenum
#define glStencilOp_FORMAT FORMAT_void_GLenum_GLenum_GLenum
#define glStencilOpSeparate_INDEX 105
#define glStencilOpSeparate_RETURN void
#define glStencilOpSeparate_ARG_NAMES face, sfail, zfail, zpass
#define glStencilOpSeparate_ARG_EXPAND GLenum face, GLenum sfail, GLenum zfail, GLenum zpass
#define glStencilOpSeparate_PACKED PACKED_void_GLenum_GLenum_GLenum_GLenum
#define glStencilOpSeparate_FORMAT FORMAT_void_GLenum_GLenum_GLenum_GLenum
#define glTexImage2D_INDEX 106
#define glTexImage2D_RETURN void
#define glTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, format, type, pixels
#define glTexImage2D_ARG_EXPAND GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels
#define glTexImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexParameterf_INDEX 107
#define glTexParameterf_RETURN void
#define glTexParameterf_ARG_NAMES target, pname, param
#define glTexParameterf_ARG_EXPAND GLenum target, GLenum pname, GLfloat param
#define glTexParameterf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define glTexParameterf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define glTexParameterfv_INDEX 108
#define glTexParameterfv_RETURN void
#define glTexParameterfv_ARG_NAMES target, pname, params
#define glTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, const GLfloat * params
#define glTexParameterfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexParameterfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexParameteri_INDEX 109
#define glTexParameteri_RETURN void
#define glTexParameteri_ARG_NAMES target, pname, param
#define glTexParameteri_ARG_EXPAND GLenum target, GLenum pname, GLint param
#define glTexParameteri_PACKED PACKED_void_GLenum_GLenum_GLint
#define glTexParameteri_FORMAT FORMAT_void_GLenum_GLenum_GLint
#define glTexParameteriv_INDEX 110
#define glTexParameteriv_RETURN void
#define glTexParameteriv_ARG_NAMES target, pname, params
#define glTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, const GLint * params
#define glTexParameteriv_PACKED PACKED_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexParameteriv_FORMAT FORMAT_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexSubImage2D_INDEX 111
#define glTexSubImage2D_RETURN void
#define glTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, type, pixels
#define glTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels
#define glTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define glUniform1f_INDEX 112
#define glUniform1f_RETURN void
#define glUniform1f_ARG_NAMES location, v0
#define glUniform1f_ARG_EXPAND GLint location, GLfloat v0
#define glUniform1f_PACKED PACKED_void_GLint_GLfloat
#define glUniform1f_FORMAT FORMAT_void_GLint_GLfloat
#define glUniform1fv_INDEX 113
#define glUniform1fv_RETURN void
#define glUniform1fv_ARG_NAMES location, count, value
#define glUniform1fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform1fv_PACKED PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform1fv_FORMAT FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform1i_INDEX 114
#define glUniform1i_RETURN void
#define glUniform1i_ARG_NAMES location, v0
#define glUniform1i_ARG_EXPAND GLint location, GLint v0
#define glUniform1i_PACKED PACKED_void_GLint_GLint
#define glUniform1i_FORMAT FORMAT_void_GLint_GLint
#define glUniform1iv_INDEX 115
#define glUniform1iv_RETURN void
#define glUniform1iv_ARG_NAMES location, count, value
#define glUniform1iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform1iv_PACKED PACKED_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform1iv_FORMAT FORMAT_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform2f_INDEX 116
#define glUniform2f_RETURN void
#define glUniform2f_ARG_NAMES location, v0, v1
#define glUniform2f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1
#define glUniform2f_PACKED PACKED_void_GLint_GLfloat_GLfloat
#define glUniform2f_FORMAT FORMAT_void_GLint_GLfloat_GLfloat
#define glUniform2fv_INDEX 117
#define glUniform2fv_RETURN void
#define glUniform2fv_ARG_NAMES location, count, value
#define glUniform2fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform2fv_PACKED PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform2fv_FORMAT FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform2i_INDEX 118
#define glUniform2i_RETURN void
#define glUniform2i_ARG_NAMES location, v0, v1
#define glUniform2i_ARG_EXPAND GLint location, GLint v0, GLint v1
#define glUniform2i_PACKED PACKED_void_GLint_GLint_GLint
#define glUniform2i_FORMAT FORMAT_void_GLint_GLint_GLint
#define glUniform2iv_INDEX 119
#define glUniform2iv_RETURN void
#define glUniform2iv_ARG_NAMES location, count, value
#define glUniform2iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform2iv_PACKED PACKED_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform2iv_FORMAT FORMAT_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform3f_INDEX 120
#define glUniform3f_RETURN void
#define glUniform3f_ARG_NAMES location, v0, v1, v2
#define glUniform3f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1, GLfloat v2
#define glUniform3f_PACKED PACKED_void_GLint_GLfloat_GLfloat_GLfloat
#define glUniform3f_FORMAT FORMAT_void_GLint_GLfloat_GLfloat_GLfloat
#define glUniform3fv_INDEX 121
#define glUniform3fv_RETURN void
#define glUniform3fv_ARG_NAMES location, count, value
#define glUniform3fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform3fv_PACKED PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform3fv_FORMAT FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform3i_INDEX 122
#define glUniform3i_RETURN void
#define glUniform3i_ARG_NAMES location, v0, v1, v2
#define glUniform3i_ARG_EXPAND GLint location, GLint v0, GLint v1, GLint v2
#define glUniform3i_PACKED PACKED_void_GLint_GLint_GLint_GLint
#define glUniform3i_FORMAT FORMAT_void_GLint_GLint_GLint_GLint
#define glUniform3iv_INDEX 123
#define glUniform3iv_RETURN void
#define glUniform3iv_ARG_NAMES location, count, value
#define glUniform3iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform3iv_PACKED PACKED_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform3iv_FORMAT FORMAT_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform4f_INDEX 124
#define glUniform4f_RETURN void
#define glUniform4f_ARG_NAMES location, v0, v1, v2, v3
#define glUniform4f_ARG_EXPAND GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3
#define glUniform4f_PACKED PACKED_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat
#define glUniform4f_FORMAT FORMAT_void_GLint_GLfloat_GLfloat_GLfloat_GLfloat
#define glUniform4fv_INDEX 125
#define glUniform4fv_RETURN void
#define glUniform4fv_ARG_NAMES location, count, value
#define glUniform4fv_ARG_EXPAND GLint location, GLsizei count, const GLfloat * value
#define glUniform4fv_PACKED PACKED_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform4fv_FORMAT FORMAT_void_GLint_GLsizei_const_GLfloat___GENPT__
#define glUniform4i_INDEX 126
#define glUniform4i_RETURN void
#define glUniform4i_ARG_NAMES location, v0, v1, v2, v3
#define glUniform4i_ARG_EXPAND GLint location, GLint v0, GLint v1, GLint v2, GLint v3
#define glUniform4i_PACKED PACKED_void_GLint_GLint_GLint_GLint_GLint
#define glUniform4i_FORMAT FORMAT_void_GLint_GLint_GLint_GLint_GLint
#define glUniform4iv_INDEX 127
#define glUniform4iv_RETURN void
#define glUniform4iv_ARG_NAMES location, count, value
#define glUniform4iv_ARG_EXPAND GLint location, GLsizei count, const GLint * value
#define glUniform4iv_PACKED PACKED_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniform4iv_FORMAT FORMAT_void_GLint_GLsizei_const_GLint___GENPT__
#define glUniformMatrix2fv_INDEX 128
#define glUniformMatrix2fv_RETURN void
#define glUniformMatrix2fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix2fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix2fv_PACKED PACKED_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUniformMatrix2fv_FORMAT FORMAT_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUniformMatrix3fv_INDEX 129
#define glUniformMatrix3fv_RETURN void
#define glUniformMatrix3fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix3fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix3fv_PACKED PACKED_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUniformMatrix3fv_FORMAT FORMAT_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUniformMatrix4fv_INDEX 130
#define glUniformMatrix4fv_RETURN void
#define glUniformMatrix4fv_ARG_NAMES location, count, transpose, value
#define glUniformMatrix4fv_ARG_EXPAND GLint location, GLsizei count, GLboolean transpose, const GLfloat * value
#define glUniformMatrix4fv_PACKED PACKED_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUniformMatrix4fv_FORMAT FORMAT_void_GLint_GLsizei_GLboolean_const_GLfloat___GENPT__
#define glUseProgram_INDEX 131
#define glUseProgram_RETURN void
#define glUseProgram_ARG_NAMES program
#define glUseProgram_ARG_EXPAND GLuint program
#define glUseProgram_PACKED PACKED_void_GLuint
#define glUseProgram_FORMAT FORMAT_void_GLuint
#define glValidateProgram_INDEX 132
#define glValidateProgram_RETURN void
#define glValidateProgram_ARG_NAMES program
#define glValidateProgram_ARG_EXPAND GLuint program
#define glValidateProgram_PACKED PACKED_void_GLuint
#define glValidateProgram_FORMAT FORMAT_void_GLuint
#define glVertexAttrib1f_INDEX 133
#define glVertexAttrib1f_RETURN void
#define glVertexAttrib1f_ARG_NAMES index, x
#define glVertexAttrib1f_ARG_EXPAND GLuint index, GLfloat x
#define glVertexAttrib1f_PACKED PACKED_void_GLuint_GLfloat
#define glVertexAttrib1f_FORMAT FORMAT_void_GLuint_GLfloat
#define glVertexAttrib1fv_INDEX 134
#define glVertexAttrib1fv_RETURN void
#define glVertexAttrib1fv_ARG_NAMES index, v
#define glVertexAttrib1fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib1fv_PACKED PACKED_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib1fv_FORMAT FORMAT_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib2f_INDEX 135
#define glVertexAttrib2f_RETURN void
#define glVertexAttrib2f_ARG_NAMES index, x, y
#define glVertexAttrib2f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y
#define glVertexAttrib2f_PACKED PACKED_void_GLuint_GLfloat_GLfloat
#define glVertexAttrib2f_FORMAT FORMAT_void_GLuint_GLfloat_GLfloat
#define glVertexAttrib2fv_INDEX 136
#define glVertexAttrib2fv_RETURN void
#define glVertexAttrib2fv_ARG_NAMES index, v
#define glVertexAttrib2fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib2fv_PACKED PACKED_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib2fv_FORMAT FORMAT_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib3f_INDEX 137
#define glVertexAttrib3f_RETURN void
#define glVertexAttrib3f_ARG_NAMES index, x, y, z
#define glVertexAttrib3f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y, GLfloat z
#define glVertexAttrib3f_PACKED PACKED_void_GLuint_GLfloat_GLfloat_GLfloat
#define glVertexAttrib3f_FORMAT FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat
#define glVertexAttrib3fv_INDEX 138
#define glVertexAttrib3fv_RETURN void
#define glVertexAttrib3fv_ARG_NAMES index, v
#define glVertexAttrib3fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib3fv_PACKED PACKED_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib3fv_FORMAT FORMAT_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib4f_INDEX 139
#define glVertexAttrib4f_RETURN void
#define glVertexAttrib4f_ARG_NAMES index, x, y, z, w
#define glVertexAttrib4f_ARG_EXPAND GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w
#define glVertexAttrib4f_PACKED PACKED_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat
#define glVertexAttrib4f_FORMAT FORMAT_void_GLuint_GLfloat_GLfloat_GLfloat_GLfloat
#define glVertexAttrib4fv_INDEX 140
#define glVertexAttrib4fv_RETURN void
#define glVertexAttrib4fv_ARG_NAMES index, v
#define glVertexAttrib4fv_ARG_EXPAND GLuint index, const GLfloat * v
#define glVertexAttrib4fv_PACKED PACKED_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttrib4fv_FORMAT FORMAT_void_GLuint_const_GLfloat___GENPT__
#define glVertexAttribPointer_INDEX 141
#define glVertexAttribPointer_RETURN void
#define glVertexAttribPointer_ARG_NAMES index, size, type, normalized, stride, pointer
#define glVertexAttribPointer_ARG_EXPAND GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer
#define glVertexAttribPointer_PACKED PACKED_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__
#define glVertexAttribPointer_FORMAT FORMAT_void_GLuint_GLint_GLenum_GLboolean_GLsizei_const_GLvoid___GENPT__
#define glViewport_INDEX 142
#define glViewport_RETURN void
#define glViewport_ARG_NAMES x, y, width, height
#define glViewport_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glViewport_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei
#define glViewport_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei

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


#define pack_glActiveTexture(texture) ({ \
    glActiveTexture_PACKED *packed_data = malloc(sizeof(glActiveTexture_PACKED)); \
    packed_data->index = glActiveTexture_INDEX; \
    packed_data->args.a1 = (GLenum)texture; \
    packed_data; \
})
#define pack_glAttachShader(program, shader) ({ \
    glAttachShader_PACKED *packed_data = malloc(sizeof(glAttachShader_PACKED)); \
    packed_data->index = glAttachShader_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLuint)shader; \
    packed_data; \
})
#define pack_glBindAttribLocation(program, index, name) ({ \
    glBindAttribLocation_PACKED *packed_data = malloc(sizeof(glBindAttribLocation_PACKED)); \
    packed_data->index = glBindAttribLocation_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLuint)index; \
    packed_data->args.a3 = (GLchar *)name; \
    packed_data; \
})
#define pack_glBindBuffer(target, buffer) ({ \
    glBindBuffer_PACKED *packed_data = malloc(sizeof(glBindBuffer_PACKED)); \
    packed_data->index = glBindBuffer_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLuint)buffer; \
    packed_data; \
})
#define pack_glBindFramebuffer(target, framebuffer) ({ \
    glBindFramebuffer_PACKED *packed_data = malloc(sizeof(glBindFramebuffer_PACKED)); \
    packed_data->index = glBindFramebuffer_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLuint)framebuffer; \
    packed_data; \
})
#define pack_glBindRenderbuffer(target, renderbuffer) ({ \
    glBindRenderbuffer_PACKED *packed_data = malloc(sizeof(glBindRenderbuffer_PACKED)); \
    packed_data->index = glBindRenderbuffer_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLuint)renderbuffer; \
    packed_data; \
})
#define pack_glBindTexture(target, texture) ({ \
    glBindTexture_PACKED *packed_data = malloc(sizeof(glBindTexture_PACKED)); \
    packed_data->index = glBindTexture_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLuint)texture; \
    packed_data; \
})
#define pack_glBlendColor(red, green, blue, alpha) ({ \
    glBlendColor_PACKED *packed_data = malloc(sizeof(glBlendColor_PACKED)); \
    packed_data->index = glBlendColor_INDEX; \
    packed_data->args.a1 = (GLclampf)red; \
    packed_data->args.a2 = (GLclampf)green; \
    packed_data->args.a3 = (GLclampf)blue; \
    packed_data->args.a4 = (GLclampf)alpha; \
    packed_data; \
})
#define pack_glBlendEquation(mode) ({ \
    glBlendEquation_PACKED *packed_data = malloc(sizeof(glBlendEquation_PACKED)); \
    packed_data->index = glBlendEquation_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data; \
})
#define pack_glBlendEquationSeparate(modeRGB, modeA) ({ \
    glBlendEquationSeparate_PACKED *packed_data = malloc(sizeof(glBlendEquationSeparate_PACKED)); \
    packed_data->index = glBlendEquationSeparate_INDEX; \
    packed_data->args.a1 = (GLenum)modeRGB; \
    packed_data->args.a2 = (GLenum)modeA; \
    packed_data; \
})
#define pack_glBlendFunc(sfactor, dfactor) ({ \
    glBlendFunc_PACKED *packed_data = malloc(sizeof(glBlendFunc_PACKED)); \
    packed_data->index = glBlendFunc_INDEX; \
    packed_data->args.a1 = (GLenum)sfactor; \
    packed_data->args.a2 = (GLenum)dfactor; \
    packed_data; \
})
#define pack_glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha) ({ \
    glBlendFuncSeparate_PACKED *packed_data = malloc(sizeof(glBlendFuncSeparate_PACKED)); \
    packed_data->index = glBlendFuncSeparate_INDEX; \
    packed_data->args.a1 = (GLenum)sfactorRGB; \
    packed_data->args.a2 = (GLenum)dfactorRGB; \
    packed_data->args.a3 = (GLenum)sfactorAlpha; \
    packed_data->args.a4 = (GLenum)dfactorAlpha; \
    packed_data; \
})
#define pack_glBufferData(target, size, data, usage) ({ \
    glBufferData_PACKED *packed_data = malloc(sizeof(glBufferData_PACKED)); \
    packed_data->index = glBufferData_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLsizeiptr)size; \
    packed_data->args.a3 = (GLvoid *)data; \
    packed_data->args.a4 = (GLenum)usage; \
    packed_data; \
})
#define pack_glBufferSubData(target, offset, size, data) ({ \
    glBufferSubData_PACKED *packed_data = malloc(sizeof(glBufferSubData_PACKED)); \
    packed_data->index = glBufferSubData_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLintptr)offset; \
    packed_data->args.a3 = (GLsizeiptr)size; \
    packed_data->args.a4 = (GLvoid *)data; \
    packed_data; \
})
#define pack_glCheckFramebufferStatus(target) ({ \
    glCheckFramebufferStatus_PACKED *packed_data = malloc(sizeof(glCheckFramebufferStatus_PACKED)); \
    packed_data->index = glCheckFramebufferStatus_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data; \
})
#define pack_glClear(mask) ({ \
    glClear_PACKED *packed_data = malloc(sizeof(glClear_PACKED)); \
    packed_data->index = glClear_INDEX; \
    packed_data->args.a1 = (GLbitfield)mask; \
    packed_data; \
})
#define pack_glClearColor(red, green, blue, alpha) ({ \
    glClearColor_PACKED *packed_data = malloc(sizeof(glClearColor_PACKED)); \
    packed_data->index = glClearColor_INDEX; \
    packed_data->args.a1 = (GLclampf)red; \
    packed_data->args.a2 = (GLclampf)green; \
    packed_data->args.a3 = (GLclampf)blue; \
    packed_data->args.a4 = (GLclampf)alpha; \
    packed_data; \
})
#define pack_glClearDepthf(depth) ({ \
    glClearDepthf_PACKED *packed_data = malloc(sizeof(glClearDepthf_PACKED)); \
    packed_data->index = glClearDepthf_INDEX; \
    packed_data->args.a1 = (GLclampf)depth; \
    packed_data; \
})
#define pack_glClearStencil(s) ({ \
    glClearStencil_PACKED *packed_data = malloc(sizeof(glClearStencil_PACKED)); \
    packed_data->index = glClearStencil_INDEX; \
    packed_data->args.a1 = (GLint)s; \
    packed_data; \
})
#define pack_glColorMask(red, green, blue, alpha) ({ \
    glColorMask_PACKED *packed_data = malloc(sizeof(glColorMask_PACKED)); \
    packed_data->index = glColorMask_INDEX; \
    packed_data->args.a1 = (GLboolean)red; \
    packed_data->args.a2 = (GLboolean)green; \
    packed_data->args.a3 = (GLboolean)blue; \
    packed_data->args.a4 = (GLboolean)alpha; \
    packed_data; \
})
#define pack_glCompileShader(shader) ({ \
    glCompileShader_PACKED *packed_data = malloc(sizeof(glCompileShader_PACKED)); \
    packed_data->index = glCompileShader_INDEX; \
    packed_data->args.a1 = (GLuint)shader; \
    packed_data; \
})
#define pack_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data) ({ \
    glCompressedTexImage2D_PACKED *packed_data = malloc(sizeof(glCompressedTexImage2D_PACKED)); \
    packed_data->index = glCompressedTexImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLenum)internalformat; \
    packed_data->args.a4 = (GLsizei)width; \
    packed_data->args.a5 = (GLsizei)height; \
    packed_data->args.a6 = (GLint)border; \
    packed_data->args.a7 = (GLsizei)imageSize; \
    packed_data->args.a8 = (GLvoid *)data; \
    packed_data; \
})
#define pack_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data) ({ \
    glCompressedTexSubImage2D_PACKED *packed_data = malloc(sizeof(glCompressedTexSubImage2D_PACKED)); \
    packed_data->index = glCompressedTexSubImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)xoffset; \
    packed_data->args.a4 = (GLint)yoffset; \
    packed_data->args.a5 = (GLsizei)width; \
    packed_data->args.a6 = (GLsizei)height; \
    packed_data->args.a7 = (GLenum)format; \
    packed_data->args.a8 = (GLsizei)imageSize; \
    packed_data->args.a9 = (GLvoid *)data; \
    packed_data; \
})
#define pack_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border) ({ \
    glCopyTexImage2D_PACKED *packed_data = malloc(sizeof(glCopyTexImage2D_PACKED)); \
    packed_data->index = glCopyTexImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLenum)internalformat; \
    packed_data->args.a4 = (GLint)x; \
    packed_data->args.a5 = (GLint)y; \
    packed_data->args.a6 = (GLsizei)width; \
    packed_data->args.a7 = (GLsizei)height; \
    packed_data->args.a8 = (GLint)border; \
    packed_data; \
})
#define pack_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height) ({ \
    glCopyTexSubImage2D_PACKED *packed_data = malloc(sizeof(glCopyTexSubImage2D_PACKED)); \
    packed_data->index = glCopyTexSubImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)xoffset; \
    packed_data->args.a4 = (GLint)yoffset; \
    packed_data->args.a5 = (GLint)x; \
    packed_data->args.a6 = (GLint)y; \
    packed_data->args.a7 = (GLsizei)width; \
    packed_data->args.a8 = (GLsizei)height; \
    packed_data; \
})
#define pack_glCreateProgram() ({ \
    glCreateProgram_PACKED *packed_data = malloc(sizeof(glCreateProgram_PACKED)); \
    packed_data->index = glCreateProgram_INDEX; \
    packed_data; \
})
#define pack_glCreateShader(type) ({ \
    glCreateShader_PACKED *packed_data = malloc(sizeof(glCreateShader_PACKED)); \
    packed_data->index = glCreateShader_INDEX; \
    packed_data->args.a1 = (GLenum)type; \
    packed_data; \
})
#define pack_glCullFace(mode) ({ \
    glCullFace_PACKED *packed_data = malloc(sizeof(glCullFace_PACKED)); \
    packed_data->index = glCullFace_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data; \
})
#define pack_glDeleteBuffers(n, buffer) ({ \
    glDeleteBuffers_PACKED *packed_data = malloc(sizeof(glDeleteBuffers_PACKED)); \
    packed_data->index = glDeleteBuffers_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)buffer; \
    packed_data; \
})
#define pack_glDeleteFramebuffers(n, framebuffers) ({ \
    glDeleteFramebuffers_PACKED *packed_data = malloc(sizeof(glDeleteFramebuffers_PACKED)); \
    packed_data->index = glDeleteFramebuffers_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)framebuffers; \
    packed_data; \
})
#define pack_glDeleteProgram(program) ({ \
    glDeleteProgram_PACKED *packed_data = malloc(sizeof(glDeleteProgram_PACKED)); \
    packed_data->index = glDeleteProgram_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data; \
})
#define pack_glDeleteRenderbuffers(n, renderbuffers) ({ \
    glDeleteRenderbuffers_PACKED *packed_data = malloc(sizeof(glDeleteRenderbuffers_PACKED)); \
    packed_data->index = glDeleteRenderbuffers_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)renderbuffers; \
    packed_data; \
})
#define pack_glDeleteShader(program) ({ \
    glDeleteShader_PACKED *packed_data = malloc(sizeof(glDeleteShader_PACKED)); \
    packed_data->index = glDeleteShader_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data; \
})
#define pack_glDeleteTextures(n, textures) ({ \
    glDeleteTextures_PACKED *packed_data = malloc(sizeof(glDeleteTextures_PACKED)); \
    packed_data->index = glDeleteTextures_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)textures; \
    packed_data; \
})
#define pack_glDepthFunc(func) ({ \
    glDepthFunc_PACKED *packed_data = malloc(sizeof(glDepthFunc_PACKED)); \
    packed_data->index = glDepthFunc_INDEX; \
    packed_data->args.a1 = (GLenum)func; \
    packed_data; \
})
#define pack_glDepthMask(flag) ({ \
    glDepthMask_PACKED *packed_data = malloc(sizeof(glDepthMask_PACKED)); \
    packed_data->index = glDepthMask_INDEX; \
    packed_data->args.a1 = (GLboolean)flag; \
    packed_data; \
})
#define pack_glDepthRangef(zNear, zFar) ({ \
    glDepthRangef_PACKED *packed_data = malloc(sizeof(glDepthRangef_PACKED)); \
    packed_data->index = glDepthRangef_INDEX; \
    packed_data->args.a1 = (GLclampf)zNear; \
    packed_data->args.a2 = (GLclampf)zFar; \
    packed_data; \
})
#define pack_glDetachShader(program, shader) ({ \
    glDetachShader_PACKED *packed_data = malloc(sizeof(glDetachShader_PACKED)); \
    packed_data->index = glDetachShader_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLuint)shader; \
    packed_data; \
})
#define pack_glDisable(cap) ({ \
    glDisable_PACKED *packed_data = malloc(sizeof(glDisable_PACKED)); \
    packed_data->index = glDisable_INDEX; \
    packed_data->args.a1 = (GLenum)cap; \
    packed_data; \
})
#define pack_glDisableVertexAttribArray(index) ({ \
    glDisableVertexAttribArray_PACKED *packed_data = malloc(sizeof(glDisableVertexAttribArray_PACKED)); \
    packed_data->index = glDisableVertexAttribArray_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data; \
})
#define pack_glDrawArrays(mode, first, count) ({ \
    glDrawArrays_PACKED *packed_data = malloc(sizeof(glDrawArrays_PACKED)); \
    packed_data->index = glDrawArrays_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data->args.a2 = (GLint)first; \
    packed_data->args.a3 = (GLsizei)count; \
    packed_data; \
})
#define pack_glDrawElements(mode, count, type, indices) ({ \
    glDrawElements_PACKED *packed_data = malloc(sizeof(glDrawElements_PACKED)); \
    packed_data->index = glDrawElements_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLenum)type; \
    packed_data->args.a4 = (GLvoid *)indices; \
    packed_data; \
})
#define pack_glEnable(cap) ({ \
    glEnable_PACKED *packed_data = malloc(sizeof(glEnable_PACKED)); \
    packed_data->index = glEnable_INDEX; \
    packed_data->args.a1 = (GLenum)cap; \
    packed_data; \
})
#define pack_glEnableVertexAttribArray(index) ({ \
    glEnableVertexAttribArray_PACKED *packed_data = malloc(sizeof(glEnableVertexAttribArray_PACKED)); \
    packed_data->index = glEnableVertexAttribArray_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data; \
})
#define pack_glFinish() ({ \
    glFinish_PACKED *packed_data = malloc(sizeof(glFinish_PACKED)); \
    packed_data->index = glFinish_INDEX; \
    packed_data; \
})
#define pack_glFlush() ({ \
    glFlush_PACKED *packed_data = malloc(sizeof(glFlush_PACKED)); \
    packed_data->index = glFlush_INDEX; \
    packed_data; \
})
#define pack_glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer) ({ \
    glFramebufferRenderbuffer_PACKED *packed_data = malloc(sizeof(glFramebufferRenderbuffer_PACKED)); \
    packed_data->index = glFramebufferRenderbuffer_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)attachment; \
    packed_data->args.a3 = (GLenum)renderbuffertarget; \
    packed_data->args.a4 = (GLuint)renderbuffer; \
    packed_data; \
})
#define pack_glFramebufferTexture2D(target, attachment, textarget, texture, level) ({ \
    glFramebufferTexture2D_PACKED *packed_data = malloc(sizeof(glFramebufferTexture2D_PACKED)); \
    packed_data->index = glFramebufferTexture2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)attachment; \
    packed_data->args.a3 = (GLenum)textarget; \
    packed_data->args.a4 = (GLuint)texture; \
    packed_data->args.a5 = (GLint)level; \
    packed_data; \
})
#define pack_glFrontFace(mode) ({ \
    glFrontFace_PACKED *packed_data = malloc(sizeof(glFrontFace_PACKED)); \
    packed_data->index = glFrontFace_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data; \
})
#define pack_glGenBuffers(n, buffer) ({ \
    glGenBuffers_PACKED *packed_data = malloc(sizeof(glGenBuffers_PACKED)); \
    packed_data->index = glGenBuffers_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)buffer; \
    packed_data; \
})
#define pack_glGenFramebuffers(n, framebuffers) ({ \
    glGenFramebuffers_PACKED *packed_data = malloc(sizeof(glGenFramebuffers_PACKED)); \
    packed_data->index = glGenFramebuffers_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)framebuffers; \
    packed_data; \
})
#define pack_glGenRenderbuffers(n, renderbuffers) ({ \
    glGenRenderbuffers_PACKED *packed_data = malloc(sizeof(glGenRenderbuffers_PACKED)); \
    packed_data->index = glGenRenderbuffers_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)renderbuffers; \
    packed_data; \
})
#define pack_glGenTextures(n, textures) ({ \
    glGenTextures_PACKED *packed_data = malloc(sizeof(glGenTextures_PACKED)); \
    packed_data->index = glGenTextures_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)textures; \
    packed_data; \
})
#define pack_glGenerateMipmap(target) ({ \
    glGenerateMipmap_PACKED *packed_data = malloc(sizeof(glGenerateMipmap_PACKED)); \
    packed_data->index = glGenerateMipmap_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data; \
})
#define pack_glGetActiveAttrib(program, index, bufSize, length, size, type, name) ({ \
    glGetActiveAttrib_PACKED *packed_data = malloc(sizeof(glGetActiveAttrib_PACKED)); \
    packed_data->index = glGetActiveAttrib_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLuint)index; \
    packed_data->args.a3 = (GLsizei)bufSize; \
    packed_data->args.a4 = (GLsizei *)length; \
    packed_data->args.a5 = (GLint *)size; \
    packed_data->args.a6 = (GLenum *)type; \
    packed_data->args.a7 = (GLchar *)name; \
    packed_data; \
})
#define pack_glGetActiveUniform(program, index, bufSize, length, size, type, name) ({ \
    glGetActiveUniform_PACKED *packed_data = malloc(sizeof(glGetActiveUniform_PACKED)); \
    packed_data->index = glGetActiveUniform_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLuint)index; \
    packed_data->args.a3 = (GLsizei)bufSize; \
    packed_data->args.a4 = (GLsizei *)length; \
    packed_data->args.a5 = (GLint *)size; \
    packed_data->args.a6 = (GLenum *)type; \
    packed_data->args.a7 = (GLchar *)name; \
    packed_data; \
})
#define pack_glGetAttachedShaders(program, maxCount, count, obj) ({ \
    glGetAttachedShaders_PACKED *packed_data = malloc(sizeof(glGetAttachedShaders_PACKED)); \
    packed_data->index = glGetAttachedShaders_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLsizei)maxCount; \
    packed_data->args.a3 = (GLsizei *)count; \
    packed_data->args.a4 = (GLuint *)obj; \
    packed_data; \
})
#define pack_glGetAttribLocation(program, name) ({ \
    glGetAttribLocation_PACKED *packed_data = malloc(sizeof(glGetAttribLocation_PACKED)); \
    packed_data->index = glGetAttribLocation_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLchar *)name; \
    packed_data; \
})
#define pack_glGetBooleanv(pname, params) ({ \
    glGetBooleanv_PACKED *packed_data = malloc(sizeof(glGetBooleanv_PACKED)); \
    packed_data->index = glGetBooleanv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLboolean *)params; \
    packed_data; \
})
#define pack_glGetBufferParameteriv(target, pname, params) ({ \
    glGetBufferParameteriv_PACKED *packed_data = malloc(sizeof(glGetBufferParameteriv_PACKED)); \
    packed_data->index = glGetBufferParameteriv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define pack_glGetError() ({ \
    glGetError_PACKED *packed_data = malloc(sizeof(glGetError_PACKED)); \
    packed_data->index = glGetError_INDEX; \
    packed_data; \
})
#define pack_glGetFloatv(pname, params) ({ \
    glGetFloatv_PACKED *packed_data = malloc(sizeof(glGetFloatv_PACKED)); \
    packed_data->index = glGetFloatv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat *)params; \
    packed_data; \
})
#define pack_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params) ({ \
    glGetFramebufferAttachmentParameteriv_PACKED *packed_data = malloc(sizeof(glGetFramebufferAttachmentParameteriv_PACKED)); \
    packed_data->index = glGetFramebufferAttachmentParameteriv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)attachment; \
    packed_data->args.a3 = (GLenum)pname; \
    packed_data->args.a4 = (GLint *)params; \
    packed_data; \
})
#define pack_glGetIntegerv(pname, params) ({ \
    glGetIntegerv_PACKED *packed_data = malloc(sizeof(glGetIntegerv_PACKED)); \
    packed_data->index = glGetIntegerv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLint *)params; \
    packed_data; \
})
#define pack_glGetProgramInfoLog(program, bufSize, length, infoLog) ({ \
    glGetProgramInfoLog_PACKED *packed_data = malloc(sizeof(glGetProgramInfoLog_PACKED)); \
    packed_data->index = glGetProgramInfoLog_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLsizei)bufSize; \
    packed_data->args.a3 = (GLsizei *)length; \
    packed_data->args.a4 = (GLchar *)infoLog; \
    packed_data; \
})
#define pack_glGetProgramiv(program, pname, params) ({ \
    glGetProgramiv_PACKED *packed_data = malloc(sizeof(glGetProgramiv_PACKED)); \
    packed_data->index = glGetProgramiv_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define pack_glGetRenderbufferParameteriv(target, pname, params) ({ \
    glGetRenderbufferParameteriv_PACKED *packed_data = malloc(sizeof(glGetRenderbufferParameteriv_PACKED)); \
    packed_data->index = glGetRenderbufferParameteriv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define pack_glGetShaderInfoLog(shader, bufSize, length, infoLog) ({ \
    glGetShaderInfoLog_PACKED *packed_data = malloc(sizeof(glGetShaderInfoLog_PACKED)); \
    packed_data->index = glGetShaderInfoLog_INDEX; \
    packed_data->args.a1 = (GLuint)shader; \
    packed_data->args.a2 = (GLsizei)bufSize; \
    packed_data->args.a3 = (GLsizei *)length; \
    packed_data->args.a4 = (GLchar *)infoLog; \
    packed_data; \
})
#define pack_glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision) ({ \
    glGetShaderPrecisionFormat_PACKED *packed_data = malloc(sizeof(glGetShaderPrecisionFormat_PACKED)); \
    packed_data->index = glGetShaderPrecisionFormat_INDEX; \
    packed_data->args.a1 = (GLenum)shadertype; \
    packed_data->args.a2 = (GLenum)precisiontype; \
    packed_data->args.a3 = (GLint *)range; \
    packed_data->args.a4 = (GLint *)precision; \
    packed_data; \
})
#define pack_glGetShaderSource(shader, bufSize, length, source) ({ \
    glGetShaderSource_PACKED *packed_data = malloc(sizeof(glGetShaderSource_PACKED)); \
    packed_data->index = glGetShaderSource_INDEX; \
    packed_data->args.a1 = (GLuint)shader; \
    packed_data->args.a2 = (GLsizei)bufSize; \
    packed_data->args.a3 = (GLsizei *)length; \
    packed_data->args.a4 = (GLchar *)source; \
    packed_data; \
})
#define pack_glGetShaderiv(shader, pname, params) ({ \
    glGetShaderiv_PACKED *packed_data = malloc(sizeof(glGetShaderiv_PACKED)); \
    packed_data->index = glGetShaderiv_INDEX; \
    packed_data->args.a1 = (GLuint)shader; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define pack_glGetString(name) ({ \
    glGetString_PACKED *packed_data = malloc(sizeof(glGetString_PACKED)); \
    packed_data->index = glGetString_INDEX; \
    packed_data->args.a1 = (GLenum)name; \
    packed_data; \
})
#define pack_glGetTexParameterfv(target, pname, params) ({ \
    glGetTexParameterfv_PACKED *packed_data = malloc(sizeof(glGetTexParameterfv_PACKED)); \
    packed_data->index = glGetTexParameterfv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define pack_glGetTexParameteriv(target, pname, params) ({ \
    glGetTexParameteriv_PACKED *packed_data = malloc(sizeof(glGetTexParameteriv_PACKED)); \
    packed_data->index = glGetTexParameteriv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define pack_glGetUniformLocation(program, name) ({ \
    glGetUniformLocation_PACKED *packed_data = malloc(sizeof(glGetUniformLocation_PACKED)); \
    packed_data->index = glGetUniformLocation_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLchar *)name; \
    packed_data; \
})
#define pack_glGetUniformfv(program, location, params) ({ \
    glGetUniformfv_PACKED *packed_data = malloc(sizeof(glGetUniformfv_PACKED)); \
    packed_data->index = glGetUniformfv_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLint)location; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define pack_glGetUniformiv(program, location, params) ({ \
    glGetUniformiv_PACKED *packed_data = malloc(sizeof(glGetUniformiv_PACKED)); \
    packed_data->index = glGetUniformiv_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data->args.a2 = (GLint)location; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define pack_glGetVertexAttribPointerv(index, pname, pointer) ({ \
    glGetVertexAttribPointerv_PACKED *packed_data = malloc(sizeof(glGetVertexAttribPointerv_PACKED)); \
    packed_data->index = glGetVertexAttribPointerv_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLvoid **)pointer; \
    packed_data; \
})
#define pack_glGetVertexAttribfv(index, pname, params) ({ \
    glGetVertexAttribfv_PACKED *packed_data = malloc(sizeof(glGetVertexAttribfv_PACKED)); \
    packed_data->index = glGetVertexAttribfv_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define pack_glGetVertexAttribiv(index, pname, params) ({ \
    glGetVertexAttribiv_PACKED *packed_data = malloc(sizeof(glGetVertexAttribiv_PACKED)); \
    packed_data->index = glGetVertexAttribiv_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define pack_glHint(target, mode) ({ \
    glHint_PACKED *packed_data = malloc(sizeof(glHint_PACKED)); \
    packed_data->index = glHint_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)mode; \
    packed_data; \
})
#define pack_glIsBuffer(buffer) ({ \
    glIsBuffer_PACKED *packed_data = malloc(sizeof(glIsBuffer_PACKED)); \
    packed_data->index = glIsBuffer_INDEX; \
    packed_data->args.a1 = (GLuint)buffer; \
    packed_data; \
})
#define pack_glIsEnabled(cap) ({ \
    glIsEnabled_PACKED *packed_data = malloc(sizeof(glIsEnabled_PACKED)); \
    packed_data->index = glIsEnabled_INDEX; \
    packed_data->args.a1 = (GLenum)cap; \
    packed_data; \
})
#define pack_glIsFramebuffer(framebuffer) ({ \
    glIsFramebuffer_PACKED *packed_data = malloc(sizeof(glIsFramebuffer_PACKED)); \
    packed_data->index = glIsFramebuffer_INDEX; \
    packed_data->args.a1 = (GLuint)framebuffer; \
    packed_data; \
})
#define pack_glIsProgram(program) ({ \
    glIsProgram_PACKED *packed_data = malloc(sizeof(glIsProgram_PACKED)); \
    packed_data->index = glIsProgram_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data; \
})
#define pack_glIsRenderbuffer(renderbuffer) ({ \
    glIsRenderbuffer_PACKED *packed_data = malloc(sizeof(glIsRenderbuffer_PACKED)); \
    packed_data->index = glIsRenderbuffer_INDEX; \
    packed_data->args.a1 = (GLuint)renderbuffer; \
    packed_data; \
})
#define pack_glIsShader(shader) ({ \
    glIsShader_PACKED *packed_data = malloc(sizeof(glIsShader_PACKED)); \
    packed_data->index = glIsShader_INDEX; \
    packed_data->args.a1 = (GLuint)shader; \
    packed_data; \
})
#define pack_glIsTexture(texture) ({ \
    glIsTexture_PACKED *packed_data = malloc(sizeof(glIsTexture_PACKED)); \
    packed_data->index = glIsTexture_INDEX; \
    packed_data->args.a1 = (GLuint)texture; \
    packed_data; \
})
#define pack_glLineWidth(width) ({ \
    glLineWidth_PACKED *packed_data = malloc(sizeof(glLineWidth_PACKED)); \
    packed_data->index = glLineWidth_INDEX; \
    packed_data->args.a1 = (GLfloat)width; \
    packed_data; \
})
#define pack_glLinkProgram(program) ({ \
    glLinkProgram_PACKED *packed_data = malloc(sizeof(glLinkProgram_PACKED)); \
    packed_data->index = glLinkProgram_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data; \
})
#define pack_glPixelStorei(pname, param) ({ \
    glPixelStorei_PACKED *packed_data = malloc(sizeof(glPixelStorei_PACKED)); \
    packed_data->index = glPixelStorei_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLint)param; \
    packed_data; \
})
#define pack_glPolygonOffset(factor, units) ({ \
    glPolygonOffset_PACKED *packed_data = malloc(sizeof(glPolygonOffset_PACKED)); \
    packed_data->index = glPolygonOffset_INDEX; \
    packed_data->args.a1 = (GLfloat)factor; \
    packed_data->args.a2 = (GLfloat)units; \
    packed_data; \
})
#define pack_glReadPixels(x, y, width, height, format, type, pixels) ({ \
    glReadPixels_PACKED *packed_data = malloc(sizeof(glReadPixels_PACKED)); \
    packed_data->index = glReadPixels_INDEX; \
    packed_data->args.a1 = (GLint)x; \
    packed_data->args.a2 = (GLint)y; \
    packed_data->args.a3 = (GLsizei)width; \
    packed_data->args.a4 = (GLsizei)height; \
    packed_data->args.a5 = (GLenum)format; \
    packed_data->args.a6 = (GLenum)type; \
    packed_data->args.a7 = (GLvoid *)pixels; \
    packed_data; \
})
#define pack_glReleaseShaderCompiler() ({ \
    glReleaseShaderCompiler_PACKED *packed_data = malloc(sizeof(glReleaseShaderCompiler_PACKED)); \
    packed_data->index = glReleaseShaderCompiler_INDEX; \
    packed_data; \
})
#define pack_glRenderbufferStorage(target, internalformat, width, height) ({ \
    glRenderbufferStorage_PACKED *packed_data = malloc(sizeof(glRenderbufferStorage_PACKED)); \
    packed_data->index = glRenderbufferStorage_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)internalformat; \
    packed_data->args.a3 = (GLsizei)width; \
    packed_data->args.a4 = (GLsizei)height; \
    packed_data; \
})
#define pack_glSampleCoverage(value, invert) ({ \
    glSampleCoverage_PACKED *packed_data = malloc(sizeof(glSampleCoverage_PACKED)); \
    packed_data->index = glSampleCoverage_INDEX; \
    packed_data->args.a1 = (GLclampf)value; \
    packed_data->args.a2 = (GLboolean)invert; \
    packed_data; \
})
#define pack_glScissor(x, y, width, height) ({ \
    glScissor_PACKED *packed_data = malloc(sizeof(glScissor_PACKED)); \
    packed_data->index = glScissor_INDEX; \
    packed_data->args.a1 = (GLint)x; \
    packed_data->args.a2 = (GLint)y; \
    packed_data->args.a3 = (GLsizei)width; \
    packed_data->args.a4 = (GLsizei)height; \
    packed_data; \
})
#define pack_glShaderBinary(n, shaders, binaryformat, binary, length) ({ \
    glShaderBinary_PACKED *packed_data = malloc(sizeof(glShaderBinary_PACKED)); \
    packed_data->index = glShaderBinary_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)shaders; \
    packed_data->args.a3 = (GLenum)binaryformat; \
    packed_data->args.a4 = (GLvoid *)binary; \
    packed_data->args.a5 = (GLsizei)length; \
    packed_data; \
})
#define pack_glShaderSource(shader, count, string, length) ({ \
    glShaderSource_PACKED *packed_data = malloc(sizeof(glShaderSource_PACKED)); \
    packed_data->index = glShaderSource_INDEX; \
    packed_data->args.a1 = (GLuint)shader; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLchar * *)string; \
    packed_data->args.a4 = (GLint *)length; \
    packed_data; \
})
#define pack_glStencilFunc(func, ref, mask) ({ \
    glStencilFunc_PACKED *packed_data = malloc(sizeof(glStencilFunc_PACKED)); \
    packed_data->index = glStencilFunc_INDEX; \
    packed_data->args.a1 = (GLenum)func; \
    packed_data->args.a2 = (GLint)ref; \
    packed_data->args.a3 = (GLuint)mask; \
    packed_data; \
})
#define pack_glStencilFuncSeparate(face, func, ref, mask) ({ \
    glStencilFuncSeparate_PACKED *packed_data = malloc(sizeof(glStencilFuncSeparate_PACKED)); \
    packed_data->index = glStencilFuncSeparate_INDEX; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)func; \
    packed_data->args.a3 = (GLint)ref; \
    packed_data->args.a4 = (GLuint)mask; \
    packed_data; \
})
#define pack_glStencilMask(mask) ({ \
    glStencilMask_PACKED *packed_data = malloc(sizeof(glStencilMask_PACKED)); \
    packed_data->index = glStencilMask_INDEX; \
    packed_data->args.a1 = (GLuint)mask; \
    packed_data; \
})
#define pack_glStencilMaskSeparate(face, mask) ({ \
    glStencilMaskSeparate_PACKED *packed_data = malloc(sizeof(glStencilMaskSeparate_PACKED)); \
    packed_data->index = glStencilMaskSeparate_INDEX; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLuint)mask; \
    packed_data; \
})
#define pack_glStencilOp(fail, zfail, zpass) ({ \
    glStencilOp_PACKED *packed_data = malloc(sizeof(glStencilOp_PACKED)); \
    packed_data->index = glStencilOp_INDEX; \
    packed_data->args.a1 = (GLenum)fail; \
    packed_data->args.a2 = (GLenum)zfail; \
    packed_data->args.a3 = (GLenum)zpass; \
    packed_data; \
})
#define pack_glStencilOpSeparate(face, sfail, zfail, zpass) ({ \
    glStencilOpSeparate_PACKED *packed_data = malloc(sizeof(glStencilOpSeparate_PACKED)); \
    packed_data->index = glStencilOpSeparate_INDEX; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)sfail; \
    packed_data->args.a3 = (GLenum)zfail; \
    packed_data->args.a4 = (GLenum)zpass; \
    packed_data; \
})
#define pack_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels) ({ \
    glTexImage2D_PACKED *packed_data = malloc(sizeof(glTexImage2D_PACKED)); \
    packed_data->index = glTexImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)internalformat; \
    packed_data->args.a4 = (GLsizei)width; \
    packed_data->args.a5 = (GLsizei)height; \
    packed_data->args.a6 = (GLint)border; \
    packed_data->args.a7 = (GLenum)format; \
    packed_data->args.a8 = (GLenum)type; \
    packed_data->args.a9 = (GLvoid *)pixels; \
    packed_data; \
})
#define pack_glTexParameterf(target, pname, param) ({ \
    glTexParameterf_PACKED *packed_data = malloc(sizeof(glTexParameterf_PACKED)); \
    packed_data->index = glTexParameterf_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat)param; \
    packed_data; \
})
#define pack_glTexParameterfv(target, pname, params) ({ \
    glTexParameterfv_PACKED *packed_data = malloc(sizeof(glTexParameterfv_PACKED)); \
    packed_data->index = glTexParameterfv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define pack_glTexParameteri(target, pname, param) ({ \
    glTexParameteri_PACKED *packed_data = malloc(sizeof(glTexParameteri_PACKED)); \
    packed_data->index = glTexParameteri_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint)param; \
    packed_data; \
})
#define pack_glTexParameteriv(target, pname, params) ({ \
    glTexParameteriv_PACKED *packed_data = malloc(sizeof(glTexParameteriv_PACKED)); \
    packed_data->index = glTexParameteriv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define pack_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels) ({ \
    glTexSubImage2D_PACKED *packed_data = malloc(sizeof(glTexSubImage2D_PACKED)); \
    packed_data->index = glTexSubImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)xoffset; \
    packed_data->args.a4 = (GLint)yoffset; \
    packed_data->args.a5 = (GLsizei)width; \
    packed_data->args.a6 = (GLsizei)height; \
    packed_data->args.a7 = (GLenum)format; \
    packed_data->args.a8 = (GLenum)type; \
    packed_data->args.a9 = (GLvoid *)pixels; \
    packed_data; \
})
#define pack_glUniform1f(location, v0) ({ \
    glUniform1f_PACKED *packed_data = malloc(sizeof(glUniform1f_PACKED)); \
    packed_data->index = glUniform1f_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLfloat)v0; \
    packed_data; \
})
#define pack_glUniform1fv(location, count, value) ({ \
    glUniform1fv_PACKED *packed_data = malloc(sizeof(glUniform1fv_PACKED)); \
    packed_data->index = glUniform1fv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLfloat *)value; \
    packed_data; \
})
#define pack_glUniform1i(location, v0) ({ \
    glUniform1i_PACKED *packed_data = malloc(sizeof(glUniform1i_PACKED)); \
    packed_data->index = glUniform1i_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLint)v0; \
    packed_data; \
})
#define pack_glUniform1iv(location, count, value) ({ \
    glUniform1iv_PACKED *packed_data = malloc(sizeof(glUniform1iv_PACKED)); \
    packed_data->index = glUniform1iv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLint *)value; \
    packed_data; \
})
#define pack_glUniform2f(location, v0, v1) ({ \
    glUniform2f_PACKED *packed_data = malloc(sizeof(glUniform2f_PACKED)); \
    packed_data->index = glUniform2f_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLfloat)v0; \
    packed_data->args.a3 = (GLfloat)v1; \
    packed_data; \
})
#define pack_glUniform2fv(location, count, value) ({ \
    glUniform2fv_PACKED *packed_data = malloc(sizeof(glUniform2fv_PACKED)); \
    packed_data->index = glUniform2fv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLfloat *)value; \
    packed_data; \
})
#define pack_glUniform2i(location, v0, v1) ({ \
    glUniform2i_PACKED *packed_data = malloc(sizeof(glUniform2i_PACKED)); \
    packed_data->index = glUniform2i_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLint)v0; \
    packed_data->args.a3 = (GLint)v1; \
    packed_data; \
})
#define pack_glUniform2iv(location, count, value) ({ \
    glUniform2iv_PACKED *packed_data = malloc(sizeof(glUniform2iv_PACKED)); \
    packed_data->index = glUniform2iv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLint *)value; \
    packed_data; \
})
#define pack_glUniform3f(location, v0, v1, v2) ({ \
    glUniform3f_PACKED *packed_data = malloc(sizeof(glUniform3f_PACKED)); \
    packed_data->index = glUniform3f_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLfloat)v0; \
    packed_data->args.a3 = (GLfloat)v1; \
    packed_data->args.a4 = (GLfloat)v2; \
    packed_data; \
})
#define pack_glUniform3fv(location, count, value) ({ \
    glUniform3fv_PACKED *packed_data = malloc(sizeof(glUniform3fv_PACKED)); \
    packed_data->index = glUniform3fv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLfloat *)value; \
    packed_data; \
})
#define pack_glUniform3i(location, v0, v1, v2) ({ \
    glUniform3i_PACKED *packed_data = malloc(sizeof(glUniform3i_PACKED)); \
    packed_data->index = glUniform3i_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLint)v0; \
    packed_data->args.a3 = (GLint)v1; \
    packed_data->args.a4 = (GLint)v2; \
    packed_data; \
})
#define pack_glUniform3iv(location, count, value) ({ \
    glUniform3iv_PACKED *packed_data = malloc(sizeof(glUniform3iv_PACKED)); \
    packed_data->index = glUniform3iv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLint *)value; \
    packed_data; \
})
#define pack_glUniform4f(location, v0, v1, v2, v3) ({ \
    glUniform4f_PACKED *packed_data = malloc(sizeof(glUniform4f_PACKED)); \
    packed_data->index = glUniform4f_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLfloat)v0; \
    packed_data->args.a3 = (GLfloat)v1; \
    packed_data->args.a4 = (GLfloat)v2; \
    packed_data->args.a5 = (GLfloat)v3; \
    packed_data; \
})
#define pack_glUniform4fv(location, count, value) ({ \
    glUniform4fv_PACKED *packed_data = malloc(sizeof(glUniform4fv_PACKED)); \
    packed_data->index = glUniform4fv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLfloat *)value; \
    packed_data; \
})
#define pack_glUniform4i(location, v0, v1, v2, v3) ({ \
    glUniform4i_PACKED *packed_data = malloc(sizeof(glUniform4i_PACKED)); \
    packed_data->index = glUniform4i_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLint)v0; \
    packed_data->args.a3 = (GLint)v1; \
    packed_data->args.a4 = (GLint)v2; \
    packed_data->args.a5 = (GLint)v3; \
    packed_data; \
})
#define pack_glUniform4iv(location, count, value) ({ \
    glUniform4iv_PACKED *packed_data = malloc(sizeof(glUniform4iv_PACKED)); \
    packed_data->index = glUniform4iv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLint *)value; \
    packed_data; \
})
#define pack_glUniformMatrix2fv(location, count, transpose, value) ({ \
    glUniformMatrix2fv_PACKED *packed_data = malloc(sizeof(glUniformMatrix2fv_PACKED)); \
    packed_data->index = glUniformMatrix2fv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLboolean)transpose; \
    packed_data->args.a4 = (GLfloat *)value; \
    packed_data; \
})
#define pack_glUniformMatrix3fv(location, count, transpose, value) ({ \
    glUniformMatrix3fv_PACKED *packed_data = malloc(sizeof(glUniformMatrix3fv_PACKED)); \
    packed_data->index = glUniformMatrix3fv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLboolean)transpose; \
    packed_data->args.a4 = (GLfloat *)value; \
    packed_data; \
})
#define pack_glUniformMatrix4fv(location, count, transpose, value) ({ \
    glUniformMatrix4fv_PACKED *packed_data = malloc(sizeof(glUniformMatrix4fv_PACKED)); \
    packed_data->index = glUniformMatrix4fv_INDEX; \
    packed_data->args.a1 = (GLint)location; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLboolean)transpose; \
    packed_data->args.a4 = (GLfloat *)value; \
    packed_data; \
})
#define pack_glUseProgram(program) ({ \
    glUseProgram_PACKED *packed_data = malloc(sizeof(glUseProgram_PACKED)); \
    packed_data->index = glUseProgram_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data; \
})
#define pack_glValidateProgram(program) ({ \
    glValidateProgram_PACKED *packed_data = malloc(sizeof(glValidateProgram_PACKED)); \
    packed_data->index = glValidateProgram_INDEX; \
    packed_data->args.a1 = (GLuint)program; \
    packed_data; \
})
#define pack_glVertexAttrib1f(index, x) ({ \
    glVertexAttrib1f_PACKED *packed_data = malloc(sizeof(glVertexAttrib1f_PACKED)); \
    packed_data->index = glVertexAttrib1f_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLfloat)x; \
    packed_data; \
})
#define pack_glVertexAttrib1fv(index, v) ({ \
    glVertexAttrib1fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib1fv_PACKED)); \
    packed_data->index = glVertexAttrib1fv_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLfloat *)v; \
    packed_data; \
})
#define pack_glVertexAttrib2f(index, x, y) ({ \
    glVertexAttrib2f_PACKED *packed_data = malloc(sizeof(glVertexAttrib2f_PACKED)); \
    packed_data->index = glVertexAttrib2f_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLfloat)x; \
    packed_data->args.a3 = (GLfloat)y; \
    packed_data; \
})
#define pack_glVertexAttrib2fv(index, v) ({ \
    glVertexAttrib2fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib2fv_PACKED)); \
    packed_data->index = glVertexAttrib2fv_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLfloat *)v; \
    packed_data; \
})
#define pack_glVertexAttrib3f(index, x, y, z) ({ \
    glVertexAttrib3f_PACKED *packed_data = malloc(sizeof(glVertexAttrib3f_PACKED)); \
    packed_data->index = glVertexAttrib3f_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLfloat)x; \
    packed_data->args.a3 = (GLfloat)y; \
    packed_data->args.a4 = (GLfloat)z; \
    packed_data; \
})
#define pack_glVertexAttrib3fv(index, v) ({ \
    glVertexAttrib3fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib3fv_PACKED)); \
    packed_data->index = glVertexAttrib3fv_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLfloat *)v; \
    packed_data; \
})
#define pack_glVertexAttrib4f(index, x, y, z, w) ({ \
    glVertexAttrib4f_PACKED *packed_data = malloc(sizeof(glVertexAttrib4f_PACKED)); \
    packed_data->index = glVertexAttrib4f_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLfloat)x; \
    packed_data->args.a3 = (GLfloat)y; \
    packed_data->args.a4 = (GLfloat)z; \
    packed_data->args.a5 = (GLfloat)w; \
    packed_data; \
})
#define pack_glVertexAttrib4fv(index, v) ({ \
    glVertexAttrib4fv_PACKED *packed_data = malloc(sizeof(glVertexAttrib4fv_PACKED)); \
    packed_data->index = glVertexAttrib4fv_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLfloat *)v; \
    packed_data; \
})
#define pack_glVertexAttribPointer(index, size, type, normalized, stride, pointer) ({ \
    glVertexAttribPointer_PACKED *packed_data = malloc(sizeof(glVertexAttribPointer_PACKED)); \
    packed_data->index = glVertexAttribPointer_INDEX; \
    packed_data->args.a1 = (GLuint)index; \
    packed_data->args.a2 = (GLint)size; \
    packed_data->args.a3 = (GLenum)type; \
    packed_data->args.a4 = (GLboolean)normalized; \
    packed_data->args.a5 = (GLsizei)stride; \
    packed_data->args.a6 = (GLvoid *)pointer; \
    packed_data; \
})
#define pack_glViewport(x, y, width, height) ({ \
    glViewport_PACKED *packed_data = malloc(sizeof(glViewport_PACKED)); \
    packed_data->index = glViewport_INDEX; \
    packed_data->args.a1 = (GLint)x; \
    packed_data->args.a2 = (GLint)y; \
    packed_data->args.a3 = (GLsizei)width; \
    packed_data->args.a4 = (GLsizei)height; \
    packed_data; \
})
#endif
#endif

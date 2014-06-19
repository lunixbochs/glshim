#ifndef USE_ES2
#include "../gl.h"

#ifndef GLESWRAP_H
#define GLESWRAP_H

typedef struct {
    int format;
    void *func;
    int refs;
    void *args;
} packed_call_t;

typedef struct {
    int func;
    void *args;
} indexed_call_t;

enum FORMAT {
    FORMAT_void_GLenum,
    FORMAT_void_GLenum_GLclampf,
    FORMAT_void_GLenum_GLclampx,
    FORMAT_void_GLenum_GLuint,
    FORMAT_void_GLenum_GLenum,
    FORMAT_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum,
    FORMAT_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__,
    FORMAT_void_GLbitfield,
    FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf,
    FORMAT_void_GLclampx_GLclampx_GLclampx_GLclampx,
    FORMAT_void_GLclampf,
    FORMAT_void_GLclampx,
    FORMAT_void_GLint,
    FORMAT_void_GLenum_const_GLfloat___GENPT__,
    FORMAT_void_GLenum_const_GLfixed___GENPT__,
    FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLubyte_GLubyte_GLubyte_GLubyte,
    FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed,
    FORMAT_void_GLboolean_GLboolean_GLboolean_GLboolean,
    FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei,
    FORMAT_void_GLsizei_const_GLuint___GENPT__,
    FORMAT_void_GLboolean,
    FORMAT_void_GLclampf_GLclampf,
    FORMAT_void_GLclampx_GLclampx,
    FORMAT_void_GLenum_GLint_GLsizei,
    FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__,
    FORMAT_void,
    FORMAT_void_GLenum_GLfloat,
    FORMAT_void_GLenum_GLfixed,
    FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed,
    FORMAT_void_GLsizei_GLuint___GENPT__,
    FORMAT_void_GLenum_GLboolean___GENPT__,
    FORMAT_void_GLenum_GLenum_GLint___GENPT__,
    FORMAT_void_GLenum_GLfloat___GENPT__,
    FORMAT_void_GLenum_GLfixed___GENPT__,
    FORMAT_GLenum,
    FORMAT_void_GLenum_GLint___GENPT__,
    FORMAT_void_GLenum_GLenum_GLfloat___GENPT__,
    FORMAT_void_GLenum_GLenum_GLfixed___GENPT__,
    FORMAT_void_GLenum_GLvoid___GENPT____GENPT__,
    FORMAT_const_GLubyte___GENPT___GLenum,
    FORMAT_GLboolean_GLuint,
    FORMAT_GLboolean_GLenum,
    FORMAT_void_GLenum_GLenum_GLfloat,
    FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__,
    FORMAT_void_GLenum_GLenum_GLfixed,
    FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__,
    FORMAT_void_GLfloat,
    FORMAT_void_GLfixed,
    FORMAT_void_const_GLfloat___GENPT__,
    FORMAT_void_const_GLfixed___GENPT__,
    FORMAT_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed,
    FORMAT_void_GLfloat_GLfloat_GLfloat,
    FORMAT_void_GLfixed_GLfixed_GLfixed,
    FORMAT_void_GLenum_GLsizei_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint,
    FORMAT_void_GLfloat_GLfloat,
    FORMAT_void_GLfixed_GLfixed,
    FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__,
    FORMAT_void_GLclampf_GLboolean,
    FORMAT_void_GLclampx_GLboolean,
    FORMAT_void_GLint_GLint_GLsizei_GLsizei,
    FORMAT_void_GLenum_GLint_GLuint,
    FORMAT_void_GLuint,
    FORMAT_void_GLenum_GLenum_GLenum,
    FORMAT_void_GLenum_GLenum_GLint,
    FORMAT_void_GLenum_GLenum_const_GLint___GENPT__,
    FORMAT_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__,
    FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__,
    FORMAT_int_Display___GENPT___int,
    FORMAT_void_uint32_t_uint32_t,
    FORMAT_void_uint32_t,
    FORMAT_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__,
    FORMAT_void_Display___GENPT___GLXContext_GLXContext_unsigned_long,
    FORMAT_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool,
    FORMAT_GLXContext_Display___GENPT___void___GENPT___GLXContext_Bool_const_int___GENPT__,
    FORMAT_void_uint32_t_uint32_t_uint32_t_uint32_t,
    FORMAT_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap,
    FORMAT_void_uint32_t_uint32_t_uint32_t,
    FORMAT_void_Display___GENPT___uint32_t_uint32_t_uint32_t_uint32_t_uint32_t,
    FORMAT_void_Display___GENPT___GLXContext,
    FORMAT_void_Display___GENPT___GLXPixmap,
    FORMAT_void_Display___GENPT___uint32_t,
    FORMAT_const_char___GENPT___Display___GENPT___int,
    FORMAT_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__,
    FORMAT_GLXContext,
    FORMAT_GLXDrawable,
    FORMAT_int_Display___GENPT___int_int_int_const_void___GENPT__,
    FORMAT_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX_int___GENPT__,
    FORMAT_Bool_Display___GENPT___GLXContext,
    FORMAT_Bool_Display___GENPT___GLXDrawable_GLXContext,
    FORMAT_Bool_Display___GENPT___int___GENPT___int___GENPT__,
    FORMAT_int_Display___GENPT___int_int_int_const_void___GENPT___void___GENPT__,
    FORMAT_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__,
    FORMAT_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__,
    FORMAT_const_char___GENPT___Display___GENPT___int_int,
    FORMAT_Bool_Display___GENPT___GLXDrawable,
    FORMAT_void_Display___GENPT___GLXDrawable,
    FORMAT_int_unsigned_int,
    FORMAT_void_unsigned_int,
    FORMAT_void_Font_int_int_int,
    FORMAT_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer,
    FORMAT_int_Display___GENPT___int_int_Window,
    FORMAT_Bool_Display___GENPT___GLuint_GLuint,
    FORMAT_void_Display___GENPT___GLXDrawable_int,
    FORMAT_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__,
    FORMAT_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV,
    FORMAT_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__,
    FORMAT_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int,
    FORMAT_int_Display___GENPT___int_int_int_int_int_int,
    FORMAT_int_Display___GENPT___int_int_GLenum,
    FORMAT_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__,
    FORMAT_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__,
    FORMAT_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei,
    FORMAT_void_Display___GENPT___GLXDrawable_int_int_int_int,
    FORMAT_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__,
    FORMAT_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool,
    FORMAT_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__,
    FORMAT_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap,
    FORMAT_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap,
    FORMAT_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode,
    FORMAT_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool,
    FORMAT_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__,
    FORMAT_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__,
    FORMAT_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__,
    FORMAT_void_Display___GENPT___Window_float,
    FORMAT_void_Display___GENPT___GLXPbufferSGIX,
    FORMAT_void_Display___GENPT___GLXVideoSourceSGIX,
    FORMAT_void_Display___GENPT___GLXPbuffer,
    FORMAT_void_Display___GENPT___GLXWindow,
    FORMAT_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__,
    FORMAT_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__,
    FORMAT_unsigned_int_const_void___GENPT__,
    FORMAT_GLXContextID_const_GLXContext,
    FORMAT_Display___GENPT__,
    FORMAT_int_Display___GENPT___GLXFBConfig_int_int___GENPT__,
    FORMAT_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__,
    FORMAT_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__,
    FORMAT_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__,
    FORMAT_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__,
    FORMAT___GLXextFuncPtr_const_GLubyte___GENPT__,
    FORMAT_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__,
    FORMAT_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__,
    FORMAT_Status_Display___GENPT___Window_Window_long___GENPT__,
    FORMAT_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__,
    FORMAT_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__,
    FORMAT_int_unsigned_int___GENPT__,
    FORMAT_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig,
    FORMAT_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX,
    FORMAT_int_Display___GENPT___int_int_int_void___GENPT__,
    FORMAT_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__,
    FORMAT_GLXContext_Display___GENPT___GLXContextID,
    FORMAT_Bool_Display___GENPT___GLXDrawable_GLuint,
    FORMAT_void_Display___GENPT___GLXDrawable_GLXDrawable,
    FORMAT_void_Display___GENPT___GLXVideoCaptureDeviceNV,
    FORMAT_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext,
    FORMAT_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__,
    FORMAT_int_Display___GENPT___GLXContext_int_int___GENPT__,
    FORMAT_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__,
    FORMAT_Bool_Display___GENPT___int_GLuint___GENPT__,
    FORMAT_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__,
    FORMAT_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__,
    FORMAT_Bool_Display___GENPT___int_int___GENPT__,
    FORMAT_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__,
    FORMAT_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__,
    FORMAT_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__,
    FORMAT_int_Display___GENPT___int_GLXVideoDeviceNV,
    FORMAT_int_Display___GENPT___GLXPbuffer,
    FORMAT_Bool_Display___GENPT___int,
    FORMAT_void_Display___GENPT___GLXDrawable_unsigned_long,
    FORMAT_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean,
    FORMAT_Bool_int,
    FORMAT_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t,
    FORMAT_int_int,
    FORMAT_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__,
    FORMAT_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__,
    FORMAT_int_int_int_unsigned_int___GENPT__,
};

typedef void (*FUNC_void_GLenum)(GLenum texture);
typedef struct {
    GLenum a1;
} ARGS_void_GLenum;
typedef struct {
    int format;
    FUNC_void_GLenum func;
    int refs;
    ARGS_void_GLenum args;
} PACKED_void_GLenum;
typedef struct {
    int func;
    ARGS_void_GLenum args;
} INDEXED_void_GLenum;
typedef void (*FUNC_void_GLenum_GLclampf)(GLenum func, GLclampf ref);
typedef struct {
    GLenum a1;
    GLclampf a2;
} ARGS_void_GLenum_GLclampf;
typedef struct {
    int format;
    FUNC_void_GLenum_GLclampf func;
    int refs;
    ARGS_void_GLenum_GLclampf args;
} PACKED_void_GLenum_GLclampf;
typedef struct {
    int func;
    ARGS_void_GLenum_GLclampf args;
} INDEXED_void_GLenum_GLclampf;
typedef void (*FUNC_void_GLenum_GLclampx)(GLenum func, GLclampx ref);
typedef struct {
    GLenum a1;
    GLclampx a2;
} ARGS_void_GLenum_GLclampx;
typedef struct {
    int format;
    FUNC_void_GLenum_GLclampx func;
    int refs;
    ARGS_void_GLenum_GLclampx args;
} PACKED_void_GLenum_GLclampx;
typedef struct {
    int func;
    ARGS_void_GLenum_GLclampx args;
} INDEXED_void_GLenum_GLclampx;
typedef void (*FUNC_void_GLenum_GLuint)(GLenum target, GLuint buffer);
typedef struct {
    GLenum a1;
    GLuint a2;
} ARGS_void_GLenum_GLuint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLuint func;
    int refs;
    ARGS_void_GLenum_GLuint args;
} PACKED_void_GLenum_GLuint;
typedef struct {
    int func;
    ARGS_void_GLenum_GLuint args;
} INDEXED_void_GLenum_GLuint;
typedef void (*FUNC_void_GLenum_GLenum)(GLenum sfactor, GLenum dfactor);
typedef struct {
    GLenum a1;
    GLenum a2;
} ARGS_void_GLenum_GLenum;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum func;
    int refs;
    ARGS_void_GLenum_GLenum args;
} PACKED_void_GLenum_GLenum;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum args;
} INDEXED_void_GLenum_GLenum;
typedef void (*FUNC_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum)(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage);
typedef struct {
    GLenum a1;
    GLsizeiptr a2;
    GLvoid * a3;
    GLenum a4;
} ARGS_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum;
typedef struct {
    int format;
    FUNC_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum func;
    int refs;
    ARGS_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum args;
} PACKED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum;
typedef struct {
    int func;
    ARGS_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum args;
} INDEXED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum;
typedef void (*FUNC_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data);
typedef struct {
    GLenum a1;
    GLintptr a2;
    GLsizeiptr a3;
    GLvoid * a4;
} ARGS_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ args;
} INDEXED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLbitfield)(GLbitfield mask);
typedef struct {
    GLbitfield a1;
} ARGS_void_GLbitfield;
typedef struct {
    int format;
    FUNC_void_GLbitfield func;
    int refs;
    ARGS_void_GLbitfield args;
} PACKED_void_GLbitfield;
typedef struct {
    int func;
    ARGS_void_GLbitfield args;
} INDEXED_void_GLbitfield;
typedef void (*FUNC_void_GLclampf_GLclampf_GLclampf_GLclampf)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef struct {
    GLclampf a1;
    GLclampf a2;
    GLclampf a3;
    GLclampf a4;
} ARGS_void_GLclampf_GLclampf_GLclampf_GLclampf;
typedef struct {
    int format;
    FUNC_void_GLclampf_GLclampf_GLclampf_GLclampf func;
    int refs;
    ARGS_void_GLclampf_GLclampf_GLclampf_GLclampf args;
} PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf;
typedef struct {
    int func;
    ARGS_void_GLclampf_GLclampf_GLclampf_GLclampf args;
} INDEXED_void_GLclampf_GLclampf_GLclampf_GLclampf;
typedef void (*FUNC_void_GLclampx_GLclampx_GLclampx_GLclampx)(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
typedef struct {
    GLclampx a1;
    GLclampx a2;
    GLclampx a3;
    GLclampx a4;
} ARGS_void_GLclampx_GLclampx_GLclampx_GLclampx;
typedef struct {
    int format;
    FUNC_void_GLclampx_GLclampx_GLclampx_GLclampx func;
    int refs;
    ARGS_void_GLclampx_GLclampx_GLclampx_GLclampx args;
} PACKED_void_GLclampx_GLclampx_GLclampx_GLclampx;
typedef struct {
    int func;
    ARGS_void_GLclampx_GLclampx_GLclampx_GLclampx args;
} INDEXED_void_GLclampx_GLclampx_GLclampx_GLclampx;
typedef void (*FUNC_void_GLclampf)(GLclampf depth);
typedef struct {
    GLclampf a1;
} ARGS_void_GLclampf;
typedef struct {
    int format;
    FUNC_void_GLclampf func;
    int refs;
    ARGS_void_GLclampf args;
} PACKED_void_GLclampf;
typedef struct {
    int func;
    ARGS_void_GLclampf args;
} INDEXED_void_GLclampf;
typedef void (*FUNC_void_GLclampx)(GLclampx depth);
typedef struct {
    GLclampx a1;
} ARGS_void_GLclampx;
typedef struct {
    int format;
    FUNC_void_GLclampx func;
    int refs;
    ARGS_void_GLclampx args;
} PACKED_void_GLclampx;
typedef struct {
    int func;
    ARGS_void_GLclampx args;
} INDEXED_void_GLclampx;
typedef void (*FUNC_void_GLint)(GLint s);
typedef struct {
    GLint a1;
} ARGS_void_GLint;
typedef struct {
    int format;
    FUNC_void_GLint func;
    int refs;
    ARGS_void_GLint args;
} PACKED_void_GLint;
typedef struct {
    int func;
    ARGS_void_GLint args;
} INDEXED_void_GLint;
typedef void (*FUNC_void_GLenum_const_GLfloat___GENPT__)(GLenum plane, const GLfloat * equation);
typedef struct {
    GLenum a1;
    GLfloat * a2;
} ARGS_void_GLenum_const_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_const_GLfloat___GENPT__ func;
    int refs;
    ARGS_void_GLenum_const_GLfloat___GENPT__ args;
} PACKED_void_GLenum_const_GLfloat___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_const_GLfloat___GENPT__ args;
} INDEXED_void_GLenum_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_const_GLfixed___GENPT__)(GLenum plane, const GLfixed * equation);
typedef struct {
    GLenum a1;
    GLfixed * a2;
} ARGS_void_GLenum_const_GLfixed___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_const_GLfixed___GENPT__ func;
    int refs;
    ARGS_void_GLenum_const_GLfixed___GENPT__ args;
} PACKED_void_GLenum_const_GLfixed___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_const_GLfixed___GENPT__ args;
} INDEXED_void_GLenum_const_GLfixed___GENPT__;
typedef void (*FUNC_void_GLfloat_GLfloat_GLfloat_GLfloat)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef struct {
    GLfloat a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
} ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat_GLfloat_GLfloat_GLfloat func;
    int refs;
    ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int func;
    ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat args;
} INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLubyte_GLubyte_GLubyte_GLubyte)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
typedef struct {
    GLubyte a1;
    GLubyte a2;
    GLubyte a3;
    GLubyte a4;
} ARGS_void_GLubyte_GLubyte_GLubyte_GLubyte;
typedef struct {
    int format;
    FUNC_void_GLubyte_GLubyte_GLubyte_GLubyte func;
    int refs;
    ARGS_void_GLubyte_GLubyte_GLubyte_GLubyte args;
} PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte;
typedef struct {
    int func;
    ARGS_void_GLubyte_GLubyte_GLubyte_GLubyte args;
} INDEXED_void_GLubyte_GLubyte_GLubyte_GLubyte;
typedef void (*FUNC_void_GLfixed_GLfixed_GLfixed_GLfixed)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
typedef struct {
    GLfixed a1;
    GLfixed a2;
    GLfixed a3;
    GLfixed a4;
} ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLfixed_GLfixed_GLfixed_GLfixed func;
    int refs;
    ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed args;
} PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed;
typedef struct {
    int func;
    ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed args;
} INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed;
typedef void (*FUNC_void_GLboolean_GLboolean_GLboolean_GLboolean)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef struct {
    GLboolean a1;
    GLboolean a2;
    GLboolean a3;
    GLboolean a4;
} ARGS_void_GLboolean_GLboolean_GLboolean_GLboolean;
typedef struct {
    int format;
    FUNC_void_GLboolean_GLboolean_GLboolean_GLboolean func;
    int refs;
    ARGS_void_GLboolean_GLboolean_GLboolean_GLboolean args;
} PACKED_void_GLboolean_GLboolean_GLboolean_GLboolean;
typedef struct {
    int func;
    ARGS_void_GLboolean_GLboolean_GLboolean_GLboolean args;
} INDEXED_void_GLboolean_GLboolean_GLboolean_GLboolean;
typedef void (*FUNC_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__)(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
typedef struct {
    GLint a1;
    GLenum a2;
    GLsizei a3;
    GLvoid * a4;
} ARGS_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ func;
    int refs;
    ARGS_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ args;
} INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__;
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
    int format;
    FUNC_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args;
} INDEXED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__;
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
    int format;
    FUNC_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args;
} INDEXED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__;
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
    int format;
    FUNC_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint func;
    int refs;
    ARGS_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint args;
} PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint;
typedef struct {
    int func;
    ARGS_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint args;
} INDEXED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint;
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
    int format;
    FUNC_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei func;
    int refs;
    ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args;
} PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei;
typedef struct {
    int func;
    ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args;
} INDEXED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei;
typedef void (*FUNC_void_GLsizei_const_GLuint___GENPT__)(GLsizei n, const GLuint * buffers);
typedef struct {
    GLsizei a1;
    GLuint * a2;
} ARGS_void_GLsizei_const_GLuint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLsizei_const_GLuint___GENPT__ func;
    int refs;
    ARGS_void_GLsizei_const_GLuint___GENPT__ args;
} PACKED_void_GLsizei_const_GLuint___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLsizei_const_GLuint___GENPT__ args;
} INDEXED_void_GLsizei_const_GLuint___GENPT__;
typedef void (*FUNC_void_GLboolean)(GLboolean flag);
typedef struct {
    GLboolean a1;
} ARGS_void_GLboolean;
typedef struct {
    int format;
    FUNC_void_GLboolean func;
    int refs;
    ARGS_void_GLboolean args;
} PACKED_void_GLboolean;
typedef struct {
    int func;
    ARGS_void_GLboolean args;
} INDEXED_void_GLboolean;
typedef void (*FUNC_void_GLclampf_GLclampf)(GLclampf near, GLclampf far);
typedef struct {
    GLclampf a1;
    GLclampf a2;
} ARGS_void_GLclampf_GLclampf;
typedef struct {
    int format;
    FUNC_void_GLclampf_GLclampf func;
    int refs;
    ARGS_void_GLclampf_GLclampf args;
} PACKED_void_GLclampf_GLclampf;
typedef struct {
    int func;
    ARGS_void_GLclampf_GLclampf args;
} INDEXED_void_GLclampf_GLclampf;
typedef void (*FUNC_void_GLclampx_GLclampx)(GLclampx near, GLclampx far);
typedef struct {
    GLclampx a1;
    GLclampx a2;
} ARGS_void_GLclampx_GLclampx;
typedef struct {
    int format;
    FUNC_void_GLclampx_GLclampx func;
    int refs;
    ARGS_void_GLclampx_GLclampx args;
} PACKED_void_GLclampx_GLclampx;
typedef struct {
    int func;
    ARGS_void_GLclampx_GLclampx args;
} INDEXED_void_GLclampx_GLclampx;
typedef void (*FUNC_void_GLenum_GLint_GLsizei)(GLenum mode, GLint first, GLsizei count);
typedef struct {
    GLenum a1;
    GLint a2;
    GLsizei a3;
} ARGS_void_GLenum_GLint_GLsizei;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint_GLsizei func;
    int refs;
    ARGS_void_GLenum_GLint_GLsizei args;
} PACKED_void_GLenum_GLint_GLsizei;
typedef struct {
    int func;
    ARGS_void_GLenum_GLint_GLsizei args;
} INDEXED_void_GLenum_GLint_GLsizei;
typedef void (*FUNC_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__)(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
typedef struct {
    GLenum a1;
    GLsizei a2;
    GLenum a3;
    GLvoid * a4;
} ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ args;
} INDEXED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__;
typedef void (*FUNC_void)();
typedef struct {
    int format;
    FUNC_void func;
    int refs;
} PACKED_void;
typedef struct {
    int func;
} INDEXED_void;
typedef void (*FUNC_void_GLenum_GLfloat)(GLenum pname, GLfloat param);
typedef struct {
    GLenum a1;
    GLfloat a2;
} ARGS_void_GLenum_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfloat func;
    int refs;
    ARGS_void_GLenum_GLfloat args;
} PACKED_void_GLenum_GLfloat;
typedef struct {
    int func;
    ARGS_void_GLenum_GLfloat args;
} INDEXED_void_GLenum_GLfloat;
typedef void (*FUNC_void_GLenum_GLfixed)(GLenum pname, GLfixed param);
typedef struct {
    GLenum a1;
    GLfixed a2;
} ARGS_void_GLenum_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfixed func;
    int refs;
    ARGS_void_GLenum_GLfixed args;
} PACKED_void_GLenum_GLfixed;
typedef struct {
    int func;
    ARGS_void_GLenum_GLfixed args;
} INDEXED_void_GLenum_GLfixed;
typedef void (*FUNC_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat)(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far);
typedef struct {
    GLfloat a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
    GLfloat a5;
    GLfloat a6;
} ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat func;
    int refs;
    ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int func;
    ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args;
} INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed)(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far);
typedef struct {
    GLfixed a1;
    GLfixed a2;
    GLfixed a3;
    GLfixed a4;
    GLfixed a5;
    GLfixed a6;
} ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed func;
    int refs;
    ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed args;
} PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed;
typedef struct {
    int func;
    ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed args;
} INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed;
typedef void (*FUNC_void_GLsizei_GLuint___GENPT__)(GLsizei n, GLuint * buffers);
typedef struct {
    GLsizei a1;
    GLuint * a2;
} ARGS_void_GLsizei_GLuint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLsizei_GLuint___GENPT__ func;
    int refs;
    ARGS_void_GLsizei_GLuint___GENPT__ args;
} PACKED_void_GLsizei_GLuint___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLsizei_GLuint___GENPT__ args;
} INDEXED_void_GLsizei_GLuint___GENPT__;
typedef void (*FUNC_void_GLenum_GLboolean___GENPT__)(GLenum pname, GLboolean * params);
typedef struct {
    GLenum a1;
    GLboolean * a2;
} ARGS_void_GLenum_GLboolean___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLboolean___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLboolean___GENPT__ args;
} PACKED_void_GLenum_GLboolean___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLboolean___GENPT__ args;
} INDEXED_void_GLenum_GLboolean___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLint___GENPT__)(GLenum target, GLenum pname, GLint * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint * a3;
} ARGS_void_GLenum_GLenum_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLint___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLenum_GLint___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLint___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum_GLint___GENPT__ args;
} INDEXED_void_GLenum_GLenum_GLint___GENPT__;
typedef void (*FUNC_void_GLenum_GLfloat___GENPT__)(GLenum plane, GLfloat * equation);
typedef struct {
    GLenum a1;
    GLfloat * a2;
} ARGS_void_GLenum_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfloat___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLfloat___GENPT__ args;
} PACKED_void_GLenum_GLfloat___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLfloat___GENPT__ args;
} INDEXED_void_GLenum_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_GLfixed___GENPT__)(GLenum plane, GLfixed * equation);
typedef struct {
    GLenum a1;
    GLfixed * a2;
} ARGS_void_GLenum_GLfixed___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfixed___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLfixed___GENPT__ args;
} PACKED_void_GLenum_GLfixed___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLfixed___GENPT__ args;
} INDEXED_void_GLenum_GLfixed___GENPT__;
typedef GLenum (*FUNC_GLenum)();
typedef struct {
    int format;
    FUNC_GLenum func;
    int refs;
} PACKED_GLenum;
typedef struct {
    int func;
} INDEXED_GLenum;
typedef void (*FUNC_void_GLenum_GLint___GENPT__)(GLenum pname, GLint * params);
typedef struct {
    GLenum a1;
    GLint * a2;
} ARGS_void_GLenum_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLint___GENPT__ args;
} PACKED_void_GLenum_GLint___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLint___GENPT__ args;
} INDEXED_void_GLenum_GLint___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLfloat___GENPT__)(GLenum light, GLenum pname, GLfloat * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfloat * a3;
} ARGS_void_GLenum_GLenum_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLfloat___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLenum_GLfloat___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLfloat___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum_GLfloat___GENPT__ args;
} INDEXED_void_GLenum_GLenum_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLfixed___GENPT__)(GLenum light, GLenum pname, GLfixed * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfixed * a3;
} ARGS_void_GLenum_GLenum_GLfixed___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLfixed___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLenum_GLfixed___GENPT__ args;
} PACKED_void_GLenum_GLenum_GLfixed___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum_GLfixed___GENPT__ args;
} INDEXED_void_GLenum_GLenum_GLfixed___GENPT__;
typedef void (*FUNC_void_GLenum_GLvoid___GENPT____GENPT__)(GLenum pname, GLvoid ** params);
typedef struct {
    GLenum a1;
    GLvoid ** a2;
} ARGS_void_GLenum_GLvoid___GENPT____GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLvoid___GENPT____GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLvoid___GENPT____GENPT__ args;
} PACKED_void_GLenum_GLvoid___GENPT____GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLvoid___GENPT____GENPT__ args;
} INDEXED_void_GLenum_GLvoid___GENPT____GENPT__;
typedef const GLubyte * (*FUNC_const_GLubyte___GENPT___GLenum)(GLenum name);
typedef struct {
    GLenum a1;
} ARGS_const_GLubyte___GENPT___GLenum;
typedef struct {
    int format;
    FUNC_const_GLubyte___GENPT___GLenum func;
    int refs;
    ARGS_const_GLubyte___GENPT___GLenum args;
} PACKED_const_GLubyte___GENPT___GLenum;
typedef struct {
    int func;
    ARGS_const_GLubyte___GENPT___GLenum args;
} INDEXED_const_GLubyte___GENPT___GLenum;
typedef GLboolean (*FUNC_GLboolean_GLuint)(GLuint buffer);
typedef struct {
    GLuint a1;
} ARGS_GLboolean_GLuint;
typedef struct {
    int format;
    FUNC_GLboolean_GLuint func;
    int refs;
    ARGS_GLboolean_GLuint args;
} PACKED_GLboolean_GLuint;
typedef struct {
    int func;
    ARGS_GLboolean_GLuint args;
} INDEXED_GLboolean_GLuint;
typedef GLboolean (*FUNC_GLboolean_GLenum)(GLenum cap);
typedef struct {
    GLenum a1;
} ARGS_GLboolean_GLenum;
typedef struct {
    int format;
    FUNC_GLboolean_GLenum func;
    int refs;
    ARGS_GLboolean_GLenum args;
} PACKED_GLboolean_GLenum;
typedef struct {
    int func;
    ARGS_GLboolean_GLenum args;
} INDEXED_GLboolean_GLenum;
typedef void (*FUNC_void_GLenum_GLenum_GLfloat)(GLenum light, GLenum pname, GLfloat param);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfloat a3;
} ARGS_void_GLenum_GLenum_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLfloat func;
    int refs;
    ARGS_void_GLenum_GLenum_GLfloat args;
} PACKED_void_GLenum_GLenum_GLfloat;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum_GLfloat args;
} INDEXED_void_GLenum_GLenum_GLfloat;
typedef void (*FUNC_void_GLenum_GLenum_const_GLfloat___GENPT__)(GLenum light, GLenum pname, const GLfloat * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfloat * a3;
} ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_const_GLfloat___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__ args;
} PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__ args;
} INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__;
typedef void (*FUNC_void_GLenum_GLenum_GLfixed)(GLenum light, GLenum pname, GLfixed param);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfixed a3;
} ARGS_void_GLenum_GLenum_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLfixed func;
    int refs;
    ARGS_void_GLenum_GLenum_GLfixed args;
} PACKED_void_GLenum_GLenum_GLfixed;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum_GLfixed args;
} INDEXED_void_GLenum_GLenum_GLfixed;
typedef void (*FUNC_void_GLenum_GLenum_const_GLfixed___GENPT__)(GLenum light, GLenum pname, const GLfixed * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLfixed * a3;
} ARGS_void_GLenum_GLenum_const_GLfixed___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_const_GLfixed___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLenum_const_GLfixed___GENPT__ args;
} PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum_const_GLfixed___GENPT__ args;
} INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__;
typedef void (*FUNC_void_GLfloat)(GLfloat width);
typedef struct {
    GLfloat a1;
} ARGS_void_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat func;
    int refs;
    ARGS_void_GLfloat args;
} PACKED_void_GLfloat;
typedef struct {
    int func;
    ARGS_void_GLfloat args;
} INDEXED_void_GLfloat;
typedef void (*FUNC_void_GLfixed)(GLfixed width);
typedef struct {
    GLfixed a1;
} ARGS_void_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLfixed func;
    int refs;
    ARGS_void_GLfixed args;
} PACKED_void_GLfixed;
typedef struct {
    int func;
    ARGS_void_GLfixed args;
} INDEXED_void_GLfixed;
typedef void (*FUNC_void_const_GLfloat___GENPT__)(const GLfloat * m);
typedef struct {
    GLfloat * a1;
} ARGS_void_const_GLfloat___GENPT__;
typedef struct {
    int format;
    FUNC_void_const_GLfloat___GENPT__ func;
    int refs;
    ARGS_void_const_GLfloat___GENPT__ args;
} PACKED_void_const_GLfloat___GENPT__;
typedef struct {
    int func;
    ARGS_void_const_GLfloat___GENPT__ args;
} INDEXED_void_const_GLfloat___GENPT__;
typedef void (*FUNC_void_const_GLfixed___GENPT__)(const GLfixed * m);
typedef struct {
    GLfixed * a1;
} ARGS_void_const_GLfixed___GENPT__;
typedef struct {
    int format;
    FUNC_void_const_GLfixed___GENPT__ func;
    int refs;
    ARGS_void_const_GLfixed___GENPT__ args;
} PACKED_void_const_GLfixed___GENPT__;
typedef struct {
    int func;
    ARGS_void_const_GLfixed___GENPT__ args;
} INDEXED_void_const_GLfixed___GENPT__;
typedef void (*FUNC_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef struct {
    GLenum a1;
    GLfloat a2;
    GLfloat a3;
    GLfloat a4;
    GLfloat a5;
} ARGS_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat func;
    int refs;
    ARGS_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat;
typedef struct {
    int func;
    ARGS_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat args;
} INDEXED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed)(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
typedef struct {
    GLenum a1;
    GLfixed a2;
    GLfixed a3;
    GLfixed a4;
    GLfixed a5;
} ARGS_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed func;
    int refs;
    ARGS_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed args;
} PACKED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed;
typedef struct {
    int func;
    ARGS_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed args;
} INDEXED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed;
typedef void (*FUNC_void_GLfloat_GLfloat_GLfloat)(GLfloat nx, GLfloat ny, GLfloat nz);
typedef struct {
    GLfloat a1;
    GLfloat a2;
    GLfloat a3;
} ARGS_void_GLfloat_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat_GLfloat_GLfloat func;
    int refs;
    ARGS_void_GLfloat_GLfloat_GLfloat args;
} PACKED_void_GLfloat_GLfloat_GLfloat;
typedef struct {
    int func;
    ARGS_void_GLfloat_GLfloat_GLfloat args;
} INDEXED_void_GLfloat_GLfloat_GLfloat;
typedef void (*FUNC_void_GLfixed_GLfixed_GLfixed)(GLfixed nx, GLfixed ny, GLfixed nz);
typedef struct {
    GLfixed a1;
    GLfixed a2;
    GLfixed a3;
} ARGS_void_GLfixed_GLfixed_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLfixed_GLfixed_GLfixed func;
    int refs;
    ARGS_void_GLfixed_GLfixed_GLfixed args;
} PACKED_void_GLfixed_GLfixed_GLfixed;
typedef struct {
    int func;
    ARGS_void_GLfixed_GLfixed_GLfixed args;
} INDEXED_void_GLfixed_GLfixed_GLfixed;
typedef void (*FUNC_void_GLenum_GLsizei_const_GLvoid___GENPT__)(GLenum type, GLsizei stride, const GLvoid * pointer);
typedef struct {
    GLenum a1;
    GLsizei a2;
    GLvoid * a3;
} ARGS_void_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLsizei_const_GLvoid___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLsizei_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLsizei_const_GLvoid___GENPT__ args;
} INDEXED_void_GLenum_GLsizei_const_GLvoid___GENPT__;
typedef void (*FUNC_void_GLenum_GLint)(GLenum pname, GLint param);
typedef struct {
    GLenum a1;
    GLint a2;
} ARGS_void_GLenum_GLint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint func;
    int refs;
    ARGS_void_GLenum_GLint args;
} PACKED_void_GLenum_GLint;
typedef struct {
    int func;
    ARGS_void_GLenum_GLint args;
} INDEXED_void_GLenum_GLint;
typedef void (*FUNC_void_GLfloat_GLfloat)(GLfloat factor, GLfloat units);
typedef struct {
    GLfloat a1;
    GLfloat a2;
} ARGS_void_GLfloat_GLfloat;
typedef struct {
    int format;
    FUNC_void_GLfloat_GLfloat func;
    int refs;
    ARGS_void_GLfloat_GLfloat args;
} PACKED_void_GLfloat_GLfloat;
typedef struct {
    int func;
    ARGS_void_GLfloat_GLfloat args;
} INDEXED_void_GLfloat_GLfloat;
typedef void (*FUNC_void_GLfixed_GLfixed)(GLfixed factor, GLfixed units);
typedef struct {
    GLfixed a1;
    GLfixed a2;
} ARGS_void_GLfixed_GLfixed;
typedef struct {
    int format;
    FUNC_void_GLfixed_GLfixed func;
    int refs;
    ARGS_void_GLfixed_GLfixed args;
} PACKED_void_GLfixed_GLfixed;
typedef struct {
    int func;
    ARGS_void_GLfixed_GLfixed args;
} INDEXED_void_GLfixed_GLfixed;
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
    int format;
    FUNC_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ func;
    int refs;
    ARGS_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ args;
} PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ args;
} INDEXED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__;
typedef void (*FUNC_void_GLclampf_GLboolean)(GLclampf value, GLboolean invert);
typedef struct {
    GLclampf a1;
    GLboolean a2;
} ARGS_void_GLclampf_GLboolean;
typedef struct {
    int format;
    FUNC_void_GLclampf_GLboolean func;
    int refs;
    ARGS_void_GLclampf_GLboolean args;
} PACKED_void_GLclampf_GLboolean;
typedef struct {
    int func;
    ARGS_void_GLclampf_GLboolean args;
} INDEXED_void_GLclampf_GLboolean;
typedef void (*FUNC_void_GLclampx_GLboolean)(GLclampx value, GLboolean invert);
typedef struct {
    GLclampx a1;
    GLboolean a2;
} ARGS_void_GLclampx_GLboolean;
typedef struct {
    int format;
    FUNC_void_GLclampx_GLboolean func;
    int refs;
    ARGS_void_GLclampx_GLboolean args;
} PACKED_void_GLclampx_GLboolean;
typedef struct {
    int func;
    ARGS_void_GLclampx_GLboolean args;
} INDEXED_void_GLclampx_GLboolean;
typedef void (*FUNC_void_GLint_GLint_GLsizei_GLsizei)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef struct {
    GLint a1;
    GLint a2;
    GLsizei a3;
    GLsizei a4;
} ARGS_void_GLint_GLint_GLsizei_GLsizei;
typedef struct {
    int format;
    FUNC_void_GLint_GLint_GLsizei_GLsizei func;
    int refs;
    ARGS_void_GLint_GLint_GLsizei_GLsizei args;
} PACKED_void_GLint_GLint_GLsizei_GLsizei;
typedef struct {
    int func;
    ARGS_void_GLint_GLint_GLsizei_GLsizei args;
} INDEXED_void_GLint_GLint_GLsizei_GLsizei;
typedef void (*FUNC_void_GLenum_GLint_GLuint)(GLenum func, GLint ref, GLuint mask);
typedef struct {
    GLenum a1;
    GLint a2;
    GLuint a3;
} ARGS_void_GLenum_GLint_GLuint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLint_GLuint func;
    int refs;
    ARGS_void_GLenum_GLint_GLuint args;
} PACKED_void_GLenum_GLint_GLuint;
typedef struct {
    int func;
    ARGS_void_GLenum_GLint_GLuint args;
} INDEXED_void_GLenum_GLint_GLuint;
typedef void (*FUNC_void_GLuint)(GLuint mask);
typedef struct {
    GLuint a1;
} ARGS_void_GLuint;
typedef struct {
    int format;
    FUNC_void_GLuint func;
    int refs;
    ARGS_void_GLuint args;
} PACKED_void_GLuint;
typedef struct {
    int func;
    ARGS_void_GLuint args;
} INDEXED_void_GLuint;
typedef void (*FUNC_void_GLenum_GLenum_GLenum)(GLenum fail, GLenum zfail, GLenum zpass);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLenum a3;
} ARGS_void_GLenum_GLenum_GLenum;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLenum func;
    int refs;
    ARGS_void_GLenum_GLenum_GLenum args;
} PACKED_void_GLenum_GLenum_GLenum;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum_GLenum args;
} INDEXED_void_GLenum_GLenum_GLenum;
typedef void (*FUNC_void_GLenum_GLenum_GLint)(GLenum target, GLenum pname, GLint param);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint a3;
} ARGS_void_GLenum_GLenum_GLint;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_GLint func;
    int refs;
    ARGS_void_GLenum_GLenum_GLint args;
} PACKED_void_GLenum_GLenum_GLint;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum_GLint args;
} INDEXED_void_GLenum_GLenum_GLint;
typedef void (*FUNC_void_GLenum_GLenum_const_GLint___GENPT__)(GLenum target, GLenum pname, const GLint * params);
typedef struct {
    GLenum a1;
    GLenum a2;
    GLint * a3;
} ARGS_void_GLenum_GLenum_const_GLint___GENPT__;
typedef struct {
    int format;
    FUNC_void_GLenum_GLenum_const_GLint___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLenum_const_GLint___GENPT__ args;
} PACKED_void_GLenum_GLenum_const_GLint___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLenum_const_GLint___GENPT__ args;
} INDEXED_void_GLenum_GLenum_const_GLint___GENPT__;
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
    int format;
    FUNC_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args;
} INDEXED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__;
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
    int format;
    FUNC_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ func;
    int refs;
    ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args;
} PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__;
typedef struct {
    int func;
    ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args;
} INDEXED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__;
typedef int (*FUNC_int_Display___GENPT___int)(Display * dpy, int hpId);
typedef struct {
    Display * a1;
    int a2;
} ARGS_int_Display___GENPT___int;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int func;
    int refs;
    ARGS_int_Display___GENPT___int args;
} PACKED_int_Display___GENPT___int;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int args;
} INDEXED_int_Display___GENPT___int;
typedef void (*FUNC_void_uint32_t_uint32_t)(uint32_t window, uint32_t barrier);
typedef struct {
    uint32_t a1;
    uint32_t a2;
} ARGS_void_uint32_t_uint32_t;
typedef struct {
    int format;
    FUNC_void_uint32_t_uint32_t func;
    int refs;
    ARGS_void_uint32_t_uint32_t args;
} PACKED_void_uint32_t_uint32_t;
typedef struct {
    int func;
    ARGS_void_uint32_t_uint32_t args;
} INDEXED_void_uint32_t_uint32_t;
typedef void (*FUNC_void_uint32_t)(uint32_t drawable);
typedef struct {
    uint32_t a1;
} ARGS_void_uint32_t;
typedef struct {
    int format;
    FUNC_void_uint32_t func;
    int refs;
    ARGS_void_uint32_t args;
} PACKED_void_uint32_t;
typedef struct {
    int func;
    ARGS_void_uint32_t args;
} INDEXED_void_uint32_t;
typedef XVisualInfo * (*FUNC_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__)(Display * dpy, int screen, int * attribList);
typedef struct {
    Display * a1;
    int a2;
    int * a3;
} ARGS_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__;
typedef struct {
    int format;
    FUNC_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__ func;
    int refs;
    ARGS_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__ args;
} PACKED_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__;
typedef struct {
    int func;
    ARGS_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__ args;
} INDEXED_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__;
typedef void (*FUNC_void_Display___GENPT___GLXContext_GLXContext_unsigned_long)(Display * dpy, GLXContext src, GLXContext dst, unsigned long mask);
typedef struct {
    Display * a1;
    GLXContext a2;
    GLXContext a3;
    unsigned long a4;
} ARGS_void_Display___GENPT___GLXContext_GLXContext_unsigned_long;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXContext_GLXContext_unsigned_long func;
    int refs;
    ARGS_void_Display___GENPT___GLXContext_GLXContext_unsigned_long args;
} PACKED_void_Display___GENPT___GLXContext_GLXContext_unsigned_long;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXContext_GLXContext_unsigned_long args;
} INDEXED_void_Display___GENPT___GLXContext_GLXContext_unsigned_long;
typedef GLXContext (*FUNC_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool)(Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct);
typedef struct {
    Display * a1;
    XVisualInfo * a2;
    GLXContext a3;
    Bool a4;
} ARGS_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool;
typedef struct {
    int format;
    FUNC_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool func;
    int refs;
    ARGS_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool args;
} PACKED_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool;
typedef struct {
    int func;
    ARGS_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool args;
} INDEXED_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool;
typedef GLXContext (*FUNC_GLXContext_Display___GENPT___void___GENPT___GLXContext_Bool_const_int___GENPT__)(Display * display, void * config, GLXContext share_context, Bool direct, const int * attrib_list);
typedef struct {
    Display * a1;
    void * a2;
    GLXContext a3;
    Bool a4;
    int * a5;
} ARGS_GLXContext_Display___GENPT___void___GENPT___GLXContext_Bool_const_int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXContext_Display___GENPT___void___GENPT___GLXContext_Bool_const_int___GENPT__ func;
    int refs;
    ARGS_GLXContext_Display___GENPT___void___GENPT___GLXContext_Bool_const_int___GENPT__ args;
} PACKED_GLXContext_Display___GENPT___void___GENPT___GLXContext_Bool_const_int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXContext_Display___GENPT___void___GENPT___GLXContext_Bool_const_int___GENPT__ args;
} INDEXED_GLXContext_Display___GENPT___void___GENPT___GLXContext_Bool_const_int___GENPT__;
typedef void (*FUNC_void_uint32_t_uint32_t_uint32_t_uint32_t)(uint32_t gc_id, uint32_t screen, uint32_t config, uint32_t share_list);
typedef struct {
    uint32_t a1;
    uint32_t a2;
    uint32_t a3;
    uint32_t a4;
} ARGS_void_uint32_t_uint32_t_uint32_t_uint32_t;
typedef struct {
    int format;
    FUNC_void_uint32_t_uint32_t_uint32_t_uint32_t func;
    int refs;
    ARGS_void_uint32_t_uint32_t_uint32_t_uint32_t args;
} PACKED_void_uint32_t_uint32_t_uint32_t_uint32_t;
typedef struct {
    int func;
    ARGS_void_uint32_t_uint32_t_uint32_t_uint32_t args;
} INDEXED_void_uint32_t_uint32_t_uint32_t_uint32_t;
typedef GLXPixmap (*FUNC_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap)(Display * dpy, XVisualInfo * visual, Pixmap pixmap);
typedef struct {
    Display * a1;
    XVisualInfo * a2;
    Pixmap a3;
} ARGS_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap;
typedef struct {
    int format;
    FUNC_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap func;
    int refs;
    ARGS_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap args;
} PACKED_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap;
typedef struct {
    int func;
    ARGS_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap args;
} INDEXED_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap;
typedef void (*FUNC_void_uint32_t_uint32_t_uint32_t)(uint32_t config, uint32_t pixmap, uint32_t glxpixmap);
typedef struct {
    uint32_t a1;
    uint32_t a2;
    uint32_t a3;
} ARGS_void_uint32_t_uint32_t_uint32_t;
typedef struct {
    int format;
    FUNC_void_uint32_t_uint32_t_uint32_t func;
    int refs;
    ARGS_void_uint32_t_uint32_t_uint32_t args;
} PACKED_void_uint32_t_uint32_t_uint32_t;
typedef struct {
    int func;
    ARGS_void_uint32_t_uint32_t_uint32_t args;
} INDEXED_void_uint32_t_uint32_t_uint32_t;
typedef void (*FUNC_void_Display___GENPT___uint32_t_uint32_t_uint32_t_uint32_t_uint32_t)(Display * dpy, uint32_t screen, uint32_t server, uint32_t path, uint32_t class, uint32_t node);
typedef struct {
    Display * a1;
    uint32_t a2;
    uint32_t a3;
    uint32_t a4;
    uint32_t a5;
    uint32_t a6;
} ARGS_void_Display___GENPT___uint32_t_uint32_t_uint32_t_uint32_t_uint32_t;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___uint32_t_uint32_t_uint32_t_uint32_t_uint32_t func;
    int refs;
    ARGS_void_Display___GENPT___uint32_t_uint32_t_uint32_t_uint32_t_uint32_t args;
} PACKED_void_Display___GENPT___uint32_t_uint32_t_uint32_t_uint32_t_uint32_t;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___uint32_t_uint32_t_uint32_t_uint32_t_uint32_t args;
} INDEXED_void_Display___GENPT___uint32_t_uint32_t_uint32_t_uint32_t_uint32_t;
typedef void (*FUNC_void_Display___GENPT___GLXContext)(Display * dpy, GLXContext ctx);
typedef struct {
    Display * a1;
    GLXContext a2;
} ARGS_void_Display___GENPT___GLXContext;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXContext func;
    int refs;
    ARGS_void_Display___GENPT___GLXContext args;
} PACKED_void_Display___GENPT___GLXContext;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXContext args;
} INDEXED_void_Display___GENPT___GLXContext;
typedef void (*FUNC_void_Display___GENPT___GLXPixmap)(Display * dpy, GLXPixmap pixmap);
typedef struct {
    Display * a1;
    GLXPixmap a2;
} ARGS_void_Display___GENPT___GLXPixmap;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXPixmap func;
    int refs;
    ARGS_void_Display___GENPT___GLXPixmap args;
} PACKED_void_Display___GENPT___GLXPixmap;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXPixmap args;
} INDEXED_void_Display___GENPT___GLXPixmap;
typedef void (*FUNC_void_Display___GENPT___uint32_t)(Display * dpy, uint32_t glxvideosource);
typedef struct {
    Display * a1;
    uint32_t a2;
} ARGS_void_Display___GENPT___uint32_t;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___uint32_t func;
    int refs;
    ARGS_void_Display___GENPT___uint32_t args;
} PACKED_void_Display___GENPT___uint32_t;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___uint32_t args;
} INDEXED_void_Display___GENPT___uint32_t;
typedef const char * (*FUNC_const_char___GENPT___Display___GENPT___int)(Display * display, int name);
typedef struct {
    Display * a1;
    int a2;
} ARGS_const_char___GENPT___Display___GENPT___int;
typedef struct {
    int format;
    FUNC_const_char___GENPT___Display___GENPT___int func;
    int refs;
    ARGS_const_char___GENPT___Display___GENPT___int args;
} PACKED_const_char___GENPT___Display___GENPT___int;
typedef struct {
    int func;
    ARGS_const_char___GENPT___Display___GENPT___int args;
} INDEXED_const_char___GENPT___Display___GENPT___int;
typedef int (*FUNC_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__)(Display * display, XVisualInfo * visual, int attribute, int * value);
typedef struct {
    Display * a1;
    XVisualInfo * a2;
    int a3;
    int * a4;
} ARGS_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__ args;
} PACKED_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__ args;
} INDEXED_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__;
typedef GLXContext (*FUNC_GLXContext)();
typedef struct {
    int format;
    FUNC_GLXContext func;
    int refs;
} PACKED_GLXContext;
typedef struct {
    int func;
} INDEXED_GLXContext;
typedef GLXDrawable (*FUNC_GLXDrawable)();
typedef struct {
    int format;
    FUNC_GLXDrawable func;
    int refs;
} PACKED_GLXDrawable;
typedef struct {
    int func;
} INDEXED_GLXDrawable;
typedef int (*FUNC_int_Display___GENPT___int_int_int_const_void___GENPT__)(Display * dpy, int timeSlice, int attrib, int size, const void * attribList);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    int a4;
    void * a5;
} ARGS_int_Display___GENPT___int_int_int_const_void___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_int_const_void___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___int_int_int_const_void___GENPT__ args;
} PACKED_int_Display___GENPT___int_int_int_const_void___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_int_const_void___GENPT__ args;
} INDEXED_int_Display___GENPT___int_int_int_const_void___GENPT__;
typedef int (*FUNC_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX_int___GENPT__)(Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX cfg, int * hpId);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    GLXHyperpipeConfigSGIX a4;
    int * a5;
} ARGS_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX_int___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX_int___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX_int___GENPT__ args;
} PACKED_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX_int___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX_int___GENPT__ args;
} INDEXED_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX_int___GENPT__;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXContext)(Display * dpy, GLXContext ctx);
typedef struct {
    Display * a1;
    GLXContext a2;
} ARGS_Bool_Display___GENPT___GLXContext;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXContext func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXContext args;
} PACKED_Bool_Display___GENPT___GLXContext;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXContext args;
} INDEXED_Bool_Display___GENPT___GLXContext;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXDrawable_GLXContext)(Display * dpy, GLXDrawable drawable, GLXContext ctx);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    GLXContext a3;
} ARGS_Bool_Display___GENPT___GLXDrawable_GLXContext;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXDrawable_GLXContext func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXDrawable_GLXContext args;
} PACKED_Bool_Display___GENPT___GLXDrawable_GLXContext;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXDrawable_GLXContext args;
} INDEXED_Bool_Display___GENPT___GLXDrawable_GLXContext;
typedef Bool (*FUNC_Bool_Display___GENPT___int___GENPT___int___GENPT__)(Display * display, int * errorBase, int * eventBase);
typedef struct {
    Display * a1;
    int * a2;
    int * a3;
} ARGS_Bool_Display___GENPT___int___GENPT___int___GENPT__;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___int___GENPT___int___GENPT__ func;
    int refs;
    ARGS_Bool_Display___GENPT___int___GENPT___int___GENPT__ args;
} PACKED_Bool_Display___GENPT___int___GENPT___int___GENPT__;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___int___GENPT___int___GENPT__ args;
} INDEXED_Bool_Display___GENPT___int___GENPT___int___GENPT__;
typedef int (*FUNC_int_Display___GENPT___int_int_int_const_void___GENPT___void___GENPT__)(Display * dpy, int timeSlice, int attrib, int size, const void * attribList, void * returnAttribList);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    int a4;
    void * a5;
    void * a6;
} ARGS_int_Display___GENPT___int_int_int_const_void___GENPT___void___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_int_const_void___GENPT___void___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___int_int_int_const_void___GENPT___void___GENPT__ args;
} PACKED_int_Display___GENPT___int_int_int_const_void___GENPT___void___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_int_const_void___GENPT___void___GENPT__ args;
} INDEXED_int_Display___GENPT___int_int_int_const_void___GENPT___void___GENPT__;
typedef GLXHyperpipeConfigSGIX * (*FUNC_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__)(Display * dpy, int hpId, int * npipes);
typedef struct {
    Display * a1;
    int a2;
    int * a3;
} ARGS_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__ func;
    int refs;
    ARGS_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__ args;
} PACKED_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__ args;
} INDEXED_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__;
typedef GLXHyperpipeNetworkSGIX * (*FUNC_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__)(Display * dpy, int * npipes);
typedef struct {
    Display * a1;
    int * a2;
} ARGS_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__ func;
    int refs;
    ARGS_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__ args;
} PACKED_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__ args;
} INDEXED_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__;
typedef const char * (*FUNC_const_char___GENPT___Display___GENPT___int_int)(Display * dpy, int screen, int name);
typedef struct {
    Display * a1;
    int a2;
    int a3;
} ARGS_const_char___GENPT___Display___GENPT___int_int;
typedef struct {
    int format;
    FUNC_const_char___GENPT___Display___GENPT___int_int func;
    int refs;
    ARGS_const_char___GENPT___Display___GENPT___int_int args;
} PACKED_const_char___GENPT___Display___GENPT___int_int;
typedef struct {
    int func;
    ARGS_const_char___GENPT___Display___GENPT___int_int args;
} INDEXED_const_char___GENPT___Display___GENPT___int_int;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXDrawable)(Display * dpy, GLXDrawable drawable);
typedef struct {
    Display * a1;
    GLXDrawable a2;
} ARGS_Bool_Display___GENPT___GLXDrawable;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXDrawable func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXDrawable args;
} PACKED_Bool_Display___GENPT___GLXDrawable;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXDrawable args;
} INDEXED_Bool_Display___GENPT___GLXDrawable;
typedef void (*FUNC_void_Display___GENPT___GLXDrawable)(Display * dpy, GLXDrawable drawable);
typedef struct {
    Display * a1;
    GLXDrawable a2;
} ARGS_void_Display___GENPT___GLXDrawable;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXDrawable func;
    int refs;
    ARGS_void_Display___GENPT___GLXDrawable args;
} PACKED_void_Display___GENPT___GLXDrawable;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXDrawable args;
} INDEXED_void_Display___GENPT___GLXDrawable;
typedef int (*FUNC_int_unsigned_int)(unsigned int interval);
typedef struct {
    unsigned int a1;
} ARGS_int_unsigned_int;
typedef struct {
    int format;
    FUNC_int_unsigned_int func;
    int refs;
    ARGS_int_unsigned_int args;
} PACKED_int_unsigned_int;
typedef struct {
    int func;
    ARGS_int_unsigned_int args;
} INDEXED_int_unsigned_int;
typedef void (*FUNC_void_unsigned_int)(unsigned int interval);
typedef struct {
    unsigned int a1;
} ARGS_void_unsigned_int;
typedef struct {
    int format;
    FUNC_void_unsigned_int func;
    int refs;
    ARGS_void_unsigned_int args;
} PACKED_void_unsigned_int;
typedef struct {
    int func;
    ARGS_void_unsigned_int args;
} INDEXED_void_unsigned_int;
typedef void (*FUNC_void_Font_int_int_int)(Font font, int first, int count, int list);
typedef struct {
    Font a1;
    int a2;
    int a3;
    int a4;
} ARGS_void_Font_int_int_int;
typedef struct {
    int format;
    FUNC_void_Font_int_int_int func;
    int refs;
    ARGS_void_Font_int_int_int args;
} PACKED_void_Font_int_int_int;
typedef struct {
    int func;
    ARGS_void_Font_int_int_int args;
} INDEXED_void_Font_int_int_int;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer)(Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer);
typedef struct {
    Display * a1;
    GLXPbufferSGIX a2;
    DMparams * a3;
    DMbuffer a4;
} ARGS_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer args;
} PACKED_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer args;
} INDEXED_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer;
typedef int (*FUNC_int_Display___GENPT___int_int_Window)(Display * display, int screen, int channel, Window window);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    Window a4;
} ARGS_int_Display___GENPT___int_int_Window;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_Window func;
    int refs;
    ARGS_int_Display___GENPT___int_int_Window args;
} PACKED_int_Display___GENPT___int_int_Window;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_Window args;
} INDEXED_int_Display___GENPT___int_int_Window;
typedef Bool (*FUNC_Bool_Display___GENPT___GLuint_GLuint)(Display * dpy, GLuint group, GLuint barrier);
typedef struct {
    Display * a1;
    GLuint a2;
    GLuint a3;
} ARGS_Bool_Display___GENPT___GLuint_GLuint;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLuint_GLuint func;
    int refs;
    ARGS_Bool_Display___GENPT___GLuint_GLuint args;
} PACKED_Bool_Display___GENPT___GLuint_GLuint;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLuint_GLuint args;
} INDEXED_Bool_Display___GENPT___GLuint_GLuint;
typedef void (*FUNC_void_Display___GENPT___GLXDrawable_int)(Display * dpy, GLXDrawable drawable, int barrier);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    int a3;
} ARGS_void_Display___GENPT___GLXDrawable_int;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXDrawable_int func;
    int refs;
    ARGS_void_Display___GENPT___GLXDrawable_int args;
} PACKED_void_Display___GENPT___GLXDrawable_int;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXDrawable_int args;
} INDEXED_void_Display___GENPT___GLXDrawable_int;
typedef void (*FUNC_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__)(Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    int a3;
    int * a4;
} ARGS_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__ func;
    int refs;
    ARGS_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__ args;
} PACKED_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__ args;
} INDEXED_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__;
typedef int (*FUNC_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV)(Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
typedef struct {
    Display * a1;
    unsigned int a2;
    GLXVideoCaptureDeviceNV a3;
} ARGS_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV func;
    int refs;
    ARGS_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV args;
} PACKED_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV args;
} INDEXED_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV;
typedef int (*FUNC_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__)(Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list);
typedef struct {
    Display * a1;
    unsigned int a2;
    unsigned int a3;
    int * a4;
} ARGS_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__ args;
} PACKED_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__ args;
} INDEXED_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__;
typedef int (*FUNC_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int)(Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
typedef struct {
    Display * a1;
    GLXVideoDeviceNV a2;
    GLXPbuffer a3;
    int a4;
} ARGS_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int func;
    int refs;
    ARGS_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int args;
} PACKED_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int args;
} INDEXED_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int;
typedef int (*FUNC_int_Display___GENPT___int_int_int_int_int_int)(Display * display, int screen, int channel, int x, int y, int w, int h);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    int a4;
    int a5;
    int a6;
    int a7;
} ARGS_int_Display___GENPT___int_int_int_int_int_int;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_int_int_int_int func;
    int refs;
    ARGS_int_Display___GENPT___int_int_int_int_int_int args;
} PACKED_int_Display___GENPT___int_int_int_int_int_int;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_int_int_int_int args;
} INDEXED_int_Display___GENPT___int_int_int_int_int_int;
typedef int (*FUNC_int_Display___GENPT___int_int_GLenum)(Display * display, int screen, int channel, GLenum synctype);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    GLenum a4;
} ARGS_int_Display___GENPT___int_int_GLenum;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_GLenum func;
    int refs;
    ARGS_int_Display___GENPT___int_int_GLenum args;
} PACKED_int_Display___GENPT___int_int_GLenum;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_GLenum args;
} INDEXED_int_Display___GENPT___int_int_GLenum;
typedef GLXFBConfig * (*FUNC_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__)(Display * dpy, int screen, const int * attrib_list, int * nelements);
typedef struct {
    Display * a1;
    int a2;
    int * a3;
    int * a4;
} ARGS_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__ func;
    int refs;
    ARGS_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__ args;
} PACKED_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__ args;
} INDEXED_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__;
typedef GLXFBConfigSGIX * (*FUNC_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__)(Display * dpy, int screen, int * attrib_list, int * nelements);
typedef struct {
    Display * a1;
    int a2;
    int * a3;
    int * a4;
} ARGS_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__ func;
    int refs;
    ARGS_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__ args;
} PACKED_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__ args;
} INDEXED_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__;
typedef void (*FUNC_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei)(Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
typedef struct {
    Display * a1;
    GLXContext a2;
    GLuint a3;
    GLenum a4;
    GLint a5;
    GLint a6;
    GLint a7;
    GLint a8;
    GLXContext a9;
    GLuint a10;
    GLenum a11;
    GLint a12;
    GLint a13;
    GLint a14;
    GLint a15;
    GLsizei a16;
    GLsizei a17;
    GLsizei a18;
} ARGS_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei func;
    int refs;
    ARGS_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei args;
} PACKED_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei args;
} INDEXED_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei;
typedef void (*FUNC_void_Display___GENPT___GLXDrawable_int_int_int_int)(Display * dpy, GLXDrawable drawable, int x, int y, int width, int height);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    int a3;
    int a4;
    int a5;
    int a6;
} ARGS_void_Display___GENPT___GLXDrawable_int_int_int_int;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXDrawable_int_int_int_int func;
    int refs;
    ARGS_void_Display___GENPT___GLXDrawable_int_int_int_int args;
} PACKED_void_Display___GENPT___GLXDrawable_int_int_int_int;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXDrawable_int_int_int_int args;
} INDEXED_void_Display___GENPT___GLXDrawable_int_int_int_int;
typedef GLXContext (*FUNC_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__)(Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list);
typedef struct {
    Display * a1;
    GLXFBConfig a2;
    GLXContext a3;
    Bool a4;
    int * a5;
} ARGS_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__ func;
    int refs;
    ARGS_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__ args;
} PACKED_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__ args;
} INDEXED_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__;
typedef GLXContext (*FUNC_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool)(Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
typedef struct {
    Display * a1;
    GLXFBConfigSGIX a2;
    int a3;
    GLXContext a4;
    Bool a5;
} ARGS_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool;
typedef struct {
    int format;
    FUNC_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool func;
    int refs;
    ARGS_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool args;
} PACKED_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool;
typedef struct {
    int func;
    ARGS_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool args;
} INDEXED_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool;
typedef GLXPbufferSGIX (*FUNC_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__)(Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list);
typedef struct {
    Display * a1;
    GLXFBConfigSGIX a2;
    unsigned int a3;
    unsigned int a4;
    int * a5;
} ARGS_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__ func;
    int refs;
    ARGS_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__ args;
} PACKED_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__ args;
} INDEXED_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__;
typedef GLXPixmap (*FUNC_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap)(Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap);
typedef struct {
    Display * a1;
    XVisualInfo * a2;
    Pixmap a3;
    Colormap a4;
} ARGS_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap;
typedef struct {
    int format;
    FUNC_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap func;
    int refs;
    ARGS_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap args;
} PACKED_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap;
typedef struct {
    int func;
    ARGS_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap args;
} INDEXED_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap;
typedef GLXPixmap (*FUNC_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap)(Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
typedef struct {
    Display * a1;
    GLXFBConfigSGIX a2;
    Pixmap a3;
} ARGS_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap;
typedef struct {
    int format;
    FUNC_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap func;
    int refs;
    ARGS_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap args;
} PACKED_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap;
typedef struct {
    int func;
    ARGS_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap args;
} INDEXED_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap;
typedef GLXVideoSourceSGIX (*FUNC_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode)(Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
typedef struct {
    Display * a1;
    int a2;
    VLServer a3;
    VLPath a4;
    int a5;
    VLNode a6;
} ARGS_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode;
typedef struct {
    int format;
    FUNC_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode func;
    int refs;
    ARGS_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode args;
} PACKED_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode;
typedef struct {
    int func;
    ARGS_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode args;
} INDEXED_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode;
typedef GLXContext (*FUNC_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool)(Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
typedef struct {
    Display * a1;
    GLXFBConfig a2;
    int a3;
    GLXContext a4;
    Bool a5;
} ARGS_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool;
typedef struct {
    int format;
    FUNC_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool func;
    int refs;
    ARGS_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool args;
} PACKED_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool;
typedef struct {
    int func;
    ARGS_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool args;
} INDEXED_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool;
typedef GLXPbuffer (*FUNC_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__)(Display * dpy, GLXFBConfig config, const int * attrib_list);
typedef struct {
    Display * a1;
    GLXFBConfig a2;
    int * a3;
} ARGS_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__ func;
    int refs;
    ARGS_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__ args;
} PACKED_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__ args;
} INDEXED_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__;
typedef GLXPixmap (*FUNC_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__)(Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list);
typedef struct {
    Display * a1;
    GLXFBConfig a2;
    Pixmap a3;
    int * a4;
} ARGS_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__ func;
    int refs;
    ARGS_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__ args;
} PACKED_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__ args;
} INDEXED_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__;
typedef GLXWindow (*FUNC_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__)(Display * dpy, GLXFBConfig config, Window win, const int * attrib_list);
typedef struct {
    Display * a1;
    GLXFBConfig a2;
    Window a3;
    int * a4;
} ARGS_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__ func;
    int refs;
    ARGS_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__ args;
} PACKED_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__ args;
} INDEXED_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__;
typedef void (*FUNC_void_Display___GENPT___Window_float)(Display * dpy, Window window, float cushion);
typedef struct {
    Display * a1;
    Window a2;
    float a3;
} ARGS_void_Display___GENPT___Window_float;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___Window_float func;
    int refs;
    ARGS_void_Display___GENPT___Window_float args;
} PACKED_void_Display___GENPT___Window_float;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___Window_float args;
} INDEXED_void_Display___GENPT___Window_float;
typedef void (*FUNC_void_Display___GENPT___GLXPbufferSGIX)(Display * dpy, GLXPbufferSGIX pbuf);
typedef struct {
    Display * a1;
    GLXPbufferSGIX a2;
} ARGS_void_Display___GENPT___GLXPbufferSGIX;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXPbufferSGIX func;
    int refs;
    ARGS_void_Display___GENPT___GLXPbufferSGIX args;
} PACKED_void_Display___GENPT___GLXPbufferSGIX;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXPbufferSGIX args;
} INDEXED_void_Display___GENPT___GLXPbufferSGIX;
typedef void (*FUNC_void_Display___GENPT___GLXVideoSourceSGIX)(Display * dpy, GLXVideoSourceSGIX glxvideosource);
typedef struct {
    Display * a1;
    GLXVideoSourceSGIX a2;
} ARGS_void_Display___GENPT___GLXVideoSourceSGIX;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXVideoSourceSGIX func;
    int refs;
    ARGS_void_Display___GENPT___GLXVideoSourceSGIX args;
} PACKED_void_Display___GENPT___GLXVideoSourceSGIX;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXVideoSourceSGIX args;
} INDEXED_void_Display___GENPT___GLXVideoSourceSGIX;
typedef void (*FUNC_void_Display___GENPT___GLXPbuffer)(Display * dpy, GLXPbuffer pbuf);
typedef struct {
    Display * a1;
    GLXPbuffer a2;
} ARGS_void_Display___GENPT___GLXPbuffer;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXPbuffer func;
    int refs;
    ARGS_void_Display___GENPT___GLXPbuffer args;
} PACKED_void_Display___GENPT___GLXPbuffer;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXPbuffer args;
} INDEXED_void_Display___GENPT___GLXPbuffer;
typedef void (*FUNC_void_Display___GENPT___GLXWindow)(Display * dpy, GLXWindow win);
typedef struct {
    Display * a1;
    GLXWindow a2;
} ARGS_void_Display___GENPT___GLXWindow;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXWindow func;
    int refs;
    ARGS_void_Display___GENPT___GLXWindow args;
} PACKED_void_Display___GENPT___GLXWindow;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXWindow args;
} INDEXED_void_Display___GENPT___GLXWindow;
typedef GLXVideoCaptureDeviceNV * (*FUNC_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__)(Display * dpy, int screen, int * nelements);
typedef struct {
    Display * a1;
    int a2;
    int * a3;
} ARGS_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__ func;
    int refs;
    ARGS_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__ args;
} PACKED_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__ args;
} INDEXED_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__;
typedef unsigned int * (*FUNC_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__)(Display * dpy, int screen, int * nelements);
typedef struct {
    Display * a1;
    int a2;
    int * a3;
} ARGS_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__;
typedef struct {
    int format;
    FUNC_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__ func;
    int refs;
    ARGS_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__ args;
} PACKED_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__;
typedef struct {
    int func;
    ARGS_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__ args;
} INDEXED_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__;
typedef unsigned int (*FUNC_unsigned_int_const_void___GENPT__)(const void * pointer);
typedef struct {
    void * a1;
} ARGS_unsigned_int_const_void___GENPT__;
typedef struct {
    int format;
    FUNC_unsigned_int_const_void___GENPT__ func;
    int refs;
    ARGS_unsigned_int_const_void___GENPT__ args;
} PACKED_unsigned_int_const_void___GENPT__;
typedef struct {
    int func;
    ARGS_unsigned_int_const_void___GENPT__ args;
} INDEXED_unsigned_int_const_void___GENPT__;
typedef GLXContextID (*FUNC_GLXContextID_const_GLXContext)(const GLXContext context);
typedef struct {
    GLXContext a1;
} ARGS_GLXContextID_const_GLXContext;
typedef struct {
    int format;
    FUNC_GLXContextID_const_GLXContext func;
    int refs;
    ARGS_GLXContextID_const_GLXContext args;
} PACKED_GLXContextID_const_GLXContext;
typedef struct {
    int func;
    ARGS_GLXContextID_const_GLXContext args;
} INDEXED_GLXContextID_const_GLXContext;
typedef Display * (*FUNC_Display___GENPT__)();
typedef struct {
    int format;
    FUNC_Display___GENPT__ func;
    int refs;
} PACKED_Display___GENPT__;
typedef struct {
    int func;
} INDEXED_Display___GENPT__;
typedef int (*FUNC_int_Display___GENPT___GLXFBConfig_int_int___GENPT__)(Display * dpy, GLXFBConfig config, int attribute, int * value);
typedef struct {
    Display * a1;
    GLXFBConfig a2;
    int a3;
    int * a4;
} ARGS_int_Display___GENPT___GLXFBConfig_int_int___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___GLXFBConfig_int_int___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___GLXFBConfig_int_int___GENPT__ args;
} PACKED_int_Display___GENPT___GLXFBConfig_int_int___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___GLXFBConfig_int_int___GENPT__ args;
} INDEXED_int_Display___GENPT___GLXFBConfig_int_int___GENPT__;
typedef int (*FUNC_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__)(Display * dpy, GLXFBConfigSGIX config, int attribute, int * value);
typedef struct {
    Display * a1;
    GLXFBConfigSGIX a2;
    int a3;
    int * a4;
} ARGS_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__ args;
} PACKED_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__ args;
} INDEXED_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__;
typedef GLXFBConfigSGIX (*FUNC_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__)(Display * dpy, XVisualInfo * vis);
typedef struct {
    Display * a1;
    XVisualInfo * a2;
} ARGS_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__;
typedef struct {
    int format;
    FUNC_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__ func;
    int refs;
    ARGS_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__ args;
} PACKED_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__;
typedef struct {
    int func;
    ARGS_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__ args;
} INDEXED_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__;
typedef GLXFBConfig * (*FUNC_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__)(Display * dpy, int screen, int * nelements);
typedef struct {
    Display * a1;
    int a2;
    int * a3;
} ARGS_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__;
typedef struct {
    int format;
    FUNC_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__ func;
    int refs;
    ARGS_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__ args;
} PACKED_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__;
typedef struct {
    int func;
    ARGS_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__ args;
} INDEXED_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__)(Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    int32_t * a3;
    int32_t * a4;
} ARGS_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__ func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__ args;
} PACKED_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__ args;
} INDEXED_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__;
typedef __GLXextFuncPtr (*FUNC___GLXextFuncPtr_const_GLubyte___GENPT__)(const GLubyte * procName);
typedef struct {
    GLubyte * a1;
} ARGS___GLXextFuncPtr_const_GLubyte___GENPT__;
typedef struct {
    int format;
    FUNC___GLXextFuncPtr_const_GLubyte___GENPT__ func;
    int refs;
    ARGS___GLXextFuncPtr_const_GLubyte___GENPT__ args;
} PACKED___GLXextFuncPtr_const_GLubyte___GENPT__;
typedef struct {
    int func;
    ARGS___GLXextFuncPtr_const_GLubyte___GENPT__ args;
} INDEXED___GLXextFuncPtr_const_GLubyte___GENPT__;
typedef void (*FUNC_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__)(Display * dpy, GLXDrawable draw, unsigned long * event_mask);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    unsigned long * a3;
} ARGS_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__ func;
    int refs;
    ARGS_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__ args;
} PACKED_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__ args;
} INDEXED_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__)(Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    int64_t * a3;
    int64_t * a4;
    int64_t * a5;
} ARGS_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__ func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__ args;
} PACKED_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__ args;
} INDEXED_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__;
typedef Status (*FUNC_Status_Display___GENPT___Window_Window_long___GENPT__)(Display * dpy, Window overlay, Window underlay, long * pTransparentIndex);
typedef struct {
    Display * a1;
    Window a2;
    Window a3;
    long * a4;
} ARGS_Status_Display___GENPT___Window_Window_long___GENPT__;
typedef struct {
    int format;
    FUNC_Status_Display___GENPT___Window_Window_long___GENPT__ func;
    int refs;
    ARGS_Status_Display___GENPT___Window_Window_long___GENPT__ args;
} PACKED_Status_Display___GENPT___Window_Window_long___GENPT__;
typedef struct {
    int func;
    ARGS_Status_Display___GENPT___Window_Window_long___GENPT__ args;
} INDEXED_Status_Display___GENPT___Window_Window_long___GENPT__;
typedef int (*FUNC_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__)(Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    GLXVideoDeviceNV * a4;
} ARGS_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__ args;
} PACKED_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__ args;
} INDEXED_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__;
typedef int (*FUNC_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__)(Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
typedef struct {
    Display * a1;
    int a2;
    GLXVideoDeviceNV a3;
    unsigned long * a4;
    unsigned long * a5;
} ARGS_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__ args;
} PACKED_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__ args;
} INDEXED_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__;
typedef int (*FUNC_int_unsigned_int___GENPT__)(unsigned int * count);
typedef struct {
    unsigned int * a1;
} ARGS_int_unsigned_int___GENPT__;
typedef struct {
    int format;
    FUNC_int_unsigned_int___GENPT__ func;
    int refs;
    ARGS_int_unsigned_int___GENPT__ args;
} PACKED_int_unsigned_int___GENPT__;
typedef struct {
    int func;
    ARGS_int_unsigned_int___GENPT__ args;
} INDEXED_int_unsigned_int___GENPT__;
typedef XVisualInfo * (*FUNC_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig)(Display * dpy, GLXFBConfig config);
typedef struct {
    Display * a1;
    GLXFBConfig a2;
} ARGS_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig;
typedef struct {
    int format;
    FUNC_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig func;
    int refs;
    ARGS_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig args;
} PACKED_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig;
typedef struct {
    int func;
    ARGS_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig args;
} INDEXED_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig;
typedef XVisualInfo * (*FUNC_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX)(Display * dpy, GLXFBConfigSGIX config);
typedef struct {
    Display * a1;
    GLXFBConfigSGIX a2;
} ARGS_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX;
typedef struct {
    int format;
    FUNC_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX func;
    int refs;
    ARGS_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX args;
} PACKED_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX;
typedef struct {
    int func;
    ARGS_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX args;
} INDEXED_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX;
typedef int (*FUNC_int_Display___GENPT___int_int_int_void___GENPT__)(Display * dpy, int timeSlice, int attrib, int size, void * attribList);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    int a4;
    void * a5;
} ARGS_int_Display___GENPT___int_int_int_void___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_int_void___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___int_int_int_void___GENPT__ args;
} PACKED_int_Display___GENPT___int_int_int_void___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_int_void___GENPT__ args;
} INDEXED_int_Display___GENPT___int_int_int_void___GENPT__;
typedef int (*FUNC_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__)(Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    GLXHyperpipeConfigSGIX * a4;
    int * a5;
} ARGS_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__ args;
} PACKED_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__ args;
} INDEXED_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__;
typedef GLXContext (*FUNC_GLXContext_Display___GENPT___GLXContextID)(Display * dpy, GLXContextID contextID);
typedef struct {
    Display * a1;
    GLXContextID a2;
} ARGS_GLXContext_Display___GENPT___GLXContextID;
typedef struct {
    int format;
    FUNC_GLXContext_Display___GENPT___GLXContextID func;
    int refs;
    ARGS_GLXContext_Display___GENPT___GLXContextID args;
} PACKED_GLXContext_Display___GENPT___GLXContextID;
typedef struct {
    int func;
    ARGS_GLXContext_Display___GENPT___GLXContextID args;
} INDEXED_GLXContext_Display___GENPT___GLXContextID;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXDrawable_GLuint)(Display * dpy, GLXDrawable drawable, GLuint group);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    GLuint a3;
} ARGS_Bool_Display___GENPT___GLXDrawable_GLuint;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXDrawable_GLuint func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXDrawable_GLuint args;
} PACKED_Bool_Display___GENPT___GLXDrawable_GLuint;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXDrawable_GLuint args;
} INDEXED_Bool_Display___GENPT___GLXDrawable_GLuint;
typedef void (*FUNC_void_Display___GENPT___GLXDrawable_GLXDrawable)(Display * dpy, GLXDrawable drawable, GLXDrawable member);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    GLXDrawable a3;
} ARGS_void_Display___GENPT___GLXDrawable_GLXDrawable;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXDrawable_GLXDrawable func;
    int refs;
    ARGS_void_Display___GENPT___GLXDrawable_GLXDrawable args;
} PACKED_void_Display___GENPT___GLXDrawable_GLXDrawable;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXDrawable_GLXDrawable args;
} INDEXED_void_Display___GENPT___GLXDrawable_GLXDrawable;
typedef void (*FUNC_void_Display___GENPT___GLXVideoCaptureDeviceNV)(Display * dpy, GLXVideoCaptureDeviceNV device);
typedef struct {
    Display * a1;
    GLXVideoCaptureDeviceNV a2;
} ARGS_void_Display___GENPT___GLXVideoCaptureDeviceNV;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXVideoCaptureDeviceNV func;
    int refs;
    ARGS_void_Display___GENPT___GLXVideoCaptureDeviceNV args;
} PACKED_void_Display___GENPT___GLXVideoCaptureDeviceNV;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXVideoCaptureDeviceNV args;
} INDEXED_void_Display___GENPT___GLXVideoCaptureDeviceNV;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext)(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    GLXDrawable a3;
    GLXContext a4;
} ARGS_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext args;
} PACKED_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext args;
} INDEXED_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext;
typedef int (*FUNC_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__)(Display * display, int screen, int channel, int * x, int * y, int * w, int * h);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    int * a4;
    int * a5;
    int * a6;
    int * a7;
} ARGS_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__ args;
} PACKED_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__ args;
} INDEXED_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__;
typedef int (*FUNC_int_Display___GENPT___GLXContext_int_int___GENPT__)(Display * dpy, GLXContext ctx, int attribute, int * value);
typedef struct {
    Display * a1;
    GLXContext a2;
    int a3;
    int * a4;
} ARGS_int_Display___GENPT___GLXContext_int_int___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___GLXContext_int_int___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___GLXContext_int_int___GENPT__ args;
} PACKED_int_Display___GENPT___GLXContext_int_int___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___GLXContext_int_int___GENPT__ args;
} INDEXED_int_Display___GENPT___GLXContext_int_int___GENPT__;
typedef void (*FUNC_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__)(Display * dpy, GLXDrawable draw, int attribute, unsigned int * value);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    int a3;
    unsigned int * a4;
} ARGS_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__ func;
    int refs;
    ARGS_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__ args;
} PACKED_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__ args;
} INDEXED_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__;
typedef Bool (*FUNC_Bool_Display___GENPT___int_GLuint___GENPT__)(Display * dpy, int screen, GLuint * count);
typedef struct {
    Display * a1;
    int a2;
    GLuint * a3;
} ARGS_Bool_Display___GENPT___int_GLuint___GENPT__;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___int_GLuint___GENPT__ func;
    int refs;
    ARGS_Bool_Display___GENPT___int_GLuint___GENPT__ args;
} PACKED_Bool_Display___GENPT___int_GLuint___GENPT__;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___int_GLuint___GENPT__ args;
} INDEXED_Bool_Display___GENPT___int_GLuint___GENPT__;
typedef int (*FUNC_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__)(Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value);
typedef struct {
    Display * a1;
    GLXPbufferSGIX a2;
    int a3;
    unsigned int * a4;
} ARGS_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__ args;
} PACKED_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__ args;
} INDEXED_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__;
typedef int (*FUNC_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__)(Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList);
typedef struct {
    Display * a1;
    int a2;
    int a3;
    int a4;
    void * a5;
    void * a6;
} ARGS_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__ args;
} PACKED_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__ args;
} INDEXED_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__;
typedef Bool (*FUNC_Bool_Display___GENPT___int_int___GENPT__)(Display * dpy, int screen, int * max);
typedef struct {
    Display * a1;
    int a2;
    int * a3;
} ARGS_Bool_Display___GENPT___int_int___GENPT__;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___int_int___GENPT__ func;
    int refs;
    ARGS_Bool_Display___GENPT___int_int___GENPT__ args;
} PACKED_Bool_Display___GENPT___int_int___GENPT__;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___int_int___GENPT__ args;
} INDEXED_Bool_Display___GENPT___int_int___GENPT__;
typedef Bool (*FUNC_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__)(Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers);
typedef struct {
    Display * a1;
    int a2;
    GLuint * a3;
    GLuint * a4;
} ARGS_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__ func;
    int refs;
    ARGS_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__ args;
} PACKED_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__ args;
} INDEXED_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__)(Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    GLuint * a3;
    GLuint * a4;
} ARGS_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__ func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__ args;
} PACKED_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__ args;
} INDEXED_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__;
typedef int (*FUNC_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__)(Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value);
typedef struct {
    Display * a1;
    GLXVideoCaptureDeviceNV a2;
    int a3;
    int * a4;
} ARGS_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__ func;
    int refs;
    ARGS_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__ args;
} PACKED_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__ args;
} INDEXED_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__;
typedef int (*FUNC_int_Display___GENPT___int_GLXVideoDeviceNV)(Display * dpy, int screen, GLXVideoDeviceNV VideoDevice);
typedef struct {
    Display * a1;
    int a2;
    GLXVideoDeviceNV a3;
} ARGS_int_Display___GENPT___int_GLXVideoDeviceNV;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___int_GLXVideoDeviceNV func;
    int refs;
    ARGS_int_Display___GENPT___int_GLXVideoDeviceNV args;
} PACKED_int_Display___GENPT___int_GLXVideoDeviceNV;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___int_GLXVideoDeviceNV args;
} INDEXED_int_Display___GENPT___int_GLXVideoDeviceNV;
typedef int (*FUNC_int_Display___GENPT___GLXPbuffer)(Display * dpy, GLXPbuffer pbuf);
typedef struct {
    Display * a1;
    GLXPbuffer a2;
} ARGS_int_Display___GENPT___GLXPbuffer;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___GLXPbuffer func;
    int refs;
    ARGS_int_Display___GENPT___GLXPbuffer args;
} PACKED_int_Display___GENPT___GLXPbuffer;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___GLXPbuffer args;
} INDEXED_int_Display___GENPT___GLXPbuffer;
typedef Bool (*FUNC_Bool_Display___GENPT___int)(Display * dpy, int screen);
typedef struct {
    Display * a1;
    int a2;
} ARGS_Bool_Display___GENPT___int;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___int func;
    int refs;
    ARGS_Bool_Display___GENPT___int args;
} PACKED_Bool_Display___GENPT___int;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___int args;
} INDEXED_Bool_Display___GENPT___int;
typedef void (*FUNC_void_Display___GENPT___GLXDrawable_unsigned_long)(Display * dpy, GLXDrawable draw, unsigned long event_mask);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    unsigned long a3;
} ARGS_void_Display___GENPT___GLXDrawable_unsigned_long;
typedef struct {
    int format;
    FUNC_void_Display___GENPT___GLXDrawable_unsigned_long func;
    int refs;
    ARGS_void_Display___GENPT___GLXDrawable_unsigned_long args;
} PACKED_void_Display___GENPT___GLXDrawable_unsigned_long;
typedef struct {
    int func;
    ARGS_void_Display___GENPT___GLXDrawable_unsigned_long args;
} INDEXED_void_Display___GENPT___GLXDrawable_unsigned_long;
typedef int (*FUNC_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean)(Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock);
typedef struct {
    Display * a1;
    GLXPbuffer a2;
    int a3;
    unsigned long * a4;
    GLboolean a5;
} ARGS_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean;
typedef struct {
    int format;
    FUNC_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean func;
    int refs;
    ARGS_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean args;
} PACKED_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean;
typedef struct {
    int func;
    ARGS_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean args;
} INDEXED_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean;
typedef Bool (*FUNC_Bool_int)(int mode);
typedef struct {
    int a1;
} ARGS_Bool_int;
typedef struct {
    int format;
    FUNC_Bool_int func;
    int refs;
    ARGS_Bool_int args;
} PACKED_Bool_int;
typedef struct {
    int func;
    ARGS_Bool_int args;
} INDEXED_Bool_int;
typedef int64_t (*FUNC_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t)(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    int64_t a3;
    int64_t a4;
    int64_t a5;
} ARGS_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t;
typedef struct {
    int format;
    FUNC_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t func;
    int refs;
    ARGS_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t args;
} PACKED_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t;
typedef struct {
    int func;
    ARGS_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t args;
} INDEXED_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t;
typedef int (*FUNC_int_int)(int interval);
typedef struct {
    int a1;
} ARGS_int_int;
typedef struct {
    int format;
    FUNC_int_int func;
    int refs;
    ARGS_int_int args;
} PACKED_int_int;
typedef struct {
    int func;
    ARGS_int_int args;
} INDEXED_int_int;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__)(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    int64_t a3;
    int64_t a4;
    int64_t a5;
    int64_t * a6;
    int64_t * a7;
    int64_t * a8;
} ARGS_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__ func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__ args;
} PACKED_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__ args;
} INDEXED_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__;
typedef Bool (*FUNC_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__)(Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef struct {
    Display * a1;
    GLXDrawable a2;
    int64_t a3;
    int64_t * a4;
    int64_t * a5;
    int64_t * a6;
} ARGS_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__;
typedef struct {
    int format;
    FUNC_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__ func;
    int refs;
    ARGS_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__ args;
} PACKED_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__;
typedef struct {
    int func;
    ARGS_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__ args;
} INDEXED_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__;
typedef int (*FUNC_int_int_int_unsigned_int___GENPT__)(int divisor, int remainder, unsigned int * count);
typedef struct {
    int a1;
    int a2;
    unsigned int * a3;
} ARGS_int_int_int_unsigned_int___GENPT__;
typedef struct {
    int format;
    FUNC_int_int_int_unsigned_int___GENPT__ func;
    int refs;
    ARGS_int_int_int_unsigned_int___GENPT__ args;
} PACKED_int_int_int_unsigned_int___GENPT__;
typedef struct {
    int func;
    ARGS_int_int_int_unsigned_int___GENPT__ args;
} INDEXED_int_int_int_unsigned_int___GENPT__;

extern void glPushCall(void *data);
void glPackedCall(const packed_call_t *packed);
void glIndexedCall(const indexed_call_t *packed, void *ret_v);

#define glActiveTexture_INDEX 1
#define glActiveTexture_RETURN void
#define glActiveTexture_ARG_NAMES texture
#define glActiveTexture_ARG_EXPAND GLenum texture
#define glActiveTexture_PACKED PACKED_void_GLenum
#define glActiveTexture_INDEXED INDEXED_void_GLenum
#define glActiveTexture_FORMAT FORMAT_void_GLenum
#define glAlphaFunc_INDEX 2
#define glAlphaFunc_RETURN void
#define glAlphaFunc_ARG_NAMES func, ref
#define glAlphaFunc_ARG_EXPAND GLenum func, GLclampf ref
#define glAlphaFunc_PACKED PACKED_void_GLenum_GLclampf
#define glAlphaFunc_INDEXED INDEXED_void_GLenum_GLclampf
#define glAlphaFunc_FORMAT FORMAT_void_GLenum_GLclampf
#define glAlphaFuncx_INDEX 3
#define glAlphaFuncx_RETURN void
#define glAlphaFuncx_ARG_NAMES func, ref
#define glAlphaFuncx_ARG_EXPAND GLenum func, GLclampx ref
#define glAlphaFuncx_PACKED PACKED_void_GLenum_GLclampx
#define glAlphaFuncx_INDEXED INDEXED_void_GLenum_GLclampx
#define glAlphaFuncx_FORMAT FORMAT_void_GLenum_GLclampx
#define glBindBuffer_INDEX 4
#define glBindBuffer_RETURN void
#define glBindBuffer_ARG_NAMES target, buffer
#define glBindBuffer_ARG_EXPAND GLenum target, GLuint buffer
#define glBindBuffer_PACKED PACKED_void_GLenum_GLuint
#define glBindBuffer_INDEXED INDEXED_void_GLenum_GLuint
#define glBindBuffer_FORMAT FORMAT_void_GLenum_GLuint
#define glBindTexture_INDEX 5
#define glBindTexture_RETURN void
#define glBindTexture_ARG_NAMES target, texture
#define glBindTexture_ARG_EXPAND GLenum target, GLuint texture
#define glBindTexture_PACKED PACKED_void_GLenum_GLuint
#define glBindTexture_INDEXED INDEXED_void_GLenum_GLuint
#define glBindTexture_FORMAT FORMAT_void_GLenum_GLuint
#define glBlendFunc_INDEX 6
#define glBlendFunc_RETURN void
#define glBlendFunc_ARG_NAMES sfactor, dfactor
#define glBlendFunc_ARG_EXPAND GLenum sfactor, GLenum dfactor
#define glBlendFunc_PACKED PACKED_void_GLenum_GLenum
#define glBlendFunc_INDEXED INDEXED_void_GLenum_GLenum
#define glBlendFunc_FORMAT FORMAT_void_GLenum_GLenum
#define glBufferData_INDEX 7
#define glBufferData_RETURN void
#define glBufferData_ARG_NAMES target, size, data, usage
#define glBufferData_ARG_EXPAND GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage
#define glBufferData_PACKED PACKED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum
#define glBufferData_INDEXED INDEXED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum
#define glBufferData_FORMAT FORMAT_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum
#define glBufferSubData_INDEX 8
#define glBufferSubData_RETURN void
#define glBufferSubData_ARG_NAMES target, offset, size, data
#define glBufferSubData_ARG_EXPAND GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data
#define glBufferSubData_PACKED PACKED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__
#define glBufferSubData_INDEXED INDEXED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__
#define glBufferSubData_FORMAT FORMAT_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__
#define glClear_INDEX 9
#define glClear_RETURN void
#define glClear_ARG_NAMES mask
#define glClear_ARG_EXPAND GLbitfield mask
#define glClear_PACKED PACKED_void_GLbitfield
#define glClear_INDEXED INDEXED_void_GLbitfield
#define glClear_FORMAT FORMAT_void_GLbitfield
#define glClearColor_INDEX 10
#define glClearColor_RETURN void
#define glClearColor_ARG_NAMES red, green, blue, alpha
#define glClearColor_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define glClearColor_PACKED PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glClearColor_INDEXED INDEXED_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glClearColor_FORMAT FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf
#define glClearColorx_INDEX 11
#define glClearColorx_RETURN void
#define glClearColorx_ARG_NAMES red, green, blue, alpha
#define glClearColorx_ARG_EXPAND GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha
#define glClearColorx_PACKED PACKED_void_GLclampx_GLclampx_GLclampx_GLclampx
#define glClearColorx_INDEXED INDEXED_void_GLclampx_GLclampx_GLclampx_GLclampx
#define glClearColorx_FORMAT FORMAT_void_GLclampx_GLclampx_GLclampx_GLclampx
#define glClearDepthf_INDEX 12
#define glClearDepthf_RETURN void
#define glClearDepthf_ARG_NAMES depth
#define glClearDepthf_ARG_EXPAND GLclampf depth
#define glClearDepthf_PACKED PACKED_void_GLclampf
#define glClearDepthf_INDEXED INDEXED_void_GLclampf
#define glClearDepthf_FORMAT FORMAT_void_GLclampf
#define glClearDepthx_INDEX 13
#define glClearDepthx_RETURN void
#define glClearDepthx_ARG_NAMES depth
#define glClearDepthx_ARG_EXPAND GLclampx depth
#define glClearDepthx_PACKED PACKED_void_GLclampx
#define glClearDepthx_INDEXED INDEXED_void_GLclampx
#define glClearDepthx_FORMAT FORMAT_void_GLclampx
#define glClearStencil_INDEX 14
#define glClearStencil_RETURN void
#define glClearStencil_ARG_NAMES s
#define glClearStencil_ARG_EXPAND GLint s
#define glClearStencil_PACKED PACKED_void_GLint
#define glClearStencil_INDEXED INDEXED_void_GLint
#define glClearStencil_FORMAT FORMAT_void_GLint
#define glClientActiveTexture_INDEX 15
#define glClientActiveTexture_RETURN void
#define glClientActiveTexture_ARG_NAMES texture
#define glClientActiveTexture_ARG_EXPAND GLenum texture
#define glClientActiveTexture_PACKED PACKED_void_GLenum
#define glClientActiveTexture_INDEXED INDEXED_void_GLenum
#define glClientActiveTexture_FORMAT FORMAT_void_GLenum
#define glClipPlanef_INDEX 16
#define glClipPlanef_RETURN void
#define glClipPlanef_ARG_NAMES plane, equation
#define glClipPlanef_ARG_EXPAND GLenum plane, const GLfloat * equation
#define glClipPlanef_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define glClipPlanef_INDEXED INDEXED_void_GLenum_const_GLfloat___GENPT__
#define glClipPlanef_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define glClipPlanex_INDEX 17
#define glClipPlanex_RETURN void
#define glClipPlanex_ARG_NAMES plane, equation
#define glClipPlanex_ARG_EXPAND GLenum plane, const GLfixed * equation
#define glClipPlanex_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define glClipPlanex_INDEXED INDEXED_void_GLenum_const_GLfixed___GENPT__
#define glClipPlanex_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define glColor4f_INDEX 18
#define glColor4f_RETURN void
#define glColor4f_ARG_NAMES red, green, blue, alpha
#define glColor4f_ARG_EXPAND GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha
#define glColor4f_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat
#define glColor4f_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat
#define glColor4f_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat
#define glColor4ub_INDEX 19
#define glColor4ub_RETURN void
#define glColor4ub_ARG_NAMES red, green, blue, alpha
#define glColor4ub_ARG_EXPAND GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha
#define glColor4ub_PACKED PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte
#define glColor4ub_INDEXED INDEXED_void_GLubyte_GLubyte_GLubyte_GLubyte
#define glColor4ub_FORMAT FORMAT_void_GLubyte_GLubyte_GLubyte_GLubyte
#define glColor4x_INDEX 20
#define glColor4x_RETURN void
#define glColor4x_ARG_NAMES red, green, blue, alpha
#define glColor4x_ARG_EXPAND GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha
#define glColor4x_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed
#define glColor4x_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed
#define glColor4x_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed
#define glColorMask_INDEX 21
#define glColorMask_RETURN void
#define glColorMask_ARG_NAMES red, green, blue, alpha
#define glColorMask_ARG_EXPAND GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha
#define glColorMask_PACKED PACKED_void_GLboolean_GLboolean_GLboolean_GLboolean
#define glColorMask_INDEXED INDEXED_void_GLboolean_GLboolean_GLboolean_GLboolean
#define glColorMask_FORMAT FORMAT_void_GLboolean_GLboolean_GLboolean_GLboolean
#define glColorPointer_INDEX 22
#define glColorPointer_RETURN void
#define glColorPointer_ARG_NAMES size, type, stride, pointer
#define glColorPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define glColorPointer_PACKED PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glColorPointer_INDEXED INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glColorPointer_FORMAT FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexImage2D_INDEX 23
#define glCompressedTexImage2D_RETURN void
#define glCompressedTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, imageSize, data
#define glCompressedTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data
#define glCompressedTexImage2D_PACKED PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexImage2D_INDEXED INDEXED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexSubImage2D_INDEX 24
#define glCompressedTexSubImage2D_RETURN void
#define glCompressedTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, imageSize, data
#define glCompressedTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data
#define glCompressedTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexSubImage2D_INDEXED INDEXED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__
#define glCompressedTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__
#define glCopyTexImage2D_INDEX 25
#define glCopyTexImage2D_RETURN void
#define glCopyTexImage2D_ARG_NAMES target, level, internalformat, x, y, width, height, border
#define glCopyTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border
#define glCopyTexImage2D_PACKED PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint
#define glCopyTexImage2D_INDEXED INDEXED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint
#define glCopyTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint
#define glCopyTexSubImage2D_INDEX 26
#define glCopyTexSubImage2D_RETURN void
#define glCopyTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, x, y, width, height
#define glCopyTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height
#define glCopyTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei
#define glCopyTexSubImage2D_INDEXED INDEXED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei
#define glCopyTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei
#define glCullFace_INDEX 27
#define glCullFace_RETURN void
#define glCullFace_ARG_NAMES mode
#define glCullFace_ARG_EXPAND GLenum mode
#define glCullFace_PACKED PACKED_void_GLenum
#define glCullFace_INDEXED INDEXED_void_GLenum
#define glCullFace_FORMAT FORMAT_void_GLenum
#define glDeleteBuffers_INDEX 28
#define glDeleteBuffers_RETURN void
#define glDeleteBuffers_ARG_NAMES n, buffers
#define glDeleteBuffers_ARG_EXPAND GLsizei n, const GLuint * buffers
#define glDeleteBuffers_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteBuffers_INDEXED INDEXED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteBuffers_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDeleteTextures_INDEX 29
#define glDeleteTextures_RETURN void
#define glDeleteTextures_ARG_NAMES n, textures
#define glDeleteTextures_ARG_EXPAND GLsizei n, const GLuint * textures
#define glDeleteTextures_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteTextures_INDEXED INDEXED_void_GLsizei_const_GLuint___GENPT__
#define glDeleteTextures_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define glDepthFunc_INDEX 30
#define glDepthFunc_RETURN void
#define glDepthFunc_ARG_NAMES func
#define glDepthFunc_ARG_EXPAND GLenum func
#define glDepthFunc_PACKED PACKED_void_GLenum
#define glDepthFunc_INDEXED INDEXED_void_GLenum
#define glDepthFunc_FORMAT FORMAT_void_GLenum
#define glDepthMask_INDEX 31
#define glDepthMask_RETURN void
#define glDepthMask_ARG_NAMES flag
#define glDepthMask_ARG_EXPAND GLboolean flag
#define glDepthMask_PACKED PACKED_void_GLboolean
#define glDepthMask_INDEXED INDEXED_void_GLboolean
#define glDepthMask_FORMAT FORMAT_void_GLboolean
#define glDepthRangef_INDEX 32
#define glDepthRangef_RETURN void
#define glDepthRangef_ARG_NAMES near, far
#define glDepthRangef_ARG_EXPAND GLclampf near, GLclampf far
#define glDepthRangef_PACKED PACKED_void_GLclampf_GLclampf
#define glDepthRangef_INDEXED INDEXED_void_GLclampf_GLclampf
#define glDepthRangef_FORMAT FORMAT_void_GLclampf_GLclampf
#define glDepthRangex_INDEX 33
#define glDepthRangex_RETURN void
#define glDepthRangex_ARG_NAMES near, far
#define glDepthRangex_ARG_EXPAND GLclampx near, GLclampx far
#define glDepthRangex_PACKED PACKED_void_GLclampx_GLclampx
#define glDepthRangex_INDEXED INDEXED_void_GLclampx_GLclampx
#define glDepthRangex_FORMAT FORMAT_void_GLclampx_GLclampx
#define glDisable_INDEX 34
#define glDisable_RETURN void
#define glDisable_ARG_NAMES cap
#define glDisable_ARG_EXPAND GLenum cap
#define glDisable_PACKED PACKED_void_GLenum
#define glDisable_INDEXED INDEXED_void_GLenum
#define glDisable_FORMAT FORMAT_void_GLenum
#define glDisableClientState_INDEX 35
#define glDisableClientState_RETURN void
#define glDisableClientState_ARG_NAMES array
#define glDisableClientState_ARG_EXPAND GLenum array
#define glDisableClientState_PACKED PACKED_void_GLenum
#define glDisableClientState_INDEXED INDEXED_void_GLenum
#define glDisableClientState_FORMAT FORMAT_void_GLenum
#define glDrawArrays_INDEX 36
#define glDrawArrays_RETURN void
#define glDrawArrays_ARG_NAMES mode, first, count
#define glDrawArrays_ARG_EXPAND GLenum mode, GLint first, GLsizei count
#define glDrawArrays_PACKED PACKED_void_GLenum_GLint_GLsizei
#define glDrawArrays_INDEXED INDEXED_void_GLenum_GLint_GLsizei
#define glDrawArrays_FORMAT FORMAT_void_GLenum_GLint_GLsizei
#define glDrawElements_INDEX 37
#define glDrawElements_RETURN void
#define glDrawElements_ARG_NAMES mode, count, type, indices
#define glDrawElements_ARG_EXPAND GLenum mode, GLsizei count, GLenum type, const GLvoid * indices
#define glDrawElements_PACKED PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__
#define glDrawElements_INDEXED INDEXED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__
#define glDrawElements_FORMAT FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__
#define glEnable_INDEX 38
#define glEnable_RETURN void
#define glEnable_ARG_NAMES cap
#define glEnable_ARG_EXPAND GLenum cap
#define glEnable_PACKED PACKED_void_GLenum
#define glEnable_INDEXED INDEXED_void_GLenum
#define glEnable_FORMAT FORMAT_void_GLenum
#define glEnableClientState_INDEX 39
#define glEnableClientState_RETURN void
#define glEnableClientState_ARG_NAMES array
#define glEnableClientState_ARG_EXPAND GLenum array
#define glEnableClientState_PACKED PACKED_void_GLenum
#define glEnableClientState_INDEXED INDEXED_void_GLenum
#define glEnableClientState_FORMAT FORMAT_void_GLenum
#define glFinish_INDEX 40
#define glFinish_RETURN void
#define glFinish_ARG_NAMES 
#define glFinish_ARG_EXPAND 
#define glFinish_PACKED PACKED_void
#define glFinish_INDEXED INDEXED_void
#define glFinish_FORMAT FORMAT_void
#define glFlush_INDEX 41
#define glFlush_RETURN void
#define glFlush_ARG_NAMES 
#define glFlush_ARG_EXPAND 
#define glFlush_PACKED PACKED_void
#define glFlush_INDEXED INDEXED_void
#define glFlush_FORMAT FORMAT_void
#define glFogf_INDEX 42
#define glFogf_RETURN void
#define glFogf_ARG_NAMES pname, param
#define glFogf_ARG_EXPAND GLenum pname, GLfloat param
#define glFogf_PACKED PACKED_void_GLenum_GLfloat
#define glFogf_INDEXED INDEXED_void_GLenum_GLfloat
#define glFogf_FORMAT FORMAT_void_GLenum_GLfloat
#define glFogfv_INDEX 43
#define glFogfv_RETURN void
#define glFogfv_ARG_NAMES pname, params
#define glFogfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define glFogfv_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define glFogfv_INDEXED INDEXED_void_GLenum_const_GLfloat___GENPT__
#define glFogfv_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define glFogx_INDEX 44
#define glFogx_RETURN void
#define glFogx_ARG_NAMES pname, param
#define glFogx_ARG_EXPAND GLenum pname, GLfixed param
#define glFogx_PACKED PACKED_void_GLenum_GLfixed
#define glFogx_INDEXED INDEXED_void_GLenum_GLfixed
#define glFogx_FORMAT FORMAT_void_GLenum_GLfixed
#define glFogxv_INDEX 45
#define glFogxv_RETURN void
#define glFogxv_ARG_NAMES pname, params
#define glFogxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define glFogxv_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define glFogxv_INDEXED INDEXED_void_GLenum_const_GLfixed___GENPT__
#define glFogxv_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define glFrontFace_INDEX 46
#define glFrontFace_RETURN void
#define glFrontFace_ARG_NAMES mode
#define glFrontFace_ARG_EXPAND GLenum mode
#define glFrontFace_PACKED PACKED_void_GLenum
#define glFrontFace_INDEXED INDEXED_void_GLenum
#define glFrontFace_FORMAT FORMAT_void_GLenum
#define glFrustumf_INDEX 47
#define glFrustumf_RETURN void
#define glFrustumf_ARG_NAMES left, right, bottom, top, near, far
#define glFrustumf_ARG_EXPAND GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far
#define glFrustumf_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define glFrustumf_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define glFrustumf_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define glFrustumx_INDEX 48
#define glFrustumx_RETURN void
#define glFrustumx_ARG_NAMES left, right, bottom, top, near, far
#define glFrustumx_ARG_EXPAND GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far
#define glFrustumx_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define glFrustumx_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define glFrustumx_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define glGenBuffers_INDEX 49
#define glGenBuffers_RETURN void
#define glGenBuffers_ARG_NAMES n, buffers
#define glGenBuffers_ARG_EXPAND GLsizei n, GLuint * buffers
#define glGenBuffers_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenBuffers_INDEXED INDEXED_void_GLsizei_GLuint___GENPT__
#define glGenBuffers_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGenTextures_INDEX 50
#define glGenTextures_RETURN void
#define glGenTextures_ARG_NAMES n, textures
#define glGenTextures_ARG_EXPAND GLsizei n, GLuint * textures
#define glGenTextures_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define glGenTextures_INDEXED INDEXED_void_GLsizei_GLuint___GENPT__
#define glGenTextures_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define glGetBooleanv_INDEX 51
#define glGetBooleanv_RETURN void
#define glGetBooleanv_ARG_NAMES pname, params
#define glGetBooleanv_ARG_EXPAND GLenum pname, GLboolean * params
#define glGetBooleanv_PACKED PACKED_void_GLenum_GLboolean___GENPT__
#define glGetBooleanv_INDEXED INDEXED_void_GLenum_GLboolean___GENPT__
#define glGetBooleanv_FORMAT FORMAT_void_GLenum_GLboolean___GENPT__
#define glGetBufferParameteriv_INDEX 52
#define glGetBufferParameteriv_RETURN void
#define glGetBufferParameteriv_ARG_NAMES target, pname, params
#define glGetBufferParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetBufferParameteriv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define glGetBufferParameteriv_INDEXED INDEXED_void_GLenum_GLenum_GLint___GENPT__
#define glGetBufferParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define glGetClipPlanef_INDEX 53
#define glGetClipPlanef_RETURN void
#define glGetClipPlanef_ARG_NAMES plane, equation
#define glGetClipPlanef_ARG_EXPAND GLenum plane, GLfloat * equation
#define glGetClipPlanef_PACKED PACKED_void_GLenum_GLfloat___GENPT__
#define glGetClipPlanef_INDEXED INDEXED_void_GLenum_GLfloat___GENPT__
#define glGetClipPlanef_FORMAT FORMAT_void_GLenum_GLfloat___GENPT__
#define glGetClipPlanex_INDEX 54
#define glGetClipPlanex_RETURN void
#define glGetClipPlanex_ARG_NAMES plane, equation
#define glGetClipPlanex_ARG_EXPAND GLenum plane, GLfixed * equation
#define glGetClipPlanex_PACKED PACKED_void_GLenum_GLfixed___GENPT__
#define glGetClipPlanex_INDEXED INDEXED_void_GLenum_GLfixed___GENPT__
#define glGetClipPlanex_FORMAT FORMAT_void_GLenum_GLfixed___GENPT__
#define glGetError_INDEX 55
#define glGetError_RETURN GLenum
#define glGetError_ARG_NAMES 
#define glGetError_ARG_EXPAND 
#define glGetError_PACKED PACKED_GLenum
#define glGetError_INDEXED INDEXED_GLenum
#define glGetError_FORMAT FORMAT_GLenum
#define glGetFixedv_INDEX 56
#define glGetFixedv_RETURN void
#define glGetFixedv_ARG_NAMES pname, params
#define glGetFixedv_ARG_EXPAND GLenum pname, GLfixed * params
#define glGetFixedv_PACKED PACKED_void_GLenum_GLfixed___GENPT__
#define glGetFixedv_INDEXED INDEXED_void_GLenum_GLfixed___GENPT__
#define glGetFixedv_FORMAT FORMAT_void_GLenum_GLfixed___GENPT__
#define glGetFloatv_INDEX 57
#define glGetFloatv_RETURN void
#define glGetFloatv_ARG_NAMES pname, params
#define glGetFloatv_ARG_EXPAND GLenum pname, GLfloat * params
#define glGetFloatv_PACKED PACKED_void_GLenum_GLfloat___GENPT__
#define glGetFloatv_INDEXED INDEXED_void_GLenum_GLfloat___GENPT__
#define glGetFloatv_FORMAT FORMAT_void_GLenum_GLfloat___GENPT__
#define glGetIntegerv_INDEX 58
#define glGetIntegerv_RETURN void
#define glGetIntegerv_ARG_NAMES pname, params
#define glGetIntegerv_ARG_EXPAND GLenum pname, GLint * params
#define glGetIntegerv_PACKED PACKED_void_GLenum_GLint___GENPT__
#define glGetIntegerv_INDEXED INDEXED_void_GLenum_GLint___GENPT__
#define glGetIntegerv_FORMAT FORMAT_void_GLenum_GLint___GENPT__
#define glGetLightfv_INDEX 59
#define glGetLightfv_RETURN void
#define glGetLightfv_ARG_NAMES light, pname, params
#define glGetLightfv_ARG_EXPAND GLenum light, GLenum pname, GLfloat * params
#define glGetLightfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetLightfv_INDEXED INDEXED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetLightfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetLightxv_INDEX 60
#define glGetLightxv_RETURN void
#define glGetLightxv_ARG_NAMES light, pname, params
#define glGetLightxv_ARG_EXPAND GLenum light, GLenum pname, GLfixed * params
#define glGetLightxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetLightxv_INDEXED INDEXED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetLightxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetMaterialfv_INDEX 61
#define glGetMaterialfv_RETURN void
#define glGetMaterialfv_ARG_NAMES face, pname, params
#define glGetMaterialfv_ARG_EXPAND GLenum face, GLenum pname, GLfloat * params
#define glGetMaterialfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetMaterialfv_INDEXED INDEXED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetMaterialfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetMaterialxv_INDEX 62
#define glGetMaterialxv_RETURN void
#define glGetMaterialxv_ARG_NAMES face, pname, params
#define glGetMaterialxv_ARG_EXPAND GLenum face, GLenum pname, GLfixed * params
#define glGetMaterialxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetMaterialxv_INDEXED INDEXED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetMaterialxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetPointerv_INDEX 63
#define glGetPointerv_RETURN void
#define glGetPointerv_ARG_NAMES pname, params
#define glGetPointerv_ARG_EXPAND GLenum pname, GLvoid ** params
#define glGetPointerv_PACKED PACKED_void_GLenum_GLvoid___GENPT____GENPT__
#define glGetPointerv_INDEXED INDEXED_void_GLenum_GLvoid___GENPT____GENPT__
#define glGetPointerv_FORMAT FORMAT_void_GLenum_GLvoid___GENPT____GENPT__
#define glGetString_INDEX 64
#define glGetString_RETURN const GLubyte *
#define glGetString_ARG_NAMES name
#define glGetString_ARG_EXPAND GLenum name
#define glGetString_PACKED PACKED_const_GLubyte___GENPT___GLenum
#define glGetString_INDEXED INDEXED_const_GLubyte___GENPT___GLenum
#define glGetString_FORMAT FORMAT_const_GLubyte___GENPT___GLenum
#define glGetTexEnvfv_INDEX 65
#define glGetTexEnvfv_RETURN void
#define glGetTexEnvfv_ARG_NAMES target, pname, params
#define glGetTexEnvfv_ARG_EXPAND GLenum target, GLenum pname, GLfloat * params
#define glGetTexEnvfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexEnvfv_INDEXED INDEXED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexEnvfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexEnviv_INDEX 66
#define glGetTexEnviv_RETURN void
#define glGetTexEnviv_ARG_NAMES target, pname, params
#define glGetTexEnviv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetTexEnviv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexEnviv_INDEXED INDEXED_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexEnviv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexEnvxv_INDEX 67
#define glGetTexEnvxv_RETURN void
#define glGetTexEnvxv_ARG_NAMES target, pname, params
#define glGetTexEnvxv_ARG_EXPAND GLenum target, GLenum pname, GLfixed * params
#define glGetTexEnvxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetTexEnvxv_INDEXED INDEXED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetTexEnvxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetTexParameterfv_INDEX 68
#define glGetTexParameterfv_RETURN void
#define glGetTexParameterfv_ARG_NAMES target, pname, params
#define glGetTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, GLfloat * params
#define glGetTexParameterfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexParameterfv_INDEXED INDEXED_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexParameterfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define glGetTexParameteriv_INDEX 69
#define glGetTexParameteriv_RETURN void
#define glGetTexParameteriv_ARG_NAMES target, pname, params
#define glGetTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetTexParameteriv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexParameteriv_INDEXED INDEXED_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define glGetTexParameterxv_INDEX 70
#define glGetTexParameterxv_RETURN void
#define glGetTexParameterxv_ARG_NAMES target, pname, params
#define glGetTexParameterxv_ARG_EXPAND GLenum target, GLenum pname, GLfixed * params
#define glGetTexParameterxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetTexParameterxv_INDEXED INDEXED_void_GLenum_GLenum_GLfixed___GENPT__
#define glGetTexParameterxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define glHint_INDEX 71
#define glHint_RETURN void
#define glHint_ARG_NAMES target, mode
#define glHint_ARG_EXPAND GLenum target, GLenum mode
#define glHint_PACKED PACKED_void_GLenum_GLenum
#define glHint_INDEXED INDEXED_void_GLenum_GLenum
#define glHint_FORMAT FORMAT_void_GLenum_GLenum
#define glIsBuffer_INDEX 72
#define glIsBuffer_RETURN GLboolean
#define glIsBuffer_ARG_NAMES buffer
#define glIsBuffer_ARG_EXPAND GLuint buffer
#define glIsBuffer_PACKED PACKED_GLboolean_GLuint
#define glIsBuffer_INDEXED INDEXED_GLboolean_GLuint
#define glIsBuffer_FORMAT FORMAT_GLboolean_GLuint
#define glIsEnabled_INDEX 73
#define glIsEnabled_RETURN GLboolean
#define glIsEnabled_ARG_NAMES cap
#define glIsEnabled_ARG_EXPAND GLenum cap
#define glIsEnabled_PACKED PACKED_GLboolean_GLenum
#define glIsEnabled_INDEXED INDEXED_GLboolean_GLenum
#define glIsEnabled_FORMAT FORMAT_GLboolean_GLenum
#define glIsTexture_INDEX 74
#define glIsTexture_RETURN GLboolean
#define glIsTexture_ARG_NAMES texture
#define glIsTexture_ARG_EXPAND GLuint texture
#define glIsTexture_PACKED PACKED_GLboolean_GLuint
#define glIsTexture_INDEXED INDEXED_GLboolean_GLuint
#define glIsTexture_FORMAT FORMAT_GLboolean_GLuint
#define glLightModelf_INDEX 75
#define glLightModelf_RETURN void
#define glLightModelf_ARG_NAMES pname, param
#define glLightModelf_ARG_EXPAND GLenum pname, GLfloat param
#define glLightModelf_PACKED PACKED_void_GLenum_GLfloat
#define glLightModelf_INDEXED INDEXED_void_GLenum_GLfloat
#define glLightModelf_FORMAT FORMAT_void_GLenum_GLfloat
#define glLightModelfv_INDEX 76
#define glLightModelfv_RETURN void
#define glLightModelfv_ARG_NAMES pname, params
#define glLightModelfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define glLightModelfv_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define glLightModelfv_INDEXED INDEXED_void_GLenum_const_GLfloat___GENPT__
#define glLightModelfv_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define glLightModelx_INDEX 77
#define glLightModelx_RETURN void
#define glLightModelx_ARG_NAMES pname, param
#define glLightModelx_ARG_EXPAND GLenum pname, GLfixed param
#define glLightModelx_PACKED PACKED_void_GLenum_GLfixed
#define glLightModelx_INDEXED INDEXED_void_GLenum_GLfixed
#define glLightModelx_FORMAT FORMAT_void_GLenum_GLfixed
#define glLightModelxv_INDEX 78
#define glLightModelxv_RETURN void
#define glLightModelxv_ARG_NAMES pname, params
#define glLightModelxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define glLightModelxv_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define glLightModelxv_INDEXED INDEXED_void_GLenum_const_GLfixed___GENPT__
#define glLightModelxv_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define glLightf_INDEX 79
#define glLightf_RETURN void
#define glLightf_ARG_NAMES light, pname, param
#define glLightf_ARG_EXPAND GLenum light, GLenum pname, GLfloat param
#define glLightf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define glLightf_INDEXED INDEXED_void_GLenum_GLenum_GLfloat
#define glLightf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define glLightfv_INDEX 80
#define glLightfv_RETURN void
#define glLightfv_ARG_NAMES light, pname, params
#define glLightfv_ARG_EXPAND GLenum light, GLenum pname, const GLfloat * params
#define glLightfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glLightfv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glLightfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glLightx_INDEX 81
#define glLightx_RETURN void
#define glLightx_ARG_NAMES light, pname, param
#define glLightx_ARG_EXPAND GLenum light, GLenum pname, GLfixed param
#define glLightx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define glLightx_INDEXED INDEXED_void_GLenum_GLenum_GLfixed
#define glLightx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define glLightxv_INDEX 82
#define glLightxv_RETURN void
#define glLightxv_ARG_NAMES light, pname, params
#define glLightxv_ARG_EXPAND GLenum light, GLenum pname, const GLfixed * params
#define glLightxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glLightxv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glLightxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glLineWidth_INDEX 83
#define glLineWidth_RETURN void
#define glLineWidth_ARG_NAMES width
#define glLineWidth_ARG_EXPAND GLfloat width
#define glLineWidth_PACKED PACKED_void_GLfloat
#define glLineWidth_INDEXED INDEXED_void_GLfloat
#define glLineWidth_FORMAT FORMAT_void_GLfloat
#define glLineWidthx_INDEX 84
#define glLineWidthx_RETURN void
#define glLineWidthx_ARG_NAMES width
#define glLineWidthx_ARG_EXPAND GLfixed width
#define glLineWidthx_PACKED PACKED_void_GLfixed
#define glLineWidthx_INDEXED INDEXED_void_GLfixed
#define glLineWidthx_FORMAT FORMAT_void_GLfixed
#define glLoadIdentity_INDEX 85
#define glLoadIdentity_RETURN void
#define glLoadIdentity_ARG_NAMES 
#define glLoadIdentity_ARG_EXPAND 
#define glLoadIdentity_PACKED PACKED_void
#define glLoadIdentity_INDEXED INDEXED_void
#define glLoadIdentity_FORMAT FORMAT_void
#define glLoadMatrixf_INDEX 86
#define glLoadMatrixf_RETURN void
#define glLoadMatrixf_ARG_NAMES m
#define glLoadMatrixf_ARG_EXPAND const GLfloat * m
#define glLoadMatrixf_PACKED PACKED_void_const_GLfloat___GENPT__
#define glLoadMatrixf_INDEXED INDEXED_void_const_GLfloat___GENPT__
#define glLoadMatrixf_FORMAT FORMAT_void_const_GLfloat___GENPT__
#define glLoadMatrixx_INDEX 87
#define glLoadMatrixx_RETURN void
#define glLoadMatrixx_ARG_NAMES m
#define glLoadMatrixx_ARG_EXPAND const GLfixed * m
#define glLoadMatrixx_PACKED PACKED_void_const_GLfixed___GENPT__
#define glLoadMatrixx_INDEXED INDEXED_void_const_GLfixed___GENPT__
#define glLoadMatrixx_FORMAT FORMAT_void_const_GLfixed___GENPT__
#define glLogicOp_INDEX 88
#define glLogicOp_RETURN void
#define glLogicOp_ARG_NAMES opcode
#define glLogicOp_ARG_EXPAND GLenum opcode
#define glLogicOp_PACKED PACKED_void_GLenum
#define glLogicOp_INDEXED INDEXED_void_GLenum
#define glLogicOp_FORMAT FORMAT_void_GLenum
#define glMaterialf_INDEX 89
#define glMaterialf_RETURN void
#define glMaterialf_ARG_NAMES face, pname, param
#define glMaterialf_ARG_EXPAND GLenum face, GLenum pname, GLfloat param
#define glMaterialf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define glMaterialf_INDEXED INDEXED_void_GLenum_GLenum_GLfloat
#define glMaterialf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define glMaterialfv_INDEX 90
#define glMaterialfv_RETURN void
#define glMaterialfv_ARG_NAMES face, pname, params
#define glMaterialfv_ARG_EXPAND GLenum face, GLenum pname, const GLfloat * params
#define glMaterialfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glMaterialfv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glMaterialfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glMaterialx_INDEX 91
#define glMaterialx_RETURN void
#define glMaterialx_ARG_NAMES face, pname, param
#define glMaterialx_ARG_EXPAND GLenum face, GLenum pname, GLfixed param
#define glMaterialx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define glMaterialx_INDEXED INDEXED_void_GLenum_GLenum_GLfixed
#define glMaterialx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define glMaterialxv_INDEX 92
#define glMaterialxv_RETURN void
#define glMaterialxv_ARG_NAMES face, pname, params
#define glMaterialxv_ARG_EXPAND GLenum face, GLenum pname, const GLfixed * params
#define glMaterialxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glMaterialxv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glMaterialxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glMatrixMode_INDEX 93
#define glMatrixMode_RETURN void
#define glMatrixMode_ARG_NAMES mode
#define glMatrixMode_ARG_EXPAND GLenum mode
#define glMatrixMode_PACKED PACKED_void_GLenum
#define glMatrixMode_INDEXED INDEXED_void_GLenum
#define glMatrixMode_FORMAT FORMAT_void_GLenum
#define glMultMatrixf_INDEX 94
#define glMultMatrixf_RETURN void
#define glMultMatrixf_ARG_NAMES m
#define glMultMatrixf_ARG_EXPAND const GLfloat * m
#define glMultMatrixf_PACKED PACKED_void_const_GLfloat___GENPT__
#define glMultMatrixf_INDEXED INDEXED_void_const_GLfloat___GENPT__
#define glMultMatrixf_FORMAT FORMAT_void_const_GLfloat___GENPT__
#define glMultMatrixx_INDEX 95
#define glMultMatrixx_RETURN void
#define glMultMatrixx_ARG_NAMES m
#define glMultMatrixx_ARG_EXPAND const GLfixed * m
#define glMultMatrixx_PACKED PACKED_void_const_GLfixed___GENPT__
#define glMultMatrixx_INDEXED INDEXED_void_const_GLfixed___GENPT__
#define glMultMatrixx_FORMAT FORMAT_void_const_GLfixed___GENPT__
#define glMultiTexCoord4f_INDEX 96
#define glMultiTexCoord4f_RETURN void
#define glMultiTexCoord4f_ARG_NAMES target, s, t, r, q
#define glMultiTexCoord4f_ARG_EXPAND GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q
#define glMultiTexCoord4f_PACKED PACKED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat
#define glMultiTexCoord4f_INDEXED INDEXED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat
#define glMultiTexCoord4f_FORMAT FORMAT_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat
#define glMultiTexCoord4x_INDEX 97
#define glMultiTexCoord4x_RETURN void
#define glMultiTexCoord4x_ARG_NAMES target, s, t, r, q
#define glMultiTexCoord4x_ARG_EXPAND GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q
#define glMultiTexCoord4x_PACKED PACKED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed
#define glMultiTexCoord4x_INDEXED INDEXED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed
#define glMultiTexCoord4x_FORMAT FORMAT_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed
#define glNormal3f_INDEX 98
#define glNormal3f_RETURN void
#define glNormal3f_ARG_NAMES nx, ny, nz
#define glNormal3f_ARG_EXPAND GLfloat nx, GLfloat ny, GLfloat nz
#define glNormal3f_PACKED PACKED_void_GLfloat_GLfloat_GLfloat
#define glNormal3f_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat
#define glNormal3f_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat
#define glNormal3x_INDEX 99
#define glNormal3x_RETURN void
#define glNormal3x_ARG_NAMES nx, ny, nz
#define glNormal3x_ARG_EXPAND GLfixed nx, GLfixed ny, GLfixed nz
#define glNormal3x_PACKED PACKED_void_GLfixed_GLfixed_GLfixed
#define glNormal3x_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed
#define glNormal3x_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed
#define glNormalPointer_INDEX 100
#define glNormalPointer_RETURN void
#define glNormalPointer_ARG_NAMES type, stride, pointer
#define glNormalPointer_ARG_EXPAND GLenum type, GLsizei stride, const GLvoid * pointer
#define glNormalPointer_PACKED PACKED_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define glNormalPointer_INDEXED INDEXED_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define glNormalPointer_FORMAT FORMAT_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define glOrthof_INDEX 101
#define glOrthof_RETURN void
#define glOrthof_ARG_NAMES left, right, bottom, top, near, far
#define glOrthof_ARG_EXPAND GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far
#define glOrthof_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define glOrthof_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define glOrthof_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define glOrthox_INDEX 102
#define glOrthox_RETURN void
#define glOrthox_ARG_NAMES left, right, bottom, top, near, far
#define glOrthox_ARG_EXPAND GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far
#define glOrthox_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define glOrthox_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define glOrthox_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define glPixelStorei_INDEX 103
#define glPixelStorei_RETURN void
#define glPixelStorei_ARG_NAMES pname, param
#define glPixelStorei_ARG_EXPAND GLenum pname, GLint param
#define glPixelStorei_PACKED PACKED_void_GLenum_GLint
#define glPixelStorei_INDEXED INDEXED_void_GLenum_GLint
#define glPixelStorei_FORMAT FORMAT_void_GLenum_GLint
#define glPointParameterf_INDEX 104
#define glPointParameterf_RETURN void
#define glPointParameterf_ARG_NAMES pname, param
#define glPointParameterf_ARG_EXPAND GLenum pname, GLfloat param
#define glPointParameterf_PACKED PACKED_void_GLenum_GLfloat
#define glPointParameterf_INDEXED INDEXED_void_GLenum_GLfloat
#define glPointParameterf_FORMAT FORMAT_void_GLenum_GLfloat
#define glPointParameterfv_INDEX 105
#define glPointParameterfv_RETURN void
#define glPointParameterfv_ARG_NAMES pname, params
#define glPointParameterfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define glPointParameterfv_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define glPointParameterfv_INDEXED INDEXED_void_GLenum_const_GLfloat___GENPT__
#define glPointParameterfv_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define glPointParameterx_INDEX 106
#define glPointParameterx_RETURN void
#define glPointParameterx_ARG_NAMES pname, param
#define glPointParameterx_ARG_EXPAND GLenum pname, GLfixed param
#define glPointParameterx_PACKED PACKED_void_GLenum_GLfixed
#define glPointParameterx_INDEXED INDEXED_void_GLenum_GLfixed
#define glPointParameterx_FORMAT FORMAT_void_GLenum_GLfixed
#define glPointParameterxv_INDEX 107
#define glPointParameterxv_RETURN void
#define glPointParameterxv_ARG_NAMES pname, params
#define glPointParameterxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define glPointParameterxv_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define glPointParameterxv_INDEXED INDEXED_void_GLenum_const_GLfixed___GENPT__
#define glPointParameterxv_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define glPointSize_INDEX 108
#define glPointSize_RETURN void
#define glPointSize_ARG_NAMES size
#define glPointSize_ARG_EXPAND GLfloat size
#define glPointSize_PACKED PACKED_void_GLfloat
#define glPointSize_INDEXED INDEXED_void_GLfloat
#define glPointSize_FORMAT FORMAT_void_GLfloat
#define glPointSizePointerOES_INDEX 109
#define glPointSizePointerOES_RETURN void
#define glPointSizePointerOES_ARG_NAMES type, stride, pointer
#define glPointSizePointerOES_ARG_EXPAND GLenum type, GLsizei stride, const GLvoid * pointer
#define glPointSizePointerOES_PACKED PACKED_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define glPointSizePointerOES_INDEXED INDEXED_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define glPointSizePointerOES_FORMAT FORMAT_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define glPointSizex_INDEX 110
#define glPointSizex_RETURN void
#define glPointSizex_ARG_NAMES size
#define glPointSizex_ARG_EXPAND GLfixed size
#define glPointSizex_PACKED PACKED_void_GLfixed
#define glPointSizex_INDEXED INDEXED_void_GLfixed
#define glPointSizex_FORMAT FORMAT_void_GLfixed
#define glPolygonOffset_INDEX 111
#define glPolygonOffset_RETURN void
#define glPolygonOffset_ARG_NAMES factor, units
#define glPolygonOffset_ARG_EXPAND GLfloat factor, GLfloat units
#define glPolygonOffset_PACKED PACKED_void_GLfloat_GLfloat
#define glPolygonOffset_INDEXED INDEXED_void_GLfloat_GLfloat
#define glPolygonOffset_FORMAT FORMAT_void_GLfloat_GLfloat
#define glPolygonOffsetx_INDEX 112
#define glPolygonOffsetx_RETURN void
#define glPolygonOffsetx_ARG_NAMES factor, units
#define glPolygonOffsetx_ARG_EXPAND GLfixed factor, GLfixed units
#define glPolygonOffsetx_PACKED PACKED_void_GLfixed_GLfixed
#define glPolygonOffsetx_INDEXED INDEXED_void_GLfixed_GLfixed
#define glPolygonOffsetx_FORMAT FORMAT_void_GLfixed_GLfixed
#define glPopMatrix_INDEX 113
#define glPopMatrix_RETURN void
#define glPopMatrix_ARG_NAMES 
#define glPopMatrix_ARG_EXPAND 
#define glPopMatrix_PACKED PACKED_void
#define glPopMatrix_INDEXED INDEXED_void
#define glPopMatrix_FORMAT FORMAT_void
#define glPushMatrix_INDEX 114
#define glPushMatrix_RETURN void
#define glPushMatrix_ARG_NAMES 
#define glPushMatrix_ARG_EXPAND 
#define glPushMatrix_PACKED PACKED_void
#define glPushMatrix_INDEXED INDEXED_void
#define glPushMatrix_FORMAT FORMAT_void
#define glReadPixels_INDEX 115
#define glReadPixels_RETURN void
#define glReadPixels_ARG_NAMES x, y, width, height, format, type, pixels
#define glReadPixels_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels
#define glReadPixels_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define glReadPixels_INDEXED INDEXED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define glReadPixels_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define glRotatef_INDEX 116
#define glRotatef_RETURN void
#define glRotatef_ARG_NAMES angle, x, y, z
#define glRotatef_ARG_EXPAND GLfloat angle, GLfloat x, GLfloat y, GLfloat z
#define glRotatef_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat
#define glRotatef_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat
#define glRotatef_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat
#define glRotatex_INDEX 117
#define glRotatex_RETURN void
#define glRotatex_ARG_NAMES angle, x, y, z
#define glRotatex_ARG_EXPAND GLfixed angle, GLfixed x, GLfixed y, GLfixed z
#define glRotatex_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed
#define glRotatex_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed
#define glRotatex_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed
#define glSampleCoverage_INDEX 118
#define glSampleCoverage_RETURN void
#define glSampleCoverage_ARG_NAMES value, invert
#define glSampleCoverage_ARG_EXPAND GLclampf value, GLboolean invert
#define glSampleCoverage_PACKED PACKED_void_GLclampf_GLboolean
#define glSampleCoverage_INDEXED INDEXED_void_GLclampf_GLboolean
#define glSampleCoverage_FORMAT FORMAT_void_GLclampf_GLboolean
#define glSampleCoveragex_INDEX 119
#define glSampleCoveragex_RETURN void
#define glSampleCoveragex_ARG_NAMES value, invert
#define glSampleCoveragex_ARG_EXPAND GLclampx value, GLboolean invert
#define glSampleCoveragex_PACKED PACKED_void_GLclampx_GLboolean
#define glSampleCoveragex_INDEXED INDEXED_void_GLclampx_GLboolean
#define glSampleCoveragex_FORMAT FORMAT_void_GLclampx_GLboolean
#define glScalef_INDEX 120
#define glScalef_RETURN void
#define glScalef_ARG_NAMES x, y, z
#define glScalef_ARG_EXPAND GLfloat x, GLfloat y, GLfloat z
#define glScalef_PACKED PACKED_void_GLfloat_GLfloat_GLfloat
#define glScalef_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat
#define glScalef_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat
#define glScalex_INDEX 121
#define glScalex_RETURN void
#define glScalex_ARG_NAMES x, y, z
#define glScalex_ARG_EXPAND GLfixed x, GLfixed y, GLfixed z
#define glScalex_PACKED PACKED_void_GLfixed_GLfixed_GLfixed
#define glScalex_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed
#define glScalex_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed
#define glScissor_INDEX 122
#define glScissor_RETURN void
#define glScissor_ARG_NAMES x, y, width, height
#define glScissor_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glScissor_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei
#define glScissor_INDEXED INDEXED_void_GLint_GLint_GLsizei_GLsizei
#define glScissor_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei
#define glShadeModel_INDEX 123
#define glShadeModel_RETURN void
#define glShadeModel_ARG_NAMES mode
#define glShadeModel_ARG_EXPAND GLenum mode
#define glShadeModel_PACKED PACKED_void_GLenum
#define glShadeModel_INDEXED INDEXED_void_GLenum
#define glShadeModel_FORMAT FORMAT_void_GLenum
#define glStencilFunc_INDEX 124
#define glStencilFunc_RETURN void
#define glStencilFunc_ARG_NAMES func, ref, mask
#define glStencilFunc_ARG_EXPAND GLenum func, GLint ref, GLuint mask
#define glStencilFunc_PACKED PACKED_void_GLenum_GLint_GLuint
#define glStencilFunc_INDEXED INDEXED_void_GLenum_GLint_GLuint
#define glStencilFunc_FORMAT FORMAT_void_GLenum_GLint_GLuint
#define glStencilMask_INDEX 125
#define glStencilMask_RETURN void
#define glStencilMask_ARG_NAMES mask
#define glStencilMask_ARG_EXPAND GLuint mask
#define glStencilMask_PACKED PACKED_void_GLuint
#define glStencilMask_INDEXED INDEXED_void_GLuint
#define glStencilMask_FORMAT FORMAT_void_GLuint
#define glStencilOp_INDEX 126
#define glStencilOp_RETURN void
#define glStencilOp_ARG_NAMES fail, zfail, zpass
#define glStencilOp_ARG_EXPAND GLenum fail, GLenum zfail, GLenum zpass
#define glStencilOp_PACKED PACKED_void_GLenum_GLenum_GLenum
#define glStencilOp_INDEXED INDEXED_void_GLenum_GLenum_GLenum
#define glStencilOp_FORMAT FORMAT_void_GLenum_GLenum_GLenum
#define glTexCoordPointer_INDEX 127
#define glTexCoordPointer_RETURN void
#define glTexCoordPointer_ARG_NAMES size, type, stride, pointer
#define glTexCoordPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define glTexCoordPointer_PACKED PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glTexCoordPointer_INDEXED INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glTexCoordPointer_FORMAT FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glTexEnvf_INDEX 128
#define glTexEnvf_RETURN void
#define glTexEnvf_ARG_NAMES target, pname, param
#define glTexEnvf_ARG_EXPAND GLenum target, GLenum pname, GLfloat param
#define glTexEnvf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define glTexEnvf_INDEXED INDEXED_void_GLenum_GLenum_GLfloat
#define glTexEnvf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define glTexEnvfv_INDEX 129
#define glTexEnvfv_RETURN void
#define glTexEnvfv_ARG_NAMES target, pname, params
#define glTexEnvfv_ARG_EXPAND GLenum target, GLenum pname, const GLfloat * params
#define glTexEnvfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexEnvfv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexEnvfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexEnvi_INDEX 130
#define glTexEnvi_RETURN void
#define glTexEnvi_ARG_NAMES target, pname, param
#define glTexEnvi_ARG_EXPAND GLenum target, GLenum pname, GLint param
#define glTexEnvi_PACKED PACKED_void_GLenum_GLenum_GLint
#define glTexEnvi_INDEXED INDEXED_void_GLenum_GLenum_GLint
#define glTexEnvi_FORMAT FORMAT_void_GLenum_GLenum_GLint
#define glTexEnviv_INDEX 131
#define glTexEnviv_RETURN void
#define glTexEnviv_ARG_NAMES target, pname, params
#define glTexEnviv_ARG_EXPAND GLenum target, GLenum pname, const GLint * params
#define glTexEnviv_PACKED PACKED_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexEnviv_INDEXED INDEXED_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexEnviv_FORMAT FORMAT_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexEnvx_INDEX 132
#define glTexEnvx_RETURN void
#define glTexEnvx_ARG_NAMES target, pname, param
#define glTexEnvx_ARG_EXPAND GLenum target, GLenum pname, GLfixed param
#define glTexEnvx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define glTexEnvx_INDEXED INDEXED_void_GLenum_GLenum_GLfixed
#define glTexEnvx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define glTexEnvxv_INDEX 133
#define glTexEnvxv_RETURN void
#define glTexEnvxv_ARG_NAMES target, pname, params
#define glTexEnvxv_ARG_EXPAND GLenum target, GLenum pname, const GLfixed * params
#define glTexEnvxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glTexEnvxv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glTexEnvxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glTexImage2D_INDEX 134
#define glTexImage2D_RETURN void
#define glTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, format, type, pixels
#define glTexImage2D_ARG_EXPAND GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels
#define glTexImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexImage2D_INDEXED INDEXED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexParameterf_INDEX 135
#define glTexParameterf_RETURN void
#define glTexParameterf_ARG_NAMES target, pname, param
#define glTexParameterf_ARG_EXPAND GLenum target, GLenum pname, GLfloat param
#define glTexParameterf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define glTexParameterf_INDEXED INDEXED_void_GLenum_GLenum_GLfloat
#define glTexParameterf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define glTexParameterfv_INDEX 136
#define glTexParameterfv_RETURN void
#define glTexParameterfv_ARG_NAMES target, pname, params
#define glTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, const GLfloat * params
#define glTexParameterfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexParameterfv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexParameterfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define glTexParameteri_INDEX 137
#define glTexParameteri_RETURN void
#define glTexParameteri_ARG_NAMES target, pname, param
#define glTexParameteri_ARG_EXPAND GLenum target, GLenum pname, GLint param
#define glTexParameteri_PACKED PACKED_void_GLenum_GLenum_GLint
#define glTexParameteri_INDEXED INDEXED_void_GLenum_GLenum_GLint
#define glTexParameteri_FORMAT FORMAT_void_GLenum_GLenum_GLint
#define glTexParameteriv_INDEX 138
#define glTexParameteriv_RETURN void
#define glTexParameteriv_ARG_NAMES target, pname, params
#define glTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, const GLint * params
#define glTexParameteriv_PACKED PACKED_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexParameteriv_INDEXED INDEXED_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexParameteriv_FORMAT FORMAT_void_GLenum_GLenum_const_GLint___GENPT__
#define glTexParameterx_INDEX 139
#define glTexParameterx_RETURN void
#define glTexParameterx_ARG_NAMES target, pname, param
#define glTexParameterx_ARG_EXPAND GLenum target, GLenum pname, GLfixed param
#define glTexParameterx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define glTexParameterx_INDEXED INDEXED_void_GLenum_GLenum_GLfixed
#define glTexParameterx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define glTexParameterxv_INDEX 140
#define glTexParameterxv_RETURN void
#define glTexParameterxv_ARG_NAMES target, pname, params
#define glTexParameterxv_ARG_EXPAND GLenum target, GLenum pname, const GLfixed * params
#define glTexParameterxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glTexParameterxv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glTexParameterxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define glTexSubImage2D_INDEX 141
#define glTexSubImage2D_RETURN void
#define glTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, type, pixels
#define glTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels
#define glTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexSubImage2D_INDEXED INDEXED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define glTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define glTranslatef_INDEX 142
#define glTranslatef_RETURN void
#define glTranslatef_ARG_NAMES x, y, z
#define glTranslatef_ARG_EXPAND GLfloat x, GLfloat y, GLfloat z
#define glTranslatef_PACKED PACKED_void_GLfloat_GLfloat_GLfloat
#define glTranslatef_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat
#define glTranslatef_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat
#define glTranslatex_INDEX 143
#define glTranslatex_RETURN void
#define glTranslatex_ARG_NAMES x, y, z
#define glTranslatex_ARG_EXPAND GLfixed x, GLfixed y, GLfixed z
#define glTranslatex_PACKED PACKED_void_GLfixed_GLfixed_GLfixed
#define glTranslatex_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed
#define glTranslatex_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed
#define glVertexPointer_INDEX 144
#define glVertexPointer_RETURN void
#define glVertexPointer_ARG_NAMES size, type, stride, pointer
#define glVertexPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define glVertexPointer_PACKED PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glVertexPointer_INDEXED INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glVertexPointer_FORMAT FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define glViewport_INDEX 145
#define glViewport_RETURN void
#define glViewport_ARG_NAMES x, y, width, height
#define glViewport_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define glViewport_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei
#define glViewport_INDEXED INDEXED_void_GLint_GLint_GLsizei_GLsizei
#define glViewport_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei
#define glXAssociateDMPbufferSGIX_INDEX 146
#define glXAssociateDMPbufferSGIX_RETURN Bool
#define glXAssociateDMPbufferSGIX_ARG_NAMES dpy, pbuffer, params, dmbuffer
#define glXAssociateDMPbufferSGIX_ARG_EXPAND Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer
#define glXAssociateDMPbufferSGIX_PACKED PACKED_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer
#define glXAssociateDMPbufferSGIX_INDEXED INDEXED_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer
#define glXAssociateDMPbufferSGIX_FORMAT FORMAT_Bool_Display___GENPT___GLXPbufferSGIX_DMparams___GENPT___DMbuffer
#define glXBindChannelToWindowSGIX_INDEX 147
#define glXBindChannelToWindowSGIX_RETURN int
#define glXBindChannelToWindowSGIX_ARG_NAMES display, screen, channel, window
#define glXBindChannelToWindowSGIX_ARG_EXPAND Display * display, int screen, int channel, Window window
#define glXBindChannelToWindowSGIX_PACKED PACKED_int_Display___GENPT___int_int_Window
#define glXBindChannelToWindowSGIX_INDEXED INDEXED_int_Display___GENPT___int_int_Window
#define glXBindChannelToWindowSGIX_FORMAT FORMAT_int_Display___GENPT___int_int_Window
#define glXBindHyperpipeSGIX_INDEX 148
#define glXBindHyperpipeSGIX_RETURN int
#define glXBindHyperpipeSGIX_ARG_NAMES dpy, hpId
#define glXBindHyperpipeSGIX_ARG_EXPAND Display * dpy, int hpId
#define glXBindHyperpipeSGIX_PACKED PACKED_int_Display___GENPT___int
#define glXBindHyperpipeSGIX_INDEXED INDEXED_int_Display___GENPT___int
#define glXBindHyperpipeSGIX_FORMAT FORMAT_int_Display___GENPT___int
#define glXBindSwapBarrierNV_INDEX 149
#define glXBindSwapBarrierNV_RETURN Bool
#define glXBindSwapBarrierNV_ARG_NAMES dpy, group, barrier
#define glXBindSwapBarrierNV_ARG_EXPAND Display * dpy, GLuint group, GLuint barrier
#define glXBindSwapBarrierNV_PACKED PACKED_Bool_Display___GENPT___GLuint_GLuint
#define glXBindSwapBarrierNV_INDEXED INDEXED_Bool_Display___GENPT___GLuint_GLuint
#define glXBindSwapBarrierNV_FORMAT FORMAT_Bool_Display___GENPT___GLuint_GLuint
#define glXBindSwapBarrierSGIX_INDEX 150
#define glXBindSwapBarrierSGIX_RETURN void
#define glXBindSwapBarrierSGIX_ARG_NAMES dpy, drawable, barrier
#define glXBindSwapBarrierSGIX_ARG_EXPAND Display * dpy, GLXDrawable drawable, int barrier
#define glXBindSwapBarrierSGIX_PACKED PACKED_void_Display___GENPT___GLXDrawable_int
#define glXBindSwapBarrierSGIX_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_int
#define glXBindSwapBarrierSGIX_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_int
#define glXBindTexImageEXT_INDEX 151
#define glXBindTexImageEXT_RETURN void
#define glXBindTexImageEXT_ARG_NAMES dpy, drawable, buffer, attrib_list
#define glXBindTexImageEXT_ARG_EXPAND Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list
#define glXBindTexImageEXT_PACKED PACKED_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__
#define glXBindTexImageEXT_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__
#define glXBindTexImageEXT_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_int_const_int___GENPT__
#define glXBindVideoCaptureDeviceNV_INDEX 152
#define glXBindVideoCaptureDeviceNV_RETURN int
#define glXBindVideoCaptureDeviceNV_ARG_NAMES dpy, video_capture_slot, device
#define glXBindVideoCaptureDeviceNV_ARG_EXPAND Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device
#define glXBindVideoCaptureDeviceNV_PACKED PACKED_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV
#define glXBindVideoCaptureDeviceNV_INDEXED INDEXED_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV
#define glXBindVideoCaptureDeviceNV_FORMAT FORMAT_int_Display___GENPT___unsigned_int_GLXVideoCaptureDeviceNV
#define glXBindVideoDeviceNV_INDEX 153
#define glXBindVideoDeviceNV_RETURN int
#define glXBindVideoDeviceNV_ARG_NAMES dpy, video_slot, video_device, attrib_list
#define glXBindVideoDeviceNV_ARG_EXPAND Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list
#define glXBindVideoDeviceNV_PACKED PACKED_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__
#define glXBindVideoDeviceNV_INDEXED INDEXED_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__
#define glXBindVideoDeviceNV_FORMAT FORMAT_int_Display___GENPT___unsigned_int_unsigned_int_const_int___GENPT__
#define glXBindVideoImageNV_INDEX 154
#define glXBindVideoImageNV_RETURN int
#define glXBindVideoImageNV_ARG_NAMES dpy, VideoDevice, pbuf, iVideoBuffer
#define glXBindVideoImageNV_ARG_EXPAND Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer
#define glXBindVideoImageNV_PACKED PACKED_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int
#define glXBindVideoImageNV_INDEXED INDEXED_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int
#define glXBindVideoImageNV_FORMAT FORMAT_int_Display___GENPT___GLXVideoDeviceNV_GLXPbuffer_int
#define glXChangeDrawableAttributes_INDEX 155
#define glXChangeDrawableAttributes_RETURN void
#define glXChangeDrawableAttributes_ARG_NAMES drawable
#define glXChangeDrawableAttributes_ARG_EXPAND uint32_t drawable
#define glXChangeDrawableAttributes_PACKED PACKED_void_uint32_t
#define glXChangeDrawableAttributes_INDEXED INDEXED_void_uint32_t
#define glXChangeDrawableAttributes_FORMAT FORMAT_void_uint32_t
#define glXChangeDrawableAttributesSGIX_INDEX 156
#define glXChangeDrawableAttributesSGIX_RETURN void
#define glXChangeDrawableAttributesSGIX_ARG_NAMES drawable
#define glXChangeDrawableAttributesSGIX_ARG_EXPAND uint32_t drawable
#define glXChangeDrawableAttributesSGIX_PACKED PACKED_void_uint32_t
#define glXChangeDrawableAttributesSGIX_INDEXED INDEXED_void_uint32_t
#define glXChangeDrawableAttributesSGIX_FORMAT FORMAT_void_uint32_t
#define glXChannelRectSGIX_INDEX 157
#define glXChannelRectSGIX_RETURN int
#define glXChannelRectSGIX_ARG_NAMES display, screen, channel, x, y, w, h
#define glXChannelRectSGIX_ARG_EXPAND Display * display, int screen, int channel, int x, int y, int w, int h
#define glXChannelRectSGIX_PACKED PACKED_int_Display___GENPT___int_int_int_int_int_int
#define glXChannelRectSGIX_INDEXED INDEXED_int_Display___GENPT___int_int_int_int_int_int
#define glXChannelRectSGIX_FORMAT FORMAT_int_Display___GENPT___int_int_int_int_int_int
#define glXChannelRectSyncSGIX_INDEX 158
#define glXChannelRectSyncSGIX_RETURN int
#define glXChannelRectSyncSGIX_ARG_NAMES display, screen, channel, synctype
#define glXChannelRectSyncSGIX_ARG_EXPAND Display * display, int screen, int channel, GLenum synctype
#define glXChannelRectSyncSGIX_PACKED PACKED_int_Display___GENPT___int_int_GLenum
#define glXChannelRectSyncSGIX_INDEXED INDEXED_int_Display___GENPT___int_int_GLenum
#define glXChannelRectSyncSGIX_FORMAT FORMAT_int_Display___GENPT___int_int_GLenum
#define glXChooseFBConfig_INDEX 159
#define glXChooseFBConfig_RETURN GLXFBConfig *
#define glXChooseFBConfig_ARG_NAMES dpy, screen, attrib_list, nelements
#define glXChooseFBConfig_ARG_EXPAND Display * dpy, int screen, const int * attrib_list, int * nelements
#define glXChooseFBConfig_PACKED PACKED_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__
#define glXChooseFBConfig_INDEXED INDEXED_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__
#define glXChooseFBConfig_FORMAT FORMAT_GLXFBConfig___GENPT___Display___GENPT___int_const_int___GENPT___int___GENPT__
#define glXChooseFBConfigSGIX_INDEX 160
#define glXChooseFBConfigSGIX_RETURN GLXFBConfigSGIX *
#define glXChooseFBConfigSGIX_ARG_NAMES dpy, screen, attrib_list, nelements
#define glXChooseFBConfigSGIX_ARG_EXPAND Display * dpy, int screen, int * attrib_list, int * nelements
#define glXChooseFBConfigSGIX_PACKED PACKED_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__
#define glXChooseFBConfigSGIX_INDEXED INDEXED_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__
#define glXChooseFBConfigSGIX_FORMAT FORMAT_GLXFBConfigSGIX___GENPT___Display___GENPT___int_int___GENPT___int___GENPT__
#define glXChooseVisual_INDEX 161
#define glXChooseVisual_RETURN XVisualInfo *
#define glXChooseVisual_ARG_NAMES dpy, screen, attribList
#define glXChooseVisual_ARG_EXPAND Display * dpy, int screen, int * attribList
#define glXChooseVisual_PACKED PACKED_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__
#define glXChooseVisual_INDEXED INDEXED_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__
#define glXChooseVisual_FORMAT FORMAT_XVisualInfo___GENPT___Display___GENPT___int_int___GENPT__
#define glXClientInfo_INDEX 162
#define glXClientInfo_RETURN void
#define glXClientInfo_ARG_NAMES 
#define glXClientInfo_ARG_EXPAND 
#define glXClientInfo_PACKED PACKED_void
#define glXClientInfo_INDEXED INDEXED_void
#define glXClientInfo_FORMAT FORMAT_void
#define glXCopyContext_INDEX 163
#define glXCopyContext_RETURN void
#define glXCopyContext_ARG_NAMES dpy, src, dst, mask
#define glXCopyContext_ARG_EXPAND Display * dpy, GLXContext src, GLXContext dst, unsigned long mask
#define glXCopyContext_PACKED PACKED_void_Display___GENPT___GLXContext_GLXContext_unsigned_long
#define glXCopyContext_INDEXED INDEXED_void_Display___GENPT___GLXContext_GLXContext_unsigned_long
#define glXCopyContext_FORMAT FORMAT_void_Display___GENPT___GLXContext_GLXContext_unsigned_long
#define glXCopyImageSubDataNV_INDEX 164
#define glXCopyImageSubDataNV_RETURN void
#define glXCopyImageSubDataNV_ARG_NAMES dpy, srcCtx, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstCtx, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth
#define glXCopyImageSubDataNV_ARG_EXPAND Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth
#define glXCopyImageSubDataNV_PACKED PACKED_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei
#define glXCopyImageSubDataNV_INDEXED INDEXED_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei
#define glXCopyImageSubDataNV_FORMAT FORMAT_void_Display___GENPT___GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLXContext_GLuint_GLenum_GLint_GLint_GLint_GLint_GLsizei_GLsizei_GLsizei
#define glXCopySubBufferMESA_INDEX 165
#define glXCopySubBufferMESA_RETURN void
#define glXCopySubBufferMESA_ARG_NAMES dpy, drawable, x, y, width, height
#define glXCopySubBufferMESA_ARG_EXPAND Display * dpy, GLXDrawable drawable, int x, int y, int width, int height
#define glXCopySubBufferMESA_PACKED PACKED_void_Display___GENPT___GLXDrawable_int_int_int_int
#define glXCopySubBufferMESA_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_int_int_int_int
#define glXCopySubBufferMESA_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_int_int_int_int
#define glXCreateContext_INDEX 166
#define glXCreateContext_RETURN GLXContext
#define glXCreateContext_ARG_NAMES dpy, vis, shareList, direct
#define glXCreateContext_ARG_EXPAND Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct
#define glXCreateContext_PACKED PACKED_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool
#define glXCreateContext_INDEXED INDEXED_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool
#define glXCreateContext_FORMAT FORMAT_GLXContext_Display___GENPT___XVisualInfo___GENPT___GLXContext_Bool
#define glXCreateContextAttribsARB_INDEX 167
#define glXCreateContextAttribsARB_RETURN GLXContext
#define glXCreateContextAttribsARB_ARG_NAMES dpy, config, share_context, direct, attrib_list
#define glXCreateContextAttribsARB_ARG_EXPAND Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list
#define glXCreateContextAttribsARB_PACKED PACKED_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__
#define glXCreateContextAttribsARB_INDEXED INDEXED_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__
#define glXCreateContextAttribsARB_FORMAT FORMAT_GLXContext_Display___GENPT___GLXFBConfig_GLXContext_Bool_const_int___GENPT__
#define glXCreateContextWithConfigSGIX_INDEX 168
#define glXCreateContextWithConfigSGIX_RETURN GLXContext
#define glXCreateContextWithConfigSGIX_ARG_NAMES dpy, config, render_type, share_list, direct
#define glXCreateContextWithConfigSGIX_ARG_EXPAND Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct
#define glXCreateContextWithConfigSGIX_PACKED PACKED_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool
#define glXCreateContextWithConfigSGIX_INDEXED INDEXED_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool
#define glXCreateContextWithConfigSGIX_FORMAT FORMAT_GLXContext_Display___GENPT___GLXFBConfigSGIX_int_GLXContext_Bool
#define glXCreateGLXPbufferSGIX_INDEX 169
#define glXCreateGLXPbufferSGIX_RETURN GLXPbufferSGIX
#define glXCreateGLXPbufferSGIX_ARG_NAMES dpy, config, width, height, attrib_list
#define glXCreateGLXPbufferSGIX_ARG_EXPAND Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list
#define glXCreateGLXPbufferSGIX_PACKED PACKED_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__
#define glXCreateGLXPbufferSGIX_INDEXED INDEXED_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__
#define glXCreateGLXPbufferSGIX_FORMAT FORMAT_GLXPbufferSGIX_Display___GENPT___GLXFBConfigSGIX_unsigned_int_unsigned_int_int___GENPT__
#define glXCreateGLXPixmap_INDEX 170
#define glXCreateGLXPixmap_RETURN GLXPixmap
#define glXCreateGLXPixmap_ARG_NAMES dpy, visual, pixmap
#define glXCreateGLXPixmap_ARG_EXPAND Display * dpy, XVisualInfo * visual, Pixmap pixmap
#define glXCreateGLXPixmap_PACKED PACKED_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap
#define glXCreateGLXPixmap_INDEXED INDEXED_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap
#define glXCreateGLXPixmap_FORMAT FORMAT_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap
#define glXCreateGLXPixmapMESA_INDEX 171
#define glXCreateGLXPixmapMESA_RETURN GLXPixmap
#define glXCreateGLXPixmapMESA_ARG_NAMES dpy, visual, pixmap, cmap
#define glXCreateGLXPixmapMESA_ARG_EXPAND Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap
#define glXCreateGLXPixmapMESA_PACKED PACKED_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap
#define glXCreateGLXPixmapMESA_INDEXED INDEXED_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap
#define glXCreateGLXPixmapMESA_FORMAT FORMAT_GLXPixmap_Display___GENPT___XVisualInfo___GENPT___Pixmap_Colormap
#define glXCreateGLXPixmapWithConfigSGIX_INDEX 172
#define glXCreateGLXPixmapWithConfigSGIX_RETURN GLXPixmap
#define glXCreateGLXPixmapWithConfigSGIX_ARG_NAMES dpy, config, pixmap
#define glXCreateGLXPixmapWithConfigSGIX_ARG_EXPAND Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap
#define glXCreateGLXPixmapWithConfigSGIX_PACKED PACKED_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap
#define glXCreateGLXPixmapWithConfigSGIX_INDEXED INDEXED_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap
#define glXCreateGLXPixmapWithConfigSGIX_FORMAT FORMAT_GLXPixmap_Display___GENPT___GLXFBConfigSGIX_Pixmap
#define glXCreateGLXVideoSourceSGIX_INDEX 173
#define glXCreateGLXVideoSourceSGIX_RETURN GLXVideoSourceSGIX
#define glXCreateGLXVideoSourceSGIX_ARG_NAMES display, screen, server, path, nodeClass, drainNode
#define glXCreateGLXVideoSourceSGIX_ARG_EXPAND Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode
#define glXCreateGLXVideoSourceSGIX_PACKED PACKED_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode
#define glXCreateGLXVideoSourceSGIX_INDEXED INDEXED_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode
#define glXCreateGLXVideoSourceSGIX_FORMAT FORMAT_GLXVideoSourceSGIX_Display___GENPT___int_VLServer_VLPath_int_VLNode
#define glXCreateNewContext_INDEX 174
#define glXCreateNewContext_RETURN GLXContext
#define glXCreateNewContext_ARG_NAMES dpy, config, render_type, share_list, direct
#define glXCreateNewContext_ARG_EXPAND Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct
#define glXCreateNewContext_PACKED PACKED_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool
#define glXCreateNewContext_INDEXED INDEXED_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool
#define glXCreateNewContext_FORMAT FORMAT_GLXContext_Display___GENPT___GLXFBConfig_int_GLXContext_Bool
#define glXCreatePbuffer_INDEX 175
#define glXCreatePbuffer_RETURN GLXPbuffer
#define glXCreatePbuffer_ARG_NAMES dpy, config, attrib_list
#define glXCreatePbuffer_ARG_EXPAND Display * dpy, GLXFBConfig config, const int * attrib_list
#define glXCreatePbuffer_PACKED PACKED_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__
#define glXCreatePbuffer_INDEXED INDEXED_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__
#define glXCreatePbuffer_FORMAT FORMAT_GLXPbuffer_Display___GENPT___GLXFBConfig_const_int___GENPT__
#define glXCreatePixmap_INDEX 176
#define glXCreatePixmap_RETURN GLXPixmap
#define glXCreatePixmap_ARG_NAMES dpy, config, pixmap, attrib_list
#define glXCreatePixmap_ARG_EXPAND Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list
#define glXCreatePixmap_PACKED PACKED_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__
#define glXCreatePixmap_INDEXED INDEXED_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__
#define glXCreatePixmap_FORMAT FORMAT_GLXPixmap_Display___GENPT___GLXFBConfig_Pixmap_const_int___GENPT__
#define glXCreateWindow_INDEX 177
#define glXCreateWindow_RETURN GLXWindow
#define glXCreateWindow_ARG_NAMES dpy, config, win, attrib_list
#define glXCreateWindow_ARG_EXPAND Display * dpy, GLXFBConfig config, Window win, const int * attrib_list
#define glXCreateWindow_PACKED PACKED_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__
#define glXCreateWindow_INDEXED INDEXED_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__
#define glXCreateWindow_FORMAT FORMAT_GLXWindow_Display___GENPT___GLXFBConfig_Window_const_int___GENPT__
#define glXCushionSGI_INDEX 178
#define glXCushionSGI_RETURN void
#define glXCushionSGI_ARG_NAMES dpy, window, cushion
#define glXCushionSGI_ARG_EXPAND Display * dpy, Window window, float cushion
#define glXCushionSGI_PACKED PACKED_void_Display___GENPT___Window_float
#define glXCushionSGI_INDEXED INDEXED_void_Display___GENPT___Window_float
#define glXCushionSGI_FORMAT FORMAT_void_Display___GENPT___Window_float
#define glXDestroyContext_INDEX 179
#define glXDestroyContext_RETURN void
#define glXDestroyContext_ARG_NAMES dpy, ctx
#define glXDestroyContext_ARG_EXPAND Display * dpy, GLXContext ctx
#define glXDestroyContext_PACKED PACKED_void_Display___GENPT___GLXContext
#define glXDestroyContext_INDEXED INDEXED_void_Display___GENPT___GLXContext
#define glXDestroyContext_FORMAT FORMAT_void_Display___GENPT___GLXContext
#define glXDestroyGLXPbufferSGIX_INDEX 180
#define glXDestroyGLXPbufferSGIX_RETURN void
#define glXDestroyGLXPbufferSGIX_ARG_NAMES dpy, pbuf
#define glXDestroyGLXPbufferSGIX_ARG_EXPAND Display * dpy, GLXPbufferSGIX pbuf
#define glXDestroyGLXPbufferSGIX_PACKED PACKED_void_Display___GENPT___GLXPbufferSGIX
#define glXDestroyGLXPbufferSGIX_INDEXED INDEXED_void_Display___GENPT___GLXPbufferSGIX
#define glXDestroyGLXPbufferSGIX_FORMAT FORMAT_void_Display___GENPT___GLXPbufferSGIX
#define glXDestroyGLXPixmap_INDEX 181
#define glXDestroyGLXPixmap_RETURN void
#define glXDestroyGLXPixmap_ARG_NAMES dpy, pixmap
#define glXDestroyGLXPixmap_ARG_EXPAND Display * dpy, GLXPixmap pixmap
#define glXDestroyGLXPixmap_PACKED PACKED_void_Display___GENPT___GLXPixmap
#define glXDestroyGLXPixmap_INDEXED INDEXED_void_Display___GENPT___GLXPixmap
#define glXDestroyGLXPixmap_FORMAT FORMAT_void_Display___GENPT___GLXPixmap
#define glXDestroyGLXVideoSourceSGIX_INDEX 182
#define glXDestroyGLXVideoSourceSGIX_RETURN void
#define glXDestroyGLXVideoSourceSGIX_ARG_NAMES dpy, glxvideosource
#define glXDestroyGLXVideoSourceSGIX_ARG_EXPAND Display * dpy, GLXVideoSourceSGIX glxvideosource
#define glXDestroyGLXVideoSourceSGIX_PACKED PACKED_void_Display___GENPT___GLXVideoSourceSGIX
#define glXDestroyGLXVideoSourceSGIX_INDEXED INDEXED_void_Display___GENPT___GLXVideoSourceSGIX
#define glXDestroyGLXVideoSourceSGIX_FORMAT FORMAT_void_Display___GENPT___GLXVideoSourceSGIX
#define glXDestroyHyperpipeConfigSGIX_INDEX 183
#define glXDestroyHyperpipeConfigSGIX_RETURN int
#define glXDestroyHyperpipeConfigSGIX_ARG_NAMES dpy, hpId
#define glXDestroyHyperpipeConfigSGIX_ARG_EXPAND Display * dpy, int hpId
#define glXDestroyHyperpipeConfigSGIX_PACKED PACKED_int_Display___GENPT___int
#define glXDestroyHyperpipeConfigSGIX_INDEXED INDEXED_int_Display___GENPT___int
#define glXDestroyHyperpipeConfigSGIX_FORMAT FORMAT_int_Display___GENPT___int
#define glXDestroyPbuffer_INDEX 184
#define glXDestroyPbuffer_RETURN void
#define glXDestroyPbuffer_ARG_NAMES dpy, pbuf
#define glXDestroyPbuffer_ARG_EXPAND Display * dpy, GLXPbuffer pbuf
#define glXDestroyPbuffer_PACKED PACKED_void_Display___GENPT___GLXPbuffer
#define glXDestroyPbuffer_INDEXED INDEXED_void_Display___GENPT___GLXPbuffer
#define glXDestroyPbuffer_FORMAT FORMAT_void_Display___GENPT___GLXPbuffer
#define glXDestroyPixmap_INDEX 185
#define glXDestroyPixmap_RETURN void
#define glXDestroyPixmap_ARG_NAMES dpy, pixmap
#define glXDestroyPixmap_ARG_EXPAND Display * dpy, GLXPixmap pixmap
#define glXDestroyPixmap_PACKED PACKED_void_Display___GENPT___GLXPixmap
#define glXDestroyPixmap_INDEXED INDEXED_void_Display___GENPT___GLXPixmap
#define glXDestroyPixmap_FORMAT FORMAT_void_Display___GENPT___GLXPixmap
#define glXDestroyWindow_INDEX 186
#define glXDestroyWindow_RETURN void
#define glXDestroyWindow_ARG_NAMES dpy, win
#define glXDestroyWindow_ARG_EXPAND Display * dpy, GLXWindow win
#define glXDestroyWindow_PACKED PACKED_void_Display___GENPT___GLXWindow
#define glXDestroyWindow_INDEXED INDEXED_void_Display___GENPT___GLXWindow
#define glXDestroyWindow_FORMAT FORMAT_void_Display___GENPT___GLXWindow
#define glXEnumerateVideoCaptureDevicesNV_INDEX 187
#define glXEnumerateVideoCaptureDevicesNV_RETURN GLXVideoCaptureDeviceNV *
#define glXEnumerateVideoCaptureDevicesNV_ARG_NAMES dpy, screen, nelements
#define glXEnumerateVideoCaptureDevicesNV_ARG_EXPAND Display * dpy, int screen, int * nelements
#define glXEnumerateVideoCaptureDevicesNV_PACKED PACKED_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__
#define glXEnumerateVideoCaptureDevicesNV_INDEXED INDEXED_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__
#define glXEnumerateVideoCaptureDevicesNV_FORMAT FORMAT_GLXVideoCaptureDeviceNV___GENPT___Display___GENPT___int_int___GENPT__
#define glXEnumerateVideoDevicesNV_INDEX 188
#define glXEnumerateVideoDevicesNV_RETURN unsigned int *
#define glXEnumerateVideoDevicesNV_ARG_NAMES dpy, screen, nelements
#define glXEnumerateVideoDevicesNV_ARG_EXPAND Display * dpy, int screen, int * nelements
#define glXEnumerateVideoDevicesNV_PACKED PACKED_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__
#define glXEnumerateVideoDevicesNV_INDEXED INDEXED_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__
#define glXEnumerateVideoDevicesNV_FORMAT FORMAT_unsigned_int___GENPT___Display___GENPT___int_int___GENPT__
#define glXFreeContextEXT_INDEX 189
#define glXFreeContextEXT_RETURN void
#define glXFreeContextEXT_ARG_NAMES dpy, context
#define glXFreeContextEXT_ARG_EXPAND Display * dpy, GLXContext context
#define glXFreeContextEXT_PACKED PACKED_void_Display___GENPT___GLXContext
#define glXFreeContextEXT_INDEXED INDEXED_void_Display___GENPT___GLXContext
#define glXFreeContextEXT_FORMAT FORMAT_void_Display___GENPT___GLXContext
#define glXGetAGPOffsetMESA_INDEX 190
#define glXGetAGPOffsetMESA_RETURN unsigned int
#define glXGetAGPOffsetMESA_ARG_NAMES pointer
#define glXGetAGPOffsetMESA_ARG_EXPAND const void * pointer
#define glXGetAGPOffsetMESA_PACKED PACKED_unsigned_int_const_void___GENPT__
#define glXGetAGPOffsetMESA_INDEXED INDEXED_unsigned_int_const_void___GENPT__
#define glXGetAGPOffsetMESA_FORMAT FORMAT_unsigned_int_const_void___GENPT__
#define glXGetClientString_INDEX 191
#define glXGetClientString_RETURN const char *
#define glXGetClientString_ARG_NAMES display, name
#define glXGetClientString_ARG_EXPAND Display * display, int name
#define glXGetClientString_PACKED PACKED_const_char___GENPT___Display___GENPT___int
#define glXGetClientString_INDEXED INDEXED_const_char___GENPT___Display___GENPT___int
#define glXGetClientString_FORMAT FORMAT_const_char___GENPT___Display___GENPT___int
#define glXGetConfig_INDEX 192
#define glXGetConfig_RETURN int
#define glXGetConfig_ARG_NAMES display, visual, attribute, value
#define glXGetConfig_ARG_EXPAND Display * display, XVisualInfo * visual, int attribute, int * value
#define glXGetConfig_PACKED PACKED_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__
#define glXGetConfig_INDEXED INDEXED_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__
#define glXGetConfig_FORMAT FORMAT_int_Display___GENPT___XVisualInfo___GENPT___int_int___GENPT__
#define glXGetContextIDEXT_INDEX 193
#define glXGetContextIDEXT_RETURN GLXContextID
#define glXGetContextIDEXT_ARG_NAMES context
#define glXGetContextIDEXT_ARG_EXPAND const GLXContext context
#define glXGetContextIDEXT_PACKED PACKED_GLXContextID_const_GLXContext
#define glXGetContextIDEXT_INDEXED INDEXED_GLXContextID_const_GLXContext
#define glXGetContextIDEXT_FORMAT FORMAT_GLXContextID_const_GLXContext
#define glXGetCurrentContext_INDEX 194
#define glXGetCurrentContext_RETURN GLXContext
#define glXGetCurrentContext_ARG_NAMES 
#define glXGetCurrentContext_ARG_EXPAND 
#define glXGetCurrentContext_PACKED PACKED_GLXContext
#define glXGetCurrentContext_INDEXED INDEXED_GLXContext
#define glXGetCurrentContext_FORMAT FORMAT_GLXContext
#define glXGetCurrentDisplay_INDEX 195
#define glXGetCurrentDisplay_RETURN Display *
#define glXGetCurrentDisplay_ARG_NAMES 
#define glXGetCurrentDisplay_ARG_EXPAND 
#define glXGetCurrentDisplay_PACKED PACKED_Display___GENPT__
#define glXGetCurrentDisplay_INDEXED INDEXED_Display___GENPT__
#define glXGetCurrentDisplay_FORMAT FORMAT_Display___GENPT__
#define glXGetCurrentDisplayEXT_INDEX 196
#define glXGetCurrentDisplayEXT_RETURN Display *
#define glXGetCurrentDisplayEXT_ARG_NAMES 
#define glXGetCurrentDisplayEXT_ARG_EXPAND 
#define glXGetCurrentDisplayEXT_PACKED PACKED_Display___GENPT__
#define glXGetCurrentDisplayEXT_INDEXED INDEXED_Display___GENPT__
#define glXGetCurrentDisplayEXT_FORMAT FORMAT_Display___GENPT__
#define glXGetCurrentDrawable_INDEX 197
#define glXGetCurrentDrawable_RETURN GLXDrawable
#define glXGetCurrentDrawable_ARG_NAMES 
#define glXGetCurrentDrawable_ARG_EXPAND 
#define glXGetCurrentDrawable_PACKED PACKED_GLXDrawable
#define glXGetCurrentDrawable_INDEXED INDEXED_GLXDrawable
#define glXGetCurrentDrawable_FORMAT FORMAT_GLXDrawable
#define glXGetCurrentReadDrawable_INDEX 198
#define glXGetCurrentReadDrawable_RETURN GLXDrawable
#define glXGetCurrentReadDrawable_ARG_NAMES 
#define glXGetCurrentReadDrawable_ARG_EXPAND 
#define glXGetCurrentReadDrawable_PACKED PACKED_GLXDrawable
#define glXGetCurrentReadDrawable_INDEXED INDEXED_GLXDrawable
#define glXGetCurrentReadDrawable_FORMAT FORMAT_GLXDrawable
#define glXGetCurrentReadDrawableSGI_INDEX 199
#define glXGetCurrentReadDrawableSGI_RETURN GLXDrawable
#define glXGetCurrentReadDrawableSGI_ARG_NAMES 
#define glXGetCurrentReadDrawableSGI_ARG_EXPAND 
#define glXGetCurrentReadDrawableSGI_PACKED PACKED_GLXDrawable
#define glXGetCurrentReadDrawableSGI_INDEXED INDEXED_GLXDrawable
#define glXGetCurrentReadDrawableSGI_FORMAT FORMAT_GLXDrawable
#define glXGetDrawableAttributes_INDEX 200
#define glXGetDrawableAttributes_RETURN void
#define glXGetDrawableAttributes_ARG_NAMES drawable
#define glXGetDrawableAttributes_ARG_EXPAND uint32_t drawable
#define glXGetDrawableAttributes_PACKED PACKED_void_uint32_t
#define glXGetDrawableAttributes_INDEXED INDEXED_void_uint32_t
#define glXGetDrawableAttributes_FORMAT FORMAT_void_uint32_t
#define glXGetDrawableAttributesSGIX_INDEX 201
#define glXGetDrawableAttributesSGIX_RETURN void
#define glXGetDrawableAttributesSGIX_ARG_NAMES drawable
#define glXGetDrawableAttributesSGIX_ARG_EXPAND uint32_t drawable
#define glXGetDrawableAttributesSGIX_PACKED PACKED_void_uint32_t
#define glXGetDrawableAttributesSGIX_INDEXED INDEXED_void_uint32_t
#define glXGetDrawableAttributesSGIX_FORMAT FORMAT_void_uint32_t
#define glXGetFBConfigAttrib_INDEX 202
#define glXGetFBConfigAttrib_RETURN int
#define glXGetFBConfigAttrib_ARG_NAMES dpy, config, attribute, value
#define glXGetFBConfigAttrib_ARG_EXPAND Display * dpy, GLXFBConfig config, int attribute, int * value
#define glXGetFBConfigAttrib_PACKED PACKED_int_Display___GENPT___GLXFBConfig_int_int___GENPT__
#define glXGetFBConfigAttrib_INDEXED INDEXED_int_Display___GENPT___GLXFBConfig_int_int___GENPT__
#define glXGetFBConfigAttrib_FORMAT FORMAT_int_Display___GENPT___GLXFBConfig_int_int___GENPT__
#define glXGetFBConfigAttribSGIX_INDEX 203
#define glXGetFBConfigAttribSGIX_RETURN int
#define glXGetFBConfigAttribSGIX_ARG_NAMES dpy, config, attribute, value
#define glXGetFBConfigAttribSGIX_ARG_EXPAND Display * dpy, GLXFBConfigSGIX config, int attribute, int * value
#define glXGetFBConfigAttribSGIX_PACKED PACKED_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__
#define glXGetFBConfigAttribSGIX_INDEXED INDEXED_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__
#define glXGetFBConfigAttribSGIX_FORMAT FORMAT_int_Display___GENPT___GLXFBConfigSGIX_int_int___GENPT__
#define glXGetFBConfigFromVisualSGIX_INDEX 204
#define glXGetFBConfigFromVisualSGIX_RETURN GLXFBConfigSGIX
#define glXGetFBConfigFromVisualSGIX_ARG_NAMES dpy, vis
#define glXGetFBConfigFromVisualSGIX_ARG_EXPAND Display * dpy, XVisualInfo * vis
#define glXGetFBConfigFromVisualSGIX_PACKED PACKED_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__
#define glXGetFBConfigFromVisualSGIX_INDEXED INDEXED_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__
#define glXGetFBConfigFromVisualSGIX_FORMAT FORMAT_GLXFBConfigSGIX_Display___GENPT___XVisualInfo___GENPT__
#define glXGetFBConfigs_INDEX 205
#define glXGetFBConfigs_RETURN GLXFBConfig *
#define glXGetFBConfigs_ARG_NAMES dpy, screen, nelements
#define glXGetFBConfigs_ARG_EXPAND Display * dpy, int screen, int * nelements
#define glXGetFBConfigs_PACKED PACKED_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__
#define glXGetFBConfigs_INDEXED INDEXED_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__
#define glXGetFBConfigs_FORMAT FORMAT_GLXFBConfig___GENPT___Display___GENPT___int_int___GENPT__
#define glXGetFBConfigsSGIX_INDEX 206
#define glXGetFBConfigsSGIX_RETURN void
#define glXGetFBConfigsSGIX_ARG_NAMES 
#define glXGetFBConfigsSGIX_ARG_EXPAND 
#define glXGetFBConfigsSGIX_PACKED PACKED_void
#define glXGetFBConfigsSGIX_INDEXED INDEXED_void
#define glXGetFBConfigsSGIX_FORMAT FORMAT_void
#define glXGetMscRateOML_INDEX 207
#define glXGetMscRateOML_RETURN Bool
#define glXGetMscRateOML_ARG_NAMES dpy, drawable, numerator, denominator
#define glXGetMscRateOML_ARG_EXPAND Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator
#define glXGetMscRateOML_PACKED PACKED_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__
#define glXGetMscRateOML_INDEXED INDEXED_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__
#define glXGetMscRateOML_FORMAT FORMAT_Bool_Display___GENPT___GLXDrawable_int32_t___GENPT___int32_t___GENPT__
#define glXGetProcAddress_INDEX 208
#define glXGetProcAddress_RETURN __GLXextFuncPtr
#define glXGetProcAddress_ARG_NAMES procName
#define glXGetProcAddress_ARG_EXPAND const GLubyte * procName
#define glXGetProcAddress_PACKED PACKED___GLXextFuncPtr_const_GLubyte___GENPT__
#define glXGetProcAddress_INDEXED INDEXED___GLXextFuncPtr_const_GLubyte___GENPT__
#define glXGetProcAddress_FORMAT FORMAT___GLXextFuncPtr_const_GLubyte___GENPT__
#define glXGetProcAddressARB_INDEX 209
#define glXGetProcAddressARB_RETURN __GLXextFuncPtr
#define glXGetProcAddressARB_ARG_NAMES procName
#define glXGetProcAddressARB_ARG_EXPAND const GLubyte * procName
#define glXGetProcAddressARB_PACKED PACKED___GLXextFuncPtr_const_GLubyte___GENPT__
#define glXGetProcAddressARB_INDEXED INDEXED___GLXextFuncPtr_const_GLubyte___GENPT__
#define glXGetProcAddressARB_FORMAT FORMAT___GLXextFuncPtr_const_GLubyte___GENPT__
#define glXGetSelectedEvent_INDEX 210
#define glXGetSelectedEvent_RETURN void
#define glXGetSelectedEvent_ARG_NAMES dpy, draw, event_mask
#define glXGetSelectedEvent_ARG_EXPAND Display * dpy, GLXDrawable draw, unsigned long * event_mask
#define glXGetSelectedEvent_PACKED PACKED_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__
#define glXGetSelectedEvent_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__
#define glXGetSelectedEvent_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__
#define glXGetSelectedEventSGIX_INDEX 211
#define glXGetSelectedEventSGIX_RETURN void
#define glXGetSelectedEventSGIX_ARG_NAMES dpy, drawable, mask
#define glXGetSelectedEventSGIX_ARG_EXPAND Display * dpy, GLXDrawable drawable, unsigned long * mask
#define glXGetSelectedEventSGIX_PACKED PACKED_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__
#define glXGetSelectedEventSGIX_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__
#define glXGetSelectedEventSGIX_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_unsigned_long___GENPT__
#define glXGetSyncValuesOML_INDEX 212
#define glXGetSyncValuesOML_RETURN Bool
#define glXGetSyncValuesOML_ARG_NAMES dpy, drawable, ust, msc, sbc
#define glXGetSyncValuesOML_ARG_EXPAND Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc
#define glXGetSyncValuesOML_PACKED PACKED_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__
#define glXGetSyncValuesOML_INDEXED INDEXED_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__
#define glXGetSyncValuesOML_FORMAT FORMAT_Bool_Display___GENPT___GLXDrawable_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__
#define glXGetTransparentIndexSUN_INDEX 213
#define glXGetTransparentIndexSUN_RETURN Status
#define glXGetTransparentIndexSUN_ARG_NAMES dpy, overlay, underlay, pTransparentIndex
#define glXGetTransparentIndexSUN_ARG_EXPAND Display * dpy, Window overlay, Window underlay, long * pTransparentIndex
#define glXGetTransparentIndexSUN_PACKED PACKED_Status_Display___GENPT___Window_Window_long___GENPT__
#define glXGetTransparentIndexSUN_INDEXED INDEXED_Status_Display___GENPT___Window_Window_long___GENPT__
#define glXGetTransparentIndexSUN_FORMAT FORMAT_Status_Display___GENPT___Window_Window_long___GENPT__
#define glXGetVideoDeviceNV_INDEX 214
#define glXGetVideoDeviceNV_RETURN int
#define glXGetVideoDeviceNV_ARG_NAMES dpy, screen, numVideoDevices, pVideoDevice
#define glXGetVideoDeviceNV_ARG_EXPAND Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice
#define glXGetVideoDeviceNV_PACKED PACKED_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__
#define glXGetVideoDeviceNV_INDEXED INDEXED_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__
#define glXGetVideoDeviceNV_FORMAT FORMAT_int_Display___GENPT___int_int_GLXVideoDeviceNV___GENPT__
#define glXGetVideoInfoNV_INDEX 215
#define glXGetVideoInfoNV_RETURN int
#define glXGetVideoInfoNV_ARG_NAMES dpy, screen, VideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo
#define glXGetVideoInfoNV_ARG_EXPAND Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo
#define glXGetVideoInfoNV_PACKED PACKED_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__
#define glXGetVideoInfoNV_INDEXED INDEXED_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__
#define glXGetVideoInfoNV_FORMAT FORMAT_int_Display___GENPT___int_GLXVideoDeviceNV_unsigned_long___GENPT___unsigned_long___GENPT__
#define glXGetVideoSyncSGI_INDEX 216
#define glXGetVideoSyncSGI_RETURN int
#define glXGetVideoSyncSGI_ARG_NAMES count
#define glXGetVideoSyncSGI_ARG_EXPAND unsigned int * count
#define glXGetVideoSyncSGI_PACKED PACKED_int_unsigned_int___GENPT__
#define glXGetVideoSyncSGI_INDEXED INDEXED_int_unsigned_int___GENPT__
#define glXGetVideoSyncSGI_FORMAT FORMAT_int_unsigned_int___GENPT__
#define glXGetVisualConfigs_INDEX 217
#define glXGetVisualConfigs_RETURN void
#define glXGetVisualConfigs_ARG_NAMES 
#define glXGetVisualConfigs_ARG_EXPAND 
#define glXGetVisualConfigs_PACKED PACKED_void
#define glXGetVisualConfigs_INDEXED INDEXED_void
#define glXGetVisualConfigs_FORMAT FORMAT_void
#define glXGetVisualFromFBConfig_INDEX 218
#define glXGetVisualFromFBConfig_RETURN XVisualInfo *
#define glXGetVisualFromFBConfig_ARG_NAMES dpy, config
#define glXGetVisualFromFBConfig_ARG_EXPAND Display * dpy, GLXFBConfig config
#define glXGetVisualFromFBConfig_PACKED PACKED_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig
#define glXGetVisualFromFBConfig_INDEXED INDEXED_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig
#define glXGetVisualFromFBConfig_FORMAT FORMAT_XVisualInfo___GENPT___Display___GENPT___GLXFBConfig
#define glXGetVisualFromFBConfigSGIX_INDEX 219
#define glXGetVisualFromFBConfigSGIX_RETURN XVisualInfo *
#define glXGetVisualFromFBConfigSGIX_ARG_NAMES dpy, config
#define glXGetVisualFromFBConfigSGIX_ARG_EXPAND Display * dpy, GLXFBConfigSGIX config
#define glXGetVisualFromFBConfigSGIX_PACKED PACKED_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX
#define glXGetVisualFromFBConfigSGIX_INDEXED INDEXED_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX
#define glXGetVisualFromFBConfigSGIX_FORMAT FORMAT_XVisualInfo___GENPT___Display___GENPT___GLXFBConfigSGIX
#define glXHyperpipeAttribSGIX_INDEX 220
#define glXHyperpipeAttribSGIX_RETURN int
#define glXHyperpipeAttribSGIX_ARG_NAMES dpy, timeSlice, attrib, size, attribList
#define glXHyperpipeAttribSGIX_ARG_EXPAND Display * dpy, int timeSlice, int attrib, int size, void * attribList
#define glXHyperpipeAttribSGIX_PACKED PACKED_int_Display___GENPT___int_int_int_void___GENPT__
#define glXHyperpipeAttribSGIX_INDEXED INDEXED_int_Display___GENPT___int_int_int_void___GENPT__
#define glXHyperpipeAttribSGIX_FORMAT FORMAT_int_Display___GENPT___int_int_int_void___GENPT__
#define glXHyperpipeConfigSGIX_INDEX 221
#define glXHyperpipeConfigSGIX_RETURN int
#define glXHyperpipeConfigSGIX_ARG_NAMES dpy, networkId, npipes, cfg, hpId
#define glXHyperpipeConfigSGIX_ARG_EXPAND Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId
#define glXHyperpipeConfigSGIX_PACKED PACKED_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__
#define glXHyperpipeConfigSGIX_INDEXED INDEXED_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__
#define glXHyperpipeConfigSGIX_FORMAT FORMAT_int_Display___GENPT___int_int_GLXHyperpipeConfigSGIX___GENPT___int___GENPT__
#define glXImportContextEXT_INDEX 222
#define glXImportContextEXT_RETURN GLXContext
#define glXImportContextEXT_ARG_NAMES dpy, contextID
#define glXImportContextEXT_ARG_EXPAND Display * dpy, GLXContextID contextID
#define glXImportContextEXT_PACKED PACKED_GLXContext_Display___GENPT___GLXContextID
#define glXImportContextEXT_INDEXED INDEXED_GLXContext_Display___GENPT___GLXContextID
#define glXImportContextEXT_FORMAT FORMAT_GLXContext_Display___GENPT___GLXContextID
#define glXIsDirect_INDEX 223
#define glXIsDirect_RETURN Bool
#define glXIsDirect_ARG_NAMES dpy, ctx
#define glXIsDirect_ARG_EXPAND Display * dpy, GLXContext ctx
#define glXIsDirect_PACKED PACKED_Bool_Display___GENPT___GLXContext
#define glXIsDirect_INDEXED INDEXED_Bool_Display___GENPT___GLXContext
#define glXIsDirect_FORMAT FORMAT_Bool_Display___GENPT___GLXContext
#define glXJoinSwapGroupNV_INDEX 224
#define glXJoinSwapGroupNV_RETURN Bool
#define glXJoinSwapGroupNV_ARG_NAMES dpy, drawable, group
#define glXJoinSwapGroupNV_ARG_EXPAND Display * dpy, GLXDrawable drawable, GLuint group
#define glXJoinSwapGroupNV_PACKED PACKED_Bool_Display___GENPT___GLXDrawable_GLuint
#define glXJoinSwapGroupNV_INDEXED INDEXED_Bool_Display___GENPT___GLXDrawable_GLuint
#define glXJoinSwapGroupNV_FORMAT FORMAT_Bool_Display___GENPT___GLXDrawable_GLuint
#define glXJoinSwapGroupSGIX_INDEX 225
#define glXJoinSwapGroupSGIX_RETURN void
#define glXJoinSwapGroupSGIX_ARG_NAMES dpy, drawable, member
#define glXJoinSwapGroupSGIX_ARG_EXPAND Display * dpy, GLXDrawable drawable, GLXDrawable member
#define glXJoinSwapGroupSGIX_PACKED PACKED_void_Display___GENPT___GLXDrawable_GLXDrawable
#define glXJoinSwapGroupSGIX_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_GLXDrawable
#define glXJoinSwapGroupSGIX_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_GLXDrawable
#define glXLockVideoCaptureDeviceNV_INDEX 226
#define glXLockVideoCaptureDeviceNV_RETURN void
#define glXLockVideoCaptureDeviceNV_ARG_NAMES dpy, device
#define glXLockVideoCaptureDeviceNV_ARG_EXPAND Display * dpy, GLXVideoCaptureDeviceNV device
#define glXLockVideoCaptureDeviceNV_PACKED PACKED_void_Display___GENPT___GLXVideoCaptureDeviceNV
#define glXLockVideoCaptureDeviceNV_INDEXED INDEXED_void_Display___GENPT___GLXVideoCaptureDeviceNV
#define glXLockVideoCaptureDeviceNV_FORMAT FORMAT_void_Display___GENPT___GLXVideoCaptureDeviceNV
#define glXMakeContextCurrent_INDEX 227
#define glXMakeContextCurrent_RETURN Bool
#define glXMakeContextCurrent_ARG_NAMES dpy, draw, read, ctx
#define glXMakeContextCurrent_ARG_EXPAND Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx
#define glXMakeContextCurrent_PACKED PACKED_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext
#define glXMakeContextCurrent_INDEXED INDEXED_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext
#define glXMakeContextCurrent_FORMAT FORMAT_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext
#define glXMakeCurrent_INDEX 228
#define glXMakeCurrent_RETURN Bool
#define glXMakeCurrent_ARG_NAMES dpy, drawable, ctx
#define glXMakeCurrent_ARG_EXPAND Display * dpy, GLXDrawable drawable, GLXContext ctx
#define glXMakeCurrent_PACKED PACKED_Bool_Display___GENPT___GLXDrawable_GLXContext
#define glXMakeCurrent_INDEXED INDEXED_Bool_Display___GENPT___GLXDrawable_GLXContext
#define glXMakeCurrent_FORMAT FORMAT_Bool_Display___GENPT___GLXDrawable_GLXContext
#define glXMakeCurrentReadSGI_INDEX 229
#define glXMakeCurrentReadSGI_RETURN Bool
#define glXMakeCurrentReadSGI_ARG_NAMES dpy, draw, read, ctx
#define glXMakeCurrentReadSGI_ARG_EXPAND Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx
#define glXMakeCurrentReadSGI_PACKED PACKED_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext
#define glXMakeCurrentReadSGI_INDEXED INDEXED_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext
#define glXMakeCurrentReadSGI_FORMAT FORMAT_Bool_Display___GENPT___GLXDrawable_GLXDrawable_GLXContext
#define glXQueryChannelDeltasSGIX_INDEX 230
#define glXQueryChannelDeltasSGIX_RETURN int
#define glXQueryChannelDeltasSGIX_ARG_NAMES display, screen, channel, x, y, w, h
#define glXQueryChannelDeltasSGIX_ARG_EXPAND Display * display, int screen, int channel, int * x, int * y, int * w, int * h
#define glXQueryChannelDeltasSGIX_PACKED PACKED_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__
#define glXQueryChannelDeltasSGIX_INDEXED INDEXED_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__
#define glXQueryChannelDeltasSGIX_FORMAT FORMAT_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__
#define glXQueryChannelRectSGIX_INDEX 231
#define glXQueryChannelRectSGIX_RETURN int
#define glXQueryChannelRectSGIX_ARG_NAMES display, screen, channel, dx, dy, dw, dh
#define glXQueryChannelRectSGIX_ARG_EXPAND Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh
#define glXQueryChannelRectSGIX_PACKED PACKED_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__
#define glXQueryChannelRectSGIX_INDEXED INDEXED_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__
#define glXQueryChannelRectSGIX_FORMAT FORMAT_int_Display___GENPT___int_int_int___GENPT___int___GENPT___int___GENPT___int___GENPT__
#define glXQueryContext_INDEX 232
#define glXQueryContext_RETURN int
#define glXQueryContext_ARG_NAMES dpy, ctx, attribute, value
#define glXQueryContext_ARG_EXPAND Display * dpy, GLXContext ctx, int attribute, int * value
#define glXQueryContext_PACKED PACKED_int_Display___GENPT___GLXContext_int_int___GENPT__
#define glXQueryContext_INDEXED INDEXED_int_Display___GENPT___GLXContext_int_int___GENPT__
#define glXQueryContext_FORMAT FORMAT_int_Display___GENPT___GLXContext_int_int___GENPT__
#define glXQueryContextInfoEXT_INDEX 233
#define glXQueryContextInfoEXT_RETURN int
#define glXQueryContextInfoEXT_ARG_NAMES dpy, context, attribute, value
#define glXQueryContextInfoEXT_ARG_EXPAND Display * dpy, GLXContext context, int attribute, int * value
#define glXQueryContextInfoEXT_PACKED PACKED_int_Display___GENPT___GLXContext_int_int___GENPT__
#define glXQueryContextInfoEXT_INDEXED INDEXED_int_Display___GENPT___GLXContext_int_int___GENPT__
#define glXQueryContextInfoEXT_FORMAT FORMAT_int_Display___GENPT___GLXContext_int_int___GENPT__
#define glXQueryDrawable_INDEX 234
#define glXQueryDrawable_RETURN void
#define glXQueryDrawable_ARG_NAMES dpy, draw, attribute, value
#define glXQueryDrawable_ARG_EXPAND Display * dpy, GLXDrawable draw, int attribute, unsigned int * value
#define glXQueryDrawable_PACKED PACKED_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__
#define glXQueryDrawable_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__
#define glXQueryDrawable_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_int_unsigned_int___GENPT__
#define glXQueryExtension_INDEX 235
#define glXQueryExtension_RETURN Bool
#define glXQueryExtension_ARG_NAMES display, errorBase, eventBase
#define glXQueryExtension_ARG_EXPAND Display * display, int * errorBase, int * eventBase
#define glXQueryExtension_PACKED PACKED_Bool_Display___GENPT___int___GENPT___int___GENPT__
#define glXQueryExtension_INDEXED INDEXED_Bool_Display___GENPT___int___GENPT___int___GENPT__
#define glXQueryExtension_FORMAT FORMAT_Bool_Display___GENPT___int___GENPT___int___GENPT__
#define glXQueryExtensionsString_INDEX 236
#define glXQueryExtensionsString_RETURN const char *
#define glXQueryExtensionsString_ARG_NAMES dpy, screen
#define glXQueryExtensionsString_ARG_EXPAND Display * dpy, int screen
#define glXQueryExtensionsString_PACKED PACKED_const_char___GENPT___Display___GENPT___int
#define glXQueryExtensionsString_INDEXED INDEXED_const_char___GENPT___Display___GENPT___int
#define glXQueryExtensionsString_FORMAT FORMAT_const_char___GENPT___Display___GENPT___int
#define glXQueryFrameCountNV_INDEX 237
#define glXQueryFrameCountNV_RETURN Bool
#define glXQueryFrameCountNV_ARG_NAMES dpy, screen, count
#define glXQueryFrameCountNV_ARG_EXPAND Display * dpy, int screen, GLuint * count
#define glXQueryFrameCountNV_PACKED PACKED_Bool_Display___GENPT___int_GLuint___GENPT__
#define glXQueryFrameCountNV_INDEXED INDEXED_Bool_Display___GENPT___int_GLuint___GENPT__
#define glXQueryFrameCountNV_FORMAT FORMAT_Bool_Display___GENPT___int_GLuint___GENPT__
#define glXQueryGLXPbufferSGIX_INDEX 238
#define glXQueryGLXPbufferSGIX_RETURN int
#define glXQueryGLXPbufferSGIX_ARG_NAMES dpy, pbuf, attribute, value
#define glXQueryGLXPbufferSGIX_ARG_EXPAND Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value
#define glXQueryGLXPbufferSGIX_PACKED PACKED_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__
#define glXQueryGLXPbufferSGIX_INDEXED INDEXED_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__
#define glXQueryGLXPbufferSGIX_FORMAT FORMAT_int_Display___GENPT___GLXPbufferSGIX_int_unsigned_int___GENPT__
#define glXQueryHyperpipeAttribSGIX_INDEX 239
#define glXQueryHyperpipeAttribSGIX_RETURN int
#define glXQueryHyperpipeAttribSGIX_ARG_NAMES dpy, timeSlice, attrib, size, returnAttribList
#define glXQueryHyperpipeAttribSGIX_ARG_EXPAND Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList
#define glXQueryHyperpipeAttribSGIX_PACKED PACKED_int_Display___GENPT___int_int_int_void___GENPT__
#define glXQueryHyperpipeAttribSGIX_INDEXED INDEXED_int_Display___GENPT___int_int_int_void___GENPT__
#define glXQueryHyperpipeAttribSGIX_FORMAT FORMAT_int_Display___GENPT___int_int_int_void___GENPT__
#define glXQueryHyperpipeBestAttribSGIX_INDEX 240
#define glXQueryHyperpipeBestAttribSGIX_RETURN int
#define glXQueryHyperpipeBestAttribSGIX_ARG_NAMES dpy, timeSlice, attrib, size, attribList, returnAttribList
#define glXQueryHyperpipeBestAttribSGIX_ARG_EXPAND Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList
#define glXQueryHyperpipeBestAttribSGIX_PACKED PACKED_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__
#define glXQueryHyperpipeBestAttribSGIX_INDEXED INDEXED_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__
#define glXQueryHyperpipeBestAttribSGIX_FORMAT FORMAT_int_Display___GENPT___int_int_int_void___GENPT___void___GENPT__
#define glXQueryHyperpipeConfigSGIX_INDEX 241
#define glXQueryHyperpipeConfigSGIX_RETURN GLXHyperpipeConfigSGIX *
#define glXQueryHyperpipeConfigSGIX_ARG_NAMES dpy, hpId, npipes
#define glXQueryHyperpipeConfigSGIX_ARG_EXPAND Display * dpy, int hpId, int * npipes
#define glXQueryHyperpipeConfigSGIX_PACKED PACKED_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__
#define glXQueryHyperpipeConfigSGIX_INDEXED INDEXED_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__
#define glXQueryHyperpipeConfigSGIX_FORMAT FORMAT_GLXHyperpipeConfigSGIX___GENPT___Display___GENPT___int_int___GENPT__
#define glXQueryHyperpipeNetworkSGIX_INDEX 242
#define glXQueryHyperpipeNetworkSGIX_RETURN GLXHyperpipeNetworkSGIX *
#define glXQueryHyperpipeNetworkSGIX_ARG_NAMES dpy, npipes
#define glXQueryHyperpipeNetworkSGIX_ARG_EXPAND Display * dpy, int * npipes
#define glXQueryHyperpipeNetworkSGIX_PACKED PACKED_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__
#define glXQueryHyperpipeNetworkSGIX_INDEXED INDEXED_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__
#define glXQueryHyperpipeNetworkSGIX_FORMAT FORMAT_GLXHyperpipeNetworkSGIX___GENPT___Display___GENPT___int___GENPT__
#define glXQueryMaxSwapBarriersSGIX_INDEX 243
#define glXQueryMaxSwapBarriersSGIX_RETURN Bool
#define glXQueryMaxSwapBarriersSGIX_ARG_NAMES dpy, screen, max
#define glXQueryMaxSwapBarriersSGIX_ARG_EXPAND Display * dpy, int screen, int * max
#define glXQueryMaxSwapBarriersSGIX_PACKED PACKED_Bool_Display___GENPT___int_int___GENPT__
#define glXQueryMaxSwapBarriersSGIX_INDEXED INDEXED_Bool_Display___GENPT___int_int___GENPT__
#define glXQueryMaxSwapBarriersSGIX_FORMAT FORMAT_Bool_Display___GENPT___int_int___GENPT__
#define glXQueryMaxSwapGroupsNV_INDEX 244
#define glXQueryMaxSwapGroupsNV_RETURN Bool
#define glXQueryMaxSwapGroupsNV_ARG_NAMES dpy, screen, maxGroups, maxBarriers
#define glXQueryMaxSwapGroupsNV_ARG_EXPAND Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers
#define glXQueryMaxSwapGroupsNV_PACKED PACKED_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__
#define glXQueryMaxSwapGroupsNV_INDEXED INDEXED_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__
#define glXQueryMaxSwapGroupsNV_FORMAT FORMAT_Bool_Display___GENPT___int_GLuint___GENPT___GLuint___GENPT__
#define glXQueryServerString_INDEX 245
#define glXQueryServerString_RETURN const char *
#define glXQueryServerString_ARG_NAMES dpy, screen, name
#define glXQueryServerString_ARG_EXPAND Display * dpy, int screen, int name
#define glXQueryServerString_PACKED PACKED_const_char___GENPT___Display___GENPT___int_int
#define glXQueryServerString_INDEXED INDEXED_const_char___GENPT___Display___GENPT___int_int
#define glXQueryServerString_FORMAT FORMAT_const_char___GENPT___Display___GENPT___int_int
#define glXQuerySwapGroupNV_INDEX 246
#define glXQuerySwapGroupNV_RETURN Bool
#define glXQuerySwapGroupNV_ARG_NAMES dpy, drawable, group, barrier
#define glXQuerySwapGroupNV_ARG_EXPAND Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier
#define glXQuerySwapGroupNV_PACKED PACKED_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__
#define glXQuerySwapGroupNV_INDEXED INDEXED_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__
#define glXQuerySwapGroupNV_FORMAT FORMAT_Bool_Display___GENPT___GLXDrawable_GLuint___GENPT___GLuint___GENPT__
#define glXQueryVersion_INDEX 247
#define glXQueryVersion_RETURN Bool
#define glXQueryVersion_ARG_NAMES dpy, maj, min
#define glXQueryVersion_ARG_EXPAND Display * dpy, int * maj, int * min
#define glXQueryVersion_PACKED PACKED_Bool_Display___GENPT___int___GENPT___int___GENPT__
#define glXQueryVersion_INDEXED INDEXED_Bool_Display___GENPT___int___GENPT___int___GENPT__
#define glXQueryVersion_FORMAT FORMAT_Bool_Display___GENPT___int___GENPT___int___GENPT__
#define glXQueryVideoCaptureDeviceNV_INDEX 248
#define glXQueryVideoCaptureDeviceNV_RETURN int
#define glXQueryVideoCaptureDeviceNV_ARG_NAMES dpy, device, attribute, value
#define glXQueryVideoCaptureDeviceNV_ARG_EXPAND Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value
#define glXQueryVideoCaptureDeviceNV_PACKED PACKED_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__
#define glXQueryVideoCaptureDeviceNV_INDEXED INDEXED_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__
#define glXQueryVideoCaptureDeviceNV_FORMAT FORMAT_int_Display___GENPT___GLXVideoCaptureDeviceNV_int_int___GENPT__
#define glXReleaseBuffersMESA_INDEX 249
#define glXReleaseBuffersMESA_RETURN Bool
#define glXReleaseBuffersMESA_ARG_NAMES dpy, drawable
#define glXReleaseBuffersMESA_ARG_EXPAND Display * dpy, GLXDrawable drawable
#define glXReleaseBuffersMESA_PACKED PACKED_Bool_Display___GENPT___GLXDrawable
#define glXReleaseBuffersMESA_INDEXED INDEXED_Bool_Display___GENPT___GLXDrawable
#define glXReleaseBuffersMESA_FORMAT FORMAT_Bool_Display___GENPT___GLXDrawable
#define glXReleaseTexImageEXT_INDEX 250
#define glXReleaseTexImageEXT_RETURN void
#define glXReleaseTexImageEXT_ARG_NAMES dpy, drawable, buffer
#define glXReleaseTexImageEXT_ARG_EXPAND Display * dpy, GLXDrawable drawable, int buffer
#define glXReleaseTexImageEXT_PACKED PACKED_void_Display___GENPT___GLXDrawable_int
#define glXReleaseTexImageEXT_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_int
#define glXReleaseTexImageEXT_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_int
#define glXReleaseVideoCaptureDeviceNV_INDEX 251
#define glXReleaseVideoCaptureDeviceNV_RETURN void
#define glXReleaseVideoCaptureDeviceNV_ARG_NAMES dpy, device
#define glXReleaseVideoCaptureDeviceNV_ARG_EXPAND Display * dpy, GLXVideoCaptureDeviceNV device
#define glXReleaseVideoCaptureDeviceNV_PACKED PACKED_void_Display___GENPT___GLXVideoCaptureDeviceNV
#define glXReleaseVideoCaptureDeviceNV_INDEXED INDEXED_void_Display___GENPT___GLXVideoCaptureDeviceNV
#define glXReleaseVideoCaptureDeviceNV_FORMAT FORMAT_void_Display___GENPT___GLXVideoCaptureDeviceNV
#define glXReleaseVideoDeviceNV_INDEX 252
#define glXReleaseVideoDeviceNV_RETURN int
#define glXReleaseVideoDeviceNV_ARG_NAMES dpy, screen, VideoDevice
#define glXReleaseVideoDeviceNV_ARG_EXPAND Display * dpy, int screen, GLXVideoDeviceNV VideoDevice
#define glXReleaseVideoDeviceNV_PACKED PACKED_int_Display___GENPT___int_GLXVideoDeviceNV
#define glXReleaseVideoDeviceNV_INDEXED INDEXED_int_Display___GENPT___int_GLXVideoDeviceNV
#define glXReleaseVideoDeviceNV_FORMAT FORMAT_int_Display___GENPT___int_GLXVideoDeviceNV
#define glXReleaseVideoImageNV_INDEX 253
#define glXReleaseVideoImageNV_RETURN int
#define glXReleaseVideoImageNV_ARG_NAMES dpy, pbuf
#define glXReleaseVideoImageNV_ARG_EXPAND Display * dpy, GLXPbuffer pbuf
#define glXReleaseVideoImageNV_PACKED PACKED_int_Display___GENPT___GLXPbuffer
#define glXReleaseVideoImageNV_INDEXED INDEXED_int_Display___GENPT___GLXPbuffer
#define glXReleaseVideoImageNV_FORMAT FORMAT_int_Display___GENPT___GLXPbuffer
#define glXRender_INDEX 254
#define glXRender_RETURN void
#define glXRender_ARG_NAMES 
#define glXRender_ARG_EXPAND 
#define glXRender_PACKED PACKED_void
#define glXRender_INDEXED INDEXED_void
#define glXRender_FORMAT FORMAT_void
#define glXRenderLarge_INDEX 255
#define glXRenderLarge_RETURN void
#define glXRenderLarge_ARG_NAMES 
#define glXRenderLarge_ARG_EXPAND 
#define glXRenderLarge_PACKED PACKED_void
#define glXRenderLarge_INDEXED INDEXED_void
#define glXRenderLarge_FORMAT FORMAT_void
#define glXResetFrameCountNV_INDEX 256
#define glXResetFrameCountNV_RETURN Bool
#define glXResetFrameCountNV_ARG_NAMES dpy, screen
#define glXResetFrameCountNV_ARG_EXPAND Display * dpy, int screen
#define glXResetFrameCountNV_PACKED PACKED_Bool_Display___GENPT___int
#define glXResetFrameCountNV_INDEXED INDEXED_Bool_Display___GENPT___int
#define glXResetFrameCountNV_FORMAT FORMAT_Bool_Display___GENPT___int
#define glXSelectEvent_INDEX 257
#define glXSelectEvent_RETURN void
#define glXSelectEvent_ARG_NAMES dpy, draw, event_mask
#define glXSelectEvent_ARG_EXPAND Display * dpy, GLXDrawable draw, unsigned long event_mask
#define glXSelectEvent_PACKED PACKED_void_Display___GENPT___GLXDrawable_unsigned_long
#define glXSelectEvent_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_unsigned_long
#define glXSelectEvent_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_unsigned_long
#define glXSelectEventSGIX_INDEX 258
#define glXSelectEventSGIX_RETURN void
#define glXSelectEventSGIX_ARG_NAMES dpy, drawable, mask
#define glXSelectEventSGIX_ARG_EXPAND Display * dpy, GLXDrawable drawable, unsigned long mask
#define glXSelectEventSGIX_PACKED PACKED_void_Display___GENPT___GLXDrawable_unsigned_long
#define glXSelectEventSGIX_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_unsigned_long
#define glXSelectEventSGIX_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_unsigned_long
#define glXSendPbufferToVideoNV_INDEX 259
#define glXSendPbufferToVideoNV_RETURN int
#define glXSendPbufferToVideoNV_ARG_NAMES dpy, pbuf, iBufferType, pulCounterPbuffer, bBlock
#define glXSendPbufferToVideoNV_ARG_EXPAND Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock
#define glXSendPbufferToVideoNV_PACKED PACKED_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean
#define glXSendPbufferToVideoNV_INDEXED INDEXED_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean
#define glXSendPbufferToVideoNV_FORMAT FORMAT_int_Display___GENPT___GLXPbuffer_int_unsigned_long___GENPT___GLboolean
#define glXSet3DfxModeMESA_INDEX 260
#define glXSet3DfxModeMESA_RETURN Bool
#define glXSet3DfxModeMESA_ARG_NAMES mode
#define glXSet3DfxModeMESA_ARG_EXPAND int mode
#define glXSet3DfxModeMESA_PACKED PACKED_Bool_int
#define glXSet3DfxModeMESA_INDEXED INDEXED_Bool_int
#define glXSet3DfxModeMESA_FORMAT FORMAT_Bool_int
#define glXSwapBuffers_INDEX 261
#define glXSwapBuffers_RETURN void
#define glXSwapBuffers_ARG_NAMES dpy, drawable
#define glXSwapBuffers_ARG_EXPAND Display * dpy, GLXDrawable drawable
#define glXSwapBuffers_PACKED PACKED_void_Display___GENPT___GLXDrawable
#define glXSwapBuffers_INDEXED INDEXED_void_Display___GENPT___GLXDrawable
#define glXSwapBuffers_FORMAT FORMAT_void_Display___GENPT___GLXDrawable
#define glXSwapBuffersMscOML_INDEX 262
#define glXSwapBuffersMscOML_RETURN int64_t
#define glXSwapBuffersMscOML_ARG_NAMES dpy, drawable, target_msc, divisor, remainder
#define glXSwapBuffersMscOML_ARG_EXPAND Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder
#define glXSwapBuffersMscOML_PACKED PACKED_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t
#define glXSwapBuffersMscOML_INDEXED INDEXED_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t
#define glXSwapBuffersMscOML_FORMAT FORMAT_int64_t_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t
#define glXSwapIntervalEXT_INDEX 263
#define glXSwapIntervalEXT_RETURN void
#define glXSwapIntervalEXT_ARG_NAMES dpy, drawable, interval
#define glXSwapIntervalEXT_ARG_EXPAND Display * dpy, GLXDrawable drawable, int interval
#define glXSwapIntervalEXT_PACKED PACKED_void_Display___GENPT___GLXDrawable_int
#define glXSwapIntervalEXT_INDEXED INDEXED_void_Display___GENPT___GLXDrawable_int
#define glXSwapIntervalEXT_FORMAT FORMAT_void_Display___GENPT___GLXDrawable_int
#define glXSwapIntervalMESA_INDEX 264
#define glXSwapIntervalMESA_RETURN int
#define glXSwapIntervalMESA_ARG_NAMES interval
#define glXSwapIntervalMESA_ARG_EXPAND unsigned int interval
#define glXSwapIntervalMESA_PACKED PACKED_int_unsigned_int
#define glXSwapIntervalMESA_INDEXED INDEXED_int_unsigned_int
#define glXSwapIntervalMESA_FORMAT FORMAT_int_unsigned_int
#define glXSwapIntervalSGI_INDEX 265
#define glXSwapIntervalSGI_RETURN int
#define glXSwapIntervalSGI_ARG_NAMES interval
#define glXSwapIntervalSGI_ARG_EXPAND int interval
#define glXSwapIntervalSGI_PACKED PACKED_int_int
#define glXSwapIntervalSGI_INDEXED INDEXED_int_int
#define glXSwapIntervalSGI_FORMAT FORMAT_int_int
#define glXUseXFont_INDEX 266
#define glXUseXFont_RETURN void
#define glXUseXFont_ARG_NAMES font, first, count, list
#define glXUseXFont_ARG_EXPAND Font font, int first, int count, int list
#define glXUseXFont_PACKED PACKED_void_Font_int_int_int
#define glXUseXFont_INDEXED INDEXED_void_Font_int_int_int
#define glXUseXFont_FORMAT FORMAT_void_Font_int_int_int
#define glXVendorPrivate_INDEX 267
#define glXVendorPrivate_RETURN void
#define glXVendorPrivate_ARG_NAMES 
#define glXVendorPrivate_ARG_EXPAND 
#define glXVendorPrivate_PACKED PACKED_void
#define glXVendorPrivate_INDEXED INDEXED_void
#define glXVendorPrivate_FORMAT FORMAT_void
#define glXVendorPrivateWithReply_INDEX 268
#define glXVendorPrivateWithReply_RETURN void
#define glXVendorPrivateWithReply_ARG_NAMES 
#define glXVendorPrivateWithReply_ARG_EXPAND 
#define glXVendorPrivateWithReply_PACKED PACKED_void
#define glXVendorPrivateWithReply_INDEXED INDEXED_void
#define glXVendorPrivateWithReply_FORMAT FORMAT_void
#define glXWaitForMscOML_INDEX 269
#define glXWaitForMscOML_RETURN Bool
#define glXWaitForMscOML_ARG_NAMES dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc
#define glXWaitForMscOML_ARG_EXPAND Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc
#define glXWaitForMscOML_PACKED PACKED_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__
#define glXWaitForMscOML_INDEXED INDEXED_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__
#define glXWaitForMscOML_FORMAT FORMAT_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__
#define glXWaitForSbcOML_INDEX 270
#define glXWaitForSbcOML_RETURN Bool
#define glXWaitForSbcOML_ARG_NAMES dpy, drawable, target_sbc, ust, msc, sbc
#define glXWaitForSbcOML_ARG_EXPAND Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc
#define glXWaitForSbcOML_PACKED PACKED_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__
#define glXWaitForSbcOML_INDEXED INDEXED_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__
#define glXWaitForSbcOML_FORMAT FORMAT_Bool_Display___GENPT___GLXDrawable_int64_t_int64_t___GENPT___int64_t___GENPT___int64_t___GENPT__
#define glXWaitGL_INDEX 271
#define glXWaitGL_RETURN void
#define glXWaitGL_ARG_NAMES 
#define glXWaitGL_ARG_EXPAND 
#define glXWaitGL_PACKED PACKED_void
#define glXWaitGL_INDEXED INDEXED_void
#define glXWaitGL_FORMAT FORMAT_void
#define glXWaitVideoSyncSGI_INDEX 272
#define glXWaitVideoSyncSGI_RETURN int
#define glXWaitVideoSyncSGI_ARG_NAMES divisor, remainder, count
#define glXWaitVideoSyncSGI_ARG_EXPAND int divisor, int remainder, unsigned int * count
#define glXWaitVideoSyncSGI_PACKED PACKED_int_int_int_unsigned_int___GENPT__
#define glXWaitVideoSyncSGI_INDEXED INDEXED_int_int_int_unsigned_int___GENPT__
#define glXWaitVideoSyncSGI_FORMAT FORMAT_int_int_int_unsigned_int___GENPT__
#define glXWaitX_INDEX 273
#define glXWaitX_RETURN void
#define glXWaitX_ARG_NAMES 
#define glXWaitX_ARG_EXPAND 
#define glXWaitX_PACKED PACKED_void
#define glXWaitX_INDEXED INDEXED_void
#define glXWaitX_FORMAT FORMAT_void

void glActiveTexture(glActiveTexture_ARG_EXPAND);
typedef void (*glActiveTexture_PTR)(glActiveTexture_ARG_EXPAND);
void glAlphaFunc(glAlphaFunc_ARG_EXPAND);
typedef void (*glAlphaFunc_PTR)(glAlphaFunc_ARG_EXPAND);
void glAlphaFuncx(glAlphaFuncx_ARG_EXPAND);
typedef void (*glAlphaFuncx_PTR)(glAlphaFuncx_ARG_EXPAND);
void glBindBuffer(glBindBuffer_ARG_EXPAND);
typedef void (*glBindBuffer_PTR)(glBindBuffer_ARG_EXPAND);
void glBindTexture(glBindTexture_ARG_EXPAND);
typedef void (*glBindTexture_PTR)(glBindTexture_ARG_EXPAND);
void glBlendFunc(glBlendFunc_ARG_EXPAND);
typedef void (*glBlendFunc_PTR)(glBlendFunc_ARG_EXPAND);
void glBufferData(glBufferData_ARG_EXPAND);
typedef void (*glBufferData_PTR)(glBufferData_ARG_EXPAND);
void glBufferSubData(glBufferSubData_ARG_EXPAND);
typedef void (*glBufferSubData_PTR)(glBufferSubData_ARG_EXPAND);
void glClear(glClear_ARG_EXPAND);
typedef void (*glClear_PTR)(glClear_ARG_EXPAND);
void glClearColor(glClearColor_ARG_EXPAND);
typedef void (*glClearColor_PTR)(glClearColor_ARG_EXPAND);
void glClearColorx(glClearColorx_ARG_EXPAND);
typedef void (*glClearColorx_PTR)(glClearColorx_ARG_EXPAND);
void glClearDepthf(glClearDepthf_ARG_EXPAND);
typedef void (*glClearDepthf_PTR)(glClearDepthf_ARG_EXPAND);
void glClearDepthx(glClearDepthx_ARG_EXPAND);
typedef void (*glClearDepthx_PTR)(glClearDepthx_ARG_EXPAND);
void glClearStencil(glClearStencil_ARG_EXPAND);
typedef void (*glClearStencil_PTR)(glClearStencil_ARG_EXPAND);
void glClientActiveTexture(glClientActiveTexture_ARG_EXPAND);
typedef void (*glClientActiveTexture_PTR)(glClientActiveTexture_ARG_EXPAND);
void glClipPlanef(glClipPlanef_ARG_EXPAND);
typedef void (*glClipPlanef_PTR)(glClipPlanef_ARG_EXPAND);
void glClipPlanex(glClipPlanex_ARG_EXPAND);
typedef void (*glClipPlanex_PTR)(glClipPlanex_ARG_EXPAND);
void glColor4f(glColor4f_ARG_EXPAND);
typedef void (*glColor4f_PTR)(glColor4f_ARG_EXPAND);
void glColor4ub(glColor4ub_ARG_EXPAND);
typedef void (*glColor4ub_PTR)(glColor4ub_ARG_EXPAND);
void glColor4x(glColor4x_ARG_EXPAND);
typedef void (*glColor4x_PTR)(glColor4x_ARG_EXPAND);
void glColorMask(glColorMask_ARG_EXPAND);
typedef void (*glColorMask_PTR)(glColorMask_ARG_EXPAND);
void glColorPointer(glColorPointer_ARG_EXPAND);
typedef void (*glColorPointer_PTR)(glColorPointer_ARG_EXPAND);
void glCompressedTexImage2D(glCompressedTexImage2D_ARG_EXPAND);
typedef void (*glCompressedTexImage2D_PTR)(glCompressedTexImage2D_ARG_EXPAND);
void glCompressedTexSubImage2D(glCompressedTexSubImage2D_ARG_EXPAND);
typedef void (*glCompressedTexSubImage2D_PTR)(glCompressedTexSubImage2D_ARG_EXPAND);
void glCopyTexImage2D(glCopyTexImage2D_ARG_EXPAND);
typedef void (*glCopyTexImage2D_PTR)(glCopyTexImage2D_ARG_EXPAND);
void glCopyTexSubImage2D(glCopyTexSubImage2D_ARG_EXPAND);
typedef void (*glCopyTexSubImage2D_PTR)(glCopyTexSubImage2D_ARG_EXPAND);
void glCullFace(glCullFace_ARG_EXPAND);
typedef void (*glCullFace_PTR)(glCullFace_ARG_EXPAND);
void glDeleteBuffers(glDeleteBuffers_ARG_EXPAND);
typedef void (*glDeleteBuffers_PTR)(glDeleteBuffers_ARG_EXPAND);
void glDeleteTextures(glDeleteTextures_ARG_EXPAND);
typedef void (*glDeleteTextures_PTR)(glDeleteTextures_ARG_EXPAND);
void glDepthFunc(glDepthFunc_ARG_EXPAND);
typedef void (*glDepthFunc_PTR)(glDepthFunc_ARG_EXPAND);
void glDepthMask(glDepthMask_ARG_EXPAND);
typedef void (*glDepthMask_PTR)(glDepthMask_ARG_EXPAND);
void glDepthRangef(glDepthRangef_ARG_EXPAND);
typedef void (*glDepthRangef_PTR)(glDepthRangef_ARG_EXPAND);
void glDepthRangex(glDepthRangex_ARG_EXPAND);
typedef void (*glDepthRangex_PTR)(glDepthRangex_ARG_EXPAND);
void glDisable(glDisable_ARG_EXPAND);
typedef void (*glDisable_PTR)(glDisable_ARG_EXPAND);
void glDisableClientState(glDisableClientState_ARG_EXPAND);
typedef void (*glDisableClientState_PTR)(glDisableClientState_ARG_EXPAND);
void glDrawArrays(glDrawArrays_ARG_EXPAND);
typedef void (*glDrawArrays_PTR)(glDrawArrays_ARG_EXPAND);
void glDrawElements(glDrawElements_ARG_EXPAND);
typedef void (*glDrawElements_PTR)(glDrawElements_ARG_EXPAND);
void glEnable(glEnable_ARG_EXPAND);
typedef void (*glEnable_PTR)(glEnable_ARG_EXPAND);
void glEnableClientState(glEnableClientState_ARG_EXPAND);
typedef void (*glEnableClientState_PTR)(glEnableClientState_ARG_EXPAND);
void glFinish(glFinish_ARG_EXPAND);
typedef void (*glFinish_PTR)(glFinish_ARG_EXPAND);
void glFlush(glFlush_ARG_EXPAND);
typedef void (*glFlush_PTR)(glFlush_ARG_EXPAND);
void glFogf(glFogf_ARG_EXPAND);
typedef void (*glFogf_PTR)(glFogf_ARG_EXPAND);
void glFogfv(glFogfv_ARG_EXPAND);
typedef void (*glFogfv_PTR)(glFogfv_ARG_EXPAND);
void glFogx(glFogx_ARG_EXPAND);
typedef void (*glFogx_PTR)(glFogx_ARG_EXPAND);
void glFogxv(glFogxv_ARG_EXPAND);
typedef void (*glFogxv_PTR)(glFogxv_ARG_EXPAND);
void glFrontFace(glFrontFace_ARG_EXPAND);
typedef void (*glFrontFace_PTR)(glFrontFace_ARG_EXPAND);
void glFrustumf(glFrustumf_ARG_EXPAND);
typedef void (*glFrustumf_PTR)(glFrustumf_ARG_EXPAND);
void glFrustumx(glFrustumx_ARG_EXPAND);
typedef void (*glFrustumx_PTR)(glFrustumx_ARG_EXPAND);
void glGenBuffers(glGenBuffers_ARG_EXPAND);
typedef void (*glGenBuffers_PTR)(glGenBuffers_ARG_EXPAND);
void glGenTextures(glGenTextures_ARG_EXPAND);
typedef void (*glGenTextures_PTR)(glGenTextures_ARG_EXPAND);
void glGetBooleanv(glGetBooleanv_ARG_EXPAND);
typedef void (*glGetBooleanv_PTR)(glGetBooleanv_ARG_EXPAND);
void glGetBufferParameteriv(glGetBufferParameteriv_ARG_EXPAND);
typedef void (*glGetBufferParameteriv_PTR)(glGetBufferParameteriv_ARG_EXPAND);
void glGetClipPlanef(glGetClipPlanef_ARG_EXPAND);
typedef void (*glGetClipPlanef_PTR)(glGetClipPlanef_ARG_EXPAND);
void glGetClipPlanex(glGetClipPlanex_ARG_EXPAND);
typedef void (*glGetClipPlanex_PTR)(glGetClipPlanex_ARG_EXPAND);
GLenum glGetError(glGetError_ARG_EXPAND);
typedef GLenum (*glGetError_PTR)(glGetError_ARG_EXPAND);
void glGetFixedv(glGetFixedv_ARG_EXPAND);
typedef void (*glGetFixedv_PTR)(glGetFixedv_ARG_EXPAND);
void glGetFloatv(glGetFloatv_ARG_EXPAND);
typedef void (*glGetFloatv_PTR)(glGetFloatv_ARG_EXPAND);
void glGetIntegerv(glGetIntegerv_ARG_EXPAND);
typedef void (*glGetIntegerv_PTR)(glGetIntegerv_ARG_EXPAND);
void glGetLightfv(glGetLightfv_ARG_EXPAND);
typedef void (*glGetLightfv_PTR)(glGetLightfv_ARG_EXPAND);
void glGetLightxv(glGetLightxv_ARG_EXPAND);
typedef void (*glGetLightxv_PTR)(glGetLightxv_ARG_EXPAND);
void glGetMaterialfv(glGetMaterialfv_ARG_EXPAND);
typedef void (*glGetMaterialfv_PTR)(glGetMaterialfv_ARG_EXPAND);
void glGetMaterialxv(glGetMaterialxv_ARG_EXPAND);
typedef void (*glGetMaterialxv_PTR)(glGetMaterialxv_ARG_EXPAND);
void glGetPointerv(glGetPointerv_ARG_EXPAND);
typedef void (*glGetPointerv_PTR)(glGetPointerv_ARG_EXPAND);
const GLubyte * glGetString(glGetString_ARG_EXPAND);
typedef const GLubyte * (*glGetString_PTR)(glGetString_ARG_EXPAND);
void glGetTexEnvfv(glGetTexEnvfv_ARG_EXPAND);
typedef void (*glGetTexEnvfv_PTR)(glGetTexEnvfv_ARG_EXPAND);
void glGetTexEnviv(glGetTexEnviv_ARG_EXPAND);
typedef void (*glGetTexEnviv_PTR)(glGetTexEnviv_ARG_EXPAND);
void glGetTexEnvxv(glGetTexEnvxv_ARG_EXPAND);
typedef void (*glGetTexEnvxv_PTR)(glGetTexEnvxv_ARG_EXPAND);
void glGetTexParameterfv(glGetTexParameterfv_ARG_EXPAND);
typedef void (*glGetTexParameterfv_PTR)(glGetTexParameterfv_ARG_EXPAND);
void glGetTexParameteriv(glGetTexParameteriv_ARG_EXPAND);
typedef void (*glGetTexParameteriv_PTR)(glGetTexParameteriv_ARG_EXPAND);
void glGetTexParameterxv(glGetTexParameterxv_ARG_EXPAND);
typedef void (*glGetTexParameterxv_PTR)(glGetTexParameterxv_ARG_EXPAND);
void glHint(glHint_ARG_EXPAND);
typedef void (*glHint_PTR)(glHint_ARG_EXPAND);
GLboolean glIsBuffer(glIsBuffer_ARG_EXPAND);
typedef GLboolean (*glIsBuffer_PTR)(glIsBuffer_ARG_EXPAND);
GLboolean glIsEnabled(glIsEnabled_ARG_EXPAND);
typedef GLboolean (*glIsEnabled_PTR)(glIsEnabled_ARG_EXPAND);
GLboolean glIsTexture(glIsTexture_ARG_EXPAND);
typedef GLboolean (*glIsTexture_PTR)(glIsTexture_ARG_EXPAND);
void glLightModelf(glLightModelf_ARG_EXPAND);
typedef void (*glLightModelf_PTR)(glLightModelf_ARG_EXPAND);
void glLightModelfv(glLightModelfv_ARG_EXPAND);
typedef void (*glLightModelfv_PTR)(glLightModelfv_ARG_EXPAND);
void glLightModelx(glLightModelx_ARG_EXPAND);
typedef void (*glLightModelx_PTR)(glLightModelx_ARG_EXPAND);
void glLightModelxv(glLightModelxv_ARG_EXPAND);
typedef void (*glLightModelxv_PTR)(glLightModelxv_ARG_EXPAND);
void glLightf(glLightf_ARG_EXPAND);
typedef void (*glLightf_PTR)(glLightf_ARG_EXPAND);
void glLightfv(glLightfv_ARG_EXPAND);
typedef void (*glLightfv_PTR)(glLightfv_ARG_EXPAND);
void glLightx(glLightx_ARG_EXPAND);
typedef void (*glLightx_PTR)(glLightx_ARG_EXPAND);
void glLightxv(glLightxv_ARG_EXPAND);
typedef void (*glLightxv_PTR)(glLightxv_ARG_EXPAND);
void glLineWidth(glLineWidth_ARG_EXPAND);
typedef void (*glLineWidth_PTR)(glLineWidth_ARG_EXPAND);
void glLineWidthx(glLineWidthx_ARG_EXPAND);
typedef void (*glLineWidthx_PTR)(glLineWidthx_ARG_EXPAND);
void glLoadIdentity(glLoadIdentity_ARG_EXPAND);
typedef void (*glLoadIdentity_PTR)(glLoadIdentity_ARG_EXPAND);
void glLoadMatrixf(glLoadMatrixf_ARG_EXPAND);
typedef void (*glLoadMatrixf_PTR)(glLoadMatrixf_ARG_EXPAND);
void glLoadMatrixx(glLoadMatrixx_ARG_EXPAND);
typedef void (*glLoadMatrixx_PTR)(glLoadMatrixx_ARG_EXPAND);
void glLogicOp(glLogicOp_ARG_EXPAND);
typedef void (*glLogicOp_PTR)(glLogicOp_ARG_EXPAND);
void glMaterialf(glMaterialf_ARG_EXPAND);
typedef void (*glMaterialf_PTR)(glMaterialf_ARG_EXPAND);
void glMaterialfv(glMaterialfv_ARG_EXPAND);
typedef void (*glMaterialfv_PTR)(glMaterialfv_ARG_EXPAND);
void glMaterialx(glMaterialx_ARG_EXPAND);
typedef void (*glMaterialx_PTR)(glMaterialx_ARG_EXPAND);
void glMaterialxv(glMaterialxv_ARG_EXPAND);
typedef void (*glMaterialxv_PTR)(glMaterialxv_ARG_EXPAND);
void glMatrixMode(glMatrixMode_ARG_EXPAND);
typedef void (*glMatrixMode_PTR)(glMatrixMode_ARG_EXPAND);
void glMultMatrixf(glMultMatrixf_ARG_EXPAND);
typedef void (*glMultMatrixf_PTR)(glMultMatrixf_ARG_EXPAND);
void glMultMatrixx(glMultMatrixx_ARG_EXPAND);
typedef void (*glMultMatrixx_PTR)(glMultMatrixx_ARG_EXPAND);
void glMultiTexCoord4f(glMultiTexCoord4f_ARG_EXPAND);
typedef void (*glMultiTexCoord4f_PTR)(glMultiTexCoord4f_ARG_EXPAND);
void glMultiTexCoord4x(glMultiTexCoord4x_ARG_EXPAND);
typedef void (*glMultiTexCoord4x_PTR)(glMultiTexCoord4x_ARG_EXPAND);
void glNormal3f(glNormal3f_ARG_EXPAND);
typedef void (*glNormal3f_PTR)(glNormal3f_ARG_EXPAND);
void glNormal3x(glNormal3x_ARG_EXPAND);
typedef void (*glNormal3x_PTR)(glNormal3x_ARG_EXPAND);
void glNormalPointer(glNormalPointer_ARG_EXPAND);
typedef void (*glNormalPointer_PTR)(glNormalPointer_ARG_EXPAND);
void glOrthof(glOrthof_ARG_EXPAND);
typedef void (*glOrthof_PTR)(glOrthof_ARG_EXPAND);
void glOrthox(glOrthox_ARG_EXPAND);
typedef void (*glOrthox_PTR)(glOrthox_ARG_EXPAND);
void glPixelStorei(glPixelStorei_ARG_EXPAND);
typedef void (*glPixelStorei_PTR)(glPixelStorei_ARG_EXPAND);
void glPointParameterf(glPointParameterf_ARG_EXPAND);
typedef void (*glPointParameterf_PTR)(glPointParameterf_ARG_EXPAND);
void glPointParameterfv(glPointParameterfv_ARG_EXPAND);
typedef void (*glPointParameterfv_PTR)(glPointParameterfv_ARG_EXPAND);
void glPointParameterx(glPointParameterx_ARG_EXPAND);
typedef void (*glPointParameterx_PTR)(glPointParameterx_ARG_EXPAND);
void glPointParameterxv(glPointParameterxv_ARG_EXPAND);
typedef void (*glPointParameterxv_PTR)(glPointParameterxv_ARG_EXPAND);
void glPointSize(glPointSize_ARG_EXPAND);
typedef void (*glPointSize_PTR)(glPointSize_ARG_EXPAND);
void glPointSizePointerOES(glPointSizePointerOES_ARG_EXPAND);
typedef void (*glPointSizePointerOES_PTR)(glPointSizePointerOES_ARG_EXPAND);
void glPointSizex(glPointSizex_ARG_EXPAND);
typedef void (*glPointSizex_PTR)(glPointSizex_ARG_EXPAND);
void glPolygonOffset(glPolygonOffset_ARG_EXPAND);
typedef void (*glPolygonOffset_PTR)(glPolygonOffset_ARG_EXPAND);
void glPolygonOffsetx(glPolygonOffsetx_ARG_EXPAND);
typedef void (*glPolygonOffsetx_PTR)(glPolygonOffsetx_ARG_EXPAND);
void glPopMatrix(glPopMatrix_ARG_EXPAND);
typedef void (*glPopMatrix_PTR)(glPopMatrix_ARG_EXPAND);
void glPushMatrix(glPushMatrix_ARG_EXPAND);
typedef void (*glPushMatrix_PTR)(glPushMatrix_ARG_EXPAND);
void glReadPixels(glReadPixels_ARG_EXPAND);
typedef void (*glReadPixels_PTR)(glReadPixels_ARG_EXPAND);
void glRotatef(glRotatef_ARG_EXPAND);
typedef void (*glRotatef_PTR)(glRotatef_ARG_EXPAND);
void glRotatex(glRotatex_ARG_EXPAND);
typedef void (*glRotatex_PTR)(glRotatex_ARG_EXPAND);
void glSampleCoverage(glSampleCoverage_ARG_EXPAND);
typedef void (*glSampleCoverage_PTR)(glSampleCoverage_ARG_EXPAND);
void glSampleCoveragex(glSampleCoveragex_ARG_EXPAND);
typedef void (*glSampleCoveragex_PTR)(glSampleCoveragex_ARG_EXPAND);
void glScalef(glScalef_ARG_EXPAND);
typedef void (*glScalef_PTR)(glScalef_ARG_EXPAND);
void glScalex(glScalex_ARG_EXPAND);
typedef void (*glScalex_PTR)(glScalex_ARG_EXPAND);
void glScissor(glScissor_ARG_EXPAND);
typedef void (*glScissor_PTR)(glScissor_ARG_EXPAND);
void glShadeModel(glShadeModel_ARG_EXPAND);
typedef void (*glShadeModel_PTR)(glShadeModel_ARG_EXPAND);
void glStencilFunc(glStencilFunc_ARG_EXPAND);
typedef void (*glStencilFunc_PTR)(glStencilFunc_ARG_EXPAND);
void glStencilMask(glStencilMask_ARG_EXPAND);
typedef void (*glStencilMask_PTR)(glStencilMask_ARG_EXPAND);
void glStencilOp(glStencilOp_ARG_EXPAND);
typedef void (*glStencilOp_PTR)(glStencilOp_ARG_EXPAND);
void glTexCoordPointer(glTexCoordPointer_ARG_EXPAND);
typedef void (*glTexCoordPointer_PTR)(glTexCoordPointer_ARG_EXPAND);
void glTexEnvf(glTexEnvf_ARG_EXPAND);
typedef void (*glTexEnvf_PTR)(glTexEnvf_ARG_EXPAND);
void glTexEnvfv(glTexEnvfv_ARG_EXPAND);
typedef void (*glTexEnvfv_PTR)(glTexEnvfv_ARG_EXPAND);
void glTexEnvi(glTexEnvi_ARG_EXPAND);
typedef void (*glTexEnvi_PTR)(glTexEnvi_ARG_EXPAND);
void glTexEnviv(glTexEnviv_ARG_EXPAND);
typedef void (*glTexEnviv_PTR)(glTexEnviv_ARG_EXPAND);
void glTexEnvx(glTexEnvx_ARG_EXPAND);
typedef void (*glTexEnvx_PTR)(glTexEnvx_ARG_EXPAND);
void glTexEnvxv(glTexEnvxv_ARG_EXPAND);
typedef void (*glTexEnvxv_PTR)(glTexEnvxv_ARG_EXPAND);
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
void glTexParameterx(glTexParameterx_ARG_EXPAND);
typedef void (*glTexParameterx_PTR)(glTexParameterx_ARG_EXPAND);
void glTexParameterxv(glTexParameterxv_ARG_EXPAND);
typedef void (*glTexParameterxv_PTR)(glTexParameterxv_ARG_EXPAND);
void glTexSubImage2D(glTexSubImage2D_ARG_EXPAND);
typedef void (*glTexSubImage2D_PTR)(glTexSubImage2D_ARG_EXPAND);
void glTranslatef(glTranslatef_ARG_EXPAND);
typedef void (*glTranslatef_PTR)(glTranslatef_ARG_EXPAND);
void glTranslatex(glTranslatex_ARG_EXPAND);
typedef void (*glTranslatex_PTR)(glTranslatex_ARG_EXPAND);
void glVertexPointer(glVertexPointer_ARG_EXPAND);
typedef void (*glVertexPointer_PTR)(glVertexPointer_ARG_EXPAND);
void glViewport(glViewport_ARG_EXPAND);
typedef void (*glViewport_PTR)(glViewport_ARG_EXPAND);
Bool glXAssociateDMPbufferSGIX(glXAssociateDMPbufferSGIX_ARG_EXPAND);
typedef Bool (*glXAssociateDMPbufferSGIX_PTR)(glXAssociateDMPbufferSGIX_ARG_EXPAND);
int glXBindChannelToWindowSGIX(glXBindChannelToWindowSGIX_ARG_EXPAND);
typedef int (*glXBindChannelToWindowSGIX_PTR)(glXBindChannelToWindowSGIX_ARG_EXPAND);
int glXBindHyperpipeSGIX(glXBindHyperpipeSGIX_ARG_EXPAND);
typedef int (*glXBindHyperpipeSGIX_PTR)(glXBindHyperpipeSGIX_ARG_EXPAND);
Bool glXBindSwapBarrierNV(glXBindSwapBarrierNV_ARG_EXPAND);
typedef Bool (*glXBindSwapBarrierNV_PTR)(glXBindSwapBarrierNV_ARG_EXPAND);
void glXBindSwapBarrierSGIX(glXBindSwapBarrierSGIX_ARG_EXPAND);
typedef void (*glXBindSwapBarrierSGIX_PTR)(glXBindSwapBarrierSGIX_ARG_EXPAND);
void glXBindTexImageEXT(glXBindTexImageEXT_ARG_EXPAND);
typedef void (*glXBindTexImageEXT_PTR)(glXBindTexImageEXT_ARG_EXPAND);
int glXBindVideoCaptureDeviceNV(glXBindVideoCaptureDeviceNV_ARG_EXPAND);
typedef int (*glXBindVideoCaptureDeviceNV_PTR)(glXBindVideoCaptureDeviceNV_ARG_EXPAND);
int glXBindVideoDeviceNV(glXBindVideoDeviceNV_ARG_EXPAND);
typedef int (*glXBindVideoDeviceNV_PTR)(glXBindVideoDeviceNV_ARG_EXPAND);
int glXBindVideoImageNV(glXBindVideoImageNV_ARG_EXPAND);
typedef int (*glXBindVideoImageNV_PTR)(glXBindVideoImageNV_ARG_EXPAND);
void glXChangeDrawableAttributes(glXChangeDrawableAttributes_ARG_EXPAND);
typedef void (*glXChangeDrawableAttributes_PTR)(glXChangeDrawableAttributes_ARG_EXPAND);
void glXChangeDrawableAttributesSGIX(glXChangeDrawableAttributesSGIX_ARG_EXPAND);
typedef void (*glXChangeDrawableAttributesSGIX_PTR)(glXChangeDrawableAttributesSGIX_ARG_EXPAND);
int glXChannelRectSGIX(glXChannelRectSGIX_ARG_EXPAND);
typedef int (*glXChannelRectSGIX_PTR)(glXChannelRectSGIX_ARG_EXPAND);
int glXChannelRectSyncSGIX(glXChannelRectSyncSGIX_ARG_EXPAND);
typedef int (*glXChannelRectSyncSGIX_PTR)(glXChannelRectSyncSGIX_ARG_EXPAND);
GLXFBConfig * glXChooseFBConfig(glXChooseFBConfig_ARG_EXPAND);
typedef GLXFBConfig * (*glXChooseFBConfig_PTR)(glXChooseFBConfig_ARG_EXPAND);
GLXFBConfigSGIX * glXChooseFBConfigSGIX(glXChooseFBConfigSGIX_ARG_EXPAND);
typedef GLXFBConfigSGIX * (*glXChooseFBConfigSGIX_PTR)(glXChooseFBConfigSGIX_ARG_EXPAND);
XVisualInfo * glXChooseVisual(glXChooseVisual_ARG_EXPAND);
typedef XVisualInfo * (*glXChooseVisual_PTR)(glXChooseVisual_ARG_EXPAND);
void glXClientInfo(glXClientInfo_ARG_EXPAND);
typedef void (*glXClientInfo_PTR)(glXClientInfo_ARG_EXPAND);
void glXCopyContext(glXCopyContext_ARG_EXPAND);
typedef void (*glXCopyContext_PTR)(glXCopyContext_ARG_EXPAND);
void glXCopyImageSubDataNV(glXCopyImageSubDataNV_ARG_EXPAND);
typedef void (*glXCopyImageSubDataNV_PTR)(glXCopyImageSubDataNV_ARG_EXPAND);
void glXCopySubBufferMESA(glXCopySubBufferMESA_ARG_EXPAND);
typedef void (*glXCopySubBufferMESA_PTR)(glXCopySubBufferMESA_ARG_EXPAND);
GLXContext glXCreateContext(glXCreateContext_ARG_EXPAND);
typedef GLXContext (*glXCreateContext_PTR)(glXCreateContext_ARG_EXPAND);
GLXContext glXCreateContextAttribsARB(glXCreateContextAttribsARB_ARG_EXPAND);
typedef GLXContext (*glXCreateContextAttribsARB_PTR)(glXCreateContextAttribsARB_ARG_EXPAND);
GLXContext glXCreateContextWithConfigSGIX(glXCreateContextWithConfigSGIX_ARG_EXPAND);
typedef GLXContext (*glXCreateContextWithConfigSGIX_PTR)(glXCreateContextWithConfigSGIX_ARG_EXPAND);
GLXPbufferSGIX glXCreateGLXPbufferSGIX(glXCreateGLXPbufferSGIX_ARG_EXPAND);
typedef GLXPbufferSGIX (*glXCreateGLXPbufferSGIX_PTR)(glXCreateGLXPbufferSGIX_ARG_EXPAND);
GLXPixmap glXCreateGLXPixmap(glXCreateGLXPixmap_ARG_EXPAND);
typedef GLXPixmap (*glXCreateGLXPixmap_PTR)(glXCreateGLXPixmap_ARG_EXPAND);
GLXPixmap glXCreateGLXPixmapMESA(glXCreateGLXPixmapMESA_ARG_EXPAND);
typedef GLXPixmap (*glXCreateGLXPixmapMESA_PTR)(glXCreateGLXPixmapMESA_ARG_EXPAND);
GLXPixmap glXCreateGLXPixmapWithConfigSGIX(glXCreateGLXPixmapWithConfigSGIX_ARG_EXPAND);
typedef GLXPixmap (*glXCreateGLXPixmapWithConfigSGIX_PTR)(glXCreateGLXPixmapWithConfigSGIX_ARG_EXPAND);
GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX(glXCreateGLXVideoSourceSGIX_ARG_EXPAND);
typedef GLXVideoSourceSGIX (*glXCreateGLXVideoSourceSGIX_PTR)(glXCreateGLXVideoSourceSGIX_ARG_EXPAND);
GLXContext glXCreateNewContext(glXCreateNewContext_ARG_EXPAND);
typedef GLXContext (*glXCreateNewContext_PTR)(glXCreateNewContext_ARG_EXPAND);
GLXPbuffer glXCreatePbuffer(glXCreatePbuffer_ARG_EXPAND);
typedef GLXPbuffer (*glXCreatePbuffer_PTR)(glXCreatePbuffer_ARG_EXPAND);
GLXPixmap glXCreatePixmap(glXCreatePixmap_ARG_EXPAND);
typedef GLXPixmap (*glXCreatePixmap_PTR)(glXCreatePixmap_ARG_EXPAND);
GLXWindow glXCreateWindow(glXCreateWindow_ARG_EXPAND);
typedef GLXWindow (*glXCreateWindow_PTR)(glXCreateWindow_ARG_EXPAND);
void glXCushionSGI(glXCushionSGI_ARG_EXPAND);
typedef void (*glXCushionSGI_PTR)(glXCushionSGI_ARG_EXPAND);
void glXDestroyContext(glXDestroyContext_ARG_EXPAND);
typedef void (*glXDestroyContext_PTR)(glXDestroyContext_ARG_EXPAND);
void glXDestroyGLXPbufferSGIX(glXDestroyGLXPbufferSGIX_ARG_EXPAND);
typedef void (*glXDestroyGLXPbufferSGIX_PTR)(glXDestroyGLXPbufferSGIX_ARG_EXPAND);
void glXDestroyGLXPixmap(glXDestroyGLXPixmap_ARG_EXPAND);
typedef void (*glXDestroyGLXPixmap_PTR)(glXDestroyGLXPixmap_ARG_EXPAND);
void glXDestroyGLXVideoSourceSGIX(glXDestroyGLXVideoSourceSGIX_ARG_EXPAND);
typedef void (*glXDestroyGLXVideoSourceSGIX_PTR)(glXDestroyGLXVideoSourceSGIX_ARG_EXPAND);
int glXDestroyHyperpipeConfigSGIX(glXDestroyHyperpipeConfigSGIX_ARG_EXPAND);
typedef int (*glXDestroyHyperpipeConfigSGIX_PTR)(glXDestroyHyperpipeConfigSGIX_ARG_EXPAND);
void glXDestroyPbuffer(glXDestroyPbuffer_ARG_EXPAND);
typedef void (*glXDestroyPbuffer_PTR)(glXDestroyPbuffer_ARG_EXPAND);
void glXDestroyPixmap(glXDestroyPixmap_ARG_EXPAND);
typedef void (*glXDestroyPixmap_PTR)(glXDestroyPixmap_ARG_EXPAND);
void glXDestroyWindow(glXDestroyWindow_ARG_EXPAND);
typedef void (*glXDestroyWindow_PTR)(glXDestroyWindow_ARG_EXPAND);
GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV(glXEnumerateVideoCaptureDevicesNV_ARG_EXPAND);
typedef GLXVideoCaptureDeviceNV * (*glXEnumerateVideoCaptureDevicesNV_PTR)(glXEnumerateVideoCaptureDevicesNV_ARG_EXPAND);
unsigned int * glXEnumerateVideoDevicesNV(glXEnumerateVideoDevicesNV_ARG_EXPAND);
typedef unsigned int * (*glXEnumerateVideoDevicesNV_PTR)(glXEnumerateVideoDevicesNV_ARG_EXPAND);
void glXFreeContextEXT(glXFreeContextEXT_ARG_EXPAND);
typedef void (*glXFreeContextEXT_PTR)(glXFreeContextEXT_ARG_EXPAND);
unsigned int glXGetAGPOffsetMESA(glXGetAGPOffsetMESA_ARG_EXPAND);
typedef unsigned int (*glXGetAGPOffsetMESA_PTR)(glXGetAGPOffsetMESA_ARG_EXPAND);
const char * glXGetClientString(glXGetClientString_ARG_EXPAND);
typedef const char * (*glXGetClientString_PTR)(glXGetClientString_ARG_EXPAND);
int glXGetConfig(glXGetConfig_ARG_EXPAND);
typedef int (*glXGetConfig_PTR)(glXGetConfig_ARG_EXPAND);
GLXContextID glXGetContextIDEXT(glXGetContextIDEXT_ARG_EXPAND);
typedef GLXContextID (*glXGetContextIDEXT_PTR)(glXGetContextIDEXT_ARG_EXPAND);
GLXContext glXGetCurrentContext(glXGetCurrentContext_ARG_EXPAND);
typedef GLXContext (*glXGetCurrentContext_PTR)(glXGetCurrentContext_ARG_EXPAND);
Display * glXGetCurrentDisplay(glXGetCurrentDisplay_ARG_EXPAND);
typedef Display * (*glXGetCurrentDisplay_PTR)(glXGetCurrentDisplay_ARG_EXPAND);
Display * glXGetCurrentDisplayEXT(glXGetCurrentDisplayEXT_ARG_EXPAND);
typedef Display * (*glXGetCurrentDisplayEXT_PTR)(glXGetCurrentDisplayEXT_ARG_EXPAND);
GLXDrawable glXGetCurrentDrawable(glXGetCurrentDrawable_ARG_EXPAND);
typedef GLXDrawable (*glXGetCurrentDrawable_PTR)(glXGetCurrentDrawable_ARG_EXPAND);
GLXDrawable glXGetCurrentReadDrawable(glXGetCurrentReadDrawable_ARG_EXPAND);
typedef GLXDrawable (*glXGetCurrentReadDrawable_PTR)(glXGetCurrentReadDrawable_ARG_EXPAND);
GLXDrawable glXGetCurrentReadDrawableSGI(glXGetCurrentReadDrawableSGI_ARG_EXPAND);
typedef GLXDrawable (*glXGetCurrentReadDrawableSGI_PTR)(glXGetCurrentReadDrawableSGI_ARG_EXPAND);
void glXGetDrawableAttributes(glXGetDrawableAttributes_ARG_EXPAND);
typedef void (*glXGetDrawableAttributes_PTR)(glXGetDrawableAttributes_ARG_EXPAND);
void glXGetDrawableAttributesSGIX(glXGetDrawableAttributesSGIX_ARG_EXPAND);
typedef void (*glXGetDrawableAttributesSGIX_PTR)(glXGetDrawableAttributesSGIX_ARG_EXPAND);
int glXGetFBConfigAttrib(glXGetFBConfigAttrib_ARG_EXPAND);
typedef int (*glXGetFBConfigAttrib_PTR)(glXGetFBConfigAttrib_ARG_EXPAND);
int glXGetFBConfigAttribSGIX(glXGetFBConfigAttribSGIX_ARG_EXPAND);
typedef int (*glXGetFBConfigAttribSGIX_PTR)(glXGetFBConfigAttribSGIX_ARG_EXPAND);
GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX(glXGetFBConfigFromVisualSGIX_ARG_EXPAND);
typedef GLXFBConfigSGIX (*glXGetFBConfigFromVisualSGIX_PTR)(glXGetFBConfigFromVisualSGIX_ARG_EXPAND);
GLXFBConfig * glXGetFBConfigs(glXGetFBConfigs_ARG_EXPAND);
typedef GLXFBConfig * (*glXGetFBConfigs_PTR)(glXGetFBConfigs_ARG_EXPAND);
void glXGetFBConfigsSGIX(glXGetFBConfigsSGIX_ARG_EXPAND);
typedef void (*glXGetFBConfigsSGIX_PTR)(glXGetFBConfigsSGIX_ARG_EXPAND);
Bool glXGetMscRateOML(glXGetMscRateOML_ARG_EXPAND);
typedef Bool (*glXGetMscRateOML_PTR)(glXGetMscRateOML_ARG_EXPAND);
__GLXextFuncPtr glXGetProcAddress(glXGetProcAddress_ARG_EXPAND);
typedef __GLXextFuncPtr (*glXGetProcAddress_PTR)(glXGetProcAddress_ARG_EXPAND);
__GLXextFuncPtr glXGetProcAddressARB(glXGetProcAddressARB_ARG_EXPAND);
typedef __GLXextFuncPtr (*glXGetProcAddressARB_PTR)(glXGetProcAddressARB_ARG_EXPAND);
void glXGetSelectedEvent(glXGetSelectedEvent_ARG_EXPAND);
typedef void (*glXGetSelectedEvent_PTR)(glXGetSelectedEvent_ARG_EXPAND);
void glXGetSelectedEventSGIX(glXGetSelectedEventSGIX_ARG_EXPAND);
typedef void (*glXGetSelectedEventSGIX_PTR)(glXGetSelectedEventSGIX_ARG_EXPAND);
Bool glXGetSyncValuesOML(glXGetSyncValuesOML_ARG_EXPAND);
typedef Bool (*glXGetSyncValuesOML_PTR)(glXGetSyncValuesOML_ARG_EXPAND);
Status glXGetTransparentIndexSUN(glXGetTransparentIndexSUN_ARG_EXPAND);
typedef Status (*glXGetTransparentIndexSUN_PTR)(glXGetTransparentIndexSUN_ARG_EXPAND);
int glXGetVideoDeviceNV(glXGetVideoDeviceNV_ARG_EXPAND);
typedef int (*glXGetVideoDeviceNV_PTR)(glXGetVideoDeviceNV_ARG_EXPAND);
int glXGetVideoInfoNV(glXGetVideoInfoNV_ARG_EXPAND);
typedef int (*glXGetVideoInfoNV_PTR)(glXGetVideoInfoNV_ARG_EXPAND);
int glXGetVideoSyncSGI(glXGetVideoSyncSGI_ARG_EXPAND);
typedef int (*glXGetVideoSyncSGI_PTR)(glXGetVideoSyncSGI_ARG_EXPAND);
void glXGetVisualConfigs(glXGetVisualConfigs_ARG_EXPAND);
typedef void (*glXGetVisualConfigs_PTR)(glXGetVisualConfigs_ARG_EXPAND);
XVisualInfo * glXGetVisualFromFBConfig(glXGetVisualFromFBConfig_ARG_EXPAND);
typedef XVisualInfo * (*glXGetVisualFromFBConfig_PTR)(glXGetVisualFromFBConfig_ARG_EXPAND);
XVisualInfo * glXGetVisualFromFBConfigSGIX(glXGetVisualFromFBConfigSGIX_ARG_EXPAND);
typedef XVisualInfo * (*glXGetVisualFromFBConfigSGIX_PTR)(glXGetVisualFromFBConfigSGIX_ARG_EXPAND);
int glXHyperpipeAttribSGIX(glXHyperpipeAttribSGIX_ARG_EXPAND);
typedef int (*glXHyperpipeAttribSGIX_PTR)(glXHyperpipeAttribSGIX_ARG_EXPAND);
int glXHyperpipeConfigSGIX(glXHyperpipeConfigSGIX_ARG_EXPAND);
typedef int (*glXHyperpipeConfigSGIX_PTR)(glXHyperpipeConfigSGIX_ARG_EXPAND);
GLXContext glXImportContextEXT(glXImportContextEXT_ARG_EXPAND);
typedef GLXContext (*glXImportContextEXT_PTR)(glXImportContextEXT_ARG_EXPAND);
Bool glXIsDirect(glXIsDirect_ARG_EXPAND);
typedef Bool (*glXIsDirect_PTR)(glXIsDirect_ARG_EXPAND);
Bool glXJoinSwapGroupNV(glXJoinSwapGroupNV_ARG_EXPAND);
typedef Bool (*glXJoinSwapGroupNV_PTR)(glXJoinSwapGroupNV_ARG_EXPAND);
void glXJoinSwapGroupSGIX(glXJoinSwapGroupSGIX_ARG_EXPAND);
typedef void (*glXJoinSwapGroupSGIX_PTR)(glXJoinSwapGroupSGIX_ARG_EXPAND);
void glXLockVideoCaptureDeviceNV(glXLockVideoCaptureDeviceNV_ARG_EXPAND);
typedef void (*glXLockVideoCaptureDeviceNV_PTR)(glXLockVideoCaptureDeviceNV_ARG_EXPAND);
Bool glXMakeContextCurrent(glXMakeContextCurrent_ARG_EXPAND);
typedef Bool (*glXMakeContextCurrent_PTR)(glXMakeContextCurrent_ARG_EXPAND);
Bool glXMakeCurrent(glXMakeCurrent_ARG_EXPAND);
typedef Bool (*glXMakeCurrent_PTR)(glXMakeCurrent_ARG_EXPAND);
Bool glXMakeCurrentReadSGI(glXMakeCurrentReadSGI_ARG_EXPAND);
typedef Bool (*glXMakeCurrentReadSGI_PTR)(glXMakeCurrentReadSGI_ARG_EXPAND);
int glXQueryChannelDeltasSGIX(glXQueryChannelDeltasSGIX_ARG_EXPAND);
typedef int (*glXQueryChannelDeltasSGIX_PTR)(glXQueryChannelDeltasSGIX_ARG_EXPAND);
int glXQueryChannelRectSGIX(glXQueryChannelRectSGIX_ARG_EXPAND);
typedef int (*glXQueryChannelRectSGIX_PTR)(glXQueryChannelRectSGIX_ARG_EXPAND);
int glXQueryContext(glXQueryContext_ARG_EXPAND);
typedef int (*glXQueryContext_PTR)(glXQueryContext_ARG_EXPAND);
int glXQueryContextInfoEXT(glXQueryContextInfoEXT_ARG_EXPAND);
typedef int (*glXQueryContextInfoEXT_PTR)(glXQueryContextInfoEXT_ARG_EXPAND);
void glXQueryDrawable(glXQueryDrawable_ARG_EXPAND);
typedef void (*glXQueryDrawable_PTR)(glXQueryDrawable_ARG_EXPAND);
Bool glXQueryExtension(glXQueryExtension_ARG_EXPAND);
typedef Bool (*glXQueryExtension_PTR)(glXQueryExtension_ARG_EXPAND);
const char * glXQueryExtensionsString(glXQueryExtensionsString_ARG_EXPAND);
typedef const char * (*glXQueryExtensionsString_PTR)(glXQueryExtensionsString_ARG_EXPAND);
Bool glXQueryFrameCountNV(glXQueryFrameCountNV_ARG_EXPAND);
typedef Bool (*glXQueryFrameCountNV_PTR)(glXQueryFrameCountNV_ARG_EXPAND);
int glXQueryGLXPbufferSGIX(glXQueryGLXPbufferSGIX_ARG_EXPAND);
typedef int (*glXQueryGLXPbufferSGIX_PTR)(glXQueryGLXPbufferSGIX_ARG_EXPAND);
int glXQueryHyperpipeAttribSGIX(glXQueryHyperpipeAttribSGIX_ARG_EXPAND);
typedef int (*glXQueryHyperpipeAttribSGIX_PTR)(glXQueryHyperpipeAttribSGIX_ARG_EXPAND);
int glXQueryHyperpipeBestAttribSGIX(glXQueryHyperpipeBestAttribSGIX_ARG_EXPAND);
typedef int (*glXQueryHyperpipeBestAttribSGIX_PTR)(glXQueryHyperpipeBestAttribSGIX_ARG_EXPAND);
GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX(glXQueryHyperpipeConfigSGIX_ARG_EXPAND);
typedef GLXHyperpipeConfigSGIX * (*glXQueryHyperpipeConfigSGIX_PTR)(glXQueryHyperpipeConfigSGIX_ARG_EXPAND);
GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX(glXQueryHyperpipeNetworkSGIX_ARG_EXPAND);
typedef GLXHyperpipeNetworkSGIX * (*glXQueryHyperpipeNetworkSGIX_PTR)(glXQueryHyperpipeNetworkSGIX_ARG_EXPAND);
Bool glXQueryMaxSwapBarriersSGIX(glXQueryMaxSwapBarriersSGIX_ARG_EXPAND);
typedef Bool (*glXQueryMaxSwapBarriersSGIX_PTR)(glXQueryMaxSwapBarriersSGIX_ARG_EXPAND);
Bool glXQueryMaxSwapGroupsNV(glXQueryMaxSwapGroupsNV_ARG_EXPAND);
typedef Bool (*glXQueryMaxSwapGroupsNV_PTR)(glXQueryMaxSwapGroupsNV_ARG_EXPAND);
const char * glXQueryServerString(glXQueryServerString_ARG_EXPAND);
typedef const char * (*glXQueryServerString_PTR)(glXQueryServerString_ARG_EXPAND);
Bool glXQuerySwapGroupNV(glXQuerySwapGroupNV_ARG_EXPAND);
typedef Bool (*glXQuerySwapGroupNV_PTR)(glXQuerySwapGroupNV_ARG_EXPAND);
Bool glXQueryVersion(glXQueryVersion_ARG_EXPAND);
typedef Bool (*glXQueryVersion_PTR)(glXQueryVersion_ARG_EXPAND);
int glXQueryVideoCaptureDeviceNV(glXQueryVideoCaptureDeviceNV_ARG_EXPAND);
typedef int (*glXQueryVideoCaptureDeviceNV_PTR)(glXQueryVideoCaptureDeviceNV_ARG_EXPAND);
Bool glXReleaseBuffersMESA(glXReleaseBuffersMESA_ARG_EXPAND);
typedef Bool (*glXReleaseBuffersMESA_PTR)(glXReleaseBuffersMESA_ARG_EXPAND);
void glXReleaseTexImageEXT(glXReleaseTexImageEXT_ARG_EXPAND);
typedef void (*glXReleaseTexImageEXT_PTR)(glXReleaseTexImageEXT_ARG_EXPAND);
void glXReleaseVideoCaptureDeviceNV(glXReleaseVideoCaptureDeviceNV_ARG_EXPAND);
typedef void (*glXReleaseVideoCaptureDeviceNV_PTR)(glXReleaseVideoCaptureDeviceNV_ARG_EXPAND);
int glXReleaseVideoDeviceNV(glXReleaseVideoDeviceNV_ARG_EXPAND);
typedef int (*glXReleaseVideoDeviceNV_PTR)(glXReleaseVideoDeviceNV_ARG_EXPAND);
int glXReleaseVideoImageNV(glXReleaseVideoImageNV_ARG_EXPAND);
typedef int (*glXReleaseVideoImageNV_PTR)(glXReleaseVideoImageNV_ARG_EXPAND);
void glXRender(glXRender_ARG_EXPAND);
typedef void (*glXRender_PTR)(glXRender_ARG_EXPAND);
void glXRenderLarge(glXRenderLarge_ARG_EXPAND);
typedef void (*glXRenderLarge_PTR)(glXRenderLarge_ARG_EXPAND);
Bool glXResetFrameCountNV(glXResetFrameCountNV_ARG_EXPAND);
typedef Bool (*glXResetFrameCountNV_PTR)(glXResetFrameCountNV_ARG_EXPAND);
void glXSelectEvent(glXSelectEvent_ARG_EXPAND);
typedef void (*glXSelectEvent_PTR)(glXSelectEvent_ARG_EXPAND);
void glXSelectEventSGIX(glXSelectEventSGIX_ARG_EXPAND);
typedef void (*glXSelectEventSGIX_PTR)(glXSelectEventSGIX_ARG_EXPAND);
int glXSendPbufferToVideoNV(glXSendPbufferToVideoNV_ARG_EXPAND);
typedef int (*glXSendPbufferToVideoNV_PTR)(glXSendPbufferToVideoNV_ARG_EXPAND);
Bool glXSet3DfxModeMESA(glXSet3DfxModeMESA_ARG_EXPAND);
typedef Bool (*glXSet3DfxModeMESA_PTR)(glXSet3DfxModeMESA_ARG_EXPAND);
void glXSwapBuffers(glXSwapBuffers_ARG_EXPAND);
typedef void (*glXSwapBuffers_PTR)(glXSwapBuffers_ARG_EXPAND);
int64_t glXSwapBuffersMscOML(glXSwapBuffersMscOML_ARG_EXPAND);
typedef int64_t (*glXSwapBuffersMscOML_PTR)(glXSwapBuffersMscOML_ARG_EXPAND);
void glXSwapIntervalEXT(glXSwapIntervalEXT_ARG_EXPAND);
typedef void (*glXSwapIntervalEXT_PTR)(glXSwapIntervalEXT_ARG_EXPAND);
int glXSwapIntervalMESA(glXSwapIntervalMESA_ARG_EXPAND);
typedef int (*glXSwapIntervalMESA_PTR)(glXSwapIntervalMESA_ARG_EXPAND);
int glXSwapIntervalSGI(glXSwapIntervalSGI_ARG_EXPAND);
typedef int (*glXSwapIntervalSGI_PTR)(glXSwapIntervalSGI_ARG_EXPAND);
void glXUseXFont(glXUseXFont_ARG_EXPAND);
typedef void (*glXUseXFont_PTR)(glXUseXFont_ARG_EXPAND);
void glXVendorPrivate(glXVendorPrivate_ARG_EXPAND);
typedef void (*glXVendorPrivate_PTR)(glXVendorPrivate_ARG_EXPAND);
void glXVendorPrivateWithReply(glXVendorPrivateWithReply_ARG_EXPAND);
typedef void (*glXVendorPrivateWithReply_PTR)(glXVendorPrivateWithReply_ARG_EXPAND);
Bool glXWaitForMscOML(glXWaitForMscOML_ARG_EXPAND);
typedef Bool (*glXWaitForMscOML_PTR)(glXWaitForMscOML_ARG_EXPAND);
Bool glXWaitForSbcOML(glXWaitForSbcOML_ARG_EXPAND);
typedef Bool (*glXWaitForSbcOML_PTR)(glXWaitForSbcOML_ARG_EXPAND);
void glXWaitGL(glXWaitGL_ARG_EXPAND);
typedef void (*glXWaitGL_PTR)(glXWaitGL_ARG_EXPAND);
int glXWaitVideoSyncSGI(glXWaitVideoSyncSGI_ARG_EXPAND);
typedef int (*glXWaitVideoSyncSGI_PTR)(glXWaitVideoSyncSGI_ARG_EXPAND);
void glXWaitX(glXWaitX_ARG_EXPAND);
typedef void (*glXWaitX_PTR)(glXWaitX_ARG_EXPAND);



#ifndef direct_glActiveTexture
#define push_glActiveTexture(texture) { \
    glActiveTexture_PACKED *packed_data = malloc(sizeof(glActiveTexture_PACKED)); \
    packed_data->format = glActiveTexture_FORMAT; \
    packed_data->func = glActiveTexture; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)texture; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glAlphaFunc
#define push_glAlphaFunc(func, ref) { \
    glAlphaFunc_PACKED *packed_data = malloc(sizeof(glAlphaFunc_PACKED)); \
    packed_data->format = glAlphaFunc_FORMAT; \
    packed_data->func = glAlphaFunc; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)func; \
    packed_data->args.a2 = (GLclampf)ref; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glAlphaFuncx
#define push_glAlphaFuncx(func, ref) { \
    glAlphaFuncx_PACKED *packed_data = malloc(sizeof(glAlphaFuncx_PACKED)); \
    packed_data->format = glAlphaFuncx_FORMAT; \
    packed_data->func = glAlphaFuncx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)func; \
    packed_data->args.a2 = (GLclampx)ref; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glBindBuffer
#define push_glBindBuffer(target, buffer) { \
    glBindBuffer_PACKED *packed_data = malloc(sizeof(glBindBuffer_PACKED)); \
    packed_data->format = glBindBuffer_FORMAT; \
    packed_data->func = glBindBuffer; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLuint)buffer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glBindTexture
#define push_glBindTexture(target, texture) { \
    glBindTexture_PACKED *packed_data = malloc(sizeof(glBindTexture_PACKED)); \
    packed_data->format = glBindTexture_FORMAT; \
    packed_data->func = glBindTexture; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLuint)texture; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glBlendFunc
#define push_glBlendFunc(sfactor, dfactor) { \
    glBlendFunc_PACKED *packed_data = malloc(sizeof(glBlendFunc_PACKED)); \
    packed_data->format = glBlendFunc_FORMAT; \
    packed_data->func = glBlendFunc; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)sfactor; \
    packed_data->args.a2 = (GLenum)dfactor; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glBufferData
#define push_glBufferData(target, size, data, usage) { \
    glBufferData_PACKED *packed_data = malloc(sizeof(glBufferData_PACKED)); \
    packed_data->format = glBufferData_FORMAT; \
    packed_data->func = glBufferData; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLsizeiptr)size; \
    packed_data->args.a3 = (GLvoid *)data; \
    packed_data->args.a4 = (GLenum)usage; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glBufferSubData
#define push_glBufferSubData(target, offset, size, data) { \
    glBufferSubData_PACKED *packed_data = malloc(sizeof(glBufferSubData_PACKED)); \
    packed_data->format = glBufferSubData_FORMAT; \
    packed_data->func = glBufferSubData; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLintptr)offset; \
    packed_data->args.a3 = (GLsizeiptr)size; \
    packed_data->args.a4 = (GLvoid *)data; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glClear
#define push_glClear(mask) { \
    glClear_PACKED *packed_data = malloc(sizeof(glClear_PACKED)); \
    packed_data->format = glClear_FORMAT; \
    packed_data->func = glClear; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLbitfield)mask; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glClearColor
#define push_glClearColor(red, green, blue, alpha) { \
    glClearColor_PACKED *packed_data = malloc(sizeof(glClearColor_PACKED)); \
    packed_data->format = glClearColor_FORMAT; \
    packed_data->func = glClearColor; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLclampf)red; \
    packed_data->args.a2 = (GLclampf)green; \
    packed_data->args.a3 = (GLclampf)blue; \
    packed_data->args.a4 = (GLclampf)alpha; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glClearColorx
#define push_glClearColorx(red, green, blue, alpha) { \
    glClearColorx_PACKED *packed_data = malloc(sizeof(glClearColorx_PACKED)); \
    packed_data->format = glClearColorx_FORMAT; \
    packed_data->func = glClearColorx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLclampx)red; \
    packed_data->args.a2 = (GLclampx)green; \
    packed_data->args.a3 = (GLclampx)blue; \
    packed_data->args.a4 = (GLclampx)alpha; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glClearDepthf
#define push_glClearDepthf(depth) { \
    glClearDepthf_PACKED *packed_data = malloc(sizeof(glClearDepthf_PACKED)); \
    packed_data->format = glClearDepthf_FORMAT; \
    packed_data->func = glClearDepthf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLclampf)depth; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glClearDepthx
#define push_glClearDepthx(depth) { \
    glClearDepthx_PACKED *packed_data = malloc(sizeof(glClearDepthx_PACKED)); \
    packed_data->format = glClearDepthx_FORMAT; \
    packed_data->func = glClearDepthx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLclampx)depth; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glClearStencil
#define push_glClearStencil(s) { \
    glClearStencil_PACKED *packed_data = malloc(sizeof(glClearStencil_PACKED)); \
    packed_data->format = glClearStencil_FORMAT; \
    packed_data->func = glClearStencil; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLint)s; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glClientActiveTexture
#define push_glClientActiveTexture(texture) { \
    glClientActiveTexture_PACKED *packed_data = malloc(sizeof(glClientActiveTexture_PACKED)); \
    packed_data->format = glClientActiveTexture_FORMAT; \
    packed_data->func = glClientActiveTexture; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)texture; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glClipPlanef
#define push_glClipPlanef(plane, equation) { \
    glClipPlanef_PACKED *packed_data = malloc(sizeof(glClipPlanef_PACKED)); \
    packed_data->format = glClipPlanef_FORMAT; \
    packed_data->func = glClipPlanef; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)plane; \
    packed_data->args.a2 = (GLfloat *)equation; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glClipPlanex
#define push_glClipPlanex(plane, equation) { \
    glClipPlanex_PACKED *packed_data = malloc(sizeof(glClipPlanex_PACKED)); \
    packed_data->format = glClipPlanex_FORMAT; \
    packed_data->func = glClipPlanex; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)plane; \
    packed_data->args.a2 = (GLfixed *)equation; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glColor4f
#define push_glColor4f(red, green, blue, alpha) { \
    glColor4f_PACKED *packed_data = malloc(sizeof(glColor4f_PACKED)); \
    packed_data->format = glColor4f_FORMAT; \
    packed_data->func = glColor4f; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat)red; \
    packed_data->args.a2 = (GLfloat)green; \
    packed_data->args.a3 = (GLfloat)blue; \
    packed_data->args.a4 = (GLfloat)alpha; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glColor4ub
#define push_glColor4ub(red, green, blue, alpha) { \
    glColor4ub_PACKED *packed_data = malloc(sizeof(glColor4ub_PACKED)); \
    packed_data->format = glColor4ub_FORMAT; \
    packed_data->func = glColor4ub; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLubyte)red; \
    packed_data->args.a2 = (GLubyte)green; \
    packed_data->args.a3 = (GLubyte)blue; \
    packed_data->args.a4 = (GLubyte)alpha; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glColor4x
#define push_glColor4x(red, green, blue, alpha) { \
    glColor4x_PACKED *packed_data = malloc(sizeof(glColor4x_PACKED)); \
    packed_data->format = glColor4x_FORMAT; \
    packed_data->func = glColor4x; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed)red; \
    packed_data->args.a2 = (GLfixed)green; \
    packed_data->args.a3 = (GLfixed)blue; \
    packed_data->args.a4 = (GLfixed)alpha; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glColorMask
#define push_glColorMask(red, green, blue, alpha) { \
    glColorMask_PACKED *packed_data = malloc(sizeof(glColorMask_PACKED)); \
    packed_data->format = glColorMask_FORMAT; \
    packed_data->func = glColorMask; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLboolean)red; \
    packed_data->args.a2 = (GLboolean)green; \
    packed_data->args.a3 = (GLboolean)blue; \
    packed_data->args.a4 = (GLboolean)alpha; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glColorPointer
#define push_glColorPointer(size, type, stride, pointer) { \
    glColorPointer_PACKED *packed_data = malloc(sizeof(glColorPointer_PACKED)); \
    packed_data->format = glColorPointer_FORMAT; \
    packed_data->func = glColorPointer; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLint)size; \
    packed_data->args.a2 = (GLenum)type; \
    packed_data->args.a3 = (GLsizei)stride; \
    packed_data->args.a4 = (GLvoid *)pointer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glCompressedTexImage2D
#define push_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data) { \
    glCompressedTexImage2D_PACKED *packed_data = malloc(sizeof(glCompressedTexImage2D_PACKED)); \
    packed_data->format = glCompressedTexImage2D_FORMAT; \
    packed_data->func = glCompressedTexImage2D; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLenum)internalformat; \
    packed_data->args.a4 = (GLsizei)width; \
    packed_data->args.a5 = (GLsizei)height; \
    packed_data->args.a6 = (GLint)border; \
    packed_data->args.a7 = (GLsizei)imageSize; \
    packed_data->args.a8 = (GLvoid *)data; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glCompressedTexSubImage2D
#define push_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data) { \
    glCompressedTexSubImage2D_PACKED *packed_data = malloc(sizeof(glCompressedTexSubImage2D_PACKED)); \
    packed_data->format = glCompressedTexSubImage2D_FORMAT; \
    packed_data->func = glCompressedTexSubImage2D; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)xoffset; \
    packed_data->args.a4 = (GLint)yoffset; \
    packed_data->args.a5 = (GLsizei)width; \
    packed_data->args.a6 = (GLsizei)height; \
    packed_data->args.a7 = (GLenum)format; \
    packed_data->args.a8 = (GLsizei)imageSize; \
    packed_data->args.a9 = (GLvoid *)data; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glCopyTexImage2D
#define push_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border) { \
    glCopyTexImage2D_PACKED *packed_data = malloc(sizeof(glCopyTexImage2D_PACKED)); \
    packed_data->format = glCopyTexImage2D_FORMAT; \
    packed_data->func = glCopyTexImage2D; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLenum)internalformat; \
    packed_data->args.a4 = (GLint)x; \
    packed_data->args.a5 = (GLint)y; \
    packed_data->args.a6 = (GLsizei)width; \
    packed_data->args.a7 = (GLsizei)height; \
    packed_data->args.a8 = (GLint)border; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glCopyTexSubImage2D
#define push_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height) { \
    glCopyTexSubImage2D_PACKED *packed_data = malloc(sizeof(glCopyTexSubImage2D_PACKED)); \
    packed_data->format = glCopyTexSubImage2D_FORMAT; \
    packed_data->func = glCopyTexSubImage2D; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)xoffset; \
    packed_data->args.a4 = (GLint)yoffset; \
    packed_data->args.a5 = (GLint)x; \
    packed_data->args.a6 = (GLint)y; \
    packed_data->args.a7 = (GLsizei)width; \
    packed_data->args.a8 = (GLsizei)height; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glCullFace
#define push_glCullFace(mode) { \
    glCullFace_PACKED *packed_data = malloc(sizeof(glCullFace_PACKED)); \
    packed_data->format = glCullFace_FORMAT; \
    packed_data->func = glCullFace; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)mode; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glDeleteBuffers
#define push_glDeleteBuffers(n, buffers) { \
    glDeleteBuffers_PACKED *packed_data = malloc(sizeof(glDeleteBuffers_PACKED)); \
    packed_data->format = glDeleteBuffers_FORMAT; \
    packed_data->func = glDeleteBuffers; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)buffers; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glDeleteTextures
#define push_glDeleteTextures(n, textures) { \
    glDeleteTextures_PACKED *packed_data = malloc(sizeof(glDeleteTextures_PACKED)); \
    packed_data->format = glDeleteTextures_FORMAT; \
    packed_data->func = glDeleteTextures; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)textures; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glDepthFunc
#define push_glDepthFunc(func) { \
    glDepthFunc_PACKED *packed_data = malloc(sizeof(glDepthFunc_PACKED)); \
    packed_data->format = glDepthFunc_FORMAT; \
    packed_data->func = glDepthFunc; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)func; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glDepthMask
#define push_glDepthMask(flag) { \
    glDepthMask_PACKED *packed_data = malloc(sizeof(glDepthMask_PACKED)); \
    packed_data->format = glDepthMask_FORMAT; \
    packed_data->func = glDepthMask; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLboolean)flag; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glDepthRangef
#define push_glDepthRangef(near, far) { \
    glDepthRangef_PACKED *packed_data = malloc(sizeof(glDepthRangef_PACKED)); \
    packed_data->format = glDepthRangef_FORMAT; \
    packed_data->func = glDepthRangef; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLclampf)near; \
    packed_data->args.a2 = (GLclampf)far; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glDepthRangex
#define push_glDepthRangex(near, far) { \
    glDepthRangex_PACKED *packed_data = malloc(sizeof(glDepthRangex_PACKED)); \
    packed_data->format = glDepthRangex_FORMAT; \
    packed_data->func = glDepthRangex; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLclampx)near; \
    packed_data->args.a2 = (GLclampx)far; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glDisable
#define push_glDisable(cap) { \
    glDisable_PACKED *packed_data = malloc(sizeof(glDisable_PACKED)); \
    packed_data->format = glDisable_FORMAT; \
    packed_data->func = glDisable; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)cap; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glDisableClientState
#define push_glDisableClientState(array) { \
    glDisableClientState_PACKED *packed_data = malloc(sizeof(glDisableClientState_PACKED)); \
    packed_data->format = glDisableClientState_FORMAT; \
    packed_data->func = glDisableClientState; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)array; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glDrawArrays
#define push_glDrawArrays(mode, first, count) { \
    glDrawArrays_PACKED *packed_data = malloc(sizeof(glDrawArrays_PACKED)); \
    packed_data->format = glDrawArrays_FORMAT; \
    packed_data->func = glDrawArrays; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data->args.a2 = (GLint)first; \
    packed_data->args.a3 = (GLsizei)count; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glDrawElements
#define push_glDrawElements(mode, count, type, indices) { \
    glDrawElements_PACKED *packed_data = malloc(sizeof(glDrawElements_PACKED)); \
    packed_data->format = glDrawElements_FORMAT; \
    packed_data->func = glDrawElements; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLenum)type; \
    packed_data->args.a4 = (GLvoid *)indices; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glEnable
#define push_glEnable(cap) { \
    glEnable_PACKED *packed_data = malloc(sizeof(glEnable_PACKED)); \
    packed_data->format = glEnable_FORMAT; \
    packed_data->func = glEnable; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)cap; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glEnableClientState
#define push_glEnableClientState(array) { \
    glEnableClientState_PACKED *packed_data = malloc(sizeof(glEnableClientState_PACKED)); \
    packed_data->format = glEnableClientState_FORMAT; \
    packed_data->func = glEnableClientState; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)array; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glFinish
#define push_glFinish() { \
    glFinish_PACKED *packed_data = malloc(sizeof(glFinish_PACKED)); \
    packed_data->format = glFinish_FORMAT; \
    packed_data->func = glFinish; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glFlush
#define push_glFlush() { \
    glFlush_PACKED *packed_data = malloc(sizeof(glFlush_PACKED)); \
    packed_data->format = glFlush_FORMAT; \
    packed_data->func = glFlush; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glFogf
#define push_glFogf(pname, param) { \
    glFogf_PACKED *packed_data = malloc(sizeof(glFogf_PACKED)); \
    packed_data->format = glFogf_FORMAT; \
    packed_data->func = glFogf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glFogfv
#define push_glFogfv(pname, params) { \
    glFogfv_PACKED *packed_data = malloc(sizeof(glFogfv_PACKED)); \
    packed_data->format = glFogfv_FORMAT; \
    packed_data->func = glFogfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glFogx
#define push_glFogx(pname, param) { \
    glFogx_PACKED *packed_data = malloc(sizeof(glFogx_PACKED)); \
    packed_data->format = glFogx_FORMAT; \
    packed_data->func = glFogx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glFogxv
#define push_glFogxv(pname, params) { \
    glFogxv_PACKED *packed_data = malloc(sizeof(glFogxv_PACKED)); \
    packed_data->format = glFogxv_FORMAT; \
    packed_data->func = glFogxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glFrontFace
#define push_glFrontFace(mode) { \
    glFrontFace_PACKED *packed_data = malloc(sizeof(glFrontFace_PACKED)); \
    packed_data->format = glFrontFace_FORMAT; \
    packed_data->func = glFrontFace; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)mode; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glFrustumf
#define push_glFrustumf(left, right, bottom, top, near, far) { \
    glFrustumf_PACKED *packed_data = malloc(sizeof(glFrustumf_PACKED)); \
    packed_data->format = glFrustumf_FORMAT; \
    packed_data->func = glFrustumf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat)left; \
    packed_data->args.a2 = (GLfloat)right; \
    packed_data->args.a3 = (GLfloat)bottom; \
    packed_data->args.a4 = (GLfloat)top; \
    packed_data->args.a5 = (GLfloat)near; \
    packed_data->args.a6 = (GLfloat)far; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glFrustumx
#define push_glFrustumx(left, right, bottom, top, near, far) { \
    glFrustumx_PACKED *packed_data = malloc(sizeof(glFrustumx_PACKED)); \
    packed_data->format = glFrustumx_FORMAT; \
    packed_data->func = glFrustumx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed)left; \
    packed_data->args.a2 = (GLfixed)right; \
    packed_data->args.a3 = (GLfixed)bottom; \
    packed_data->args.a4 = (GLfixed)top; \
    packed_data->args.a5 = (GLfixed)near; \
    packed_data->args.a6 = (GLfixed)far; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGenBuffers
#define push_glGenBuffers(n, buffers) { \
    glGenBuffers_PACKED *packed_data = malloc(sizeof(glGenBuffers_PACKED)); \
    packed_data->format = glGenBuffers_FORMAT; \
    packed_data->func = glGenBuffers; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)buffers; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGenTextures
#define push_glGenTextures(n, textures) { \
    glGenTextures_PACKED *packed_data = malloc(sizeof(glGenTextures_PACKED)); \
    packed_data->format = glGenTextures_FORMAT; \
    packed_data->func = glGenTextures; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)textures; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetBooleanv
#define push_glGetBooleanv(pname, params) { \
    glGetBooleanv_PACKED *packed_data = malloc(sizeof(glGetBooleanv_PACKED)); \
    packed_data->format = glGetBooleanv_FORMAT; \
    packed_data->func = glGetBooleanv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLboolean *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetBufferParameteriv
#define push_glGetBufferParameteriv(target, pname, params) { \
    glGetBufferParameteriv_PACKED *packed_data = malloc(sizeof(glGetBufferParameteriv_PACKED)); \
    packed_data->format = glGetBufferParameteriv_FORMAT; \
    packed_data->func = glGetBufferParameteriv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetClipPlanef
#define push_glGetClipPlanef(plane, equation) { \
    glGetClipPlanef_PACKED *packed_data = malloc(sizeof(glGetClipPlanef_PACKED)); \
    packed_data->format = glGetClipPlanef_FORMAT; \
    packed_data->func = glGetClipPlanef; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)plane; \
    packed_data->args.a2 = (GLfloat *)equation; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetClipPlanex
#define push_glGetClipPlanex(plane, equation) { \
    glGetClipPlanex_PACKED *packed_data = malloc(sizeof(glGetClipPlanex_PACKED)); \
    packed_data->format = glGetClipPlanex_FORMAT; \
    packed_data->func = glGetClipPlanex; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)plane; \
    packed_data->args.a2 = (GLfixed *)equation; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetError
#define push_glGetError() { \
    glGetError_PACKED *packed_data = malloc(sizeof(glGetError_PACKED)); \
    packed_data->format = glGetError_FORMAT; \
    packed_data->func = glGetError; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetFixedv
#define push_glGetFixedv(pname, params) { \
    glGetFixedv_PACKED *packed_data = malloc(sizeof(glGetFixedv_PACKED)); \
    packed_data->format = glGetFixedv_FORMAT; \
    packed_data->func = glGetFixedv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetFloatv
#define push_glGetFloatv(pname, params) { \
    glGetFloatv_PACKED *packed_data = malloc(sizeof(glGetFloatv_PACKED)); \
    packed_data->format = glGetFloatv_FORMAT; \
    packed_data->func = glGetFloatv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetIntegerv
#define push_glGetIntegerv(pname, params) { \
    glGetIntegerv_PACKED *packed_data = malloc(sizeof(glGetIntegerv_PACKED)); \
    packed_data->format = glGetIntegerv_FORMAT; \
    packed_data->func = glGetIntegerv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLint *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetLightfv
#define push_glGetLightfv(light, pname, params) { \
    glGetLightfv_PACKED *packed_data = malloc(sizeof(glGetLightfv_PACKED)); \
    packed_data->format = glGetLightfv_FORMAT; \
    packed_data->func = glGetLightfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetLightxv
#define push_glGetLightxv(light, pname, params) { \
    glGetLightxv_PACKED *packed_data = malloc(sizeof(glGetLightxv_PACKED)); \
    packed_data->format = glGetLightxv_FORMAT; \
    packed_data->func = glGetLightxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetMaterialfv
#define push_glGetMaterialfv(face, pname, params) { \
    glGetMaterialfv_PACKED *packed_data = malloc(sizeof(glGetMaterialfv_PACKED)); \
    packed_data->format = glGetMaterialfv_FORMAT; \
    packed_data->func = glGetMaterialfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetMaterialxv
#define push_glGetMaterialxv(face, pname, params) { \
    glGetMaterialxv_PACKED *packed_data = malloc(sizeof(glGetMaterialxv_PACKED)); \
    packed_data->format = glGetMaterialxv_FORMAT; \
    packed_data->func = glGetMaterialxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetPointerv
#define push_glGetPointerv(pname, params) { \
    glGetPointerv_PACKED *packed_data = malloc(sizeof(glGetPointerv_PACKED)); \
    packed_data->format = glGetPointerv_FORMAT; \
    packed_data->func = glGetPointerv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLvoid **)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetString
#define push_glGetString(name) { \
    glGetString_PACKED *packed_data = malloc(sizeof(glGetString_PACKED)); \
    packed_data->format = glGetString_FORMAT; \
    packed_data->func = glGetString; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)name; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetTexEnvfv
#define push_glGetTexEnvfv(target, pname, params) { \
    glGetTexEnvfv_PACKED *packed_data = malloc(sizeof(glGetTexEnvfv_PACKED)); \
    packed_data->format = glGetTexEnvfv_FORMAT; \
    packed_data->func = glGetTexEnvfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetTexEnviv
#define push_glGetTexEnviv(target, pname, params) { \
    glGetTexEnviv_PACKED *packed_data = malloc(sizeof(glGetTexEnviv_PACKED)); \
    packed_data->format = glGetTexEnviv_FORMAT; \
    packed_data->func = glGetTexEnviv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetTexEnvxv
#define push_glGetTexEnvxv(target, pname, params) { \
    glGetTexEnvxv_PACKED *packed_data = malloc(sizeof(glGetTexEnvxv_PACKED)); \
    packed_data->format = glGetTexEnvxv_FORMAT; \
    packed_data->func = glGetTexEnvxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetTexParameterfv
#define push_glGetTexParameterfv(target, pname, params) { \
    glGetTexParameterfv_PACKED *packed_data = malloc(sizeof(glGetTexParameterfv_PACKED)); \
    packed_data->format = glGetTexParameterfv_FORMAT; \
    packed_data->func = glGetTexParameterfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetTexParameteriv
#define push_glGetTexParameteriv(target, pname, params) { \
    glGetTexParameteriv_PACKED *packed_data = malloc(sizeof(glGetTexParameteriv_PACKED)); \
    packed_data->format = glGetTexParameteriv_FORMAT; \
    packed_data->func = glGetTexParameteriv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glGetTexParameterxv
#define push_glGetTexParameterxv(target, pname, params) { \
    glGetTexParameterxv_PACKED *packed_data = malloc(sizeof(glGetTexParameterxv_PACKED)); \
    packed_data->format = glGetTexParameterxv_FORMAT; \
    packed_data->func = glGetTexParameterxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glHint
#define push_glHint(target, mode) { \
    glHint_PACKED *packed_data = malloc(sizeof(glHint_PACKED)); \
    packed_data->format = glHint_FORMAT; \
    packed_data->func = glHint; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)mode; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glIsBuffer
#define push_glIsBuffer(buffer) { \
    glIsBuffer_PACKED *packed_data = malloc(sizeof(glIsBuffer_PACKED)); \
    packed_data->format = glIsBuffer_FORMAT; \
    packed_data->func = glIsBuffer; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLuint)buffer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glIsEnabled
#define push_glIsEnabled(cap) { \
    glIsEnabled_PACKED *packed_data = malloc(sizeof(glIsEnabled_PACKED)); \
    packed_data->format = glIsEnabled_FORMAT; \
    packed_data->func = glIsEnabled; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)cap; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glIsTexture
#define push_glIsTexture(texture) { \
    glIsTexture_PACKED *packed_data = malloc(sizeof(glIsTexture_PACKED)); \
    packed_data->format = glIsTexture_FORMAT; \
    packed_data->func = glIsTexture; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLuint)texture; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLightModelf
#define push_glLightModelf(pname, param) { \
    glLightModelf_PACKED *packed_data = malloc(sizeof(glLightModelf_PACKED)); \
    packed_data->format = glLightModelf_FORMAT; \
    packed_data->func = glLightModelf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLightModelfv
#define push_glLightModelfv(pname, params) { \
    glLightModelfv_PACKED *packed_data = malloc(sizeof(glLightModelfv_PACKED)); \
    packed_data->format = glLightModelfv_FORMAT; \
    packed_data->func = glLightModelfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLightModelx
#define push_glLightModelx(pname, param) { \
    glLightModelx_PACKED *packed_data = malloc(sizeof(glLightModelx_PACKED)); \
    packed_data->format = glLightModelx_FORMAT; \
    packed_data->func = glLightModelx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLightModelxv
#define push_glLightModelxv(pname, params) { \
    glLightModelxv_PACKED *packed_data = malloc(sizeof(glLightModelxv_PACKED)); \
    packed_data->format = glLightModelxv_FORMAT; \
    packed_data->func = glLightModelxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLightf
#define push_glLightf(light, pname, param) { \
    glLightf_PACKED *packed_data = malloc(sizeof(glLightf_PACKED)); \
    packed_data->format = glLightf_FORMAT; \
    packed_data->func = glLightf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLightfv
#define push_glLightfv(light, pname, params) { \
    glLightfv_PACKED *packed_data = malloc(sizeof(glLightfv_PACKED)); \
    packed_data->format = glLightfv_FORMAT; \
    packed_data->func = glLightfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLightx
#define push_glLightx(light, pname, param) { \
    glLightx_PACKED *packed_data = malloc(sizeof(glLightx_PACKED)); \
    packed_data->format = glLightx_FORMAT; \
    packed_data->func = glLightx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLightxv
#define push_glLightxv(light, pname, params) { \
    glLightxv_PACKED *packed_data = malloc(sizeof(glLightxv_PACKED)); \
    packed_data->format = glLightxv_FORMAT; \
    packed_data->func = glLightxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLineWidth
#define push_glLineWidth(width) { \
    glLineWidth_PACKED *packed_data = malloc(sizeof(glLineWidth_PACKED)); \
    packed_data->format = glLineWidth_FORMAT; \
    packed_data->func = glLineWidth; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat)width; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLineWidthx
#define push_glLineWidthx(width) { \
    glLineWidthx_PACKED *packed_data = malloc(sizeof(glLineWidthx_PACKED)); \
    packed_data->format = glLineWidthx_FORMAT; \
    packed_data->func = glLineWidthx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed)width; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLoadIdentity
#define push_glLoadIdentity() { \
    glLoadIdentity_PACKED *packed_data = malloc(sizeof(glLoadIdentity_PACKED)); \
    packed_data->format = glLoadIdentity_FORMAT; \
    packed_data->func = glLoadIdentity; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLoadMatrixf
#define push_glLoadMatrixf(m) { \
    glLoadMatrixf_PACKED *packed_data = malloc(sizeof(glLoadMatrixf_PACKED)); \
    packed_data->format = glLoadMatrixf_FORMAT; \
    packed_data->func = glLoadMatrixf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat *)m; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLoadMatrixx
#define push_glLoadMatrixx(m) { \
    glLoadMatrixx_PACKED *packed_data = malloc(sizeof(glLoadMatrixx_PACKED)); \
    packed_data->format = glLoadMatrixx_FORMAT; \
    packed_data->func = glLoadMatrixx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed *)m; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glLogicOp
#define push_glLogicOp(opcode) { \
    glLogicOp_PACKED *packed_data = malloc(sizeof(glLogicOp_PACKED)); \
    packed_data->format = glLogicOp_FORMAT; \
    packed_data->func = glLogicOp; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)opcode; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glMaterialf
#define push_glMaterialf(face, pname, param) { \
    glMaterialf_PACKED *packed_data = malloc(sizeof(glMaterialf_PACKED)); \
    packed_data->format = glMaterialf_FORMAT; \
    packed_data->func = glMaterialf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glMaterialfv
#define push_glMaterialfv(face, pname, params) { \
    glMaterialfv_PACKED *packed_data = malloc(sizeof(glMaterialfv_PACKED)); \
    packed_data->format = glMaterialfv_FORMAT; \
    packed_data->func = glMaterialfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glMaterialx
#define push_glMaterialx(face, pname, param) { \
    glMaterialx_PACKED *packed_data = malloc(sizeof(glMaterialx_PACKED)); \
    packed_data->format = glMaterialx_FORMAT; \
    packed_data->func = glMaterialx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glMaterialxv
#define push_glMaterialxv(face, pname, params) { \
    glMaterialxv_PACKED *packed_data = malloc(sizeof(glMaterialxv_PACKED)); \
    packed_data->format = glMaterialxv_FORMAT; \
    packed_data->func = glMaterialxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glMatrixMode
#define push_glMatrixMode(mode) { \
    glMatrixMode_PACKED *packed_data = malloc(sizeof(glMatrixMode_PACKED)); \
    packed_data->format = glMatrixMode_FORMAT; \
    packed_data->func = glMatrixMode; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)mode; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glMultMatrixf
#define push_glMultMatrixf(m) { \
    glMultMatrixf_PACKED *packed_data = malloc(sizeof(glMultMatrixf_PACKED)); \
    packed_data->format = glMultMatrixf_FORMAT; \
    packed_data->func = glMultMatrixf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat *)m; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glMultMatrixx
#define push_glMultMatrixx(m) { \
    glMultMatrixx_PACKED *packed_data = malloc(sizeof(glMultMatrixx_PACKED)); \
    packed_data->format = glMultMatrixx_FORMAT; \
    packed_data->func = glMultMatrixx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed *)m; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glMultiTexCoord4f
#define push_glMultiTexCoord4f(target, s, t, r, q) { \
    glMultiTexCoord4f_PACKED *packed_data = malloc(sizeof(glMultiTexCoord4f_PACKED)); \
    packed_data->format = glMultiTexCoord4f_FORMAT; \
    packed_data->func = glMultiTexCoord4f; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLfloat)s; \
    packed_data->args.a3 = (GLfloat)t; \
    packed_data->args.a4 = (GLfloat)r; \
    packed_data->args.a5 = (GLfloat)q; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glMultiTexCoord4x
#define push_glMultiTexCoord4x(target, s, t, r, q) { \
    glMultiTexCoord4x_PACKED *packed_data = malloc(sizeof(glMultiTexCoord4x_PACKED)); \
    packed_data->format = glMultiTexCoord4x_FORMAT; \
    packed_data->func = glMultiTexCoord4x; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLfixed)s; \
    packed_data->args.a3 = (GLfixed)t; \
    packed_data->args.a4 = (GLfixed)r; \
    packed_data->args.a5 = (GLfixed)q; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glNormal3f
#define push_glNormal3f(nx, ny, nz) { \
    glNormal3f_PACKED *packed_data = malloc(sizeof(glNormal3f_PACKED)); \
    packed_data->format = glNormal3f_FORMAT; \
    packed_data->func = glNormal3f; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat)nx; \
    packed_data->args.a2 = (GLfloat)ny; \
    packed_data->args.a3 = (GLfloat)nz; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glNormal3x
#define push_glNormal3x(nx, ny, nz) { \
    glNormal3x_PACKED *packed_data = malloc(sizeof(glNormal3x_PACKED)); \
    packed_data->format = glNormal3x_FORMAT; \
    packed_data->func = glNormal3x; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed)nx; \
    packed_data->args.a2 = (GLfixed)ny; \
    packed_data->args.a3 = (GLfixed)nz; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glNormalPointer
#define push_glNormalPointer(type, stride, pointer) { \
    glNormalPointer_PACKED *packed_data = malloc(sizeof(glNormalPointer_PACKED)); \
    packed_data->format = glNormalPointer_FORMAT; \
    packed_data->func = glNormalPointer; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)type; \
    packed_data->args.a2 = (GLsizei)stride; \
    packed_data->args.a3 = (GLvoid *)pointer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glOrthof
#define push_glOrthof(left, right, bottom, top, near, far) { \
    glOrthof_PACKED *packed_data = malloc(sizeof(glOrthof_PACKED)); \
    packed_data->format = glOrthof_FORMAT; \
    packed_data->func = glOrthof; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat)left; \
    packed_data->args.a2 = (GLfloat)right; \
    packed_data->args.a3 = (GLfloat)bottom; \
    packed_data->args.a4 = (GLfloat)top; \
    packed_data->args.a5 = (GLfloat)near; \
    packed_data->args.a6 = (GLfloat)far; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glOrthox
#define push_glOrthox(left, right, bottom, top, near, far) { \
    glOrthox_PACKED *packed_data = malloc(sizeof(glOrthox_PACKED)); \
    packed_data->format = glOrthox_FORMAT; \
    packed_data->func = glOrthox; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed)left; \
    packed_data->args.a2 = (GLfixed)right; \
    packed_data->args.a3 = (GLfixed)bottom; \
    packed_data->args.a4 = (GLfixed)top; \
    packed_data->args.a5 = (GLfixed)near; \
    packed_data->args.a6 = (GLfixed)far; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPixelStorei
#define push_glPixelStorei(pname, param) { \
    glPixelStorei_PACKED *packed_data = malloc(sizeof(glPixelStorei_PACKED)); \
    packed_data->format = glPixelStorei_FORMAT; \
    packed_data->func = glPixelStorei; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLint)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPointParameterf
#define push_glPointParameterf(pname, param) { \
    glPointParameterf_PACKED *packed_data = malloc(sizeof(glPointParameterf_PACKED)); \
    packed_data->format = glPointParameterf_FORMAT; \
    packed_data->func = glPointParameterf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPointParameterfv
#define push_glPointParameterfv(pname, params) { \
    glPointParameterfv_PACKED *packed_data = malloc(sizeof(glPointParameterfv_PACKED)); \
    packed_data->format = glPointParameterfv_FORMAT; \
    packed_data->func = glPointParameterfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPointParameterx
#define push_glPointParameterx(pname, param) { \
    glPointParameterx_PACKED *packed_data = malloc(sizeof(glPointParameterx_PACKED)); \
    packed_data->format = glPointParameterx_FORMAT; \
    packed_data->func = glPointParameterx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPointParameterxv
#define push_glPointParameterxv(pname, params) { \
    glPointParameterxv_PACKED *packed_data = malloc(sizeof(glPointParameterxv_PACKED)); \
    packed_data->format = glPointParameterxv_FORMAT; \
    packed_data->func = glPointParameterxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPointSize
#define push_glPointSize(size) { \
    glPointSize_PACKED *packed_data = malloc(sizeof(glPointSize_PACKED)); \
    packed_data->format = glPointSize_FORMAT; \
    packed_data->func = glPointSize; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat)size; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPointSizePointerOES
#define push_glPointSizePointerOES(type, stride, pointer) { \
    glPointSizePointerOES_PACKED *packed_data = malloc(sizeof(glPointSizePointerOES_PACKED)); \
    packed_data->format = glPointSizePointerOES_FORMAT; \
    packed_data->func = glPointSizePointerOES; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)type; \
    packed_data->args.a2 = (GLsizei)stride; \
    packed_data->args.a3 = (GLvoid *)pointer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPointSizex
#define push_glPointSizex(size) { \
    glPointSizex_PACKED *packed_data = malloc(sizeof(glPointSizex_PACKED)); \
    packed_data->format = glPointSizex_FORMAT; \
    packed_data->func = glPointSizex; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed)size; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPolygonOffset
#define push_glPolygonOffset(factor, units) { \
    glPolygonOffset_PACKED *packed_data = malloc(sizeof(glPolygonOffset_PACKED)); \
    packed_data->format = glPolygonOffset_FORMAT; \
    packed_data->func = glPolygonOffset; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat)factor; \
    packed_data->args.a2 = (GLfloat)units; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPolygonOffsetx
#define push_glPolygonOffsetx(factor, units) { \
    glPolygonOffsetx_PACKED *packed_data = malloc(sizeof(glPolygonOffsetx_PACKED)); \
    packed_data->format = glPolygonOffsetx_FORMAT; \
    packed_data->func = glPolygonOffsetx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed)factor; \
    packed_data->args.a2 = (GLfixed)units; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPopMatrix
#define push_glPopMatrix() { \
    glPopMatrix_PACKED *packed_data = malloc(sizeof(glPopMatrix_PACKED)); \
    packed_data->format = glPopMatrix_FORMAT; \
    packed_data->func = glPopMatrix; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glPushMatrix
#define push_glPushMatrix() { \
    glPushMatrix_PACKED *packed_data = malloc(sizeof(glPushMatrix_PACKED)); \
    packed_data->format = glPushMatrix_FORMAT; \
    packed_data->func = glPushMatrix; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glReadPixels
#define push_glReadPixels(x, y, width, height, format, type, pixels) { \
    glReadPixels_PACKED *packed_data = malloc(sizeof(glReadPixels_PACKED)); \
    packed_data->format = glReadPixels_FORMAT; \
    packed_data->func = glReadPixels; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLint)x; \
    packed_data->args.a2 = (GLint)y; \
    packed_data->args.a3 = (GLsizei)width; \
    packed_data->args.a4 = (GLsizei)height; \
    packed_data->args.a5 = (GLenum)format; \
    packed_data->args.a6 = (GLenum)type; \
    packed_data->args.a7 = (GLvoid *)pixels; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glRotatef
#define push_glRotatef(angle, x, y, z) { \
    glRotatef_PACKED *packed_data = malloc(sizeof(glRotatef_PACKED)); \
    packed_data->format = glRotatef_FORMAT; \
    packed_data->func = glRotatef; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat)angle; \
    packed_data->args.a2 = (GLfloat)x; \
    packed_data->args.a3 = (GLfloat)y; \
    packed_data->args.a4 = (GLfloat)z; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glRotatex
#define push_glRotatex(angle, x, y, z) { \
    glRotatex_PACKED *packed_data = malloc(sizeof(glRotatex_PACKED)); \
    packed_data->format = glRotatex_FORMAT; \
    packed_data->func = glRotatex; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed)angle; \
    packed_data->args.a2 = (GLfixed)x; \
    packed_data->args.a3 = (GLfixed)y; \
    packed_data->args.a4 = (GLfixed)z; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glSampleCoverage
#define push_glSampleCoverage(value, invert) { \
    glSampleCoverage_PACKED *packed_data = malloc(sizeof(glSampleCoverage_PACKED)); \
    packed_data->format = glSampleCoverage_FORMAT; \
    packed_data->func = glSampleCoverage; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLclampf)value; \
    packed_data->args.a2 = (GLboolean)invert; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glSampleCoveragex
#define push_glSampleCoveragex(value, invert) { \
    glSampleCoveragex_PACKED *packed_data = malloc(sizeof(glSampleCoveragex_PACKED)); \
    packed_data->format = glSampleCoveragex_FORMAT; \
    packed_data->func = glSampleCoveragex; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLclampx)value; \
    packed_data->args.a2 = (GLboolean)invert; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glScalef
#define push_glScalef(x, y, z) { \
    glScalef_PACKED *packed_data = malloc(sizeof(glScalef_PACKED)); \
    packed_data->format = glScalef_FORMAT; \
    packed_data->func = glScalef; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat)x; \
    packed_data->args.a2 = (GLfloat)y; \
    packed_data->args.a3 = (GLfloat)z; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glScalex
#define push_glScalex(x, y, z) { \
    glScalex_PACKED *packed_data = malloc(sizeof(glScalex_PACKED)); \
    packed_data->format = glScalex_FORMAT; \
    packed_data->func = glScalex; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed)x; \
    packed_data->args.a2 = (GLfixed)y; \
    packed_data->args.a3 = (GLfixed)z; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glScissor
#define push_glScissor(x, y, width, height) { \
    glScissor_PACKED *packed_data = malloc(sizeof(glScissor_PACKED)); \
    packed_data->format = glScissor_FORMAT; \
    packed_data->func = glScissor; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLint)x; \
    packed_data->args.a2 = (GLint)y; \
    packed_data->args.a3 = (GLsizei)width; \
    packed_data->args.a4 = (GLsizei)height; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glShadeModel
#define push_glShadeModel(mode) { \
    glShadeModel_PACKED *packed_data = malloc(sizeof(glShadeModel_PACKED)); \
    packed_data->format = glShadeModel_FORMAT; \
    packed_data->func = glShadeModel; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)mode; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glStencilFunc
#define push_glStencilFunc(func, ref, mask) { \
    glStencilFunc_PACKED *packed_data = malloc(sizeof(glStencilFunc_PACKED)); \
    packed_data->format = glStencilFunc_FORMAT; \
    packed_data->func = glStencilFunc; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)func; \
    packed_data->args.a2 = (GLint)ref; \
    packed_data->args.a3 = (GLuint)mask; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glStencilMask
#define push_glStencilMask(mask) { \
    glStencilMask_PACKED *packed_data = malloc(sizeof(glStencilMask_PACKED)); \
    packed_data->format = glStencilMask_FORMAT; \
    packed_data->func = glStencilMask; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLuint)mask; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glStencilOp
#define push_glStencilOp(fail, zfail, zpass) { \
    glStencilOp_PACKED *packed_data = malloc(sizeof(glStencilOp_PACKED)); \
    packed_data->format = glStencilOp_FORMAT; \
    packed_data->func = glStencilOp; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)fail; \
    packed_data->args.a2 = (GLenum)zfail; \
    packed_data->args.a3 = (GLenum)zpass; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexCoordPointer
#define push_glTexCoordPointer(size, type, stride, pointer) { \
    glTexCoordPointer_PACKED *packed_data = malloc(sizeof(glTexCoordPointer_PACKED)); \
    packed_data->format = glTexCoordPointer_FORMAT; \
    packed_data->func = glTexCoordPointer; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLint)size; \
    packed_data->args.a2 = (GLenum)type; \
    packed_data->args.a3 = (GLsizei)stride; \
    packed_data->args.a4 = (GLvoid *)pointer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexEnvf
#define push_glTexEnvf(target, pname, param) { \
    glTexEnvf_PACKED *packed_data = malloc(sizeof(glTexEnvf_PACKED)); \
    packed_data->format = glTexEnvf_FORMAT; \
    packed_data->func = glTexEnvf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexEnvfv
#define push_glTexEnvfv(target, pname, params) { \
    glTexEnvfv_PACKED *packed_data = malloc(sizeof(glTexEnvfv_PACKED)); \
    packed_data->format = glTexEnvfv_FORMAT; \
    packed_data->func = glTexEnvfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexEnvi
#define push_glTexEnvi(target, pname, param) { \
    glTexEnvi_PACKED *packed_data = malloc(sizeof(glTexEnvi_PACKED)); \
    packed_data->format = glTexEnvi_FORMAT; \
    packed_data->func = glTexEnvi; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexEnviv
#define push_glTexEnviv(target, pname, params) { \
    glTexEnviv_PACKED *packed_data = malloc(sizeof(glTexEnviv_PACKED)); \
    packed_data->format = glTexEnviv_FORMAT; \
    packed_data->func = glTexEnviv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexEnvx
#define push_glTexEnvx(target, pname, param) { \
    glTexEnvx_PACKED *packed_data = malloc(sizeof(glTexEnvx_PACKED)); \
    packed_data->format = glTexEnvx_FORMAT; \
    packed_data->func = glTexEnvx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexEnvxv
#define push_glTexEnvxv(target, pname, params) { \
    glTexEnvxv_PACKED *packed_data = malloc(sizeof(glTexEnvxv_PACKED)); \
    packed_data->format = glTexEnvxv_FORMAT; \
    packed_data->func = glTexEnvxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexImage2D
#define push_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels) { \
    glTexImage2D_PACKED *packed_data = malloc(sizeof(glTexImage2D_PACKED)); \
    packed_data->format = glTexImage2D_FORMAT; \
    packed_data->func = glTexImage2D; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)internalformat; \
    packed_data->args.a4 = (GLsizei)width; \
    packed_data->args.a5 = (GLsizei)height; \
    packed_data->args.a6 = (GLint)border; \
    packed_data->args.a7 = (GLenum)format; \
    packed_data->args.a8 = (GLenum)type; \
    packed_data->args.a9 = (GLvoid *)pixels; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexParameterf
#define push_glTexParameterf(target, pname, param) { \
    glTexParameterf_PACKED *packed_data = malloc(sizeof(glTexParameterf_PACKED)); \
    packed_data->format = glTexParameterf_FORMAT; \
    packed_data->func = glTexParameterf; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexParameterfv
#define push_glTexParameterfv(target, pname, params) { \
    glTexParameterfv_PACKED *packed_data = malloc(sizeof(glTexParameterfv_PACKED)); \
    packed_data->format = glTexParameterfv_FORMAT; \
    packed_data->func = glTexParameterfv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexParameteri
#define push_glTexParameteri(target, pname, param) { \
    glTexParameteri_PACKED *packed_data = malloc(sizeof(glTexParameteri_PACKED)); \
    packed_data->format = glTexParameteri_FORMAT; \
    packed_data->func = glTexParameteri; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexParameteriv
#define push_glTexParameteriv(target, pname, params) { \
    glTexParameteriv_PACKED *packed_data = malloc(sizeof(glTexParameteriv_PACKED)); \
    packed_data->format = glTexParameteriv_FORMAT; \
    packed_data->func = glTexParameteriv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexParameterx
#define push_glTexParameterx(target, pname, param) { \
    glTexParameterx_PACKED *packed_data = malloc(sizeof(glTexParameterx_PACKED)); \
    packed_data->format = glTexParameterx_FORMAT; \
    packed_data->func = glTexParameterx; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed)param; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexParameterxv
#define push_glTexParameterxv(target, pname, params) { \
    glTexParameterxv_PACKED *packed_data = malloc(sizeof(glTexParameterxv_PACKED)); \
    packed_data->format = glTexParameterxv_FORMAT; \
    packed_data->func = glTexParameterxv; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTexSubImage2D
#define push_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels) { \
    glTexSubImage2D_PACKED *packed_data = malloc(sizeof(glTexSubImage2D_PACKED)); \
    packed_data->format = glTexSubImage2D_FORMAT; \
    packed_data->func = glTexSubImage2D; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)xoffset; \
    packed_data->args.a4 = (GLint)yoffset; \
    packed_data->args.a5 = (GLsizei)width; \
    packed_data->args.a6 = (GLsizei)height; \
    packed_data->args.a7 = (GLenum)format; \
    packed_data->args.a8 = (GLenum)type; \
    packed_data->args.a9 = (GLvoid *)pixels; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTranslatef
#define push_glTranslatef(x, y, z) { \
    glTranslatef_PACKED *packed_data = malloc(sizeof(glTranslatef_PACKED)); \
    packed_data->format = glTranslatef_FORMAT; \
    packed_data->func = glTranslatef; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfloat)x; \
    packed_data->args.a2 = (GLfloat)y; \
    packed_data->args.a3 = (GLfloat)z; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glTranslatex
#define push_glTranslatex(x, y, z) { \
    glTranslatex_PACKED *packed_data = malloc(sizeof(glTranslatex_PACKED)); \
    packed_data->format = glTranslatex_FORMAT; \
    packed_data->func = glTranslatex; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLfixed)x; \
    packed_data->args.a2 = (GLfixed)y; \
    packed_data->args.a3 = (GLfixed)z; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glVertexPointer
#define push_glVertexPointer(size, type, stride, pointer) { \
    glVertexPointer_PACKED *packed_data = malloc(sizeof(glVertexPointer_PACKED)); \
    packed_data->format = glVertexPointer_FORMAT; \
    packed_data->func = glVertexPointer; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLint)size; \
    packed_data->args.a2 = (GLenum)type; \
    packed_data->args.a3 = (GLsizei)stride; \
    packed_data->args.a4 = (GLvoid *)pointer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glViewport
#define push_glViewport(x, y, width, height) { \
    glViewport_PACKED *packed_data = malloc(sizeof(glViewport_PACKED)); \
    packed_data->format = glViewport_FORMAT; \
    packed_data->func = glViewport; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLint)x; \
    packed_data->args.a2 = (GLint)y; \
    packed_data->args.a3 = (GLsizei)width; \
    packed_data->args.a4 = (GLsizei)height; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXAssociateDMPbufferSGIX
#define push_glXAssociateDMPbufferSGIX(dpy, pbuffer, params, dmbuffer) { \
    glXAssociateDMPbufferSGIX_PACKED *packed_data = malloc(sizeof(glXAssociateDMPbufferSGIX_PACKED)); \
    packed_data->format = glXAssociateDMPbufferSGIX_FORMAT; \
    packed_data->func = glXAssociateDMPbufferSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXPbufferSGIX)pbuffer; \
    packed_data->args.a3 = (DMparams *)params; \
    packed_data->args.a4 = (DMbuffer)dmbuffer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXBindChannelToWindowSGIX
#define push_glXBindChannelToWindowSGIX(display, screen, channel, window) { \
    glXBindChannelToWindowSGIX_PACKED *packed_data = malloc(sizeof(glXBindChannelToWindowSGIX_PACKED)); \
    packed_data->format = glXBindChannelToWindowSGIX_FORMAT; \
    packed_data->func = glXBindChannelToWindowSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)display; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int)channel; \
    packed_data->args.a4 = (Window)window; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXBindHyperpipeSGIX
#define push_glXBindHyperpipeSGIX(dpy, hpId) { \
    glXBindHyperpipeSGIX_PACKED *packed_data = malloc(sizeof(glXBindHyperpipeSGIX_PACKED)); \
    packed_data->format = glXBindHyperpipeSGIX_FORMAT; \
    packed_data->func = glXBindHyperpipeSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)hpId; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXBindSwapBarrierNV
#define push_glXBindSwapBarrierNV(dpy, group, barrier) { \
    glXBindSwapBarrierNV_PACKED *packed_data = malloc(sizeof(glXBindSwapBarrierNV_PACKED)); \
    packed_data->format = glXBindSwapBarrierNV_FORMAT; \
    packed_data->func = glXBindSwapBarrierNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLuint)group; \
    packed_data->args.a3 = (GLuint)barrier; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXBindSwapBarrierSGIX
#define push_glXBindSwapBarrierSGIX(dpy, drawable, barrier) { \
    glXBindSwapBarrierSGIX_PACKED *packed_data = malloc(sizeof(glXBindSwapBarrierSGIX_PACKED)); \
    packed_data->format = glXBindSwapBarrierSGIX_FORMAT; \
    packed_data->func = glXBindSwapBarrierSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (int)barrier; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXBindTexImageEXT
#define push_glXBindTexImageEXT(dpy, drawable, buffer, attrib_list) { \
    glXBindTexImageEXT_PACKED *packed_data = malloc(sizeof(glXBindTexImageEXT_PACKED)); \
    packed_data->format = glXBindTexImageEXT_FORMAT; \
    packed_data->func = glXBindTexImageEXT; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (int)buffer; \
    packed_data->args.a4 = (int *)attrib_list; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXBindVideoCaptureDeviceNV
#define push_glXBindVideoCaptureDeviceNV(dpy, video_capture_slot, device) { \
    glXBindVideoCaptureDeviceNV_PACKED *packed_data = malloc(sizeof(glXBindVideoCaptureDeviceNV_PACKED)); \
    packed_data->format = glXBindVideoCaptureDeviceNV_FORMAT; \
    packed_data->func = glXBindVideoCaptureDeviceNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (unsigned int)video_capture_slot; \
    packed_data->args.a3 = (GLXVideoCaptureDeviceNV)device; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXBindVideoDeviceNV
#define push_glXBindVideoDeviceNV(dpy, video_slot, video_device, attrib_list) { \
    glXBindVideoDeviceNV_PACKED *packed_data = malloc(sizeof(glXBindVideoDeviceNV_PACKED)); \
    packed_data->format = glXBindVideoDeviceNV_FORMAT; \
    packed_data->func = glXBindVideoDeviceNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (unsigned int)video_slot; \
    packed_data->args.a3 = (unsigned int)video_device; \
    packed_data->args.a4 = (int *)attrib_list; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXBindVideoImageNV
#define push_glXBindVideoImageNV(dpy, VideoDevice, pbuf, iVideoBuffer) { \
    glXBindVideoImageNV_PACKED *packed_data = malloc(sizeof(glXBindVideoImageNV_PACKED)); \
    packed_data->format = glXBindVideoImageNV_FORMAT; \
    packed_data->func = glXBindVideoImageNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXVideoDeviceNV)VideoDevice; \
    packed_data->args.a3 = (GLXPbuffer)pbuf; \
    packed_data->args.a4 = (int)iVideoBuffer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXChangeDrawableAttributes
#define push_glXChangeDrawableAttributes(drawable) { \
    glXChangeDrawableAttributes_PACKED *packed_data = malloc(sizeof(glXChangeDrawableAttributes_PACKED)); \
    packed_data->format = glXChangeDrawableAttributes_FORMAT; \
    packed_data->func = glXChangeDrawableAttributes; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (uint32_t)drawable; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXChangeDrawableAttributesSGIX
#define push_glXChangeDrawableAttributesSGIX(drawable) { \
    glXChangeDrawableAttributesSGIX_PACKED *packed_data = malloc(sizeof(glXChangeDrawableAttributesSGIX_PACKED)); \
    packed_data->format = glXChangeDrawableAttributesSGIX_FORMAT; \
    packed_data->func = glXChangeDrawableAttributesSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (uint32_t)drawable; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXChannelRectSGIX
#define push_glXChannelRectSGIX(display, screen, channel, x, y, w, h) { \
    glXChannelRectSGIX_PACKED *packed_data = malloc(sizeof(glXChannelRectSGIX_PACKED)); \
    packed_data->format = glXChannelRectSGIX_FORMAT; \
    packed_data->func = glXChannelRectSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)display; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int)channel; \
    packed_data->args.a4 = (int)x; \
    packed_data->args.a5 = (int)y; \
    packed_data->args.a6 = (int)w; \
    packed_data->args.a7 = (int)h; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXChannelRectSyncSGIX
#define push_glXChannelRectSyncSGIX(display, screen, channel, synctype) { \
    glXChannelRectSyncSGIX_PACKED *packed_data = malloc(sizeof(glXChannelRectSyncSGIX_PACKED)); \
    packed_data->format = glXChannelRectSyncSGIX_FORMAT; \
    packed_data->func = glXChannelRectSyncSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)display; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int)channel; \
    packed_data->args.a4 = (GLenum)synctype; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXChooseFBConfig
#define push_glXChooseFBConfig(dpy, screen, attrib_list, nelements) { \
    glXChooseFBConfig_PACKED *packed_data = malloc(sizeof(glXChooseFBConfig_PACKED)); \
    packed_data->format = glXChooseFBConfig_FORMAT; \
    packed_data->func = glXChooseFBConfig; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int *)attrib_list; \
    packed_data->args.a4 = (int *)nelements; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXChooseFBConfigSGIX
#define push_glXChooseFBConfigSGIX(dpy, screen, attrib_list, nelements) { \
    glXChooseFBConfigSGIX_PACKED *packed_data = malloc(sizeof(glXChooseFBConfigSGIX_PACKED)); \
    packed_data->format = glXChooseFBConfigSGIX_FORMAT; \
    packed_data->func = glXChooseFBConfigSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int *)attrib_list; \
    packed_data->args.a4 = (int *)nelements; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXChooseVisual
#define push_glXChooseVisual(dpy, screen, attribList) { \
    glXChooseVisual_PACKED *packed_data = malloc(sizeof(glXChooseVisual_PACKED)); \
    packed_data->format = glXChooseVisual_FORMAT; \
    packed_data->func = glXChooseVisual; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int *)attribList; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXClientInfo
#define push_glXClientInfo() { \
    glXClientInfo_PACKED *packed_data = malloc(sizeof(glXClientInfo_PACKED)); \
    packed_data->format = glXClientInfo_FORMAT; \
    packed_data->func = glXClientInfo; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCopyContext
#define push_glXCopyContext(dpy, src, dst, mask) { \
    glXCopyContext_PACKED *packed_data = malloc(sizeof(glXCopyContext_PACKED)); \
    packed_data->format = glXCopyContext_FORMAT; \
    packed_data->func = glXCopyContext; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXContext)src; \
    packed_data->args.a3 = (GLXContext)dst; \
    packed_data->args.a4 = (unsigned long)mask; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCopyImageSubDataNV
#define push_glXCopyImageSubDataNV(dpy, srcCtx, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstCtx, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth) { \
    glXCopyImageSubDataNV_PACKED *packed_data = malloc(sizeof(glXCopyImageSubDataNV_PACKED)); \
    packed_data->format = glXCopyImageSubDataNV_FORMAT; \
    packed_data->func = glXCopyImageSubDataNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXContext)srcCtx; \
    packed_data->args.a3 = (GLuint)srcName; \
    packed_data->args.a4 = (GLenum)srcTarget; \
    packed_data->args.a5 = (GLint)srcLevel; \
    packed_data->args.a6 = (GLint)srcX; \
    packed_data->args.a7 = (GLint)srcY; \
    packed_data->args.a8 = (GLint)srcZ; \
    packed_data->args.a9 = (GLXContext)dstCtx; \
    packed_data->args.a10 = (GLuint)dstName; \
    packed_data->args.a11 = (GLenum)dstTarget; \
    packed_data->args.a12 = (GLint)dstLevel; \
    packed_data->args.a13 = (GLint)dstX; \
    packed_data->args.a14 = (GLint)dstY; \
    packed_data->args.a15 = (GLint)dstZ; \
    packed_data->args.a16 = (GLsizei)width; \
    packed_data->args.a17 = (GLsizei)height; \
    packed_data->args.a18 = (GLsizei)depth; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCopySubBufferMESA
#define push_glXCopySubBufferMESA(dpy, drawable, x, y, width, height) { \
    glXCopySubBufferMESA_PACKED *packed_data = malloc(sizeof(glXCopySubBufferMESA_PACKED)); \
    packed_data->format = glXCopySubBufferMESA_FORMAT; \
    packed_data->func = glXCopySubBufferMESA; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (int)x; \
    packed_data->args.a4 = (int)y; \
    packed_data->args.a5 = (int)width; \
    packed_data->args.a6 = (int)height; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreateContext
#define push_glXCreateContext(dpy, vis, shareList, direct) { \
    glXCreateContext_PACKED *packed_data = malloc(sizeof(glXCreateContext_PACKED)); \
    packed_data->format = glXCreateContext_FORMAT; \
    packed_data->func = glXCreateContext; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (XVisualInfo *)vis; \
    packed_data->args.a3 = (GLXContext)shareList; \
    packed_data->args.a4 = (Bool)direct; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreateContextAttribsARB
#define push_glXCreateContextAttribsARB(dpy, config, share_context, direct, attrib_list) { \
    glXCreateContextAttribsARB_PACKED *packed_data = malloc(sizeof(glXCreateContextAttribsARB_PACKED)); \
    packed_data->format = glXCreateContextAttribsARB_FORMAT; \
    packed_data->func = glXCreateContextAttribsARB; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfig)config; \
    packed_data->args.a3 = (GLXContext)share_context; \
    packed_data->args.a4 = (Bool)direct; \
    packed_data->args.a5 = (int *)attrib_list; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreateContextWithConfigSGIX
#define push_glXCreateContextWithConfigSGIX(dpy, config, render_type, share_list, direct) { \
    glXCreateContextWithConfigSGIX_PACKED *packed_data = malloc(sizeof(glXCreateContextWithConfigSGIX_PACKED)); \
    packed_data->format = glXCreateContextWithConfigSGIX_FORMAT; \
    packed_data->func = glXCreateContextWithConfigSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfigSGIX)config; \
    packed_data->args.a3 = (int)render_type; \
    packed_data->args.a4 = (GLXContext)share_list; \
    packed_data->args.a5 = (Bool)direct; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreateGLXPbufferSGIX
#define push_glXCreateGLXPbufferSGIX(dpy, config, width, height, attrib_list) { \
    glXCreateGLXPbufferSGIX_PACKED *packed_data = malloc(sizeof(glXCreateGLXPbufferSGIX_PACKED)); \
    packed_data->format = glXCreateGLXPbufferSGIX_FORMAT; \
    packed_data->func = glXCreateGLXPbufferSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfigSGIX)config; \
    packed_data->args.a3 = (unsigned int)width; \
    packed_data->args.a4 = (unsigned int)height; \
    packed_data->args.a5 = (int *)attrib_list; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreateGLXPixmap
#define push_glXCreateGLXPixmap(dpy, visual, pixmap) { \
    glXCreateGLXPixmap_PACKED *packed_data = malloc(sizeof(glXCreateGLXPixmap_PACKED)); \
    packed_data->format = glXCreateGLXPixmap_FORMAT; \
    packed_data->func = glXCreateGLXPixmap; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (XVisualInfo *)visual; \
    packed_data->args.a3 = (Pixmap)pixmap; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreateGLXPixmapMESA
#define push_glXCreateGLXPixmapMESA(dpy, visual, pixmap, cmap) { \
    glXCreateGLXPixmapMESA_PACKED *packed_data = malloc(sizeof(glXCreateGLXPixmapMESA_PACKED)); \
    packed_data->format = glXCreateGLXPixmapMESA_FORMAT; \
    packed_data->func = glXCreateGLXPixmapMESA; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (XVisualInfo *)visual; \
    packed_data->args.a3 = (Pixmap)pixmap; \
    packed_data->args.a4 = (Colormap)cmap; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreateGLXPixmapWithConfigSGIX
#define push_glXCreateGLXPixmapWithConfigSGIX(dpy, config, pixmap) { \
    glXCreateGLXPixmapWithConfigSGIX_PACKED *packed_data = malloc(sizeof(glXCreateGLXPixmapWithConfigSGIX_PACKED)); \
    packed_data->format = glXCreateGLXPixmapWithConfigSGIX_FORMAT; \
    packed_data->func = glXCreateGLXPixmapWithConfigSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfigSGIX)config; \
    packed_data->args.a3 = (Pixmap)pixmap; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreateGLXVideoSourceSGIX
#define push_glXCreateGLXVideoSourceSGIX(display, screen, server, path, nodeClass, drainNode) { \
    glXCreateGLXVideoSourceSGIX_PACKED *packed_data = malloc(sizeof(glXCreateGLXVideoSourceSGIX_PACKED)); \
    packed_data->format = glXCreateGLXVideoSourceSGIX_FORMAT; \
    packed_data->func = glXCreateGLXVideoSourceSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)display; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (VLServer)server; \
    packed_data->args.a4 = (VLPath)path; \
    packed_data->args.a5 = (int)nodeClass; \
    packed_data->args.a6 = (VLNode)drainNode; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreateNewContext
#define push_glXCreateNewContext(dpy, config, render_type, share_list, direct) { \
    glXCreateNewContext_PACKED *packed_data = malloc(sizeof(glXCreateNewContext_PACKED)); \
    packed_data->format = glXCreateNewContext_FORMAT; \
    packed_data->func = glXCreateNewContext; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfig)config; \
    packed_data->args.a3 = (int)render_type; \
    packed_data->args.a4 = (GLXContext)share_list; \
    packed_data->args.a5 = (Bool)direct; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreatePbuffer
#define push_glXCreatePbuffer(dpy, config, attrib_list) { \
    glXCreatePbuffer_PACKED *packed_data = malloc(sizeof(glXCreatePbuffer_PACKED)); \
    packed_data->format = glXCreatePbuffer_FORMAT; \
    packed_data->func = glXCreatePbuffer; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfig)config; \
    packed_data->args.a3 = (int *)attrib_list; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreatePixmap
#define push_glXCreatePixmap(dpy, config, pixmap, attrib_list) { \
    glXCreatePixmap_PACKED *packed_data = malloc(sizeof(glXCreatePixmap_PACKED)); \
    packed_data->format = glXCreatePixmap_FORMAT; \
    packed_data->func = glXCreatePixmap; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfig)config; \
    packed_data->args.a3 = (Pixmap)pixmap; \
    packed_data->args.a4 = (int *)attrib_list; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCreateWindow
#define push_glXCreateWindow(dpy, config, win, attrib_list) { \
    glXCreateWindow_PACKED *packed_data = malloc(sizeof(glXCreateWindow_PACKED)); \
    packed_data->format = glXCreateWindow_FORMAT; \
    packed_data->func = glXCreateWindow; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfig)config; \
    packed_data->args.a3 = (Window)win; \
    packed_data->args.a4 = (int *)attrib_list; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXCushionSGI
#define push_glXCushionSGI(dpy, window, cushion) { \
    glXCushionSGI_PACKED *packed_data = malloc(sizeof(glXCushionSGI_PACKED)); \
    packed_data->format = glXCushionSGI_FORMAT; \
    packed_data->func = glXCushionSGI; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (Window)window; \
    packed_data->args.a3 = (float)cushion; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXDestroyContext
#define push_glXDestroyContext(dpy, ctx) { \
    glXDestroyContext_PACKED *packed_data = malloc(sizeof(glXDestroyContext_PACKED)); \
    packed_data->format = glXDestroyContext_FORMAT; \
    packed_data->func = glXDestroyContext; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXContext)ctx; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXDestroyGLXPbufferSGIX
#define push_glXDestroyGLXPbufferSGIX(dpy, pbuf) { \
    glXDestroyGLXPbufferSGIX_PACKED *packed_data = malloc(sizeof(glXDestroyGLXPbufferSGIX_PACKED)); \
    packed_data->format = glXDestroyGLXPbufferSGIX_FORMAT; \
    packed_data->func = glXDestroyGLXPbufferSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXPbufferSGIX)pbuf; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXDestroyGLXPixmap
#define push_glXDestroyGLXPixmap(dpy, pixmap) { \
    glXDestroyGLXPixmap_PACKED *packed_data = malloc(sizeof(glXDestroyGLXPixmap_PACKED)); \
    packed_data->format = glXDestroyGLXPixmap_FORMAT; \
    packed_data->func = glXDestroyGLXPixmap; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXPixmap)pixmap; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXDestroyGLXVideoSourceSGIX
#define push_glXDestroyGLXVideoSourceSGIX(dpy, glxvideosource) { \
    glXDestroyGLXVideoSourceSGIX_PACKED *packed_data = malloc(sizeof(glXDestroyGLXVideoSourceSGIX_PACKED)); \
    packed_data->format = glXDestroyGLXVideoSourceSGIX_FORMAT; \
    packed_data->func = glXDestroyGLXVideoSourceSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXVideoSourceSGIX)glxvideosource; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXDestroyHyperpipeConfigSGIX
#define push_glXDestroyHyperpipeConfigSGIX(dpy, hpId) { \
    glXDestroyHyperpipeConfigSGIX_PACKED *packed_data = malloc(sizeof(glXDestroyHyperpipeConfigSGIX_PACKED)); \
    packed_data->format = glXDestroyHyperpipeConfigSGIX_FORMAT; \
    packed_data->func = glXDestroyHyperpipeConfigSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)hpId; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXDestroyPbuffer
#define push_glXDestroyPbuffer(dpy, pbuf) { \
    glXDestroyPbuffer_PACKED *packed_data = malloc(sizeof(glXDestroyPbuffer_PACKED)); \
    packed_data->format = glXDestroyPbuffer_FORMAT; \
    packed_data->func = glXDestroyPbuffer; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXPbuffer)pbuf; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXDestroyPixmap
#define push_glXDestroyPixmap(dpy, pixmap) { \
    glXDestroyPixmap_PACKED *packed_data = malloc(sizeof(glXDestroyPixmap_PACKED)); \
    packed_data->format = glXDestroyPixmap_FORMAT; \
    packed_data->func = glXDestroyPixmap; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXPixmap)pixmap; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXDestroyWindow
#define push_glXDestroyWindow(dpy, win) { \
    glXDestroyWindow_PACKED *packed_data = malloc(sizeof(glXDestroyWindow_PACKED)); \
    packed_data->format = glXDestroyWindow_FORMAT; \
    packed_data->func = glXDestroyWindow; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXWindow)win; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXEnumerateVideoCaptureDevicesNV
#define push_glXEnumerateVideoCaptureDevicesNV(dpy, screen, nelements) { \
    glXEnumerateVideoCaptureDevicesNV_PACKED *packed_data = malloc(sizeof(glXEnumerateVideoCaptureDevicesNV_PACKED)); \
    packed_data->format = glXEnumerateVideoCaptureDevicesNV_FORMAT; \
    packed_data->func = glXEnumerateVideoCaptureDevicesNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int *)nelements; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXEnumerateVideoDevicesNV
#define push_glXEnumerateVideoDevicesNV(dpy, screen, nelements) { \
    glXEnumerateVideoDevicesNV_PACKED *packed_data = malloc(sizeof(glXEnumerateVideoDevicesNV_PACKED)); \
    packed_data->format = glXEnumerateVideoDevicesNV_FORMAT; \
    packed_data->func = glXEnumerateVideoDevicesNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int *)nelements; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXFreeContextEXT
#define push_glXFreeContextEXT(dpy, context) { \
    glXFreeContextEXT_PACKED *packed_data = malloc(sizeof(glXFreeContextEXT_PACKED)); \
    packed_data->format = glXFreeContextEXT_FORMAT; \
    packed_data->func = glXFreeContextEXT; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXContext)context; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetAGPOffsetMESA
#define push_glXGetAGPOffsetMESA(pointer) { \
    glXGetAGPOffsetMESA_PACKED *packed_data = malloc(sizeof(glXGetAGPOffsetMESA_PACKED)); \
    packed_data->format = glXGetAGPOffsetMESA_FORMAT; \
    packed_data->func = glXGetAGPOffsetMESA; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (void *)pointer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetClientString
#define push_glXGetClientString(display, name) { \
    glXGetClientString_PACKED *packed_data = malloc(sizeof(glXGetClientString_PACKED)); \
    packed_data->format = glXGetClientString_FORMAT; \
    packed_data->func = glXGetClientString; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)display; \
    packed_data->args.a2 = (int)name; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetConfig
#define push_glXGetConfig(display, visual, attribute, value) { \
    glXGetConfig_PACKED *packed_data = malloc(sizeof(glXGetConfig_PACKED)); \
    packed_data->format = glXGetConfig_FORMAT; \
    packed_data->func = glXGetConfig; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)display; \
    packed_data->args.a2 = (XVisualInfo *)visual; \
    packed_data->args.a3 = (int)attribute; \
    packed_data->args.a4 = (int *)value; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetContextIDEXT
#define push_glXGetContextIDEXT(context) { \
    glXGetContextIDEXT_PACKED *packed_data = malloc(sizeof(glXGetContextIDEXT_PACKED)); \
    packed_data->format = glXGetContextIDEXT_FORMAT; \
    packed_data->func = glXGetContextIDEXT; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLXContext)context; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetCurrentContext
#define push_glXGetCurrentContext() { \
    glXGetCurrentContext_PACKED *packed_data = malloc(sizeof(glXGetCurrentContext_PACKED)); \
    packed_data->format = glXGetCurrentContext_FORMAT; \
    packed_data->func = glXGetCurrentContext; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetCurrentDisplay
#define push_glXGetCurrentDisplay() { \
    glXGetCurrentDisplay_PACKED *packed_data = malloc(sizeof(glXGetCurrentDisplay_PACKED)); \
    packed_data->format = glXGetCurrentDisplay_FORMAT; \
    packed_data->func = glXGetCurrentDisplay; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetCurrentDisplayEXT
#define push_glXGetCurrentDisplayEXT() { \
    glXGetCurrentDisplayEXT_PACKED *packed_data = malloc(sizeof(glXGetCurrentDisplayEXT_PACKED)); \
    packed_data->format = glXGetCurrentDisplayEXT_FORMAT; \
    packed_data->func = glXGetCurrentDisplayEXT; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetCurrentDrawable
#define push_glXGetCurrentDrawable() { \
    glXGetCurrentDrawable_PACKED *packed_data = malloc(sizeof(glXGetCurrentDrawable_PACKED)); \
    packed_data->format = glXGetCurrentDrawable_FORMAT; \
    packed_data->func = glXGetCurrentDrawable; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetCurrentReadDrawable
#define push_glXGetCurrentReadDrawable() { \
    glXGetCurrentReadDrawable_PACKED *packed_data = malloc(sizeof(glXGetCurrentReadDrawable_PACKED)); \
    packed_data->format = glXGetCurrentReadDrawable_FORMAT; \
    packed_data->func = glXGetCurrentReadDrawable; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetCurrentReadDrawableSGI
#define push_glXGetCurrentReadDrawableSGI() { \
    glXGetCurrentReadDrawableSGI_PACKED *packed_data = malloc(sizeof(glXGetCurrentReadDrawableSGI_PACKED)); \
    packed_data->format = glXGetCurrentReadDrawableSGI_FORMAT; \
    packed_data->func = glXGetCurrentReadDrawableSGI; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetDrawableAttributes
#define push_glXGetDrawableAttributes(drawable) { \
    glXGetDrawableAttributes_PACKED *packed_data = malloc(sizeof(glXGetDrawableAttributes_PACKED)); \
    packed_data->format = glXGetDrawableAttributes_FORMAT; \
    packed_data->func = glXGetDrawableAttributes; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (uint32_t)drawable; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetDrawableAttributesSGIX
#define push_glXGetDrawableAttributesSGIX(drawable) { \
    glXGetDrawableAttributesSGIX_PACKED *packed_data = malloc(sizeof(glXGetDrawableAttributesSGIX_PACKED)); \
    packed_data->format = glXGetDrawableAttributesSGIX_FORMAT; \
    packed_data->func = glXGetDrawableAttributesSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (uint32_t)drawable; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetFBConfigAttrib
#define push_glXGetFBConfigAttrib(dpy, config, attribute, value) { \
    glXGetFBConfigAttrib_PACKED *packed_data = malloc(sizeof(glXGetFBConfigAttrib_PACKED)); \
    packed_data->format = glXGetFBConfigAttrib_FORMAT; \
    packed_data->func = glXGetFBConfigAttrib; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfig)config; \
    packed_data->args.a3 = (int)attribute; \
    packed_data->args.a4 = (int *)value; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetFBConfigAttribSGIX
#define push_glXGetFBConfigAttribSGIX(dpy, config, attribute, value) { \
    glXGetFBConfigAttribSGIX_PACKED *packed_data = malloc(sizeof(glXGetFBConfigAttribSGIX_PACKED)); \
    packed_data->format = glXGetFBConfigAttribSGIX_FORMAT; \
    packed_data->func = glXGetFBConfigAttribSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfigSGIX)config; \
    packed_data->args.a3 = (int)attribute; \
    packed_data->args.a4 = (int *)value; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetFBConfigFromVisualSGIX
#define push_glXGetFBConfigFromVisualSGIX(dpy, vis) { \
    glXGetFBConfigFromVisualSGIX_PACKED *packed_data = malloc(sizeof(glXGetFBConfigFromVisualSGIX_PACKED)); \
    packed_data->format = glXGetFBConfigFromVisualSGIX_FORMAT; \
    packed_data->func = glXGetFBConfigFromVisualSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (XVisualInfo *)vis; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetFBConfigs
#define push_glXGetFBConfigs(dpy, screen, nelements) { \
    glXGetFBConfigs_PACKED *packed_data = malloc(sizeof(glXGetFBConfigs_PACKED)); \
    packed_data->format = glXGetFBConfigs_FORMAT; \
    packed_data->func = glXGetFBConfigs; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int *)nelements; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetFBConfigsSGIX
#define push_glXGetFBConfigsSGIX() { \
    glXGetFBConfigsSGIX_PACKED *packed_data = malloc(sizeof(glXGetFBConfigsSGIX_PACKED)); \
    packed_data->format = glXGetFBConfigsSGIX_FORMAT; \
    packed_data->func = glXGetFBConfigsSGIX; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetMscRateOML
#define push_glXGetMscRateOML(dpy, drawable, numerator, denominator) { \
    glXGetMscRateOML_PACKED *packed_data = malloc(sizeof(glXGetMscRateOML_PACKED)); \
    packed_data->format = glXGetMscRateOML_FORMAT; \
    packed_data->func = glXGetMscRateOML; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (int32_t *)numerator; \
    packed_data->args.a4 = (int32_t *)denominator; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetProcAddress
#define push_glXGetProcAddress(procName) { \
    glXGetProcAddress_PACKED *packed_data = malloc(sizeof(glXGetProcAddress_PACKED)); \
    packed_data->format = glXGetProcAddress_FORMAT; \
    packed_data->func = glXGetProcAddress; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLubyte *)procName; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetProcAddressARB
#define push_glXGetProcAddressARB(procName) { \
    glXGetProcAddressARB_PACKED *packed_data = malloc(sizeof(glXGetProcAddressARB_PACKED)); \
    packed_data->format = glXGetProcAddressARB_FORMAT; \
    packed_data->func = glXGetProcAddressARB; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (GLubyte *)procName; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetSelectedEvent
#define push_glXGetSelectedEvent(dpy, draw, event_mask) { \
    glXGetSelectedEvent_PACKED *packed_data = malloc(sizeof(glXGetSelectedEvent_PACKED)); \
    packed_data->format = glXGetSelectedEvent_FORMAT; \
    packed_data->func = glXGetSelectedEvent; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)draw; \
    packed_data->args.a3 = (unsigned long *)event_mask; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetSelectedEventSGIX
#define push_glXGetSelectedEventSGIX(dpy, drawable, mask) { \
    glXGetSelectedEventSGIX_PACKED *packed_data = malloc(sizeof(glXGetSelectedEventSGIX_PACKED)); \
    packed_data->format = glXGetSelectedEventSGIX_FORMAT; \
    packed_data->func = glXGetSelectedEventSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (unsigned long *)mask; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetSyncValuesOML
#define push_glXGetSyncValuesOML(dpy, drawable, ust, msc, sbc) { \
    glXGetSyncValuesOML_PACKED *packed_data = malloc(sizeof(glXGetSyncValuesOML_PACKED)); \
    packed_data->format = glXGetSyncValuesOML_FORMAT; \
    packed_data->func = glXGetSyncValuesOML; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (int64_t *)ust; \
    packed_data->args.a4 = (int64_t *)msc; \
    packed_data->args.a5 = (int64_t *)sbc; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetTransparentIndexSUN
#define push_glXGetTransparentIndexSUN(dpy, overlay, underlay, pTransparentIndex) { \
    glXGetTransparentIndexSUN_PACKED *packed_data = malloc(sizeof(glXGetTransparentIndexSUN_PACKED)); \
    packed_data->format = glXGetTransparentIndexSUN_FORMAT; \
    packed_data->func = glXGetTransparentIndexSUN; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (Window)overlay; \
    packed_data->args.a3 = (Window)underlay; \
    packed_data->args.a4 = (long *)pTransparentIndex; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetVideoDeviceNV
#define push_glXGetVideoDeviceNV(dpy, screen, numVideoDevices, pVideoDevice) { \
    glXGetVideoDeviceNV_PACKED *packed_data = malloc(sizeof(glXGetVideoDeviceNV_PACKED)); \
    packed_data->format = glXGetVideoDeviceNV_FORMAT; \
    packed_data->func = glXGetVideoDeviceNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int)numVideoDevices; \
    packed_data->args.a4 = (GLXVideoDeviceNV *)pVideoDevice; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetVideoInfoNV
#define push_glXGetVideoInfoNV(dpy, screen, VideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo) { \
    glXGetVideoInfoNV_PACKED *packed_data = malloc(sizeof(glXGetVideoInfoNV_PACKED)); \
    packed_data->format = glXGetVideoInfoNV_FORMAT; \
    packed_data->func = glXGetVideoInfoNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (GLXVideoDeviceNV)VideoDevice; \
    packed_data->args.a4 = (unsigned long *)pulCounterOutputPbuffer; \
    packed_data->args.a5 = (unsigned long *)pulCounterOutputVideo; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetVideoSyncSGI
#define push_glXGetVideoSyncSGI(count) { \
    glXGetVideoSyncSGI_PACKED *packed_data = malloc(sizeof(glXGetVideoSyncSGI_PACKED)); \
    packed_data->format = glXGetVideoSyncSGI_FORMAT; \
    packed_data->func = glXGetVideoSyncSGI; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (unsigned int *)count; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetVisualConfigs
#define push_glXGetVisualConfigs() { \
    glXGetVisualConfigs_PACKED *packed_data = malloc(sizeof(glXGetVisualConfigs_PACKED)); \
    packed_data->format = glXGetVisualConfigs_FORMAT; \
    packed_data->func = glXGetVisualConfigs; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetVisualFromFBConfig
#define push_glXGetVisualFromFBConfig(dpy, config) { \
    glXGetVisualFromFBConfig_PACKED *packed_data = malloc(sizeof(glXGetVisualFromFBConfig_PACKED)); \
    packed_data->format = glXGetVisualFromFBConfig_FORMAT; \
    packed_data->func = glXGetVisualFromFBConfig; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfig)config; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXGetVisualFromFBConfigSGIX
#define push_glXGetVisualFromFBConfigSGIX(dpy, config) { \
    glXGetVisualFromFBConfigSGIX_PACKED *packed_data = malloc(sizeof(glXGetVisualFromFBConfigSGIX_PACKED)); \
    packed_data->format = glXGetVisualFromFBConfigSGIX_FORMAT; \
    packed_data->func = glXGetVisualFromFBConfigSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXFBConfigSGIX)config; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXHyperpipeAttribSGIX
#define push_glXHyperpipeAttribSGIX(dpy, timeSlice, attrib, size, attribList) { \
    glXHyperpipeAttribSGIX_PACKED *packed_data = malloc(sizeof(glXHyperpipeAttribSGIX_PACKED)); \
    packed_data->format = glXHyperpipeAttribSGIX_FORMAT; \
    packed_data->func = glXHyperpipeAttribSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)timeSlice; \
    packed_data->args.a3 = (int)attrib; \
    packed_data->args.a4 = (int)size; \
    packed_data->args.a5 = (void *)attribList; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXHyperpipeConfigSGIX
#define push_glXHyperpipeConfigSGIX(dpy, networkId, npipes, cfg, hpId) { \
    glXHyperpipeConfigSGIX_PACKED *packed_data = malloc(sizeof(glXHyperpipeConfigSGIX_PACKED)); \
    packed_data->format = glXHyperpipeConfigSGIX_FORMAT; \
    packed_data->func = glXHyperpipeConfigSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)networkId; \
    packed_data->args.a3 = (int)npipes; \
    packed_data->args.a4 = (GLXHyperpipeConfigSGIX *)cfg; \
    packed_data->args.a5 = (int *)hpId; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXImportContextEXT
#define push_glXImportContextEXT(dpy, contextID) { \
    glXImportContextEXT_PACKED *packed_data = malloc(sizeof(glXImportContextEXT_PACKED)); \
    packed_data->format = glXImportContextEXT_FORMAT; \
    packed_data->func = glXImportContextEXT; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXContextID)contextID; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXIsDirect
#define push_glXIsDirect(dpy, ctx) { \
    glXIsDirect_PACKED *packed_data = malloc(sizeof(glXIsDirect_PACKED)); \
    packed_data->format = glXIsDirect_FORMAT; \
    packed_data->func = glXIsDirect; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXContext)ctx; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXJoinSwapGroupNV
#define push_glXJoinSwapGroupNV(dpy, drawable, group) { \
    glXJoinSwapGroupNV_PACKED *packed_data = malloc(sizeof(glXJoinSwapGroupNV_PACKED)); \
    packed_data->format = glXJoinSwapGroupNV_FORMAT; \
    packed_data->func = glXJoinSwapGroupNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (GLuint)group; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXJoinSwapGroupSGIX
#define push_glXJoinSwapGroupSGIX(dpy, drawable, member) { \
    glXJoinSwapGroupSGIX_PACKED *packed_data = malloc(sizeof(glXJoinSwapGroupSGIX_PACKED)); \
    packed_data->format = glXJoinSwapGroupSGIX_FORMAT; \
    packed_data->func = glXJoinSwapGroupSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (GLXDrawable)member; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXLockVideoCaptureDeviceNV
#define push_glXLockVideoCaptureDeviceNV(dpy, device) { \
    glXLockVideoCaptureDeviceNV_PACKED *packed_data = malloc(sizeof(glXLockVideoCaptureDeviceNV_PACKED)); \
    packed_data->format = glXLockVideoCaptureDeviceNV_FORMAT; \
    packed_data->func = glXLockVideoCaptureDeviceNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXVideoCaptureDeviceNV)device; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXMakeContextCurrent
#define push_glXMakeContextCurrent(dpy, draw, read, ctx) { \
    glXMakeContextCurrent_PACKED *packed_data = malloc(sizeof(glXMakeContextCurrent_PACKED)); \
    packed_data->format = glXMakeContextCurrent_FORMAT; \
    packed_data->func = glXMakeContextCurrent; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)draw; \
    packed_data->args.a3 = (GLXDrawable)read; \
    packed_data->args.a4 = (GLXContext)ctx; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXMakeCurrent
#define push_glXMakeCurrent(dpy, drawable, ctx) { \
    glXMakeCurrent_PACKED *packed_data = malloc(sizeof(glXMakeCurrent_PACKED)); \
    packed_data->format = glXMakeCurrent_FORMAT; \
    packed_data->func = glXMakeCurrent; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (GLXContext)ctx; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXMakeCurrentReadSGI
#define push_glXMakeCurrentReadSGI(dpy, draw, read, ctx) { \
    glXMakeCurrentReadSGI_PACKED *packed_data = malloc(sizeof(glXMakeCurrentReadSGI_PACKED)); \
    packed_data->format = glXMakeCurrentReadSGI_FORMAT; \
    packed_data->func = glXMakeCurrentReadSGI; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)draw; \
    packed_data->args.a3 = (GLXDrawable)read; \
    packed_data->args.a4 = (GLXContext)ctx; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryChannelDeltasSGIX
#define push_glXQueryChannelDeltasSGIX(display, screen, channel, x, y, w, h) { \
    glXQueryChannelDeltasSGIX_PACKED *packed_data = malloc(sizeof(glXQueryChannelDeltasSGIX_PACKED)); \
    packed_data->format = glXQueryChannelDeltasSGIX_FORMAT; \
    packed_data->func = glXQueryChannelDeltasSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)display; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int)channel; \
    packed_data->args.a4 = (int *)x; \
    packed_data->args.a5 = (int *)y; \
    packed_data->args.a6 = (int *)w; \
    packed_data->args.a7 = (int *)h; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryChannelRectSGIX
#define push_glXQueryChannelRectSGIX(display, screen, channel, dx, dy, dw, dh) { \
    glXQueryChannelRectSGIX_PACKED *packed_data = malloc(sizeof(glXQueryChannelRectSGIX_PACKED)); \
    packed_data->format = glXQueryChannelRectSGIX_FORMAT; \
    packed_data->func = glXQueryChannelRectSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)display; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int)channel; \
    packed_data->args.a4 = (int *)dx; \
    packed_data->args.a5 = (int *)dy; \
    packed_data->args.a6 = (int *)dw; \
    packed_data->args.a7 = (int *)dh; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryContext
#define push_glXQueryContext(dpy, ctx, attribute, value) { \
    glXQueryContext_PACKED *packed_data = malloc(sizeof(glXQueryContext_PACKED)); \
    packed_data->format = glXQueryContext_FORMAT; \
    packed_data->func = glXQueryContext; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXContext)ctx; \
    packed_data->args.a3 = (int)attribute; \
    packed_data->args.a4 = (int *)value; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryContextInfoEXT
#define push_glXQueryContextInfoEXT(dpy, context, attribute, value) { \
    glXQueryContextInfoEXT_PACKED *packed_data = malloc(sizeof(glXQueryContextInfoEXT_PACKED)); \
    packed_data->format = glXQueryContextInfoEXT_FORMAT; \
    packed_data->func = glXQueryContextInfoEXT; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXContext)context; \
    packed_data->args.a3 = (int)attribute; \
    packed_data->args.a4 = (int *)value; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryDrawable
#define push_glXQueryDrawable(dpy, draw, attribute, value) { \
    glXQueryDrawable_PACKED *packed_data = malloc(sizeof(glXQueryDrawable_PACKED)); \
    packed_data->format = glXQueryDrawable_FORMAT; \
    packed_data->func = glXQueryDrawable; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)draw; \
    packed_data->args.a3 = (int)attribute; \
    packed_data->args.a4 = (unsigned int *)value; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryExtension
#define push_glXQueryExtension(display, errorBase, eventBase) { \
    glXQueryExtension_PACKED *packed_data = malloc(sizeof(glXQueryExtension_PACKED)); \
    packed_data->format = glXQueryExtension_FORMAT; \
    packed_data->func = glXQueryExtension; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)display; \
    packed_data->args.a2 = (int *)errorBase; \
    packed_data->args.a3 = (int *)eventBase; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryExtensionsString
#define push_glXQueryExtensionsString(dpy, screen) { \
    glXQueryExtensionsString_PACKED *packed_data = malloc(sizeof(glXQueryExtensionsString_PACKED)); \
    packed_data->format = glXQueryExtensionsString_FORMAT; \
    packed_data->func = glXQueryExtensionsString; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryFrameCountNV
#define push_glXQueryFrameCountNV(dpy, screen, count) { \
    glXQueryFrameCountNV_PACKED *packed_data = malloc(sizeof(glXQueryFrameCountNV_PACKED)); \
    packed_data->format = glXQueryFrameCountNV_FORMAT; \
    packed_data->func = glXQueryFrameCountNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (GLuint *)count; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryGLXPbufferSGIX
#define push_glXQueryGLXPbufferSGIX(dpy, pbuf, attribute, value) { \
    glXQueryGLXPbufferSGIX_PACKED *packed_data = malloc(sizeof(glXQueryGLXPbufferSGIX_PACKED)); \
    packed_data->format = glXQueryGLXPbufferSGIX_FORMAT; \
    packed_data->func = glXQueryGLXPbufferSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXPbufferSGIX)pbuf; \
    packed_data->args.a3 = (int)attribute; \
    packed_data->args.a4 = (unsigned int *)value; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryHyperpipeAttribSGIX
#define push_glXQueryHyperpipeAttribSGIX(dpy, timeSlice, attrib, size, returnAttribList) { \
    glXQueryHyperpipeAttribSGIX_PACKED *packed_data = malloc(sizeof(glXQueryHyperpipeAttribSGIX_PACKED)); \
    packed_data->format = glXQueryHyperpipeAttribSGIX_FORMAT; \
    packed_data->func = glXQueryHyperpipeAttribSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)timeSlice; \
    packed_data->args.a3 = (int)attrib; \
    packed_data->args.a4 = (int)size; \
    packed_data->args.a5 = (void *)returnAttribList; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryHyperpipeBestAttribSGIX
#define push_glXQueryHyperpipeBestAttribSGIX(dpy, timeSlice, attrib, size, attribList, returnAttribList) { \
    glXQueryHyperpipeBestAttribSGIX_PACKED *packed_data = malloc(sizeof(glXQueryHyperpipeBestAttribSGIX_PACKED)); \
    packed_data->format = glXQueryHyperpipeBestAttribSGIX_FORMAT; \
    packed_data->func = glXQueryHyperpipeBestAttribSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)timeSlice; \
    packed_data->args.a3 = (int)attrib; \
    packed_data->args.a4 = (int)size; \
    packed_data->args.a5 = (void *)attribList; \
    packed_data->args.a6 = (void *)returnAttribList; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryHyperpipeConfigSGIX
#define push_glXQueryHyperpipeConfigSGIX(dpy, hpId, npipes) { \
    glXQueryHyperpipeConfigSGIX_PACKED *packed_data = malloc(sizeof(glXQueryHyperpipeConfigSGIX_PACKED)); \
    packed_data->format = glXQueryHyperpipeConfigSGIX_FORMAT; \
    packed_data->func = glXQueryHyperpipeConfigSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)hpId; \
    packed_data->args.a3 = (int *)npipes; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryHyperpipeNetworkSGIX
#define push_glXQueryHyperpipeNetworkSGIX(dpy, npipes) { \
    glXQueryHyperpipeNetworkSGIX_PACKED *packed_data = malloc(sizeof(glXQueryHyperpipeNetworkSGIX_PACKED)); \
    packed_data->format = glXQueryHyperpipeNetworkSGIX_FORMAT; \
    packed_data->func = glXQueryHyperpipeNetworkSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int *)npipes; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryMaxSwapBarriersSGIX
#define push_glXQueryMaxSwapBarriersSGIX(dpy, screen, max) { \
    glXQueryMaxSwapBarriersSGIX_PACKED *packed_data = malloc(sizeof(glXQueryMaxSwapBarriersSGIX_PACKED)); \
    packed_data->format = glXQueryMaxSwapBarriersSGIX_FORMAT; \
    packed_data->func = glXQueryMaxSwapBarriersSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int *)max; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryMaxSwapGroupsNV
#define push_glXQueryMaxSwapGroupsNV(dpy, screen, maxGroups, maxBarriers) { \
    glXQueryMaxSwapGroupsNV_PACKED *packed_data = malloc(sizeof(glXQueryMaxSwapGroupsNV_PACKED)); \
    packed_data->format = glXQueryMaxSwapGroupsNV_FORMAT; \
    packed_data->func = glXQueryMaxSwapGroupsNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (GLuint *)maxGroups; \
    packed_data->args.a4 = (GLuint *)maxBarriers; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryServerString
#define push_glXQueryServerString(dpy, screen, name) { \
    glXQueryServerString_PACKED *packed_data = malloc(sizeof(glXQueryServerString_PACKED)); \
    packed_data->format = glXQueryServerString_FORMAT; \
    packed_data->func = glXQueryServerString; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (int)name; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQuerySwapGroupNV
#define push_glXQuerySwapGroupNV(dpy, drawable, group, barrier) { \
    glXQuerySwapGroupNV_PACKED *packed_data = malloc(sizeof(glXQuerySwapGroupNV_PACKED)); \
    packed_data->format = glXQuerySwapGroupNV_FORMAT; \
    packed_data->func = glXQuerySwapGroupNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (GLuint *)group; \
    packed_data->args.a4 = (GLuint *)barrier; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryVersion
#define push_glXQueryVersion(dpy, maj, min) { \
    glXQueryVersion_PACKED *packed_data = malloc(sizeof(glXQueryVersion_PACKED)); \
    packed_data->format = glXQueryVersion_FORMAT; \
    packed_data->func = glXQueryVersion; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int *)maj; \
    packed_data->args.a3 = (int *)min; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXQueryVideoCaptureDeviceNV
#define push_glXQueryVideoCaptureDeviceNV(dpy, device, attribute, value) { \
    glXQueryVideoCaptureDeviceNV_PACKED *packed_data = malloc(sizeof(glXQueryVideoCaptureDeviceNV_PACKED)); \
    packed_data->format = glXQueryVideoCaptureDeviceNV_FORMAT; \
    packed_data->func = glXQueryVideoCaptureDeviceNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXVideoCaptureDeviceNV)device; \
    packed_data->args.a3 = (int)attribute; \
    packed_data->args.a4 = (int *)value; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXReleaseBuffersMESA
#define push_glXReleaseBuffersMESA(dpy, drawable) { \
    glXReleaseBuffersMESA_PACKED *packed_data = malloc(sizeof(glXReleaseBuffersMESA_PACKED)); \
    packed_data->format = glXReleaseBuffersMESA_FORMAT; \
    packed_data->func = glXReleaseBuffersMESA; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXReleaseTexImageEXT
#define push_glXReleaseTexImageEXT(dpy, drawable, buffer) { \
    glXReleaseTexImageEXT_PACKED *packed_data = malloc(sizeof(glXReleaseTexImageEXT_PACKED)); \
    packed_data->format = glXReleaseTexImageEXT_FORMAT; \
    packed_data->func = glXReleaseTexImageEXT; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (int)buffer; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXReleaseVideoCaptureDeviceNV
#define push_glXReleaseVideoCaptureDeviceNV(dpy, device) { \
    glXReleaseVideoCaptureDeviceNV_PACKED *packed_data = malloc(sizeof(glXReleaseVideoCaptureDeviceNV_PACKED)); \
    packed_data->format = glXReleaseVideoCaptureDeviceNV_FORMAT; \
    packed_data->func = glXReleaseVideoCaptureDeviceNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXVideoCaptureDeviceNV)device; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXReleaseVideoDeviceNV
#define push_glXReleaseVideoDeviceNV(dpy, screen, VideoDevice) { \
    glXReleaseVideoDeviceNV_PACKED *packed_data = malloc(sizeof(glXReleaseVideoDeviceNV_PACKED)); \
    packed_data->format = glXReleaseVideoDeviceNV_FORMAT; \
    packed_data->func = glXReleaseVideoDeviceNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    packed_data->args.a3 = (GLXVideoDeviceNV)VideoDevice; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXReleaseVideoImageNV
#define push_glXReleaseVideoImageNV(dpy, pbuf) { \
    glXReleaseVideoImageNV_PACKED *packed_data = malloc(sizeof(glXReleaseVideoImageNV_PACKED)); \
    packed_data->format = glXReleaseVideoImageNV_FORMAT; \
    packed_data->func = glXReleaseVideoImageNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXPbuffer)pbuf; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXRender
#define push_glXRender() { \
    glXRender_PACKED *packed_data = malloc(sizeof(glXRender_PACKED)); \
    packed_data->format = glXRender_FORMAT; \
    packed_data->func = glXRender; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXRenderLarge
#define push_glXRenderLarge() { \
    glXRenderLarge_PACKED *packed_data = malloc(sizeof(glXRenderLarge_PACKED)); \
    packed_data->format = glXRenderLarge_FORMAT; \
    packed_data->func = glXRenderLarge; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXResetFrameCountNV
#define push_glXResetFrameCountNV(dpy, screen) { \
    glXResetFrameCountNV_PACKED *packed_data = malloc(sizeof(glXResetFrameCountNV_PACKED)); \
    packed_data->format = glXResetFrameCountNV_FORMAT; \
    packed_data->func = glXResetFrameCountNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (int)screen; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXSelectEvent
#define push_glXSelectEvent(dpy, draw, event_mask) { \
    glXSelectEvent_PACKED *packed_data = malloc(sizeof(glXSelectEvent_PACKED)); \
    packed_data->format = glXSelectEvent_FORMAT; \
    packed_data->func = glXSelectEvent; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)draw; \
    packed_data->args.a3 = (unsigned long)event_mask; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXSelectEventSGIX
#define push_glXSelectEventSGIX(dpy, drawable, mask) { \
    glXSelectEventSGIX_PACKED *packed_data = malloc(sizeof(glXSelectEventSGIX_PACKED)); \
    packed_data->format = glXSelectEventSGIX_FORMAT; \
    packed_data->func = glXSelectEventSGIX; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (unsigned long)mask; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXSendPbufferToVideoNV
#define push_glXSendPbufferToVideoNV(dpy, pbuf, iBufferType, pulCounterPbuffer, bBlock) { \
    glXSendPbufferToVideoNV_PACKED *packed_data = malloc(sizeof(glXSendPbufferToVideoNV_PACKED)); \
    packed_data->format = glXSendPbufferToVideoNV_FORMAT; \
    packed_data->func = glXSendPbufferToVideoNV; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXPbuffer)pbuf; \
    packed_data->args.a3 = (int)iBufferType; \
    packed_data->args.a4 = (unsigned long *)pulCounterPbuffer; \
    packed_data->args.a5 = (GLboolean)bBlock; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXSet3DfxModeMESA
#define push_glXSet3DfxModeMESA(mode) { \
    glXSet3DfxModeMESA_PACKED *packed_data = malloc(sizeof(glXSet3DfxModeMESA_PACKED)); \
    packed_data->format = glXSet3DfxModeMESA_FORMAT; \
    packed_data->func = glXSet3DfxModeMESA; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (int)mode; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXSwapBuffers
#define push_glXSwapBuffers(dpy, drawable) { \
    glXSwapBuffers_PACKED *packed_data = malloc(sizeof(glXSwapBuffers_PACKED)); \
    packed_data->format = glXSwapBuffers_FORMAT; \
    packed_data->func = glXSwapBuffers; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXSwapBuffersMscOML
#define push_glXSwapBuffersMscOML(dpy, drawable, target_msc, divisor, remainder) { \
    glXSwapBuffersMscOML_PACKED *packed_data = malloc(sizeof(glXSwapBuffersMscOML_PACKED)); \
    packed_data->format = glXSwapBuffersMscOML_FORMAT; \
    packed_data->func = glXSwapBuffersMscOML; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (int64_t)target_msc; \
    packed_data->args.a4 = (int64_t)divisor; \
    packed_data->args.a5 = (int64_t)remainder; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXSwapIntervalEXT
#define push_glXSwapIntervalEXT(dpy, drawable, interval) { \
    glXSwapIntervalEXT_PACKED *packed_data = malloc(sizeof(glXSwapIntervalEXT_PACKED)); \
    packed_data->format = glXSwapIntervalEXT_FORMAT; \
    packed_data->func = glXSwapIntervalEXT; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (int)interval; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXSwapIntervalMESA
#define push_glXSwapIntervalMESA(interval) { \
    glXSwapIntervalMESA_PACKED *packed_data = malloc(sizeof(glXSwapIntervalMESA_PACKED)); \
    packed_data->format = glXSwapIntervalMESA_FORMAT; \
    packed_data->func = glXSwapIntervalMESA; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (unsigned int)interval; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXSwapIntervalSGI
#define push_glXSwapIntervalSGI(interval) { \
    glXSwapIntervalSGI_PACKED *packed_data = malloc(sizeof(glXSwapIntervalSGI_PACKED)); \
    packed_data->format = glXSwapIntervalSGI_FORMAT; \
    packed_data->func = glXSwapIntervalSGI; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (int)interval; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXUseXFont
#define push_glXUseXFont(font, first, count, list) { \
    glXUseXFont_PACKED *packed_data = malloc(sizeof(glXUseXFont_PACKED)); \
    packed_data->format = glXUseXFont_FORMAT; \
    packed_data->func = glXUseXFont; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Font)font; \
    packed_data->args.a2 = (int)first; \
    packed_data->args.a3 = (int)count; \
    packed_data->args.a4 = (int)list; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXVendorPrivate
#define push_glXVendorPrivate() { \
    glXVendorPrivate_PACKED *packed_data = malloc(sizeof(glXVendorPrivate_PACKED)); \
    packed_data->format = glXVendorPrivate_FORMAT; \
    packed_data->func = glXVendorPrivate; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXVendorPrivateWithReply
#define push_glXVendorPrivateWithReply() { \
    glXVendorPrivateWithReply_PACKED *packed_data = malloc(sizeof(glXVendorPrivateWithReply_PACKED)); \
    packed_data->format = glXVendorPrivateWithReply_FORMAT; \
    packed_data->func = glXVendorPrivateWithReply; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXWaitForMscOML
#define push_glXWaitForMscOML(dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc) { \
    glXWaitForMscOML_PACKED *packed_data = malloc(sizeof(glXWaitForMscOML_PACKED)); \
    packed_data->format = glXWaitForMscOML_FORMAT; \
    packed_data->func = glXWaitForMscOML; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (int64_t)target_msc; \
    packed_data->args.a4 = (int64_t)divisor; \
    packed_data->args.a5 = (int64_t)remainder; \
    packed_data->args.a6 = (int64_t *)ust; \
    packed_data->args.a7 = (int64_t *)msc; \
    packed_data->args.a8 = (int64_t *)sbc; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXWaitForSbcOML
#define push_glXWaitForSbcOML(dpy, drawable, target_sbc, ust, msc, sbc) { \
    glXWaitForSbcOML_PACKED *packed_data = malloc(sizeof(glXWaitForSbcOML_PACKED)); \
    packed_data->format = glXWaitForSbcOML_FORMAT; \
    packed_data->func = glXWaitForSbcOML; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (Display *)dpy; \
    packed_data->args.a2 = (GLXDrawable)drawable; \
    packed_data->args.a3 = (int64_t)target_sbc; \
    packed_data->args.a4 = (int64_t *)ust; \
    packed_data->args.a5 = (int64_t *)msc; \
    packed_data->args.a6 = (int64_t *)sbc; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXWaitGL
#define push_glXWaitGL() { \
    glXWaitGL_PACKED *packed_data = malloc(sizeof(glXWaitGL_PACKED)); \
    packed_data->format = glXWaitGL_FORMAT; \
    packed_data->func = glXWaitGL; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXWaitVideoSyncSGI
#define push_glXWaitVideoSyncSGI(divisor, remainder, count) { \
    glXWaitVideoSyncSGI_PACKED *packed_data = malloc(sizeof(glXWaitVideoSyncSGI_PACKED)); \
    packed_data->format = glXWaitVideoSyncSGI_FORMAT; \
    packed_data->func = glXWaitVideoSyncSGI; \
    packed_data->refs = 0; \
    packed_data->args.a1 = (int)divisor; \
    packed_data->args.a2 = (int)remainder; \
    packed_data->args.a3 = (unsigned int *)count; \
    glPushCall((void *)packed_data); \
}
#endif
#ifndef direct_glXWaitX
#define push_glXWaitX() { \
    glXWaitX_PACKED *packed_data = malloc(sizeof(glXWaitX_PACKED)); \
    packed_data->format = glXWaitX_FORMAT; \
    packed_data->func = glXWaitX; \
    packed_data->refs = 0; \
    glPushCall((void *)packed_data); \
}
#endif
#endif
#endif

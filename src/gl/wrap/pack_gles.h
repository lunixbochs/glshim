#include "../types.h"
#ifndef PACK_GLES_H
#define PACK_GLES_H

#ifndef glActiveTexture_RETURN
typedef struct {
    GLenum texture;
} glActiveTexture_ARGS;
typedef struct {
    int index;
    glActiveTexture_ARGS args;
} glActiveTexture_PACKED;
#endif
#ifndef glAlphaFunc_RETURN
typedef struct {
    GLenum func;
    GLclampf ref;
} glAlphaFunc_ARGS;
typedef struct {
    int index;
    glAlphaFunc_ARGS args;
} glAlphaFunc_PACKED;
#endif
#ifndef glAlphaFuncx_RETURN
typedef struct {
    GLenum func;
    GLclampx ref;
} glAlphaFuncx_ARGS;
typedef struct {
    int index;
    glAlphaFuncx_ARGS args;
} glAlphaFuncx_PACKED;
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
#ifndef glBlendColorOES_RETURN
typedef struct {
    GLclampf red;
    GLclampf green;
    GLclampf blue;
    GLclampf alpha;
} glBlendColorOES_ARGS;
typedef struct {
    int index;
    glBlendColorOES_ARGS args;
} glBlendColorOES_PACKED;
#endif
#ifndef glBlendEquationOES_RETURN
typedef struct {
    GLenum mode;
} glBlendEquationOES_ARGS;
typedef struct {
    int index;
    glBlendEquationOES_ARGS args;
} glBlendEquationOES_PACKED;
#endif
#ifndef glBlendEquationSeparateOES_RETURN
typedef struct {
    GLenum modeRGB;
    GLenum modeAlpha;
} glBlendEquationSeparateOES_ARGS;
typedef struct {
    int index;
    glBlendEquationSeparateOES_ARGS args;
} glBlendEquationSeparateOES_PACKED;
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
#ifndef glBlendFuncSeparateOES_RETURN
typedef struct {
    GLenum sfactorRGB;
    GLenum dfactorRGB;
    GLenum sfactorAlpha;
    GLenum dfactorAlpha;
} glBlendFuncSeparateOES_ARGS;
typedef struct {
    int index;
    glBlendFuncSeparateOES_ARGS args;
} glBlendFuncSeparateOES_PACKED;
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
#ifndef glClearColorx_RETURN
typedef struct {
    GLclampx red;
    GLclampx green;
    GLclampx blue;
    GLclampx alpha;
} glClearColorx_ARGS;
typedef struct {
    int index;
    glClearColorx_ARGS args;
} glClearColorx_PACKED;
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
#ifndef glClearDepthx_RETURN
typedef struct {
    GLclampx depth;
} glClearDepthx_ARGS;
typedef struct {
    int index;
    glClearDepthx_ARGS args;
} glClearDepthx_PACKED;
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
#ifndef glClientActiveTexture_RETURN
typedef struct {
    GLenum texture;
} glClientActiveTexture_ARGS;
typedef struct {
    int index;
    glClientActiveTexture_ARGS args;
} glClientActiveTexture_PACKED;
#endif
#ifndef glClipPlanef_RETURN
typedef struct {
    GLenum plane;
    GLfloat * equation;
} glClipPlanef_ARGS;
typedef struct {
    int index;
    glClipPlanef_ARGS args;
} glClipPlanef_PACKED;
#endif
#ifndef glClipPlanex_RETURN
typedef struct {
    GLenum plane;
    GLfixed * equation;
} glClipPlanex_ARGS;
typedef struct {
    int index;
    glClipPlanex_ARGS args;
} glClipPlanex_PACKED;
#endif
#ifndef glColor4f_RETURN
typedef struct {
    GLfloat red;
    GLfloat green;
    GLfloat blue;
    GLfloat alpha;
} glColor4f_ARGS;
typedef struct {
    int index;
    glColor4f_ARGS args;
} glColor4f_PACKED;
#endif
#ifndef glColor4ub_RETURN
typedef struct {
    GLubyte red;
    GLubyte green;
    GLubyte blue;
    GLubyte alpha;
} glColor4ub_ARGS;
typedef struct {
    int index;
    glColor4ub_ARGS args;
} glColor4ub_PACKED;
#endif
#ifndef glColor4x_RETURN
typedef struct {
    GLfixed red;
    GLfixed green;
    GLfixed blue;
    GLfixed alpha;
} glColor4x_ARGS;
typedef struct {
    int index;
    glColor4x_ARGS args;
} glColor4x_PACKED;
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
#ifndef glColorPointer_RETURN
typedef struct {
    GLint size;
    GLenum type;
    GLsizei stride;
    GLvoid * pointer;
} glColorPointer_ARGS;
typedef struct {
    int index;
    glColorPointer_ARGS args;
} glColorPointer_PACKED;
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
#ifndef glDepthRangex_RETURN
typedef struct {
    GLclampx near;
    GLclampx far;
} glDepthRangex_ARGS;
typedef struct {
    int index;
    glDepthRangex_ARGS args;
} glDepthRangex_PACKED;
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
#ifndef glDisableClientState_RETURN
typedef struct {
    GLenum array;
} glDisableClientState_ARGS;
typedef struct {
    int index;
    glDisableClientState_ARGS args;
} glDisableClientState_PACKED;
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
#ifndef glEnableClientState_RETURN
typedef struct {
    GLenum array;
} glEnableClientState_ARGS;
typedef struct {
    int index;
    glEnableClientState_ARGS args;
} glEnableClientState_PACKED;
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
#ifndef glFogf_RETURN
typedef struct {
    GLenum pname;
    GLfloat param;
} glFogf_ARGS;
typedef struct {
    int index;
    glFogf_ARGS args;
} glFogf_PACKED;
#endif
#ifndef glFogfv_RETURN
typedef struct {
    GLenum pname;
    GLfloat * params;
} glFogfv_ARGS;
typedef struct {
    int index;
    glFogfv_ARGS args;
} glFogfv_PACKED;
#endif
#ifndef glFogx_RETURN
typedef struct {
    GLenum pname;
    GLfixed param;
} glFogx_ARGS;
typedef struct {
    int index;
    glFogx_ARGS args;
} glFogx_PACKED;
#endif
#ifndef glFogxv_RETURN
typedef struct {
    GLenum pname;
    GLfixed * params;
} glFogxv_ARGS;
typedef struct {
    int index;
    glFogxv_ARGS args;
} glFogxv_PACKED;
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
#ifndef glFrustumf_RETURN
typedef struct {
    GLfloat left;
    GLfloat right;
    GLfloat bottom;
    GLfloat top;
    GLfloat near;
    GLfloat far;
} glFrustumf_ARGS;
typedef struct {
    int index;
    glFrustumf_ARGS args;
} glFrustumf_PACKED;
#endif
#ifndef glFrustumx_RETURN
typedef struct {
    GLfixed left;
    GLfixed right;
    GLfixed bottom;
    GLfixed top;
    GLfixed near;
    GLfixed far;
} glFrustumx_ARGS;
typedef struct {
    int index;
    glFrustumx_ARGS args;
} glFrustumx_PACKED;
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
#ifndef glGetClipPlanef_RETURN
typedef struct {
    GLenum plane;
    GLfloat * equation;
} glGetClipPlanef_ARGS;
typedef struct {
    int index;
    glGetClipPlanef_ARGS args;
} glGetClipPlanef_PACKED;
#endif
#ifndef glGetClipPlanex_RETURN
typedef struct {
    GLenum plane;
    GLfixed * equation;
} glGetClipPlanex_ARGS;
typedef struct {
    int index;
    glGetClipPlanex_ARGS args;
} glGetClipPlanex_PACKED;
#endif
#ifndef glGetError_RETURN
typedef struct {
    int index;
} glGetError_PACKED;
#endif
#ifndef glGetFixedv_RETURN
typedef struct {
    GLenum pname;
    GLfixed * params;
} glGetFixedv_ARGS;
typedef struct {
    int index;
    glGetFixedv_ARGS args;
} glGetFixedv_PACKED;
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
#ifndef glGetLightfv_RETURN
typedef struct {
    GLenum light;
    GLenum pname;
    GLfloat * params;
} glGetLightfv_ARGS;
typedef struct {
    int index;
    glGetLightfv_ARGS args;
} glGetLightfv_PACKED;
#endif
#ifndef glGetLightxv_RETURN
typedef struct {
    GLenum light;
    GLenum pname;
    GLfixed * params;
} glGetLightxv_ARGS;
typedef struct {
    int index;
    glGetLightxv_ARGS args;
} glGetLightxv_PACKED;
#endif
#ifndef glGetMaterialfv_RETURN
typedef struct {
    GLenum face;
    GLenum pname;
    GLfloat * params;
} glGetMaterialfv_ARGS;
typedef struct {
    int index;
    glGetMaterialfv_ARGS args;
} glGetMaterialfv_PACKED;
#endif
#ifndef glGetMaterialxv_RETURN
typedef struct {
    GLenum face;
    GLenum pname;
    GLfixed * params;
} glGetMaterialxv_ARGS;
typedef struct {
    int index;
    glGetMaterialxv_ARGS args;
} glGetMaterialxv_PACKED;
#endif
#ifndef glGetPointerv_RETURN
typedef struct {
    GLenum pname;
    GLvoid ** params;
} glGetPointerv_ARGS;
typedef struct {
    int index;
    glGetPointerv_ARGS args;
} glGetPointerv_PACKED;
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
#ifndef glGetTexEnvfv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfloat * params;
} glGetTexEnvfv_ARGS;
typedef struct {
    int index;
    glGetTexEnvfv_ARGS args;
} glGetTexEnvfv_PACKED;
#endif
#ifndef glGetTexEnviv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLint * params;
} glGetTexEnviv_ARGS;
typedef struct {
    int index;
    glGetTexEnviv_ARGS args;
} glGetTexEnviv_PACKED;
#endif
#ifndef glGetTexEnvxv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfixed * params;
} glGetTexEnvxv_ARGS;
typedef struct {
    int index;
    glGetTexEnvxv_ARGS args;
} glGetTexEnvxv_PACKED;
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
#ifndef glGetTexParameterxv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfixed * params;
} glGetTexParameterxv_ARGS;
typedef struct {
    int index;
    glGetTexParameterxv_ARGS args;
} glGetTexParameterxv_PACKED;
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
#ifndef glIsTexture_RETURN
typedef struct {
    GLuint texture;
} glIsTexture_ARGS;
typedef struct {
    int index;
    glIsTexture_ARGS args;
} glIsTexture_PACKED;
#endif
#ifndef glLightModelf_RETURN
typedef struct {
    GLenum pname;
    GLfloat param;
} glLightModelf_ARGS;
typedef struct {
    int index;
    glLightModelf_ARGS args;
} glLightModelf_PACKED;
#endif
#ifndef glLightModelfv_RETURN
typedef struct {
    GLenum pname;
    GLfloat * params;
} glLightModelfv_ARGS;
typedef struct {
    int index;
    glLightModelfv_ARGS args;
} glLightModelfv_PACKED;
#endif
#ifndef glLightModelx_RETURN
typedef struct {
    GLenum pname;
    GLfixed param;
} glLightModelx_ARGS;
typedef struct {
    int index;
    glLightModelx_ARGS args;
} glLightModelx_PACKED;
#endif
#ifndef glLightModelxv_RETURN
typedef struct {
    GLenum pname;
    GLfixed * params;
} glLightModelxv_ARGS;
typedef struct {
    int index;
    glLightModelxv_ARGS args;
} glLightModelxv_PACKED;
#endif
#ifndef glLightf_RETURN
typedef struct {
    GLenum light;
    GLenum pname;
    GLfloat param;
} glLightf_ARGS;
typedef struct {
    int index;
    glLightf_ARGS args;
} glLightf_PACKED;
#endif
#ifndef glLightfv_RETURN
typedef struct {
    GLenum light;
    GLenum pname;
    GLfloat * params;
} glLightfv_ARGS;
typedef struct {
    int index;
    glLightfv_ARGS args;
} glLightfv_PACKED;
#endif
#ifndef glLightx_RETURN
typedef struct {
    GLenum light;
    GLenum pname;
    GLfixed param;
} glLightx_ARGS;
typedef struct {
    int index;
    glLightx_ARGS args;
} glLightx_PACKED;
#endif
#ifndef glLightxv_RETURN
typedef struct {
    GLenum light;
    GLenum pname;
    GLfixed * params;
} glLightxv_ARGS;
typedef struct {
    int index;
    glLightxv_ARGS args;
} glLightxv_PACKED;
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
#ifndef glLineWidthx_RETURN
typedef struct {
    GLfixed width;
} glLineWidthx_ARGS;
typedef struct {
    int index;
    glLineWidthx_ARGS args;
} glLineWidthx_PACKED;
#endif
#ifndef glLoadIdentity_RETURN
typedef struct {
    int index;
} glLoadIdentity_PACKED;
#endif
#ifndef glLoadMatrixf_RETURN
typedef struct {
    GLfloat * m;
} glLoadMatrixf_ARGS;
typedef struct {
    int index;
    glLoadMatrixf_ARGS args;
} glLoadMatrixf_PACKED;
#endif
#ifndef glLoadMatrixx_RETURN
typedef struct {
    GLfixed * m;
} glLoadMatrixx_ARGS;
typedef struct {
    int index;
    glLoadMatrixx_ARGS args;
} glLoadMatrixx_PACKED;
#endif
#ifndef glLogicOp_RETURN
typedef struct {
    GLenum opcode;
} glLogicOp_ARGS;
typedef struct {
    int index;
    glLogicOp_ARGS args;
} glLogicOp_PACKED;
#endif
#ifndef glMaterialf_RETURN
typedef struct {
    GLenum face;
    GLenum pname;
    GLfloat param;
} glMaterialf_ARGS;
typedef struct {
    int index;
    glMaterialf_ARGS args;
} glMaterialf_PACKED;
#endif
#ifndef glMaterialfv_RETURN
typedef struct {
    GLenum face;
    GLenum pname;
    GLfloat * params;
} glMaterialfv_ARGS;
typedef struct {
    int index;
    glMaterialfv_ARGS args;
} glMaterialfv_PACKED;
#endif
#ifndef glMaterialx_RETURN
typedef struct {
    GLenum face;
    GLenum pname;
    GLfixed param;
} glMaterialx_ARGS;
typedef struct {
    int index;
    glMaterialx_ARGS args;
} glMaterialx_PACKED;
#endif
#ifndef glMaterialxv_RETURN
typedef struct {
    GLenum face;
    GLenum pname;
    GLfixed * params;
} glMaterialxv_ARGS;
typedef struct {
    int index;
    glMaterialxv_ARGS args;
} glMaterialxv_PACKED;
#endif
#ifndef glMatrixMode_RETURN
typedef struct {
    GLenum mode;
} glMatrixMode_ARGS;
typedef struct {
    int index;
    glMatrixMode_ARGS args;
} glMatrixMode_PACKED;
#endif
#ifndef glMultMatrixf_RETURN
typedef struct {
    GLfloat * m;
} glMultMatrixf_ARGS;
typedef struct {
    int index;
    glMultMatrixf_ARGS args;
} glMultMatrixf_PACKED;
#endif
#ifndef glMultMatrixx_RETURN
typedef struct {
    GLfixed * m;
} glMultMatrixx_ARGS;
typedef struct {
    int index;
    glMultMatrixx_ARGS args;
} glMultMatrixx_PACKED;
#endif
#ifndef glMultiTexCoord4f_RETURN
typedef struct {
    GLenum target;
    GLfloat s;
    GLfloat t;
    GLfloat r;
    GLfloat q;
} glMultiTexCoord4f_ARGS;
typedef struct {
    int index;
    glMultiTexCoord4f_ARGS args;
} glMultiTexCoord4f_PACKED;
#endif
#ifndef glMultiTexCoord4x_RETURN
typedef struct {
    GLenum target;
    GLfixed s;
    GLfixed t;
    GLfixed r;
    GLfixed q;
} glMultiTexCoord4x_ARGS;
typedef struct {
    int index;
    glMultiTexCoord4x_ARGS args;
} glMultiTexCoord4x_PACKED;
#endif
#ifndef glNormal3f_RETURN
typedef struct {
    GLfloat nx;
    GLfloat ny;
    GLfloat nz;
} glNormal3f_ARGS;
typedef struct {
    int index;
    glNormal3f_ARGS args;
} glNormal3f_PACKED;
#endif
#ifndef glNormal3x_RETURN
typedef struct {
    GLfixed nx;
    GLfixed ny;
    GLfixed nz;
} glNormal3x_ARGS;
typedef struct {
    int index;
    glNormal3x_ARGS args;
} glNormal3x_PACKED;
#endif
#ifndef glNormalPointer_RETURN
typedef struct {
    GLenum type;
    GLsizei stride;
    GLvoid * pointer;
} glNormalPointer_ARGS;
typedef struct {
    int index;
    glNormalPointer_ARGS args;
} glNormalPointer_PACKED;
#endif
#ifndef glOrthof_RETURN
typedef struct {
    GLfloat left;
    GLfloat right;
    GLfloat bottom;
    GLfloat top;
    GLfloat near;
    GLfloat far;
} glOrthof_ARGS;
typedef struct {
    int index;
    glOrthof_ARGS args;
} glOrthof_PACKED;
#endif
#ifndef glOrthox_RETURN
typedef struct {
    GLfixed left;
    GLfixed right;
    GLfixed bottom;
    GLfixed top;
    GLfixed near;
    GLfixed far;
} glOrthox_ARGS;
typedef struct {
    int index;
    glOrthox_ARGS args;
} glOrthox_PACKED;
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
#ifndef glPointParameterf_RETURN
typedef struct {
    GLenum pname;
    GLfloat param;
} glPointParameterf_ARGS;
typedef struct {
    int index;
    glPointParameterf_ARGS args;
} glPointParameterf_PACKED;
#endif
#ifndef glPointParameterfv_RETURN
typedef struct {
    GLenum pname;
    GLfloat * params;
} glPointParameterfv_ARGS;
typedef struct {
    int index;
    glPointParameterfv_ARGS args;
} glPointParameterfv_PACKED;
#endif
#ifndef glPointParameterx_RETURN
typedef struct {
    GLenum pname;
    GLfixed param;
} glPointParameterx_ARGS;
typedef struct {
    int index;
    glPointParameterx_ARGS args;
} glPointParameterx_PACKED;
#endif
#ifndef glPointParameterxv_RETURN
typedef struct {
    GLenum pname;
    GLfixed * params;
} glPointParameterxv_ARGS;
typedef struct {
    int index;
    glPointParameterxv_ARGS args;
} glPointParameterxv_PACKED;
#endif
#ifndef glPointSize_RETURN
typedef struct {
    GLfloat size;
} glPointSize_ARGS;
typedef struct {
    int index;
    glPointSize_ARGS args;
} glPointSize_PACKED;
#endif
#ifndef glPointSizePointerOES_RETURN
typedef struct {
    GLenum type;
    GLsizei stride;
    GLvoid * pointer;
} glPointSizePointerOES_ARGS;
typedef struct {
    int index;
    glPointSizePointerOES_ARGS args;
} glPointSizePointerOES_PACKED;
#endif
#ifndef glPointSizex_RETURN
typedef struct {
    GLfixed size;
} glPointSizex_ARGS;
typedef struct {
    int index;
    glPointSizex_ARGS args;
} glPointSizex_PACKED;
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
#ifndef glPolygonOffsetx_RETURN
typedef struct {
    GLfixed factor;
    GLfixed units;
} glPolygonOffsetx_ARGS;
typedef struct {
    int index;
    glPolygonOffsetx_ARGS args;
} glPolygonOffsetx_PACKED;
#endif
#ifndef glPopMatrix_RETURN
typedef struct {
    int index;
} glPopMatrix_PACKED;
#endif
#ifndef glPushMatrix_RETURN
typedef struct {
    int index;
} glPushMatrix_PACKED;
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
#ifndef glRotatef_RETURN
typedef struct {
    GLfloat angle;
    GLfloat x;
    GLfloat y;
    GLfloat z;
} glRotatef_ARGS;
typedef struct {
    int index;
    glRotatef_ARGS args;
} glRotatef_PACKED;
#endif
#ifndef glRotatex_RETURN
typedef struct {
    GLfixed angle;
    GLfixed x;
    GLfixed y;
    GLfixed z;
} glRotatex_ARGS;
typedef struct {
    int index;
    glRotatex_ARGS args;
} glRotatex_PACKED;
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
#ifndef glSampleCoveragex_RETURN
typedef struct {
    GLclampx value;
    GLboolean invert;
} glSampleCoveragex_ARGS;
typedef struct {
    int index;
    glSampleCoveragex_ARGS args;
} glSampleCoveragex_PACKED;
#endif
#ifndef glScalef_RETURN
typedef struct {
    GLfloat x;
    GLfloat y;
    GLfloat z;
} glScalef_ARGS;
typedef struct {
    int index;
    glScalef_ARGS args;
} glScalef_PACKED;
#endif
#ifndef glScalex_RETURN
typedef struct {
    GLfixed x;
    GLfixed y;
    GLfixed z;
} glScalex_ARGS;
typedef struct {
    int index;
    glScalex_ARGS args;
} glScalex_PACKED;
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
#ifndef glShadeModel_RETURN
typedef struct {
    GLenum mode;
} glShadeModel_ARGS;
typedef struct {
    int index;
    glShadeModel_ARGS args;
} glShadeModel_PACKED;
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
#ifndef glStencilMask_RETURN
typedef struct {
    GLuint mask;
} glStencilMask_ARGS;
typedef struct {
    int index;
    glStencilMask_ARGS args;
} glStencilMask_PACKED;
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
#ifndef glTexCoordPointer_RETURN
typedef struct {
    GLint size;
    GLenum type;
    GLsizei stride;
    GLvoid * pointer;
} glTexCoordPointer_ARGS;
typedef struct {
    int index;
    glTexCoordPointer_ARGS args;
} glTexCoordPointer_PACKED;
#endif
#ifndef glTexEnvf_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfloat param;
} glTexEnvf_ARGS;
typedef struct {
    int index;
    glTexEnvf_ARGS args;
} glTexEnvf_PACKED;
#endif
#ifndef glTexEnvfv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfloat * params;
} glTexEnvfv_ARGS;
typedef struct {
    int index;
    glTexEnvfv_ARGS args;
} glTexEnvfv_PACKED;
#endif
#ifndef glTexEnvi_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLint param;
} glTexEnvi_ARGS;
typedef struct {
    int index;
    glTexEnvi_ARGS args;
} glTexEnvi_PACKED;
#endif
#ifndef glTexEnviv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLint * params;
} glTexEnviv_ARGS;
typedef struct {
    int index;
    glTexEnviv_ARGS args;
} glTexEnviv_PACKED;
#endif
#ifndef glTexEnvx_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfixed param;
} glTexEnvx_ARGS;
typedef struct {
    int index;
    glTexEnvx_ARGS args;
} glTexEnvx_PACKED;
#endif
#ifndef glTexEnvxv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfixed * params;
} glTexEnvxv_ARGS;
typedef struct {
    int index;
    glTexEnvxv_ARGS args;
} glTexEnvxv_PACKED;
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
#ifndef glTexParameterx_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfixed param;
} glTexParameterx_ARGS;
typedef struct {
    int index;
    glTexParameterx_ARGS args;
} glTexParameterx_PACKED;
#endif
#ifndef glTexParameterxv_RETURN
typedef struct {
    GLenum target;
    GLenum pname;
    GLfixed * params;
} glTexParameterxv_ARGS;
typedef struct {
    int index;
    glTexParameterxv_ARGS args;
} glTexParameterxv_PACKED;
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
#ifndef glTranslatef_RETURN
typedef struct {
    GLfloat x;
    GLfloat y;
    GLfloat z;
} glTranslatef_ARGS;
typedef struct {
    int index;
    glTranslatef_ARGS args;
} glTranslatef_PACKED;
#endif
#ifndef glTranslatex_RETURN
typedef struct {
    GLfixed x;
    GLfixed y;
    GLfixed z;
} glTranslatex_ARGS;
typedef struct {
    int index;
    glTranslatex_ARGS args;
} glTranslatex_PACKED;
#endif
#ifndef glVertexPointer_RETURN
typedef struct {
    GLint size;
    GLenum type;
    GLsizei stride;
    GLvoid * pointer;
} glVertexPointer_ARGS;
typedef struct {
    int index;
    glVertexPointer_ARGS args;
} glVertexPointer_PACKED;
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
#ifndef glAlphaFunc_RETURN
#define glAlphaFunc_RETURN void
#define glAlphaFunc_ARG_NAMES func, ref
#define glAlphaFunc_ARG_EXPAND GLenum func, GLclampf ref
#define glAlphaFunc_ARG_NAMES_TAIL , func, ref
#define glAlphaFunc_ARG_EXPAND_TAIL , GLenum func, GLclampf ref
#define forward_glAlphaFunc(_func, _ref) \
    ({ \
        void *dst = remote_dma(sizeof(glAlphaFunc_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glAlphaFunc(dst, _func, _ref), NULL); \
    });
#define call_glAlphaFunc(packed, ret_v) do { \
    glAlphaFunc_PACKED *unpacked = (glAlphaFunc_PACKED *)packed; \
    glAlphaFunc_ARGS *args = (glAlphaFunc_ARGS *)&unpacked->args; \
    glAlphaFunc(args->func, args->ref);; \
} while(0)
void glAlphaFunc(glAlphaFunc_ARG_EXPAND);
packed_call_t *pack_glAlphaFunc(glAlphaFunc_PACKED *_dst glAlphaFunc_ARG_EXPAND_TAIL);
typedef void (*glAlphaFunc_PTR)(glAlphaFunc_ARG_EXPAND);
#endif
#ifndef glAlphaFuncx_RETURN
#define glAlphaFuncx_RETURN void
#define glAlphaFuncx_ARG_NAMES func, ref
#define glAlphaFuncx_ARG_EXPAND GLenum func, GLclampx ref
#define glAlphaFuncx_ARG_NAMES_TAIL , func, ref
#define glAlphaFuncx_ARG_EXPAND_TAIL , GLenum func, GLclampx ref
#define forward_glAlphaFuncx(_func, _ref) \
    ({ \
        void *dst = remote_dma(sizeof(glAlphaFuncx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glAlphaFuncx(dst, _func, _ref), NULL); \
    });
#define call_glAlphaFuncx(packed, ret_v) do { \
    glAlphaFuncx_PACKED *unpacked = (glAlphaFuncx_PACKED *)packed; \
    glAlphaFuncx_ARGS *args = (glAlphaFuncx_ARGS *)&unpacked->args; \
    glAlphaFuncx(args->func, args->ref);; \
} while(0)
void glAlphaFuncx(glAlphaFuncx_ARG_EXPAND);
packed_call_t *pack_glAlphaFuncx(glAlphaFuncx_PACKED *_dst glAlphaFuncx_ARG_EXPAND_TAIL);
typedef void (*glAlphaFuncx_PTR)(glAlphaFuncx_ARG_EXPAND);
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
#ifndef glBlendColorOES_RETURN
#define glBlendColorOES_RETURN void
#define glBlendColorOES_ARG_NAMES red, green, blue, alpha
#define glBlendColorOES_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define glBlendColorOES_ARG_NAMES_TAIL , red, green, blue, alpha
#define glBlendColorOES_ARG_EXPAND_TAIL , GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define forward_glBlendColorOES(_red, _green, _blue, _alpha) \
    ({ \
        void *dst = remote_dma(sizeof(glBlendColorOES_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBlendColorOES(dst, _red, _green, _blue, _alpha), NULL); \
    });
#define call_glBlendColorOES(packed, ret_v) do { \
    glBlendColorOES_PACKED *unpacked = (glBlendColorOES_PACKED *)packed; \
    glBlendColorOES_ARGS *args = (glBlendColorOES_ARGS *)&unpacked->args; \
    glBlendColorOES(args->red, args->green, args->blue, args->alpha);; \
} while(0)
void glBlendColorOES(glBlendColorOES_ARG_EXPAND);
packed_call_t *pack_glBlendColorOES(glBlendColorOES_PACKED *_dst glBlendColorOES_ARG_EXPAND_TAIL);
typedef void (*glBlendColorOES_PTR)(glBlendColorOES_ARG_EXPAND);
#endif
#ifndef glBlendEquationOES_RETURN
#define glBlendEquationOES_RETURN void
#define glBlendEquationOES_ARG_NAMES mode
#define glBlendEquationOES_ARG_EXPAND GLenum mode
#define glBlendEquationOES_ARG_NAMES_TAIL , mode
#define glBlendEquationOES_ARG_EXPAND_TAIL , GLenum mode
#define forward_glBlendEquationOES(_mode) \
    ({ \
        void *dst = remote_dma(sizeof(glBlendEquationOES_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBlendEquationOES(dst, _mode), NULL); \
    });
#define call_glBlendEquationOES(packed, ret_v) do { \
    glBlendEquationOES_PACKED *unpacked = (glBlendEquationOES_PACKED *)packed; \
    glBlendEquationOES_ARGS *args = (glBlendEquationOES_ARGS *)&unpacked->args; \
    glBlendEquationOES(args->mode);; \
} while(0)
void glBlendEquationOES(glBlendEquationOES_ARG_EXPAND);
packed_call_t *pack_glBlendEquationOES(glBlendEquationOES_PACKED *_dst glBlendEquationOES_ARG_EXPAND_TAIL);
typedef void (*glBlendEquationOES_PTR)(glBlendEquationOES_ARG_EXPAND);
#endif
#ifndef glBlendEquationSeparateOES_RETURN
#define glBlendEquationSeparateOES_RETURN void
#define glBlendEquationSeparateOES_ARG_NAMES modeRGB, modeAlpha
#define glBlendEquationSeparateOES_ARG_EXPAND GLenum modeRGB, GLenum modeAlpha
#define glBlendEquationSeparateOES_ARG_NAMES_TAIL , modeRGB, modeAlpha
#define glBlendEquationSeparateOES_ARG_EXPAND_TAIL , GLenum modeRGB, GLenum modeAlpha
#define forward_glBlendEquationSeparateOES(_modeRGB, _modeAlpha) \
    ({ \
        void *dst = remote_dma(sizeof(glBlendEquationSeparateOES_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBlendEquationSeparateOES(dst, _modeRGB, _modeAlpha), NULL); \
    });
#define call_glBlendEquationSeparateOES(packed, ret_v) do { \
    glBlendEquationSeparateOES_PACKED *unpacked = (glBlendEquationSeparateOES_PACKED *)packed; \
    glBlendEquationSeparateOES_ARGS *args = (glBlendEquationSeparateOES_ARGS *)&unpacked->args; \
    glBlendEquationSeparateOES(args->modeRGB, args->modeAlpha);; \
} while(0)
void glBlendEquationSeparateOES(glBlendEquationSeparateOES_ARG_EXPAND);
packed_call_t *pack_glBlendEquationSeparateOES(glBlendEquationSeparateOES_PACKED *_dst glBlendEquationSeparateOES_ARG_EXPAND_TAIL);
typedef void (*glBlendEquationSeparateOES_PTR)(glBlendEquationSeparateOES_ARG_EXPAND);
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
#ifndef glBlendFuncSeparateOES_RETURN
#define glBlendFuncSeparateOES_RETURN void
#define glBlendFuncSeparateOES_ARG_NAMES sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha
#define glBlendFuncSeparateOES_ARG_EXPAND GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha
#define glBlendFuncSeparateOES_ARG_NAMES_TAIL , sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha
#define glBlendFuncSeparateOES_ARG_EXPAND_TAIL , GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha
#define forward_glBlendFuncSeparateOES(_sfactorRGB, _dfactorRGB, _sfactorAlpha, _dfactorAlpha) \
    ({ \
        void *dst = remote_dma(sizeof(glBlendFuncSeparateOES_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glBlendFuncSeparateOES(dst, _sfactorRGB, _dfactorRGB, _sfactorAlpha, _dfactorAlpha), NULL); \
    });
#define call_glBlendFuncSeparateOES(packed, ret_v) do { \
    glBlendFuncSeparateOES_PACKED *unpacked = (glBlendFuncSeparateOES_PACKED *)packed; \
    glBlendFuncSeparateOES_ARGS *args = (glBlendFuncSeparateOES_ARGS *)&unpacked->args; \
    glBlendFuncSeparateOES(args->sfactorRGB, args->dfactorRGB, args->sfactorAlpha, args->dfactorAlpha);; \
} while(0)
void glBlendFuncSeparateOES(glBlendFuncSeparateOES_ARG_EXPAND);
packed_call_t *pack_glBlendFuncSeparateOES(glBlendFuncSeparateOES_PACKED *_dst glBlendFuncSeparateOES_ARG_EXPAND_TAIL);
typedef void (*glBlendFuncSeparateOES_PTR)(glBlendFuncSeparateOES_ARG_EXPAND);
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
#ifndef glClearColorx_RETURN
#define glClearColorx_RETURN void
#define glClearColorx_ARG_NAMES red, green, blue, alpha
#define glClearColorx_ARG_EXPAND GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha
#define glClearColorx_ARG_NAMES_TAIL , red, green, blue, alpha
#define glClearColorx_ARG_EXPAND_TAIL , GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha
#define forward_glClearColorx(_red, _green, _blue, _alpha) \
    ({ \
        void *dst = remote_dma(sizeof(glClearColorx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glClearColorx(dst, _red, _green, _blue, _alpha), NULL); \
    });
#define call_glClearColorx(packed, ret_v) do { \
    glClearColorx_PACKED *unpacked = (glClearColorx_PACKED *)packed; \
    glClearColorx_ARGS *args = (glClearColorx_ARGS *)&unpacked->args; \
    glClearColorx(args->red, args->green, args->blue, args->alpha);; \
} while(0)
void glClearColorx(glClearColorx_ARG_EXPAND);
packed_call_t *pack_glClearColorx(glClearColorx_PACKED *_dst glClearColorx_ARG_EXPAND_TAIL);
typedef void (*glClearColorx_PTR)(glClearColorx_ARG_EXPAND);
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
#ifndef glClearDepthx_RETURN
#define glClearDepthx_RETURN void
#define glClearDepthx_ARG_NAMES depth
#define glClearDepthx_ARG_EXPAND GLclampx depth
#define glClearDepthx_ARG_NAMES_TAIL , depth
#define glClearDepthx_ARG_EXPAND_TAIL , GLclampx depth
#define forward_glClearDepthx(_depth) \
    ({ \
        void *dst = remote_dma(sizeof(glClearDepthx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glClearDepthx(dst, _depth), NULL); \
    });
#define call_glClearDepthx(packed, ret_v) do { \
    glClearDepthx_PACKED *unpacked = (glClearDepthx_PACKED *)packed; \
    glClearDepthx_ARGS *args = (glClearDepthx_ARGS *)&unpacked->args; \
    glClearDepthx(args->depth);; \
} while(0)
void glClearDepthx(glClearDepthx_ARG_EXPAND);
packed_call_t *pack_glClearDepthx(glClearDepthx_PACKED *_dst glClearDepthx_ARG_EXPAND_TAIL);
typedef void (*glClearDepthx_PTR)(glClearDepthx_ARG_EXPAND);
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
#ifndef glClientActiveTexture_RETURN
#define glClientActiveTexture_RETURN void
#define glClientActiveTexture_ARG_NAMES texture
#define glClientActiveTexture_ARG_EXPAND GLenum texture
#define glClientActiveTexture_ARG_NAMES_TAIL , texture
#define glClientActiveTexture_ARG_EXPAND_TAIL , GLenum texture
#define forward_glClientActiveTexture(_texture) \
    ({ \
        void *dst = remote_dma(sizeof(glClientActiveTexture_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glClientActiveTexture(dst, _texture), NULL); \
    });
#define call_glClientActiveTexture(packed, ret_v) do { \
    glClientActiveTexture_PACKED *unpacked = (glClientActiveTexture_PACKED *)packed; \
    glClientActiveTexture_ARGS *args = (glClientActiveTexture_ARGS *)&unpacked->args; \
    glClientActiveTexture(args->texture);; \
} while(0)
void glClientActiveTexture(glClientActiveTexture_ARG_EXPAND);
packed_call_t *pack_glClientActiveTexture(glClientActiveTexture_PACKED *_dst glClientActiveTexture_ARG_EXPAND_TAIL);
typedef void (*glClientActiveTexture_PTR)(glClientActiveTexture_ARG_EXPAND);
#endif
#ifndef glClipPlanef_RETURN
#define glClipPlanef_RETURN void
#define glClipPlanef_ARG_NAMES plane, equation
#define glClipPlanef_ARG_EXPAND GLenum plane, const GLfloat * equation
#define glClipPlanef_ARG_NAMES_TAIL , plane, equation
#define glClipPlanef_ARG_EXPAND_TAIL , GLenum plane, const GLfloat * equation
#define forward_glClipPlanef(_plane, _equation) \
    ({ \
        void *dst = remote_dma(sizeof(glClipPlanef_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glClipPlanef(dst, _plane, _equation), NULL); \
    });
#define call_glClipPlanef(packed, ret_v) do { \
    glClipPlanef_PACKED *unpacked = (glClipPlanef_PACKED *)packed; \
    glClipPlanef_ARGS *args = (glClipPlanef_ARGS *)&unpacked->args; \
    glClipPlanef(args->plane, args->equation);; \
} while(0)
void glClipPlanef(glClipPlanef_ARG_EXPAND);
packed_call_t *pack_glClipPlanef(glClipPlanef_PACKED *_dst glClipPlanef_ARG_EXPAND_TAIL);
typedef void (*glClipPlanef_PTR)(glClipPlanef_ARG_EXPAND);
#endif
#ifndef glClipPlanex_RETURN
#define glClipPlanex_RETURN void
#define glClipPlanex_ARG_NAMES plane, equation
#define glClipPlanex_ARG_EXPAND GLenum plane, const GLfixed * equation
#define glClipPlanex_ARG_NAMES_TAIL , plane, equation
#define glClipPlanex_ARG_EXPAND_TAIL , GLenum plane, const GLfixed * equation
#define forward_glClipPlanex(_plane, _equation) \
    ({ \
        void *dst = remote_dma(sizeof(glClipPlanex_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glClipPlanex(dst, _plane, _equation), NULL); \
    });
#define call_glClipPlanex(packed, ret_v) do { \
    glClipPlanex_PACKED *unpacked = (glClipPlanex_PACKED *)packed; \
    glClipPlanex_ARGS *args = (glClipPlanex_ARGS *)&unpacked->args; \
    glClipPlanex(args->plane, args->equation);; \
} while(0)
void glClipPlanex(glClipPlanex_ARG_EXPAND);
packed_call_t *pack_glClipPlanex(glClipPlanex_PACKED *_dst glClipPlanex_ARG_EXPAND_TAIL);
typedef void (*glClipPlanex_PTR)(glClipPlanex_ARG_EXPAND);
#endif
#ifndef glColor4f_RETURN
#define glColor4f_RETURN void
#define glColor4f_ARG_NAMES red, green, blue, alpha
#define glColor4f_ARG_EXPAND GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha
#define glColor4f_ARG_NAMES_TAIL , red, green, blue, alpha
#define glColor4f_ARG_EXPAND_TAIL , GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha
#define forward_glColor4f(_red, _green, _blue, _alpha) \
    ({ \
        void *dst = remote_dma(sizeof(glColor4f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glColor4f(dst, _red, _green, _blue, _alpha), NULL); \
    });
#define call_glColor4f(packed, ret_v) do { \
    glColor4f_PACKED *unpacked = (glColor4f_PACKED *)packed; \
    glColor4f_ARGS *args = (glColor4f_ARGS *)&unpacked->args; \
    glColor4f(args->red, args->green, args->blue, args->alpha);; \
} while(0)
void glColor4f(glColor4f_ARG_EXPAND);
packed_call_t *pack_glColor4f(glColor4f_PACKED *_dst glColor4f_ARG_EXPAND_TAIL);
typedef void (*glColor4f_PTR)(glColor4f_ARG_EXPAND);
#endif
#ifndef glColor4ub_RETURN
#define glColor4ub_RETURN void
#define glColor4ub_ARG_NAMES red, green, blue, alpha
#define glColor4ub_ARG_EXPAND GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha
#define glColor4ub_ARG_NAMES_TAIL , red, green, blue, alpha
#define glColor4ub_ARG_EXPAND_TAIL , GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha
#define forward_glColor4ub(_red, _green, _blue, _alpha) \
    ({ \
        void *dst = remote_dma(sizeof(glColor4ub_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glColor4ub(dst, _red, _green, _blue, _alpha), NULL); \
    });
#define call_glColor4ub(packed, ret_v) do { \
    glColor4ub_PACKED *unpacked = (glColor4ub_PACKED *)packed; \
    glColor4ub_ARGS *args = (glColor4ub_ARGS *)&unpacked->args; \
    glColor4ub(args->red, args->green, args->blue, args->alpha);; \
} while(0)
void glColor4ub(glColor4ub_ARG_EXPAND);
packed_call_t *pack_glColor4ub(glColor4ub_PACKED *_dst glColor4ub_ARG_EXPAND_TAIL);
typedef void (*glColor4ub_PTR)(glColor4ub_ARG_EXPAND);
#endif
#ifndef glColor4x_RETURN
#define glColor4x_RETURN void
#define glColor4x_ARG_NAMES red, green, blue, alpha
#define glColor4x_ARG_EXPAND GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha
#define glColor4x_ARG_NAMES_TAIL , red, green, blue, alpha
#define glColor4x_ARG_EXPAND_TAIL , GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha
#define forward_glColor4x(_red, _green, _blue, _alpha) \
    ({ \
        void *dst = remote_dma(sizeof(glColor4x_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glColor4x(dst, _red, _green, _blue, _alpha), NULL); \
    });
#define call_glColor4x(packed, ret_v) do { \
    glColor4x_PACKED *unpacked = (glColor4x_PACKED *)packed; \
    glColor4x_ARGS *args = (glColor4x_ARGS *)&unpacked->args; \
    glColor4x(args->red, args->green, args->blue, args->alpha);; \
} while(0)
void glColor4x(glColor4x_ARG_EXPAND);
packed_call_t *pack_glColor4x(glColor4x_PACKED *_dst glColor4x_ARG_EXPAND_TAIL);
typedef void (*glColor4x_PTR)(glColor4x_ARG_EXPAND);
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
#ifndef glColorPointer_RETURN
#define glColorPointer_RETURN void
#define glColorPointer_ARG_NAMES size, type, stride, pointer
#define glColorPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define glColorPointer_ARG_NAMES_TAIL , size, type, stride, pointer
#define glColorPointer_ARG_EXPAND_TAIL , GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define forward_glColorPointer(_size, _type, _stride, _pointer) \
    ({ \
        void *dst = remote_dma(sizeof(glColorPointer_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glColorPointer(dst, _size, _type, _stride, _pointer), NULL); \
    });
#define call_glColorPointer(packed, ret_v) do { \
    glColorPointer_PACKED *unpacked = (glColorPointer_PACKED *)packed; \
    glColorPointer_ARGS *args = (glColorPointer_ARGS *)&unpacked->args; \
    glColorPointer(args->size, args->type, args->stride, args->pointer);; \
} while(0)
void glColorPointer(glColorPointer_ARG_EXPAND);
packed_call_t *pack_glColorPointer(glColorPointer_PACKED *_dst glColorPointer_ARG_EXPAND_TAIL);
typedef void (*glColorPointer_PTR)(glColorPointer_ARG_EXPAND);
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
#ifndef glDepthRangex_RETURN
#define glDepthRangex_RETURN void
#define glDepthRangex_ARG_NAMES near, far
#define glDepthRangex_ARG_EXPAND GLclampx near, GLclampx far
#define glDepthRangex_ARG_NAMES_TAIL , near, far
#define glDepthRangex_ARG_EXPAND_TAIL , GLclampx near, GLclampx far
#define forward_glDepthRangex(_near, _far) \
    ({ \
        void *dst = remote_dma(sizeof(glDepthRangex_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDepthRangex(dst, _near, _far), NULL); \
    });
#define call_glDepthRangex(packed, ret_v) do { \
    glDepthRangex_PACKED *unpacked = (glDepthRangex_PACKED *)packed; \
    glDepthRangex_ARGS *args = (glDepthRangex_ARGS *)&unpacked->args; \
    glDepthRangex(args->near, args->far);; \
} while(0)
void glDepthRangex(glDepthRangex_ARG_EXPAND);
packed_call_t *pack_glDepthRangex(glDepthRangex_PACKED *_dst glDepthRangex_ARG_EXPAND_TAIL);
typedef void (*glDepthRangex_PTR)(glDepthRangex_ARG_EXPAND);
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
#ifndef glDisableClientState_RETURN
#define glDisableClientState_RETURN void
#define glDisableClientState_ARG_NAMES array
#define glDisableClientState_ARG_EXPAND GLenum array
#define glDisableClientState_ARG_NAMES_TAIL , array
#define glDisableClientState_ARG_EXPAND_TAIL , GLenum array
#define forward_glDisableClientState(_array) \
    ({ \
        void *dst = remote_dma(sizeof(glDisableClientState_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glDisableClientState(dst, _array), NULL); \
    });
#define call_glDisableClientState(packed, ret_v) do { \
    glDisableClientState_PACKED *unpacked = (glDisableClientState_PACKED *)packed; \
    glDisableClientState_ARGS *args = (glDisableClientState_ARGS *)&unpacked->args; \
    glDisableClientState(args->array);; \
} while(0)
void glDisableClientState(glDisableClientState_ARG_EXPAND);
packed_call_t *pack_glDisableClientState(glDisableClientState_PACKED *_dst glDisableClientState_ARG_EXPAND_TAIL);
typedef void (*glDisableClientState_PTR)(glDisableClientState_ARG_EXPAND);
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
#ifndef glEnableClientState_RETURN
#define glEnableClientState_RETURN void
#define glEnableClientState_ARG_NAMES array
#define glEnableClientState_ARG_EXPAND GLenum array
#define glEnableClientState_ARG_NAMES_TAIL , array
#define glEnableClientState_ARG_EXPAND_TAIL , GLenum array
#define forward_glEnableClientState(_array) \
    ({ \
        void *dst = remote_dma(sizeof(glEnableClientState_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glEnableClientState(dst, _array), NULL); \
    });
#define call_glEnableClientState(packed, ret_v) do { \
    glEnableClientState_PACKED *unpacked = (glEnableClientState_PACKED *)packed; \
    glEnableClientState_ARGS *args = (glEnableClientState_ARGS *)&unpacked->args; \
    glEnableClientState(args->array);; \
} while(0)
void glEnableClientState(glEnableClientState_ARG_EXPAND);
packed_call_t *pack_glEnableClientState(glEnableClientState_PACKED *_dst glEnableClientState_ARG_EXPAND_TAIL);
typedef void (*glEnableClientState_PTR)(glEnableClientState_ARG_EXPAND);
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
#ifndef glFogf_RETURN
#define glFogf_RETURN void
#define glFogf_ARG_NAMES pname, param
#define glFogf_ARG_EXPAND GLenum pname, GLfloat param
#define glFogf_ARG_NAMES_TAIL , pname, param
#define glFogf_ARG_EXPAND_TAIL , GLenum pname, GLfloat param
#define forward_glFogf(_pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glFogf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFogf(dst, _pname, _param), NULL); \
    });
#define call_glFogf(packed, ret_v) do { \
    glFogf_PACKED *unpacked = (glFogf_PACKED *)packed; \
    glFogf_ARGS *args = (glFogf_ARGS *)&unpacked->args; \
    glFogf(args->pname, args->param);; \
} while(0)
void glFogf(glFogf_ARG_EXPAND);
packed_call_t *pack_glFogf(glFogf_PACKED *_dst glFogf_ARG_EXPAND_TAIL);
typedef void (*glFogf_PTR)(glFogf_ARG_EXPAND);
#endif
#ifndef glFogfv_RETURN
#define glFogfv_RETURN void
#define glFogfv_ARG_NAMES pname, params
#define glFogfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define glFogfv_ARG_NAMES_TAIL , pname, params
#define glFogfv_ARG_EXPAND_TAIL , GLenum pname, const GLfloat * params
#define forward_glFogfv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glFogfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFogfv(dst, _pname, _params), NULL); \
    });
#define call_glFogfv(packed, ret_v) do { \
    glFogfv_PACKED *unpacked = (glFogfv_PACKED *)packed; \
    glFogfv_ARGS *args = (glFogfv_ARGS *)&unpacked->args; \
    glFogfv(args->pname, args->params);; \
} while(0)
void glFogfv(glFogfv_ARG_EXPAND);
packed_call_t *pack_glFogfv(glFogfv_PACKED *_dst glFogfv_ARG_EXPAND_TAIL);
typedef void (*glFogfv_PTR)(glFogfv_ARG_EXPAND);
#endif
#ifndef glFogx_RETURN
#define glFogx_RETURN void
#define glFogx_ARG_NAMES pname, param
#define glFogx_ARG_EXPAND GLenum pname, GLfixed param
#define glFogx_ARG_NAMES_TAIL , pname, param
#define glFogx_ARG_EXPAND_TAIL , GLenum pname, GLfixed param
#define forward_glFogx(_pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glFogx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFogx(dst, _pname, _param), NULL); \
    });
#define call_glFogx(packed, ret_v) do { \
    glFogx_PACKED *unpacked = (glFogx_PACKED *)packed; \
    glFogx_ARGS *args = (glFogx_ARGS *)&unpacked->args; \
    glFogx(args->pname, args->param);; \
} while(0)
void glFogx(glFogx_ARG_EXPAND);
packed_call_t *pack_glFogx(glFogx_PACKED *_dst glFogx_ARG_EXPAND_TAIL);
typedef void (*glFogx_PTR)(glFogx_ARG_EXPAND);
#endif
#ifndef glFogxv_RETURN
#define glFogxv_RETURN void
#define glFogxv_ARG_NAMES pname, params
#define glFogxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define glFogxv_ARG_NAMES_TAIL , pname, params
#define glFogxv_ARG_EXPAND_TAIL , GLenum pname, const GLfixed * params
#define forward_glFogxv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glFogxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFogxv(dst, _pname, _params), NULL); \
    });
#define call_glFogxv(packed, ret_v) do { \
    glFogxv_PACKED *unpacked = (glFogxv_PACKED *)packed; \
    glFogxv_ARGS *args = (glFogxv_ARGS *)&unpacked->args; \
    glFogxv(args->pname, args->params);; \
} while(0)
void glFogxv(glFogxv_ARG_EXPAND);
packed_call_t *pack_glFogxv(glFogxv_PACKED *_dst glFogxv_ARG_EXPAND_TAIL);
typedef void (*glFogxv_PTR)(glFogxv_ARG_EXPAND);
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
#ifndef glFrustumf_RETURN
#define glFrustumf_RETURN void
#define glFrustumf_ARG_NAMES left, right, bottom, top, near, far
#define glFrustumf_ARG_EXPAND GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far
#define glFrustumf_ARG_NAMES_TAIL , left, right, bottom, top, near, far
#define glFrustumf_ARG_EXPAND_TAIL , GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far
#define forward_glFrustumf(_left, _right, _bottom, _top, _near, _far) \
    ({ \
        void *dst = remote_dma(sizeof(glFrustumf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFrustumf(dst, _left, _right, _bottom, _top, _near, _far), NULL); \
    });
#define call_glFrustumf(packed, ret_v) do { \
    glFrustumf_PACKED *unpacked = (glFrustumf_PACKED *)packed; \
    glFrustumf_ARGS *args = (glFrustumf_ARGS *)&unpacked->args; \
    glFrustumf(args->left, args->right, args->bottom, args->top, args->near, args->far);; \
} while(0)
void glFrustumf(glFrustumf_ARG_EXPAND);
packed_call_t *pack_glFrustumf(glFrustumf_PACKED *_dst glFrustumf_ARG_EXPAND_TAIL);
typedef void (*glFrustumf_PTR)(glFrustumf_ARG_EXPAND);
#endif
#ifndef glFrustumx_RETURN
#define glFrustumx_RETURN void
#define glFrustumx_ARG_NAMES left, right, bottom, top, near, far
#define glFrustumx_ARG_EXPAND GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far
#define glFrustumx_ARG_NAMES_TAIL , left, right, bottom, top, near, far
#define glFrustumx_ARG_EXPAND_TAIL , GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far
#define forward_glFrustumx(_left, _right, _bottom, _top, _near, _far) \
    ({ \
        void *dst = remote_dma(sizeof(glFrustumx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glFrustumx(dst, _left, _right, _bottom, _top, _near, _far), NULL); \
    });
#define call_glFrustumx(packed, ret_v) do { \
    glFrustumx_PACKED *unpacked = (glFrustumx_PACKED *)packed; \
    glFrustumx_ARGS *args = (glFrustumx_ARGS *)&unpacked->args; \
    glFrustumx(args->left, args->right, args->bottom, args->top, args->near, args->far);; \
} while(0)
void glFrustumx(glFrustumx_ARG_EXPAND);
packed_call_t *pack_glFrustumx(glFrustumx_PACKED *_dst glFrustumx_ARG_EXPAND_TAIL);
typedef void (*glFrustumx_PTR)(glFrustumx_ARG_EXPAND);
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
#ifndef glGetClipPlanef_RETURN
#define glGetClipPlanef_RETURN void
#define glGetClipPlanef_ARG_NAMES plane, equation
#define glGetClipPlanef_ARG_EXPAND GLenum plane, GLfloat * equation
#define glGetClipPlanef_ARG_NAMES_TAIL , plane, equation
#define glGetClipPlanef_ARG_EXPAND_TAIL , GLenum plane, GLfloat * equation
#define forward_glGetClipPlanef(_plane, _equation) \
    ({ \
        void *dst = remote_dma(sizeof(glGetClipPlanef_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetClipPlanef(dst, _plane, _equation), NULL); \
    });
#define call_glGetClipPlanef(packed, ret_v) do { \
    glGetClipPlanef_PACKED *unpacked = (glGetClipPlanef_PACKED *)packed; \
    glGetClipPlanef_ARGS *args = (glGetClipPlanef_ARGS *)&unpacked->args; \
    glGetClipPlanef(args->plane, args->equation);; \
} while(0)
void glGetClipPlanef(glGetClipPlanef_ARG_EXPAND);
packed_call_t *pack_glGetClipPlanef(glGetClipPlanef_PACKED *_dst glGetClipPlanef_ARG_EXPAND_TAIL);
typedef void (*glGetClipPlanef_PTR)(glGetClipPlanef_ARG_EXPAND);
#endif
#ifndef glGetClipPlanex_RETURN
#define glGetClipPlanex_RETURN void
#define glGetClipPlanex_ARG_NAMES plane, equation
#define glGetClipPlanex_ARG_EXPAND GLenum plane, GLfixed * equation
#define glGetClipPlanex_ARG_NAMES_TAIL , plane, equation
#define glGetClipPlanex_ARG_EXPAND_TAIL , GLenum plane, GLfixed * equation
#define forward_glGetClipPlanex(_plane, _equation) \
    ({ \
        void *dst = remote_dma(sizeof(glGetClipPlanex_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetClipPlanex(dst, _plane, _equation), NULL); \
    });
#define call_glGetClipPlanex(packed, ret_v) do { \
    glGetClipPlanex_PACKED *unpacked = (glGetClipPlanex_PACKED *)packed; \
    glGetClipPlanex_ARGS *args = (glGetClipPlanex_ARGS *)&unpacked->args; \
    glGetClipPlanex(args->plane, args->equation);; \
} while(0)
void glGetClipPlanex(glGetClipPlanex_ARG_EXPAND);
packed_call_t *pack_glGetClipPlanex(glGetClipPlanex_PACKED *_dst glGetClipPlanex_ARG_EXPAND_TAIL);
typedef void (*glGetClipPlanex_PTR)(glGetClipPlanex_ARG_EXPAND);
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
#ifndef glGetFixedv_RETURN
#define glGetFixedv_RETURN void
#define glGetFixedv_ARG_NAMES pname, params
#define glGetFixedv_ARG_EXPAND GLenum pname, GLfixed * params
#define glGetFixedv_ARG_NAMES_TAIL , pname, params
#define glGetFixedv_ARG_EXPAND_TAIL , GLenum pname, GLfixed * params
#define forward_glGetFixedv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetFixedv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetFixedv(dst, _pname, _params), NULL); \
    });
#define call_glGetFixedv(packed, ret_v) do { \
    glGetFixedv_PACKED *unpacked = (glGetFixedv_PACKED *)packed; \
    glGetFixedv_ARGS *args = (glGetFixedv_ARGS *)&unpacked->args; \
    glGetFixedv(args->pname, args->params);; \
} while(0)
void glGetFixedv(glGetFixedv_ARG_EXPAND);
packed_call_t *pack_glGetFixedv(glGetFixedv_PACKED *_dst glGetFixedv_ARG_EXPAND_TAIL);
typedef void (*glGetFixedv_PTR)(glGetFixedv_ARG_EXPAND);
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
#ifndef glGetLightfv_RETURN
#define glGetLightfv_RETURN void
#define glGetLightfv_ARG_NAMES light, pname, params
#define glGetLightfv_ARG_EXPAND GLenum light, GLenum pname, GLfloat * params
#define glGetLightfv_ARG_NAMES_TAIL , light, pname, params
#define glGetLightfv_ARG_EXPAND_TAIL , GLenum light, GLenum pname, GLfloat * params
#define forward_glGetLightfv(_light, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetLightfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetLightfv(dst, _light, _pname, _params), NULL); \
    });
#define call_glGetLightfv(packed, ret_v) do { \
    glGetLightfv_PACKED *unpacked = (glGetLightfv_PACKED *)packed; \
    glGetLightfv_ARGS *args = (glGetLightfv_ARGS *)&unpacked->args; \
    glGetLightfv(args->light, args->pname, args->params);; \
} while(0)
void glGetLightfv(glGetLightfv_ARG_EXPAND);
packed_call_t *pack_glGetLightfv(glGetLightfv_PACKED *_dst glGetLightfv_ARG_EXPAND_TAIL);
typedef void (*glGetLightfv_PTR)(glGetLightfv_ARG_EXPAND);
#endif
#ifndef glGetLightxv_RETURN
#define glGetLightxv_RETURN void
#define glGetLightxv_ARG_NAMES light, pname, params
#define glGetLightxv_ARG_EXPAND GLenum light, GLenum pname, GLfixed * params
#define glGetLightxv_ARG_NAMES_TAIL , light, pname, params
#define glGetLightxv_ARG_EXPAND_TAIL , GLenum light, GLenum pname, GLfixed * params
#define forward_glGetLightxv(_light, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetLightxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetLightxv(dst, _light, _pname, _params), NULL); \
    });
#define call_glGetLightxv(packed, ret_v) do { \
    glGetLightxv_PACKED *unpacked = (glGetLightxv_PACKED *)packed; \
    glGetLightxv_ARGS *args = (glGetLightxv_ARGS *)&unpacked->args; \
    glGetLightxv(args->light, args->pname, args->params);; \
} while(0)
void glGetLightxv(glGetLightxv_ARG_EXPAND);
packed_call_t *pack_glGetLightxv(glGetLightxv_PACKED *_dst glGetLightxv_ARG_EXPAND_TAIL);
typedef void (*glGetLightxv_PTR)(glGetLightxv_ARG_EXPAND);
#endif
#ifndef glGetMaterialfv_RETURN
#define glGetMaterialfv_RETURN void
#define glGetMaterialfv_ARG_NAMES face, pname, params
#define glGetMaterialfv_ARG_EXPAND GLenum face, GLenum pname, GLfloat * params
#define glGetMaterialfv_ARG_NAMES_TAIL , face, pname, params
#define glGetMaterialfv_ARG_EXPAND_TAIL , GLenum face, GLenum pname, GLfloat * params
#define forward_glGetMaterialfv(_face, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetMaterialfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetMaterialfv(dst, _face, _pname, _params), NULL); \
    });
#define call_glGetMaterialfv(packed, ret_v) do { \
    glGetMaterialfv_PACKED *unpacked = (glGetMaterialfv_PACKED *)packed; \
    glGetMaterialfv_ARGS *args = (glGetMaterialfv_ARGS *)&unpacked->args; \
    glGetMaterialfv(args->face, args->pname, args->params);; \
} while(0)
void glGetMaterialfv(glGetMaterialfv_ARG_EXPAND);
packed_call_t *pack_glGetMaterialfv(glGetMaterialfv_PACKED *_dst glGetMaterialfv_ARG_EXPAND_TAIL);
typedef void (*glGetMaterialfv_PTR)(glGetMaterialfv_ARG_EXPAND);
#endif
#ifndef glGetMaterialxv_RETURN
#define glGetMaterialxv_RETURN void
#define glGetMaterialxv_ARG_NAMES face, pname, params
#define glGetMaterialxv_ARG_EXPAND GLenum face, GLenum pname, GLfixed * params
#define glGetMaterialxv_ARG_NAMES_TAIL , face, pname, params
#define glGetMaterialxv_ARG_EXPAND_TAIL , GLenum face, GLenum pname, GLfixed * params
#define forward_glGetMaterialxv(_face, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetMaterialxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetMaterialxv(dst, _face, _pname, _params), NULL); \
    });
#define call_glGetMaterialxv(packed, ret_v) do { \
    glGetMaterialxv_PACKED *unpacked = (glGetMaterialxv_PACKED *)packed; \
    glGetMaterialxv_ARGS *args = (glGetMaterialxv_ARGS *)&unpacked->args; \
    glGetMaterialxv(args->face, args->pname, args->params);; \
} while(0)
void glGetMaterialxv(glGetMaterialxv_ARG_EXPAND);
packed_call_t *pack_glGetMaterialxv(glGetMaterialxv_PACKED *_dst glGetMaterialxv_ARG_EXPAND_TAIL);
typedef void (*glGetMaterialxv_PTR)(glGetMaterialxv_ARG_EXPAND);
#endif
#ifndef glGetPointerv_RETURN
#define glGetPointerv_RETURN void
#define glGetPointerv_ARG_NAMES pname, params
#define glGetPointerv_ARG_EXPAND GLenum pname, GLvoid ** params
#define glGetPointerv_ARG_NAMES_TAIL , pname, params
#define glGetPointerv_ARG_EXPAND_TAIL , GLenum pname, GLvoid ** params
#define forward_glGetPointerv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetPointerv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetPointerv(dst, _pname, _params), NULL); \
    });
#define call_glGetPointerv(packed, ret_v) do { \
    glGetPointerv_PACKED *unpacked = (glGetPointerv_PACKED *)packed; \
    glGetPointerv_ARGS *args = (glGetPointerv_ARGS *)&unpacked->args; \
    glGetPointerv(args->pname, args->params);; \
} while(0)
void glGetPointerv(glGetPointerv_ARG_EXPAND);
packed_call_t *pack_glGetPointerv(glGetPointerv_PACKED *_dst glGetPointerv_ARG_EXPAND_TAIL);
typedef void (*glGetPointerv_PTR)(glGetPointerv_ARG_EXPAND);
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
#ifndef glGetTexEnvfv_RETURN
#define glGetTexEnvfv_RETURN void
#define glGetTexEnvfv_ARG_NAMES target, pname, params
#define glGetTexEnvfv_ARG_EXPAND GLenum target, GLenum pname, GLfloat * params
#define glGetTexEnvfv_ARG_NAMES_TAIL , target, pname, params
#define glGetTexEnvfv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLfloat * params
#define forward_glGetTexEnvfv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetTexEnvfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetTexEnvfv(dst, _target, _pname, _params), NULL); \
    });
#define call_glGetTexEnvfv(packed, ret_v) do { \
    glGetTexEnvfv_PACKED *unpacked = (glGetTexEnvfv_PACKED *)packed; \
    glGetTexEnvfv_ARGS *args = (glGetTexEnvfv_ARGS *)&unpacked->args; \
    glGetTexEnvfv(args->target, args->pname, args->params);; \
} while(0)
void glGetTexEnvfv(glGetTexEnvfv_ARG_EXPAND);
packed_call_t *pack_glGetTexEnvfv(glGetTexEnvfv_PACKED *_dst glGetTexEnvfv_ARG_EXPAND_TAIL);
typedef void (*glGetTexEnvfv_PTR)(glGetTexEnvfv_ARG_EXPAND);
#endif
#ifndef glGetTexEnviv_RETURN
#define glGetTexEnviv_RETURN void
#define glGetTexEnviv_ARG_NAMES target, pname, params
#define glGetTexEnviv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define glGetTexEnviv_ARG_NAMES_TAIL , target, pname, params
#define glGetTexEnviv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLint * params
#define forward_glGetTexEnviv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetTexEnviv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetTexEnviv(dst, _target, _pname, _params), NULL); \
    });
#define call_glGetTexEnviv(packed, ret_v) do { \
    glGetTexEnviv_PACKED *unpacked = (glGetTexEnviv_PACKED *)packed; \
    glGetTexEnviv_ARGS *args = (glGetTexEnviv_ARGS *)&unpacked->args; \
    glGetTexEnviv(args->target, args->pname, args->params);; \
} while(0)
void glGetTexEnviv(glGetTexEnviv_ARG_EXPAND);
packed_call_t *pack_glGetTexEnviv(glGetTexEnviv_PACKED *_dst glGetTexEnviv_ARG_EXPAND_TAIL);
typedef void (*glGetTexEnviv_PTR)(glGetTexEnviv_ARG_EXPAND);
#endif
#ifndef glGetTexEnvxv_RETURN
#define glGetTexEnvxv_RETURN void
#define glGetTexEnvxv_ARG_NAMES target, pname, params
#define glGetTexEnvxv_ARG_EXPAND GLenum target, GLenum pname, GLfixed * params
#define glGetTexEnvxv_ARG_NAMES_TAIL , target, pname, params
#define glGetTexEnvxv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLfixed * params
#define forward_glGetTexEnvxv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetTexEnvxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetTexEnvxv(dst, _target, _pname, _params), NULL); \
    });
#define call_glGetTexEnvxv(packed, ret_v) do { \
    glGetTexEnvxv_PACKED *unpacked = (glGetTexEnvxv_PACKED *)packed; \
    glGetTexEnvxv_ARGS *args = (glGetTexEnvxv_ARGS *)&unpacked->args; \
    glGetTexEnvxv(args->target, args->pname, args->params);; \
} while(0)
void glGetTexEnvxv(glGetTexEnvxv_ARG_EXPAND);
packed_call_t *pack_glGetTexEnvxv(glGetTexEnvxv_PACKED *_dst glGetTexEnvxv_ARG_EXPAND_TAIL);
typedef void (*glGetTexEnvxv_PTR)(glGetTexEnvxv_ARG_EXPAND);
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
#ifndef glGetTexParameterxv_RETURN
#define glGetTexParameterxv_RETURN void
#define glGetTexParameterxv_ARG_NAMES target, pname, params
#define glGetTexParameterxv_ARG_EXPAND GLenum target, GLenum pname, GLfixed * params
#define glGetTexParameterxv_ARG_NAMES_TAIL , target, pname, params
#define glGetTexParameterxv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLfixed * params
#define forward_glGetTexParameterxv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glGetTexParameterxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glGetTexParameterxv(dst, _target, _pname, _params), NULL); \
    });
#define call_glGetTexParameterxv(packed, ret_v) do { \
    glGetTexParameterxv_PACKED *unpacked = (glGetTexParameterxv_PACKED *)packed; \
    glGetTexParameterxv_ARGS *args = (glGetTexParameterxv_ARGS *)&unpacked->args; \
    glGetTexParameterxv(args->target, args->pname, args->params);; \
} while(0)
void glGetTexParameterxv(glGetTexParameterxv_ARG_EXPAND);
packed_call_t *pack_glGetTexParameterxv(glGetTexParameterxv_PACKED *_dst glGetTexParameterxv_ARG_EXPAND_TAIL);
typedef void (*glGetTexParameterxv_PTR)(glGetTexParameterxv_ARG_EXPAND);
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
#ifndef glLightModelf_RETURN
#define glLightModelf_RETURN void
#define glLightModelf_ARG_NAMES pname, param
#define glLightModelf_ARG_EXPAND GLenum pname, GLfloat param
#define glLightModelf_ARG_NAMES_TAIL , pname, param
#define glLightModelf_ARG_EXPAND_TAIL , GLenum pname, GLfloat param
#define forward_glLightModelf(_pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glLightModelf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLightModelf(dst, _pname, _param), NULL); \
    });
#define call_glLightModelf(packed, ret_v) do { \
    glLightModelf_PACKED *unpacked = (glLightModelf_PACKED *)packed; \
    glLightModelf_ARGS *args = (glLightModelf_ARGS *)&unpacked->args; \
    glLightModelf(args->pname, args->param);; \
} while(0)
void glLightModelf(glLightModelf_ARG_EXPAND);
packed_call_t *pack_glLightModelf(glLightModelf_PACKED *_dst glLightModelf_ARG_EXPAND_TAIL);
typedef void (*glLightModelf_PTR)(glLightModelf_ARG_EXPAND);
#endif
#ifndef glLightModelfv_RETURN
#define glLightModelfv_RETURN void
#define glLightModelfv_ARG_NAMES pname, params
#define glLightModelfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define glLightModelfv_ARG_NAMES_TAIL , pname, params
#define glLightModelfv_ARG_EXPAND_TAIL , GLenum pname, const GLfloat * params
#define forward_glLightModelfv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glLightModelfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLightModelfv(dst, _pname, _params), NULL); \
    });
#define call_glLightModelfv(packed, ret_v) do { \
    glLightModelfv_PACKED *unpacked = (glLightModelfv_PACKED *)packed; \
    glLightModelfv_ARGS *args = (glLightModelfv_ARGS *)&unpacked->args; \
    glLightModelfv(args->pname, args->params);; \
} while(0)
void glLightModelfv(glLightModelfv_ARG_EXPAND);
packed_call_t *pack_glLightModelfv(glLightModelfv_PACKED *_dst glLightModelfv_ARG_EXPAND_TAIL);
typedef void (*glLightModelfv_PTR)(glLightModelfv_ARG_EXPAND);
#endif
#ifndef glLightModelx_RETURN
#define glLightModelx_RETURN void
#define glLightModelx_ARG_NAMES pname, param
#define glLightModelx_ARG_EXPAND GLenum pname, GLfixed param
#define glLightModelx_ARG_NAMES_TAIL , pname, param
#define glLightModelx_ARG_EXPAND_TAIL , GLenum pname, GLfixed param
#define forward_glLightModelx(_pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glLightModelx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLightModelx(dst, _pname, _param), NULL); \
    });
#define call_glLightModelx(packed, ret_v) do { \
    glLightModelx_PACKED *unpacked = (glLightModelx_PACKED *)packed; \
    glLightModelx_ARGS *args = (glLightModelx_ARGS *)&unpacked->args; \
    glLightModelx(args->pname, args->param);; \
} while(0)
void glLightModelx(glLightModelx_ARG_EXPAND);
packed_call_t *pack_glLightModelx(glLightModelx_PACKED *_dst glLightModelx_ARG_EXPAND_TAIL);
typedef void (*glLightModelx_PTR)(glLightModelx_ARG_EXPAND);
#endif
#ifndef glLightModelxv_RETURN
#define glLightModelxv_RETURN void
#define glLightModelxv_ARG_NAMES pname, params
#define glLightModelxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define glLightModelxv_ARG_NAMES_TAIL , pname, params
#define glLightModelxv_ARG_EXPAND_TAIL , GLenum pname, const GLfixed * params
#define forward_glLightModelxv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glLightModelxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLightModelxv(dst, _pname, _params), NULL); \
    });
#define call_glLightModelxv(packed, ret_v) do { \
    glLightModelxv_PACKED *unpacked = (glLightModelxv_PACKED *)packed; \
    glLightModelxv_ARGS *args = (glLightModelxv_ARGS *)&unpacked->args; \
    glLightModelxv(args->pname, args->params);; \
} while(0)
void glLightModelxv(glLightModelxv_ARG_EXPAND);
packed_call_t *pack_glLightModelxv(glLightModelxv_PACKED *_dst glLightModelxv_ARG_EXPAND_TAIL);
typedef void (*glLightModelxv_PTR)(glLightModelxv_ARG_EXPAND);
#endif
#ifndef glLightf_RETURN
#define glLightf_RETURN void
#define glLightf_ARG_NAMES light, pname, param
#define glLightf_ARG_EXPAND GLenum light, GLenum pname, GLfloat param
#define glLightf_ARG_NAMES_TAIL , light, pname, param
#define glLightf_ARG_EXPAND_TAIL , GLenum light, GLenum pname, GLfloat param
#define forward_glLightf(_light, _pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glLightf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLightf(dst, _light, _pname, _param), NULL); \
    });
#define call_glLightf(packed, ret_v) do { \
    glLightf_PACKED *unpacked = (glLightf_PACKED *)packed; \
    glLightf_ARGS *args = (glLightf_ARGS *)&unpacked->args; \
    glLightf(args->light, args->pname, args->param);; \
} while(0)
void glLightf(glLightf_ARG_EXPAND);
packed_call_t *pack_glLightf(glLightf_PACKED *_dst glLightf_ARG_EXPAND_TAIL);
typedef void (*glLightf_PTR)(glLightf_ARG_EXPAND);
#endif
#ifndef glLightfv_RETURN
#define glLightfv_RETURN void
#define glLightfv_ARG_NAMES light, pname, params
#define glLightfv_ARG_EXPAND GLenum light, GLenum pname, const GLfloat * params
#define glLightfv_ARG_NAMES_TAIL , light, pname, params
#define glLightfv_ARG_EXPAND_TAIL , GLenum light, GLenum pname, const GLfloat * params
#define forward_glLightfv(_light, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glLightfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLightfv(dst, _light, _pname, _params), NULL); \
    });
#define call_glLightfv(packed, ret_v) do { \
    glLightfv_PACKED *unpacked = (glLightfv_PACKED *)packed; \
    glLightfv_ARGS *args = (glLightfv_ARGS *)&unpacked->args; \
    glLightfv(args->light, args->pname, args->params);; \
} while(0)
void glLightfv(glLightfv_ARG_EXPAND);
packed_call_t *pack_glLightfv(glLightfv_PACKED *_dst glLightfv_ARG_EXPAND_TAIL);
typedef void (*glLightfv_PTR)(glLightfv_ARG_EXPAND);
#endif
#ifndef glLightx_RETURN
#define glLightx_RETURN void
#define glLightx_ARG_NAMES light, pname, param
#define glLightx_ARG_EXPAND GLenum light, GLenum pname, GLfixed param
#define glLightx_ARG_NAMES_TAIL , light, pname, param
#define glLightx_ARG_EXPAND_TAIL , GLenum light, GLenum pname, GLfixed param
#define forward_glLightx(_light, _pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glLightx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLightx(dst, _light, _pname, _param), NULL); \
    });
#define call_glLightx(packed, ret_v) do { \
    glLightx_PACKED *unpacked = (glLightx_PACKED *)packed; \
    glLightx_ARGS *args = (glLightx_ARGS *)&unpacked->args; \
    glLightx(args->light, args->pname, args->param);; \
} while(0)
void glLightx(glLightx_ARG_EXPAND);
packed_call_t *pack_glLightx(glLightx_PACKED *_dst glLightx_ARG_EXPAND_TAIL);
typedef void (*glLightx_PTR)(glLightx_ARG_EXPAND);
#endif
#ifndef glLightxv_RETURN
#define glLightxv_RETURN void
#define glLightxv_ARG_NAMES light, pname, params
#define glLightxv_ARG_EXPAND GLenum light, GLenum pname, const GLfixed * params
#define glLightxv_ARG_NAMES_TAIL , light, pname, params
#define glLightxv_ARG_EXPAND_TAIL , GLenum light, GLenum pname, const GLfixed * params
#define forward_glLightxv(_light, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glLightxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLightxv(dst, _light, _pname, _params), NULL); \
    });
#define call_glLightxv(packed, ret_v) do { \
    glLightxv_PACKED *unpacked = (glLightxv_PACKED *)packed; \
    glLightxv_ARGS *args = (glLightxv_ARGS *)&unpacked->args; \
    glLightxv(args->light, args->pname, args->params);; \
} while(0)
void glLightxv(glLightxv_ARG_EXPAND);
packed_call_t *pack_glLightxv(glLightxv_PACKED *_dst glLightxv_ARG_EXPAND_TAIL);
typedef void (*glLightxv_PTR)(glLightxv_ARG_EXPAND);
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
#ifndef glLineWidthx_RETURN
#define glLineWidthx_RETURN void
#define glLineWidthx_ARG_NAMES width
#define glLineWidthx_ARG_EXPAND GLfixed width
#define glLineWidthx_ARG_NAMES_TAIL , width
#define glLineWidthx_ARG_EXPAND_TAIL , GLfixed width
#define forward_glLineWidthx(_width) \
    ({ \
        void *dst = remote_dma(sizeof(glLineWidthx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLineWidthx(dst, _width), NULL); \
    });
#define call_glLineWidthx(packed, ret_v) do { \
    glLineWidthx_PACKED *unpacked = (glLineWidthx_PACKED *)packed; \
    glLineWidthx_ARGS *args = (glLineWidthx_ARGS *)&unpacked->args; \
    glLineWidthx(args->width);; \
} while(0)
void glLineWidthx(glLineWidthx_ARG_EXPAND);
packed_call_t *pack_glLineWidthx(glLineWidthx_PACKED *_dst glLineWidthx_ARG_EXPAND_TAIL);
typedef void (*glLineWidthx_PTR)(glLineWidthx_ARG_EXPAND);
#endif
#ifndef glLoadIdentity_RETURN
#define glLoadIdentity_RETURN void
#define glLoadIdentity_ARG_NAMES 
#define glLoadIdentity_ARG_EXPAND 
#define glLoadIdentity_ARG_NAMES_TAIL 
#define glLoadIdentity_ARG_EXPAND_TAIL 
#define forward_glLoadIdentity() \
    ({ \
        void *dst = remote_dma(sizeof(glLoadIdentity_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLoadIdentity(dst), NULL); \
    });
#define call_glLoadIdentity(packed, ret_v) do { \
    glLoadIdentity();; \
} while(0)
void glLoadIdentity(glLoadIdentity_ARG_EXPAND);
packed_call_t *pack_glLoadIdentity(glLoadIdentity_PACKED *_dst glLoadIdentity_ARG_EXPAND_TAIL);
typedef void (*glLoadIdentity_PTR)(glLoadIdentity_ARG_EXPAND);
#endif
#ifndef glLoadMatrixf_RETURN
#define glLoadMatrixf_RETURN void
#define glLoadMatrixf_ARG_NAMES m
#define glLoadMatrixf_ARG_EXPAND const GLfloat * m
#define glLoadMatrixf_ARG_NAMES_TAIL , m
#define glLoadMatrixf_ARG_EXPAND_TAIL , const GLfloat * m
#define forward_glLoadMatrixf(_m) \
    ({ \
        void *dst = remote_dma(sizeof(glLoadMatrixf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLoadMatrixf(dst, _m), NULL); \
    });
#define call_glLoadMatrixf(packed, ret_v) do { \
    glLoadMatrixf_PACKED *unpacked = (glLoadMatrixf_PACKED *)packed; \
    glLoadMatrixf_ARGS *args = (glLoadMatrixf_ARGS *)&unpacked->args; \
    glLoadMatrixf(args->m);; \
} while(0)
void glLoadMatrixf(glLoadMatrixf_ARG_EXPAND);
packed_call_t *pack_glLoadMatrixf(glLoadMatrixf_PACKED *_dst glLoadMatrixf_ARG_EXPAND_TAIL);
typedef void (*glLoadMatrixf_PTR)(glLoadMatrixf_ARG_EXPAND);
#endif
#ifndef glLoadMatrixx_RETURN
#define glLoadMatrixx_RETURN void
#define glLoadMatrixx_ARG_NAMES m
#define glLoadMatrixx_ARG_EXPAND const GLfixed * m
#define glLoadMatrixx_ARG_NAMES_TAIL , m
#define glLoadMatrixx_ARG_EXPAND_TAIL , const GLfixed * m
#define forward_glLoadMatrixx(_m) \
    ({ \
        void *dst = remote_dma(sizeof(glLoadMatrixx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLoadMatrixx(dst, _m), NULL); \
    });
#define call_glLoadMatrixx(packed, ret_v) do { \
    glLoadMatrixx_PACKED *unpacked = (glLoadMatrixx_PACKED *)packed; \
    glLoadMatrixx_ARGS *args = (glLoadMatrixx_ARGS *)&unpacked->args; \
    glLoadMatrixx(args->m);; \
} while(0)
void glLoadMatrixx(glLoadMatrixx_ARG_EXPAND);
packed_call_t *pack_glLoadMatrixx(glLoadMatrixx_PACKED *_dst glLoadMatrixx_ARG_EXPAND_TAIL);
typedef void (*glLoadMatrixx_PTR)(glLoadMatrixx_ARG_EXPAND);
#endif
#ifndef glLogicOp_RETURN
#define glLogicOp_RETURN void
#define glLogicOp_ARG_NAMES opcode
#define glLogicOp_ARG_EXPAND GLenum opcode
#define glLogicOp_ARG_NAMES_TAIL , opcode
#define glLogicOp_ARG_EXPAND_TAIL , GLenum opcode
#define forward_glLogicOp(_opcode) \
    ({ \
        void *dst = remote_dma(sizeof(glLogicOp_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glLogicOp(dst, _opcode), NULL); \
    });
#define call_glLogicOp(packed, ret_v) do { \
    glLogicOp_PACKED *unpacked = (glLogicOp_PACKED *)packed; \
    glLogicOp_ARGS *args = (glLogicOp_ARGS *)&unpacked->args; \
    glLogicOp(args->opcode);; \
} while(0)
void glLogicOp(glLogicOp_ARG_EXPAND);
packed_call_t *pack_glLogicOp(glLogicOp_PACKED *_dst glLogicOp_ARG_EXPAND_TAIL);
typedef void (*glLogicOp_PTR)(glLogicOp_ARG_EXPAND);
#endif
#ifndef glMaterialf_RETURN
#define glMaterialf_RETURN void
#define glMaterialf_ARG_NAMES face, pname, param
#define glMaterialf_ARG_EXPAND GLenum face, GLenum pname, GLfloat param
#define glMaterialf_ARG_NAMES_TAIL , face, pname, param
#define glMaterialf_ARG_EXPAND_TAIL , GLenum face, GLenum pname, GLfloat param
#define forward_glMaterialf(_face, _pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glMaterialf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glMaterialf(dst, _face, _pname, _param), NULL); \
    });
#define call_glMaterialf(packed, ret_v) do { \
    glMaterialf_PACKED *unpacked = (glMaterialf_PACKED *)packed; \
    glMaterialf_ARGS *args = (glMaterialf_ARGS *)&unpacked->args; \
    glMaterialf(args->face, args->pname, args->param);; \
} while(0)
void glMaterialf(glMaterialf_ARG_EXPAND);
packed_call_t *pack_glMaterialf(glMaterialf_PACKED *_dst glMaterialf_ARG_EXPAND_TAIL);
typedef void (*glMaterialf_PTR)(glMaterialf_ARG_EXPAND);
#endif
#ifndef glMaterialfv_RETURN
#define glMaterialfv_RETURN void
#define glMaterialfv_ARG_NAMES face, pname, params
#define glMaterialfv_ARG_EXPAND GLenum face, GLenum pname, const GLfloat * params
#define glMaterialfv_ARG_NAMES_TAIL , face, pname, params
#define glMaterialfv_ARG_EXPAND_TAIL , GLenum face, GLenum pname, const GLfloat * params
#define forward_glMaterialfv(_face, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glMaterialfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glMaterialfv(dst, _face, _pname, _params), NULL); \
    });
#define call_glMaterialfv(packed, ret_v) do { \
    glMaterialfv_PACKED *unpacked = (glMaterialfv_PACKED *)packed; \
    glMaterialfv_ARGS *args = (glMaterialfv_ARGS *)&unpacked->args; \
    glMaterialfv(args->face, args->pname, args->params);; \
} while(0)
void glMaterialfv(glMaterialfv_ARG_EXPAND);
packed_call_t *pack_glMaterialfv(glMaterialfv_PACKED *_dst glMaterialfv_ARG_EXPAND_TAIL);
typedef void (*glMaterialfv_PTR)(glMaterialfv_ARG_EXPAND);
#endif
#ifndef glMaterialx_RETURN
#define glMaterialx_RETURN void
#define glMaterialx_ARG_NAMES face, pname, param
#define glMaterialx_ARG_EXPAND GLenum face, GLenum pname, GLfixed param
#define glMaterialx_ARG_NAMES_TAIL , face, pname, param
#define glMaterialx_ARG_EXPAND_TAIL , GLenum face, GLenum pname, GLfixed param
#define forward_glMaterialx(_face, _pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glMaterialx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glMaterialx(dst, _face, _pname, _param), NULL); \
    });
#define call_glMaterialx(packed, ret_v) do { \
    glMaterialx_PACKED *unpacked = (glMaterialx_PACKED *)packed; \
    glMaterialx_ARGS *args = (glMaterialx_ARGS *)&unpacked->args; \
    glMaterialx(args->face, args->pname, args->param);; \
} while(0)
void glMaterialx(glMaterialx_ARG_EXPAND);
packed_call_t *pack_glMaterialx(glMaterialx_PACKED *_dst glMaterialx_ARG_EXPAND_TAIL);
typedef void (*glMaterialx_PTR)(glMaterialx_ARG_EXPAND);
#endif
#ifndef glMaterialxv_RETURN
#define glMaterialxv_RETURN void
#define glMaterialxv_ARG_NAMES face, pname, params
#define glMaterialxv_ARG_EXPAND GLenum face, GLenum pname, const GLfixed * params
#define glMaterialxv_ARG_NAMES_TAIL , face, pname, params
#define glMaterialxv_ARG_EXPAND_TAIL , GLenum face, GLenum pname, const GLfixed * params
#define forward_glMaterialxv(_face, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glMaterialxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glMaterialxv(dst, _face, _pname, _params), NULL); \
    });
#define call_glMaterialxv(packed, ret_v) do { \
    glMaterialxv_PACKED *unpacked = (glMaterialxv_PACKED *)packed; \
    glMaterialxv_ARGS *args = (glMaterialxv_ARGS *)&unpacked->args; \
    glMaterialxv(args->face, args->pname, args->params);; \
} while(0)
void glMaterialxv(glMaterialxv_ARG_EXPAND);
packed_call_t *pack_glMaterialxv(glMaterialxv_PACKED *_dst glMaterialxv_ARG_EXPAND_TAIL);
typedef void (*glMaterialxv_PTR)(glMaterialxv_ARG_EXPAND);
#endif
#ifndef glMatrixMode_RETURN
#define glMatrixMode_RETURN void
#define glMatrixMode_ARG_NAMES mode
#define glMatrixMode_ARG_EXPAND GLenum mode
#define glMatrixMode_ARG_NAMES_TAIL , mode
#define glMatrixMode_ARG_EXPAND_TAIL , GLenum mode
#define forward_glMatrixMode(_mode) \
    ({ \
        void *dst = remote_dma(sizeof(glMatrixMode_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glMatrixMode(dst, _mode), NULL); \
    });
#define call_glMatrixMode(packed, ret_v) do { \
    glMatrixMode_PACKED *unpacked = (glMatrixMode_PACKED *)packed; \
    glMatrixMode_ARGS *args = (glMatrixMode_ARGS *)&unpacked->args; \
    glMatrixMode(args->mode);; \
} while(0)
void glMatrixMode(glMatrixMode_ARG_EXPAND);
packed_call_t *pack_glMatrixMode(glMatrixMode_PACKED *_dst glMatrixMode_ARG_EXPAND_TAIL);
typedef void (*glMatrixMode_PTR)(glMatrixMode_ARG_EXPAND);
#endif
#ifndef glMultMatrixf_RETURN
#define glMultMatrixf_RETURN void
#define glMultMatrixf_ARG_NAMES m
#define glMultMatrixf_ARG_EXPAND const GLfloat * m
#define glMultMatrixf_ARG_NAMES_TAIL , m
#define glMultMatrixf_ARG_EXPAND_TAIL , const GLfloat * m
#define forward_glMultMatrixf(_m) \
    ({ \
        void *dst = remote_dma(sizeof(glMultMatrixf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glMultMatrixf(dst, _m), NULL); \
    });
#define call_glMultMatrixf(packed, ret_v) do { \
    glMultMatrixf_PACKED *unpacked = (glMultMatrixf_PACKED *)packed; \
    glMultMatrixf_ARGS *args = (glMultMatrixf_ARGS *)&unpacked->args; \
    glMultMatrixf(args->m);; \
} while(0)
void glMultMatrixf(glMultMatrixf_ARG_EXPAND);
packed_call_t *pack_glMultMatrixf(glMultMatrixf_PACKED *_dst glMultMatrixf_ARG_EXPAND_TAIL);
typedef void (*glMultMatrixf_PTR)(glMultMatrixf_ARG_EXPAND);
#endif
#ifndef glMultMatrixx_RETURN
#define glMultMatrixx_RETURN void
#define glMultMatrixx_ARG_NAMES m
#define glMultMatrixx_ARG_EXPAND const GLfixed * m
#define glMultMatrixx_ARG_NAMES_TAIL , m
#define glMultMatrixx_ARG_EXPAND_TAIL , const GLfixed * m
#define forward_glMultMatrixx(_m) \
    ({ \
        void *dst = remote_dma(sizeof(glMultMatrixx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glMultMatrixx(dst, _m), NULL); \
    });
#define call_glMultMatrixx(packed, ret_v) do { \
    glMultMatrixx_PACKED *unpacked = (glMultMatrixx_PACKED *)packed; \
    glMultMatrixx_ARGS *args = (glMultMatrixx_ARGS *)&unpacked->args; \
    glMultMatrixx(args->m);; \
} while(0)
void glMultMatrixx(glMultMatrixx_ARG_EXPAND);
packed_call_t *pack_glMultMatrixx(glMultMatrixx_PACKED *_dst glMultMatrixx_ARG_EXPAND_TAIL);
typedef void (*glMultMatrixx_PTR)(glMultMatrixx_ARG_EXPAND);
#endif
#ifndef glMultiTexCoord4f_RETURN
#define glMultiTexCoord4f_RETURN void
#define glMultiTexCoord4f_ARG_NAMES target, s, t, r, q
#define glMultiTexCoord4f_ARG_EXPAND GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q
#define glMultiTexCoord4f_ARG_NAMES_TAIL , target, s, t, r, q
#define glMultiTexCoord4f_ARG_EXPAND_TAIL , GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q
#define forward_glMultiTexCoord4f(_target, _s, _t, _r, _q) \
    ({ \
        void *dst = remote_dma(sizeof(glMultiTexCoord4f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glMultiTexCoord4f(dst, _target, _s, _t, _r, _q), NULL); \
    });
#define call_glMultiTexCoord4f(packed, ret_v) do { \
    glMultiTexCoord4f_PACKED *unpacked = (glMultiTexCoord4f_PACKED *)packed; \
    glMultiTexCoord4f_ARGS *args = (glMultiTexCoord4f_ARGS *)&unpacked->args; \
    glMultiTexCoord4f(args->target, args->s, args->t, args->r, args->q);; \
} while(0)
void glMultiTexCoord4f(glMultiTexCoord4f_ARG_EXPAND);
packed_call_t *pack_glMultiTexCoord4f(glMultiTexCoord4f_PACKED *_dst glMultiTexCoord4f_ARG_EXPAND_TAIL);
typedef void (*glMultiTexCoord4f_PTR)(glMultiTexCoord4f_ARG_EXPAND);
#endif
#ifndef glMultiTexCoord4x_RETURN
#define glMultiTexCoord4x_RETURN void
#define glMultiTexCoord4x_ARG_NAMES target, s, t, r, q
#define glMultiTexCoord4x_ARG_EXPAND GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q
#define glMultiTexCoord4x_ARG_NAMES_TAIL , target, s, t, r, q
#define glMultiTexCoord4x_ARG_EXPAND_TAIL , GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q
#define forward_glMultiTexCoord4x(_target, _s, _t, _r, _q) \
    ({ \
        void *dst = remote_dma(sizeof(glMultiTexCoord4x_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glMultiTexCoord4x(dst, _target, _s, _t, _r, _q), NULL); \
    });
#define call_glMultiTexCoord4x(packed, ret_v) do { \
    glMultiTexCoord4x_PACKED *unpacked = (glMultiTexCoord4x_PACKED *)packed; \
    glMultiTexCoord4x_ARGS *args = (glMultiTexCoord4x_ARGS *)&unpacked->args; \
    glMultiTexCoord4x(args->target, args->s, args->t, args->r, args->q);; \
} while(0)
void glMultiTexCoord4x(glMultiTexCoord4x_ARG_EXPAND);
packed_call_t *pack_glMultiTexCoord4x(glMultiTexCoord4x_PACKED *_dst glMultiTexCoord4x_ARG_EXPAND_TAIL);
typedef void (*glMultiTexCoord4x_PTR)(glMultiTexCoord4x_ARG_EXPAND);
#endif
#ifndef glNormal3f_RETURN
#define glNormal3f_RETURN void
#define glNormal3f_ARG_NAMES nx, ny, nz
#define glNormal3f_ARG_EXPAND GLfloat nx, GLfloat ny, GLfloat nz
#define glNormal3f_ARG_NAMES_TAIL , nx, ny, nz
#define glNormal3f_ARG_EXPAND_TAIL , GLfloat nx, GLfloat ny, GLfloat nz
#define forward_glNormal3f(_nx, _ny, _nz) \
    ({ \
        void *dst = remote_dma(sizeof(glNormal3f_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glNormal3f(dst, _nx, _ny, _nz), NULL); \
    });
#define call_glNormal3f(packed, ret_v) do { \
    glNormal3f_PACKED *unpacked = (glNormal3f_PACKED *)packed; \
    glNormal3f_ARGS *args = (glNormal3f_ARGS *)&unpacked->args; \
    glNormal3f(args->nx, args->ny, args->nz);; \
} while(0)
void glNormal3f(glNormal3f_ARG_EXPAND);
packed_call_t *pack_glNormal3f(glNormal3f_PACKED *_dst glNormal3f_ARG_EXPAND_TAIL);
typedef void (*glNormal3f_PTR)(glNormal3f_ARG_EXPAND);
#endif
#ifndef glNormal3x_RETURN
#define glNormal3x_RETURN void
#define glNormal3x_ARG_NAMES nx, ny, nz
#define glNormal3x_ARG_EXPAND GLfixed nx, GLfixed ny, GLfixed nz
#define glNormal3x_ARG_NAMES_TAIL , nx, ny, nz
#define glNormal3x_ARG_EXPAND_TAIL , GLfixed nx, GLfixed ny, GLfixed nz
#define forward_glNormal3x(_nx, _ny, _nz) \
    ({ \
        void *dst = remote_dma(sizeof(glNormal3x_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glNormal3x(dst, _nx, _ny, _nz), NULL); \
    });
#define call_glNormal3x(packed, ret_v) do { \
    glNormal3x_PACKED *unpacked = (glNormal3x_PACKED *)packed; \
    glNormal3x_ARGS *args = (glNormal3x_ARGS *)&unpacked->args; \
    glNormal3x(args->nx, args->ny, args->nz);; \
} while(0)
void glNormal3x(glNormal3x_ARG_EXPAND);
packed_call_t *pack_glNormal3x(glNormal3x_PACKED *_dst glNormal3x_ARG_EXPAND_TAIL);
typedef void (*glNormal3x_PTR)(glNormal3x_ARG_EXPAND);
#endif
#ifndef glNormalPointer_RETURN
#define glNormalPointer_RETURN void
#define glNormalPointer_ARG_NAMES type, stride, pointer
#define glNormalPointer_ARG_EXPAND GLenum type, GLsizei stride, const GLvoid * pointer
#define glNormalPointer_ARG_NAMES_TAIL , type, stride, pointer
#define glNormalPointer_ARG_EXPAND_TAIL , GLenum type, GLsizei stride, const GLvoid * pointer
#define forward_glNormalPointer(_type, _stride, _pointer) \
    ({ \
        void *dst = remote_dma(sizeof(glNormalPointer_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glNormalPointer(dst, _type, _stride, _pointer), NULL); \
    });
#define call_glNormalPointer(packed, ret_v) do { \
    glNormalPointer_PACKED *unpacked = (glNormalPointer_PACKED *)packed; \
    glNormalPointer_ARGS *args = (glNormalPointer_ARGS *)&unpacked->args; \
    glNormalPointer(args->type, args->stride, args->pointer);; \
} while(0)
void glNormalPointer(glNormalPointer_ARG_EXPAND);
packed_call_t *pack_glNormalPointer(glNormalPointer_PACKED *_dst glNormalPointer_ARG_EXPAND_TAIL);
typedef void (*glNormalPointer_PTR)(glNormalPointer_ARG_EXPAND);
#endif
#ifndef glOrthof_RETURN
#define glOrthof_RETURN void
#define glOrthof_ARG_NAMES left, right, bottom, top, near, far
#define glOrthof_ARG_EXPAND GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far
#define glOrthof_ARG_NAMES_TAIL , left, right, bottom, top, near, far
#define glOrthof_ARG_EXPAND_TAIL , GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far
#define forward_glOrthof(_left, _right, _bottom, _top, _near, _far) \
    ({ \
        void *dst = remote_dma(sizeof(glOrthof_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glOrthof(dst, _left, _right, _bottom, _top, _near, _far), NULL); \
    });
#define call_glOrthof(packed, ret_v) do { \
    glOrthof_PACKED *unpacked = (glOrthof_PACKED *)packed; \
    glOrthof_ARGS *args = (glOrthof_ARGS *)&unpacked->args; \
    glOrthof(args->left, args->right, args->bottom, args->top, args->near, args->far);; \
} while(0)
void glOrthof(glOrthof_ARG_EXPAND);
packed_call_t *pack_glOrthof(glOrthof_PACKED *_dst glOrthof_ARG_EXPAND_TAIL);
typedef void (*glOrthof_PTR)(glOrthof_ARG_EXPAND);
#endif
#ifndef glOrthox_RETURN
#define glOrthox_RETURN void
#define glOrthox_ARG_NAMES left, right, bottom, top, near, far
#define glOrthox_ARG_EXPAND GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far
#define glOrthox_ARG_NAMES_TAIL , left, right, bottom, top, near, far
#define glOrthox_ARG_EXPAND_TAIL , GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far
#define forward_glOrthox(_left, _right, _bottom, _top, _near, _far) \
    ({ \
        void *dst = remote_dma(sizeof(glOrthox_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glOrthox(dst, _left, _right, _bottom, _top, _near, _far), NULL); \
    });
#define call_glOrthox(packed, ret_v) do { \
    glOrthox_PACKED *unpacked = (glOrthox_PACKED *)packed; \
    glOrthox_ARGS *args = (glOrthox_ARGS *)&unpacked->args; \
    glOrthox(args->left, args->right, args->bottom, args->top, args->near, args->far);; \
} while(0)
void glOrthox(glOrthox_ARG_EXPAND);
packed_call_t *pack_glOrthox(glOrthox_PACKED *_dst glOrthox_ARG_EXPAND_TAIL);
typedef void (*glOrthox_PTR)(glOrthox_ARG_EXPAND);
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
#ifndef glPointParameterf_RETURN
#define glPointParameterf_RETURN void
#define glPointParameterf_ARG_NAMES pname, param
#define glPointParameterf_ARG_EXPAND GLenum pname, GLfloat param
#define glPointParameterf_ARG_NAMES_TAIL , pname, param
#define glPointParameterf_ARG_EXPAND_TAIL , GLenum pname, GLfloat param
#define forward_glPointParameterf(_pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glPointParameterf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPointParameterf(dst, _pname, _param), NULL); \
    });
#define call_glPointParameterf(packed, ret_v) do { \
    glPointParameterf_PACKED *unpacked = (glPointParameterf_PACKED *)packed; \
    glPointParameterf_ARGS *args = (glPointParameterf_ARGS *)&unpacked->args; \
    glPointParameterf(args->pname, args->param);; \
} while(0)
void glPointParameterf(glPointParameterf_ARG_EXPAND);
packed_call_t *pack_glPointParameterf(glPointParameterf_PACKED *_dst glPointParameterf_ARG_EXPAND_TAIL);
typedef void (*glPointParameterf_PTR)(glPointParameterf_ARG_EXPAND);
#endif
#ifndef glPointParameterfv_RETURN
#define glPointParameterfv_RETURN void
#define glPointParameterfv_ARG_NAMES pname, params
#define glPointParameterfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define glPointParameterfv_ARG_NAMES_TAIL , pname, params
#define glPointParameterfv_ARG_EXPAND_TAIL , GLenum pname, const GLfloat * params
#define forward_glPointParameterfv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glPointParameterfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPointParameterfv(dst, _pname, _params), NULL); \
    });
#define call_glPointParameterfv(packed, ret_v) do { \
    glPointParameterfv_PACKED *unpacked = (glPointParameterfv_PACKED *)packed; \
    glPointParameterfv_ARGS *args = (glPointParameterfv_ARGS *)&unpacked->args; \
    glPointParameterfv(args->pname, args->params);; \
} while(0)
void glPointParameterfv(glPointParameterfv_ARG_EXPAND);
packed_call_t *pack_glPointParameterfv(glPointParameterfv_PACKED *_dst glPointParameterfv_ARG_EXPAND_TAIL);
typedef void (*glPointParameterfv_PTR)(glPointParameterfv_ARG_EXPAND);
#endif
#ifndef glPointParameterx_RETURN
#define glPointParameterx_RETURN void
#define glPointParameterx_ARG_NAMES pname, param
#define glPointParameterx_ARG_EXPAND GLenum pname, GLfixed param
#define glPointParameterx_ARG_NAMES_TAIL , pname, param
#define glPointParameterx_ARG_EXPAND_TAIL , GLenum pname, GLfixed param
#define forward_glPointParameterx(_pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glPointParameterx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPointParameterx(dst, _pname, _param), NULL); \
    });
#define call_glPointParameterx(packed, ret_v) do { \
    glPointParameterx_PACKED *unpacked = (glPointParameterx_PACKED *)packed; \
    glPointParameterx_ARGS *args = (glPointParameterx_ARGS *)&unpacked->args; \
    glPointParameterx(args->pname, args->param);; \
} while(0)
void glPointParameterx(glPointParameterx_ARG_EXPAND);
packed_call_t *pack_glPointParameterx(glPointParameterx_PACKED *_dst glPointParameterx_ARG_EXPAND_TAIL);
typedef void (*glPointParameterx_PTR)(glPointParameterx_ARG_EXPAND);
#endif
#ifndef glPointParameterxv_RETURN
#define glPointParameterxv_RETURN void
#define glPointParameterxv_ARG_NAMES pname, params
#define glPointParameterxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define glPointParameterxv_ARG_NAMES_TAIL , pname, params
#define glPointParameterxv_ARG_EXPAND_TAIL , GLenum pname, const GLfixed * params
#define forward_glPointParameterxv(_pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glPointParameterxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPointParameterxv(dst, _pname, _params), NULL); \
    });
#define call_glPointParameterxv(packed, ret_v) do { \
    glPointParameterxv_PACKED *unpacked = (glPointParameterxv_PACKED *)packed; \
    glPointParameterxv_ARGS *args = (glPointParameterxv_ARGS *)&unpacked->args; \
    glPointParameterxv(args->pname, args->params);; \
} while(0)
void glPointParameterxv(glPointParameterxv_ARG_EXPAND);
packed_call_t *pack_glPointParameterxv(glPointParameterxv_PACKED *_dst glPointParameterxv_ARG_EXPAND_TAIL);
typedef void (*glPointParameterxv_PTR)(glPointParameterxv_ARG_EXPAND);
#endif
#ifndef glPointSize_RETURN
#define glPointSize_RETURN void
#define glPointSize_ARG_NAMES size
#define glPointSize_ARG_EXPAND GLfloat size
#define glPointSize_ARG_NAMES_TAIL , size
#define glPointSize_ARG_EXPAND_TAIL , GLfloat size
#define forward_glPointSize(_size) \
    ({ \
        void *dst = remote_dma(sizeof(glPointSize_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPointSize(dst, _size), NULL); \
    });
#define call_glPointSize(packed, ret_v) do { \
    glPointSize_PACKED *unpacked = (glPointSize_PACKED *)packed; \
    glPointSize_ARGS *args = (glPointSize_ARGS *)&unpacked->args; \
    glPointSize(args->size);; \
} while(0)
void glPointSize(glPointSize_ARG_EXPAND);
packed_call_t *pack_glPointSize(glPointSize_PACKED *_dst glPointSize_ARG_EXPAND_TAIL);
typedef void (*glPointSize_PTR)(glPointSize_ARG_EXPAND);
#endif
#ifndef glPointSizePointerOES_RETURN
#define glPointSizePointerOES_RETURN void
#define glPointSizePointerOES_ARG_NAMES type, stride, pointer
#define glPointSizePointerOES_ARG_EXPAND GLenum type, GLsizei stride, const GLvoid * pointer
#define glPointSizePointerOES_ARG_NAMES_TAIL , type, stride, pointer
#define glPointSizePointerOES_ARG_EXPAND_TAIL , GLenum type, GLsizei stride, const GLvoid * pointer
#define forward_glPointSizePointerOES(_type, _stride, _pointer) \
    ({ \
        void *dst = remote_dma(sizeof(glPointSizePointerOES_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPointSizePointerOES(dst, _type, _stride, _pointer), NULL); \
    });
#define call_glPointSizePointerOES(packed, ret_v) do { \
    glPointSizePointerOES_PACKED *unpacked = (glPointSizePointerOES_PACKED *)packed; \
    glPointSizePointerOES_ARGS *args = (glPointSizePointerOES_ARGS *)&unpacked->args; \
    glPointSizePointerOES(args->type, args->stride, args->pointer);; \
} while(0)
void glPointSizePointerOES(glPointSizePointerOES_ARG_EXPAND);
packed_call_t *pack_glPointSizePointerOES(glPointSizePointerOES_PACKED *_dst glPointSizePointerOES_ARG_EXPAND_TAIL);
typedef void (*glPointSizePointerOES_PTR)(glPointSizePointerOES_ARG_EXPAND);
#endif
#ifndef glPointSizex_RETURN
#define glPointSizex_RETURN void
#define glPointSizex_ARG_NAMES size
#define glPointSizex_ARG_EXPAND GLfixed size
#define glPointSizex_ARG_NAMES_TAIL , size
#define glPointSizex_ARG_EXPAND_TAIL , GLfixed size
#define forward_glPointSizex(_size) \
    ({ \
        void *dst = remote_dma(sizeof(glPointSizex_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPointSizex(dst, _size), NULL); \
    });
#define call_glPointSizex(packed, ret_v) do { \
    glPointSizex_PACKED *unpacked = (glPointSizex_PACKED *)packed; \
    glPointSizex_ARGS *args = (glPointSizex_ARGS *)&unpacked->args; \
    glPointSizex(args->size);; \
} while(0)
void glPointSizex(glPointSizex_ARG_EXPAND);
packed_call_t *pack_glPointSizex(glPointSizex_PACKED *_dst glPointSizex_ARG_EXPAND_TAIL);
typedef void (*glPointSizex_PTR)(glPointSizex_ARG_EXPAND);
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
#ifndef glPolygonOffsetx_RETURN
#define glPolygonOffsetx_RETURN void
#define glPolygonOffsetx_ARG_NAMES factor, units
#define glPolygonOffsetx_ARG_EXPAND GLfixed factor, GLfixed units
#define glPolygonOffsetx_ARG_NAMES_TAIL , factor, units
#define glPolygonOffsetx_ARG_EXPAND_TAIL , GLfixed factor, GLfixed units
#define forward_glPolygonOffsetx(_factor, _units) \
    ({ \
        void *dst = remote_dma(sizeof(glPolygonOffsetx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPolygonOffsetx(dst, _factor, _units), NULL); \
    });
#define call_glPolygonOffsetx(packed, ret_v) do { \
    glPolygonOffsetx_PACKED *unpacked = (glPolygonOffsetx_PACKED *)packed; \
    glPolygonOffsetx_ARGS *args = (glPolygonOffsetx_ARGS *)&unpacked->args; \
    glPolygonOffsetx(args->factor, args->units);; \
} while(0)
void glPolygonOffsetx(glPolygonOffsetx_ARG_EXPAND);
packed_call_t *pack_glPolygonOffsetx(glPolygonOffsetx_PACKED *_dst glPolygonOffsetx_ARG_EXPAND_TAIL);
typedef void (*glPolygonOffsetx_PTR)(glPolygonOffsetx_ARG_EXPAND);
#endif
#ifndef glPopMatrix_RETURN
#define glPopMatrix_RETURN void
#define glPopMatrix_ARG_NAMES 
#define glPopMatrix_ARG_EXPAND 
#define glPopMatrix_ARG_NAMES_TAIL 
#define glPopMatrix_ARG_EXPAND_TAIL 
#define forward_glPopMatrix() \
    ({ \
        void *dst = remote_dma(sizeof(glPopMatrix_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPopMatrix(dst), NULL); \
    });
#define call_glPopMatrix(packed, ret_v) do { \
    glPopMatrix();; \
} while(0)
void glPopMatrix(glPopMatrix_ARG_EXPAND);
packed_call_t *pack_glPopMatrix(glPopMatrix_PACKED *_dst glPopMatrix_ARG_EXPAND_TAIL);
typedef void (*glPopMatrix_PTR)(glPopMatrix_ARG_EXPAND);
#endif
#ifndef glPushMatrix_RETURN
#define glPushMatrix_RETURN void
#define glPushMatrix_ARG_NAMES 
#define glPushMatrix_ARG_EXPAND 
#define glPushMatrix_ARG_NAMES_TAIL 
#define glPushMatrix_ARG_EXPAND_TAIL 
#define forward_glPushMatrix() \
    ({ \
        void *dst = remote_dma(sizeof(glPushMatrix_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glPushMatrix(dst), NULL); \
    });
#define call_glPushMatrix(packed, ret_v) do { \
    glPushMatrix();; \
} while(0)
void glPushMatrix(glPushMatrix_ARG_EXPAND);
packed_call_t *pack_glPushMatrix(glPushMatrix_PACKED *_dst glPushMatrix_ARG_EXPAND_TAIL);
typedef void (*glPushMatrix_PTR)(glPushMatrix_ARG_EXPAND);
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
#ifndef glRotatef_RETURN
#define glRotatef_RETURN void
#define glRotatef_ARG_NAMES angle, x, y, z
#define glRotatef_ARG_EXPAND GLfloat angle, GLfloat x, GLfloat y, GLfloat z
#define glRotatef_ARG_NAMES_TAIL , angle, x, y, z
#define glRotatef_ARG_EXPAND_TAIL , GLfloat angle, GLfloat x, GLfloat y, GLfloat z
#define forward_glRotatef(_angle, _x, _y, _z) \
    ({ \
        void *dst = remote_dma(sizeof(glRotatef_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glRotatef(dst, _angle, _x, _y, _z), NULL); \
    });
#define call_glRotatef(packed, ret_v) do { \
    glRotatef_PACKED *unpacked = (glRotatef_PACKED *)packed; \
    glRotatef_ARGS *args = (glRotatef_ARGS *)&unpacked->args; \
    glRotatef(args->angle, args->x, args->y, args->z);; \
} while(0)
void glRotatef(glRotatef_ARG_EXPAND);
packed_call_t *pack_glRotatef(glRotatef_PACKED *_dst glRotatef_ARG_EXPAND_TAIL);
typedef void (*glRotatef_PTR)(glRotatef_ARG_EXPAND);
#endif
#ifndef glRotatex_RETURN
#define glRotatex_RETURN void
#define glRotatex_ARG_NAMES angle, x, y, z
#define glRotatex_ARG_EXPAND GLfixed angle, GLfixed x, GLfixed y, GLfixed z
#define glRotatex_ARG_NAMES_TAIL , angle, x, y, z
#define glRotatex_ARG_EXPAND_TAIL , GLfixed angle, GLfixed x, GLfixed y, GLfixed z
#define forward_glRotatex(_angle, _x, _y, _z) \
    ({ \
        void *dst = remote_dma(sizeof(glRotatex_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glRotatex(dst, _angle, _x, _y, _z), NULL); \
    });
#define call_glRotatex(packed, ret_v) do { \
    glRotatex_PACKED *unpacked = (glRotatex_PACKED *)packed; \
    glRotatex_ARGS *args = (glRotatex_ARGS *)&unpacked->args; \
    glRotatex(args->angle, args->x, args->y, args->z);; \
} while(0)
void glRotatex(glRotatex_ARG_EXPAND);
packed_call_t *pack_glRotatex(glRotatex_PACKED *_dst glRotatex_ARG_EXPAND_TAIL);
typedef void (*glRotatex_PTR)(glRotatex_ARG_EXPAND);
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
#ifndef glSampleCoveragex_RETURN
#define glSampleCoveragex_RETURN void
#define glSampleCoveragex_ARG_NAMES value, invert
#define glSampleCoveragex_ARG_EXPAND GLclampx value, GLboolean invert
#define glSampleCoveragex_ARG_NAMES_TAIL , value, invert
#define glSampleCoveragex_ARG_EXPAND_TAIL , GLclampx value, GLboolean invert
#define forward_glSampleCoveragex(_value, _invert) \
    ({ \
        void *dst = remote_dma(sizeof(glSampleCoveragex_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glSampleCoveragex(dst, _value, _invert), NULL); \
    });
#define call_glSampleCoveragex(packed, ret_v) do { \
    glSampleCoveragex_PACKED *unpacked = (glSampleCoveragex_PACKED *)packed; \
    glSampleCoveragex_ARGS *args = (glSampleCoveragex_ARGS *)&unpacked->args; \
    glSampleCoveragex(args->value, args->invert);; \
} while(0)
void glSampleCoveragex(glSampleCoveragex_ARG_EXPAND);
packed_call_t *pack_glSampleCoveragex(glSampleCoveragex_PACKED *_dst glSampleCoveragex_ARG_EXPAND_TAIL);
typedef void (*glSampleCoveragex_PTR)(glSampleCoveragex_ARG_EXPAND);
#endif
#ifndef glScalef_RETURN
#define glScalef_RETURN void
#define glScalef_ARG_NAMES x, y, z
#define glScalef_ARG_EXPAND GLfloat x, GLfloat y, GLfloat z
#define glScalef_ARG_NAMES_TAIL , x, y, z
#define glScalef_ARG_EXPAND_TAIL , GLfloat x, GLfloat y, GLfloat z
#define forward_glScalef(_x, _y, _z) \
    ({ \
        void *dst = remote_dma(sizeof(glScalef_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glScalef(dst, _x, _y, _z), NULL); \
    });
#define call_glScalef(packed, ret_v) do { \
    glScalef_PACKED *unpacked = (glScalef_PACKED *)packed; \
    glScalef_ARGS *args = (glScalef_ARGS *)&unpacked->args; \
    glScalef(args->x, args->y, args->z);; \
} while(0)
void glScalef(glScalef_ARG_EXPAND);
packed_call_t *pack_glScalef(glScalef_PACKED *_dst glScalef_ARG_EXPAND_TAIL);
typedef void (*glScalef_PTR)(glScalef_ARG_EXPAND);
#endif
#ifndef glScalex_RETURN
#define glScalex_RETURN void
#define glScalex_ARG_NAMES x, y, z
#define glScalex_ARG_EXPAND GLfixed x, GLfixed y, GLfixed z
#define glScalex_ARG_NAMES_TAIL , x, y, z
#define glScalex_ARG_EXPAND_TAIL , GLfixed x, GLfixed y, GLfixed z
#define forward_glScalex(_x, _y, _z) \
    ({ \
        void *dst = remote_dma(sizeof(glScalex_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glScalex(dst, _x, _y, _z), NULL); \
    });
#define call_glScalex(packed, ret_v) do { \
    glScalex_PACKED *unpacked = (glScalex_PACKED *)packed; \
    glScalex_ARGS *args = (glScalex_ARGS *)&unpacked->args; \
    glScalex(args->x, args->y, args->z);; \
} while(0)
void glScalex(glScalex_ARG_EXPAND);
packed_call_t *pack_glScalex(glScalex_PACKED *_dst glScalex_ARG_EXPAND_TAIL);
typedef void (*glScalex_PTR)(glScalex_ARG_EXPAND);
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
#ifndef glShadeModel_RETURN
#define glShadeModel_RETURN void
#define glShadeModel_ARG_NAMES mode
#define glShadeModel_ARG_EXPAND GLenum mode
#define glShadeModel_ARG_NAMES_TAIL , mode
#define glShadeModel_ARG_EXPAND_TAIL , GLenum mode
#define forward_glShadeModel(_mode) \
    ({ \
        void *dst = remote_dma(sizeof(glShadeModel_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glShadeModel(dst, _mode), NULL); \
    });
#define call_glShadeModel(packed, ret_v) do { \
    glShadeModel_PACKED *unpacked = (glShadeModel_PACKED *)packed; \
    glShadeModel_ARGS *args = (glShadeModel_ARGS *)&unpacked->args; \
    glShadeModel(args->mode);; \
} while(0)
void glShadeModel(glShadeModel_ARG_EXPAND);
packed_call_t *pack_glShadeModel(glShadeModel_PACKED *_dst glShadeModel_ARG_EXPAND_TAIL);
typedef void (*glShadeModel_PTR)(glShadeModel_ARG_EXPAND);
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
#ifndef glTexCoordPointer_RETURN
#define glTexCoordPointer_RETURN void
#define glTexCoordPointer_ARG_NAMES size, type, stride, pointer
#define glTexCoordPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define glTexCoordPointer_ARG_NAMES_TAIL , size, type, stride, pointer
#define glTexCoordPointer_ARG_EXPAND_TAIL , GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define forward_glTexCoordPointer(_size, _type, _stride, _pointer) \
    ({ \
        void *dst = remote_dma(sizeof(glTexCoordPointer_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexCoordPointer(dst, _size, _type, _stride, _pointer), NULL); \
    });
#define call_glTexCoordPointer(packed, ret_v) do { \
    glTexCoordPointer_PACKED *unpacked = (glTexCoordPointer_PACKED *)packed; \
    glTexCoordPointer_ARGS *args = (glTexCoordPointer_ARGS *)&unpacked->args; \
    glTexCoordPointer(args->size, args->type, args->stride, args->pointer);; \
} while(0)
void glTexCoordPointer(glTexCoordPointer_ARG_EXPAND);
packed_call_t *pack_glTexCoordPointer(glTexCoordPointer_PACKED *_dst glTexCoordPointer_ARG_EXPAND_TAIL);
typedef void (*glTexCoordPointer_PTR)(glTexCoordPointer_ARG_EXPAND);
#endif
#ifndef glTexEnvf_RETURN
#define glTexEnvf_RETURN void
#define glTexEnvf_ARG_NAMES target, pname, param
#define glTexEnvf_ARG_EXPAND GLenum target, GLenum pname, GLfloat param
#define glTexEnvf_ARG_NAMES_TAIL , target, pname, param
#define glTexEnvf_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLfloat param
#define forward_glTexEnvf(_target, _pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glTexEnvf_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexEnvf(dst, _target, _pname, _param), NULL); \
    });
#define call_glTexEnvf(packed, ret_v) do { \
    glTexEnvf_PACKED *unpacked = (glTexEnvf_PACKED *)packed; \
    glTexEnvf_ARGS *args = (glTexEnvf_ARGS *)&unpacked->args; \
    glTexEnvf(args->target, args->pname, args->param);; \
} while(0)
void glTexEnvf(glTexEnvf_ARG_EXPAND);
packed_call_t *pack_glTexEnvf(glTexEnvf_PACKED *_dst glTexEnvf_ARG_EXPAND_TAIL);
typedef void (*glTexEnvf_PTR)(glTexEnvf_ARG_EXPAND);
#endif
#ifndef glTexEnvfv_RETURN
#define glTexEnvfv_RETURN void
#define glTexEnvfv_ARG_NAMES target, pname, params
#define glTexEnvfv_ARG_EXPAND GLenum target, GLenum pname, const GLfloat * params
#define glTexEnvfv_ARG_NAMES_TAIL , target, pname, params
#define glTexEnvfv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, const GLfloat * params
#define forward_glTexEnvfv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glTexEnvfv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexEnvfv(dst, _target, _pname, _params), NULL); \
    });
#define call_glTexEnvfv(packed, ret_v) do { \
    glTexEnvfv_PACKED *unpacked = (glTexEnvfv_PACKED *)packed; \
    glTexEnvfv_ARGS *args = (glTexEnvfv_ARGS *)&unpacked->args; \
    glTexEnvfv(args->target, args->pname, args->params);; \
} while(0)
void glTexEnvfv(glTexEnvfv_ARG_EXPAND);
packed_call_t *pack_glTexEnvfv(glTexEnvfv_PACKED *_dst glTexEnvfv_ARG_EXPAND_TAIL);
typedef void (*glTexEnvfv_PTR)(glTexEnvfv_ARG_EXPAND);
#endif
#ifndef glTexEnvi_RETURN
#define glTexEnvi_RETURN void
#define glTexEnvi_ARG_NAMES target, pname, param
#define glTexEnvi_ARG_EXPAND GLenum target, GLenum pname, GLint param
#define glTexEnvi_ARG_NAMES_TAIL , target, pname, param
#define glTexEnvi_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLint param
#define forward_glTexEnvi(_target, _pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glTexEnvi_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexEnvi(dst, _target, _pname, _param), NULL); \
    });
#define call_glTexEnvi(packed, ret_v) do { \
    glTexEnvi_PACKED *unpacked = (glTexEnvi_PACKED *)packed; \
    glTexEnvi_ARGS *args = (glTexEnvi_ARGS *)&unpacked->args; \
    glTexEnvi(args->target, args->pname, args->param);; \
} while(0)
void glTexEnvi(glTexEnvi_ARG_EXPAND);
packed_call_t *pack_glTexEnvi(glTexEnvi_PACKED *_dst glTexEnvi_ARG_EXPAND_TAIL);
typedef void (*glTexEnvi_PTR)(glTexEnvi_ARG_EXPAND);
#endif
#ifndef glTexEnviv_RETURN
#define glTexEnviv_RETURN void
#define glTexEnviv_ARG_NAMES target, pname, params
#define glTexEnviv_ARG_EXPAND GLenum target, GLenum pname, const GLint * params
#define glTexEnviv_ARG_NAMES_TAIL , target, pname, params
#define glTexEnviv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, const GLint * params
#define forward_glTexEnviv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glTexEnviv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexEnviv(dst, _target, _pname, _params), NULL); \
    });
#define call_glTexEnviv(packed, ret_v) do { \
    glTexEnviv_PACKED *unpacked = (glTexEnviv_PACKED *)packed; \
    glTexEnviv_ARGS *args = (glTexEnviv_ARGS *)&unpacked->args; \
    glTexEnviv(args->target, args->pname, args->params);; \
} while(0)
void glTexEnviv(glTexEnviv_ARG_EXPAND);
packed_call_t *pack_glTexEnviv(glTexEnviv_PACKED *_dst glTexEnviv_ARG_EXPAND_TAIL);
typedef void (*glTexEnviv_PTR)(glTexEnviv_ARG_EXPAND);
#endif
#ifndef glTexEnvx_RETURN
#define glTexEnvx_RETURN void
#define glTexEnvx_ARG_NAMES target, pname, param
#define glTexEnvx_ARG_EXPAND GLenum target, GLenum pname, GLfixed param
#define glTexEnvx_ARG_NAMES_TAIL , target, pname, param
#define glTexEnvx_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLfixed param
#define forward_glTexEnvx(_target, _pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glTexEnvx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexEnvx(dst, _target, _pname, _param), NULL); \
    });
#define call_glTexEnvx(packed, ret_v) do { \
    glTexEnvx_PACKED *unpacked = (glTexEnvx_PACKED *)packed; \
    glTexEnvx_ARGS *args = (glTexEnvx_ARGS *)&unpacked->args; \
    glTexEnvx(args->target, args->pname, args->param);; \
} while(0)
void glTexEnvx(glTexEnvx_ARG_EXPAND);
packed_call_t *pack_glTexEnvx(glTexEnvx_PACKED *_dst glTexEnvx_ARG_EXPAND_TAIL);
typedef void (*glTexEnvx_PTR)(glTexEnvx_ARG_EXPAND);
#endif
#ifndef glTexEnvxv_RETURN
#define glTexEnvxv_RETURN void
#define glTexEnvxv_ARG_NAMES target, pname, params
#define glTexEnvxv_ARG_EXPAND GLenum target, GLenum pname, const GLfixed * params
#define glTexEnvxv_ARG_NAMES_TAIL , target, pname, params
#define glTexEnvxv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, const GLfixed * params
#define forward_glTexEnvxv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glTexEnvxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexEnvxv(dst, _target, _pname, _params), NULL); \
    });
#define call_glTexEnvxv(packed, ret_v) do { \
    glTexEnvxv_PACKED *unpacked = (glTexEnvxv_PACKED *)packed; \
    glTexEnvxv_ARGS *args = (glTexEnvxv_ARGS *)&unpacked->args; \
    glTexEnvxv(args->target, args->pname, args->params);; \
} while(0)
void glTexEnvxv(glTexEnvxv_ARG_EXPAND);
packed_call_t *pack_glTexEnvxv(glTexEnvxv_PACKED *_dst glTexEnvxv_ARG_EXPAND_TAIL);
typedef void (*glTexEnvxv_PTR)(glTexEnvxv_ARG_EXPAND);
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
#ifndef glTexParameterx_RETURN
#define glTexParameterx_RETURN void
#define glTexParameterx_ARG_NAMES target, pname, param
#define glTexParameterx_ARG_EXPAND GLenum target, GLenum pname, GLfixed param
#define glTexParameterx_ARG_NAMES_TAIL , target, pname, param
#define glTexParameterx_ARG_EXPAND_TAIL , GLenum target, GLenum pname, GLfixed param
#define forward_glTexParameterx(_target, _pname, _param) \
    ({ \
        void *dst = remote_dma(sizeof(glTexParameterx_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexParameterx(dst, _target, _pname, _param), NULL); \
    });
#define call_glTexParameterx(packed, ret_v) do { \
    glTexParameterx_PACKED *unpacked = (glTexParameterx_PACKED *)packed; \
    glTexParameterx_ARGS *args = (glTexParameterx_ARGS *)&unpacked->args; \
    glTexParameterx(args->target, args->pname, args->param);; \
} while(0)
void glTexParameterx(glTexParameterx_ARG_EXPAND);
packed_call_t *pack_glTexParameterx(glTexParameterx_PACKED *_dst glTexParameterx_ARG_EXPAND_TAIL);
typedef void (*glTexParameterx_PTR)(glTexParameterx_ARG_EXPAND);
#endif
#ifndef glTexParameterxv_RETURN
#define glTexParameterxv_RETURN void
#define glTexParameterxv_ARG_NAMES target, pname, params
#define glTexParameterxv_ARG_EXPAND GLenum target, GLenum pname, const GLfixed * params
#define glTexParameterxv_ARG_NAMES_TAIL , target, pname, params
#define glTexParameterxv_ARG_EXPAND_TAIL , GLenum target, GLenum pname, const GLfixed * params
#define forward_glTexParameterxv(_target, _pname, _params) \
    ({ \
        void *dst = remote_dma(sizeof(glTexParameterxv_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTexParameterxv(dst, _target, _pname, _params), NULL); \
    });
#define call_glTexParameterxv(packed, ret_v) do { \
    glTexParameterxv_PACKED *unpacked = (glTexParameterxv_PACKED *)packed; \
    glTexParameterxv_ARGS *args = (glTexParameterxv_ARGS *)&unpacked->args; \
    glTexParameterxv(args->target, args->pname, args->params);; \
} while(0)
void glTexParameterxv(glTexParameterxv_ARG_EXPAND);
packed_call_t *pack_glTexParameterxv(glTexParameterxv_PACKED *_dst glTexParameterxv_ARG_EXPAND_TAIL);
typedef void (*glTexParameterxv_PTR)(glTexParameterxv_ARG_EXPAND);
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
#ifndef glTranslatef_RETURN
#define glTranslatef_RETURN void
#define glTranslatef_ARG_NAMES x, y, z
#define glTranslatef_ARG_EXPAND GLfloat x, GLfloat y, GLfloat z
#define glTranslatef_ARG_NAMES_TAIL , x, y, z
#define glTranslatef_ARG_EXPAND_TAIL , GLfloat x, GLfloat y, GLfloat z
#define forward_glTranslatef(_x, _y, _z) \
    ({ \
        void *dst = remote_dma(sizeof(glTranslatef_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTranslatef(dst, _x, _y, _z), NULL); \
    });
#define call_glTranslatef(packed, ret_v) do { \
    glTranslatef_PACKED *unpacked = (glTranslatef_PACKED *)packed; \
    glTranslatef_ARGS *args = (glTranslatef_ARGS *)&unpacked->args; \
    glTranslatef(args->x, args->y, args->z);; \
} while(0)
void glTranslatef(glTranslatef_ARG_EXPAND);
packed_call_t *pack_glTranslatef(glTranslatef_PACKED *_dst glTranslatef_ARG_EXPAND_TAIL);
typedef void (*glTranslatef_PTR)(glTranslatef_ARG_EXPAND);
#endif
#ifndef glTranslatex_RETURN
#define glTranslatex_RETURN void
#define glTranslatex_ARG_NAMES x, y, z
#define glTranslatex_ARG_EXPAND GLfixed x, GLfixed y, GLfixed z
#define glTranslatex_ARG_NAMES_TAIL , x, y, z
#define glTranslatex_ARG_EXPAND_TAIL , GLfixed x, GLfixed y, GLfixed z
#define forward_glTranslatex(_x, _y, _z) \
    ({ \
        void *dst = remote_dma(sizeof(glTranslatex_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glTranslatex(dst, _x, _y, _z), NULL); \
    });
#define call_glTranslatex(packed, ret_v) do { \
    glTranslatex_PACKED *unpacked = (glTranslatex_PACKED *)packed; \
    glTranslatex_ARGS *args = (glTranslatex_ARGS *)&unpacked->args; \
    glTranslatex(args->x, args->y, args->z);; \
} while(0)
void glTranslatex(glTranslatex_ARG_EXPAND);
packed_call_t *pack_glTranslatex(glTranslatex_PACKED *_dst glTranslatex_ARG_EXPAND_TAIL);
typedef void (*glTranslatex_PTR)(glTranslatex_ARG_EXPAND);
#endif
#ifndef glVertexPointer_RETURN
#define glVertexPointer_RETURN void
#define glVertexPointer_ARG_NAMES size, type, stride, pointer
#define glVertexPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define glVertexPointer_ARG_NAMES_TAIL , size, type, stride, pointer
#define glVertexPointer_ARG_EXPAND_TAIL , GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define forward_glVertexPointer(_size, _type, _stride, _pointer) \
    ({ \
        void *dst = remote_dma(sizeof(glVertexPointer_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glVertexPointer(dst, _size, _type, _stride, _pointer), NULL); \
    });
#define call_glVertexPointer(packed, ret_v) do { \
    glVertexPointer_PACKED *unpacked = (glVertexPointer_PACKED *)packed; \
    glVertexPointer_ARGS *args = (glVertexPointer_ARGS *)&unpacked->args; \
    glVertexPointer(args->size, args->type, args->stride, args->pointer);; \
} while(0)
void glVertexPointer(glVertexPointer_ARG_EXPAND);
packed_call_t *pack_glVertexPointer(glVertexPointer_PACKED *_dst glVertexPointer_ARG_EXPAND_TAIL);
typedef void (*glVertexPointer_PTR)(glVertexPointer_ARG_EXPAND);
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

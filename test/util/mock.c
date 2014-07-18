#include "mock.h"

#include <stdio.h>
#include "tack.h"

static tack_t mock = {0};

const char *mock_name(int func) {
    switch (func) {
        case glActiveTexture_INDEX: return "glActiveTexture";
        case glAlphaFunc_INDEX: return "glAlphaFunc";
        case glAlphaFuncx_INDEX: return "glAlphaFuncx";
        case glBindBuffer_INDEX: return "glBindBuffer";
        case glBindTexture_INDEX: return "glBindTexture";
        case glBlendFunc_INDEX: return "glBlendFunc";
        case glBufferData_INDEX: return "glBufferData";
        case glBufferSubData_INDEX: return "glBufferSubData";
        case glClear_INDEX: return "glClear";
        case glClearColor_INDEX: return "glClearColor";
        case glClearColorx_INDEX: return "glClearColorx";
        case glClearDepthf_INDEX: return "glClearDepthf";
        case glClearDepthx_INDEX: return "glClearDepthx";
        case glClearStencil_INDEX: return "glClearStencil";
        case glClientActiveTexture_INDEX: return "glClientActiveTexture";
        case glClipPlanef_INDEX: return "glClipPlanef";
        case glClipPlanex_INDEX: return "glClipPlanex";
        case glColor4f_INDEX: return "glColor4f";
        case glColor4ub_INDEX: return "glColor4ub";
        case glColor4x_INDEX: return "glColor4x";
        case glColorMask_INDEX: return "glColorMask";
        case glColorPointer_INDEX: return "glColorPointer";
        case glCompressedTexImage2D_INDEX: return "glCompressedTexImage2D";
        case glCompressedTexSubImage2D_INDEX: return "glCompressedTexSubImage2D";
        case glCopyTexImage2D_INDEX: return "glCopyTexImage2D";
        case glCopyTexSubImage2D_INDEX: return "glCopyTexSubImage2D";
        case glCullFace_INDEX: return "glCullFace";
        case glDeleteBuffers_INDEX: return "glDeleteBuffers";
        case glDeleteTextures_INDEX: return "glDeleteTextures";
        case glDepthFunc_INDEX: return "glDepthFunc";
        case glDepthMask_INDEX: return "glDepthMask";
        case glDepthRangef_INDEX: return "glDepthRangef";
        case glDepthRangex_INDEX: return "glDepthRangex";
        case glDisable_INDEX: return "glDisable";
        case glDisableClientState_INDEX: return "glDisableClientState";
        case glDrawArrays_INDEX: return "glDrawArrays";
        case glDrawElements_INDEX: return "glDrawElements";
        case glEnable_INDEX: return "glEnable";
        case glEnableClientState_INDEX: return "glEnableClientState";
        case glFinish_INDEX: return "glFinish";
        case glFlush_INDEX: return "glFlush";
        case glFogf_INDEX: return "glFogf";
        case glFogfv_INDEX: return "glFogfv";
        case glFogx_INDEX: return "glFogx";
        case glFogxv_INDEX: return "glFogxv";
        case glFrontFace_INDEX: return "glFrontFace";
        case glFrustumf_INDEX: return "glFrustumf";
        case glFrustumx_INDEX: return "glFrustumx";
        case glGenBuffers_INDEX: return "glGenBuffers";
        case glGenTextures_INDEX: return "glGenTextures";
        case glGetBooleanv_INDEX: return "glGetBooleanv";
        case glGetBufferParameteriv_INDEX: return "glGetBufferParameteriv";
        case glGetClipPlanef_INDEX: return "glGetClipPlanef";
        case glGetClipPlanex_INDEX: return "glGetClipPlanex";
        case glGetError_INDEX: return "glGetError";
        case glGetFixedv_INDEX: return "glGetFixedv";
        case glGetFloatv_INDEX: return "glGetFloatv";
        case glGetIntegerv_INDEX: return "glGetIntegerv";
        case glGetLightfv_INDEX: return "glGetLightfv";
        case glGetLightxv_INDEX: return "glGetLightxv";
        case glGetMaterialfv_INDEX: return "glGetMaterialfv";
        case glGetMaterialxv_INDEX: return "glGetMaterialxv";
        case glGetPointerv_INDEX: return "glGetPointerv";
        case glGetString_INDEX: return "glGetString";
        case glGetTexEnvfv_INDEX: return "glGetTexEnvfv";
        case glGetTexEnviv_INDEX: return "glGetTexEnviv";
        case glGetTexEnvxv_INDEX: return "glGetTexEnvxv";
        case glGetTexParameterfv_INDEX: return "glGetTexParameterfv";
        case glGetTexParameteriv_INDEX: return "glGetTexParameteriv";
        case glGetTexParameterxv_INDEX: return "glGetTexParameterxv";
        case glHint_INDEX: return "glHint";
        case glIsBuffer_INDEX: return "glIsBuffer";
        case glIsEnabled_INDEX: return "glIsEnabled";
        case glIsTexture_INDEX: return "glIsTexture";
        case glLightModelf_INDEX: return "glLightModelf";
        case glLightModelfv_INDEX: return "glLightModelfv";
        case glLightModelx_INDEX: return "glLightModelx";
        case glLightModelxv_INDEX: return "glLightModelxv";
        case glLightf_INDEX: return "glLightf";
        case glLightfv_INDEX: return "glLightfv";
        case glLightx_INDEX: return "glLightx";
        case glLightxv_INDEX: return "glLightxv";
        case glLineWidth_INDEX: return "glLineWidth";
        case glLineWidthx_INDEX: return "glLineWidthx";
        case glLoadIdentity_INDEX: return "glLoadIdentity";
        case glLoadMatrixf_INDEX: return "glLoadMatrixf";
        case glLoadMatrixx_INDEX: return "glLoadMatrixx";
        case glLogicOp_INDEX: return "glLogicOp";
        case glMaterialf_INDEX: return "glMaterialf";
        case glMaterialfv_INDEX: return "glMaterialfv";
        case glMaterialx_INDEX: return "glMaterialx";
        case glMaterialxv_INDEX: return "glMaterialxv";
        case glMatrixMode_INDEX: return "glMatrixMode";
        case glMultMatrixf_INDEX: return "glMultMatrixf";
        case glMultMatrixx_INDEX: return "glMultMatrixx";
        case glMultiTexCoord4f_INDEX: return "glMultiTexCoord4f";
        case glMultiTexCoord4x_INDEX: return "glMultiTexCoord4x";
        case glNormal3f_INDEX: return "glNormal3f";
        case glNormal3x_INDEX: return "glNormal3x";
        case glNormalPointer_INDEX: return "glNormalPointer";
        case glOrthof_INDEX: return "glOrthof";
        case glOrthox_INDEX: return "glOrthox";
        case glPixelStorei_INDEX: return "glPixelStorei";
        case glPointParameterf_INDEX: return "glPointParameterf";
        case glPointParameterfv_INDEX: return "glPointParameterfv";
        case glPointParameterx_INDEX: return "glPointParameterx";
        case glPointParameterxv_INDEX: return "glPointParameterxv";
        case glPointSize_INDEX: return "glPointSize";
        case glPointSizePointerOES_INDEX: return "glPointSizePointerOES";
        case glPointSizex_INDEX: return "glPointSizex";
        case glPolygonOffset_INDEX: return "glPolygonOffset";
        case glPolygonOffsetx_INDEX: return "glPolygonOffsetx";
        case glPopMatrix_INDEX: return "glPopMatrix";
        case glPushMatrix_INDEX: return "glPushMatrix";
        case glReadPixels_INDEX: return "glReadPixels";
        case glRotatef_INDEX: return "glRotatef";
        case glRotatex_INDEX: return "glRotatex";
        case glSampleCoverage_INDEX: return "glSampleCoverage";
        case glSampleCoveragex_INDEX: return "glSampleCoveragex";
        case glScalef_INDEX: return "glScalef";
        case glScalex_INDEX: return "glScalex";
        case glScissor_INDEX: return "glScissor";
        case glShadeModel_INDEX: return "glShadeModel";
        case glStencilFunc_INDEX: return "glStencilFunc";
        case glStencilMask_INDEX: return "glStencilMask";
        case glStencilOp_INDEX: return "glStencilOp";
        case glTexCoordPointer_INDEX: return "glTexCoordPointer";
        case glTexEnvf_INDEX: return "glTexEnvf";
        case glTexEnvfv_INDEX: return "glTexEnvfv";
        case glTexEnvi_INDEX: return "glTexEnvi";
        case glTexEnviv_INDEX: return "glTexEnviv";
        case glTexEnvx_INDEX: return "glTexEnvx";
        case glTexEnvxv_INDEX: return "glTexEnvxv";
        case glTexImage2D_INDEX: return "glTexImage2D";
        case glTexParameterf_INDEX: return "glTexParameterf";
        case glTexParameterfv_INDEX: return "glTexParameterfv";
        case glTexParameteri_INDEX: return "glTexParameteri";
        case glTexParameteriv_INDEX: return "glTexParameteriv";
        case glTexParameterx_INDEX: return "glTexParameterx";
        case glTexParameterxv_INDEX: return "glTexParameterxv";
        case glTexSubImage2D_INDEX: return "glTexSubImage2D";
        case glTranslatef_INDEX: return "glTranslatef";
        case glTranslatex_INDEX: return "glTranslatex";
        case glVertexPointer_INDEX: return "glVertexPointer";
        case glViewport_INDEX: return "glViewport";
    }
}

void mock_print(const indexed_call_t *packed) {
    if (packed == NULL) {
        printf("NULL()\n");
        return;
    }
    switch (packed->func) {
        case glActiveTexture_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glActiveTexture(0x%04X);\n", args.a1);
            break;
        }
        case glAlphaFunc_INDEX: {
            INDEXED_void_GLenum_GLclampf *unpacked = (INDEXED_void_GLenum_GLclampf *)packed;
            ARGS_void_GLenum_GLclampf args = unpacked->args;
            printf("glAlphaFunc(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glAlphaFuncx_INDEX: {
            INDEXED_void_GLenum_GLclampx *unpacked = (INDEXED_void_GLenum_GLclampx *)packed;
            ARGS_void_GLenum_GLclampx args = unpacked->args;
            printf("glAlphaFuncx(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glBindBuffer_INDEX: {
            INDEXED_void_GLenum_GLuint *unpacked = (INDEXED_void_GLenum_GLuint *)packed;
            ARGS_void_GLenum_GLuint args = unpacked->args;
            printf("glBindBuffer(0x%04X, %u);\n", args.a1, args.a2);
            break;
        }
        case glBindTexture_INDEX: {
            INDEXED_void_GLenum_GLuint *unpacked = (INDEXED_void_GLenum_GLuint *)packed;
            ARGS_void_GLenum_GLuint args = unpacked->args;
            printf("glBindTexture(0x%04X, %u);\n", args.a1, args.a2);
            break;
        }
        case glBlendFunc_INDEX: {
            INDEXED_void_GLenum_GLenum *unpacked = (INDEXED_void_GLenum_GLenum *)packed;
            ARGS_void_GLenum_GLenum args = unpacked->args;
            printf("glBlendFunc(0x%04X, 0x%04X);\n", args.a1, args.a2);
            break;
        }
        case glBufferData_INDEX: {
            INDEXED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum *unpacked = (INDEXED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum *)packed;
            ARGS_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum args = unpacked->args;
            printf("glBufferData(0x%04X, %d, %p, 0x%04X);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glBufferSubData_INDEX: {
            INDEXED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glBufferSubData(0x%04X, %d, %d, %p);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glClear_INDEX: {
            INDEXED_void_GLbitfield *unpacked = (INDEXED_void_GLbitfield *)packed;
            ARGS_void_GLbitfield args = unpacked->args;
            printf("glClear(%d);\n", args.a1);
            break;
        }
        case glClearColor_INDEX: {
            INDEXED_void_GLclampf_GLclampf_GLclampf_GLclampf *unpacked = (INDEXED_void_GLclampf_GLclampf_GLclampf_GLclampf *)packed;
            ARGS_void_GLclampf_GLclampf_GLclampf_GLclampf args = unpacked->args;
            printf("glClearColor(%p, %p, %p, %p);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glClearColorx_INDEX: {
            INDEXED_void_GLclampx_GLclampx_GLclampx_GLclampx *unpacked = (INDEXED_void_GLclampx_GLclampx_GLclampx_GLclampx *)packed;
            ARGS_void_GLclampx_GLclampx_GLclampx_GLclampx args = unpacked->args;
            printf("glClearColorx(%p, %p, %p, %p);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glClearDepthf_INDEX: {
            INDEXED_void_GLclampf *unpacked = (INDEXED_void_GLclampf *)packed;
            ARGS_void_GLclampf args = unpacked->args;
            printf("glClearDepthf(%p);\n", args.a1);
            break;
        }
        case glClearDepthx_INDEX: {
            INDEXED_void_GLclampx *unpacked = (INDEXED_void_GLclampx *)packed;
            ARGS_void_GLclampx args = unpacked->args;
            printf("glClearDepthx(%p);\n", args.a1);
            break;
        }
        case glClearStencil_INDEX: {
            INDEXED_void_GLint *unpacked = (INDEXED_void_GLint *)packed;
            ARGS_void_GLint args = unpacked->args;
            printf("glClearStencil(%d);\n", args.a1);
            break;
        }
        case glClientActiveTexture_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glClientActiveTexture(0x%04X);\n", args.a1);
            break;
        }
        case glClipPlanef_INDEX: {
            INDEXED_void_GLenum_const_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            printf("glClipPlanef(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glClipPlanex_INDEX: {
            INDEXED_void_GLenum_const_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            printf("glClipPlanex(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glColor4f_INDEX: {
            INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            printf("glColor4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glColor4ub_INDEX: {
            INDEXED_void_GLubyte_GLubyte_GLubyte_GLubyte *unpacked = (INDEXED_void_GLubyte_GLubyte_GLubyte_GLubyte *)packed;
            ARGS_void_GLubyte_GLubyte_GLubyte_GLubyte args = unpacked->args;
            printf("glColor4ub(%c, %c, %c, %c);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glColor4x_INDEX: {
            INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed *unpacked = (INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed args = unpacked->args;
            printf("glColor4x(%p, %p, %p, %p);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glColorMask_INDEX: {
            INDEXED_void_GLboolean_GLboolean_GLboolean_GLboolean *unpacked = (INDEXED_void_GLboolean_GLboolean_GLboolean_GLboolean *)packed;
            ARGS_void_GLboolean_GLboolean_GLboolean_GLboolean args = unpacked->args;
            printf("glColorMask(%d, %d, %d, %d);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glColorPointer_INDEX: {
            INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glColorPointer(%d, 0x%04X, %d, %p);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glCompressedTexImage2D_INDEX: {
            INDEXED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glCompressedTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %p);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case glCompressedTexSubImage2D_INDEX: {
            INDEXED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glCompressedTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, %d, %p);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case glCopyTexImage2D_INDEX: {
            INDEXED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint *unpacked = (INDEXED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint *)packed;
            ARGS_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint args = unpacked->args;
            printf("glCopyTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %d);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case glCopyTexSubImage2D_INDEX: {
            INDEXED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *unpacked = (INDEXED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            printf("glCopyTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, %d, %d);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8);
            break;
        }
        case glCullFace_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glCullFace(0x%04X);\n", args.a1);
            break;
        }
        case glDeleteBuffers_INDEX: {
            INDEXED_void_GLsizei_const_GLuint___GENPT__ *unpacked = (INDEXED_void_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            printf("glDeleteBuffers(%d, %p);\n", args.a1, args.a2);
            break;
        }
        case glDeleteTextures_INDEX: {
            INDEXED_void_GLsizei_const_GLuint___GENPT__ *unpacked = (INDEXED_void_GLsizei_const_GLuint___GENPT__ *)packed;
            ARGS_void_GLsizei_const_GLuint___GENPT__ args = unpacked->args;
            printf("glDeleteTextures(%d, %p);\n", args.a1, args.a2);
            break;
        }
        case glDepthFunc_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glDepthFunc(0x%04X);\n", args.a1);
            break;
        }
        case glDepthMask_INDEX: {
            INDEXED_void_GLboolean *unpacked = (INDEXED_void_GLboolean *)packed;
            ARGS_void_GLboolean args = unpacked->args;
            printf("glDepthMask(%d);\n", args.a1);
            break;
        }
        case glDepthRangef_INDEX: {
            INDEXED_void_GLclampf_GLclampf *unpacked = (INDEXED_void_GLclampf_GLclampf *)packed;
            ARGS_void_GLclampf_GLclampf args = unpacked->args;
            printf("glDepthRangef(%p, %p);\n", args.a1, args.a2);
            break;
        }
        case glDepthRangex_INDEX: {
            INDEXED_void_GLclampx_GLclampx *unpacked = (INDEXED_void_GLclampx_GLclampx *)packed;
            ARGS_void_GLclampx_GLclampx args = unpacked->args;
            printf("glDepthRangex(%p, %p);\n", args.a1, args.a2);
            break;
        }
        case glDisable_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glDisable(0x%04X);\n", args.a1);
            break;
        }
        case glDisableClientState_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glDisableClientState(0x%04X);\n", args.a1);
            break;
        }
        case glDrawArrays_INDEX: {
            INDEXED_void_GLenum_GLint_GLsizei *unpacked = (INDEXED_void_GLenum_GLint_GLsizei *)packed;
            ARGS_void_GLenum_GLint_GLsizei args = unpacked->args;
            printf("glDrawArrays(0x%04X, %d, %d);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glDrawElements_INDEX: {
            INDEXED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glDrawElements(0x%04X, %d, 0x%04X, %p);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glEnable_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glEnable(0x%04X);\n", args.a1);
            break;
        }
        case glEnableClientState_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glEnableClientState(0x%04X);\n", args.a1);
            break;
        }
        case glFinish_INDEX: {
            INDEXED_void *unpacked = (INDEXED_void *)packed;
            printf("glFinish();\n");
            break;
        }
        case glFlush_INDEX: {
            INDEXED_void *unpacked = (INDEXED_void *)packed;
            printf("glFlush();\n");
            break;
        }
        case glFogf_INDEX: {
            INDEXED_void_GLenum_GLfloat *unpacked = (INDEXED_void_GLenum_GLfloat *)packed;
            ARGS_void_GLenum_GLfloat args = unpacked->args;
            printf("glFogf(0x%04X, %0.2f);\n", args.a1, args.a2);
            break;
        }
        case glFogfv_INDEX: {
            INDEXED_void_GLenum_const_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            printf("glFogfv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glFogx_INDEX: {
            INDEXED_void_GLenum_GLfixed *unpacked = (INDEXED_void_GLenum_GLfixed *)packed;
            ARGS_void_GLenum_GLfixed args = unpacked->args;
            printf("glFogx(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glFogxv_INDEX: {
            INDEXED_void_GLenum_const_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            printf("glFogxv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glFrontFace_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glFrontFace(0x%04X);\n", args.a1);
            break;
        }
        case glFrustumf_INDEX: {
            INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            printf("glFrustumf(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case glFrustumx_INDEX: {
            INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed *unpacked = (INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed args = unpacked->args;
            printf("glFrustumx(%p, %p, %p, %p, %p, %p);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case glGenBuffers_INDEX: {
            INDEXED_void_GLsizei_GLuint___GENPT__ *unpacked = (INDEXED_void_GLsizei_GLuint___GENPT__ *)packed;
            ARGS_void_GLsizei_GLuint___GENPT__ args = unpacked->args;
            printf("glGenBuffers(%d, %p);\n", args.a1, args.a2);
            break;
        }
        case glGenTextures_INDEX: {
            INDEXED_void_GLsizei_GLuint___GENPT__ *unpacked = (INDEXED_void_GLsizei_GLuint___GENPT__ *)packed;
            ARGS_void_GLsizei_GLuint___GENPT__ args = unpacked->args;
            printf("glGenTextures(%d, %p);\n", args.a1, args.a2);
            break;
        }
        case glGetBooleanv_INDEX: {
            INDEXED_void_GLenum_GLboolean___GENPT__ *unpacked = (INDEXED_void_GLenum_GLboolean___GENPT__ *)packed;
            ARGS_void_GLenum_GLboolean___GENPT__ args = unpacked->args;
            printf("glGetBooleanv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glGetBufferParameteriv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLint___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint___GENPT__ args = unpacked->args;
            printf("glGetBufferParameteriv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glGetClipPlanef_INDEX: {
            INDEXED_void_GLenum_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLfloat___GENPT__ args = unpacked->args;
            printf("glGetClipPlanef(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glGetClipPlanex_INDEX: {
            INDEXED_void_GLenum_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLfixed___GENPT__ args = unpacked->args;
            printf("glGetClipPlanex(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glGetError_INDEX: {
            INDEXED_GLenum *unpacked = (INDEXED_GLenum *)packed;
            printf("glGetError();\n");
            break;
        }
        case glGetFixedv_INDEX: {
            INDEXED_void_GLenum_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLfixed___GENPT__ args = unpacked->args;
            printf("glGetFixedv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glGetFloatv_INDEX: {
            INDEXED_void_GLenum_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLfloat___GENPT__ args = unpacked->args;
            printf("glGetFloatv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glGetIntegerv_INDEX: {
            INDEXED_void_GLenum_GLint___GENPT__ *unpacked = (INDEXED_void_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLint___GENPT__ args = unpacked->args;
            printf("glGetIntegerv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glGetLightfv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLfloat___GENPT__ args = unpacked->args;
            printf("glGetLightfv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glGetLightxv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLfixed___GENPT__ args = unpacked->args;
            printf("glGetLightxv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glGetMaterialfv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLfloat___GENPT__ args = unpacked->args;
            printf("glGetMaterialfv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glGetMaterialxv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLfixed___GENPT__ args = unpacked->args;
            printf("glGetMaterialxv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glGetPointerv_INDEX: {
            INDEXED_void_GLenum_GLvoid___GENPT____GENPT__ *unpacked = (INDEXED_void_GLenum_GLvoid___GENPT____GENPT__ *)packed;
            ARGS_void_GLenum_GLvoid___GENPT____GENPT__ args = unpacked->args;
            printf("glGetPointerv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glGetString_INDEX: {
            INDEXED_const_GLubyte___GENPT___GLenum *unpacked = (INDEXED_const_GLubyte___GENPT___GLenum *)packed;
            ARGS_const_GLubyte___GENPT___GLenum args = unpacked->args;
            printf("glGetString(0x%04X);\n", args.a1);
            break;
        }
        case glGetTexEnvfv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLfloat___GENPT__ args = unpacked->args;
            printf("glGetTexEnvfv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glGetTexEnviv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLint___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint___GENPT__ args = unpacked->args;
            printf("glGetTexEnviv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glGetTexEnvxv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLfixed___GENPT__ args = unpacked->args;
            printf("glGetTexEnvxv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glGetTexParameterfv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLfloat___GENPT__ args = unpacked->args;
            printf("glGetTexParameterfv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glGetTexParameteriv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLint___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLint___GENPT__ args = unpacked->args;
            printf("glGetTexParameteriv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glGetTexParameterxv_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_GLfixed___GENPT__ args = unpacked->args;
            printf("glGetTexParameterxv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glHint_INDEX: {
            INDEXED_void_GLenum_GLenum *unpacked = (INDEXED_void_GLenum_GLenum *)packed;
            ARGS_void_GLenum_GLenum args = unpacked->args;
            printf("glHint(0x%04X, 0x%04X);\n", args.a1, args.a2);
            break;
        }
        case glIsBuffer_INDEX: {
            INDEXED_GLboolean_GLuint *unpacked = (INDEXED_GLboolean_GLuint *)packed;
            ARGS_GLboolean_GLuint args = unpacked->args;
            printf("glIsBuffer(%u);\n", args.a1);
            break;
        }
        case glIsEnabled_INDEX: {
            INDEXED_GLboolean_GLenum *unpacked = (INDEXED_GLboolean_GLenum *)packed;
            ARGS_GLboolean_GLenum args = unpacked->args;
            printf("glIsEnabled(0x%04X);\n", args.a1);
            break;
        }
        case glIsTexture_INDEX: {
            INDEXED_GLboolean_GLuint *unpacked = (INDEXED_GLboolean_GLuint *)packed;
            ARGS_GLboolean_GLuint args = unpacked->args;
            printf("glIsTexture(%u);\n", args.a1);
            break;
        }
        case glLightModelf_INDEX: {
            INDEXED_void_GLenum_GLfloat *unpacked = (INDEXED_void_GLenum_GLfloat *)packed;
            ARGS_void_GLenum_GLfloat args = unpacked->args;
            printf("glLightModelf(0x%04X, %0.2f);\n", args.a1, args.a2);
            break;
        }
        case glLightModelfv_INDEX: {
            INDEXED_void_GLenum_const_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            printf("glLightModelfv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glLightModelx_INDEX: {
            INDEXED_void_GLenum_GLfixed *unpacked = (INDEXED_void_GLenum_GLfixed *)packed;
            ARGS_void_GLenum_GLfixed args = unpacked->args;
            printf("glLightModelx(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glLightModelxv_INDEX: {
            INDEXED_void_GLenum_const_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            printf("glLightModelxv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glLightf_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfloat *unpacked = (INDEXED_void_GLenum_GLenum_GLfloat *)packed;
            ARGS_void_GLenum_GLenum_GLfloat args = unpacked->args;
            printf("glLightf(0x%04X, 0x%04X, %0.2f);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glLightfv_INDEX: {
            INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            printf("glLightfv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glLightx_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfixed *unpacked = (INDEXED_void_GLenum_GLenum_GLfixed *)packed;
            ARGS_void_GLenum_GLenum_GLfixed args = unpacked->args;
            printf("glLightx(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glLightxv_INDEX: {
            INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            printf("glLightxv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glLineWidth_INDEX: {
            INDEXED_void_GLfloat *unpacked = (INDEXED_void_GLfloat *)packed;
            ARGS_void_GLfloat args = unpacked->args;
            printf("glLineWidth(%0.2f);\n", args.a1);
            break;
        }
        case glLineWidthx_INDEX: {
            INDEXED_void_GLfixed *unpacked = (INDEXED_void_GLfixed *)packed;
            ARGS_void_GLfixed args = unpacked->args;
            printf("glLineWidthx(%p);\n", args.a1);
            break;
        }
        case glLoadIdentity_INDEX: {
            INDEXED_void *unpacked = (INDEXED_void *)packed;
            printf("glLoadIdentity();\n");
            break;
        }
        case glLoadMatrixf_INDEX: {
            INDEXED_void_const_GLfloat___GENPT__ *unpacked = (INDEXED_void_const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLfloat___GENPT__ args = unpacked->args;
            printf("glLoadMatrixf(%p);\n", args.a1);
            break;
        }
        case glLoadMatrixx_INDEX: {
            INDEXED_void_const_GLfixed___GENPT__ *unpacked = (INDEXED_void_const_GLfixed___GENPT__ *)packed;
            ARGS_void_const_GLfixed___GENPT__ args = unpacked->args;
            printf("glLoadMatrixx(%p);\n", args.a1);
            break;
        }
        case glLogicOp_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glLogicOp(0x%04X);\n", args.a1);
            break;
        }
        case glMaterialf_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfloat *unpacked = (INDEXED_void_GLenum_GLenum_GLfloat *)packed;
            ARGS_void_GLenum_GLenum_GLfloat args = unpacked->args;
            printf("glMaterialf(0x%04X, 0x%04X, %0.2f);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glMaterialfv_INDEX: {
            INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            printf("glMaterialfv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glMaterialx_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfixed *unpacked = (INDEXED_void_GLenum_GLenum_GLfixed *)packed;
            ARGS_void_GLenum_GLenum_GLfixed args = unpacked->args;
            printf("glMaterialx(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glMaterialxv_INDEX: {
            INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            printf("glMaterialxv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glMatrixMode_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glMatrixMode(0x%04X);\n", args.a1);
            break;
        }
        case glMultMatrixf_INDEX: {
            INDEXED_void_const_GLfloat___GENPT__ *unpacked = (INDEXED_void_const_GLfloat___GENPT__ *)packed;
            ARGS_void_const_GLfloat___GENPT__ args = unpacked->args;
            printf("glMultMatrixf(%p);\n", args.a1);
            break;
        }
        case glMultMatrixx_INDEX: {
            INDEXED_void_const_GLfixed___GENPT__ *unpacked = (INDEXED_void_const_GLfixed___GENPT__ *)packed;
            ARGS_void_const_GLfixed___GENPT__ args = unpacked->args;
            printf("glMultMatrixx(%p);\n", args.a1);
            break;
        }
        case glMultiTexCoord4f_INDEX: {
            INDEXED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (INDEXED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            printf("glMultiTexCoord4f(0x%04X, %0.2f, %0.2f, %0.2f, %0.2f);\n", args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case glMultiTexCoord4x_INDEX: {
            INDEXED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed *unpacked = (INDEXED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed args = unpacked->args;
            printf("glMultiTexCoord4x(0x%04X, %p, %p, %p, %p);\n", args.a1, args.a2, args.a3, args.a4, args.a5);
            break;
        }
        case glNormal3f_INDEX: {
            INDEXED_void_GLfloat_GLfloat_GLfloat *unpacked = (INDEXED_void_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat args = unpacked->args;
            printf("glNormal3f(%0.2f, %0.2f, %0.2f);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glNormal3x_INDEX: {
            INDEXED_void_GLfixed_GLfixed_GLfixed *unpacked = (INDEXED_void_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed_GLfixed args = unpacked->args;
            printf("glNormal3x(%p, %p, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glNormalPointer_INDEX: {
            INDEXED_void_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glNormalPointer(0x%04X, %d, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glOrthof_INDEX: {
            INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            printf("glOrthof(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case glOrthox_INDEX: {
            INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed *unpacked = (INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed args = unpacked->args;
            printf("glOrthox(%p, %p, %p, %p, %p, %p);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6);
            break;
        }
        case glPixelStorei_INDEX: {
            INDEXED_void_GLenum_GLint *unpacked = (INDEXED_void_GLenum_GLint *)packed;
            ARGS_void_GLenum_GLint args = unpacked->args;
            printf("glPixelStorei(0x%04X, %d);\n", args.a1, args.a2);
            break;
        }
        case glPointParameterf_INDEX: {
            INDEXED_void_GLenum_GLfloat *unpacked = (INDEXED_void_GLenum_GLfloat *)packed;
            ARGS_void_GLenum_GLfloat args = unpacked->args;
            printf("glPointParameterf(0x%04X, %0.2f);\n", args.a1, args.a2);
            break;
        }
        case glPointParameterfv_INDEX: {
            INDEXED_void_GLenum_const_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            printf("glPointParameterfv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glPointParameterx_INDEX: {
            INDEXED_void_GLenum_GLfixed *unpacked = (INDEXED_void_GLenum_GLfixed *)packed;
            ARGS_void_GLenum_GLfixed args = unpacked->args;
            printf("glPointParameterx(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glPointParameterxv_INDEX: {
            INDEXED_void_GLenum_const_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            printf("glPointParameterxv(0x%04X, %p);\n", args.a1, args.a2);
            break;
        }
        case glPointSize_INDEX: {
            INDEXED_void_GLfloat *unpacked = (INDEXED_void_GLfloat *)packed;
            ARGS_void_GLfloat args = unpacked->args;
            printf("glPointSize(%0.2f);\n", args.a1);
            break;
        }
        case glPointSizePointerOES_INDEX: {
            INDEXED_void_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glPointSizePointerOES(0x%04X, %d, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glPointSizex_INDEX: {
            INDEXED_void_GLfixed *unpacked = (INDEXED_void_GLfixed *)packed;
            ARGS_void_GLfixed args = unpacked->args;
            printf("glPointSizex(%p);\n", args.a1);
            break;
        }
        case glPolygonOffset_INDEX: {
            INDEXED_void_GLfloat_GLfloat *unpacked = (INDEXED_void_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat args = unpacked->args;
            printf("glPolygonOffset(%0.2f, %0.2f);\n", args.a1, args.a2);
            break;
        }
        case glPolygonOffsetx_INDEX: {
            INDEXED_void_GLfixed_GLfixed *unpacked = (INDEXED_void_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed args = unpacked->args;
            printf("glPolygonOffsetx(%p, %p);\n", args.a1, args.a2);
            break;
        }
        case glPopMatrix_INDEX: {
            INDEXED_void *unpacked = (INDEXED_void *)packed;
            printf("glPopMatrix();\n");
            break;
        }
        case glPushMatrix_INDEX: {
            INDEXED_void *unpacked = (INDEXED_void *)packed;
            printf("glPushMatrix();\n");
            break;
        }
        case glReadPixels_INDEX: {
            INDEXED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ *)packed;
            ARGS_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__ args = unpacked->args;
            printf("glReadPixels(%d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7);
            break;
        }
        case glRotatef_INDEX: {
            INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat *unpacked = (INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat_GLfloat args = unpacked->args;
            printf("glRotatef(%0.2f, %0.2f, %0.2f, %0.2f);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glRotatex_INDEX: {
            INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed *unpacked = (INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed_GLfixed_GLfixed args = unpacked->args;
            printf("glRotatex(%p, %p, %p, %p);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glSampleCoverage_INDEX: {
            INDEXED_void_GLclampf_GLboolean *unpacked = (INDEXED_void_GLclampf_GLboolean *)packed;
            ARGS_void_GLclampf_GLboolean args = unpacked->args;
            printf("glSampleCoverage(%p, %d);\n", args.a1, args.a2);
            break;
        }
        case glSampleCoveragex_INDEX: {
            INDEXED_void_GLclampx_GLboolean *unpacked = (INDEXED_void_GLclampx_GLboolean *)packed;
            ARGS_void_GLclampx_GLboolean args = unpacked->args;
            printf("glSampleCoveragex(%p, %d);\n", args.a1, args.a2);
            break;
        }
        case glScalef_INDEX: {
            INDEXED_void_GLfloat_GLfloat_GLfloat *unpacked = (INDEXED_void_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat args = unpacked->args;
            printf("glScalef(%0.2f, %0.2f, %0.2f);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glScalex_INDEX: {
            INDEXED_void_GLfixed_GLfixed_GLfixed *unpacked = (INDEXED_void_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed_GLfixed args = unpacked->args;
            printf("glScalex(%p, %p, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glScissor_INDEX: {
            INDEXED_void_GLint_GLint_GLsizei_GLsizei *unpacked = (INDEXED_void_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            printf("glScissor(%d, %d, %d, %d);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glShadeModel_INDEX: {
            INDEXED_void_GLenum *unpacked = (INDEXED_void_GLenum *)packed;
            ARGS_void_GLenum args = unpacked->args;
            printf("glShadeModel(0x%04X);\n", args.a1);
            break;
        }
        case glStencilFunc_INDEX: {
            INDEXED_void_GLenum_GLint_GLuint *unpacked = (INDEXED_void_GLenum_GLint_GLuint *)packed;
            ARGS_void_GLenum_GLint_GLuint args = unpacked->args;
            printf("glStencilFunc(0x%04X, %d, %u);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glStencilMask_INDEX: {
            INDEXED_void_GLuint *unpacked = (INDEXED_void_GLuint *)packed;
            ARGS_void_GLuint args = unpacked->args;
            printf("glStencilMask(%u);\n", args.a1);
            break;
        }
        case glStencilOp_INDEX: {
            INDEXED_void_GLenum_GLenum_GLenum *unpacked = (INDEXED_void_GLenum_GLenum_GLenum *)packed;
            ARGS_void_GLenum_GLenum_GLenum args = unpacked->args;
            printf("glStencilOp(0x%04X, 0x%04X, 0x%04X);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexCoordPointer_INDEX: {
            INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glTexCoordPointer(%d, 0x%04X, %d, %p);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glTexEnvf_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfloat *unpacked = (INDEXED_void_GLenum_GLenum_GLfloat *)packed;
            ARGS_void_GLenum_GLenum_GLfloat args = unpacked->args;
            printf("glTexEnvf(0x%04X, 0x%04X, %0.2f);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexEnvfv_INDEX: {
            INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            printf("glTexEnvfv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexEnvi_INDEX: {
            INDEXED_void_GLenum_GLenum_GLint *unpacked = (INDEXED_void_GLenum_GLenum_GLint *)packed;
            ARGS_void_GLenum_GLenum_GLint args = unpacked->args;
            printf("glTexEnvi(0x%04X, 0x%04X, %d);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexEnviv_INDEX: {
            INDEXED_void_GLenum_GLenum_const_GLint___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_const_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLint___GENPT__ args = unpacked->args;
            printf("glTexEnviv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexEnvx_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfixed *unpacked = (INDEXED_void_GLenum_GLenum_GLfixed *)packed;
            ARGS_void_GLenum_GLenum_GLfixed args = unpacked->args;
            printf("glTexEnvx(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexEnvxv_INDEX: {
            INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            printf("glTexEnvxv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexImage2D_INDEX: {
            INDEXED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glTexImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case glTexParameterf_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfloat *unpacked = (INDEXED_void_GLenum_GLenum_GLfloat *)packed;
            ARGS_void_GLenum_GLenum_GLfloat args = unpacked->args;
            printf("glTexParameterf(0x%04X, 0x%04X, %0.2f);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexParameterfv_INDEX: {
            INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLfloat___GENPT__ args = unpacked->args;
            printf("glTexParameterfv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexParameteri_INDEX: {
            INDEXED_void_GLenum_GLenum_GLint *unpacked = (INDEXED_void_GLenum_GLenum_GLint *)packed;
            ARGS_void_GLenum_GLenum_GLint args = unpacked->args;
            printf("glTexParameteri(0x%04X, 0x%04X, %d);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexParameteriv_INDEX: {
            INDEXED_void_GLenum_GLenum_const_GLint___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_const_GLint___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLint___GENPT__ args = unpacked->args;
            printf("glTexParameteriv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexParameterx_INDEX: {
            INDEXED_void_GLenum_GLenum_GLfixed *unpacked = (INDEXED_void_GLenum_GLenum_GLfixed *)packed;
            ARGS_void_GLenum_GLenum_GLfixed args = unpacked->args;
            printf("glTexParameterx(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexParameterxv_INDEX: {
            INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__ *unpacked = (INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__ *)packed;
            ARGS_void_GLenum_GLenum_const_GLfixed___GENPT__ args = unpacked->args;
            printf("glTexParameterxv(0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTexSubImage2D_INDEX: {
            INDEXED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", args.a1, args.a2, args.a3, args.a4, args.a5, args.a6, args.a7, args.a8, args.a9);
            break;
        }
        case glTranslatef_INDEX: {
            INDEXED_void_GLfloat_GLfloat_GLfloat *unpacked = (INDEXED_void_GLfloat_GLfloat_GLfloat *)packed;
            ARGS_void_GLfloat_GLfloat_GLfloat args = unpacked->args;
            printf("glTranslatef(%0.2f, %0.2f, %0.2f);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glTranslatex_INDEX: {
            INDEXED_void_GLfixed_GLfixed_GLfixed *unpacked = (INDEXED_void_GLfixed_GLfixed_GLfixed *)packed;
            ARGS_void_GLfixed_GLfixed_GLfixed args = unpacked->args;
            printf("glTranslatex(%p, %p, %p);\n", args.a1, args.a2, args.a3);
            break;
        }
        case glVertexPointer_INDEX: {
            INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *unpacked = (INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ *)packed;
            ARGS_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__ args = unpacked->args;
            printf("glVertexPointer(%d, 0x%04X, %d, %p);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
        case glViewport_INDEX: {
            INDEXED_void_GLint_GLint_GLsizei_GLsizei *unpacked = (INDEXED_void_GLint_GLint_GLsizei_GLsizei *)packed;
            ARGS_void_GLint_GLint_GLsizei_GLsizei args = unpacked->args;
            printf("glViewport(%d, %d, %d, %d);\n", args.a1, args.a2, args.a3, args.a4);
            break;
        }
    }
}

void *mock_get(int idx) {
    return tack_get(&mock, idx);
}

void *mock_peek() {
    return tack_peek(&mock);
}

void *mock_cur() {
    return tack_cur(&mock);
}

void *mock_shift() {
    return tack_shift(&mock);
}

void *mock_slide(int func) {
    if (mock.pos >= mock.len) {
        return NULL;
    }
    indexed_call_t **stack = (indexed_call_t **)mock.data;
    for (int i = mock.pos; i < mock.len; i++) {
        if (stack[i]->func == func) {
            mock.pos = i + 1;
            return stack[i];
        }
    }
    return NULL;
}

void mock_push(void *call) {
    tack_push(&mock, call);
}

void *mock_pop() {
    return tack_pop(&mock);
}

void gles_glActiveTexture(GLenum texture) {
    emit_glActiveTexture(texture);
}
void gles_glAlphaFunc(GLenum func, GLclampf ref) {
    emit_glAlphaFunc(func, ref);
}
void gles_glAlphaFuncx(GLenum func, GLclampx ref) {
    emit_glAlphaFuncx(func, ref);
}
void gles_glBindBuffer(GLenum target, GLuint buffer) {
    emit_glBindBuffer(target, buffer);
}
void gles_glBindTexture(GLenum target, GLuint texture) {
    emit_glBindTexture(target, texture);
}
void gles_glBlendFunc(GLenum sfactor, GLenum dfactor) {
    emit_glBlendFunc(sfactor, dfactor);
}
void gles_glBufferData(GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage) {
    emit_glBufferData(target, size, data, usage);
}
void gles_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data) {
    emit_glBufferSubData(target, offset, size, data);
}
void gles_glClear(GLbitfield mask) {
    emit_glClear(mask);
}
void gles_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    emit_glClearColor(red, green, blue, alpha);
}
void gles_glClearColorx(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha) {
    emit_glClearColorx(red, green, blue, alpha);
}
void gles_glClearDepthf(GLclampf depth) {
    emit_glClearDepthf(depth);
}
void gles_glClearDepthx(GLclampx depth) {
    emit_glClearDepthx(depth);
}
void gles_glClearStencil(GLint s) {
    emit_glClearStencil(s);
}
void gles_glClientActiveTexture(GLenum texture) {
    emit_glClientActiveTexture(texture);
}
void gles_glClipPlanef(GLenum plane, const GLfloat * equation) {
    emit_glClipPlanef(plane, equation);
}
void gles_glClipPlanex(GLenum plane, const GLfixed * equation) {
    emit_glClipPlanex(plane, equation);
}
void gles_glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    emit_glColor4f(red, green, blue, alpha);
}
void gles_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) {
    emit_glColor4ub(red, green, blue, alpha);
}
void gles_glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
    emit_glColor4x(red, green, blue, alpha);
}
void gles_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
    emit_glColorMask(red, green, blue, alpha);
}
void gles_glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    emit_glColorPointer(size, type, stride, pointer);
}
void gles_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data) {
    emit_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}
void gles_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data) {
    emit_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}
void gles_glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
    emit_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}
void gles_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
    emit_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}
void gles_glCullFace(GLenum mode) {
    emit_glCullFace(mode);
}
void gles_glDeleteBuffers(GLsizei n, const GLuint * buffers) {
    emit_glDeleteBuffers(n, buffers);
}
void gles_glDeleteTextures(GLsizei n, const GLuint * textures) {
    emit_glDeleteTextures(n, textures);
}
void gles_glDepthFunc(GLenum func) {
    emit_glDepthFunc(func);
}
void gles_glDepthMask(GLboolean flag) {
    emit_glDepthMask(flag);
}
void gles_glDepthRangef(GLclampf near, GLclampf far) {
    emit_glDepthRangef(near, far);
}
void gles_glDepthRangex(GLclampx near, GLclampx far) {
    emit_glDepthRangex(near, far);
}
void gles_glDisable(GLenum cap) {
    emit_glDisable(cap);
}
void gles_glDisableClientState(GLenum array) {
    emit_glDisableClientState(array);
}
void gles_glDrawArrays(GLenum mode, GLint first, GLsizei count) {
    emit_glDrawArrays(mode, first, count);
}
void gles_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices) {
    emit_glDrawElements(mode, count, type, indices);
}
void gles_glEnable(GLenum cap) {
    emit_glEnable(cap);
}
void gles_glEnableClientState(GLenum array) {
    emit_glEnableClientState(array);
}
void gles_glFinish() {
    emit_glFinish();
}
void gles_glFlush() {
    emit_glFlush();
}
void gles_glFogf(GLenum pname, GLfloat param) {
    emit_glFogf(pname, param);
}
void gles_glFogfv(GLenum pname, const GLfloat * params) {
    emit_glFogfv(pname, params);
}
void gles_glFogx(GLenum pname, GLfixed param) {
    emit_glFogx(pname, param);
}
void gles_glFogxv(GLenum pname, const GLfixed * params) {
    emit_glFogxv(pname, params);
}
void gles_glFrontFace(GLenum mode) {
    emit_glFrontFace(mode);
}
void gles_glFrustumf(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far) {
    emit_glFrustumf(left, right, bottom, top, near, far);
}
void gles_glFrustumx(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far) {
    emit_glFrustumx(left, right, bottom, top, near, far);
}
void gles_glGenBuffers(GLsizei n, GLuint * buffers) {
    emit_glGenBuffers(n, buffers);
}
void gles_glGenTextures(GLsizei n, GLuint * textures) {
    emit_glGenTextures(n, textures);
}
void gles_glGetBooleanv(GLenum pname, GLboolean * params) {
    emit_glGetBooleanv(pname, params);
}
void gles_glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params) {
    emit_glGetBufferParameteriv(target, pname, params);
}
void gles_glGetClipPlanef(GLenum plane, GLfloat * equation) {
    emit_glGetClipPlanef(plane, equation);
}
void gles_glGetClipPlanex(GLenum plane, GLfixed * equation) {
    emit_glGetClipPlanex(plane, equation);
}
GLenum gles_glGetError() {
    emit_glGetError();
    return (GLenum)0;
}
void gles_glGetFixedv(GLenum pname, GLfixed * params) {
    emit_glGetFixedv(pname, params);
}
void gles_glGetFloatv(GLenum pname, GLfloat * params) {
    emit_glGetFloatv(pname, params);
}
void gles_glGetIntegerv(GLenum pname, GLint * params) {
    emit_glGetIntegerv(pname, params);
}
void gles_glGetLightfv(GLenum light, GLenum pname, GLfloat * params) {
    emit_glGetLightfv(light, pname, params);
}
void gles_glGetLightxv(GLenum light, GLenum pname, GLfixed * params) {
    emit_glGetLightxv(light, pname, params);
}
void gles_glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params) {
    emit_glGetMaterialfv(face, pname, params);
}
void gles_glGetMaterialxv(GLenum face, GLenum pname, GLfixed * params) {
    emit_glGetMaterialxv(face, pname, params);
}
void gles_glGetPointerv(GLenum pname, GLvoid ** params) {
    emit_glGetPointerv(pname, params);
}
const GLubyte * gles_glGetString(GLenum name) {
    emit_glGetString(name);
    return (const GLubyte *)0;
}
void gles_glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params) {
    emit_glGetTexEnvfv(target, pname, params);
}
void gles_glGetTexEnviv(GLenum target, GLenum pname, GLint * params) {
    emit_glGetTexEnviv(target, pname, params);
}
void gles_glGetTexEnvxv(GLenum target, GLenum pname, GLfixed * params) {
    emit_glGetTexEnvxv(target, pname, params);
}
void gles_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params) {
    emit_glGetTexParameterfv(target, pname, params);
}
void gles_glGetTexParameteriv(GLenum target, GLenum pname, GLint * params) {
    emit_glGetTexParameteriv(target, pname, params);
}
void gles_glGetTexParameterxv(GLenum target, GLenum pname, GLfixed * params) {
    emit_glGetTexParameterxv(target, pname, params);
}
void gles_glHint(GLenum target, GLenum mode) {
    emit_glHint(target, mode);
}
GLboolean gles_glIsBuffer(GLuint buffer) {
    emit_glIsBuffer(buffer);
    return (GLboolean)0;
}
GLboolean gles_glIsEnabled(GLenum cap) {
    emit_glIsEnabled(cap);
    return (GLboolean)0;
}
GLboolean gles_glIsTexture(GLuint texture) {
    emit_glIsTexture(texture);
    return (GLboolean)0;
}
void gles_glLightModelf(GLenum pname, GLfloat param) {
    emit_glLightModelf(pname, param);
}
void gles_glLightModelfv(GLenum pname, const GLfloat * params) {
    emit_glLightModelfv(pname, params);
}
void gles_glLightModelx(GLenum pname, GLfixed param) {
    emit_glLightModelx(pname, param);
}
void gles_glLightModelxv(GLenum pname, const GLfixed * params) {
    emit_glLightModelxv(pname, params);
}
void gles_glLightf(GLenum light, GLenum pname, GLfloat param) {
    emit_glLightf(light, pname, param);
}
void gles_glLightfv(GLenum light, GLenum pname, const GLfloat * params) {
    emit_glLightfv(light, pname, params);
}
void gles_glLightx(GLenum light, GLenum pname, GLfixed param) {
    emit_glLightx(light, pname, param);
}
void gles_glLightxv(GLenum light, GLenum pname, const GLfixed * params) {
    emit_glLightxv(light, pname, params);
}
void gles_glLineWidth(GLfloat width) {
    emit_glLineWidth(width);
}
void gles_glLineWidthx(GLfixed width) {
    emit_glLineWidthx(width);
}
void gles_glLoadIdentity() {
    emit_glLoadIdentity();
}
void gles_glLoadMatrixf(const GLfloat * m) {
    emit_glLoadMatrixf(m);
}
void gles_glLoadMatrixx(const GLfixed * m) {
    emit_glLoadMatrixx(m);
}
void gles_glLogicOp(GLenum opcode) {
    emit_glLogicOp(opcode);
}
void gles_glMaterialf(GLenum face, GLenum pname, GLfloat param) {
    emit_glMaterialf(face, pname, param);
}
void gles_glMaterialfv(GLenum face, GLenum pname, const GLfloat * params) {
    emit_glMaterialfv(face, pname, params);
}
void gles_glMaterialx(GLenum face, GLenum pname, GLfixed param) {
    emit_glMaterialx(face, pname, param);
}
void gles_glMaterialxv(GLenum face, GLenum pname, const GLfixed * params) {
    emit_glMaterialxv(face, pname, params);
}
void gles_glMatrixMode(GLenum mode) {
    emit_glMatrixMode(mode);
}
void gles_glMultMatrixf(const GLfloat * m) {
    emit_glMultMatrixf(m);
}
void gles_glMultMatrixx(const GLfixed * m) {
    emit_glMultMatrixx(m);
}
void gles_glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
    emit_glMultiTexCoord4f(target, s, t, r, q);
}
void gles_glMultiTexCoord4x(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q) {
    emit_glMultiTexCoord4x(target, s, t, r, q);
}
void gles_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz) {
    emit_glNormal3f(nx, ny, nz);
}
void gles_glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz) {
    emit_glNormal3x(nx, ny, nz);
}
void gles_glNormalPointer(GLenum type, GLsizei stride, const GLvoid * pointer) {
    emit_glNormalPointer(type, stride, pointer);
}
void gles_glOrthof(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far) {
    emit_glOrthof(left, right, bottom, top, near, far);
}
void gles_glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far) {
    emit_glOrthox(left, right, bottom, top, near, far);
}
void gles_glPixelStorei(GLenum pname, GLint param) {
    emit_glPixelStorei(pname, param);
}
void gles_glPointParameterf(GLenum pname, GLfloat param) {
    emit_glPointParameterf(pname, param);
}
void gles_glPointParameterfv(GLenum pname, const GLfloat * params) {
    emit_glPointParameterfv(pname, params);
}
void gles_glPointParameterx(GLenum pname, GLfixed param) {
    emit_glPointParameterx(pname, param);
}
void gles_glPointParameterxv(GLenum pname, const GLfixed * params) {
    emit_glPointParameterxv(pname, params);
}
void gles_glPointSize(GLfloat size) {
    emit_glPointSize(size);
}
void gles_glPointSizePointerOES(GLenum type, GLsizei stride, const GLvoid * pointer) {
    emit_glPointSizePointerOES(type, stride, pointer);
}
void gles_glPointSizex(GLfixed size) {
    emit_glPointSizex(size);
}
void gles_glPolygonOffset(GLfloat factor, GLfloat units) {
    emit_glPolygonOffset(factor, units);
}
void gles_glPolygonOffsetx(GLfixed factor, GLfixed units) {
    emit_glPolygonOffsetx(factor, units);
}
void gles_glPopMatrix() {
    emit_glPopMatrix();
}
void gles_glPushMatrix() {
    emit_glPushMatrix();
}
void gles_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels) {
    emit_glReadPixels(x, y, width, height, format, type, pixels);
}
void gles_glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    emit_glRotatef(angle, x, y, z);
}
void gles_glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z) {
    emit_glRotatex(angle, x, y, z);
}
void gles_glSampleCoverage(GLclampf value, GLboolean invert) {
    emit_glSampleCoverage(value, invert);
}
void gles_glSampleCoveragex(GLclampx value, GLboolean invert) {
    emit_glSampleCoveragex(value, invert);
}
void gles_glScalef(GLfloat x, GLfloat y, GLfloat z) {
    emit_glScalef(x, y, z);
}
void gles_glScalex(GLfixed x, GLfixed y, GLfixed z) {
    emit_glScalex(x, y, z);
}
void gles_glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
    emit_glScissor(x, y, width, height);
}
void gles_glShadeModel(GLenum mode) {
    emit_glShadeModel(mode);
}
void gles_glStencilFunc(GLenum func, GLint ref, GLuint mask) {
    emit_glStencilFunc(func, ref, mask);
}
void gles_glStencilMask(GLuint mask) {
    emit_glStencilMask(mask);
}
void gles_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) {
    emit_glStencilOp(fail, zfail, zpass);
}
void gles_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    emit_glTexCoordPointer(size, type, stride, pointer);
}
void gles_glTexEnvf(GLenum target, GLenum pname, GLfloat param) {
    emit_glTexEnvf(target, pname, param);
}
void gles_glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params) {
    emit_glTexEnvfv(target, pname, params);
}
void gles_glTexEnvi(GLenum target, GLenum pname, GLint param) {
    emit_glTexEnvi(target, pname, param);
}
void gles_glTexEnviv(GLenum target, GLenum pname, const GLint * params) {
    emit_glTexEnviv(target, pname, params);
}
void gles_glTexEnvx(GLenum target, GLenum pname, GLfixed param) {
    emit_glTexEnvx(target, pname, param);
}
void gles_glTexEnvxv(GLenum target, GLenum pname, const GLfixed * params) {
    emit_glTexEnvxv(target, pname, params);
}
void gles_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels) {
    emit_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}
void gles_glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
    emit_glTexParameterf(target, pname, param);
}
void gles_glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params) {
    emit_glTexParameterfv(target, pname, params);
}
void gles_glTexParameteri(GLenum target, GLenum pname, GLint param) {
    emit_glTexParameteri(target, pname, param);
}
void gles_glTexParameteriv(GLenum target, GLenum pname, const GLint * params) {
    emit_glTexParameteriv(target, pname, params);
}
void gles_glTexParameterx(GLenum target, GLenum pname, GLfixed param) {
    emit_glTexParameterx(target, pname, param);
}
void gles_glTexParameterxv(GLenum target, GLenum pname, const GLfixed * params) {
    emit_glTexParameterxv(target, pname, params);
}
void gles_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) {
    emit_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}
void gles_glTranslatef(GLfloat x, GLfloat y, GLfloat z) {
    emit_glTranslatef(x, y, z);
}
void gles_glTranslatex(GLfixed x, GLfixed y, GLfixed z) {
    emit_glTranslatex(x, y, z);
}
void gles_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    emit_glVertexPointer(size, type, stride, pointer);
}
void gles_glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
    emit_glViewport(x, y, width, height);
}

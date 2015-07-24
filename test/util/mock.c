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
        case glBlendColorOES_INDEX: return "glBlendColorOES";
        case glBlendEquationOES_INDEX: return "glBlendEquationOES";
        case glBlendEquationSeparateOES_INDEX: return "glBlendEquationSeparateOES";
        case glBlendFunc_INDEX: return "glBlendFunc";
        case glBlendFuncSeparateOES_INDEX: return "glBlendFuncSeparateOES";
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

void mock_print(const packed_call_t *packed) {
    if (packed == NULL) {
        printf("NULL()\n");
        return;
    }
    switch (packed->index) {
        case glActiveTexture_INDEX: {
            PACKED_glActiveTexture *unpacked = (PACKED_glActiveTexture *)packed;
            printf("glActiveTexture(0x%04X);\n", unpacked->args.texture);
            break;
        }
        case glAlphaFunc_INDEX: {
            PACKED_glAlphaFunc *unpacked = (PACKED_glAlphaFunc *)packed;
            printf("glAlphaFunc(0x%04X, %p);\n", unpacked->args.func, unpacked->args.ref);
            break;
        }
        case glAlphaFuncx_INDEX: {
            PACKED_glAlphaFuncx *unpacked = (PACKED_glAlphaFuncx *)packed;
            printf("glAlphaFuncx(0x%04X, %p);\n", unpacked->args.func, unpacked->args.ref);
            break;
        }
        case glBindBuffer_INDEX: {
            PACKED_glBindBuffer *unpacked = (PACKED_glBindBuffer *)packed;
            printf("glBindBuffer(0x%04X, %u);\n", unpacked->args.target, unpacked->args.buffer);
            break;
        }
        case glBindTexture_INDEX: {
            PACKED_glBindTexture *unpacked = (PACKED_glBindTexture *)packed;
            printf("glBindTexture(0x%04X, %u);\n", unpacked->args.target, unpacked->args.texture);
            break;
        }
        case glBlendColorOES_INDEX: {
            PACKED_glBlendColorOES *unpacked = (PACKED_glBlendColorOES *)packed;
            printf("glBlendColorOES(%p, %p, %p, %p);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glBlendEquationOES_INDEX: {
            PACKED_glBlendEquationOES *unpacked = (PACKED_glBlendEquationOES *)packed;
            printf("glBlendEquationOES(0x%04X);\n", unpacked->args.mode);
            break;
        }
        case glBlendEquationSeparateOES_INDEX: {
            PACKED_glBlendEquationSeparateOES *unpacked = (PACKED_glBlendEquationSeparateOES *)packed;
            printf("glBlendEquationSeparateOES(0x%04X, 0x%04X);\n", unpacked->args.modeRGB, unpacked->args.modeAlpha);
            break;
        }
        case glBlendFunc_INDEX: {
            PACKED_glBlendFunc *unpacked = (PACKED_glBlendFunc *)packed;
            printf("glBlendFunc(0x%04X, 0x%04X);\n", unpacked->args.sfactor, unpacked->args.dfactor);
            break;
        }
        case glBlendFuncSeparateOES_INDEX: {
            PACKED_glBlendFuncSeparateOES *unpacked = (PACKED_glBlendFuncSeparateOES *)packed;
            printf("glBlendFuncSeparateOES(0x%04X, 0x%04X, 0x%04X, 0x%04X);\n", unpacked->args.sfactorRGB, unpacked->args.dfactorRGB, unpacked->args.sfactorAlpha, unpacked->args.dfactorAlpha);
            break;
        }
        case glBufferData_INDEX: {
            PACKED_glBufferData *unpacked = (PACKED_glBufferData *)packed;
            printf("glBufferData(0x%04X, %d, %p, 0x%04X);\n", unpacked->args.target, unpacked->args.size, unpacked->args.data, unpacked->args.usage);
            break;
        }
        case glBufferSubData_INDEX: {
            PACKED_glBufferSubData *unpacked = (PACKED_glBufferSubData *)packed;
            printf("glBufferSubData(0x%04X, %d, %d, %p);\n", unpacked->args.target, unpacked->args.offset, unpacked->args.size, unpacked->args.data);
            break;
        }
        case glClear_INDEX: {
            PACKED_glClear *unpacked = (PACKED_glClear *)packed;
            printf("glClear(%d);\n", unpacked->args.mask);
            break;
        }
        case glClearColor_INDEX: {
            PACKED_glClearColor *unpacked = (PACKED_glClearColor *)packed;
            printf("glClearColor(%p, %p, %p, %p);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glClearColorx_INDEX: {
            PACKED_glClearColorx *unpacked = (PACKED_glClearColorx *)packed;
            printf("glClearColorx(%p, %p, %p, %p);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glClearDepthf_INDEX: {
            PACKED_glClearDepthf *unpacked = (PACKED_glClearDepthf *)packed;
            printf("glClearDepthf(%p);\n", unpacked->args.depth);
            break;
        }
        case glClearDepthx_INDEX: {
            PACKED_glClearDepthx *unpacked = (PACKED_glClearDepthx *)packed;
            printf("glClearDepthx(%p);\n", unpacked->args.depth);
            break;
        }
        case glClearStencil_INDEX: {
            PACKED_glClearStencil *unpacked = (PACKED_glClearStencil *)packed;
            printf("glClearStencil(%d);\n", unpacked->args.s);
            break;
        }
        case glClientActiveTexture_INDEX: {
            PACKED_glClientActiveTexture *unpacked = (PACKED_glClientActiveTexture *)packed;
            printf("glClientActiveTexture(0x%04X);\n", unpacked->args.texture);
            break;
        }
        case glClipPlanef_INDEX: {
            PACKED_glClipPlanef *unpacked = (PACKED_glClipPlanef *)packed;
            printf("glClipPlanef(0x%04X, %p);\n", unpacked->args.plane, unpacked->args.equation);
            break;
        }
        case glClipPlanex_INDEX: {
            PACKED_glClipPlanex *unpacked = (PACKED_glClipPlanex *)packed;
            printf("glClipPlanex(0x%04X, %p);\n", unpacked->args.plane, unpacked->args.equation);
            break;
        }
        case glColor4f_INDEX: {
            PACKED_glColor4f *unpacked = (PACKED_glColor4f *)packed;
            printf("glColor4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glColor4ub_INDEX: {
            PACKED_glColor4ub *unpacked = (PACKED_glColor4ub *)packed;
            printf("glColor4ub(%c, %c, %c, %c);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glColor4x_INDEX: {
            PACKED_glColor4x *unpacked = (PACKED_glColor4x *)packed;
            printf("glColor4x(%p, %p, %p, %p);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glColorMask_INDEX: {
            PACKED_glColorMask *unpacked = (PACKED_glColorMask *)packed;
            printf("glColorMask(%d, %d, %d, %d);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glColorPointer_INDEX: {
            PACKED_glColorPointer *unpacked = (PACKED_glColorPointer *)packed;
            printf("glColorPointer(%d, 0x%04X, %d, %p);\n", unpacked->args.size, unpacked->args.type, unpacked->args.stride, unpacked->args.pointer);
            break;
        }
        case glCompressedTexImage2D_INDEX: {
            PACKED_glCompressedTexImage2D *unpacked = (PACKED_glCompressedTexImage2D *)packed;
            printf("glCompressedTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %p);\n", unpacked->args.target, unpacked->args.level, unpacked->args.internalformat, unpacked->args.width, unpacked->args.height, unpacked->args.border, unpacked->args.imageSize, unpacked->args.data);
            break;
        }
        case glCompressedTexSubImage2D_INDEX: {
            PACKED_glCompressedTexSubImage2D *unpacked = (PACKED_glCompressedTexSubImage2D *)packed;
            printf("glCompressedTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, %d, %p);\n", unpacked->args.target, unpacked->args.level, unpacked->args.xoffset, unpacked->args.yoffset, unpacked->args.width, unpacked->args.height, unpacked->args.format, unpacked->args.imageSize, unpacked->args.data);
            break;
        }
        case glCopyTexImage2D_INDEX: {
            PACKED_glCopyTexImage2D *unpacked = (PACKED_glCopyTexImage2D *)packed;
            printf("glCopyTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %d);\n", unpacked->args.target, unpacked->args.level, unpacked->args.internalformat, unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height, unpacked->args.border);
            break;
        }
        case glCopyTexSubImage2D_INDEX: {
            PACKED_glCopyTexSubImage2D *unpacked = (PACKED_glCopyTexSubImage2D *)packed;
            printf("glCopyTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, %d, %d);\n", unpacked->args.target, unpacked->args.level, unpacked->args.xoffset, unpacked->args.yoffset, unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height);
            break;
        }
        case glCullFace_INDEX: {
            PACKED_glCullFace *unpacked = (PACKED_glCullFace *)packed;
            printf("glCullFace(0x%04X);\n", unpacked->args.mode);
            break;
        }
        case glDeleteBuffers_INDEX: {
            PACKED_glDeleteBuffers *unpacked = (PACKED_glDeleteBuffers *)packed;
            printf("glDeleteBuffers(%d, %p);\n", unpacked->args.n, unpacked->args.buffers);
            break;
        }
        case glDeleteTextures_INDEX: {
            PACKED_glDeleteTextures *unpacked = (PACKED_glDeleteTextures *)packed;
            printf("glDeleteTextures(%d, %p);\n", unpacked->args.n, unpacked->args.textures);
            break;
        }
        case glDepthFunc_INDEX: {
            PACKED_glDepthFunc *unpacked = (PACKED_glDepthFunc *)packed;
            printf("glDepthFunc(0x%04X);\n", unpacked->args.func);
            break;
        }
        case glDepthMask_INDEX: {
            PACKED_glDepthMask *unpacked = (PACKED_glDepthMask *)packed;
            printf("glDepthMask(%d);\n", unpacked->args.flag);
            break;
        }
        case glDepthRangef_INDEX: {
            PACKED_glDepthRangef *unpacked = (PACKED_glDepthRangef *)packed;
            printf("glDepthRangef(%p, %p);\n", unpacked->args.near, unpacked->args.far);
            break;
        }
        case glDepthRangex_INDEX: {
            PACKED_glDepthRangex *unpacked = (PACKED_glDepthRangex *)packed;
            printf("glDepthRangex(%p, %p);\n", unpacked->args.near, unpacked->args.far);
            break;
        }
        case glDisable_INDEX: {
            PACKED_glDisable *unpacked = (PACKED_glDisable *)packed;
            printf("glDisable(0x%04X);\n", unpacked->args.cap);
            break;
        }
        case glDisableClientState_INDEX: {
            PACKED_glDisableClientState *unpacked = (PACKED_glDisableClientState *)packed;
            printf("glDisableClientState(0x%04X);\n", unpacked->args.array);
            break;
        }
        case glDrawArrays_INDEX: {
            PACKED_glDrawArrays *unpacked = (PACKED_glDrawArrays *)packed;
            printf("glDrawArrays(0x%04X, %d, %d);\n", unpacked->args.mode, unpacked->args.first, unpacked->args.count);
            break;
        }
        case glDrawElements_INDEX: {
            PACKED_glDrawElements *unpacked = (PACKED_glDrawElements *)packed;
            printf("glDrawElements(0x%04X, %d, 0x%04X, %p);\n", unpacked->args.mode, unpacked->args.count, unpacked->args.type, unpacked->args.indices);
            break;
        }
        case glEnable_INDEX: {
            PACKED_glEnable *unpacked = (PACKED_glEnable *)packed;
            printf("glEnable(0x%04X);\n", unpacked->args.cap);
            break;
        }
        case glEnableClientState_INDEX: {
            PACKED_glEnableClientState *unpacked = (PACKED_glEnableClientState *)packed;
            printf("glEnableClientState(0x%04X);\n", unpacked->args.array);
            break;
        }
        case glFinish_INDEX: {
            PACKED_glFinish *unpacked = (PACKED_glFinish *)packed;
            printf("glFinish();\n");
            break;
        }
        case glFlush_INDEX: {
            PACKED_glFlush *unpacked = (PACKED_glFlush *)packed;
            printf("glFlush();\n");
            break;
        }
        case glFogf_INDEX: {
            PACKED_glFogf *unpacked = (PACKED_glFogf *)packed;
            printf("glFogf(0x%04X, %0.2f);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glFogfv_INDEX: {
            PACKED_glFogfv *unpacked = (PACKED_glFogfv *)packed;
            printf("glFogfv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glFogx_INDEX: {
            PACKED_glFogx *unpacked = (PACKED_glFogx *)packed;
            printf("glFogx(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glFogxv_INDEX: {
            PACKED_glFogxv *unpacked = (PACKED_glFogxv *)packed;
            printf("glFogxv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glFrontFace_INDEX: {
            PACKED_glFrontFace *unpacked = (PACKED_glFrontFace *)packed;
            printf("glFrontFace(0x%04X);\n", unpacked->args.mode);
            break;
        }
        case glFrustumf_INDEX: {
            PACKED_glFrustumf *unpacked = (PACKED_glFrustumf *)packed;
            printf("glFrustumf(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.left, unpacked->args.right, unpacked->args.bottom, unpacked->args.top, unpacked->args.near, unpacked->args.far);
            break;
        }
        case glFrustumx_INDEX: {
            PACKED_glFrustumx *unpacked = (PACKED_glFrustumx *)packed;
            printf("glFrustumx(%p, %p, %p, %p, %p, %p);\n", unpacked->args.left, unpacked->args.right, unpacked->args.bottom, unpacked->args.top, unpacked->args.near, unpacked->args.far);
            break;
        }
        case glGenBuffers_INDEX: {
            PACKED_glGenBuffers *unpacked = (PACKED_glGenBuffers *)packed;
            printf("glGenBuffers(%d, %p);\n", unpacked->args.n, unpacked->args.buffers);
            break;
        }
        case glGenTextures_INDEX: {
            PACKED_glGenTextures *unpacked = (PACKED_glGenTextures *)packed;
            printf("glGenTextures(%d, %p);\n", unpacked->args.n, unpacked->args.textures);
            break;
        }
        case glGetBooleanv_INDEX: {
            PACKED_glGetBooleanv *unpacked = (PACKED_glGetBooleanv *)packed;
            printf("glGetBooleanv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetBufferParameteriv_INDEX: {
            PACKED_glGetBufferParameteriv *unpacked = (PACKED_glGetBufferParameteriv *)packed;
            printf("glGetBufferParameteriv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetClipPlanef_INDEX: {
            PACKED_glGetClipPlanef *unpacked = (PACKED_glGetClipPlanef *)packed;
            printf("glGetClipPlanef(0x%04X, %p);\n", unpacked->args.plane, unpacked->args.equation);
            break;
        }
        case glGetClipPlanex_INDEX: {
            PACKED_glGetClipPlanex *unpacked = (PACKED_glGetClipPlanex *)packed;
            printf("glGetClipPlanex(0x%04X, %p);\n", unpacked->args.plane, unpacked->args.equation);
            break;
        }
        case glGetError_INDEX: {
            PACKED_glGetError *unpacked = (PACKED_glGetError *)packed;
            printf("glGetError();\n");
            break;
        }
        case glGetFixedv_INDEX: {
            PACKED_glGetFixedv *unpacked = (PACKED_glGetFixedv *)packed;
            printf("glGetFixedv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetFloatv_INDEX: {
            PACKED_glGetFloatv *unpacked = (PACKED_glGetFloatv *)packed;
            printf("glGetFloatv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetIntegerv_INDEX: {
            PACKED_glGetIntegerv *unpacked = (PACKED_glGetIntegerv *)packed;
            printf("glGetIntegerv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetLightfv_INDEX: {
            PACKED_glGetLightfv *unpacked = (PACKED_glGetLightfv *)packed;
            printf("glGetLightfv(0x%04X, 0x%04X, %p);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetLightxv_INDEX: {
            PACKED_glGetLightxv *unpacked = (PACKED_glGetLightxv *)packed;
            printf("glGetLightxv(0x%04X, 0x%04X, %p);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetMaterialfv_INDEX: {
            PACKED_glGetMaterialfv *unpacked = (PACKED_glGetMaterialfv *)packed;
            printf("glGetMaterialfv(0x%04X, 0x%04X, %p);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetMaterialxv_INDEX: {
            PACKED_glGetMaterialxv *unpacked = (PACKED_glGetMaterialxv *)packed;
            printf("glGetMaterialxv(0x%04X, 0x%04X, %p);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetPointerv_INDEX: {
            PACKED_glGetPointerv *unpacked = (PACKED_glGetPointerv *)packed;
            printf("glGetPointerv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetString_INDEX: {
            PACKED_glGetString *unpacked = (PACKED_glGetString *)packed;
            printf("glGetString(0x%04X);\n", unpacked->args.name);
            break;
        }
        case glGetTexEnvfv_INDEX: {
            PACKED_glGetTexEnvfv *unpacked = (PACKED_glGetTexEnvfv *)packed;
            printf("glGetTexEnvfv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetTexEnviv_INDEX: {
            PACKED_glGetTexEnviv *unpacked = (PACKED_glGetTexEnviv *)packed;
            printf("glGetTexEnviv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetTexEnvxv_INDEX: {
            PACKED_glGetTexEnvxv *unpacked = (PACKED_glGetTexEnvxv *)packed;
            printf("glGetTexEnvxv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetTexParameterfv_INDEX: {
            PACKED_glGetTexParameterfv *unpacked = (PACKED_glGetTexParameterfv *)packed;
            printf("glGetTexParameterfv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetTexParameteriv_INDEX: {
            PACKED_glGetTexParameteriv *unpacked = (PACKED_glGetTexParameteriv *)packed;
            printf("glGetTexParameteriv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetTexParameterxv_INDEX: {
            PACKED_glGetTexParameterxv *unpacked = (PACKED_glGetTexParameterxv *)packed;
            printf("glGetTexParameterxv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glHint_INDEX: {
            PACKED_glHint *unpacked = (PACKED_glHint *)packed;
            printf("glHint(0x%04X, 0x%04X);\n", unpacked->args.target, unpacked->args.mode);
            break;
        }
        case glIsBuffer_INDEX: {
            PACKED_glIsBuffer *unpacked = (PACKED_glIsBuffer *)packed;
            printf("glIsBuffer(%u);\n", unpacked->args.buffer);
            break;
        }
        case glIsEnabled_INDEX: {
            PACKED_glIsEnabled *unpacked = (PACKED_glIsEnabled *)packed;
            printf("glIsEnabled(0x%04X);\n", unpacked->args.cap);
            break;
        }
        case glIsTexture_INDEX: {
            PACKED_glIsTexture *unpacked = (PACKED_glIsTexture *)packed;
            printf("glIsTexture(%u);\n", unpacked->args.texture);
            break;
        }
        case glLightModelf_INDEX: {
            PACKED_glLightModelf *unpacked = (PACKED_glLightModelf *)packed;
            printf("glLightModelf(0x%04X, %0.2f);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glLightModelfv_INDEX: {
            PACKED_glLightModelfv *unpacked = (PACKED_glLightModelfv *)packed;
            printf("glLightModelfv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glLightModelx_INDEX: {
            PACKED_glLightModelx *unpacked = (PACKED_glLightModelx *)packed;
            printf("glLightModelx(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glLightModelxv_INDEX: {
            PACKED_glLightModelxv *unpacked = (PACKED_glLightModelxv *)packed;
            printf("glLightModelxv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glLightf_INDEX: {
            PACKED_glLightf *unpacked = (PACKED_glLightf *)packed;
            printf("glLightf(0x%04X, 0x%04X, %0.2f);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glLightfv_INDEX: {
            PACKED_glLightfv *unpacked = (PACKED_glLightfv *)packed;
            printf("glLightfv(0x%04X, 0x%04X, %p);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glLightx_INDEX: {
            PACKED_glLightx *unpacked = (PACKED_glLightx *)packed;
            printf("glLightx(0x%04X, 0x%04X, %p);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glLightxv_INDEX: {
            PACKED_glLightxv *unpacked = (PACKED_glLightxv *)packed;
            printf("glLightxv(0x%04X, 0x%04X, %p);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glLineWidth_INDEX: {
            PACKED_glLineWidth *unpacked = (PACKED_glLineWidth *)packed;
            printf("glLineWidth(%0.2f);\n", unpacked->args.width);
            break;
        }
        case glLineWidthx_INDEX: {
            PACKED_glLineWidthx *unpacked = (PACKED_glLineWidthx *)packed;
            printf("glLineWidthx(%p);\n", unpacked->args.width);
            break;
        }
        case glLoadIdentity_INDEX: {
            PACKED_glLoadIdentity *unpacked = (PACKED_glLoadIdentity *)packed;
            printf("glLoadIdentity();\n");
            break;
        }
        case glLoadMatrixf_INDEX: {
            PACKED_glLoadMatrixf *unpacked = (PACKED_glLoadMatrixf *)packed;
            printf("glLoadMatrixf(%p);\n", unpacked->args.m);
            break;
        }
        case glLoadMatrixx_INDEX: {
            PACKED_glLoadMatrixx *unpacked = (PACKED_glLoadMatrixx *)packed;
            printf("glLoadMatrixx(%p);\n", unpacked->args.m);
            break;
        }
        case glLogicOp_INDEX: {
            PACKED_glLogicOp *unpacked = (PACKED_glLogicOp *)packed;
            printf("glLogicOp(0x%04X);\n", unpacked->args.opcode);
            break;
        }
        case glMaterialf_INDEX: {
            PACKED_glMaterialf *unpacked = (PACKED_glMaterialf *)packed;
            printf("glMaterialf(0x%04X, 0x%04X, %0.2f);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glMaterialfv_INDEX: {
            PACKED_glMaterialfv *unpacked = (PACKED_glMaterialfv *)packed;
            printf("glMaterialfv(0x%04X, 0x%04X, %p);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glMaterialx_INDEX: {
            PACKED_glMaterialx *unpacked = (PACKED_glMaterialx *)packed;
            printf("glMaterialx(0x%04X, 0x%04X, %p);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glMaterialxv_INDEX: {
            PACKED_glMaterialxv *unpacked = (PACKED_glMaterialxv *)packed;
            printf("glMaterialxv(0x%04X, 0x%04X, %p);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glMatrixMode_INDEX: {
            PACKED_glMatrixMode *unpacked = (PACKED_glMatrixMode *)packed;
            printf("glMatrixMode(0x%04X);\n", unpacked->args.mode);
            break;
        }
        case glMultMatrixf_INDEX: {
            PACKED_glMultMatrixf *unpacked = (PACKED_glMultMatrixf *)packed;
            printf("glMultMatrixf(%p);\n", unpacked->args.m);
            break;
        }
        case glMultMatrixx_INDEX: {
            PACKED_glMultMatrixx *unpacked = (PACKED_glMultMatrixx *)packed;
            printf("glMultMatrixx(%p);\n", unpacked->args.m);
            break;
        }
        case glMultiTexCoord4f_INDEX: {
            PACKED_glMultiTexCoord4f *unpacked = (PACKED_glMultiTexCoord4f *)packed;
            printf("glMultiTexCoord4f(0x%04X, %0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.target, unpacked->args.s, unpacked->args.t, unpacked->args.r, unpacked->args.q);
            break;
        }
        case glMultiTexCoord4x_INDEX: {
            PACKED_glMultiTexCoord4x *unpacked = (PACKED_glMultiTexCoord4x *)packed;
            printf("glMultiTexCoord4x(0x%04X, %p, %p, %p, %p);\n", unpacked->args.target, unpacked->args.s, unpacked->args.t, unpacked->args.r, unpacked->args.q);
            break;
        }
        case glNormal3f_INDEX: {
            PACKED_glNormal3f *unpacked = (PACKED_glNormal3f *)packed;
            printf("glNormal3f(%0.2f, %0.2f, %0.2f);\n", unpacked->args.nx, unpacked->args.ny, unpacked->args.nz);
            break;
        }
        case glNormal3x_INDEX: {
            PACKED_glNormal3x *unpacked = (PACKED_glNormal3x *)packed;
            printf("glNormal3x(%p, %p, %p);\n", unpacked->args.nx, unpacked->args.ny, unpacked->args.nz);
            break;
        }
        case glNormalPointer_INDEX: {
            PACKED_glNormalPointer *unpacked = (PACKED_glNormalPointer *)packed;
            printf("glNormalPointer(0x%04X, %d, %p);\n", unpacked->args.type, unpacked->args.stride, unpacked->args.pointer);
            break;
        }
        case glOrthof_INDEX: {
            PACKED_glOrthof *unpacked = (PACKED_glOrthof *)packed;
            printf("glOrthof(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.left, unpacked->args.right, unpacked->args.bottom, unpacked->args.top, unpacked->args.near, unpacked->args.far);
            break;
        }
        case glOrthox_INDEX: {
            PACKED_glOrthox *unpacked = (PACKED_glOrthox *)packed;
            printf("glOrthox(%p, %p, %p, %p, %p, %p);\n", unpacked->args.left, unpacked->args.right, unpacked->args.bottom, unpacked->args.top, unpacked->args.near, unpacked->args.far);
            break;
        }
        case glPixelStorei_INDEX: {
            PACKED_glPixelStorei *unpacked = (PACKED_glPixelStorei *)packed;
            printf("glPixelStorei(0x%04X, %d);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glPointParameterf_INDEX: {
            PACKED_glPointParameterf *unpacked = (PACKED_glPointParameterf *)packed;
            printf("glPointParameterf(0x%04X, %0.2f);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glPointParameterfv_INDEX: {
            PACKED_glPointParameterfv *unpacked = (PACKED_glPointParameterfv *)packed;
            printf("glPointParameterfv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glPointParameterx_INDEX: {
            PACKED_glPointParameterx *unpacked = (PACKED_glPointParameterx *)packed;
            printf("glPointParameterx(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glPointParameterxv_INDEX: {
            PACKED_glPointParameterxv *unpacked = (PACKED_glPointParameterxv *)packed;
            printf("glPointParameterxv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glPointSize_INDEX: {
            PACKED_glPointSize *unpacked = (PACKED_glPointSize *)packed;
            printf("glPointSize(%0.2f);\n", unpacked->args.size);
            break;
        }
        case glPointSizePointerOES_INDEX: {
            PACKED_glPointSizePointerOES *unpacked = (PACKED_glPointSizePointerOES *)packed;
            printf("glPointSizePointerOES(0x%04X, %d, %p);\n", unpacked->args.type, unpacked->args.stride, unpacked->args.pointer);
            break;
        }
        case glPointSizex_INDEX: {
            PACKED_glPointSizex *unpacked = (PACKED_glPointSizex *)packed;
            printf("glPointSizex(%p);\n", unpacked->args.size);
            break;
        }
        case glPolygonOffset_INDEX: {
            PACKED_glPolygonOffset *unpacked = (PACKED_glPolygonOffset *)packed;
            printf("glPolygonOffset(%0.2f, %0.2f);\n", unpacked->args.factor, unpacked->args.units);
            break;
        }
        case glPolygonOffsetx_INDEX: {
            PACKED_glPolygonOffsetx *unpacked = (PACKED_glPolygonOffsetx *)packed;
            printf("glPolygonOffsetx(%p, %p);\n", unpacked->args.factor, unpacked->args.units);
            break;
        }
        case glPopMatrix_INDEX: {
            PACKED_glPopMatrix *unpacked = (PACKED_glPopMatrix *)packed;
            printf("glPopMatrix();\n");
            break;
        }
        case glPushMatrix_INDEX: {
            PACKED_glPushMatrix *unpacked = (PACKED_glPushMatrix *)packed;
            printf("glPushMatrix();\n");
            break;
        }
        case glReadPixels_INDEX: {
            PACKED_glReadPixels *unpacked = (PACKED_glReadPixels *)packed;
            printf("glReadPixels(%d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height, unpacked->args.format, unpacked->args.type, unpacked->args.pixels);
            break;
        }
        case glRotatef_INDEX: {
            PACKED_glRotatef *unpacked = (PACKED_glRotatef *)packed;
            printf("glRotatef(%0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.angle, unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glRotatex_INDEX: {
            PACKED_glRotatex *unpacked = (PACKED_glRotatex *)packed;
            printf("glRotatex(%p, %p, %p, %p);\n", unpacked->args.angle, unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glSampleCoverage_INDEX: {
            PACKED_glSampleCoverage *unpacked = (PACKED_glSampleCoverage *)packed;
            printf("glSampleCoverage(%p, %d);\n", unpacked->args.value, unpacked->args.invert);
            break;
        }
        case glSampleCoveragex_INDEX: {
            PACKED_glSampleCoveragex *unpacked = (PACKED_glSampleCoveragex *)packed;
            printf("glSampleCoveragex(%p, %d);\n", unpacked->args.value, unpacked->args.invert);
            break;
        }
        case glScalef_INDEX: {
            PACKED_glScalef *unpacked = (PACKED_glScalef *)packed;
            printf("glScalef(%0.2f, %0.2f, %0.2f);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glScalex_INDEX: {
            PACKED_glScalex *unpacked = (PACKED_glScalex *)packed;
            printf("glScalex(%p, %p, %p);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glScissor_INDEX: {
            PACKED_glScissor *unpacked = (PACKED_glScissor *)packed;
            printf("glScissor(%d, %d, %d, %d);\n", unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height);
            break;
        }
        case glShadeModel_INDEX: {
            PACKED_glShadeModel *unpacked = (PACKED_glShadeModel *)packed;
            printf("glShadeModel(0x%04X);\n", unpacked->args.mode);
            break;
        }
        case glStencilFunc_INDEX: {
            PACKED_glStencilFunc *unpacked = (PACKED_glStencilFunc *)packed;
            printf("glStencilFunc(0x%04X, %d, %u);\n", unpacked->args.func, unpacked->args.ref, unpacked->args.mask);
            break;
        }
        case glStencilMask_INDEX: {
            PACKED_glStencilMask *unpacked = (PACKED_glStencilMask *)packed;
            printf("glStencilMask(%u);\n", unpacked->args.mask);
            break;
        }
        case glStencilOp_INDEX: {
            PACKED_glStencilOp *unpacked = (PACKED_glStencilOp *)packed;
            printf("glStencilOp(0x%04X, 0x%04X, 0x%04X);\n", unpacked->args.fail, unpacked->args.zfail, unpacked->args.zpass);
            break;
        }
        case glTexCoordPointer_INDEX: {
            PACKED_glTexCoordPointer *unpacked = (PACKED_glTexCoordPointer *)packed;
            printf("glTexCoordPointer(%d, 0x%04X, %d, %p);\n", unpacked->args.size, unpacked->args.type, unpacked->args.stride, unpacked->args.pointer);
            break;
        }
        case glTexEnvf_INDEX: {
            PACKED_glTexEnvf *unpacked = (PACKED_glTexEnvf *)packed;
            printf("glTexEnvf(0x%04X, 0x%04X, %0.2f);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexEnvfv_INDEX: {
            PACKED_glTexEnvfv *unpacked = (PACKED_glTexEnvfv *)packed;
            printf("glTexEnvfv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexEnvi_INDEX: {
            PACKED_glTexEnvi *unpacked = (PACKED_glTexEnvi *)packed;
            printf("glTexEnvi(0x%04X, 0x%04X, %d);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexEnviv_INDEX: {
            PACKED_glTexEnviv *unpacked = (PACKED_glTexEnviv *)packed;
            printf("glTexEnviv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexEnvx_INDEX: {
            PACKED_glTexEnvx *unpacked = (PACKED_glTexEnvx *)packed;
            printf("glTexEnvx(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexEnvxv_INDEX: {
            PACKED_glTexEnvxv *unpacked = (PACKED_glTexEnvxv *)packed;
            printf("glTexEnvxv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexImage2D_INDEX: {
            PACKED_glTexImage2D *unpacked = (PACKED_glTexImage2D *)packed;
            printf("glTexImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.level, unpacked->args.internalformat, unpacked->args.width, unpacked->args.height, unpacked->args.border, unpacked->args.format, unpacked->args.type, unpacked->args.pixels);
            break;
        }
        case glTexParameterf_INDEX: {
            PACKED_glTexParameterf *unpacked = (PACKED_glTexParameterf *)packed;
            printf("glTexParameterf(0x%04X, 0x%04X, %0.2f);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexParameterfv_INDEX: {
            PACKED_glTexParameterfv *unpacked = (PACKED_glTexParameterfv *)packed;
            printf("glTexParameterfv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexParameteri_INDEX: {
            PACKED_glTexParameteri *unpacked = (PACKED_glTexParameteri *)packed;
            printf("glTexParameteri(0x%04X, 0x%04X, %d);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexParameteriv_INDEX: {
            PACKED_glTexParameteriv *unpacked = (PACKED_glTexParameteriv *)packed;
            printf("glTexParameteriv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexParameterx_INDEX: {
            PACKED_glTexParameterx *unpacked = (PACKED_glTexParameterx *)packed;
            printf("glTexParameterx(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexParameterxv_INDEX: {
            PACKED_glTexParameterxv *unpacked = (PACKED_glTexParameterxv *)packed;
            printf("glTexParameterxv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexSubImage2D_INDEX: {
            PACKED_glTexSubImage2D *unpacked = (PACKED_glTexSubImage2D *)packed;
            printf("glTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.level, unpacked->args.xoffset, unpacked->args.yoffset, unpacked->args.width, unpacked->args.height, unpacked->args.format, unpacked->args.type, unpacked->args.pixels);
            break;
        }
        case glTranslatef_INDEX: {
            PACKED_glTranslatef *unpacked = (PACKED_glTranslatef *)packed;
            printf("glTranslatef(%0.2f, %0.2f, %0.2f);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glTranslatex_INDEX: {
            PACKED_glTranslatex *unpacked = (PACKED_glTranslatex *)packed;
            printf("glTranslatex(%p, %p, %p);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glVertexPointer_INDEX: {
            PACKED_glVertexPointer *unpacked = (PACKED_glVertexPointer *)packed;
            printf("glVertexPointer(%d, 0x%04X, %d, %p);\n", unpacked->args.size, unpacked->args.type, unpacked->args.stride, unpacked->args.pointer);
            break;
        }
        case glViewport_INDEX: {
            PACKED_glViewport *unpacked = (PACKED_glViewport *)packed;
            printf("glViewport(%d, %d, %d, %d);\n", unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height);
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
    packed_call_t **stack = (packed_call_t **)mock.data;
    for (int i = mock.pos; i < mock.len; i++) {
        if (stack[i]->index == func) {
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
void gles_glBlendColorOES(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    emit_glBlendColorOES(red, green, blue, alpha);
}
void gles_glBlendEquationOES(GLenum mode) {
    emit_glBlendEquationOES(mode);
}
void gles_glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha) {
    emit_glBlendEquationSeparateOES(modeRGB, modeAlpha);
}
void gles_glBlendFunc(GLenum sfactor, GLenum dfactor) {
    emit_glBlendFunc(sfactor, dfactor);
}
void gles_glBlendFuncSeparateOES(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
    emit_glBlendFuncSeparateOES(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
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

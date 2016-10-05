#include "mock.h"
#include <stdio.h>
#include "tack.h"

int mock_fcmp(float *a, float *b, size_t len) {
    len /= sizeof(float);
    for (size_t i = 0; i < len; i++) {
        if (b[i] - a[i] > 0.00001) return 1;
        if (a[i] - b[i] > 0.00001) return -1;
    }
    return 0;
}

void mock_fdiff(float *a, float *b, size_t len) {
    for (int i = 0; i < len; i++) {
        if (mock_fcmp(&a[i], &b[i], sizeof(float)) == 0) {
            printf("%f ", a[i]);
        } else {
            printf(VT100_RED "%f " VT100_CLEAR, a[i]);
        }
    }
}

void mock_ptrdiff(char *prefix, void *ptr, void *other, size_t size) {
    printf("%s ", prefix);
    if (ptr == NULL) {
        printf("NULL");
    } else {
        char *ac = ptr, *bc = other;
        for (size_t i = 0; i < size; i++) {
            if (i > 0 && i % 4 == 0) printf(" ");
            if (i > 0 && i % 32 == 0) {
                printf("| ");
                mock_fdiff((float *)&ac[i - 32], (float *)&bc[i - 32], 8);
                printf("\n");
                printf("            ");
            }
            if (ac[i] != bc[i]) {
                printf("%02X", (unsigned char)ac[i]);
            } else {
                printf(VT100_RED "%02X" VT100_CLEAR, (unsigned char)ac[i]);
            }
        }
        int start = size - 32;
        if (size % 32 != 0) {
            size - (size % 32);
        }
        printf(" | ");
        mock_fdiff((float *)&ac[start], (float *)&bc[start], (size - start) / sizeof(float));
    }
    printf("\n");
}

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
        case glXChooseFBConfig_INDEX: return "glXChooseFBConfig";
        case glXChooseVisual_INDEX: return "glXChooseVisual";
        case glXCopyContext_INDEX: return "glXCopyContext";
        case glXCreateContext_INDEX: return "glXCreateContext";
        case glXCreateContextAttribsARB_INDEX: return "glXCreateContextAttribsARB";
        case glXCreateGLXPixmap_INDEX: return "glXCreateGLXPixmap";
        case glXCreateNewContext_INDEX: return "glXCreateNewContext";
        case glXCreateWindow_INDEX: return "glXCreateWindow";
        case glXDestroyContext_INDEX: return "glXDestroyContext";
        case glXDestroyGLXPixmap_INDEX: return "glXDestroyGLXPixmap";
        case glXDestroyWindow_INDEX: return "glXDestroyWindow";
        case glXGetClientString_INDEX: return "glXGetClientString";
        case glXGetConfig_INDEX: return "glXGetConfig";
        case glXGetCurrentContext_INDEX: return "glXGetCurrentContext";
        case glXGetCurrentDisplay_INDEX: return "glXGetCurrentDisplay";
        case glXGetCurrentDrawable_INDEX: return "glXGetCurrentDrawable";
        case glXGetFBConfigAttrib_INDEX: return "glXGetFBConfigAttrib";
        case glXGetFBConfigs_INDEX: return "glXGetFBConfigs";
        case glXGetProcAddress_INDEX: return "glXGetProcAddress";
        case glXGetProcAddressARB_INDEX: return "glXGetProcAddressARB";
        case glXGetVisualFromFBConfig_INDEX: return "glXGetVisualFromFBConfig";
        case glXIsDirect_INDEX: return "glXIsDirect";
        case glXMakeContextCurrent_INDEX: return "glXMakeContextCurrent";
        case glXMakeCurrent_INDEX: return "glXMakeCurrent";
        case glXQueryExtension_INDEX: return "glXQueryExtension";
        case glXQueryExtensionsString_INDEX: return "glXQueryExtensionsString";
        case glXQueryServerString_INDEX: return "glXQueryServerString";
        case glXQueryVersion_INDEX: return "glXQueryVersion";
        case glXReleaseBuffersMESA_INDEX: return "glXReleaseBuffersMESA";
        case glXSwapBuffers_INDEX: return "glXSwapBuffers";
        case glXSwapIntervalEXT_INDEX: return "glXSwapIntervalEXT";
        case glXSwapIntervalMESA_INDEX: return "glXSwapIntervalMESA";
        case glXSwapIntervalSGI_INDEX: return "glXSwapIntervalSGI";
        case glXUseXFont_INDEX: return "glXUseXFont";
        case glXWaitGL_INDEX: return "glXWaitGL";
        case glXWaitX_INDEX: return "glXWaitX";
    }
}

void mock_print(const packed_call_t *packed) {
    if (packed == NULL) {
        printf("NULL()\n");
        return;
    }
    switch (packed->index) {
        case glActiveTexture_INDEX: {
            glActiveTexture_PACKED *unpacked = (glActiveTexture_PACKED *)packed;
            printf("glActiveTexture(0x%04X);\n", unpacked->args.texture);
            break;
        }
        case glAlphaFunc_INDEX: {
            glAlphaFunc_PACKED *unpacked = (glAlphaFunc_PACKED *)packed;
            printf("glAlphaFunc(0x%04X, %0.2f);\n", unpacked->args.func, unpacked->args.ref);
            break;
        }
        case glAlphaFuncx_INDEX: {
            glAlphaFuncx_PACKED *unpacked = (glAlphaFuncx_PACKED *)packed;
            printf("glAlphaFuncx(0x%04X, %d);\n", unpacked->args.func, unpacked->args.ref);
            break;
        }
        case glBindBuffer_INDEX: {
            glBindBuffer_PACKED *unpacked = (glBindBuffer_PACKED *)packed;
            printf("glBindBuffer(0x%04X, %u);\n", unpacked->args.target, unpacked->args.buffer);
            break;
        }
        case glBindTexture_INDEX: {
            glBindTexture_PACKED *unpacked = (glBindTexture_PACKED *)packed;
            printf("glBindTexture(0x%04X, %u);\n", unpacked->args.target, unpacked->args.texture);
            break;
        }
        case glBlendColorOES_INDEX: {
            glBlendColorOES_PACKED *unpacked = (glBlendColorOES_PACKED *)packed;
            printf("glBlendColorOES(%0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glBlendEquationOES_INDEX: {
            glBlendEquationOES_PACKED *unpacked = (glBlendEquationOES_PACKED *)packed;
            printf("glBlendEquationOES(0x%04X);\n", unpacked->args.mode);
            break;
        }
        case glBlendEquationSeparateOES_INDEX: {
            glBlendEquationSeparateOES_PACKED *unpacked = (glBlendEquationSeparateOES_PACKED *)packed;
            printf("glBlendEquationSeparateOES(0x%04X, 0x%04X);\n", unpacked->args.modeRGB, unpacked->args.modeAlpha);
            break;
        }
        case glBlendFunc_INDEX: {
            glBlendFunc_PACKED *unpacked = (glBlendFunc_PACKED *)packed;
            printf("glBlendFunc(0x%04X, 0x%04X);\n", unpacked->args.sfactor, unpacked->args.dfactor);
            break;
        }
        case glBlendFuncSeparateOES_INDEX: {
            glBlendFuncSeparateOES_PACKED *unpacked = (glBlendFuncSeparateOES_PACKED *)packed;
            printf("glBlendFuncSeparateOES(0x%04X, 0x%04X, 0x%04X, 0x%04X);\n", unpacked->args.sfactorRGB, unpacked->args.dfactorRGB, unpacked->args.sfactorAlpha, unpacked->args.dfactorAlpha);
            break;
        }
        case glBufferData_INDEX: {
            glBufferData_PACKED *unpacked = (glBufferData_PACKED *)packed;
            printf("glBufferData(0x%04X, %td, %p, 0x%04X);\n", unpacked->args.target, unpacked->args.size, unpacked->args.data, unpacked->args.usage);
            break;
        }
        case glBufferSubData_INDEX: {
            glBufferSubData_PACKED *unpacked = (glBufferSubData_PACKED *)packed;
            printf("glBufferSubData(0x%04X, %td, %td, %p);\n", unpacked->args.target, unpacked->args.offset, unpacked->args.size, unpacked->args.data);
            break;
        }
        case glClear_INDEX: {
            glClear_PACKED *unpacked = (glClear_PACKED *)packed;
            printf("glClear(%d);\n", unpacked->args.mask);
            break;
        }
        case glClearColor_INDEX: {
            glClearColor_PACKED *unpacked = (glClearColor_PACKED *)packed;
            printf("glClearColor(%0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glClearColorx_INDEX: {
            glClearColorx_PACKED *unpacked = (glClearColorx_PACKED *)packed;
            printf("glClearColorx(%d, %d, %d, %d);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glClearDepthf_INDEX: {
            glClearDepthf_PACKED *unpacked = (glClearDepthf_PACKED *)packed;
            printf("glClearDepthf(%0.2f);\n", unpacked->args.depth);
            break;
        }
        case glClearDepthx_INDEX: {
            glClearDepthx_PACKED *unpacked = (glClearDepthx_PACKED *)packed;
            printf("glClearDepthx(%d);\n", unpacked->args.depth);
            break;
        }
        case glClearStencil_INDEX: {
            glClearStencil_PACKED *unpacked = (glClearStencil_PACKED *)packed;
            printf("glClearStencil(%d);\n", unpacked->args.s);
            break;
        }
        case glClientActiveTexture_INDEX: {
            glClientActiveTexture_PACKED *unpacked = (glClientActiveTexture_PACKED *)packed;
            printf("glClientActiveTexture(0x%04X);\n", unpacked->args.texture);
            break;
        }
        case glClipPlanef_INDEX: {
            glClipPlanef_PACKED *unpacked = (glClipPlanef_PACKED *)packed;
            printf("glClipPlanef(0x%04X, %p);\n", unpacked->args.plane, unpacked->args.equation);
            break;
        }
        case glClipPlanex_INDEX: {
            glClipPlanex_PACKED *unpacked = (glClipPlanex_PACKED *)packed;
            printf("glClipPlanex(0x%04X, %p);\n", unpacked->args.plane, unpacked->args.equation);
            break;
        }
        case glColor4f_INDEX: {
            glColor4f_PACKED *unpacked = (glColor4f_PACKED *)packed;
            printf("glColor4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glColor4ub_INDEX: {
            glColor4ub_PACKED *unpacked = (glColor4ub_PACKED *)packed;
            printf("glColor4ub(%c, %c, %c, %c);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glColor4x_INDEX: {
            glColor4x_PACKED *unpacked = (glColor4x_PACKED *)packed;
            printf("glColor4x(%d, %d, %d, %d);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glColorMask_INDEX: {
            glColorMask_PACKED *unpacked = (glColorMask_PACKED *)packed;
            printf("glColorMask(%d, %d, %d, %d);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glColorPointer_INDEX: {
            glColorPointer_PACKED *unpacked = (glColorPointer_PACKED *)packed;
            printf("glColorPointer(%d, 0x%04X, %d, %p);\n", unpacked->args.size, unpacked->args.type, unpacked->args.stride, unpacked->args.pointer);
            break;
        }
        case glCompressedTexImage2D_INDEX: {
            glCompressedTexImage2D_PACKED *unpacked = (glCompressedTexImage2D_PACKED *)packed;
            printf("glCompressedTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %p);\n", unpacked->args.target, unpacked->args.level, unpacked->args.internalformat, unpacked->args.width, unpacked->args.height, unpacked->args.border, unpacked->args.imageSize, unpacked->args.data);
            break;
        }
        case glCompressedTexSubImage2D_INDEX: {
            glCompressedTexSubImage2D_PACKED *unpacked = (glCompressedTexSubImage2D_PACKED *)packed;
            printf("glCompressedTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, %d, %p);\n", unpacked->args.target, unpacked->args.level, unpacked->args.xoffset, unpacked->args.yoffset, unpacked->args.width, unpacked->args.height, unpacked->args.format, unpacked->args.imageSize, unpacked->args.data);
            break;
        }
        case glCopyTexImage2D_INDEX: {
            glCopyTexImage2D_PACKED *unpacked = (glCopyTexImage2D_PACKED *)packed;
            printf("glCopyTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %d);\n", unpacked->args.target, unpacked->args.level, unpacked->args.internalformat, unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height, unpacked->args.border);
            break;
        }
        case glCopyTexSubImage2D_INDEX: {
            glCopyTexSubImage2D_PACKED *unpacked = (glCopyTexSubImage2D_PACKED *)packed;
            printf("glCopyTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, %d, %d);\n", unpacked->args.target, unpacked->args.level, unpacked->args.xoffset, unpacked->args.yoffset, unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height);
            break;
        }
        case glCullFace_INDEX: {
            glCullFace_PACKED *unpacked = (glCullFace_PACKED *)packed;
            printf("glCullFace(0x%04X);\n", unpacked->args.mode);
            break;
        }
        case glDeleteBuffers_INDEX: {
            glDeleteBuffers_PACKED *unpacked = (glDeleteBuffers_PACKED *)packed;
            printf("glDeleteBuffers(%d, %p);\n", unpacked->args.n, unpacked->args.buffers);
            break;
        }
        case glDeleteTextures_INDEX: {
            glDeleteTextures_PACKED *unpacked = (glDeleteTextures_PACKED *)packed;
            printf("glDeleteTextures(%d, %p);\n", unpacked->args.n, unpacked->args.textures);
            break;
        }
        case glDepthFunc_INDEX: {
            glDepthFunc_PACKED *unpacked = (glDepthFunc_PACKED *)packed;
            printf("glDepthFunc(0x%04X);\n", unpacked->args.func);
            break;
        }
        case glDepthMask_INDEX: {
            glDepthMask_PACKED *unpacked = (glDepthMask_PACKED *)packed;
            printf("glDepthMask(%d);\n", unpacked->args.flag);
            break;
        }
        case glDepthRangef_INDEX: {
            glDepthRangef_PACKED *unpacked = (glDepthRangef_PACKED *)packed;
            printf("glDepthRangef(%0.2f, %0.2f);\n", unpacked->args.near, unpacked->args.far);
            break;
        }
        case glDepthRangex_INDEX: {
            glDepthRangex_PACKED *unpacked = (glDepthRangex_PACKED *)packed;
            printf("glDepthRangex(%d, %d);\n", unpacked->args.near, unpacked->args.far);
            break;
        }
        case glDisable_INDEX: {
            glDisable_PACKED *unpacked = (glDisable_PACKED *)packed;
            printf("glDisable(0x%04X);\n", unpacked->args.cap);
            break;
        }
        case glDisableClientState_INDEX: {
            glDisableClientState_PACKED *unpacked = (glDisableClientState_PACKED *)packed;
            printf("glDisableClientState(0x%04X);\n", unpacked->args.array);
            break;
        }
        case glDrawArrays_INDEX: {
            glDrawArrays_PACKED *unpacked = (glDrawArrays_PACKED *)packed;
            printf("glDrawArrays(0x%04X, %d, %d);\n", unpacked->args.mode, unpacked->args.first, unpacked->args.count);
            break;
        }
        case glDrawElements_INDEX: {
            glDrawElements_PACKED *unpacked = (glDrawElements_PACKED *)packed;
            printf("glDrawElements(0x%04X, %d, 0x%04X, %p);\n", unpacked->args.mode, unpacked->args.count, unpacked->args.type, unpacked->args.indices);
            break;
        }
        case glEnable_INDEX: {
            glEnable_PACKED *unpacked = (glEnable_PACKED *)packed;
            printf("glEnable(0x%04X);\n", unpacked->args.cap);
            break;
        }
        case glEnableClientState_INDEX: {
            glEnableClientState_PACKED *unpacked = (glEnableClientState_PACKED *)packed;
            printf("glEnableClientState(0x%04X);\n", unpacked->args.array);
            break;
        }
        case glFinish_INDEX: {
            glFinish_PACKED *unpacked = (glFinish_PACKED *)packed;
            printf("glFinish();\n");
            break;
        }
        case glFlush_INDEX: {
            glFlush_PACKED *unpacked = (glFlush_PACKED *)packed;
            printf("glFlush();\n");
            break;
        }
        case glFogf_INDEX: {
            glFogf_PACKED *unpacked = (glFogf_PACKED *)packed;
            printf("glFogf(0x%04X, %0.2f);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glFogfv_INDEX: {
            glFogfv_PACKED *unpacked = (glFogfv_PACKED *)packed;
            printf("glFogfv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glFogx_INDEX: {
            glFogx_PACKED *unpacked = (glFogx_PACKED *)packed;
            printf("glFogx(0x%04X, %d);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glFogxv_INDEX: {
            glFogxv_PACKED *unpacked = (glFogxv_PACKED *)packed;
            printf("glFogxv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glFrontFace_INDEX: {
            glFrontFace_PACKED *unpacked = (glFrontFace_PACKED *)packed;
            printf("glFrontFace(0x%04X);\n", unpacked->args.mode);
            break;
        }
        case glFrustumf_INDEX: {
            glFrustumf_PACKED *unpacked = (glFrustumf_PACKED *)packed;
            printf("glFrustumf(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.left, unpacked->args.right, unpacked->args.bottom, unpacked->args.top, unpacked->args.near, unpacked->args.far);
            break;
        }
        case glFrustumx_INDEX: {
            glFrustumx_PACKED *unpacked = (glFrustumx_PACKED *)packed;
            printf("glFrustumx(%d, %d, %d, %d, %d, %d);\n", unpacked->args.left, unpacked->args.right, unpacked->args.bottom, unpacked->args.top, unpacked->args.near, unpacked->args.far);
            break;
        }
        case glGenBuffers_INDEX: {
            glGenBuffers_PACKED *unpacked = (glGenBuffers_PACKED *)packed;
            printf("glGenBuffers(%d, %p);\n", unpacked->args.n, unpacked->args.buffers);
            break;
        }
        case glGenTextures_INDEX: {
            glGenTextures_PACKED *unpacked = (glGenTextures_PACKED *)packed;
            printf("glGenTextures(%d, %p);\n", unpacked->args.n, unpacked->args.textures);
            break;
        }
        case glGetBooleanv_INDEX: {
            glGetBooleanv_PACKED *unpacked = (glGetBooleanv_PACKED *)packed;
            printf("glGetBooleanv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetBufferParameteriv_INDEX: {
            glGetBufferParameteriv_PACKED *unpacked = (glGetBufferParameteriv_PACKED *)packed;
            printf("glGetBufferParameteriv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetClipPlanef_INDEX: {
            glGetClipPlanef_PACKED *unpacked = (glGetClipPlanef_PACKED *)packed;
            printf("glGetClipPlanef(0x%04X, %p);\n", unpacked->args.plane, unpacked->args.equation);
            break;
        }
        case glGetClipPlanex_INDEX: {
            glGetClipPlanex_PACKED *unpacked = (glGetClipPlanex_PACKED *)packed;
            printf("glGetClipPlanex(0x%04X, %p);\n", unpacked->args.plane, unpacked->args.equation);
            break;
        }
        case glGetError_INDEX: {
            glGetError_PACKED *unpacked = (glGetError_PACKED *)packed;
            printf("glGetError();\n");
            break;
        }
        case glGetFixedv_INDEX: {
            glGetFixedv_PACKED *unpacked = (glGetFixedv_PACKED *)packed;
            printf("glGetFixedv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetFloatv_INDEX: {
            glGetFloatv_PACKED *unpacked = (glGetFloatv_PACKED *)packed;
            printf("glGetFloatv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetIntegerv_INDEX: {
            glGetIntegerv_PACKED *unpacked = (glGetIntegerv_PACKED *)packed;
            printf("glGetIntegerv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetLightfv_INDEX: {
            glGetLightfv_PACKED *unpacked = (glGetLightfv_PACKED *)packed;
            printf("glGetLightfv(0x%04X, 0x%04X, %p);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetLightxv_INDEX: {
            glGetLightxv_PACKED *unpacked = (glGetLightxv_PACKED *)packed;
            printf("glGetLightxv(0x%04X, 0x%04X, %p);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetMaterialfv_INDEX: {
            glGetMaterialfv_PACKED *unpacked = (glGetMaterialfv_PACKED *)packed;
            printf("glGetMaterialfv(0x%04X, 0x%04X, %p);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetMaterialxv_INDEX: {
            glGetMaterialxv_PACKED *unpacked = (glGetMaterialxv_PACKED *)packed;
            printf("glGetMaterialxv(0x%04X, 0x%04X, %p);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetPointerv_INDEX: {
            glGetPointerv_PACKED *unpacked = (glGetPointerv_PACKED *)packed;
            printf("glGetPointerv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetString_INDEX: {
            glGetString_PACKED *unpacked = (glGetString_PACKED *)packed;
            printf("glGetString(0x%04X);\n", unpacked->args.name);
            break;
        }
        case glGetTexEnvfv_INDEX: {
            glGetTexEnvfv_PACKED *unpacked = (glGetTexEnvfv_PACKED *)packed;
            printf("glGetTexEnvfv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetTexEnviv_INDEX: {
            glGetTexEnviv_PACKED *unpacked = (glGetTexEnviv_PACKED *)packed;
            printf("glGetTexEnviv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetTexEnvxv_INDEX: {
            glGetTexEnvxv_PACKED *unpacked = (glGetTexEnvxv_PACKED *)packed;
            printf("glGetTexEnvxv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetTexParameterfv_INDEX: {
            glGetTexParameterfv_PACKED *unpacked = (glGetTexParameterfv_PACKED *)packed;
            printf("glGetTexParameterfv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetTexParameteriv_INDEX: {
            glGetTexParameteriv_PACKED *unpacked = (glGetTexParameteriv_PACKED *)packed;
            printf("glGetTexParameteriv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glGetTexParameterxv_INDEX: {
            glGetTexParameterxv_PACKED *unpacked = (glGetTexParameterxv_PACKED *)packed;
            printf("glGetTexParameterxv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glHint_INDEX: {
            glHint_PACKED *unpacked = (glHint_PACKED *)packed;
            printf("glHint(0x%04X, 0x%04X);\n", unpacked->args.target, unpacked->args.mode);
            break;
        }
        case glIsBuffer_INDEX: {
            glIsBuffer_PACKED *unpacked = (glIsBuffer_PACKED *)packed;
            printf("glIsBuffer(%u);\n", unpacked->args.buffer);
            break;
        }
        case glIsEnabled_INDEX: {
            glIsEnabled_PACKED *unpacked = (glIsEnabled_PACKED *)packed;
            printf("glIsEnabled(0x%04X);\n", unpacked->args.cap);
            break;
        }
        case glIsTexture_INDEX: {
            glIsTexture_PACKED *unpacked = (glIsTexture_PACKED *)packed;
            printf("glIsTexture(%u);\n", unpacked->args.texture);
            break;
        }
        case glLightModelf_INDEX: {
            glLightModelf_PACKED *unpacked = (glLightModelf_PACKED *)packed;
            printf("glLightModelf(0x%04X, %0.2f);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glLightModelfv_INDEX: {
            glLightModelfv_PACKED *unpacked = (glLightModelfv_PACKED *)packed;
            printf("glLightModelfv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glLightModelx_INDEX: {
            glLightModelx_PACKED *unpacked = (glLightModelx_PACKED *)packed;
            printf("glLightModelx(0x%04X, %d);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glLightModelxv_INDEX: {
            glLightModelxv_PACKED *unpacked = (glLightModelxv_PACKED *)packed;
            printf("glLightModelxv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glLightf_INDEX: {
            glLightf_PACKED *unpacked = (glLightf_PACKED *)packed;
            printf("glLightf(0x%04X, 0x%04X, %0.2f);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glLightfv_INDEX: {
            glLightfv_PACKED *unpacked = (glLightfv_PACKED *)packed;
            printf("glLightfv(0x%04X, 0x%04X, %p);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glLightx_INDEX: {
            glLightx_PACKED *unpacked = (glLightx_PACKED *)packed;
            printf("glLightx(0x%04X, 0x%04X, %d);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glLightxv_INDEX: {
            glLightxv_PACKED *unpacked = (glLightxv_PACKED *)packed;
            printf("glLightxv(0x%04X, 0x%04X, %p);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glLineWidth_INDEX: {
            glLineWidth_PACKED *unpacked = (glLineWidth_PACKED *)packed;
            printf("glLineWidth(%0.2f);\n", unpacked->args.width);
            break;
        }
        case glLineWidthx_INDEX: {
            glLineWidthx_PACKED *unpacked = (glLineWidthx_PACKED *)packed;
            printf("glLineWidthx(%d);\n", unpacked->args.width);
            break;
        }
        case glLoadIdentity_INDEX: {
            glLoadIdentity_PACKED *unpacked = (glLoadIdentity_PACKED *)packed;
            printf("glLoadIdentity();\n");
            break;
        }
        case glLoadMatrixf_INDEX: {
            glLoadMatrixf_PACKED *unpacked = (glLoadMatrixf_PACKED *)packed;
            printf("glLoadMatrixf(%p);\n", unpacked->args.m);
            break;
        }
        case glLoadMatrixx_INDEX: {
            glLoadMatrixx_PACKED *unpacked = (glLoadMatrixx_PACKED *)packed;
            printf("glLoadMatrixx(%p);\n", unpacked->args.m);
            break;
        }
        case glLogicOp_INDEX: {
            glLogicOp_PACKED *unpacked = (glLogicOp_PACKED *)packed;
            printf("glLogicOp(0x%04X);\n", unpacked->args.opcode);
            break;
        }
        case glMaterialf_INDEX: {
            glMaterialf_PACKED *unpacked = (glMaterialf_PACKED *)packed;
            printf("glMaterialf(0x%04X, 0x%04X, %0.2f);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glMaterialfv_INDEX: {
            glMaterialfv_PACKED *unpacked = (glMaterialfv_PACKED *)packed;
            printf("glMaterialfv(0x%04X, 0x%04X, %p);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glMaterialx_INDEX: {
            glMaterialx_PACKED *unpacked = (glMaterialx_PACKED *)packed;
            printf("glMaterialx(0x%04X, 0x%04X, %d);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glMaterialxv_INDEX: {
            glMaterialxv_PACKED *unpacked = (glMaterialxv_PACKED *)packed;
            printf("glMaterialxv(0x%04X, 0x%04X, %p);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glMatrixMode_INDEX: {
            glMatrixMode_PACKED *unpacked = (glMatrixMode_PACKED *)packed;
            printf("glMatrixMode(0x%04X);\n", unpacked->args.mode);
            break;
        }
        case glMultMatrixf_INDEX: {
            glMultMatrixf_PACKED *unpacked = (glMultMatrixf_PACKED *)packed;
            printf("glMultMatrixf(%p);\n", unpacked->args.m);
            break;
        }
        case glMultMatrixx_INDEX: {
            glMultMatrixx_PACKED *unpacked = (glMultMatrixx_PACKED *)packed;
            printf("glMultMatrixx(%p);\n", unpacked->args.m);
            break;
        }
        case glMultiTexCoord4f_INDEX: {
            glMultiTexCoord4f_PACKED *unpacked = (glMultiTexCoord4f_PACKED *)packed;
            printf("glMultiTexCoord4f(0x%04X, %0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.target, unpacked->args.s, unpacked->args.t, unpacked->args.r, unpacked->args.q);
            break;
        }
        case glMultiTexCoord4x_INDEX: {
            glMultiTexCoord4x_PACKED *unpacked = (glMultiTexCoord4x_PACKED *)packed;
            printf("glMultiTexCoord4x(0x%04X, %d, %d, %d, %d);\n", unpacked->args.target, unpacked->args.s, unpacked->args.t, unpacked->args.r, unpacked->args.q);
            break;
        }
        case glNormal3f_INDEX: {
            glNormal3f_PACKED *unpacked = (glNormal3f_PACKED *)packed;
            printf("glNormal3f(%0.2f, %0.2f, %0.2f);\n", unpacked->args.nx, unpacked->args.ny, unpacked->args.nz);
            break;
        }
        case glNormal3x_INDEX: {
            glNormal3x_PACKED *unpacked = (glNormal3x_PACKED *)packed;
            printf("glNormal3x(%d, %d, %d);\n", unpacked->args.nx, unpacked->args.ny, unpacked->args.nz);
            break;
        }
        case glNormalPointer_INDEX: {
            glNormalPointer_PACKED *unpacked = (glNormalPointer_PACKED *)packed;
            printf("glNormalPointer(0x%04X, %d, %p);\n", unpacked->args.type, unpacked->args.stride, unpacked->args.pointer);
            break;
        }
        case glOrthof_INDEX: {
            glOrthof_PACKED *unpacked = (glOrthof_PACKED *)packed;
            printf("glOrthof(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.left, unpacked->args.right, unpacked->args.bottom, unpacked->args.top, unpacked->args.near, unpacked->args.far);
            break;
        }
        case glOrthox_INDEX: {
            glOrthox_PACKED *unpacked = (glOrthox_PACKED *)packed;
            printf("glOrthox(%d, %d, %d, %d, %d, %d);\n", unpacked->args.left, unpacked->args.right, unpacked->args.bottom, unpacked->args.top, unpacked->args.near, unpacked->args.far);
            break;
        }
        case glPixelStorei_INDEX: {
            glPixelStorei_PACKED *unpacked = (glPixelStorei_PACKED *)packed;
            printf("glPixelStorei(0x%04X, %d);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glPointParameterf_INDEX: {
            glPointParameterf_PACKED *unpacked = (glPointParameterf_PACKED *)packed;
            printf("glPointParameterf(0x%04X, %0.2f);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glPointParameterfv_INDEX: {
            glPointParameterfv_PACKED *unpacked = (glPointParameterfv_PACKED *)packed;
            printf("glPointParameterfv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glPointParameterx_INDEX: {
            glPointParameterx_PACKED *unpacked = (glPointParameterx_PACKED *)packed;
            printf("glPointParameterx(0x%04X, %d);\n", unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glPointParameterxv_INDEX: {
            glPointParameterxv_PACKED *unpacked = (glPointParameterxv_PACKED *)packed;
            printf("glPointParameterxv(0x%04X, %p);\n", unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glPointSize_INDEX: {
            glPointSize_PACKED *unpacked = (glPointSize_PACKED *)packed;
            printf("glPointSize(%0.2f);\n", unpacked->args.size);
            break;
        }
        case glPointSizePointerOES_INDEX: {
            glPointSizePointerOES_PACKED *unpacked = (glPointSizePointerOES_PACKED *)packed;
            printf("glPointSizePointerOES(0x%04X, %d, %p);\n", unpacked->args.type, unpacked->args.stride, unpacked->args.pointer);
            break;
        }
        case glPointSizex_INDEX: {
            glPointSizex_PACKED *unpacked = (glPointSizex_PACKED *)packed;
            printf("glPointSizex(%d);\n", unpacked->args.size);
            break;
        }
        case glPolygonOffset_INDEX: {
            glPolygonOffset_PACKED *unpacked = (glPolygonOffset_PACKED *)packed;
            printf("glPolygonOffset(%0.2f, %0.2f);\n", unpacked->args.factor, unpacked->args.units);
            break;
        }
        case glPolygonOffsetx_INDEX: {
            glPolygonOffsetx_PACKED *unpacked = (glPolygonOffsetx_PACKED *)packed;
            printf("glPolygonOffsetx(%d, %d);\n", unpacked->args.factor, unpacked->args.units);
            break;
        }
        case glPopMatrix_INDEX: {
            glPopMatrix_PACKED *unpacked = (glPopMatrix_PACKED *)packed;
            printf("glPopMatrix();\n");
            break;
        }
        case glPushMatrix_INDEX: {
            glPushMatrix_PACKED *unpacked = (glPushMatrix_PACKED *)packed;
            printf("glPushMatrix();\n");
            break;
        }
        case glReadPixels_INDEX: {
            glReadPixels_PACKED *unpacked = (glReadPixels_PACKED *)packed;
            printf("glReadPixels(%d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height, unpacked->args.format, unpacked->args.type, unpacked->args.pixels);
            break;
        }
        case glRotatef_INDEX: {
            glRotatef_PACKED *unpacked = (glRotatef_PACKED *)packed;
            printf("glRotatef(%0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.angle, unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glRotatex_INDEX: {
            glRotatex_PACKED *unpacked = (glRotatex_PACKED *)packed;
            printf("glRotatex(%d, %d, %d, %d);\n", unpacked->args.angle, unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glSampleCoverage_INDEX: {
            glSampleCoverage_PACKED *unpacked = (glSampleCoverage_PACKED *)packed;
            printf("glSampleCoverage(%0.2f, %d);\n", unpacked->args.value, unpacked->args.invert);
            break;
        }
        case glSampleCoveragex_INDEX: {
            glSampleCoveragex_PACKED *unpacked = (glSampleCoveragex_PACKED *)packed;
            printf("glSampleCoveragex(%d, %d);\n", unpacked->args.value, unpacked->args.invert);
            break;
        }
        case glScalef_INDEX: {
            glScalef_PACKED *unpacked = (glScalef_PACKED *)packed;
            printf("glScalef(%0.2f, %0.2f, %0.2f);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glScalex_INDEX: {
            glScalex_PACKED *unpacked = (glScalex_PACKED *)packed;
            printf("glScalex(%d, %d, %d);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glScissor_INDEX: {
            glScissor_PACKED *unpacked = (glScissor_PACKED *)packed;
            printf("glScissor(%d, %d, %d, %d);\n", unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height);
            break;
        }
        case glShadeModel_INDEX: {
            glShadeModel_PACKED *unpacked = (glShadeModel_PACKED *)packed;
            printf("glShadeModel(0x%04X);\n", unpacked->args.mode);
            break;
        }
        case glStencilFunc_INDEX: {
            glStencilFunc_PACKED *unpacked = (glStencilFunc_PACKED *)packed;
            printf("glStencilFunc(0x%04X, %d, %u);\n", unpacked->args.func, unpacked->args.ref, unpacked->args.mask);
            break;
        }
        case glStencilMask_INDEX: {
            glStencilMask_PACKED *unpacked = (glStencilMask_PACKED *)packed;
            printf("glStencilMask(%u);\n", unpacked->args.mask);
            break;
        }
        case glStencilOp_INDEX: {
            glStencilOp_PACKED *unpacked = (glStencilOp_PACKED *)packed;
            printf("glStencilOp(0x%04X, 0x%04X, 0x%04X);\n", unpacked->args.fail, unpacked->args.zfail, unpacked->args.zpass);
            break;
        }
        case glTexCoordPointer_INDEX: {
            glTexCoordPointer_PACKED *unpacked = (glTexCoordPointer_PACKED *)packed;
            printf("glTexCoordPointer(%d, 0x%04X, %d, %p);\n", unpacked->args.size, unpacked->args.type, unpacked->args.stride, unpacked->args.pointer);
            break;
        }
        case glTexEnvf_INDEX: {
            glTexEnvf_PACKED *unpacked = (glTexEnvf_PACKED *)packed;
            printf("glTexEnvf(0x%04X, 0x%04X, %0.2f);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexEnvfv_INDEX: {
            glTexEnvfv_PACKED *unpacked = (glTexEnvfv_PACKED *)packed;
            printf("glTexEnvfv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexEnvi_INDEX: {
            glTexEnvi_PACKED *unpacked = (glTexEnvi_PACKED *)packed;
            printf("glTexEnvi(0x%04X, 0x%04X, %d);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexEnviv_INDEX: {
            glTexEnviv_PACKED *unpacked = (glTexEnviv_PACKED *)packed;
            printf("glTexEnviv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexEnvx_INDEX: {
            glTexEnvx_PACKED *unpacked = (glTexEnvx_PACKED *)packed;
            printf("glTexEnvx(0x%04X, 0x%04X, %d);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexEnvxv_INDEX: {
            glTexEnvxv_PACKED *unpacked = (glTexEnvxv_PACKED *)packed;
            printf("glTexEnvxv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexImage2D_INDEX: {
            glTexImage2D_PACKED *unpacked = (glTexImage2D_PACKED *)packed;
            printf("glTexImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.level, unpacked->args.internalformat, unpacked->args.width, unpacked->args.height, unpacked->args.border, unpacked->args.format, unpacked->args.type, unpacked->args.pixels);
            break;
        }
        case glTexParameterf_INDEX: {
            glTexParameterf_PACKED *unpacked = (glTexParameterf_PACKED *)packed;
            printf("glTexParameterf(0x%04X, 0x%04X, %0.2f);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexParameterfv_INDEX: {
            glTexParameterfv_PACKED *unpacked = (glTexParameterfv_PACKED *)packed;
            printf("glTexParameterfv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexParameteri_INDEX: {
            glTexParameteri_PACKED *unpacked = (glTexParameteri_PACKED *)packed;
            printf("glTexParameteri(0x%04X, 0x%04X, %d);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexParameteriv_INDEX: {
            glTexParameteriv_PACKED *unpacked = (glTexParameteriv_PACKED *)packed;
            printf("glTexParameteriv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexParameterx_INDEX: {
            glTexParameterx_PACKED *unpacked = (glTexParameterx_PACKED *)packed;
            printf("glTexParameterx(0x%04X, 0x%04X, %d);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
            break;
        }
        case glTexParameterxv_INDEX: {
            glTexParameterxv_PACKED *unpacked = (glTexParameterxv_PACKED *)packed;
            printf("glTexParameterxv(0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.params);
            break;
        }
        case glTexSubImage2D_INDEX: {
            glTexSubImage2D_PACKED *unpacked = (glTexSubImage2D_PACKED *)packed;
            printf("glTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", unpacked->args.target, unpacked->args.level, unpacked->args.xoffset, unpacked->args.yoffset, unpacked->args.width, unpacked->args.height, unpacked->args.format, unpacked->args.type, unpacked->args.pixels);
            break;
        }
        case glTranslatef_INDEX: {
            glTranslatef_PACKED *unpacked = (glTranslatef_PACKED *)packed;
            printf("glTranslatef(%0.2f, %0.2f, %0.2f);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glTranslatex_INDEX: {
            glTranslatex_PACKED *unpacked = (glTranslatex_PACKED *)packed;
            printf("glTranslatex(%d, %d, %d);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glVertexPointer_INDEX: {
            glVertexPointer_PACKED *unpacked = (glVertexPointer_PACKED *)packed;
            printf("glVertexPointer(%d, 0x%04X, %d, %p);\n", unpacked->args.size, unpacked->args.type, unpacked->args.stride, unpacked->args.pointer);
            break;
        }
        case glViewport_INDEX: {
            glViewport_PACKED *unpacked = (glViewport_PACKED *)packed;
            printf("glViewport(%d, %d, %d, %d);\n", unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height);
            break;
        }
        case glXChooseFBConfig_INDEX: {
            glXChooseFBConfig_PACKED *unpacked = (glXChooseFBConfig_PACKED *)packed;
            printf("glXChooseFBConfig(%p, %d, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.attrib_list, unpacked->args.nelements);
            break;
        }
        case glXChooseVisual_INDEX: {
            glXChooseVisual_PACKED *unpacked = (glXChooseVisual_PACKED *)packed;
            printf("glXChooseVisual(%p, %d, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.attribList);
            break;
        }
        case glXCopyContext_INDEX: {
            glXCopyContext_PACKED *unpacked = (glXCopyContext_PACKED *)packed;
            printf("glXCopyContext(%p, %p, %p, %lu);\n", unpacked->args.dpy, unpacked->args.src, unpacked->args.dst, unpacked->args.mask);
            break;
        }
        case glXCreateContext_INDEX: {
            glXCreateContext_PACKED *unpacked = (glXCreateContext_PACKED *)packed;
            printf("glXCreateContext(%p, %p, %p, %d);\n", unpacked->args.dpy, unpacked->args.vis, unpacked->args.shareList, unpacked->args.direct);
            break;
        }
        case glXCreateContextAttribsARB_INDEX: {
            glXCreateContextAttribsARB_PACKED *unpacked = (glXCreateContextAttribsARB_PACKED *)packed;
            printf("glXCreateContextAttribsARB(%p, %p, %p, %d, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.share_context, unpacked->args.direct, unpacked->args.attrib_list);
            break;
        }
        case glXCreateGLXPixmap_INDEX: {
            glXCreateGLXPixmap_PACKED *unpacked = (glXCreateGLXPixmap_PACKED *)packed;
            printf("glXCreateGLXPixmap(%p, %p, %lu);\n", unpacked->args.dpy, unpacked->args.visual, unpacked->args.pixmap);
            break;
        }
        case glXCreateNewContext_INDEX: {
            glXCreateNewContext_PACKED *unpacked = (glXCreateNewContext_PACKED *)packed;
            printf("glXCreateNewContext(%p, %p, %d, %p, %d);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.render_type, unpacked->args.share_list, unpacked->args.direct);
            break;
        }
        case glXCreateWindow_INDEX: {
            glXCreateWindow_PACKED *unpacked = (glXCreateWindow_PACKED *)packed;
            printf("glXCreateWindow(%p, %p, %lu, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.win, unpacked->args.attrib_list);
            break;
        }
        case glXDestroyContext_INDEX: {
            glXDestroyContext_PACKED *unpacked = (glXDestroyContext_PACKED *)packed;
            printf("glXDestroyContext(%p, %p);\n", unpacked->args.dpy, unpacked->args.ctx);
            break;
        }
        case glXDestroyGLXPixmap_INDEX: {
            glXDestroyGLXPixmap_PACKED *unpacked = (glXDestroyGLXPixmap_PACKED *)packed;
            printf("glXDestroyGLXPixmap(%p, %p);\n", unpacked->args.dpy, unpacked->args.pixmap);
            break;
        }
        case glXDestroyWindow_INDEX: {
            glXDestroyWindow_PACKED *unpacked = (glXDestroyWindow_PACKED *)packed;
            printf("glXDestroyWindow(%p, %p);\n", unpacked->args.dpy, unpacked->args.win);
            break;
        }
        case glXGetClientString_INDEX: {
            glXGetClientString_PACKED *unpacked = (glXGetClientString_PACKED *)packed;
            printf("glXGetClientString(%p, %d);\n", unpacked->args.display, unpacked->args.name);
            break;
        }
        case glXGetConfig_INDEX: {
            glXGetConfig_PACKED *unpacked = (glXGetConfig_PACKED *)packed;
            printf("glXGetConfig(%p, %p, %d, %p);\n", unpacked->args.display, unpacked->args.visual, unpacked->args.attribute, unpacked->args.value);
            break;
        }
        case glXGetCurrentContext_INDEX: {
            glXGetCurrentContext_PACKED *unpacked = (glXGetCurrentContext_PACKED *)packed;
            printf("glXGetCurrentContext();\n");
            break;
        }
        case glXGetCurrentDisplay_INDEX: {
            glXGetCurrentDisplay_PACKED *unpacked = (glXGetCurrentDisplay_PACKED *)packed;
            printf("glXGetCurrentDisplay();\n");
            break;
        }
        case glXGetCurrentDrawable_INDEX: {
            glXGetCurrentDrawable_PACKED *unpacked = (glXGetCurrentDrawable_PACKED *)packed;
            printf("glXGetCurrentDrawable();\n");
            break;
        }
        case glXGetFBConfigAttrib_INDEX: {
            glXGetFBConfigAttrib_PACKED *unpacked = (glXGetFBConfigAttrib_PACKED *)packed;
            printf("glXGetFBConfigAttrib(%p, %p, %d, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.attribute, unpacked->args.value);
            break;
        }
        case glXGetFBConfigs_INDEX: {
            glXGetFBConfigs_PACKED *unpacked = (glXGetFBConfigs_PACKED *)packed;
            printf("glXGetFBConfigs(%p, %d, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.nelements);
            break;
        }
        case glXGetProcAddress_INDEX: {
            glXGetProcAddress_PACKED *unpacked = (glXGetProcAddress_PACKED *)packed;
            printf("glXGetProcAddress(%p);\n", unpacked->args.procName);
            break;
        }
        case glXGetProcAddressARB_INDEX: {
            glXGetProcAddressARB_PACKED *unpacked = (glXGetProcAddressARB_PACKED *)packed;
            printf("glXGetProcAddressARB(%p);\n", unpacked->args.procName);
            break;
        }
        case glXGetVisualFromFBConfig_INDEX: {
            glXGetVisualFromFBConfig_PACKED *unpacked = (glXGetVisualFromFBConfig_PACKED *)packed;
            printf("glXGetVisualFromFBConfig(%p, %p);\n", unpacked->args.dpy, unpacked->args.config);
            break;
        }
        case glXIsDirect_INDEX: {
            glXIsDirect_PACKED *unpacked = (glXIsDirect_PACKED *)packed;
            printf("glXIsDirect(%p, %p);\n", unpacked->args.dpy, unpacked->args.ctx);
            break;
        }
        case glXMakeContextCurrent_INDEX: {
            glXMakeContextCurrent_PACKED *unpacked = (glXMakeContextCurrent_PACKED *)packed;
            printf("glXMakeContextCurrent(%p, %d, %d, %p);\n", unpacked->args.dpy, unpacked->args.draw, unpacked->args.read, unpacked->args.ctx);
            break;
        }
        case glXMakeCurrent_INDEX: {
            glXMakeCurrent_PACKED *unpacked = (glXMakeCurrent_PACKED *)packed;
            printf("glXMakeCurrent(%p, %d, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.ctx);
            break;
        }
        case glXQueryExtension_INDEX: {
            glXQueryExtension_PACKED *unpacked = (glXQueryExtension_PACKED *)packed;
            printf("glXQueryExtension(%p, %p, %p);\n", unpacked->args.display, unpacked->args.errorBase, unpacked->args.eventBase);
            break;
        }
        case glXQueryExtensionsString_INDEX: {
            glXQueryExtensionsString_PACKED *unpacked = (glXQueryExtensionsString_PACKED *)packed;
            printf("glXQueryExtensionsString(%p, %d);\n", unpacked->args.dpy, unpacked->args.screen);
            break;
        }
        case glXQueryServerString_INDEX: {
            glXQueryServerString_PACKED *unpacked = (glXQueryServerString_PACKED *)packed;
            printf("glXQueryServerString(%p, %d, %d);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.name);
            break;
        }
        case glXQueryVersion_INDEX: {
            glXQueryVersion_PACKED *unpacked = (glXQueryVersion_PACKED *)packed;
            printf("glXQueryVersion(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.maj, unpacked->args.min);
            break;
        }
        case glXReleaseBuffersMESA_INDEX: {
            glXReleaseBuffersMESA_PACKED *unpacked = (glXReleaseBuffersMESA_PACKED *)packed;
            printf("glXReleaseBuffersMESA(%p, %d);\n", unpacked->args.dpy, unpacked->args.drawable);
            break;
        }
        case glXSwapBuffers_INDEX: {
            glXSwapBuffers_PACKED *unpacked = (glXSwapBuffers_PACKED *)packed;
            printf("glXSwapBuffers(%p, %d);\n", unpacked->args.dpy, unpacked->args.drawable);
            break;
        }
        case glXSwapIntervalEXT_INDEX: {
            glXSwapIntervalEXT_PACKED *unpacked = (glXSwapIntervalEXT_PACKED *)packed;
            printf("glXSwapIntervalEXT(%p, %d, %d);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.interval);
            break;
        }
        case glXSwapIntervalMESA_INDEX: {
            glXSwapIntervalMESA_PACKED *unpacked = (glXSwapIntervalMESA_PACKED *)packed;
            printf("glXSwapIntervalMESA(%u);\n", unpacked->args.interval);
            break;
        }
        case glXSwapIntervalSGI_INDEX: {
            glXSwapIntervalSGI_PACKED *unpacked = (glXSwapIntervalSGI_PACKED *)packed;
            printf("glXSwapIntervalSGI(%d);\n", unpacked->args.interval);
            break;
        }
        case glXUseXFont_INDEX: {
            glXUseXFont_PACKED *unpacked = (glXUseXFont_PACKED *)packed;
            printf("glXUseXFont(%lu, %d, %d, %d);\n", unpacked->args.font, unpacked->args.first, unpacked->args.count, unpacked->args.listBase);
            break;
        }
        case glXWaitGL_INDEX: {
            glXWaitGL_PACKED *unpacked = (glXWaitGL_PACKED *)packed;
            printf("glXWaitGL();\n");
            break;
        }
        case glXWaitX_INDEX: {
            glXWaitX_PACKED *unpacked = (glXWaitX_PACKED *)packed;
            printf("glXWaitX();\n");
            break;
        }
    }
}

packed_call_t *_mock_expect(char *name, int index) {
    packed_call_t *packed = mock_cur();
    if (packed == NULL) {
        mock_errorf("%s missing (no calls left)\n", name);
    } else if (packed->index != index) {
        if (verbose_test) {
            mock_print(mock_cur());
        }
        packed_call_t *tmp = packed;
        packed = mock_slide(index);
        if (! packed) {
            mock_errorf("%s missing\n", name);
        } else {
            mock_warningf("unexpected call while looking for %s:\n  ", name);
            mock_print(tmp);
        }
    } else {
        if (verbose_test) {
            mock_print(mock_cur());
        }
        mock_shift();
    }
    return packed;
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
GLXFBConfig * glXChooseFBConfig(Display * dpy, int screen, const int * attrib_list, int * nelements) {
    emit_glXChooseFBConfig(dpy, screen, attrib_list, nelements);
    return (GLXFBConfig *)0;
}
XVisualInfo * glXChooseVisual(Display * dpy, int screen, int * attribList) {
    emit_glXChooseVisual(dpy, screen, attribList);
    return (XVisualInfo *)0;
}
void glXCopyContext(Display * dpy, GLXContext src, GLXContext dst, unsigned long mask) {
    emit_glXCopyContext(dpy, src, dst, mask);
}
GLXContext glXCreateContext(Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct) {
    emit_glXCreateContext(dpy, vis, shareList, direct);
    return (GLXContext)0;
}
GLXContext glXCreateContextAttribsARB(Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list) {
    emit_glXCreateContextAttribsARB(dpy, config, share_context, direct, attrib_list);
    return (GLXContext)0;
}
GLXPixmap glXCreateGLXPixmap(Display * dpy, XVisualInfo * visual, Pixmap pixmap) {
    emit_glXCreateGLXPixmap(dpy, visual, pixmap);
    return (GLXPixmap)0;
}
GLXContext glXCreateNewContext(Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct) {
    emit_glXCreateNewContext(dpy, config, render_type, share_list, direct);
    return (GLXContext)0;
}
GLXWindow glXCreateWindow(Display * dpy, GLXFBConfig config, Window win, const int * attrib_list) {
    emit_glXCreateWindow(dpy, config, win, attrib_list);
    return (GLXWindow)0;
}
void glXDestroyContext(Display * dpy, GLXContext ctx) {
    emit_glXDestroyContext(dpy, ctx);
}
void glXDestroyGLXPixmap(Display * dpy, GLXPixmap pixmap) {
    emit_glXDestroyGLXPixmap(dpy, pixmap);
}
void glXDestroyWindow(Display * dpy, GLXWindow win) {
    emit_glXDestroyWindow(dpy, win);
}
const char * glXGetClientString(Display * display, int name) {
    emit_glXGetClientString(display, name);
    return (const char *)0;
}
int glXGetConfig(Display * display, XVisualInfo * visual, int attribute, int * value) {
    emit_glXGetConfig(display, visual, attribute, value);
    return (int)0;
}
GLXContext glXGetCurrentContext() {
    emit_glXGetCurrentContext();
    return (GLXContext)0;
}
Display * glXGetCurrentDisplay() {
    emit_glXGetCurrentDisplay();
    return (Display *)0;
}
GLXDrawable glXGetCurrentDrawable() {
    emit_glXGetCurrentDrawable();
    return (GLXDrawable)0;
}
int glXGetFBConfigAttrib(Display * dpy, GLXFBConfig config, int attribute, int * value) {
    emit_glXGetFBConfigAttrib(dpy, config, attribute, value);
    return (int)0;
}
GLXFBConfig * glXGetFBConfigs(Display * dpy, int screen, int * nelements) {
    emit_glXGetFBConfigs(dpy, screen, nelements);
    return (GLXFBConfig *)0;
}
__GLXextFuncPtr glXGetProcAddress(const GLubyte * procName) {
    emit_glXGetProcAddress(procName);
    return (__GLXextFuncPtr)0;
}
__GLXextFuncPtr glXGetProcAddressARB(const GLubyte * procName) {
    emit_glXGetProcAddressARB(procName);
    return (__GLXextFuncPtr)0;
}
XVisualInfo * glXGetVisualFromFBConfig(Display * dpy, GLXFBConfig config) {
    emit_glXGetVisualFromFBConfig(dpy, config);
    return (XVisualInfo *)0;
}
Bool glXIsDirect(Display * dpy, GLXContext ctx) {
    emit_glXIsDirect(dpy, ctx);
    return (Bool)0;
}
Bool glXMakeContextCurrent(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx) {
    emit_glXMakeContextCurrent(dpy, draw, read, ctx);
    return (Bool)0;
}
Bool glXMakeCurrent(Display * dpy, GLXDrawable drawable, GLXContext ctx) {
    emit_glXMakeCurrent(dpy, drawable, ctx);
    return (Bool)0;
}
Bool glXQueryExtension(Display * display, int * errorBase, int * eventBase) {
    emit_glXQueryExtension(display, errorBase, eventBase);
    return (Bool)0;
}
const char * glXQueryExtensionsString(Display * dpy, int screen) {
    emit_glXQueryExtensionsString(dpy, screen);
    return (const char *)0;
}
const char * glXQueryServerString(Display * dpy, int screen, int name) {
    emit_glXQueryServerString(dpy, screen, name);
    return (const char *)0;
}
Bool glXQueryVersion(Display * dpy, int * maj, int * min) {
    emit_glXQueryVersion(dpy, maj, min);
    return (Bool)0;
}
Bool glXReleaseBuffersMESA(Display * dpy, GLXDrawable drawable) {
    emit_glXReleaseBuffersMESA(dpy, drawable);
    return (Bool)0;
}
void glXSwapBuffers(Display * dpy, GLXDrawable drawable) {
    emit_glXSwapBuffers(dpy, drawable);
}
void glXSwapIntervalEXT(Display * dpy, GLXDrawable drawable, int interval) {
    emit_glXSwapIntervalEXT(dpy, drawable, interval);
}
int glXSwapIntervalMESA(unsigned int interval) {
    emit_glXSwapIntervalMESA(interval);
    return (int)0;
}
int glXSwapIntervalSGI(int interval) {
    emit_glXSwapIntervalSGI(interval);
    return (int)0;
}
void glXUseXFont(Font font, int first, int count, int listBase) {
    emit_glXUseXFont(font, first, count, listBase);
}
void glXWaitGL() {
    emit_glXWaitGL();
}
void glXWaitX() {
    emit_glXWaitX();
}

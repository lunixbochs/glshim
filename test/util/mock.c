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
        case glXAssociateDMPbufferSGIX_INDEX: return "glXAssociateDMPbufferSGIX";
        case glXBindChannelToWindowSGIX_INDEX: return "glXBindChannelToWindowSGIX";
        case glXBindHyperpipeSGIX_INDEX: return "glXBindHyperpipeSGIX";
        case glXBindSwapBarrierNV_INDEX: return "glXBindSwapBarrierNV";
        case glXBindSwapBarrierSGIX_INDEX: return "glXBindSwapBarrierSGIX";
        case glXBindTexImageEXT_INDEX: return "glXBindTexImageEXT";
        case glXBindVideoCaptureDeviceNV_INDEX: return "glXBindVideoCaptureDeviceNV";
        case glXBindVideoDeviceNV_INDEX: return "glXBindVideoDeviceNV";
        case glXBindVideoImageNV_INDEX: return "glXBindVideoImageNV";
        case glXChangeDrawableAttributes_INDEX: return "glXChangeDrawableAttributes";
        case glXChangeDrawableAttributesSGIX_INDEX: return "glXChangeDrawableAttributesSGIX";
        case glXChannelRectSGIX_INDEX: return "glXChannelRectSGIX";
        case glXChannelRectSyncSGIX_INDEX: return "glXChannelRectSyncSGIX";
        case glXChooseFBConfig_INDEX: return "glXChooseFBConfig";
        case glXChooseFBConfigSGIX_INDEX: return "glXChooseFBConfigSGIX";
        case glXChooseVisual_INDEX: return "glXChooseVisual";
        case glXClientInfo_INDEX: return "glXClientInfo";
        case glXCopyContext_INDEX: return "glXCopyContext";
        case glXCopyImageSubDataNV_INDEX: return "glXCopyImageSubDataNV";
        case glXCopySubBufferMESA_INDEX: return "glXCopySubBufferMESA";
        case glXCreateContext_INDEX: return "glXCreateContext";
        case glXCreateContextAttribsARB_INDEX: return "glXCreateContextAttribsARB";
        case glXCreateContextWithConfigSGIX_INDEX: return "glXCreateContextWithConfigSGIX";
        case glXCreateGLXPbufferSGIX_INDEX: return "glXCreateGLXPbufferSGIX";
        case glXCreateGLXPixmap_INDEX: return "glXCreateGLXPixmap";
        case glXCreateGLXPixmapMESA_INDEX: return "glXCreateGLXPixmapMESA";
        case glXCreateGLXPixmapWithConfigSGIX_INDEX: return "glXCreateGLXPixmapWithConfigSGIX";
        case glXCreateGLXVideoSourceSGIX_INDEX: return "glXCreateGLXVideoSourceSGIX";
        case glXCreateNewContext_INDEX: return "glXCreateNewContext";
        case glXCreatePbuffer_INDEX: return "glXCreatePbuffer";
        case glXCreatePixmap_INDEX: return "glXCreatePixmap";
        case glXCreateWindow_INDEX: return "glXCreateWindow";
        case glXCushionSGI_INDEX: return "glXCushionSGI";
        case glXDestroyContext_INDEX: return "glXDestroyContext";
        case glXDestroyGLXPbufferSGIX_INDEX: return "glXDestroyGLXPbufferSGIX";
        case glXDestroyGLXPixmap_INDEX: return "glXDestroyGLXPixmap";
        case glXDestroyGLXVideoSourceSGIX_INDEX: return "glXDestroyGLXVideoSourceSGIX";
        case glXDestroyHyperpipeConfigSGIX_INDEX: return "glXDestroyHyperpipeConfigSGIX";
        case glXDestroyPbuffer_INDEX: return "glXDestroyPbuffer";
        case glXDestroyPixmap_INDEX: return "glXDestroyPixmap";
        case glXDestroyWindow_INDEX: return "glXDestroyWindow";
        case glXEnumerateVideoCaptureDevicesNV_INDEX: return "glXEnumerateVideoCaptureDevicesNV";
        case glXEnumerateVideoDevicesNV_INDEX: return "glXEnumerateVideoDevicesNV";
        case glXFreeContextEXT_INDEX: return "glXFreeContextEXT";
        case glXGetAGPOffsetMESA_INDEX: return "glXGetAGPOffsetMESA";
        case glXGetClientString_INDEX: return "glXGetClientString";
        case glXGetConfig_INDEX: return "glXGetConfig";
        case glXGetContextIDEXT_INDEX: return "glXGetContextIDEXT";
        case glXGetCurrentContext_INDEX: return "glXGetCurrentContext";
        case glXGetCurrentDisplay_INDEX: return "glXGetCurrentDisplay";
        case glXGetCurrentDisplayEXT_INDEX: return "glXGetCurrentDisplayEXT";
        case glXGetCurrentDrawable_INDEX: return "glXGetCurrentDrawable";
        case glXGetCurrentReadDrawable_INDEX: return "glXGetCurrentReadDrawable";
        case glXGetCurrentReadDrawableSGI_INDEX: return "glXGetCurrentReadDrawableSGI";
        case glXGetDrawableAttributes_INDEX: return "glXGetDrawableAttributes";
        case glXGetDrawableAttributesSGIX_INDEX: return "glXGetDrawableAttributesSGIX";
        case glXGetFBConfigAttrib_INDEX: return "glXGetFBConfigAttrib";
        case glXGetFBConfigAttribSGIX_INDEX: return "glXGetFBConfigAttribSGIX";
        case glXGetFBConfigFromVisualSGIX_INDEX: return "glXGetFBConfigFromVisualSGIX";
        case glXGetFBConfigs_INDEX: return "glXGetFBConfigs";
        case glXGetFBConfigsSGIX_INDEX: return "glXGetFBConfigsSGIX";
        case glXGetMscRateOML_INDEX: return "glXGetMscRateOML";
        case glXGetProcAddress_INDEX: return "glXGetProcAddress";
        case glXGetProcAddressARB_INDEX: return "glXGetProcAddressARB";
        case glXGetSelectedEvent_INDEX: return "glXGetSelectedEvent";
        case glXGetSelectedEventSGIX_INDEX: return "glXGetSelectedEventSGIX";
        case glXGetSyncValuesOML_INDEX: return "glXGetSyncValuesOML";
        case glXGetTransparentIndexSUN_INDEX: return "glXGetTransparentIndexSUN";
        case glXGetVideoDeviceNV_INDEX: return "glXGetVideoDeviceNV";
        case glXGetVideoInfoNV_INDEX: return "glXGetVideoInfoNV";
        case glXGetVideoSyncSGI_INDEX: return "glXGetVideoSyncSGI";
        case glXGetVisualConfigs_INDEX: return "glXGetVisualConfigs";
        case glXGetVisualFromFBConfig_INDEX: return "glXGetVisualFromFBConfig";
        case glXGetVisualFromFBConfigSGIX_INDEX: return "glXGetVisualFromFBConfigSGIX";
        case glXHyperpipeAttribSGIX_INDEX: return "glXHyperpipeAttribSGIX";
        case glXHyperpipeConfigSGIX_INDEX: return "glXHyperpipeConfigSGIX";
        case glXImportContextEXT_INDEX: return "glXImportContextEXT";
        case glXIsDirect_INDEX: return "glXIsDirect";
        case glXJoinSwapGroupNV_INDEX: return "glXJoinSwapGroupNV";
        case glXJoinSwapGroupSGIX_INDEX: return "glXJoinSwapGroupSGIX";
        case glXLockVideoCaptureDeviceNV_INDEX: return "glXLockVideoCaptureDeviceNV";
        case glXMakeContextCurrent_INDEX: return "glXMakeContextCurrent";
        case glXMakeCurrent_INDEX: return "glXMakeCurrent";
        case glXMakeCurrentReadSGI_INDEX: return "glXMakeCurrentReadSGI";
        case glXQueryChannelDeltasSGIX_INDEX: return "glXQueryChannelDeltasSGIX";
        case glXQueryChannelRectSGIX_INDEX: return "glXQueryChannelRectSGIX";
        case glXQueryContext_INDEX: return "glXQueryContext";
        case glXQueryContextInfoEXT_INDEX: return "glXQueryContextInfoEXT";
        case glXQueryDrawable_INDEX: return "glXQueryDrawable";
        case glXQueryExtension_INDEX: return "glXQueryExtension";
        case glXQueryExtensionsString_INDEX: return "glXQueryExtensionsString";
        case glXQueryFrameCountNV_INDEX: return "glXQueryFrameCountNV";
        case glXQueryGLXPbufferSGIX_INDEX: return "glXQueryGLXPbufferSGIX";
        case glXQueryHyperpipeAttribSGIX_INDEX: return "glXQueryHyperpipeAttribSGIX";
        case glXQueryHyperpipeBestAttribSGIX_INDEX: return "glXQueryHyperpipeBestAttribSGIX";
        case glXQueryHyperpipeConfigSGIX_INDEX: return "glXQueryHyperpipeConfigSGIX";
        case glXQueryHyperpipeNetworkSGIX_INDEX: return "glXQueryHyperpipeNetworkSGIX";
        case glXQueryMaxSwapBarriersSGIX_INDEX: return "glXQueryMaxSwapBarriersSGIX";
        case glXQueryMaxSwapGroupsNV_INDEX: return "glXQueryMaxSwapGroupsNV";
        case glXQueryServerString_INDEX: return "glXQueryServerString";
        case glXQuerySwapGroupNV_INDEX: return "glXQuerySwapGroupNV";
        case glXQueryVersion_INDEX: return "glXQueryVersion";
        case glXQueryVideoCaptureDeviceNV_INDEX: return "glXQueryVideoCaptureDeviceNV";
        case glXReleaseBuffersMESA_INDEX: return "glXReleaseBuffersMESA";
        case glXReleaseTexImageEXT_INDEX: return "glXReleaseTexImageEXT";
        case glXReleaseVideoCaptureDeviceNV_INDEX: return "glXReleaseVideoCaptureDeviceNV";
        case glXReleaseVideoDeviceNV_INDEX: return "glXReleaseVideoDeviceNV";
        case glXReleaseVideoImageNV_INDEX: return "glXReleaseVideoImageNV";
        case glXRender_INDEX: return "glXRender";
        case glXRenderLarge_INDEX: return "glXRenderLarge";
        case glXResetFrameCountNV_INDEX: return "glXResetFrameCountNV";
        case glXSelectEvent_INDEX: return "glXSelectEvent";
        case glXSelectEventSGIX_INDEX: return "glXSelectEventSGIX";
        case glXSendPbufferToVideoNV_INDEX: return "glXSendPbufferToVideoNV";
        case glXSet3DfxModeMESA_INDEX: return "glXSet3DfxModeMESA";
        case glXSwapBuffers_INDEX: return "glXSwapBuffers";
        case glXSwapBuffersMscOML_INDEX: return "glXSwapBuffersMscOML";
        case glXSwapIntervalEXT_INDEX: return "glXSwapIntervalEXT";
        case glXSwapIntervalMESA_INDEX: return "glXSwapIntervalMESA";
        case glXSwapIntervalSGI_INDEX: return "glXSwapIntervalSGI";
        case glXUseXFont_INDEX: return "glXUseXFont";
        case glXVendorPrivate_INDEX: return "glXVendorPrivate";
        case glXVendorPrivateWithReply_INDEX: return "glXVendorPrivateWithReply";
        case glXWaitForMscOML_INDEX: return "glXWaitForMscOML";
        case glXWaitForSbcOML_INDEX: return "glXWaitForSbcOML";
        case glXWaitGL_INDEX: return "glXWaitGL";
        case glXWaitVideoSyncSGI_INDEX: return "glXWaitVideoSyncSGI";
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
            PACKED_glActiveTexture *unpacked = (PACKED_glActiveTexture *)packed;
            printf("glActiveTexture(0x%04X);\n", unpacked->args.texture);
            break;
        }
        case glAlphaFunc_INDEX: {
            PACKED_glAlphaFunc *unpacked = (PACKED_glAlphaFunc *)packed;
            printf("glAlphaFunc(0x%04X, %0.2f);\n", unpacked->args.func, unpacked->args.ref);
            break;
        }
        case glAlphaFuncx_INDEX: {
            PACKED_glAlphaFuncx *unpacked = (PACKED_glAlphaFuncx *)packed;
            printf("glAlphaFuncx(0x%04X, %d);\n", unpacked->args.func, unpacked->args.ref);
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
            printf("glBlendColorOES(%0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
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
            printf("glBufferData(0x%04X, %td, %p, 0x%04X);\n", unpacked->args.target, unpacked->args.size, unpacked->args.data, unpacked->args.usage);
            break;
        }
        case glBufferSubData_INDEX: {
            PACKED_glBufferSubData *unpacked = (PACKED_glBufferSubData *)packed;
            printf("glBufferSubData(0x%04X, %td, %td, %p);\n", unpacked->args.target, unpacked->args.offset, unpacked->args.size, unpacked->args.data);
            break;
        }
        case glClear_INDEX: {
            PACKED_glClear *unpacked = (PACKED_glClear *)packed;
            printf("glClear(%d);\n", unpacked->args.mask);
            break;
        }
        case glClearColor_INDEX: {
            PACKED_glClearColor *unpacked = (PACKED_glClearColor *)packed;
            printf("glClearColor(%0.2f, %0.2f, %0.2f, %0.2f);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glClearColorx_INDEX: {
            PACKED_glClearColorx *unpacked = (PACKED_glClearColorx *)packed;
            printf("glClearColorx(%d, %d, %d, %d);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
            break;
        }
        case glClearDepthf_INDEX: {
            PACKED_glClearDepthf *unpacked = (PACKED_glClearDepthf *)packed;
            printf("glClearDepthf(%0.2f);\n", unpacked->args.depth);
            break;
        }
        case glClearDepthx_INDEX: {
            PACKED_glClearDepthx *unpacked = (PACKED_glClearDepthx *)packed;
            printf("glClearDepthx(%d);\n", unpacked->args.depth);
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
            printf("glColor4x(%d, %d, %d, %d);\n", unpacked->args.red, unpacked->args.green, unpacked->args.blue, unpacked->args.alpha);
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
            printf("glDepthRangef(%0.2f, %0.2f);\n", unpacked->args.near, unpacked->args.far);
            break;
        }
        case glDepthRangex_INDEX: {
            PACKED_glDepthRangex *unpacked = (PACKED_glDepthRangex *)packed;
            printf("glDepthRangex(%d, %d);\n", unpacked->args.near, unpacked->args.far);
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
            printf("glFogx(0x%04X, %d);\n", unpacked->args.pname, unpacked->args.param);
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
            printf("glFrustumx(%d, %d, %d, %d, %d, %d);\n", unpacked->args.left, unpacked->args.right, unpacked->args.bottom, unpacked->args.top, unpacked->args.near, unpacked->args.far);
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
            printf("glLightModelx(0x%04X, %d);\n", unpacked->args.pname, unpacked->args.param);
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
            printf("glLightx(0x%04X, 0x%04X, %d);\n", unpacked->args.light, unpacked->args.pname, unpacked->args.param);
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
            printf("glLineWidthx(%d);\n", unpacked->args.width);
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
            printf("glMaterialx(0x%04X, 0x%04X, %d);\n", unpacked->args.face, unpacked->args.pname, unpacked->args.param);
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
            printf("glMultiTexCoord4x(0x%04X, %d, %d, %d, %d);\n", unpacked->args.target, unpacked->args.s, unpacked->args.t, unpacked->args.r, unpacked->args.q);
            break;
        }
        case glNormal3f_INDEX: {
            PACKED_glNormal3f *unpacked = (PACKED_glNormal3f *)packed;
            printf("glNormal3f(%0.2f, %0.2f, %0.2f);\n", unpacked->args.nx, unpacked->args.ny, unpacked->args.nz);
            break;
        }
        case glNormal3x_INDEX: {
            PACKED_glNormal3x *unpacked = (PACKED_glNormal3x *)packed;
            printf("glNormal3x(%d, %d, %d);\n", unpacked->args.nx, unpacked->args.ny, unpacked->args.nz);
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
            printf("glOrthox(%d, %d, %d, %d, %d, %d);\n", unpacked->args.left, unpacked->args.right, unpacked->args.bottom, unpacked->args.top, unpacked->args.near, unpacked->args.far);
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
            printf("glPointParameterx(0x%04X, %d);\n", unpacked->args.pname, unpacked->args.param);
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
            printf("glPointSizex(%d);\n", unpacked->args.size);
            break;
        }
        case glPolygonOffset_INDEX: {
            PACKED_glPolygonOffset *unpacked = (PACKED_glPolygonOffset *)packed;
            printf("glPolygonOffset(%0.2f, %0.2f);\n", unpacked->args.factor, unpacked->args.units);
            break;
        }
        case glPolygonOffsetx_INDEX: {
            PACKED_glPolygonOffsetx *unpacked = (PACKED_glPolygonOffsetx *)packed;
            printf("glPolygonOffsetx(%d, %d);\n", unpacked->args.factor, unpacked->args.units);
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
            printf("glRotatex(%d, %d, %d, %d);\n", unpacked->args.angle, unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glSampleCoverage_INDEX: {
            PACKED_glSampleCoverage *unpacked = (PACKED_glSampleCoverage *)packed;
            printf("glSampleCoverage(%0.2f, %d);\n", unpacked->args.value, unpacked->args.invert);
            break;
        }
        case glSampleCoveragex_INDEX: {
            PACKED_glSampleCoveragex *unpacked = (PACKED_glSampleCoveragex *)packed;
            printf("glSampleCoveragex(%d, %d);\n", unpacked->args.value, unpacked->args.invert);
            break;
        }
        case glScalef_INDEX: {
            PACKED_glScalef *unpacked = (PACKED_glScalef *)packed;
            printf("glScalef(%0.2f, %0.2f, %0.2f);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
            break;
        }
        case glScalex_INDEX: {
            PACKED_glScalex *unpacked = (PACKED_glScalex *)packed;
            printf("glScalex(%d, %d, %d);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
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
            printf("glTexEnvx(0x%04X, 0x%04X, %d);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
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
            printf("glTexParameterx(0x%04X, 0x%04X, %d);\n", unpacked->args.target, unpacked->args.pname, unpacked->args.param);
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
            printf("glTranslatex(%d, %d, %d);\n", unpacked->args.x, unpacked->args.y, unpacked->args.z);
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
        case glXAssociateDMPbufferSGIX_INDEX: {
            PACKED_glXAssociateDMPbufferSGIX *unpacked = (PACKED_glXAssociateDMPbufferSGIX *)packed;
            printf("glXAssociateDMPbufferSGIX(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.pbuffer, unpacked->args.params, unpacked->args.dmbuffer);
            break;
        }
        case glXBindChannelToWindowSGIX_INDEX: {
            PACKED_glXBindChannelToWindowSGIX *unpacked = (PACKED_glXBindChannelToWindowSGIX *)packed;
            printf("glXBindChannelToWindowSGIX(%p, %p, %p, %p);\n", unpacked->args.display, unpacked->args.screen, unpacked->args.channel, unpacked->args.window);
            break;
        }
        case glXBindHyperpipeSGIX_INDEX: {
            PACKED_glXBindHyperpipeSGIX *unpacked = (PACKED_glXBindHyperpipeSGIX *)packed;
            printf("glXBindHyperpipeSGIX(%p, %p);\n", unpacked->args.dpy, unpacked->args.hpId);
            break;
        }
        case glXBindSwapBarrierNV_INDEX: {
            PACKED_glXBindSwapBarrierNV *unpacked = (PACKED_glXBindSwapBarrierNV *)packed;
            printf("glXBindSwapBarrierNV(%p, %u, %u);\n", unpacked->args.dpy, unpacked->args.group, unpacked->args.barrier);
            break;
        }
        case glXBindSwapBarrierSGIX_INDEX: {
            PACKED_glXBindSwapBarrierSGIX *unpacked = (PACKED_glXBindSwapBarrierSGIX *)packed;
            printf("glXBindSwapBarrierSGIX(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.barrier);
            break;
        }
        case glXBindTexImageEXT_INDEX: {
            PACKED_glXBindTexImageEXT *unpacked = (PACKED_glXBindTexImageEXT *)packed;
            printf("glXBindTexImageEXT(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.buffer, unpacked->args.attrib_list);
            break;
        }
        case glXBindVideoCaptureDeviceNV_INDEX: {
            PACKED_glXBindVideoCaptureDeviceNV *unpacked = (PACKED_glXBindVideoCaptureDeviceNV *)packed;
            printf("glXBindVideoCaptureDeviceNV(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.video_capture_slot, unpacked->args.device);
            break;
        }
        case glXBindVideoDeviceNV_INDEX: {
            PACKED_glXBindVideoDeviceNV *unpacked = (PACKED_glXBindVideoDeviceNV *)packed;
            printf("glXBindVideoDeviceNV(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.video_slot, unpacked->args.video_device, unpacked->args.attrib_list);
            break;
        }
        case glXBindVideoImageNV_INDEX: {
            PACKED_glXBindVideoImageNV *unpacked = (PACKED_glXBindVideoImageNV *)packed;
            printf("glXBindVideoImageNV(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.VideoDevice, unpacked->args.pbuf, unpacked->args.iVideoBuffer);
            break;
        }
        case glXChangeDrawableAttributes_INDEX: {
            PACKED_glXChangeDrawableAttributes *unpacked = (PACKED_glXChangeDrawableAttributes *)packed;
            printf("glXChangeDrawableAttributes(%p);\n", unpacked->args.drawable);
            break;
        }
        case glXChangeDrawableAttributesSGIX_INDEX: {
            PACKED_glXChangeDrawableAttributesSGIX *unpacked = (PACKED_glXChangeDrawableAttributesSGIX *)packed;
            printf("glXChangeDrawableAttributesSGIX(%p);\n", unpacked->args.drawable);
            break;
        }
        case glXChannelRectSGIX_INDEX: {
            PACKED_glXChannelRectSGIX *unpacked = (PACKED_glXChannelRectSGIX *)packed;
            printf("glXChannelRectSGIX(%p, %p, %p, %p, %p, %p, %p);\n", unpacked->args.display, unpacked->args.screen, unpacked->args.channel, unpacked->args.x, unpacked->args.y, unpacked->args.w, unpacked->args.h);
            break;
        }
        case glXChannelRectSyncSGIX_INDEX: {
            PACKED_glXChannelRectSyncSGIX *unpacked = (PACKED_glXChannelRectSyncSGIX *)packed;
            printf("glXChannelRectSyncSGIX(%p, %p, %p, 0x%04X);\n", unpacked->args.display, unpacked->args.screen, unpacked->args.channel, unpacked->args.synctype);
            break;
        }
        case glXChooseFBConfig_INDEX: {
            PACKED_glXChooseFBConfig *unpacked = (PACKED_glXChooseFBConfig *)packed;
            printf("glXChooseFBConfig(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.attrib_list, unpacked->args.nelements);
            break;
        }
        case glXChooseFBConfigSGIX_INDEX: {
            PACKED_glXChooseFBConfigSGIX *unpacked = (PACKED_glXChooseFBConfigSGIX *)packed;
            printf("glXChooseFBConfigSGIX(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.attrib_list, unpacked->args.nelements);
            break;
        }
        case glXChooseVisual_INDEX: {
            PACKED_glXChooseVisual *unpacked = (PACKED_glXChooseVisual *)packed;
            printf("glXChooseVisual(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.attribList);
            break;
        }
        case glXClientInfo_INDEX: {
            PACKED_glXClientInfo *unpacked = (PACKED_glXClientInfo *)packed;
            printf("glXClientInfo();\n");
            break;
        }
        case glXCopyContext_INDEX: {
            PACKED_glXCopyContext *unpacked = (PACKED_glXCopyContext *)packed;
            printf("glXCopyContext(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.src, unpacked->args.dst, unpacked->args.mask);
            break;
        }
        case glXCopyImageSubDataNV_INDEX: {
            PACKED_glXCopyImageSubDataNV *unpacked = (PACKED_glXCopyImageSubDataNV *)packed;
            printf("glXCopyImageSubDataNV(%p, %p, %u, 0x%04X, %d, %d, %d, %d, %p, %u, 0x%04X, %d, %d, %d, %d, %d, %d, %d);\n", unpacked->args.dpy, unpacked->args.srcCtx, unpacked->args.srcName, unpacked->args.srcTarget, unpacked->args.srcLevel, unpacked->args.srcX, unpacked->args.srcY, unpacked->args.srcZ, unpacked->args.dstCtx, unpacked->args.dstName, unpacked->args.dstTarget, unpacked->args.dstLevel, unpacked->args.dstX, unpacked->args.dstY, unpacked->args.dstZ, unpacked->args.width, unpacked->args.height, unpacked->args.depth);
            break;
        }
        case glXCopySubBufferMESA_INDEX: {
            PACKED_glXCopySubBufferMESA *unpacked = (PACKED_glXCopySubBufferMESA *)packed;
            printf("glXCopySubBufferMESA(%p, %p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.x, unpacked->args.y, unpacked->args.width, unpacked->args.height);
            break;
        }
        case glXCreateContext_INDEX: {
            PACKED_glXCreateContext *unpacked = (PACKED_glXCreateContext *)packed;
            printf("glXCreateContext(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.vis, unpacked->args.shareList, unpacked->args.direct);
            break;
        }
        case glXCreateContextAttribsARB_INDEX: {
            PACKED_glXCreateContextAttribsARB *unpacked = (PACKED_glXCreateContextAttribsARB *)packed;
            printf("glXCreateContextAttribsARB(%p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.share_context, unpacked->args.direct, unpacked->args.attrib_list);
            break;
        }
        case glXCreateContextWithConfigSGIX_INDEX: {
            PACKED_glXCreateContextWithConfigSGIX *unpacked = (PACKED_glXCreateContextWithConfigSGIX *)packed;
            printf("glXCreateContextWithConfigSGIX(%p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.render_type, unpacked->args.share_list, unpacked->args.direct);
            break;
        }
        case glXCreateGLXPbufferSGIX_INDEX: {
            PACKED_glXCreateGLXPbufferSGIX *unpacked = (PACKED_glXCreateGLXPbufferSGIX *)packed;
            printf("glXCreateGLXPbufferSGIX(%p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.width, unpacked->args.height, unpacked->args.attrib_list);
            break;
        }
        case glXCreateGLXPixmap_INDEX: {
            PACKED_glXCreateGLXPixmap *unpacked = (PACKED_glXCreateGLXPixmap *)packed;
            printf("glXCreateGLXPixmap(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.visual, unpacked->args.pixmap);
            break;
        }
        case glXCreateGLXPixmapMESA_INDEX: {
            PACKED_glXCreateGLXPixmapMESA *unpacked = (PACKED_glXCreateGLXPixmapMESA *)packed;
            printf("glXCreateGLXPixmapMESA(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.visual, unpacked->args.pixmap, unpacked->args.cmap);
            break;
        }
        case glXCreateGLXPixmapWithConfigSGIX_INDEX: {
            PACKED_glXCreateGLXPixmapWithConfigSGIX *unpacked = (PACKED_glXCreateGLXPixmapWithConfigSGIX *)packed;
            printf("glXCreateGLXPixmapWithConfigSGIX(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.pixmap);
            break;
        }
        case glXCreateGLXVideoSourceSGIX_INDEX: {
            PACKED_glXCreateGLXVideoSourceSGIX *unpacked = (PACKED_glXCreateGLXVideoSourceSGIX *)packed;
            printf("glXCreateGLXVideoSourceSGIX(%p, %p, %p, %p, %p, %p);\n", unpacked->args.display, unpacked->args.screen, unpacked->args.server, unpacked->args.path, unpacked->args.nodeClass, unpacked->args.drainNode);
            break;
        }
        case glXCreateNewContext_INDEX: {
            PACKED_glXCreateNewContext *unpacked = (PACKED_glXCreateNewContext *)packed;
            printf("glXCreateNewContext(%p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.render_type, unpacked->args.share_list, unpacked->args.direct);
            break;
        }
        case glXCreatePbuffer_INDEX: {
            PACKED_glXCreatePbuffer *unpacked = (PACKED_glXCreatePbuffer *)packed;
            printf("glXCreatePbuffer(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.attrib_list);
            break;
        }
        case glXCreatePixmap_INDEX: {
            PACKED_glXCreatePixmap *unpacked = (PACKED_glXCreatePixmap *)packed;
            printf("glXCreatePixmap(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.pixmap, unpacked->args.attrib_list);
            break;
        }
        case glXCreateWindow_INDEX: {
            PACKED_glXCreateWindow *unpacked = (PACKED_glXCreateWindow *)packed;
            printf("glXCreateWindow(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.win, unpacked->args.attrib_list);
            break;
        }
        case glXCushionSGI_INDEX: {
            PACKED_glXCushionSGI *unpacked = (PACKED_glXCushionSGI *)packed;
            printf("glXCushionSGI(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.window, unpacked->args.cushion);
            break;
        }
        case glXDestroyContext_INDEX: {
            PACKED_glXDestroyContext *unpacked = (PACKED_glXDestroyContext *)packed;
            printf("glXDestroyContext(%p, %p);\n", unpacked->args.dpy, unpacked->args.ctx);
            break;
        }
        case glXDestroyGLXPbufferSGIX_INDEX: {
            PACKED_glXDestroyGLXPbufferSGIX *unpacked = (PACKED_glXDestroyGLXPbufferSGIX *)packed;
            printf("glXDestroyGLXPbufferSGIX(%p, %p);\n", unpacked->args.dpy, unpacked->args.pbuf);
            break;
        }
        case glXDestroyGLXPixmap_INDEX: {
            PACKED_glXDestroyGLXPixmap *unpacked = (PACKED_glXDestroyGLXPixmap *)packed;
            printf("glXDestroyGLXPixmap(%p, %p);\n", unpacked->args.dpy, unpacked->args.pixmap);
            break;
        }
        case glXDestroyGLXVideoSourceSGIX_INDEX: {
            PACKED_glXDestroyGLXVideoSourceSGIX *unpacked = (PACKED_glXDestroyGLXVideoSourceSGIX *)packed;
            printf("glXDestroyGLXVideoSourceSGIX(%p, %p);\n", unpacked->args.dpy, unpacked->args.glxvideosource);
            break;
        }
        case glXDestroyHyperpipeConfigSGIX_INDEX: {
            PACKED_glXDestroyHyperpipeConfigSGIX *unpacked = (PACKED_glXDestroyHyperpipeConfigSGIX *)packed;
            printf("glXDestroyHyperpipeConfigSGIX(%p, %p);\n", unpacked->args.dpy, unpacked->args.hpId);
            break;
        }
        case glXDestroyPbuffer_INDEX: {
            PACKED_glXDestroyPbuffer *unpacked = (PACKED_glXDestroyPbuffer *)packed;
            printf("glXDestroyPbuffer(%p, %p);\n", unpacked->args.dpy, unpacked->args.pbuf);
            break;
        }
        case glXDestroyPixmap_INDEX: {
            PACKED_glXDestroyPixmap *unpacked = (PACKED_glXDestroyPixmap *)packed;
            printf("glXDestroyPixmap(%p, %p);\n", unpacked->args.dpy, unpacked->args.pixmap);
            break;
        }
        case glXDestroyWindow_INDEX: {
            PACKED_glXDestroyWindow *unpacked = (PACKED_glXDestroyWindow *)packed;
            printf("glXDestroyWindow(%p, %p);\n", unpacked->args.dpy, unpacked->args.win);
            break;
        }
        case glXEnumerateVideoCaptureDevicesNV_INDEX: {
            PACKED_glXEnumerateVideoCaptureDevicesNV *unpacked = (PACKED_glXEnumerateVideoCaptureDevicesNV *)packed;
            printf("glXEnumerateVideoCaptureDevicesNV(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.nelements);
            break;
        }
        case glXEnumerateVideoDevicesNV_INDEX: {
            PACKED_glXEnumerateVideoDevicesNV *unpacked = (PACKED_glXEnumerateVideoDevicesNV *)packed;
            printf("glXEnumerateVideoDevicesNV(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.nelements);
            break;
        }
        case glXFreeContextEXT_INDEX: {
            PACKED_glXFreeContextEXT *unpacked = (PACKED_glXFreeContextEXT *)packed;
            printf("glXFreeContextEXT(%p, %p);\n", unpacked->args.dpy, unpacked->args.context);
            break;
        }
        case glXGetAGPOffsetMESA_INDEX: {
            PACKED_glXGetAGPOffsetMESA *unpacked = (PACKED_glXGetAGPOffsetMESA *)packed;
            printf("glXGetAGPOffsetMESA(%p);\n", unpacked->args.pointer);
            break;
        }
        case glXGetClientString_INDEX: {
            PACKED_glXGetClientString *unpacked = (PACKED_glXGetClientString *)packed;
            printf("glXGetClientString(%p, %p);\n", unpacked->args.display, unpacked->args.name);
            break;
        }
        case glXGetConfig_INDEX: {
            PACKED_glXGetConfig *unpacked = (PACKED_glXGetConfig *)packed;
            printf("glXGetConfig(%p, %p, %p, %p);\n", unpacked->args.display, unpacked->args.visual, unpacked->args.attribute, unpacked->args.value);
            break;
        }
        case glXGetContextIDEXT_INDEX: {
            PACKED_glXGetContextIDEXT *unpacked = (PACKED_glXGetContextIDEXT *)packed;
            printf("glXGetContextIDEXT(%p);\n", unpacked->args.context);
            break;
        }
        case glXGetCurrentContext_INDEX: {
            PACKED_glXGetCurrentContext *unpacked = (PACKED_glXGetCurrentContext *)packed;
            printf("glXGetCurrentContext();\n");
            break;
        }
        case glXGetCurrentDisplay_INDEX: {
            PACKED_glXGetCurrentDisplay *unpacked = (PACKED_glXGetCurrentDisplay *)packed;
            printf("glXGetCurrentDisplay();\n");
            break;
        }
        case glXGetCurrentDisplayEXT_INDEX: {
            PACKED_glXGetCurrentDisplayEXT *unpacked = (PACKED_glXGetCurrentDisplayEXT *)packed;
            printf("glXGetCurrentDisplayEXT();\n");
            break;
        }
        case glXGetCurrentDrawable_INDEX: {
            PACKED_glXGetCurrentDrawable *unpacked = (PACKED_glXGetCurrentDrawable *)packed;
            printf("glXGetCurrentDrawable();\n");
            break;
        }
        case glXGetCurrentReadDrawable_INDEX: {
            PACKED_glXGetCurrentReadDrawable *unpacked = (PACKED_glXGetCurrentReadDrawable *)packed;
            printf("glXGetCurrentReadDrawable();\n");
            break;
        }
        case glXGetCurrentReadDrawableSGI_INDEX: {
            PACKED_glXGetCurrentReadDrawableSGI *unpacked = (PACKED_glXGetCurrentReadDrawableSGI *)packed;
            printf("glXGetCurrentReadDrawableSGI();\n");
            break;
        }
        case glXGetDrawableAttributes_INDEX: {
            PACKED_glXGetDrawableAttributes *unpacked = (PACKED_glXGetDrawableAttributes *)packed;
            printf("glXGetDrawableAttributes(%p);\n", unpacked->args.drawable);
            break;
        }
        case glXGetDrawableAttributesSGIX_INDEX: {
            PACKED_glXGetDrawableAttributesSGIX *unpacked = (PACKED_glXGetDrawableAttributesSGIX *)packed;
            printf("glXGetDrawableAttributesSGIX(%p);\n", unpacked->args.drawable);
            break;
        }
        case glXGetFBConfigAttrib_INDEX: {
            PACKED_glXGetFBConfigAttrib *unpacked = (PACKED_glXGetFBConfigAttrib *)packed;
            printf("glXGetFBConfigAttrib(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.attribute, unpacked->args.value);
            break;
        }
        case glXGetFBConfigAttribSGIX_INDEX: {
            PACKED_glXGetFBConfigAttribSGIX *unpacked = (PACKED_glXGetFBConfigAttribSGIX *)packed;
            printf("glXGetFBConfigAttribSGIX(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.config, unpacked->args.attribute, unpacked->args.value);
            break;
        }
        case glXGetFBConfigFromVisualSGIX_INDEX: {
            PACKED_glXGetFBConfigFromVisualSGIX *unpacked = (PACKED_glXGetFBConfigFromVisualSGIX *)packed;
            printf("glXGetFBConfigFromVisualSGIX(%p, %p);\n", unpacked->args.dpy, unpacked->args.vis);
            break;
        }
        case glXGetFBConfigs_INDEX: {
            PACKED_glXGetFBConfigs *unpacked = (PACKED_glXGetFBConfigs *)packed;
            printf("glXGetFBConfigs(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.nelements);
            break;
        }
        case glXGetFBConfigsSGIX_INDEX: {
            PACKED_glXGetFBConfigsSGIX *unpacked = (PACKED_glXGetFBConfigsSGIX *)packed;
            printf("glXGetFBConfigsSGIX();\n");
            break;
        }
        case glXGetMscRateOML_INDEX: {
            PACKED_glXGetMscRateOML *unpacked = (PACKED_glXGetMscRateOML *)packed;
            printf("glXGetMscRateOML(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.numerator, unpacked->args.denominator);
            break;
        }
        case glXGetProcAddress_INDEX: {
            PACKED_glXGetProcAddress *unpacked = (PACKED_glXGetProcAddress *)packed;
            printf("glXGetProcAddress(%p);\n", unpacked->args.procName);
            break;
        }
        case glXGetProcAddressARB_INDEX: {
            PACKED_glXGetProcAddressARB *unpacked = (PACKED_glXGetProcAddressARB *)packed;
            printf("glXGetProcAddressARB(%p);\n", unpacked->args.procName);
            break;
        }
        case glXGetSelectedEvent_INDEX: {
            PACKED_glXGetSelectedEvent *unpacked = (PACKED_glXGetSelectedEvent *)packed;
            printf("glXGetSelectedEvent(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.draw, unpacked->args.event_mask);
            break;
        }
        case glXGetSelectedEventSGIX_INDEX: {
            PACKED_glXGetSelectedEventSGIX *unpacked = (PACKED_glXGetSelectedEventSGIX *)packed;
            printf("glXGetSelectedEventSGIX(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.mask);
            break;
        }
        case glXGetSyncValuesOML_INDEX: {
            PACKED_glXGetSyncValuesOML *unpacked = (PACKED_glXGetSyncValuesOML *)packed;
            printf("glXGetSyncValuesOML(%p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.ust, unpacked->args.msc, unpacked->args.sbc);
            break;
        }
        case glXGetTransparentIndexSUN_INDEX: {
            PACKED_glXGetTransparentIndexSUN *unpacked = (PACKED_glXGetTransparentIndexSUN *)packed;
            printf("glXGetTransparentIndexSUN(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.overlay, unpacked->args.underlay, unpacked->args.pTransparentIndex);
            break;
        }
        case glXGetVideoDeviceNV_INDEX: {
            PACKED_glXGetVideoDeviceNV *unpacked = (PACKED_glXGetVideoDeviceNV *)packed;
            printf("glXGetVideoDeviceNV(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.numVideoDevices, unpacked->args.pVideoDevice);
            break;
        }
        case glXGetVideoInfoNV_INDEX: {
            PACKED_glXGetVideoInfoNV *unpacked = (PACKED_glXGetVideoInfoNV *)packed;
            printf("glXGetVideoInfoNV(%p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.VideoDevice, unpacked->args.pulCounterOutputPbuffer, unpacked->args.pulCounterOutputVideo);
            break;
        }
        case glXGetVideoSyncSGI_INDEX: {
            PACKED_glXGetVideoSyncSGI *unpacked = (PACKED_glXGetVideoSyncSGI *)packed;
            printf("glXGetVideoSyncSGI(%p);\n", unpacked->args.count);
            break;
        }
        case glXGetVisualConfigs_INDEX: {
            PACKED_glXGetVisualConfigs *unpacked = (PACKED_glXGetVisualConfigs *)packed;
            printf("glXGetVisualConfigs();\n");
            break;
        }
        case glXGetVisualFromFBConfig_INDEX: {
            PACKED_glXGetVisualFromFBConfig *unpacked = (PACKED_glXGetVisualFromFBConfig *)packed;
            printf("glXGetVisualFromFBConfig(%p, %p);\n", unpacked->args.dpy, unpacked->args.config);
            break;
        }
        case glXGetVisualFromFBConfigSGIX_INDEX: {
            PACKED_glXGetVisualFromFBConfigSGIX *unpacked = (PACKED_glXGetVisualFromFBConfigSGIX *)packed;
            printf("glXGetVisualFromFBConfigSGIX(%p, %p);\n", unpacked->args.dpy, unpacked->args.config);
            break;
        }
        case glXHyperpipeAttribSGIX_INDEX: {
            PACKED_glXHyperpipeAttribSGIX *unpacked = (PACKED_glXHyperpipeAttribSGIX *)packed;
            printf("glXHyperpipeAttribSGIX(%p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.timeSlice, unpacked->args.attrib, unpacked->args.size, unpacked->args.attribList);
            break;
        }
        case glXHyperpipeConfigSGIX_INDEX: {
            PACKED_glXHyperpipeConfigSGIX *unpacked = (PACKED_glXHyperpipeConfigSGIX *)packed;
            printf("glXHyperpipeConfigSGIX(%p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.networkId, unpacked->args.npipes, unpacked->args.cfg, unpacked->args.hpId);
            break;
        }
        case glXImportContextEXT_INDEX: {
            PACKED_glXImportContextEXT *unpacked = (PACKED_glXImportContextEXT *)packed;
            printf("glXImportContextEXT(%p, %p);\n", unpacked->args.dpy, unpacked->args.contextID);
            break;
        }
        case glXIsDirect_INDEX: {
            PACKED_glXIsDirect *unpacked = (PACKED_glXIsDirect *)packed;
            printf("glXIsDirect(%p, %p);\n", unpacked->args.dpy, unpacked->args.ctx);
            break;
        }
        case glXJoinSwapGroupNV_INDEX: {
            PACKED_glXJoinSwapGroupNV *unpacked = (PACKED_glXJoinSwapGroupNV *)packed;
            printf("glXJoinSwapGroupNV(%p, %p, %u);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.group);
            break;
        }
        case glXJoinSwapGroupSGIX_INDEX: {
            PACKED_glXJoinSwapGroupSGIX *unpacked = (PACKED_glXJoinSwapGroupSGIX *)packed;
            printf("glXJoinSwapGroupSGIX(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.member);
            break;
        }
        case glXLockVideoCaptureDeviceNV_INDEX: {
            PACKED_glXLockVideoCaptureDeviceNV *unpacked = (PACKED_glXLockVideoCaptureDeviceNV *)packed;
            printf("glXLockVideoCaptureDeviceNV(%p, %p);\n", unpacked->args.dpy, unpacked->args.device);
            break;
        }
        case glXMakeContextCurrent_INDEX: {
            PACKED_glXMakeContextCurrent *unpacked = (PACKED_glXMakeContextCurrent *)packed;
            printf("glXMakeContextCurrent(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.draw, unpacked->args.read, unpacked->args.ctx);
            break;
        }
        case glXMakeCurrent_INDEX: {
            PACKED_glXMakeCurrent *unpacked = (PACKED_glXMakeCurrent *)packed;
            printf("glXMakeCurrent(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.ctx);
            break;
        }
        case glXMakeCurrentReadSGI_INDEX: {
            PACKED_glXMakeCurrentReadSGI *unpacked = (PACKED_glXMakeCurrentReadSGI *)packed;
            printf("glXMakeCurrentReadSGI(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.draw, unpacked->args.read, unpacked->args.ctx);
            break;
        }
        case glXQueryChannelDeltasSGIX_INDEX: {
            PACKED_glXQueryChannelDeltasSGIX *unpacked = (PACKED_glXQueryChannelDeltasSGIX *)packed;
            printf("glXQueryChannelDeltasSGIX(%p, %p, %p, %p, %p, %p, %p);\n", unpacked->args.display, unpacked->args.screen, unpacked->args.channel, unpacked->args.x, unpacked->args.y, unpacked->args.w, unpacked->args.h);
            break;
        }
        case glXQueryChannelRectSGIX_INDEX: {
            PACKED_glXQueryChannelRectSGIX *unpacked = (PACKED_glXQueryChannelRectSGIX *)packed;
            printf("glXQueryChannelRectSGIX(%p, %p, %p, %p, %p, %p, %p);\n", unpacked->args.display, unpacked->args.screen, unpacked->args.channel, unpacked->args.dx, unpacked->args.dy, unpacked->args.dw, unpacked->args.dh);
            break;
        }
        case glXQueryContext_INDEX: {
            PACKED_glXQueryContext *unpacked = (PACKED_glXQueryContext *)packed;
            printf("glXQueryContext(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.ctx, unpacked->args.attribute, unpacked->args.value);
            break;
        }
        case glXQueryContextInfoEXT_INDEX: {
            PACKED_glXQueryContextInfoEXT *unpacked = (PACKED_glXQueryContextInfoEXT *)packed;
            printf("glXQueryContextInfoEXT(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.context, unpacked->args.attribute, unpacked->args.value);
            break;
        }
        case glXQueryDrawable_INDEX: {
            PACKED_glXQueryDrawable *unpacked = (PACKED_glXQueryDrawable *)packed;
            printf("glXQueryDrawable(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.draw, unpacked->args.attribute, unpacked->args.value);
            break;
        }
        case glXQueryExtension_INDEX: {
            PACKED_glXQueryExtension *unpacked = (PACKED_glXQueryExtension *)packed;
            printf("glXQueryExtension(%p, %p, %p);\n", unpacked->args.display, unpacked->args.errorBase, unpacked->args.eventBase);
            break;
        }
        case glXQueryExtensionsString_INDEX: {
            PACKED_glXQueryExtensionsString *unpacked = (PACKED_glXQueryExtensionsString *)packed;
            printf("glXQueryExtensionsString(%p, %p);\n", unpacked->args.dpy, unpacked->args.screen);
            break;
        }
        case glXQueryFrameCountNV_INDEX: {
            PACKED_glXQueryFrameCountNV *unpacked = (PACKED_glXQueryFrameCountNV *)packed;
            printf("glXQueryFrameCountNV(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.count);
            break;
        }
        case glXQueryGLXPbufferSGIX_INDEX: {
            PACKED_glXQueryGLXPbufferSGIX *unpacked = (PACKED_glXQueryGLXPbufferSGIX *)packed;
            printf("glXQueryGLXPbufferSGIX(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.pbuf, unpacked->args.attribute, unpacked->args.value);
            break;
        }
        case glXQueryHyperpipeAttribSGIX_INDEX: {
            PACKED_glXQueryHyperpipeAttribSGIX *unpacked = (PACKED_glXQueryHyperpipeAttribSGIX *)packed;
            printf("glXQueryHyperpipeAttribSGIX(%p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.timeSlice, unpacked->args.attrib, unpacked->args.size, unpacked->args.returnAttribList);
            break;
        }
        case glXQueryHyperpipeBestAttribSGIX_INDEX: {
            PACKED_glXQueryHyperpipeBestAttribSGIX *unpacked = (PACKED_glXQueryHyperpipeBestAttribSGIX *)packed;
            printf("glXQueryHyperpipeBestAttribSGIX(%p, %p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.timeSlice, unpacked->args.attrib, unpacked->args.size, unpacked->args.attribList, unpacked->args.returnAttribList);
            break;
        }
        case glXQueryHyperpipeConfigSGIX_INDEX: {
            PACKED_glXQueryHyperpipeConfigSGIX *unpacked = (PACKED_glXQueryHyperpipeConfigSGIX *)packed;
            printf("glXQueryHyperpipeConfigSGIX(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.hpId, unpacked->args.npipes);
            break;
        }
        case glXQueryHyperpipeNetworkSGIX_INDEX: {
            PACKED_glXQueryHyperpipeNetworkSGIX *unpacked = (PACKED_glXQueryHyperpipeNetworkSGIX *)packed;
            printf("glXQueryHyperpipeNetworkSGIX(%p, %p);\n", unpacked->args.dpy, unpacked->args.npipes);
            break;
        }
        case glXQueryMaxSwapBarriersSGIX_INDEX: {
            PACKED_glXQueryMaxSwapBarriersSGIX *unpacked = (PACKED_glXQueryMaxSwapBarriersSGIX *)packed;
            printf("glXQueryMaxSwapBarriersSGIX(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.max);
            break;
        }
        case glXQueryMaxSwapGroupsNV_INDEX: {
            PACKED_glXQueryMaxSwapGroupsNV *unpacked = (PACKED_glXQueryMaxSwapGroupsNV *)packed;
            printf("glXQueryMaxSwapGroupsNV(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.maxGroups, unpacked->args.maxBarriers);
            break;
        }
        case glXQueryServerString_INDEX: {
            PACKED_glXQueryServerString *unpacked = (PACKED_glXQueryServerString *)packed;
            printf("glXQueryServerString(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.name);
            break;
        }
        case glXQuerySwapGroupNV_INDEX: {
            PACKED_glXQuerySwapGroupNV *unpacked = (PACKED_glXQuerySwapGroupNV *)packed;
            printf("glXQuerySwapGroupNV(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.group, unpacked->args.barrier);
            break;
        }
        case glXQueryVersion_INDEX: {
            PACKED_glXQueryVersion *unpacked = (PACKED_glXQueryVersion *)packed;
            printf("glXQueryVersion(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.maj, unpacked->args.min);
            break;
        }
        case glXQueryVideoCaptureDeviceNV_INDEX: {
            PACKED_glXQueryVideoCaptureDeviceNV *unpacked = (PACKED_glXQueryVideoCaptureDeviceNV *)packed;
            printf("glXQueryVideoCaptureDeviceNV(%p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.device, unpacked->args.attribute, unpacked->args.value);
            break;
        }
        case glXReleaseBuffersMESA_INDEX: {
            PACKED_glXReleaseBuffersMESA *unpacked = (PACKED_glXReleaseBuffersMESA *)packed;
            printf("glXReleaseBuffersMESA(%p, %p);\n", unpacked->args.dpy, unpacked->args.drawable);
            break;
        }
        case glXReleaseTexImageEXT_INDEX: {
            PACKED_glXReleaseTexImageEXT *unpacked = (PACKED_glXReleaseTexImageEXT *)packed;
            printf("glXReleaseTexImageEXT(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.buffer);
            break;
        }
        case glXReleaseVideoCaptureDeviceNV_INDEX: {
            PACKED_glXReleaseVideoCaptureDeviceNV *unpacked = (PACKED_glXReleaseVideoCaptureDeviceNV *)packed;
            printf("glXReleaseVideoCaptureDeviceNV(%p, %p);\n", unpacked->args.dpy, unpacked->args.device);
            break;
        }
        case glXReleaseVideoDeviceNV_INDEX: {
            PACKED_glXReleaseVideoDeviceNV *unpacked = (PACKED_glXReleaseVideoDeviceNV *)packed;
            printf("glXReleaseVideoDeviceNV(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.screen, unpacked->args.VideoDevice);
            break;
        }
        case glXReleaseVideoImageNV_INDEX: {
            PACKED_glXReleaseVideoImageNV *unpacked = (PACKED_glXReleaseVideoImageNV *)packed;
            printf("glXReleaseVideoImageNV(%p, %p);\n", unpacked->args.dpy, unpacked->args.pbuf);
            break;
        }
        case glXRender_INDEX: {
            PACKED_glXRender *unpacked = (PACKED_glXRender *)packed;
            printf("glXRender();\n");
            break;
        }
        case glXRenderLarge_INDEX: {
            PACKED_glXRenderLarge *unpacked = (PACKED_glXRenderLarge *)packed;
            printf("glXRenderLarge();\n");
            break;
        }
        case glXResetFrameCountNV_INDEX: {
            PACKED_glXResetFrameCountNV *unpacked = (PACKED_glXResetFrameCountNV *)packed;
            printf("glXResetFrameCountNV(%p, %p);\n", unpacked->args.dpy, unpacked->args.screen);
            break;
        }
        case glXSelectEvent_INDEX: {
            PACKED_glXSelectEvent *unpacked = (PACKED_glXSelectEvent *)packed;
            printf("glXSelectEvent(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.draw, unpacked->args.event_mask);
            break;
        }
        case glXSelectEventSGIX_INDEX: {
            PACKED_glXSelectEventSGIX *unpacked = (PACKED_glXSelectEventSGIX *)packed;
            printf("glXSelectEventSGIX(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.mask);
            break;
        }
        case glXSendPbufferToVideoNV_INDEX: {
            PACKED_glXSendPbufferToVideoNV *unpacked = (PACKED_glXSendPbufferToVideoNV *)packed;
            printf("glXSendPbufferToVideoNV(%p, %p, %p, %p, %d);\n", unpacked->args.dpy, unpacked->args.pbuf, unpacked->args.iBufferType, unpacked->args.pulCounterPbuffer, unpacked->args.bBlock);
            break;
        }
        case glXSet3DfxModeMESA_INDEX: {
            PACKED_glXSet3DfxModeMESA *unpacked = (PACKED_glXSet3DfxModeMESA *)packed;
            printf("glXSet3DfxModeMESA(%p);\n", unpacked->args.mode);
            break;
        }
        case glXSwapBuffers_INDEX: {
            PACKED_glXSwapBuffers *unpacked = (PACKED_glXSwapBuffers *)packed;
            printf("glXSwapBuffers(%p, %p);\n", unpacked->args.dpy, unpacked->args.drawable);
            break;
        }
        case glXSwapBuffersMscOML_INDEX: {
            PACKED_glXSwapBuffersMscOML *unpacked = (PACKED_glXSwapBuffersMscOML *)packed;
            printf("glXSwapBuffersMscOML(%p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.target_msc, unpacked->args.divisor, unpacked->args.remainder);
            break;
        }
        case glXSwapIntervalEXT_INDEX: {
            PACKED_glXSwapIntervalEXT *unpacked = (PACKED_glXSwapIntervalEXT *)packed;
            printf("glXSwapIntervalEXT(%p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.interval);
            break;
        }
        case glXSwapIntervalMESA_INDEX: {
            PACKED_glXSwapIntervalMESA *unpacked = (PACKED_glXSwapIntervalMESA *)packed;
            printf("glXSwapIntervalMESA(%p);\n", unpacked->args.interval);
            break;
        }
        case glXSwapIntervalSGI_INDEX: {
            PACKED_glXSwapIntervalSGI *unpacked = (PACKED_glXSwapIntervalSGI *)packed;
            printf("glXSwapIntervalSGI(%p);\n", unpacked->args.interval);
            break;
        }
        case glXUseXFont_INDEX: {
            PACKED_glXUseXFont *unpacked = (PACKED_glXUseXFont *)packed;
            printf("glXUseXFont(%p, %p, %p, %p);\n", unpacked->args.font, unpacked->args.first, unpacked->args.count, unpacked->args.listBase);
            break;
        }
        case glXVendorPrivate_INDEX: {
            PACKED_glXVendorPrivate *unpacked = (PACKED_glXVendorPrivate *)packed;
            printf("glXVendorPrivate();\n");
            break;
        }
        case glXVendorPrivateWithReply_INDEX: {
            PACKED_glXVendorPrivateWithReply *unpacked = (PACKED_glXVendorPrivateWithReply *)packed;
            printf("glXVendorPrivateWithReply();\n");
            break;
        }
        case glXWaitForMscOML_INDEX: {
            PACKED_glXWaitForMscOML *unpacked = (PACKED_glXWaitForMscOML *)packed;
            printf("glXWaitForMscOML(%p, %p, %p, %p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.target_msc, unpacked->args.divisor, unpacked->args.remainder, unpacked->args.ust, unpacked->args.msc, unpacked->args.sbc);
            break;
        }
        case glXWaitForSbcOML_INDEX: {
            PACKED_glXWaitForSbcOML *unpacked = (PACKED_glXWaitForSbcOML *)packed;
            printf("glXWaitForSbcOML(%p, %p, %p, %p, %p, %p);\n", unpacked->args.dpy, unpacked->args.drawable, unpacked->args.target_sbc, unpacked->args.ust, unpacked->args.msc, unpacked->args.sbc);
            break;
        }
        case glXWaitGL_INDEX: {
            PACKED_glXWaitGL *unpacked = (PACKED_glXWaitGL *)packed;
            printf("glXWaitGL();\n");
            break;
        }
        case glXWaitVideoSyncSGI_INDEX: {
            PACKED_glXWaitVideoSyncSGI *unpacked = (PACKED_glXWaitVideoSyncSGI *)packed;
            printf("glXWaitVideoSyncSGI(%p, %p, %p);\n", unpacked->args.divisor, unpacked->args.remainder, unpacked->args.count);
            break;
        }
        case glXWaitX_INDEX: {
            PACKED_glXWaitX *unpacked = (PACKED_glXWaitX *)packed;
            printf("glXWaitX();\n");
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
Bool glXAssociateDMPbufferSGIX(Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer) {
    emit_glXAssociateDMPbufferSGIX(dpy, pbuffer, params, dmbuffer);
    return (Bool)0;
}
int glXBindChannelToWindowSGIX(Display * display, int screen, int channel, Window window) {
    emit_glXBindChannelToWindowSGIX(display, screen, channel, window);
    return (int)0;
}
int glXBindHyperpipeSGIX(Display * dpy, int hpId) {
    emit_glXBindHyperpipeSGIX(dpy, hpId);
    return (int)0;
}
Bool glXBindSwapBarrierNV(Display * dpy, GLuint group, GLuint barrier) {
    emit_glXBindSwapBarrierNV(dpy, group, barrier);
    return (Bool)0;
}
void glXBindSwapBarrierSGIX(Display * dpy, GLXDrawable drawable, int barrier) {
    emit_glXBindSwapBarrierSGIX(dpy, drawable, barrier);
}
void glXBindTexImageEXT(Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list) {
    emit_glXBindTexImageEXT(dpy, drawable, buffer, attrib_list);
}
int glXBindVideoCaptureDeviceNV(Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device) {
    emit_glXBindVideoCaptureDeviceNV(dpy, video_capture_slot, device);
    return (int)0;
}
int glXBindVideoDeviceNV(Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list) {
    emit_glXBindVideoDeviceNV(dpy, video_slot, video_device, attrib_list);
    return (int)0;
}
int glXBindVideoImageNV(Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer) {
    emit_glXBindVideoImageNV(dpy, VideoDevice, pbuf, iVideoBuffer);
    return (int)0;
}
void glXChangeDrawableAttributes(uint32_t drawable) {
    emit_glXChangeDrawableAttributes(drawable);
}
void glXChangeDrawableAttributesSGIX(uint32_t drawable) {
    emit_glXChangeDrawableAttributesSGIX(drawable);
}
int glXChannelRectSGIX(Display * display, int screen, int channel, int x, int y, int w, int h) {
    emit_glXChannelRectSGIX(display, screen, channel, x, y, w, h);
    return (int)0;
}
int glXChannelRectSyncSGIX(Display * display, int screen, int channel, GLenum synctype) {
    emit_glXChannelRectSyncSGIX(display, screen, channel, synctype);
    return (int)0;
}
GLXFBConfig * glXChooseFBConfig(Display * dpy, int screen, const int * attrib_list, int * nelements) {
    emit_glXChooseFBConfig(dpy, screen, attrib_list, nelements);
    return (GLXFBConfig *)0;
}
GLXFBConfigSGIX * glXChooseFBConfigSGIX(Display * dpy, int screen, int * attrib_list, int * nelements) {
    emit_glXChooseFBConfigSGIX(dpy, screen, attrib_list, nelements);
    return (GLXFBConfigSGIX *)0;
}
XVisualInfo * glXChooseVisual(Display * dpy, int screen, int * attribList) {
    emit_glXChooseVisual(dpy, screen, attribList);
    return (XVisualInfo *)0;
}
void glXClientInfo() {
    emit_glXClientInfo();
}
void glXCopyContext(Display * dpy, GLXContext src, GLXContext dst, unsigned long mask) {
    emit_glXCopyContext(dpy, src, dst, mask);
}
void glXCopyImageSubDataNV(Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth) {
    emit_glXCopyImageSubDataNV(dpy, srcCtx, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstCtx, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}
void glXCopySubBufferMESA(Display * dpy, GLXDrawable drawable, int x, int y, int width, int height) {
    emit_glXCopySubBufferMESA(dpy, drawable, x, y, width, height);
}
GLXContext glXCreateContext(Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct) {
    emit_glXCreateContext(dpy, vis, shareList, direct);
    return (GLXContext)0;
}
GLXContext glXCreateContextAttribsARB(Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list) {
    emit_glXCreateContextAttribsARB(dpy, config, share_context, direct, attrib_list);
    return (GLXContext)0;
}
GLXContext glXCreateContextWithConfigSGIX(Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct) {
    emit_glXCreateContextWithConfigSGIX(dpy, config, render_type, share_list, direct);
    return (GLXContext)0;
}
GLXPbufferSGIX glXCreateGLXPbufferSGIX(Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list) {
    emit_glXCreateGLXPbufferSGIX(dpy, config, width, height, attrib_list);
    return (GLXPbufferSGIX)0;
}
GLXPixmap glXCreateGLXPixmap(Display * dpy, XVisualInfo * visual, Pixmap pixmap) {
    emit_glXCreateGLXPixmap(dpy, visual, pixmap);
    return (GLXPixmap)0;
}
GLXPixmap glXCreateGLXPixmapMESA(Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap) {
    emit_glXCreateGLXPixmapMESA(dpy, visual, pixmap, cmap);
    return (GLXPixmap)0;
}
GLXPixmap glXCreateGLXPixmapWithConfigSGIX(Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap) {
    emit_glXCreateGLXPixmapWithConfigSGIX(dpy, config, pixmap);
    return (GLXPixmap)0;
}
GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX(Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode) {
    emit_glXCreateGLXVideoSourceSGIX(display, screen, server, path, nodeClass, drainNode);
    return (GLXVideoSourceSGIX)0;
}
GLXContext glXCreateNewContext(Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct) {
    emit_glXCreateNewContext(dpy, config, render_type, share_list, direct);
    return (GLXContext)0;
}
GLXPbuffer glXCreatePbuffer(Display * dpy, GLXFBConfig config, const int * attrib_list) {
    emit_glXCreatePbuffer(dpy, config, attrib_list);
    return (GLXPbuffer)0;
}
GLXPixmap glXCreatePixmap(Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list) {
    emit_glXCreatePixmap(dpy, config, pixmap, attrib_list);
    return (GLXPixmap)0;
}
GLXWindow glXCreateWindow(Display * dpy, GLXFBConfig config, Window win, const int * attrib_list) {
    emit_glXCreateWindow(dpy, config, win, attrib_list);
    return (GLXWindow)0;
}
void glXCushionSGI(Display * dpy, Window window, float cushion) {
    emit_glXCushionSGI(dpy, window, cushion);
}
void glXDestroyContext(Display * dpy, GLXContext ctx) {
    emit_glXDestroyContext(dpy, ctx);
}
void glXDestroyGLXPbufferSGIX(Display * dpy, GLXPbufferSGIX pbuf) {
    emit_glXDestroyGLXPbufferSGIX(dpy, pbuf);
}
void glXDestroyGLXPixmap(Display * dpy, GLXPixmap pixmap) {
    emit_glXDestroyGLXPixmap(dpy, pixmap);
}
void glXDestroyGLXVideoSourceSGIX(Display * dpy, GLXVideoSourceSGIX glxvideosource) {
    emit_glXDestroyGLXVideoSourceSGIX(dpy, glxvideosource);
}
int glXDestroyHyperpipeConfigSGIX(Display * dpy, int hpId) {
    emit_glXDestroyHyperpipeConfigSGIX(dpy, hpId);
    return (int)0;
}
void glXDestroyPbuffer(Display * dpy, GLXPbuffer pbuf) {
    emit_glXDestroyPbuffer(dpy, pbuf);
}
void glXDestroyPixmap(Display * dpy, GLXPixmap pixmap) {
    emit_glXDestroyPixmap(dpy, pixmap);
}
void glXDestroyWindow(Display * dpy, GLXWindow win) {
    emit_glXDestroyWindow(dpy, win);
}
GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV(Display * dpy, int screen, int * nelements) {
    emit_glXEnumerateVideoCaptureDevicesNV(dpy, screen, nelements);
    return (GLXVideoCaptureDeviceNV *)0;
}
unsigned int * glXEnumerateVideoDevicesNV(Display * dpy, int screen, int * nelements) {
    emit_glXEnumerateVideoDevicesNV(dpy, screen, nelements);
    return (unsigned int *)0;
}
void glXFreeContextEXT(Display * dpy, GLXContext context) {
    emit_glXFreeContextEXT(dpy, context);
}
unsigned int glXGetAGPOffsetMESA(const void * pointer) {
    emit_glXGetAGPOffsetMESA(pointer);
    return (unsigned int)0;
}
const char * glXGetClientString(Display * display, int name) {
    emit_glXGetClientString(display, name);
    return (const char *)0;
}
int glXGetConfig(Display * display, XVisualInfo * visual, int attribute, int * value) {
    emit_glXGetConfig(display, visual, attribute, value);
    return (int)0;
}
GLXContextID glXGetContextIDEXT(const GLXContext context) {
    emit_glXGetContextIDEXT(context);
    return (GLXContextID)0;
}
GLXContext glXGetCurrentContext() {
    emit_glXGetCurrentContext();
    return (GLXContext)0;
}
Display * glXGetCurrentDisplay() {
    emit_glXGetCurrentDisplay();
    return (Display *)0;
}
Display * glXGetCurrentDisplayEXT() {
    emit_glXGetCurrentDisplayEXT();
    return (Display *)0;
}
GLXDrawable glXGetCurrentDrawable() {
    emit_glXGetCurrentDrawable();
    return (GLXDrawable)0;
}
GLXDrawable glXGetCurrentReadDrawable() {
    emit_glXGetCurrentReadDrawable();
    return (GLXDrawable)0;
}
GLXDrawable glXGetCurrentReadDrawableSGI() {
    emit_glXGetCurrentReadDrawableSGI();
    return (GLXDrawable)0;
}
void glXGetDrawableAttributes(uint32_t drawable) {
    emit_glXGetDrawableAttributes(drawable);
}
void glXGetDrawableAttributesSGIX(uint32_t drawable) {
    emit_glXGetDrawableAttributesSGIX(drawable);
}
int glXGetFBConfigAttrib(Display * dpy, GLXFBConfig config, int attribute, int * value) {
    emit_glXGetFBConfigAttrib(dpy, config, attribute, value);
    return (int)0;
}
int glXGetFBConfigAttribSGIX(Display * dpy, GLXFBConfigSGIX config, int attribute, int * value) {
    emit_glXGetFBConfigAttribSGIX(dpy, config, attribute, value);
    return (int)0;
}
GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX(Display * dpy, XVisualInfo * vis) {
    emit_glXGetFBConfigFromVisualSGIX(dpy, vis);
    return (GLXFBConfigSGIX)0;
}
GLXFBConfig * glXGetFBConfigs(Display * dpy, int screen, int * nelements) {
    emit_glXGetFBConfigs(dpy, screen, nelements);
    return (GLXFBConfig *)0;
}
void glXGetFBConfigsSGIX() {
    emit_glXGetFBConfigsSGIX();
}
Bool glXGetMscRateOML(Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator) {
    emit_glXGetMscRateOML(dpy, drawable, numerator, denominator);
    return (Bool)0;
}
__GLXextFuncPtr glXGetProcAddress(const GLubyte * procName) {
    emit_glXGetProcAddress(procName);
    return (__GLXextFuncPtr)0;
}
__GLXextFuncPtr glXGetProcAddressARB(const GLubyte * procName) {
    emit_glXGetProcAddressARB(procName);
    return (__GLXextFuncPtr)0;
}
void glXGetSelectedEvent(Display * dpy, GLXDrawable draw, unsigned long * event_mask) {
    emit_glXGetSelectedEvent(dpy, draw, event_mask);
}
void glXGetSelectedEventSGIX(Display * dpy, GLXDrawable drawable, unsigned long * mask) {
    emit_glXGetSelectedEventSGIX(dpy, drawable, mask);
}
Bool glXGetSyncValuesOML(Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc) {
    emit_glXGetSyncValuesOML(dpy, drawable, ust, msc, sbc);
    return (Bool)0;
}
Status glXGetTransparentIndexSUN(Display * dpy, Window overlay, Window underlay, long * pTransparentIndex) {
    emit_glXGetTransparentIndexSUN(dpy, overlay, underlay, pTransparentIndex);
    return (Status)0;
}
int glXGetVideoDeviceNV(Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice) {
    emit_glXGetVideoDeviceNV(dpy, screen, numVideoDevices, pVideoDevice);
    return (int)0;
}
int glXGetVideoInfoNV(Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo) {
    emit_glXGetVideoInfoNV(dpy, screen, VideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo);
    return (int)0;
}
int glXGetVideoSyncSGI(unsigned int * count) {
    emit_glXGetVideoSyncSGI(count);
    return (int)0;
}
void glXGetVisualConfigs() {
    emit_glXGetVisualConfigs();
}
XVisualInfo * glXGetVisualFromFBConfig(Display * dpy, GLXFBConfig config) {
    emit_glXGetVisualFromFBConfig(dpy, config);
    return (XVisualInfo *)0;
}
XVisualInfo * glXGetVisualFromFBConfigSGIX(Display * dpy, GLXFBConfigSGIX config) {
    emit_glXGetVisualFromFBConfigSGIX(dpy, config);
    return (XVisualInfo *)0;
}
int glXHyperpipeAttribSGIX(Display * dpy, int timeSlice, int attrib, int size, void * attribList) {
    emit_glXHyperpipeAttribSGIX(dpy, timeSlice, attrib, size, attribList);
    return (int)0;
}
int glXHyperpipeConfigSGIX(Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId) {
    emit_glXHyperpipeConfigSGIX(dpy, networkId, npipes, cfg, hpId);
    return (int)0;
}
GLXContext glXImportContextEXT(Display * dpy, GLXContextID contextID) {
    emit_glXImportContextEXT(dpy, contextID);
    return (GLXContext)0;
}
Bool glXIsDirect(Display * dpy, GLXContext ctx) {
    emit_glXIsDirect(dpy, ctx);
    return (Bool)0;
}
Bool glXJoinSwapGroupNV(Display * dpy, GLXDrawable drawable, GLuint group) {
    emit_glXJoinSwapGroupNV(dpy, drawable, group);
    return (Bool)0;
}
void glXJoinSwapGroupSGIX(Display * dpy, GLXDrawable drawable, GLXDrawable member) {
    emit_glXJoinSwapGroupSGIX(dpy, drawable, member);
}
void glXLockVideoCaptureDeviceNV(Display * dpy, GLXVideoCaptureDeviceNV device) {
    emit_glXLockVideoCaptureDeviceNV(dpy, device);
}
Bool glXMakeContextCurrent(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx) {
    emit_glXMakeContextCurrent(dpy, draw, read, ctx);
    return (Bool)0;
}
Bool glXMakeCurrent(Display * dpy, GLXDrawable drawable, GLXContext ctx) {
    emit_glXMakeCurrent(dpy, drawable, ctx);
    return (Bool)0;
}
Bool glXMakeCurrentReadSGI(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx) {
    emit_glXMakeCurrentReadSGI(dpy, draw, read, ctx);
    return (Bool)0;
}
int glXQueryChannelDeltasSGIX(Display * display, int screen, int channel, int * x, int * y, int * w, int * h) {
    emit_glXQueryChannelDeltasSGIX(display, screen, channel, x, y, w, h);
    return (int)0;
}
int glXQueryChannelRectSGIX(Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh) {
    emit_glXQueryChannelRectSGIX(display, screen, channel, dx, dy, dw, dh);
    return (int)0;
}
int glXQueryContext(Display * dpy, GLXContext ctx, int attribute, int * value) {
    emit_glXQueryContext(dpy, ctx, attribute, value);
    return (int)0;
}
int glXQueryContextInfoEXT(Display * dpy, GLXContext context, int attribute, int * value) {
    emit_glXQueryContextInfoEXT(dpy, context, attribute, value);
    return (int)0;
}
void glXQueryDrawable(Display * dpy, GLXDrawable draw, int attribute, unsigned int * value) {
    emit_glXQueryDrawable(dpy, draw, attribute, value);
}
Bool glXQueryExtension(Display * display, int * errorBase, int * eventBase) {
    emit_glXQueryExtension(display, errorBase, eventBase);
    return (Bool)0;
}
const char * glXQueryExtensionsString(Display * dpy, int screen) {
    emit_glXQueryExtensionsString(dpy, screen);
    return (const char *)0;
}
Bool glXQueryFrameCountNV(Display * dpy, int screen, GLuint * count) {
    emit_glXQueryFrameCountNV(dpy, screen, count);
    return (Bool)0;
}
int glXQueryGLXPbufferSGIX(Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value) {
    emit_glXQueryGLXPbufferSGIX(dpy, pbuf, attribute, value);
    return (int)0;
}
int glXQueryHyperpipeAttribSGIX(Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList) {
    emit_glXQueryHyperpipeAttribSGIX(dpy, timeSlice, attrib, size, returnAttribList);
    return (int)0;
}
int glXQueryHyperpipeBestAttribSGIX(Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList) {
    emit_glXQueryHyperpipeBestAttribSGIX(dpy, timeSlice, attrib, size, attribList, returnAttribList);
    return (int)0;
}
GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX(Display * dpy, int hpId, int * npipes) {
    emit_glXQueryHyperpipeConfigSGIX(dpy, hpId, npipes);
    return (GLXHyperpipeConfigSGIX *)0;
}
GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX(Display * dpy, int * npipes) {
    emit_glXQueryHyperpipeNetworkSGIX(dpy, npipes);
    return (GLXHyperpipeNetworkSGIX *)0;
}
Bool glXQueryMaxSwapBarriersSGIX(Display * dpy, int screen, int * max) {
    emit_glXQueryMaxSwapBarriersSGIX(dpy, screen, max);
    return (Bool)0;
}
Bool glXQueryMaxSwapGroupsNV(Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers) {
    emit_glXQueryMaxSwapGroupsNV(dpy, screen, maxGroups, maxBarriers);
    return (Bool)0;
}
const char * glXQueryServerString(Display * dpy, int screen, int name) {
    emit_glXQueryServerString(dpy, screen, name);
    return (const char *)0;
}
Bool glXQuerySwapGroupNV(Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier) {
    emit_glXQuerySwapGroupNV(dpy, drawable, group, barrier);
    return (Bool)0;
}
Bool glXQueryVersion(Display * dpy, int * maj, int * min) {
    emit_glXQueryVersion(dpy, maj, min);
    return (Bool)0;
}
int glXQueryVideoCaptureDeviceNV(Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value) {
    emit_glXQueryVideoCaptureDeviceNV(dpy, device, attribute, value);
    return (int)0;
}
Bool glXReleaseBuffersMESA(Display * dpy, GLXDrawable drawable) {
    emit_glXReleaseBuffersMESA(dpy, drawable);
    return (Bool)0;
}
void glXReleaseTexImageEXT(Display * dpy, GLXDrawable drawable, int buffer) {
    emit_glXReleaseTexImageEXT(dpy, drawable, buffer);
}
void glXReleaseVideoCaptureDeviceNV(Display * dpy, GLXVideoCaptureDeviceNV device) {
    emit_glXReleaseVideoCaptureDeviceNV(dpy, device);
}
int glXReleaseVideoDeviceNV(Display * dpy, int screen, GLXVideoDeviceNV VideoDevice) {
    emit_glXReleaseVideoDeviceNV(dpy, screen, VideoDevice);
    return (int)0;
}
int glXReleaseVideoImageNV(Display * dpy, GLXPbuffer pbuf) {
    emit_glXReleaseVideoImageNV(dpy, pbuf);
    return (int)0;
}
void glXRender() {
    emit_glXRender();
}
void glXRenderLarge() {
    emit_glXRenderLarge();
}
Bool glXResetFrameCountNV(Display * dpy, int screen) {
    emit_glXResetFrameCountNV(dpy, screen);
    return (Bool)0;
}
void glXSelectEvent(Display * dpy, GLXDrawable draw, unsigned long event_mask) {
    emit_glXSelectEvent(dpy, draw, event_mask);
}
void glXSelectEventSGIX(Display * dpy, GLXDrawable drawable, unsigned long mask) {
    emit_glXSelectEventSGIX(dpy, drawable, mask);
}
int glXSendPbufferToVideoNV(Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock) {
    emit_glXSendPbufferToVideoNV(dpy, pbuf, iBufferType, pulCounterPbuffer, bBlock);
    return (int)0;
}
Bool glXSet3DfxModeMESA(int mode) {
    emit_glXSet3DfxModeMESA(mode);
    return (Bool)0;
}
void glXSwapBuffers(Display * dpy, GLXDrawable drawable) {
    emit_glXSwapBuffers(dpy, drawable);
}
int64_t glXSwapBuffersMscOML(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder) {
    emit_glXSwapBuffersMscOML(dpy, drawable, target_msc, divisor, remainder);
    return (int64_t)0;
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
void glXVendorPrivate() {
    emit_glXVendorPrivate();
}
void glXVendorPrivateWithReply() {
    emit_glXVendorPrivateWithReply();
}
Bool glXWaitForMscOML(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc) {
    emit_glXWaitForMscOML(dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc);
    return (Bool)0;
}
Bool glXWaitForSbcOML(Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc) {
    emit_glXWaitForSbcOML(dpy, drawable, target_sbc, ust, msc, sbc);
    return (Bool)0;
}
void glXWaitGL() {
    emit_glXWaitGL();
}
int glXWaitVideoSyncSGI(int divisor, int remainder, unsigned int * count) {
    emit_glXWaitVideoSyncSGI(divisor, remainder, count);
    return (int)0;
}
void glXWaitX() {
    emit_glXWaitX();
}

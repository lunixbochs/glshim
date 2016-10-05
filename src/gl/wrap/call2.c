#ifdef USE_ES2
#include "glpack.h"
#include "../loader.h"

void glIndexedCall(const packed_call_t *packed, void *ret_v) {
    switch (packed->index) {
        #ifndef skip_index_glActiveTexture
        case glActiveTexture_INDEX:
            call_glActiveTexture(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glActiveTextureARB
        case glActiveTextureARB_INDEX:
            call_glActiveTextureARB(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glAlphaFunc
        case glAlphaFunc_INDEX:
            call_glAlphaFunc(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glAreTexturesResident
        case glAreTexturesResident_INDEX:
            call_glAreTexturesResident(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glArrayElement
        case glArrayElement_INDEX:
            call_glArrayElement(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBegin
        case glBegin_INDEX:
            call_glBegin(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBindBuffer
        case glBindBuffer_INDEX:
            call_glBindBuffer(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBindTexture
        case glBindTexture_INDEX:
            call_glBindTexture(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBitmap
        case glBitmap_INDEX:
            call_glBitmap(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBlendColor
        case glBlendColor_INDEX:
            call_glBlendColor(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBlendEquation
        case glBlendEquation_INDEX:
            call_glBlendEquation(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBlendEquationSeparate
        case glBlendEquationSeparate_INDEX:
            call_glBlendEquationSeparate(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBlendEquationSeparatei
        case glBlendEquationSeparatei_INDEX:
            call_glBlendEquationSeparatei(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBlendFunc
        case glBlendFunc_INDEX:
            call_glBlendFunc(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBlendFuncSeparate
        case glBlendFuncSeparate_INDEX:
            call_glBlendFuncSeparate(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBlendFuncSeparatei
        case glBlendFuncSeparatei_INDEX:
            call_glBlendFuncSeparatei(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBufferData
        case glBufferData_INDEX:
            call_glBufferData(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glBufferSubData
        case glBufferSubData_INDEX:
            call_glBufferSubData(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glCallList
        case glCallList_INDEX:
            call_glCallList(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glCallLists
        case glCallLists_INDEX:
            call_glCallLists(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClear
        case glClear_INDEX:
            call_glClear(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClearAccum
        case glClearAccum_INDEX:
            call_glClearAccum(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClearColor
        case glClearColor_INDEX:
            call_glClearColor(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClearDepth
        case glClearDepth_INDEX:
            call_glClearDepth(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClearDepthf
        case glClearDepthf_INDEX:
            call_glClearDepthf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClearDepthfOES
        case glClearDepthfOES_INDEX:
            call_glClearDepthfOES(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClearStencil
        case glClearStencil_INDEX:
            call_glClearStencil(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClientActiveTexture
        case glClientActiveTexture_INDEX:
            call_glClientActiveTexture(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClientActiveTextureARB
        case glClientActiveTextureARB_INDEX:
            call_glClientActiveTextureARB(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClipPlane
        case glClipPlane_INDEX:
            call_glClipPlane(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glClipPlanefOES
        case glClipPlanefOES_INDEX:
            call_glClipPlanefOES(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3b
        case glColor3b_INDEX:
            call_glColor3b(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3bv
        case glColor3bv_INDEX:
            call_glColor3bv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3d
        case glColor3d_INDEX:
            call_glColor3d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3dv
        case glColor3dv_INDEX:
            call_glColor3dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3f
        case glColor3f_INDEX:
            call_glColor3f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3fv
        case glColor3fv_INDEX:
            call_glColor3fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3i
        case glColor3i_INDEX:
            call_glColor3i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3iv
        case glColor3iv_INDEX:
            call_glColor3iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3s
        case glColor3s_INDEX:
            call_glColor3s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3sv
        case glColor3sv_INDEX:
            call_glColor3sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3ub
        case glColor3ub_INDEX:
            call_glColor3ub(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3ubv
        case glColor3ubv_INDEX:
            call_glColor3ubv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3ui
        case glColor3ui_INDEX:
            call_glColor3ui(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3uiv
        case glColor3uiv_INDEX:
            call_glColor3uiv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3us
        case glColor3us_INDEX:
            call_glColor3us(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor3usv
        case glColor3usv_INDEX:
            call_glColor3usv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4b
        case glColor4b_INDEX:
            call_glColor4b(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4bv
        case glColor4bv_INDEX:
            call_glColor4bv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4d
        case glColor4d_INDEX:
            call_glColor4d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4dv
        case glColor4dv_INDEX:
            call_glColor4dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4f
        case glColor4f_INDEX:
            call_glColor4f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4fv
        case glColor4fv_INDEX:
            call_glColor4fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4i
        case glColor4i_INDEX:
            call_glColor4i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4iv
        case glColor4iv_INDEX:
            call_glColor4iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4s
        case glColor4s_INDEX:
            call_glColor4s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4sv
        case glColor4sv_INDEX:
            call_glColor4sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4ub
        case glColor4ub_INDEX:
            call_glColor4ub(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4ubv
        case glColor4ubv_INDEX:
            call_glColor4ubv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4ui
        case glColor4ui_INDEX:
            call_glColor4ui(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4uiv
        case glColor4uiv_INDEX:
            call_glColor4uiv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4us
        case glColor4us_INDEX:
            call_glColor4us(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColor4usv
        case glColor4usv_INDEX:
            call_glColor4usv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColorMask
        case glColorMask_INDEX:
            call_glColorMask(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColorMaterial
        case glColorMaterial_INDEX:
            call_glColorMaterial(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glColorPointer
        case glColorPointer_INDEX:
            call_glColorPointer(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glCompressedTexImage2D
        case glCompressedTexImage2D_INDEX:
            call_glCompressedTexImage2D(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glCompressedTexSubImage2D
        case glCompressedTexSubImage2D_INDEX:
            call_glCompressedTexSubImage2D(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glCopyPixels
        case glCopyPixels_INDEX:
            call_glCopyPixels(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glCopyTexImage2D
        case glCopyTexImage2D_INDEX:
            call_glCopyTexImage2D(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glCopyTexSubImage2D
        case glCopyTexSubImage2D_INDEX:
            call_glCopyTexSubImage2D(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glCullFace
        case glCullFace_INDEX:
            call_glCullFace(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDeleteBuffers
        case glDeleteBuffers_INDEX:
            call_glDeleteBuffers(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDeleteLists
        case glDeleteLists_INDEX:
            call_glDeleteLists(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDeleteTextures
        case glDeleteTextures_INDEX:
            call_glDeleteTextures(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDepthFunc
        case glDepthFunc_INDEX:
            call_glDepthFunc(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDepthMask
        case glDepthMask_INDEX:
            call_glDepthMask(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDepthRange
        case glDepthRange_INDEX:
            call_glDepthRange(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDepthRangef
        case glDepthRangef_INDEX:
            call_glDepthRangef(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDepthRangefOES
        case glDepthRangefOES_INDEX:
            call_glDepthRangefOES(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDisable
        case glDisable_INDEX:
            call_glDisable(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDisableClientState
        case glDisableClientState_INDEX:
            call_glDisableClientState(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDrawArrays
        case glDrawArrays_INDEX:
            call_glDrawArrays(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDrawBuffer
        case glDrawBuffer_INDEX:
            call_glDrawBuffer(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDrawElements
        case glDrawElements_INDEX:
            call_glDrawElements(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDrawPixels
        case glDrawPixels_INDEX:
            call_glDrawPixels(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glDrawRangeElements
        case glDrawRangeElements_INDEX:
            call_glDrawRangeElements(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEdgeFlag
        case glEdgeFlag_INDEX:
            call_glEdgeFlag(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEnable
        case glEnable_INDEX:
            call_glEnable(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEnableClientState
        case glEnableClientState_INDEX:
            call_glEnableClientState(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEnd
        case glEnd_INDEX:
            call_glEnd(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEndList
        case glEndList_INDEX:
            call_glEndList(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalCoord1d
        case glEvalCoord1d_INDEX:
            call_glEvalCoord1d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalCoord1dv
        case glEvalCoord1dv_INDEX:
            call_glEvalCoord1dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalCoord1f
        case glEvalCoord1f_INDEX:
            call_glEvalCoord1f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalCoord1fv
        case glEvalCoord1fv_INDEX:
            call_glEvalCoord1fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalCoord2d
        case glEvalCoord2d_INDEX:
            call_glEvalCoord2d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalCoord2dv
        case glEvalCoord2dv_INDEX:
            call_glEvalCoord2dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalCoord2f
        case glEvalCoord2f_INDEX:
            call_glEvalCoord2f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalCoord2fv
        case glEvalCoord2fv_INDEX:
            call_glEvalCoord2fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalMesh1
        case glEvalMesh1_INDEX:
            call_glEvalMesh1(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalMesh2
        case glEvalMesh2_INDEX:
            call_glEvalMesh2(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalPoint1
        case glEvalPoint1_INDEX:
            call_glEvalPoint1(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glEvalPoint2
        case glEvalPoint2_INDEX:
            call_glEvalPoint2(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFeedbackBuffer
        case glFeedbackBuffer_INDEX:
            call_glFeedbackBuffer(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFinish
        case glFinish_INDEX:
            call_glFinish(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFlush
        case glFlush_INDEX:
            call_glFlush(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFogCoordd
        case glFogCoordd_INDEX:
            call_glFogCoordd(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFogCoorddv
        case glFogCoorddv_INDEX:
            call_glFogCoorddv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFogCoordf
        case glFogCoordf_INDEX:
            call_glFogCoordf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFogCoordfv
        case glFogCoordfv_INDEX:
            call_glFogCoordfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFogf
        case glFogf_INDEX:
            call_glFogf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFogfv
        case glFogfv_INDEX:
            call_glFogfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFogi
        case glFogi_INDEX:
            call_glFogi(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFogiv
        case glFogiv_INDEX:
            call_glFogiv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFrontFace
        case glFrontFace_INDEX:
            call_glFrontFace(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFrustum
        case glFrustum_INDEX:
            call_glFrustum(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glFrustumfOES
        case glFrustumfOES_INDEX:
            call_glFrustumfOES(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGenBuffers
        case glGenBuffers_INDEX:
            call_glGenBuffers(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGenLists
        case glGenLists_INDEX:
            call_glGenLists(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGenTextures
        case glGenTextures_INDEX:
            call_glGenTextures(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetBooleanv
        case glGetBooleanv_INDEX:
            call_glGetBooleanv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetBufferParameteriv
        case glGetBufferParameteriv_INDEX:
            call_glGetBufferParameteriv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetClipPlanefOES
        case glGetClipPlanefOES_INDEX:
            call_glGetClipPlanefOES(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetDoublev
        case glGetDoublev_INDEX:
            call_glGetDoublev(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetError
        case glGetError_INDEX:
            call_glGetError(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetFloatv
        case glGetFloatv_INDEX:
            call_glGetFloatv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetIntegerv
        case glGetIntegerv_INDEX:
            call_glGetIntegerv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetLightfv
        case glGetLightfv_INDEX:
            call_glGetLightfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetMapdv
        case glGetMapdv_INDEX:
            call_glGetMapdv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetMapfv
        case glGetMapfv_INDEX:
            call_glGetMapfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetMapiv
        case glGetMapiv_INDEX:
            call_glGetMapiv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetMaterialfv
        case glGetMaterialfv_INDEX:
            call_glGetMaterialfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetMaterialiv
        case glGetMaterialiv_INDEX:
            call_glGetMaterialiv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetPointerv
        case glGetPointerv_INDEX:
            call_glGetPointerv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetString
        case glGetString_INDEX:
            call_glGetString(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetTexEnvfv
        case glGetTexEnvfv_INDEX:
            call_glGetTexEnvfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetTexEnviv
        case glGetTexEnviv_INDEX:
            call_glGetTexEnviv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetTexImage
        case glGetTexImage_INDEX:
            call_glGetTexImage(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetTexLevelParameterfv
        case glGetTexLevelParameterfv_INDEX:
            call_glGetTexLevelParameterfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetTexLevelParameteriv
        case glGetTexLevelParameteriv_INDEX:
            call_glGetTexLevelParameteriv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetTexParameterfv
        case glGetTexParameterfv_INDEX:
            call_glGetTexParameterfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glGetTexParameteriv
        case glGetTexParameteriv_INDEX:
            call_glGetTexParameteriv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glHint
        case glHint_INDEX:
            call_glHint(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIndexd
        case glIndexd_INDEX:
            call_glIndexd(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIndexdv
        case glIndexdv_INDEX:
            call_glIndexdv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIndexf
        case glIndexf_INDEX:
            call_glIndexf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIndexfv
        case glIndexfv_INDEX:
            call_glIndexfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIndexi
        case glIndexi_INDEX:
            call_glIndexi(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIndexiv
        case glIndexiv_INDEX:
            call_glIndexiv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIndexs
        case glIndexs_INDEX:
            call_glIndexs(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIndexsv
        case glIndexsv_INDEX:
            call_glIndexsv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIndexub
        case glIndexub_INDEX:
            call_glIndexub(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIndexubv
        case glIndexubv_INDEX:
            call_glIndexubv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glInitNames
        case glInitNames_INDEX:
            call_glInitNames(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glInterleavedArrays
        case glInterleavedArrays_INDEX:
            call_glInterleavedArrays(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIsBuffer
        case glIsBuffer_INDEX:
            call_glIsBuffer(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIsEnabled
        case glIsEnabled_INDEX:
            call_glIsEnabled(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIsList
        case glIsList_INDEX:
            call_glIsList(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glIsTexture
        case glIsTexture_INDEX:
            call_glIsTexture(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLightModelf
        case glLightModelf_INDEX:
            call_glLightModelf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLightModelfv
        case glLightModelfv_INDEX:
            call_glLightModelfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLightModeli
        case glLightModeli_INDEX:
            call_glLightModeli(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLightModeliv
        case glLightModeliv_INDEX:
            call_glLightModeliv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLightf
        case glLightf_INDEX:
            call_glLightf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLightfv
        case glLightfv_INDEX:
            call_glLightfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLighti
        case glLighti_INDEX:
            call_glLighti(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLightiv
        case glLightiv_INDEX:
            call_glLightiv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLineStipple
        case glLineStipple_INDEX:
            call_glLineStipple(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLineWidth
        case glLineWidth_INDEX:
            call_glLineWidth(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glListBase
        case glListBase_INDEX:
            call_glListBase(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLoadIdentity
        case glLoadIdentity_INDEX:
            call_glLoadIdentity(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLoadMatrixd
        case glLoadMatrixd_INDEX:
            call_glLoadMatrixd(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLoadMatrixf
        case glLoadMatrixf_INDEX:
            call_glLoadMatrixf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLoadName
        case glLoadName_INDEX:
            call_glLoadName(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLoadTransposeMatrixd
        case glLoadTransposeMatrixd_INDEX:
            call_glLoadTransposeMatrixd(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLoadTransposeMatrixf
        case glLoadTransposeMatrixf_INDEX:
            call_glLoadTransposeMatrixf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLockArraysEXT
        case glLockArraysEXT_INDEX:
            call_glLockArraysEXT(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glLogicOp
        case glLogicOp_INDEX:
            call_glLogicOp(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMap1d
        case glMap1d_INDEX:
            call_glMap1d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMap1f
        case glMap1f_INDEX:
            call_glMap1f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMap2d
        case glMap2d_INDEX:
            call_glMap2d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMap2f
        case glMap2f_INDEX:
            call_glMap2f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMapGrid1d
        case glMapGrid1d_INDEX:
            call_glMapGrid1d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMapGrid1f
        case glMapGrid1f_INDEX:
            call_glMapGrid1f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMapGrid2d
        case glMapGrid2d_INDEX:
            call_glMapGrid2d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMapGrid2f
        case glMapGrid2f_INDEX:
            call_glMapGrid2f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMaterialf
        case glMaterialf_INDEX:
            call_glMaterialf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMaterialfv
        case glMaterialfv_INDEX:
            call_glMaterialfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMateriali
        case glMateriali_INDEX:
            call_glMateriali(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMaterialiv
        case glMaterialiv_INDEX:
            call_glMaterialiv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMatrixMode
        case glMatrixMode_INDEX:
            call_glMatrixMode(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultMatrixd
        case glMultMatrixd_INDEX:
            call_glMultMatrixd(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultMatrixf
        case glMultMatrixf_INDEX:
            call_glMultMatrixf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultTransposeMatrixd
        case glMultTransposeMatrixd_INDEX:
            call_glMultTransposeMatrixd(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultTransposeMatrixf
        case glMultTransposeMatrixf_INDEX:
            call_glMultTransposeMatrixf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord1d
        case glMultiTexCoord1d_INDEX:
            call_glMultiTexCoord1d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord1dv
        case glMultiTexCoord1dv_INDEX:
            call_glMultiTexCoord1dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord1f
        case glMultiTexCoord1f_INDEX:
            call_glMultiTexCoord1f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord1fv
        case glMultiTexCoord1fv_INDEX:
            call_glMultiTexCoord1fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord1i
        case glMultiTexCoord1i_INDEX:
            call_glMultiTexCoord1i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord1iv
        case glMultiTexCoord1iv_INDEX:
            call_glMultiTexCoord1iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord1s
        case glMultiTexCoord1s_INDEX:
            call_glMultiTexCoord1s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord1sv
        case glMultiTexCoord1sv_INDEX:
            call_glMultiTexCoord1sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord2d
        case glMultiTexCoord2d_INDEX:
            call_glMultiTexCoord2d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord2dv
        case glMultiTexCoord2dv_INDEX:
            call_glMultiTexCoord2dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord2f
        case glMultiTexCoord2f_INDEX:
            call_glMultiTexCoord2f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord2fARB
        case glMultiTexCoord2fARB_INDEX:
            call_glMultiTexCoord2fARB(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord2fv
        case glMultiTexCoord2fv_INDEX:
            call_glMultiTexCoord2fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord2fvARB
        case glMultiTexCoord2fvARB_INDEX:
            call_glMultiTexCoord2fvARB(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord2i
        case glMultiTexCoord2i_INDEX:
            call_glMultiTexCoord2i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord2iv
        case glMultiTexCoord2iv_INDEX:
            call_glMultiTexCoord2iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord2s
        case glMultiTexCoord2s_INDEX:
            call_glMultiTexCoord2s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord2sv
        case glMultiTexCoord2sv_INDEX:
            call_glMultiTexCoord2sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord3d
        case glMultiTexCoord3d_INDEX:
            call_glMultiTexCoord3d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord3dv
        case glMultiTexCoord3dv_INDEX:
            call_glMultiTexCoord3dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord3f
        case glMultiTexCoord3f_INDEX:
            call_glMultiTexCoord3f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord3fv
        case glMultiTexCoord3fv_INDEX:
            call_glMultiTexCoord3fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord3i
        case glMultiTexCoord3i_INDEX:
            call_glMultiTexCoord3i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord3iv
        case glMultiTexCoord3iv_INDEX:
            call_glMultiTexCoord3iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord3s
        case glMultiTexCoord3s_INDEX:
            call_glMultiTexCoord3s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord3sv
        case glMultiTexCoord3sv_INDEX:
            call_glMultiTexCoord3sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord4d
        case glMultiTexCoord4d_INDEX:
            call_glMultiTexCoord4d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord4dv
        case glMultiTexCoord4dv_INDEX:
            call_glMultiTexCoord4dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord4f
        case glMultiTexCoord4f_INDEX:
            call_glMultiTexCoord4f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord4fARB
        case glMultiTexCoord4fARB_INDEX:
            call_glMultiTexCoord4fARB(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord4fv
        case glMultiTexCoord4fv_INDEX:
            call_glMultiTexCoord4fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord4fvARB
        case glMultiTexCoord4fvARB_INDEX:
            call_glMultiTexCoord4fvARB(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord4i
        case glMultiTexCoord4i_INDEX:
            call_glMultiTexCoord4i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord4iv
        case glMultiTexCoord4iv_INDEX:
            call_glMultiTexCoord4iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord4s
        case glMultiTexCoord4s_INDEX:
            call_glMultiTexCoord4s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glMultiTexCoord4sv
        case glMultiTexCoord4sv_INDEX:
            call_glMultiTexCoord4sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNewList
        case glNewList_INDEX:
            call_glNewList(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormal3b
        case glNormal3b_INDEX:
            call_glNormal3b(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormal3bv
        case glNormal3bv_INDEX:
            call_glNormal3bv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormal3d
        case glNormal3d_INDEX:
            call_glNormal3d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormal3dv
        case glNormal3dv_INDEX:
            call_glNormal3dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormal3f
        case glNormal3f_INDEX:
            call_glNormal3f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormal3fv
        case glNormal3fv_INDEX:
            call_glNormal3fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormal3i
        case glNormal3i_INDEX:
            call_glNormal3i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormal3iv
        case glNormal3iv_INDEX:
            call_glNormal3iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormal3s
        case glNormal3s_INDEX:
            call_glNormal3s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormal3sv
        case glNormal3sv_INDEX:
            call_glNormal3sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glNormalPointer
        case glNormalPointer_INDEX:
            call_glNormalPointer(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glOrtho
        case glOrtho_INDEX:
            call_glOrtho(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glOrthofOES
        case glOrthofOES_INDEX:
            call_glOrthofOES(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPassThrough
        case glPassThrough_INDEX:
            call_glPassThrough(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPixelStorei
        case glPixelStorei_INDEX:
            call_glPixelStorei(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPixelTransferf
        case glPixelTransferf_INDEX:
            call_glPixelTransferf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPixelTransferi
        case glPixelTransferi_INDEX:
            call_glPixelTransferi(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPixelZoom
        case glPixelZoom_INDEX:
            call_glPixelZoom(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPointParameterf
        case glPointParameterf_INDEX:
            call_glPointParameterf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPointParameterfv
        case glPointParameterfv_INDEX:
            call_glPointParameterfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPointSize
        case glPointSize_INDEX:
            call_glPointSize(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPolygonMode
        case glPolygonMode_INDEX:
            call_glPolygonMode(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPolygonOffset
        case glPolygonOffset_INDEX:
            call_glPolygonOffset(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPolygonStipple
        case glPolygonStipple_INDEX:
            call_glPolygonStipple(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPopAttrib
        case glPopAttrib_INDEX:
            call_glPopAttrib(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPopClientAttrib
        case glPopClientAttrib_INDEX:
            call_glPopClientAttrib(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPopMatrix
        case glPopMatrix_INDEX:
            call_glPopMatrix(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPopName
        case glPopName_INDEX:
            call_glPopName(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPrioritizeTextures
        case glPrioritizeTextures_INDEX:
            call_glPrioritizeTextures(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPushAttrib
        case glPushAttrib_INDEX:
            call_glPushAttrib(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPushClientAttrib
        case glPushClientAttrib_INDEX:
            call_glPushClientAttrib(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPushMatrix
        case glPushMatrix_INDEX:
            call_glPushMatrix(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glPushName
        case glPushName_INDEX:
            call_glPushName(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos2d
        case glRasterPos2d_INDEX:
            call_glRasterPos2d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos2dv
        case glRasterPos2dv_INDEX:
            call_glRasterPos2dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos2f
        case glRasterPos2f_INDEX:
            call_glRasterPos2f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos2fv
        case glRasterPos2fv_INDEX:
            call_glRasterPos2fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos2i
        case glRasterPos2i_INDEX:
            call_glRasterPos2i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos2iv
        case glRasterPos2iv_INDEX:
            call_glRasterPos2iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos2s
        case glRasterPos2s_INDEX:
            call_glRasterPos2s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos2sv
        case glRasterPos2sv_INDEX:
            call_glRasterPos2sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos3d
        case glRasterPos3d_INDEX:
            call_glRasterPos3d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos3dv
        case glRasterPos3dv_INDEX:
            call_glRasterPos3dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos3f
        case glRasterPos3f_INDEX:
            call_glRasterPos3f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos3fv
        case glRasterPos3fv_INDEX:
            call_glRasterPos3fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos3i
        case glRasterPos3i_INDEX:
            call_glRasterPos3i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos3iv
        case glRasterPos3iv_INDEX:
            call_glRasterPos3iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos3s
        case glRasterPos3s_INDEX:
            call_glRasterPos3s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos3sv
        case glRasterPos3sv_INDEX:
            call_glRasterPos3sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos4d
        case glRasterPos4d_INDEX:
            call_glRasterPos4d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos4dv
        case glRasterPos4dv_INDEX:
            call_glRasterPos4dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos4f
        case glRasterPos4f_INDEX:
            call_glRasterPos4f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos4fv
        case glRasterPos4fv_INDEX:
            call_glRasterPos4fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos4i
        case glRasterPos4i_INDEX:
            call_glRasterPos4i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos4iv
        case glRasterPos4iv_INDEX:
            call_glRasterPos4iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos4s
        case glRasterPos4s_INDEX:
            call_glRasterPos4s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRasterPos4sv
        case glRasterPos4sv_INDEX:
            call_glRasterPos4sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glReadBuffer
        case glReadBuffer_INDEX:
            call_glReadBuffer(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glReadPixels
        case glReadPixels_INDEX:
            call_glReadPixels(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRectd
        case glRectd_INDEX:
            call_glRectd(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRectdv
        case glRectdv_INDEX:
            call_glRectdv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRectf
        case glRectf_INDEX:
            call_glRectf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRectfv
        case glRectfv_INDEX:
            call_glRectfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRecti
        case glRecti_INDEX:
            call_glRecti(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRectiv
        case glRectiv_INDEX:
            call_glRectiv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRects
        case glRects_INDEX:
            call_glRects(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRectsv
        case glRectsv_INDEX:
            call_glRectsv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRenderMode
        case glRenderMode_INDEX:
            call_glRenderMode(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRotated
        case glRotated_INDEX:
            call_glRotated(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glRotatef
        case glRotatef_INDEX:
            call_glRotatef(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSampleCoverage
        case glSampleCoverage_INDEX:
            call_glSampleCoverage(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glScaled
        case glScaled_INDEX:
            call_glScaled(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glScalef
        case glScalef_INDEX:
            call_glScalef(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glScissor
        case glScissor_INDEX:
            call_glScissor(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3b
        case glSecondaryColor3b_INDEX:
            call_glSecondaryColor3b(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3bv
        case glSecondaryColor3bv_INDEX:
            call_glSecondaryColor3bv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3d
        case glSecondaryColor3d_INDEX:
            call_glSecondaryColor3d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3dv
        case glSecondaryColor3dv_INDEX:
            call_glSecondaryColor3dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3f
        case glSecondaryColor3f_INDEX:
            call_glSecondaryColor3f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3fv
        case glSecondaryColor3fv_INDEX:
            call_glSecondaryColor3fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3i
        case glSecondaryColor3i_INDEX:
            call_glSecondaryColor3i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3iv
        case glSecondaryColor3iv_INDEX:
            call_glSecondaryColor3iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3s
        case glSecondaryColor3s_INDEX:
            call_glSecondaryColor3s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3sv
        case glSecondaryColor3sv_INDEX:
            call_glSecondaryColor3sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3ub
        case glSecondaryColor3ub_INDEX:
            call_glSecondaryColor3ub(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3ubv
        case glSecondaryColor3ubv_INDEX:
            call_glSecondaryColor3ubv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3ui
        case glSecondaryColor3ui_INDEX:
            call_glSecondaryColor3ui(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3uiv
        case glSecondaryColor3uiv_INDEX:
            call_glSecondaryColor3uiv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3us
        case glSecondaryColor3us_INDEX:
            call_glSecondaryColor3us(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSecondaryColor3usv
        case glSecondaryColor3usv_INDEX:
            call_glSecondaryColor3usv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glSelectBuffer
        case glSelectBuffer_INDEX:
            call_glSelectBuffer(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glShadeModel
        case glShadeModel_INDEX:
            call_glShadeModel(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glStencilFunc
        case glStencilFunc_INDEX:
            call_glStencilFunc(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glStencilMask
        case glStencilMask_INDEX:
            call_glStencilMask(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glStencilOp
        case glStencilOp_INDEX:
            call_glStencilOp(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord1d
        case glTexCoord1d_INDEX:
            call_glTexCoord1d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord1dv
        case glTexCoord1dv_INDEX:
            call_glTexCoord1dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord1f
        case glTexCoord1f_INDEX:
            call_glTexCoord1f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord1fv
        case glTexCoord1fv_INDEX:
            call_glTexCoord1fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord1i
        case glTexCoord1i_INDEX:
            call_glTexCoord1i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord1iv
        case glTexCoord1iv_INDEX:
            call_glTexCoord1iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord1s
        case glTexCoord1s_INDEX:
            call_glTexCoord1s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord1sv
        case glTexCoord1sv_INDEX:
            call_glTexCoord1sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord2d
        case glTexCoord2d_INDEX:
            call_glTexCoord2d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord2dv
        case glTexCoord2dv_INDEX:
            call_glTexCoord2dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord2f
        case glTexCoord2f_INDEX:
            call_glTexCoord2f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord2fv
        case glTexCoord2fv_INDEX:
            call_glTexCoord2fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord2i
        case glTexCoord2i_INDEX:
            call_glTexCoord2i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord2iv
        case glTexCoord2iv_INDEX:
            call_glTexCoord2iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord2s
        case glTexCoord2s_INDEX:
            call_glTexCoord2s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord2sv
        case glTexCoord2sv_INDEX:
            call_glTexCoord2sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord3d
        case glTexCoord3d_INDEX:
            call_glTexCoord3d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord3dv
        case glTexCoord3dv_INDEX:
            call_glTexCoord3dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord3f
        case glTexCoord3f_INDEX:
            call_glTexCoord3f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord3fv
        case glTexCoord3fv_INDEX:
            call_glTexCoord3fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord3i
        case glTexCoord3i_INDEX:
            call_glTexCoord3i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord3iv
        case glTexCoord3iv_INDEX:
            call_glTexCoord3iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord3s
        case glTexCoord3s_INDEX:
            call_glTexCoord3s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord3sv
        case glTexCoord3sv_INDEX:
            call_glTexCoord3sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord4d
        case glTexCoord4d_INDEX:
            call_glTexCoord4d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord4dv
        case glTexCoord4dv_INDEX:
            call_glTexCoord4dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord4f
        case glTexCoord4f_INDEX:
            call_glTexCoord4f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord4fv
        case glTexCoord4fv_INDEX:
            call_glTexCoord4fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord4i
        case glTexCoord4i_INDEX:
            call_glTexCoord4i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord4iv
        case glTexCoord4iv_INDEX:
            call_glTexCoord4iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord4s
        case glTexCoord4s_INDEX:
            call_glTexCoord4s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoord4sv
        case glTexCoord4sv_INDEX:
            call_glTexCoord4sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexCoordPointer
        case glTexCoordPointer_INDEX:
            call_glTexCoordPointer(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexEnvf
        case glTexEnvf_INDEX:
            call_glTexEnvf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexEnvfv
        case glTexEnvfv_INDEX:
            call_glTexEnvfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexEnvi
        case glTexEnvi_INDEX:
            call_glTexEnvi(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexEnviv
        case glTexEnviv_INDEX:
            call_glTexEnviv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexGend
        case glTexGend_INDEX:
            call_glTexGend(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexGendv
        case glTexGendv_INDEX:
            call_glTexGendv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexGenf
        case glTexGenf_INDEX:
            call_glTexGenf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexGenfv
        case glTexGenfv_INDEX:
            call_glTexGenfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexGeni
        case glTexGeni_INDEX:
            call_glTexGeni(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexGeniv
        case glTexGeniv_INDEX:
            call_glTexGeniv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexImage1D
        case glTexImage1D_INDEX:
            call_glTexImage1D(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexImage2D
        case glTexImage2D_INDEX:
            call_glTexImage2D(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexImage3D
        case glTexImage3D_INDEX:
            call_glTexImage3D(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexParameterf
        case glTexParameterf_INDEX:
            call_glTexParameterf(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexParameterfv
        case glTexParameterfv_INDEX:
            call_glTexParameterfv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexParameteri
        case glTexParameteri_INDEX:
            call_glTexParameteri(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexParameteriv
        case glTexParameteriv_INDEX:
            call_glTexParameteriv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexSubImage1D
        case glTexSubImage1D_INDEX:
            call_glTexSubImage1D(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexSubImage2D
        case glTexSubImage2D_INDEX:
            call_glTexSubImage2D(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTexSubImage3D
        case glTexSubImage3D_INDEX:
            call_glTexSubImage3D(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTranslated
        case glTranslated_INDEX:
            call_glTranslated(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glTranslatef
        case glTranslatef_INDEX:
            call_glTranslatef(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glUnlockArraysEXT
        case glUnlockArraysEXT_INDEX:
            call_glUnlockArraysEXT(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex2d
        case glVertex2d_INDEX:
            call_glVertex2d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex2dv
        case glVertex2dv_INDEX:
            call_glVertex2dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex2f
        case glVertex2f_INDEX:
            call_glVertex2f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex2fv
        case glVertex2fv_INDEX:
            call_glVertex2fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex2i
        case glVertex2i_INDEX:
            call_glVertex2i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex2iv
        case glVertex2iv_INDEX:
            call_glVertex2iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex2s
        case glVertex2s_INDEX:
            call_glVertex2s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex2sv
        case glVertex2sv_INDEX:
            call_glVertex2sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex3d
        case glVertex3d_INDEX:
            call_glVertex3d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex3dv
        case glVertex3dv_INDEX:
            call_glVertex3dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex3f
        case glVertex3f_INDEX:
            call_glVertex3f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex3fv
        case glVertex3fv_INDEX:
            call_glVertex3fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex3i
        case glVertex3i_INDEX:
            call_glVertex3i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex3iv
        case glVertex3iv_INDEX:
            call_glVertex3iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex3s
        case glVertex3s_INDEX:
            call_glVertex3s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex3sv
        case glVertex3sv_INDEX:
            call_glVertex3sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex4d
        case glVertex4d_INDEX:
            call_glVertex4d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex4dv
        case glVertex4dv_INDEX:
            call_glVertex4dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex4f
        case glVertex4f_INDEX:
            call_glVertex4f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex4fv
        case glVertex4fv_INDEX:
            call_glVertex4fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex4i
        case glVertex4i_INDEX:
            call_glVertex4i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex4iv
        case glVertex4iv_INDEX:
            call_glVertex4iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex4s
        case glVertex4s_INDEX:
            call_glVertex4s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertex4sv
        case glVertex4sv_INDEX:
            call_glVertex4sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glVertexPointer
        case glVertexPointer_INDEX:
            call_glVertexPointer(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glViewport
        case glViewport_INDEX:
            call_glViewport(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos2d
        case glWindowPos2d_INDEX:
            call_glWindowPos2d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos2dv
        case glWindowPos2dv_INDEX:
            call_glWindowPos2dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos2f
        case glWindowPos2f_INDEX:
            call_glWindowPos2f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos2fv
        case glWindowPos2fv_INDEX:
            call_glWindowPos2fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos2i
        case glWindowPos2i_INDEX:
            call_glWindowPos2i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos2iv
        case glWindowPos2iv_INDEX:
            call_glWindowPos2iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos2s
        case glWindowPos2s_INDEX:
            call_glWindowPos2s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos2sv
        case glWindowPos2sv_INDEX:
            call_glWindowPos2sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos3d
        case glWindowPos3d_INDEX:
            call_glWindowPos3d(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos3dv
        case glWindowPos3dv_INDEX:
            call_glWindowPos3dv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos3f
        case glWindowPos3f_INDEX:
            call_glWindowPos3f(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos3fv
        case glWindowPos3fv_INDEX:
            call_glWindowPos3fv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos3i
        case glWindowPos3i_INDEX:
            call_glWindowPos3i(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos3iv
        case glWindowPos3iv_INDEX:
            call_glWindowPos3iv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos3s
        case glWindowPos3s_INDEX:
            call_glWindowPos3s(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glWindowPos3sv
        case glWindowPos3sv_INDEX:
            call_glWindowPos3sv(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXChooseFBConfig
        case glXChooseFBConfig_INDEX:
            call_glXChooseFBConfig(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXChooseVisual
        case glXChooseVisual_INDEX:
            call_glXChooseVisual(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXCopyContext
        case glXCopyContext_INDEX:
            call_glXCopyContext(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXCreateContext
        case glXCreateContext_INDEX:
            call_glXCreateContext(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXCreateContextAttribsARB
        case glXCreateContextAttribsARB_INDEX:
            call_glXCreateContextAttribsARB(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXCreateGLXPixmap
        case glXCreateGLXPixmap_INDEX:
            call_glXCreateGLXPixmap(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXCreateNewContext
        case glXCreateNewContext_INDEX:
            call_glXCreateNewContext(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXCreateWindow
        case glXCreateWindow_INDEX:
            call_glXCreateWindow(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXDestroyContext
        case glXDestroyContext_INDEX:
            call_glXDestroyContext(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXDestroyGLXPixmap
        case glXDestroyGLXPixmap_INDEX:
            call_glXDestroyGLXPixmap(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXDestroyWindow
        case glXDestroyWindow_INDEX:
            call_glXDestroyWindow(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXGetClientString
        case glXGetClientString_INDEX:
            call_glXGetClientString(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXGetConfig
        case glXGetConfig_INDEX:
            call_glXGetConfig(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXGetCurrentContext
        case glXGetCurrentContext_INDEX:
            call_glXGetCurrentContext(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXGetCurrentDisplay
        case glXGetCurrentDisplay_INDEX:
            call_glXGetCurrentDisplay(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXGetCurrentDrawable
        case glXGetCurrentDrawable_INDEX:
            call_glXGetCurrentDrawable(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXGetFBConfigAttrib
        case glXGetFBConfigAttrib_INDEX:
            call_glXGetFBConfigAttrib(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXGetFBConfigs
        case glXGetFBConfigs_INDEX:
            call_glXGetFBConfigs(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXGetProcAddress
        case glXGetProcAddress_INDEX:
            call_glXGetProcAddress(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXGetProcAddressARB
        case glXGetProcAddressARB_INDEX:
            call_glXGetProcAddressARB(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXGetVisualFromFBConfig
        case glXGetVisualFromFBConfig_INDEX:
            call_glXGetVisualFromFBConfig(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXIsDirect
        case glXIsDirect_INDEX:
            call_glXIsDirect(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXMakeContextCurrent
        case glXMakeContextCurrent_INDEX:
            call_glXMakeContextCurrent(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXMakeCurrent
        case glXMakeCurrent_INDEX:
            call_glXMakeCurrent(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXQueryExtension
        case glXQueryExtension_INDEX:
            call_glXQueryExtension(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXQueryExtensionsString
        case glXQueryExtensionsString_INDEX:
            call_glXQueryExtensionsString(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXQueryServerString
        case glXQueryServerString_INDEX:
            call_glXQueryServerString(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXQueryVersion
        case glXQueryVersion_INDEX:
            call_glXQueryVersion(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXReleaseBuffersMESA
        case glXReleaseBuffersMESA_INDEX:
            call_glXReleaseBuffersMESA(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXSwapBuffers
        case glXSwapBuffers_INDEX:
            call_glXSwapBuffers(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXSwapIntervalEXT
        case glXSwapIntervalEXT_INDEX:
            call_glXSwapIntervalEXT(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXSwapIntervalMESA
        case glXSwapIntervalMESA_INDEX:
            call_glXSwapIntervalMESA(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXSwapIntervalSGI
        case glXSwapIntervalSGI_INDEX:
            call_glXSwapIntervalSGI(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXUseXFont
        case glXUseXFont_INDEX:
            call_glXUseXFont(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXWaitGL
        case glXWaitGL_INDEX:
            call_glXWaitGL(packed, ret_v);
            break;
        #endif
        #ifndef skip_index_glXWaitX
        case glXWaitX_INDEX:
            call_glXWaitX(packed, ret_v);
            break;
        #endif
        default:
            fprintf(stderr, "warning: glIndexedCall with unknown index %d\n", packed->index);
            break;
    }
}

void glIndexedPrint(const packed_call_t *packed) {
    switch (packed->index) {
        case glActiveTexture_INDEX: {
            glActiveTexture_PACKED *unpacked = (glActiveTexture_PACKED *)packed;
            glActiveTexture_ARGS *args = (glActiveTexture_ARGS *)&unpacked->args;
            printf("glActiveTexture(0x%04X);\n", args->texture);
            break;
        }
        case glActiveTextureARB_INDEX: {
            glActiveTextureARB_PACKED *unpacked = (glActiveTextureARB_PACKED *)packed;
            glActiveTextureARB_ARGS *args = (glActiveTextureARB_ARGS *)&unpacked->args;
            printf("glActiveTextureARB(0x%04X);\n", args->texture);
            break;
        }
        case glAlphaFunc_INDEX: {
            glAlphaFunc_PACKED *unpacked = (glAlphaFunc_PACKED *)packed;
            glAlphaFunc_ARGS *args = (glAlphaFunc_ARGS *)&unpacked->args;
            printf("glAlphaFunc(0x%04X, %0.2f);\n", args->func, args->ref);
            break;
        }
        case glAreTexturesResident_INDEX: {
            glAreTexturesResident_PACKED *unpacked = (glAreTexturesResident_PACKED *)packed;
            glAreTexturesResident_ARGS *args = (glAreTexturesResident_ARGS *)&unpacked->args;
            printf("glAreTexturesResident(%d, %p, %p);\n", args->n, args->textures, args->residences);
            break;
        }
        case glArrayElement_INDEX: {
            glArrayElement_PACKED *unpacked = (glArrayElement_PACKED *)packed;
            glArrayElement_ARGS *args = (glArrayElement_ARGS *)&unpacked->args;
            printf("glArrayElement(%d);\n", args->i);
            break;
        }
        case glBegin_INDEX: {
            glBegin_PACKED *unpacked = (glBegin_PACKED *)packed;
            glBegin_ARGS *args = (glBegin_ARGS *)&unpacked->args;
            printf("glBegin(0x%04X);\n", args->mode);
            break;
        }
        case glBindBuffer_INDEX: {
            glBindBuffer_PACKED *unpacked = (glBindBuffer_PACKED *)packed;
            glBindBuffer_ARGS *args = (glBindBuffer_ARGS *)&unpacked->args;
            printf("glBindBuffer(0x%04X, %u);\n", args->target, args->buffer);
            break;
        }
        case glBindTexture_INDEX: {
            glBindTexture_PACKED *unpacked = (glBindTexture_PACKED *)packed;
            glBindTexture_ARGS *args = (glBindTexture_ARGS *)&unpacked->args;
            printf("glBindTexture(0x%04X, %u);\n", args->target, args->texture);
            break;
        }
        case glBitmap_INDEX: {
            glBitmap_PACKED *unpacked = (glBitmap_PACKED *)packed;
            glBitmap_ARGS *args = (glBitmap_ARGS *)&unpacked->args;
            printf("glBitmap(%d, %d, %0.2f, %0.2f, %0.2f, %0.2f, %p);\n", args->width, args->height, args->xorig, args->yorig, args->xmove, args->ymove, args->bitmap);
            break;
        }
        case glBlendColor_INDEX: {
            glBlendColor_PACKED *unpacked = (glBlendColor_PACKED *)packed;
            glBlendColor_ARGS *args = (glBlendColor_ARGS *)&unpacked->args;
            printf("glBlendColor(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glBlendEquation_INDEX: {
            glBlendEquation_PACKED *unpacked = (glBlendEquation_PACKED *)packed;
            glBlendEquation_ARGS *args = (glBlendEquation_ARGS *)&unpacked->args;
            printf("glBlendEquation(0x%04X);\n", args->mode);
            break;
        }
        case glBlendEquationSeparate_INDEX: {
            glBlendEquationSeparate_PACKED *unpacked = (glBlendEquationSeparate_PACKED *)packed;
            glBlendEquationSeparate_ARGS *args = (glBlendEquationSeparate_ARGS *)&unpacked->args;
            printf("glBlendEquationSeparate(0x%04X, 0x%04X);\n", args->modeRGB, args->modeAlpha);
            break;
        }
        case glBlendEquationSeparatei_INDEX: {
            glBlendEquationSeparatei_PACKED *unpacked = (glBlendEquationSeparatei_PACKED *)packed;
            glBlendEquationSeparatei_ARGS *args = (glBlendEquationSeparatei_ARGS *)&unpacked->args;
            printf("glBlendEquationSeparatei(%u, 0x%04X, 0x%04X);\n", args->buf, args->modeRGB, args->modeAlpha);
            break;
        }
        case glBlendFunc_INDEX: {
            glBlendFunc_PACKED *unpacked = (glBlendFunc_PACKED *)packed;
            glBlendFunc_ARGS *args = (glBlendFunc_ARGS *)&unpacked->args;
            printf("glBlendFunc(0x%04X, 0x%04X);\n", args->sfactor, args->dfactor);
            break;
        }
        case glBlendFuncSeparate_INDEX: {
            glBlendFuncSeparate_PACKED *unpacked = (glBlendFuncSeparate_PACKED *)packed;
            glBlendFuncSeparate_ARGS *args = (glBlendFuncSeparate_ARGS *)&unpacked->args;
            printf("glBlendFuncSeparate(0x%04X, 0x%04X, 0x%04X, 0x%04X);\n", args->sfactorRGB, args->dfactorRGB, args->sfactorAlpha, args->dfactorAlpha);
            break;
        }
        case glBlendFuncSeparatei_INDEX: {
            glBlendFuncSeparatei_PACKED *unpacked = (glBlendFuncSeparatei_PACKED *)packed;
            glBlendFuncSeparatei_ARGS *args = (glBlendFuncSeparatei_ARGS *)&unpacked->args;
            printf("glBlendFuncSeparatei(%u, 0x%04X, 0x%04X, 0x%04X, 0x%04X);\n", args->buf, args->srcRGB, args->dstRGB, args->srcAlpha, args->dstAlpha);
            break;
        }
        case glBufferData_INDEX: {
            glBufferData_PACKED *unpacked = (glBufferData_PACKED *)packed;
            glBufferData_ARGS *args = (glBufferData_ARGS *)&unpacked->args;
            printf("glBufferData(0x%04X, %td, %p, 0x%04X);\n", args->target, args->size, args->data, args->usage);
            break;
        }
        case glBufferSubData_INDEX: {
            glBufferSubData_PACKED *unpacked = (glBufferSubData_PACKED *)packed;
            glBufferSubData_ARGS *args = (glBufferSubData_ARGS *)&unpacked->args;
            printf("glBufferSubData(0x%04X, %td, %td, %p);\n", args->target, args->offset, args->size, args->data);
            break;
        }
        case glCallList_INDEX: {
            glCallList_PACKED *unpacked = (glCallList_PACKED *)packed;
            glCallList_ARGS *args = (glCallList_ARGS *)&unpacked->args;
            printf("glCallList(%u);\n", args->list);
            break;
        }
        case glCallLists_INDEX: {
            glCallLists_PACKED *unpacked = (glCallLists_PACKED *)packed;
            glCallLists_ARGS *args = (glCallLists_ARGS *)&unpacked->args;
            printf("glCallLists(%d, 0x%04X, %p);\n", args->n, args->type, args->lists);
            break;
        }
        case glClear_INDEX: {
            glClear_PACKED *unpacked = (glClear_PACKED *)packed;
            glClear_ARGS *args = (glClear_ARGS *)&unpacked->args;
            printf("glClear(%d);\n", args->mask);
            break;
        }
        case glClearAccum_INDEX: {
            glClearAccum_PACKED *unpacked = (glClearAccum_PACKED *)packed;
            glClearAccum_ARGS *args = (glClearAccum_ARGS *)&unpacked->args;
            printf("glClearAccum(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glClearColor_INDEX: {
            glClearColor_PACKED *unpacked = (glClearColor_PACKED *)packed;
            glClearColor_ARGS *args = (glClearColor_ARGS *)&unpacked->args;
            printf("glClearColor(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glClearDepth_INDEX: {
            glClearDepth_PACKED *unpacked = (glClearDepth_PACKED *)packed;
            glClearDepth_ARGS *args = (glClearDepth_ARGS *)&unpacked->args;
            printf("glClearDepth(%0.2f);\n", args->depth);
            break;
        }
        case glClearDepthf_INDEX: {
            glClearDepthf_PACKED *unpacked = (glClearDepthf_PACKED *)packed;
            glClearDepthf_ARGS *args = (glClearDepthf_ARGS *)&unpacked->args;
            printf("glClearDepthf(%0.2f);\n", args->depth);
            break;
        }
        case glClearDepthfOES_INDEX: {
            glClearDepthfOES_PACKED *unpacked = (glClearDepthfOES_PACKED *)packed;
            glClearDepthfOES_ARGS *args = (glClearDepthfOES_ARGS *)&unpacked->args;
            printf("glClearDepthfOES(%0.2f);\n", args->depth);
            break;
        }
        case glClearStencil_INDEX: {
            glClearStencil_PACKED *unpacked = (glClearStencil_PACKED *)packed;
            glClearStencil_ARGS *args = (glClearStencil_ARGS *)&unpacked->args;
            printf("glClearStencil(%d);\n", args->s);
            break;
        }
        case glClientActiveTexture_INDEX: {
            glClientActiveTexture_PACKED *unpacked = (glClientActiveTexture_PACKED *)packed;
            glClientActiveTexture_ARGS *args = (glClientActiveTexture_ARGS *)&unpacked->args;
            printf("glClientActiveTexture(0x%04X);\n", args->texture);
            break;
        }
        case glClientActiveTextureARB_INDEX: {
            glClientActiveTextureARB_PACKED *unpacked = (glClientActiveTextureARB_PACKED *)packed;
            glClientActiveTextureARB_ARGS *args = (glClientActiveTextureARB_ARGS *)&unpacked->args;
            printf("glClientActiveTextureARB(0x%04X);\n", args->texture);
            break;
        }
        case glClipPlane_INDEX: {
            glClipPlane_PACKED *unpacked = (glClipPlane_PACKED *)packed;
            glClipPlane_ARGS *args = (glClipPlane_ARGS *)&unpacked->args;
            printf("glClipPlane(0x%04X, %p);\n", args->plane, args->equation);
            break;
        }
        case glClipPlanefOES_INDEX: {
            glClipPlanefOES_PACKED *unpacked = (glClipPlanefOES_PACKED *)packed;
            glClipPlanefOES_ARGS *args = (glClipPlanefOES_ARGS *)&unpacked->args;
            printf("glClipPlanefOES(0x%04X, %p);\n", args->plane, args->equation);
            break;
        }
        case glColor3b_INDEX: {
            glColor3b_PACKED *unpacked = (glColor3b_PACKED *)packed;
            glColor3b_ARGS *args = (glColor3b_ARGS *)&unpacked->args;
            printf("glColor3b(%c, %c, %c);\n", args->red, args->green, args->blue);
            break;
        }
        case glColor3bv_INDEX: {
            glColor3bv_PACKED *unpacked = (glColor3bv_PACKED *)packed;
            glColor3bv_ARGS *args = (glColor3bv_ARGS *)&unpacked->args;
            printf("glColor3bv(%p);\n", args->v);
            break;
        }
        case glColor3d_INDEX: {
            glColor3d_PACKED *unpacked = (glColor3d_PACKED *)packed;
            glColor3d_ARGS *args = (glColor3d_ARGS *)&unpacked->args;
            printf("glColor3d(%0.2f, %0.2f, %0.2f);\n", args->red, args->green, args->blue);
            break;
        }
        case glColor3dv_INDEX: {
            glColor3dv_PACKED *unpacked = (glColor3dv_PACKED *)packed;
            glColor3dv_ARGS *args = (glColor3dv_ARGS *)&unpacked->args;
            printf("glColor3dv(%p);\n", args->v);
            break;
        }
        case glColor3f_INDEX: {
            glColor3f_PACKED *unpacked = (glColor3f_PACKED *)packed;
            glColor3f_ARGS *args = (glColor3f_ARGS *)&unpacked->args;
            printf("glColor3f(%0.2f, %0.2f, %0.2f);\n", args->red, args->green, args->blue);
            break;
        }
        case glColor3fv_INDEX: {
            glColor3fv_PACKED *unpacked = (glColor3fv_PACKED *)packed;
            glColor3fv_ARGS *args = (glColor3fv_ARGS *)&unpacked->args;
            printf("glColor3fv(%p);\n", args->v);
            break;
        }
        case glColor3i_INDEX: {
            glColor3i_PACKED *unpacked = (glColor3i_PACKED *)packed;
            glColor3i_ARGS *args = (glColor3i_ARGS *)&unpacked->args;
            printf("glColor3i(%d, %d, %d);\n", args->red, args->green, args->blue);
            break;
        }
        case glColor3iv_INDEX: {
            glColor3iv_PACKED *unpacked = (glColor3iv_PACKED *)packed;
            glColor3iv_ARGS *args = (glColor3iv_ARGS *)&unpacked->args;
            printf("glColor3iv(%p);\n", args->v);
            break;
        }
        case glColor3s_INDEX: {
            glColor3s_PACKED *unpacked = (glColor3s_PACKED *)packed;
            glColor3s_ARGS *args = (glColor3s_ARGS *)&unpacked->args;
            printf("glColor3s(%d, %d, %d);\n", args->red, args->green, args->blue);
            break;
        }
        case glColor3sv_INDEX: {
            glColor3sv_PACKED *unpacked = (glColor3sv_PACKED *)packed;
            glColor3sv_ARGS *args = (glColor3sv_ARGS *)&unpacked->args;
            printf("glColor3sv(%p);\n", args->v);
            break;
        }
        case glColor3ub_INDEX: {
            glColor3ub_PACKED *unpacked = (glColor3ub_PACKED *)packed;
            glColor3ub_ARGS *args = (glColor3ub_ARGS *)&unpacked->args;
            printf("glColor3ub(%c, %c, %c);\n", args->red, args->green, args->blue);
            break;
        }
        case glColor3ubv_INDEX: {
            glColor3ubv_PACKED *unpacked = (glColor3ubv_PACKED *)packed;
            glColor3ubv_ARGS *args = (glColor3ubv_ARGS *)&unpacked->args;
            printf("glColor3ubv(%p);\n", args->v);
            break;
        }
        case glColor3ui_INDEX: {
            glColor3ui_PACKED *unpacked = (glColor3ui_PACKED *)packed;
            glColor3ui_ARGS *args = (glColor3ui_ARGS *)&unpacked->args;
            printf("glColor3ui(%u, %u, %u);\n", args->red, args->green, args->blue);
            break;
        }
        case glColor3uiv_INDEX: {
            glColor3uiv_PACKED *unpacked = (glColor3uiv_PACKED *)packed;
            glColor3uiv_ARGS *args = (glColor3uiv_ARGS *)&unpacked->args;
            printf("glColor3uiv(%p);\n", args->v);
            break;
        }
        case glColor3us_INDEX: {
            glColor3us_PACKED *unpacked = (glColor3us_PACKED *)packed;
            glColor3us_ARGS *args = (glColor3us_ARGS *)&unpacked->args;
            printf("glColor3us(%u, %u, %u);\n", args->red, args->green, args->blue);
            break;
        }
        case glColor3usv_INDEX: {
            glColor3usv_PACKED *unpacked = (glColor3usv_PACKED *)packed;
            glColor3usv_ARGS *args = (glColor3usv_ARGS *)&unpacked->args;
            printf("glColor3usv(%p);\n", args->v);
            break;
        }
        case glColor4b_INDEX: {
            glColor4b_PACKED *unpacked = (glColor4b_PACKED *)packed;
            glColor4b_ARGS *args = (glColor4b_ARGS *)&unpacked->args;
            printf("glColor4b(%c, %c, %c, %c);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glColor4bv_INDEX: {
            glColor4bv_PACKED *unpacked = (glColor4bv_PACKED *)packed;
            glColor4bv_ARGS *args = (glColor4bv_ARGS *)&unpacked->args;
            printf("glColor4bv(%p);\n", args->v);
            break;
        }
        case glColor4d_INDEX: {
            glColor4d_PACKED *unpacked = (glColor4d_PACKED *)packed;
            glColor4d_ARGS *args = (glColor4d_ARGS *)&unpacked->args;
            printf("glColor4d(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glColor4dv_INDEX: {
            glColor4dv_PACKED *unpacked = (glColor4dv_PACKED *)packed;
            glColor4dv_ARGS *args = (glColor4dv_ARGS *)&unpacked->args;
            printf("glColor4dv(%p);\n", args->v);
            break;
        }
        case glColor4f_INDEX: {
            glColor4f_PACKED *unpacked = (glColor4f_PACKED *)packed;
            glColor4f_ARGS *args = (glColor4f_ARGS *)&unpacked->args;
            printf("glColor4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glColor4fv_INDEX: {
            glColor4fv_PACKED *unpacked = (glColor4fv_PACKED *)packed;
            glColor4fv_ARGS *args = (glColor4fv_ARGS *)&unpacked->args;
            printf("glColor4fv(%p);\n", args->v);
            break;
        }
        case glColor4i_INDEX: {
            glColor4i_PACKED *unpacked = (glColor4i_PACKED *)packed;
            glColor4i_ARGS *args = (glColor4i_ARGS *)&unpacked->args;
            printf("glColor4i(%d, %d, %d, %d);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glColor4iv_INDEX: {
            glColor4iv_PACKED *unpacked = (glColor4iv_PACKED *)packed;
            glColor4iv_ARGS *args = (glColor4iv_ARGS *)&unpacked->args;
            printf("glColor4iv(%p);\n", args->v);
            break;
        }
        case glColor4s_INDEX: {
            glColor4s_PACKED *unpacked = (glColor4s_PACKED *)packed;
            glColor4s_ARGS *args = (glColor4s_ARGS *)&unpacked->args;
            printf("glColor4s(%d, %d, %d, %d);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glColor4sv_INDEX: {
            glColor4sv_PACKED *unpacked = (glColor4sv_PACKED *)packed;
            glColor4sv_ARGS *args = (glColor4sv_ARGS *)&unpacked->args;
            printf("glColor4sv(%p);\n", args->v);
            break;
        }
        case glColor4ub_INDEX: {
            glColor4ub_PACKED *unpacked = (glColor4ub_PACKED *)packed;
            glColor4ub_ARGS *args = (glColor4ub_ARGS *)&unpacked->args;
            printf("glColor4ub(%c, %c, %c, %c);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glColor4ubv_INDEX: {
            glColor4ubv_PACKED *unpacked = (glColor4ubv_PACKED *)packed;
            glColor4ubv_ARGS *args = (glColor4ubv_ARGS *)&unpacked->args;
            printf("glColor4ubv(%p);\n", args->v);
            break;
        }
        case glColor4ui_INDEX: {
            glColor4ui_PACKED *unpacked = (glColor4ui_PACKED *)packed;
            glColor4ui_ARGS *args = (glColor4ui_ARGS *)&unpacked->args;
            printf("glColor4ui(%u, %u, %u, %u);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glColor4uiv_INDEX: {
            glColor4uiv_PACKED *unpacked = (glColor4uiv_PACKED *)packed;
            glColor4uiv_ARGS *args = (glColor4uiv_ARGS *)&unpacked->args;
            printf("glColor4uiv(%p);\n", args->v);
            break;
        }
        case glColor4us_INDEX: {
            glColor4us_PACKED *unpacked = (glColor4us_PACKED *)packed;
            glColor4us_ARGS *args = (glColor4us_ARGS *)&unpacked->args;
            printf("glColor4us(%u, %u, %u, %u);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glColor4usv_INDEX: {
            glColor4usv_PACKED *unpacked = (glColor4usv_PACKED *)packed;
            glColor4usv_ARGS *args = (glColor4usv_ARGS *)&unpacked->args;
            printf("glColor4usv(%p);\n", args->v);
            break;
        }
        case glColorMask_INDEX: {
            glColorMask_PACKED *unpacked = (glColorMask_PACKED *)packed;
            glColorMask_ARGS *args = (glColorMask_ARGS *)&unpacked->args;
            printf("glColorMask(%d, %d, %d, %d);\n", args->red, args->green, args->blue, args->alpha);
            break;
        }
        case glColorMaterial_INDEX: {
            glColorMaterial_PACKED *unpacked = (glColorMaterial_PACKED *)packed;
            glColorMaterial_ARGS *args = (glColorMaterial_ARGS *)&unpacked->args;
            printf("glColorMaterial(0x%04X, 0x%04X);\n", args->face, args->mode);
            break;
        }
        case glColorPointer_INDEX: {
            glColorPointer_PACKED *unpacked = (glColorPointer_PACKED *)packed;
            glColorPointer_ARGS *args = (glColorPointer_ARGS *)&unpacked->args;
            printf("glColorPointer(%d, 0x%04X, %d, %p);\n", args->size, args->type, args->stride, args->pointer);
            break;
        }
        case glCompressedTexImage2D_INDEX: {
            glCompressedTexImage2D_PACKED *unpacked = (glCompressedTexImage2D_PACKED *)packed;
            glCompressedTexImage2D_ARGS *args = (glCompressedTexImage2D_ARGS *)&unpacked->args;
            printf("glCompressedTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %p);\n", args->target, args->level, args->internalformat, args->width, args->height, args->border, args->imageSize, args->data);
            break;
        }
        case glCompressedTexSubImage2D_INDEX: {
            glCompressedTexSubImage2D_PACKED *unpacked = (glCompressedTexSubImage2D_PACKED *)packed;
            glCompressedTexSubImage2D_ARGS *args = (glCompressedTexSubImage2D_ARGS *)&unpacked->args;
            printf("glCompressedTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, %d, %p);\n", args->target, args->level, args->xoffset, args->yoffset, args->width, args->height, args->format, args->imageSize, args->data);
            break;
        }
        case glCopyPixels_INDEX: {
            glCopyPixels_PACKED *unpacked = (glCopyPixels_PACKED *)packed;
            glCopyPixels_ARGS *args = (glCopyPixels_ARGS *)&unpacked->args;
            printf("glCopyPixels(%d, %d, %d, %d, 0x%04X);\n", args->x, args->y, args->width, args->height, args->type);
            break;
        }
        case glCopyTexImage2D_INDEX: {
            glCopyTexImage2D_PACKED *unpacked = (glCopyTexImage2D_PACKED *)packed;
            glCopyTexImage2D_ARGS *args = (glCopyTexImage2D_ARGS *)&unpacked->args;
            printf("glCopyTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %d);\n", args->target, args->level, args->internalformat, args->x, args->y, args->width, args->height, args->border);
            break;
        }
        case glCopyTexSubImage2D_INDEX: {
            glCopyTexSubImage2D_PACKED *unpacked = (glCopyTexSubImage2D_PACKED *)packed;
            glCopyTexSubImage2D_ARGS *args = (glCopyTexSubImage2D_ARGS *)&unpacked->args;
            printf("glCopyTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, %d, %d);\n", args->target, args->level, args->xoffset, args->yoffset, args->x, args->y, args->width, args->height);
            break;
        }
        case glCullFace_INDEX: {
            glCullFace_PACKED *unpacked = (glCullFace_PACKED *)packed;
            glCullFace_ARGS *args = (glCullFace_ARGS *)&unpacked->args;
            printf("glCullFace(0x%04X);\n", args->mode);
            break;
        }
        case glDeleteBuffers_INDEX: {
            glDeleteBuffers_PACKED *unpacked = (glDeleteBuffers_PACKED *)packed;
            glDeleteBuffers_ARGS *args = (glDeleteBuffers_ARGS *)&unpacked->args;
            printf("glDeleteBuffers(%d, %p);\n", args->n, args->buffers);
            break;
        }
        case glDeleteLists_INDEX: {
            glDeleteLists_PACKED *unpacked = (glDeleteLists_PACKED *)packed;
            glDeleteLists_ARGS *args = (glDeleteLists_ARGS *)&unpacked->args;
            printf("glDeleteLists(%u, %d);\n", args->list, args->range);
            break;
        }
        case glDeleteTextures_INDEX: {
            glDeleteTextures_PACKED *unpacked = (glDeleteTextures_PACKED *)packed;
            glDeleteTextures_ARGS *args = (glDeleteTextures_ARGS *)&unpacked->args;
            printf("glDeleteTextures(%d, %p);\n", args->n, args->textures);
            break;
        }
        case glDepthFunc_INDEX: {
            glDepthFunc_PACKED *unpacked = (glDepthFunc_PACKED *)packed;
            glDepthFunc_ARGS *args = (glDepthFunc_ARGS *)&unpacked->args;
            printf("glDepthFunc(0x%04X);\n", args->func);
            break;
        }
        case glDepthMask_INDEX: {
            glDepthMask_PACKED *unpacked = (glDepthMask_PACKED *)packed;
            glDepthMask_ARGS *args = (glDepthMask_ARGS *)&unpacked->args;
            printf("glDepthMask(%d);\n", args->flag);
            break;
        }
        case glDepthRange_INDEX: {
            glDepthRange_PACKED *unpacked = (glDepthRange_PACKED *)packed;
            glDepthRange_ARGS *args = (glDepthRange_ARGS *)&unpacked->args;
            printf("glDepthRange(%0.2f, %0.2f);\n", args->near, args->far);
            break;
        }
        case glDepthRangef_INDEX: {
            glDepthRangef_PACKED *unpacked = (glDepthRangef_PACKED *)packed;
            glDepthRangef_ARGS *args = (glDepthRangef_ARGS *)&unpacked->args;
            printf("glDepthRangef(%0.2f, %0.2f);\n", args->near, args->far);
            break;
        }
        case glDepthRangefOES_INDEX: {
            glDepthRangefOES_PACKED *unpacked = (glDepthRangefOES_PACKED *)packed;
            glDepthRangefOES_ARGS *args = (glDepthRangefOES_ARGS *)&unpacked->args;
            printf("glDepthRangefOES(%0.2f, %0.2f);\n", args->n, args->f);
            break;
        }
        case glDisable_INDEX: {
            glDisable_PACKED *unpacked = (glDisable_PACKED *)packed;
            glDisable_ARGS *args = (glDisable_ARGS *)&unpacked->args;
            printf("glDisable(0x%04X);\n", args->cap);
            break;
        }
        case glDisableClientState_INDEX: {
            glDisableClientState_PACKED *unpacked = (glDisableClientState_PACKED *)packed;
            glDisableClientState_ARGS *args = (glDisableClientState_ARGS *)&unpacked->args;
            printf("glDisableClientState(0x%04X);\n", args->array);
            break;
        }
        case glDrawArrays_INDEX: {
            glDrawArrays_PACKED *unpacked = (glDrawArrays_PACKED *)packed;
            glDrawArrays_ARGS *args = (glDrawArrays_ARGS *)&unpacked->args;
            printf("glDrawArrays(0x%04X, %d, %d);\n", args->mode, args->first, args->count);
            break;
        }
        case glDrawBuffer_INDEX: {
            glDrawBuffer_PACKED *unpacked = (glDrawBuffer_PACKED *)packed;
            glDrawBuffer_ARGS *args = (glDrawBuffer_ARGS *)&unpacked->args;
            printf("glDrawBuffer(0x%04X);\n", args->mode);
            break;
        }
        case glDrawElements_INDEX: {
            glDrawElements_PACKED *unpacked = (glDrawElements_PACKED *)packed;
            glDrawElements_ARGS *args = (glDrawElements_ARGS *)&unpacked->args;
            printf("glDrawElements(0x%04X, %d, 0x%04X, %p);\n", args->mode, args->count, args->type, args->indices);
            break;
        }
        case glDrawPixels_INDEX: {
            glDrawPixels_PACKED *unpacked = (glDrawPixels_PACKED *)packed;
            glDrawPixels_ARGS *args = (glDrawPixels_ARGS *)&unpacked->args;
            printf("glDrawPixels(%d, %d, 0x%04X, 0x%04X, %p);\n", args->width, args->height, args->format, args->type, args->pixels);
            break;
        }
        case glDrawRangeElements_INDEX: {
            glDrawRangeElements_PACKED *unpacked = (glDrawRangeElements_PACKED *)packed;
            glDrawRangeElements_ARGS *args = (glDrawRangeElements_ARGS *)&unpacked->args;
            printf("glDrawRangeElements(0x%04X, %u, %u, %d, 0x%04X, %p);\n", args->mode, args->start, args->end, args->count, args->type, args->indices);
            break;
        }
        case glEdgeFlag_INDEX: {
            glEdgeFlag_PACKED *unpacked = (glEdgeFlag_PACKED *)packed;
            glEdgeFlag_ARGS *args = (glEdgeFlag_ARGS *)&unpacked->args;
            printf("glEdgeFlag(%d);\n", args->flag);
            break;
        }
        case glEnable_INDEX: {
            glEnable_PACKED *unpacked = (glEnable_PACKED *)packed;
            glEnable_ARGS *args = (glEnable_ARGS *)&unpacked->args;
            printf("glEnable(0x%04X);\n", args->cap);
            break;
        }
        case glEnableClientState_INDEX: {
            glEnableClientState_PACKED *unpacked = (glEnableClientState_PACKED *)packed;
            glEnableClientState_ARGS *args = (glEnableClientState_ARGS *)&unpacked->args;
            printf("glEnableClientState(0x%04X);\n", args->array);
            break;
        }
        case glEnd_INDEX: {
            printf("glEnd();\n");
            break;
        }
        case glEndList_INDEX: {
            printf("glEndList();\n");
            break;
        }
        case glEvalCoord1d_INDEX: {
            glEvalCoord1d_PACKED *unpacked = (glEvalCoord1d_PACKED *)packed;
            glEvalCoord1d_ARGS *args = (glEvalCoord1d_ARGS *)&unpacked->args;
            printf("glEvalCoord1d(%0.2f);\n", args->u);
            break;
        }
        case glEvalCoord1dv_INDEX: {
            glEvalCoord1dv_PACKED *unpacked = (glEvalCoord1dv_PACKED *)packed;
            glEvalCoord1dv_ARGS *args = (glEvalCoord1dv_ARGS *)&unpacked->args;
            printf("glEvalCoord1dv(%p);\n", args->u);
            break;
        }
        case glEvalCoord1f_INDEX: {
            glEvalCoord1f_PACKED *unpacked = (glEvalCoord1f_PACKED *)packed;
            glEvalCoord1f_ARGS *args = (glEvalCoord1f_ARGS *)&unpacked->args;
            printf("glEvalCoord1f(%0.2f);\n", args->u);
            break;
        }
        case glEvalCoord1fv_INDEX: {
            glEvalCoord1fv_PACKED *unpacked = (glEvalCoord1fv_PACKED *)packed;
            glEvalCoord1fv_ARGS *args = (glEvalCoord1fv_ARGS *)&unpacked->args;
            printf("glEvalCoord1fv(%p);\n", args->u);
            break;
        }
        case glEvalCoord2d_INDEX: {
            glEvalCoord2d_PACKED *unpacked = (glEvalCoord2d_PACKED *)packed;
            glEvalCoord2d_ARGS *args = (glEvalCoord2d_ARGS *)&unpacked->args;
            printf("glEvalCoord2d(%0.2f, %0.2f);\n", args->u, args->v);
            break;
        }
        case glEvalCoord2dv_INDEX: {
            glEvalCoord2dv_PACKED *unpacked = (glEvalCoord2dv_PACKED *)packed;
            glEvalCoord2dv_ARGS *args = (glEvalCoord2dv_ARGS *)&unpacked->args;
            printf("glEvalCoord2dv(%p);\n", args->u);
            break;
        }
        case glEvalCoord2f_INDEX: {
            glEvalCoord2f_PACKED *unpacked = (glEvalCoord2f_PACKED *)packed;
            glEvalCoord2f_ARGS *args = (glEvalCoord2f_ARGS *)&unpacked->args;
            printf("glEvalCoord2f(%0.2f, %0.2f);\n", args->u, args->v);
            break;
        }
        case glEvalCoord2fv_INDEX: {
            glEvalCoord2fv_PACKED *unpacked = (glEvalCoord2fv_PACKED *)packed;
            glEvalCoord2fv_ARGS *args = (glEvalCoord2fv_ARGS *)&unpacked->args;
            printf("glEvalCoord2fv(%p);\n", args->u);
            break;
        }
        case glEvalMesh1_INDEX: {
            glEvalMesh1_PACKED *unpacked = (glEvalMesh1_PACKED *)packed;
            glEvalMesh1_ARGS *args = (glEvalMesh1_ARGS *)&unpacked->args;
            printf("glEvalMesh1(0x%04X, %d, %d);\n", args->mode, args->i1, args->i2);
            break;
        }
        case glEvalMesh2_INDEX: {
            glEvalMesh2_PACKED *unpacked = (glEvalMesh2_PACKED *)packed;
            glEvalMesh2_ARGS *args = (glEvalMesh2_ARGS *)&unpacked->args;
            printf("glEvalMesh2(0x%04X, %d, %d, %d, %d);\n", args->mode, args->i1, args->i2, args->j1, args->j2);
            break;
        }
        case glEvalPoint1_INDEX: {
            glEvalPoint1_PACKED *unpacked = (glEvalPoint1_PACKED *)packed;
            glEvalPoint1_ARGS *args = (glEvalPoint1_ARGS *)&unpacked->args;
            printf("glEvalPoint1(%d);\n", args->i);
            break;
        }
        case glEvalPoint2_INDEX: {
            glEvalPoint2_PACKED *unpacked = (glEvalPoint2_PACKED *)packed;
            glEvalPoint2_ARGS *args = (glEvalPoint2_ARGS *)&unpacked->args;
            printf("glEvalPoint2(%d, %d);\n", args->i, args->j);
            break;
        }
        case glFeedbackBuffer_INDEX: {
            glFeedbackBuffer_PACKED *unpacked = (glFeedbackBuffer_PACKED *)packed;
            glFeedbackBuffer_ARGS *args = (glFeedbackBuffer_ARGS *)&unpacked->args;
            printf("glFeedbackBuffer(%d, 0x%04X, %p);\n", args->size, args->type, args->buffer);
            break;
        }
        case glFinish_INDEX: {
            printf("glFinish();\n");
            break;
        }
        case glFlush_INDEX: {
            printf("glFlush();\n");
            break;
        }
        case glFogCoordd_INDEX: {
            glFogCoordd_PACKED *unpacked = (glFogCoordd_PACKED *)packed;
            glFogCoordd_ARGS *args = (glFogCoordd_ARGS *)&unpacked->args;
            printf("glFogCoordd(%0.2f);\n", args->coord);
            break;
        }
        case glFogCoorddv_INDEX: {
            glFogCoorddv_PACKED *unpacked = (glFogCoorddv_PACKED *)packed;
            glFogCoorddv_ARGS *args = (glFogCoorddv_ARGS *)&unpacked->args;
            printf("glFogCoorddv(%p);\n", args->coord);
            break;
        }
        case glFogCoordf_INDEX: {
            glFogCoordf_PACKED *unpacked = (glFogCoordf_PACKED *)packed;
            glFogCoordf_ARGS *args = (glFogCoordf_ARGS *)&unpacked->args;
            printf("glFogCoordf(%0.2f);\n", args->coord);
            break;
        }
        case glFogCoordfv_INDEX: {
            glFogCoordfv_PACKED *unpacked = (glFogCoordfv_PACKED *)packed;
            glFogCoordfv_ARGS *args = (glFogCoordfv_ARGS *)&unpacked->args;
            printf("glFogCoordfv(%p);\n", args->coord);
            break;
        }
        case glFogf_INDEX: {
            glFogf_PACKED *unpacked = (glFogf_PACKED *)packed;
            glFogf_ARGS *args = (glFogf_ARGS *)&unpacked->args;
            printf("glFogf(0x%04X, %0.2f);\n", args->pname, args->param);
            break;
        }
        case glFogfv_INDEX: {
            glFogfv_PACKED *unpacked = (glFogfv_PACKED *)packed;
            glFogfv_ARGS *args = (glFogfv_ARGS *)&unpacked->args;
            printf("glFogfv(0x%04X, %p);\n", args->pname, args->params);
            break;
        }
        case glFogi_INDEX: {
            glFogi_PACKED *unpacked = (glFogi_PACKED *)packed;
            glFogi_ARGS *args = (glFogi_ARGS *)&unpacked->args;
            printf("glFogi(0x%04X, %d);\n", args->pname, args->param);
            break;
        }
        case glFogiv_INDEX: {
            glFogiv_PACKED *unpacked = (glFogiv_PACKED *)packed;
            glFogiv_ARGS *args = (glFogiv_ARGS *)&unpacked->args;
            printf("glFogiv(0x%04X, %p);\n", args->pname, args->params);
            break;
        }
        case glFrontFace_INDEX: {
            glFrontFace_PACKED *unpacked = (glFrontFace_PACKED *)packed;
            glFrontFace_ARGS *args = (glFrontFace_ARGS *)&unpacked->args;
            printf("glFrontFace(0x%04X);\n", args->mode);
            break;
        }
        case glFrustum_INDEX: {
            glFrustum_PACKED *unpacked = (glFrustum_PACKED *)packed;
            glFrustum_ARGS *args = (glFrustum_ARGS *)&unpacked->args;
            printf("glFrustum(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", args->left, args->right, args->bottom, args->top, args->zNear, args->zFar);
            break;
        }
        case glFrustumfOES_INDEX: {
            glFrustumfOES_PACKED *unpacked = (glFrustumfOES_PACKED *)packed;
            glFrustumfOES_ARGS *args = (glFrustumfOES_ARGS *)&unpacked->args;
            printf("glFrustumfOES(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", args->l, args->r, args->b, args->t, args->n, args->f);
            break;
        }
        case glGenBuffers_INDEX: {
            glGenBuffers_PACKED *unpacked = (glGenBuffers_PACKED *)packed;
            glGenBuffers_ARGS *args = (glGenBuffers_ARGS *)&unpacked->args;
            printf("glGenBuffers(%d, %p);\n", args->n, args->buffers);
            break;
        }
        case glGenLists_INDEX: {
            glGenLists_PACKED *unpacked = (glGenLists_PACKED *)packed;
            glGenLists_ARGS *args = (glGenLists_ARGS *)&unpacked->args;
            printf("glGenLists(%d);\n", args->range);
            break;
        }
        case glGenTextures_INDEX: {
            glGenTextures_PACKED *unpacked = (glGenTextures_PACKED *)packed;
            glGenTextures_ARGS *args = (glGenTextures_ARGS *)&unpacked->args;
            printf("glGenTextures(%d, %p);\n", args->n, args->textures);
            break;
        }
        case glGetBooleanv_INDEX: {
            glGetBooleanv_PACKED *unpacked = (glGetBooleanv_PACKED *)packed;
            glGetBooleanv_ARGS *args = (glGetBooleanv_ARGS *)&unpacked->args;
            printf("glGetBooleanv(0x%04X, %p);\n", args->pname, args->params);
            break;
        }
        case glGetBufferParameteriv_INDEX: {
            glGetBufferParameteriv_PACKED *unpacked = (glGetBufferParameteriv_PACKED *)packed;
            glGetBufferParameteriv_ARGS *args = (glGetBufferParameteriv_ARGS *)&unpacked->args;
            printf("glGetBufferParameteriv(0x%04X, 0x%04X, %p);\n", args->target, args->pname, args->params);
            break;
        }
        case glGetClipPlanefOES_INDEX: {
            glGetClipPlanefOES_PACKED *unpacked = (glGetClipPlanefOES_PACKED *)packed;
            glGetClipPlanefOES_ARGS *args = (glGetClipPlanefOES_ARGS *)&unpacked->args;
            printf("glGetClipPlanefOES(0x%04X, %p);\n", args->plane, args->equation);
            break;
        }
        case glGetDoublev_INDEX: {
            glGetDoublev_PACKED *unpacked = (glGetDoublev_PACKED *)packed;
            glGetDoublev_ARGS *args = (glGetDoublev_ARGS *)&unpacked->args;
            printf("glGetDoublev(0x%04X, %p);\n", args->pname, args->params);
            break;
        }
        case glGetError_INDEX: {
            printf("glGetError();\n");
            break;
        }
        case glGetFloatv_INDEX: {
            glGetFloatv_PACKED *unpacked = (glGetFloatv_PACKED *)packed;
            glGetFloatv_ARGS *args = (glGetFloatv_ARGS *)&unpacked->args;
            printf("glGetFloatv(0x%04X, %p);\n", args->pname, args->params);
            break;
        }
        case glGetIntegerv_INDEX: {
            glGetIntegerv_PACKED *unpacked = (glGetIntegerv_PACKED *)packed;
            glGetIntegerv_ARGS *args = (glGetIntegerv_ARGS *)&unpacked->args;
            printf("glGetIntegerv(0x%04X, %p);\n", args->pname, args->params);
            break;
        }
        case glGetLightfv_INDEX: {
            glGetLightfv_PACKED *unpacked = (glGetLightfv_PACKED *)packed;
            glGetLightfv_ARGS *args = (glGetLightfv_ARGS *)&unpacked->args;
            printf("glGetLightfv(0x%04X, 0x%04X, %p);\n", args->light, args->pname, args->params);
            break;
        }
        case glGetMapdv_INDEX: {
            glGetMapdv_PACKED *unpacked = (glGetMapdv_PACKED *)packed;
            glGetMapdv_ARGS *args = (glGetMapdv_ARGS *)&unpacked->args;
            printf("glGetMapdv(0x%04X, 0x%04X, %p);\n", args->target, args->query, args->v);
            break;
        }
        case glGetMapfv_INDEX: {
            glGetMapfv_PACKED *unpacked = (glGetMapfv_PACKED *)packed;
            glGetMapfv_ARGS *args = (glGetMapfv_ARGS *)&unpacked->args;
            printf("glGetMapfv(0x%04X, 0x%04X, %p);\n", args->target, args->query, args->v);
            break;
        }
        case glGetMapiv_INDEX: {
            glGetMapiv_PACKED *unpacked = (glGetMapiv_PACKED *)packed;
            glGetMapiv_ARGS *args = (glGetMapiv_ARGS *)&unpacked->args;
            printf("glGetMapiv(0x%04X, 0x%04X, %p);\n", args->target, args->query, args->v);
            break;
        }
        case glGetMaterialfv_INDEX: {
            glGetMaterialfv_PACKED *unpacked = (glGetMaterialfv_PACKED *)packed;
            glGetMaterialfv_ARGS *args = (glGetMaterialfv_ARGS *)&unpacked->args;
            printf("glGetMaterialfv(0x%04X, 0x%04X, %p);\n", args->face, args->pname, args->params);
            break;
        }
        case glGetMaterialiv_INDEX: {
            glGetMaterialiv_PACKED *unpacked = (glGetMaterialiv_PACKED *)packed;
            glGetMaterialiv_ARGS *args = (glGetMaterialiv_ARGS *)&unpacked->args;
            printf("glGetMaterialiv(0x%04X, 0x%04X, %p);\n", args->face, args->pname, args->params);
            break;
        }
        case glGetPointerv_INDEX: {
            glGetPointerv_PACKED *unpacked = (glGetPointerv_PACKED *)packed;
            glGetPointerv_ARGS *args = (glGetPointerv_ARGS *)&unpacked->args;
            printf("glGetPointerv(0x%04X, %p);\n", args->pname, args->params);
            break;
        }
        case glGetString_INDEX: {
            glGetString_PACKED *unpacked = (glGetString_PACKED *)packed;
            glGetString_ARGS *args = (glGetString_ARGS *)&unpacked->args;
            printf("glGetString(0x%04X);\n", args->name);
            break;
        }
        case glGetTexEnvfv_INDEX: {
            glGetTexEnvfv_PACKED *unpacked = (glGetTexEnvfv_PACKED *)packed;
            glGetTexEnvfv_ARGS *args = (glGetTexEnvfv_ARGS *)&unpacked->args;
            printf("glGetTexEnvfv(0x%04X, 0x%04X, %p);\n", args->target, args->pname, args->params);
            break;
        }
        case glGetTexEnviv_INDEX: {
            glGetTexEnviv_PACKED *unpacked = (glGetTexEnviv_PACKED *)packed;
            glGetTexEnviv_ARGS *args = (glGetTexEnviv_ARGS *)&unpacked->args;
            printf("glGetTexEnviv(0x%04X, 0x%04X, %p);\n", args->target, args->pname, args->params);
            break;
        }
        case glGetTexImage_INDEX: {
            glGetTexImage_PACKED *unpacked = (glGetTexImage_PACKED *)packed;
            glGetTexImage_ARGS *args = (glGetTexImage_ARGS *)&unpacked->args;
            printf("glGetTexImage(0x%04X, %d, 0x%04X, 0x%04X, %p);\n", args->target, args->level, args->format, args->type, args->pixels);
            break;
        }
        case glGetTexLevelParameterfv_INDEX: {
            glGetTexLevelParameterfv_PACKED *unpacked = (glGetTexLevelParameterfv_PACKED *)packed;
            glGetTexLevelParameterfv_ARGS *args = (glGetTexLevelParameterfv_ARGS *)&unpacked->args;
            printf("glGetTexLevelParameterfv(0x%04X, %d, 0x%04X, %p);\n", args->target, args->level, args->pname, args->params);
            break;
        }
        case glGetTexLevelParameteriv_INDEX: {
            glGetTexLevelParameteriv_PACKED *unpacked = (glGetTexLevelParameteriv_PACKED *)packed;
            glGetTexLevelParameteriv_ARGS *args = (glGetTexLevelParameteriv_ARGS *)&unpacked->args;
            printf("glGetTexLevelParameteriv(0x%04X, %d, 0x%04X, %p);\n", args->target, args->level, args->pname, args->params);
            break;
        }
        case glGetTexParameterfv_INDEX: {
            glGetTexParameterfv_PACKED *unpacked = (glGetTexParameterfv_PACKED *)packed;
            glGetTexParameterfv_ARGS *args = (glGetTexParameterfv_ARGS *)&unpacked->args;
            printf("glGetTexParameterfv(0x%04X, 0x%04X, %p);\n", args->target, args->pname, args->params);
            break;
        }
        case glGetTexParameteriv_INDEX: {
            glGetTexParameteriv_PACKED *unpacked = (glGetTexParameteriv_PACKED *)packed;
            glGetTexParameteriv_ARGS *args = (glGetTexParameteriv_ARGS *)&unpacked->args;
            printf("glGetTexParameteriv(0x%04X, 0x%04X, %p);\n", args->target, args->pname, args->params);
            break;
        }
        case glHint_INDEX: {
            glHint_PACKED *unpacked = (glHint_PACKED *)packed;
            glHint_ARGS *args = (glHint_ARGS *)&unpacked->args;
            printf("glHint(0x%04X, 0x%04X);\n", args->target, args->mode);
            break;
        }
        case glIndexd_INDEX: {
            glIndexd_PACKED *unpacked = (glIndexd_PACKED *)packed;
            glIndexd_ARGS *args = (glIndexd_ARGS *)&unpacked->args;
            printf("glIndexd(%0.2f);\n", args->c);
            break;
        }
        case glIndexdv_INDEX: {
            glIndexdv_PACKED *unpacked = (glIndexdv_PACKED *)packed;
            glIndexdv_ARGS *args = (glIndexdv_ARGS *)&unpacked->args;
            printf("glIndexdv(%p);\n", args->c);
            break;
        }
        case glIndexf_INDEX: {
            glIndexf_PACKED *unpacked = (glIndexf_PACKED *)packed;
            glIndexf_ARGS *args = (glIndexf_ARGS *)&unpacked->args;
            printf("glIndexf(%0.2f);\n", args->c);
            break;
        }
        case glIndexfv_INDEX: {
            glIndexfv_PACKED *unpacked = (glIndexfv_PACKED *)packed;
            glIndexfv_ARGS *args = (glIndexfv_ARGS *)&unpacked->args;
            printf("glIndexfv(%p);\n", args->c);
            break;
        }
        case glIndexi_INDEX: {
            glIndexi_PACKED *unpacked = (glIndexi_PACKED *)packed;
            glIndexi_ARGS *args = (glIndexi_ARGS *)&unpacked->args;
            printf("glIndexi(%d);\n", args->c);
            break;
        }
        case glIndexiv_INDEX: {
            glIndexiv_PACKED *unpacked = (glIndexiv_PACKED *)packed;
            glIndexiv_ARGS *args = (glIndexiv_ARGS *)&unpacked->args;
            printf("glIndexiv(%p);\n", args->c);
            break;
        }
        case glIndexs_INDEX: {
            glIndexs_PACKED *unpacked = (glIndexs_PACKED *)packed;
            glIndexs_ARGS *args = (glIndexs_ARGS *)&unpacked->args;
            printf("glIndexs(%d);\n", args->c);
            break;
        }
        case glIndexsv_INDEX: {
            glIndexsv_PACKED *unpacked = (glIndexsv_PACKED *)packed;
            glIndexsv_ARGS *args = (glIndexsv_ARGS *)&unpacked->args;
            printf("glIndexsv(%p);\n", args->c);
            break;
        }
        case glIndexub_INDEX: {
            glIndexub_PACKED *unpacked = (glIndexub_PACKED *)packed;
            glIndexub_ARGS *args = (glIndexub_ARGS *)&unpacked->args;
            printf("glIndexub(%c);\n", args->c);
            break;
        }
        case glIndexubv_INDEX: {
            glIndexubv_PACKED *unpacked = (glIndexubv_PACKED *)packed;
            glIndexubv_ARGS *args = (glIndexubv_ARGS *)&unpacked->args;
            printf("glIndexubv(%p);\n", args->c);
            break;
        }
        case glInitNames_INDEX: {
            printf("glInitNames();\n");
            break;
        }
        case glInterleavedArrays_INDEX: {
            glInterleavedArrays_PACKED *unpacked = (glInterleavedArrays_PACKED *)packed;
            glInterleavedArrays_ARGS *args = (glInterleavedArrays_ARGS *)&unpacked->args;
            printf("glInterleavedArrays(0x%04X, %d, %p);\n", args->format, args->stride, args->pointer);
            break;
        }
        case glIsBuffer_INDEX: {
            glIsBuffer_PACKED *unpacked = (glIsBuffer_PACKED *)packed;
            glIsBuffer_ARGS *args = (glIsBuffer_ARGS *)&unpacked->args;
            printf("glIsBuffer(%u);\n", args->buffer);
            break;
        }
        case glIsEnabled_INDEX: {
            glIsEnabled_PACKED *unpacked = (glIsEnabled_PACKED *)packed;
            glIsEnabled_ARGS *args = (glIsEnabled_ARGS *)&unpacked->args;
            printf("glIsEnabled(0x%04X);\n", args->cap);
            break;
        }
        case glIsList_INDEX: {
            glIsList_PACKED *unpacked = (glIsList_PACKED *)packed;
            glIsList_ARGS *args = (glIsList_ARGS *)&unpacked->args;
            printf("glIsList(%u);\n", args->list);
            break;
        }
        case glIsTexture_INDEX: {
            glIsTexture_PACKED *unpacked = (glIsTexture_PACKED *)packed;
            glIsTexture_ARGS *args = (glIsTexture_ARGS *)&unpacked->args;
            printf("glIsTexture(%u);\n", args->texture);
            break;
        }
        case glLightModelf_INDEX: {
            glLightModelf_PACKED *unpacked = (glLightModelf_PACKED *)packed;
            glLightModelf_ARGS *args = (glLightModelf_ARGS *)&unpacked->args;
            printf("glLightModelf(0x%04X, %0.2f);\n", args->pname, args->param);
            break;
        }
        case glLightModelfv_INDEX: {
            glLightModelfv_PACKED *unpacked = (glLightModelfv_PACKED *)packed;
            glLightModelfv_ARGS *args = (glLightModelfv_ARGS *)&unpacked->args;
            printf("glLightModelfv(0x%04X, %p);\n", args->pname, args->params);
            break;
        }
        case glLightModeli_INDEX: {
            glLightModeli_PACKED *unpacked = (glLightModeli_PACKED *)packed;
            glLightModeli_ARGS *args = (glLightModeli_ARGS *)&unpacked->args;
            printf("glLightModeli(0x%04X, %d);\n", args->pname, args->param);
            break;
        }
        case glLightModeliv_INDEX: {
            glLightModeliv_PACKED *unpacked = (glLightModeliv_PACKED *)packed;
            glLightModeliv_ARGS *args = (glLightModeliv_ARGS *)&unpacked->args;
            printf("glLightModeliv(0x%04X, %p);\n", args->pname, args->params);
            break;
        }
        case glLightf_INDEX: {
            glLightf_PACKED *unpacked = (glLightf_PACKED *)packed;
            glLightf_ARGS *args = (glLightf_ARGS *)&unpacked->args;
            printf("glLightf(0x%04X, 0x%04X, %0.2f);\n", args->light, args->pname, args->param);
            break;
        }
        case glLightfv_INDEX: {
            glLightfv_PACKED *unpacked = (glLightfv_PACKED *)packed;
            glLightfv_ARGS *args = (glLightfv_ARGS *)&unpacked->args;
            printf("glLightfv(0x%04X, 0x%04X, %p);\n", args->light, args->pname, args->params);
            break;
        }
        case glLighti_INDEX: {
            glLighti_PACKED *unpacked = (glLighti_PACKED *)packed;
            glLighti_ARGS *args = (glLighti_ARGS *)&unpacked->args;
            printf("glLighti(0x%04X, 0x%04X, %d);\n", args->light, args->pname, args->param);
            break;
        }
        case glLightiv_INDEX: {
            glLightiv_PACKED *unpacked = (glLightiv_PACKED *)packed;
            glLightiv_ARGS *args = (glLightiv_ARGS *)&unpacked->args;
            printf("glLightiv(0x%04X, 0x%04X, %p);\n", args->light, args->pname, args->params);
            break;
        }
        case glLineStipple_INDEX: {
            glLineStipple_PACKED *unpacked = (glLineStipple_PACKED *)packed;
            glLineStipple_ARGS *args = (glLineStipple_ARGS *)&unpacked->args;
            printf("glLineStipple(%d, %u);\n", args->factor, args->pattern);
            break;
        }
        case glLineWidth_INDEX: {
            glLineWidth_PACKED *unpacked = (glLineWidth_PACKED *)packed;
            glLineWidth_ARGS *args = (glLineWidth_ARGS *)&unpacked->args;
            printf("glLineWidth(%0.2f);\n", args->width);
            break;
        }
        case glListBase_INDEX: {
            glListBase_PACKED *unpacked = (glListBase_PACKED *)packed;
            glListBase_ARGS *args = (glListBase_ARGS *)&unpacked->args;
            printf("glListBase(%u);\n", args->base);
            break;
        }
        case glLoadIdentity_INDEX: {
            printf("glLoadIdentity();\n");
            break;
        }
        case glLoadMatrixd_INDEX: {
            glLoadMatrixd_PACKED *unpacked = (glLoadMatrixd_PACKED *)packed;
            glLoadMatrixd_ARGS *args = (glLoadMatrixd_ARGS *)&unpacked->args;
            printf("glLoadMatrixd(%p);\n", args->m);
            break;
        }
        case glLoadMatrixf_INDEX: {
            glLoadMatrixf_PACKED *unpacked = (glLoadMatrixf_PACKED *)packed;
            glLoadMatrixf_ARGS *args = (glLoadMatrixf_ARGS *)&unpacked->args;
            printf("glLoadMatrixf(%p);\n", args->m);
            break;
        }
        case glLoadName_INDEX: {
            glLoadName_PACKED *unpacked = (glLoadName_PACKED *)packed;
            glLoadName_ARGS *args = (glLoadName_ARGS *)&unpacked->args;
            printf("glLoadName(%u);\n", args->name);
            break;
        }
        case glLoadTransposeMatrixd_INDEX: {
            glLoadTransposeMatrixd_PACKED *unpacked = (glLoadTransposeMatrixd_PACKED *)packed;
            glLoadTransposeMatrixd_ARGS *args = (glLoadTransposeMatrixd_ARGS *)&unpacked->args;
            printf("glLoadTransposeMatrixd(%p);\n", args->m);
            break;
        }
        case glLoadTransposeMatrixf_INDEX: {
            glLoadTransposeMatrixf_PACKED *unpacked = (glLoadTransposeMatrixf_PACKED *)packed;
            glLoadTransposeMatrixf_ARGS *args = (glLoadTransposeMatrixf_ARGS *)&unpacked->args;
            printf("glLoadTransposeMatrixf(%p);\n", args->m);
            break;
        }
        case glLockArraysEXT_INDEX: {
            glLockArraysEXT_PACKED *unpacked = (glLockArraysEXT_PACKED *)packed;
            glLockArraysEXT_ARGS *args = (glLockArraysEXT_ARGS *)&unpacked->args;
            printf("glLockArraysEXT(%d, %d);\n", args->first, args->count);
            break;
        }
        case glLogicOp_INDEX: {
            glLogicOp_PACKED *unpacked = (glLogicOp_PACKED *)packed;
            glLogicOp_ARGS *args = (glLogicOp_ARGS *)&unpacked->args;
            printf("glLogicOp(0x%04X);\n", args->opcode);
            break;
        }
        case glMap1d_INDEX: {
            glMap1d_PACKED *unpacked = (glMap1d_PACKED *)packed;
            glMap1d_ARGS *args = (glMap1d_ARGS *)&unpacked->args;
            printf("glMap1d(0x%04X, %0.2f, %0.2f, %d, %d, %p);\n", args->target, args->u1, args->u2, args->stride, args->order, args->points);
            break;
        }
        case glMap1f_INDEX: {
            glMap1f_PACKED *unpacked = (glMap1f_PACKED *)packed;
            glMap1f_ARGS *args = (glMap1f_ARGS *)&unpacked->args;
            printf("glMap1f(0x%04X, %0.2f, %0.2f, %d, %d, %p);\n", args->target, args->u1, args->u2, args->stride, args->order, args->points);
            break;
        }
        case glMap2d_INDEX: {
            glMap2d_PACKED *unpacked = (glMap2d_PACKED *)packed;
            glMap2d_ARGS *args = (glMap2d_ARGS *)&unpacked->args;
            printf("glMap2d(0x%04X, %0.2f, %0.2f, %d, %d, %0.2f, %0.2f, %d, %d, %p);\n", args->target, args->u1, args->u2, args->ustride, args->uorder, args->v1, args->v2, args->vstride, args->vorder, args->points);
            break;
        }
        case glMap2f_INDEX: {
            glMap2f_PACKED *unpacked = (glMap2f_PACKED *)packed;
            glMap2f_ARGS *args = (glMap2f_ARGS *)&unpacked->args;
            printf("glMap2f(0x%04X, %0.2f, %0.2f, %d, %d, %0.2f, %0.2f, %d, %d, %p);\n", args->target, args->u1, args->u2, args->ustride, args->uorder, args->v1, args->v2, args->vstride, args->vorder, args->points);
            break;
        }
        case glMapGrid1d_INDEX: {
            glMapGrid1d_PACKED *unpacked = (glMapGrid1d_PACKED *)packed;
            glMapGrid1d_ARGS *args = (glMapGrid1d_ARGS *)&unpacked->args;
            printf("glMapGrid1d(%d, %0.2f, %0.2f);\n", args->un, args->u1, args->u2);
            break;
        }
        case glMapGrid1f_INDEX: {
            glMapGrid1f_PACKED *unpacked = (glMapGrid1f_PACKED *)packed;
            glMapGrid1f_ARGS *args = (glMapGrid1f_ARGS *)&unpacked->args;
            printf("glMapGrid1f(%d, %0.2f, %0.2f);\n", args->un, args->u1, args->u2);
            break;
        }
        case glMapGrid2d_INDEX: {
            glMapGrid2d_PACKED *unpacked = (glMapGrid2d_PACKED *)packed;
            glMapGrid2d_ARGS *args = (glMapGrid2d_ARGS *)&unpacked->args;
            printf("glMapGrid2d(%d, %0.2f, %0.2f, %d, %0.2f, %0.2f);\n", args->un, args->u1, args->u2, args->vn, args->v1, args->v2);
            break;
        }
        case glMapGrid2f_INDEX: {
            glMapGrid2f_PACKED *unpacked = (glMapGrid2f_PACKED *)packed;
            glMapGrid2f_ARGS *args = (glMapGrid2f_ARGS *)&unpacked->args;
            printf("glMapGrid2f(%d, %0.2f, %0.2f, %d, %0.2f, %0.2f);\n", args->un, args->u1, args->u2, args->vn, args->v1, args->v2);
            break;
        }
        case glMaterialf_INDEX: {
            glMaterialf_PACKED *unpacked = (glMaterialf_PACKED *)packed;
            glMaterialf_ARGS *args = (glMaterialf_ARGS *)&unpacked->args;
            printf("glMaterialf(0x%04X, 0x%04X, %0.2f);\n", args->face, args->pname, args->param);
            break;
        }
        case glMaterialfv_INDEX: {
            glMaterialfv_PACKED *unpacked = (glMaterialfv_PACKED *)packed;
            glMaterialfv_ARGS *args = (glMaterialfv_ARGS *)&unpacked->args;
            printf("glMaterialfv(0x%04X, 0x%04X, %p);\n", args->face, args->pname, args->params);
            break;
        }
        case glMateriali_INDEX: {
            glMateriali_PACKED *unpacked = (glMateriali_PACKED *)packed;
            glMateriali_ARGS *args = (glMateriali_ARGS *)&unpacked->args;
            printf("glMateriali(0x%04X, 0x%04X, %d);\n", args->face, args->pname, args->param);
            break;
        }
        case glMaterialiv_INDEX: {
            glMaterialiv_PACKED *unpacked = (glMaterialiv_PACKED *)packed;
            glMaterialiv_ARGS *args = (glMaterialiv_ARGS *)&unpacked->args;
            printf("glMaterialiv(0x%04X, 0x%04X, %p);\n", args->face, args->pname, args->params);
            break;
        }
        case glMatrixMode_INDEX: {
            glMatrixMode_PACKED *unpacked = (glMatrixMode_PACKED *)packed;
            glMatrixMode_ARGS *args = (glMatrixMode_ARGS *)&unpacked->args;
            printf("glMatrixMode(0x%04X);\n", args->mode);
            break;
        }
        case glMultMatrixd_INDEX: {
            glMultMatrixd_PACKED *unpacked = (glMultMatrixd_PACKED *)packed;
            glMultMatrixd_ARGS *args = (glMultMatrixd_ARGS *)&unpacked->args;
            printf("glMultMatrixd(%p);\n", args->m);
            break;
        }
        case glMultMatrixf_INDEX: {
            glMultMatrixf_PACKED *unpacked = (glMultMatrixf_PACKED *)packed;
            glMultMatrixf_ARGS *args = (glMultMatrixf_ARGS *)&unpacked->args;
            printf("glMultMatrixf(%p);\n", args->m);
            break;
        }
        case glMultTransposeMatrixd_INDEX: {
            glMultTransposeMatrixd_PACKED *unpacked = (glMultTransposeMatrixd_PACKED *)packed;
            glMultTransposeMatrixd_ARGS *args = (glMultTransposeMatrixd_ARGS *)&unpacked->args;
            printf("glMultTransposeMatrixd(%p);\n", args->m);
            break;
        }
        case glMultTransposeMatrixf_INDEX: {
            glMultTransposeMatrixf_PACKED *unpacked = (glMultTransposeMatrixf_PACKED *)packed;
            glMultTransposeMatrixf_ARGS *args = (glMultTransposeMatrixf_ARGS *)&unpacked->args;
            printf("glMultTransposeMatrixf(%p);\n", args->m);
            break;
        }
        case glMultiTexCoord1d_INDEX: {
            glMultiTexCoord1d_PACKED *unpacked = (glMultiTexCoord1d_PACKED *)packed;
            glMultiTexCoord1d_ARGS *args = (glMultiTexCoord1d_ARGS *)&unpacked->args;
            printf("glMultiTexCoord1d(0x%04X, %0.2f);\n", args->target, args->s);
            break;
        }
        case glMultiTexCoord1dv_INDEX: {
            glMultiTexCoord1dv_PACKED *unpacked = (glMultiTexCoord1dv_PACKED *)packed;
            glMultiTexCoord1dv_ARGS *args = (glMultiTexCoord1dv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord1dv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord1f_INDEX: {
            glMultiTexCoord1f_PACKED *unpacked = (glMultiTexCoord1f_PACKED *)packed;
            glMultiTexCoord1f_ARGS *args = (glMultiTexCoord1f_ARGS *)&unpacked->args;
            printf("glMultiTexCoord1f(0x%04X, %0.2f);\n", args->target, args->s);
            break;
        }
        case glMultiTexCoord1fv_INDEX: {
            glMultiTexCoord1fv_PACKED *unpacked = (glMultiTexCoord1fv_PACKED *)packed;
            glMultiTexCoord1fv_ARGS *args = (glMultiTexCoord1fv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord1fv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord1i_INDEX: {
            glMultiTexCoord1i_PACKED *unpacked = (glMultiTexCoord1i_PACKED *)packed;
            glMultiTexCoord1i_ARGS *args = (glMultiTexCoord1i_ARGS *)&unpacked->args;
            printf("glMultiTexCoord1i(0x%04X, %d);\n", args->target, args->s);
            break;
        }
        case glMultiTexCoord1iv_INDEX: {
            glMultiTexCoord1iv_PACKED *unpacked = (glMultiTexCoord1iv_PACKED *)packed;
            glMultiTexCoord1iv_ARGS *args = (glMultiTexCoord1iv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord1iv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord1s_INDEX: {
            glMultiTexCoord1s_PACKED *unpacked = (glMultiTexCoord1s_PACKED *)packed;
            glMultiTexCoord1s_ARGS *args = (glMultiTexCoord1s_ARGS *)&unpacked->args;
            printf("glMultiTexCoord1s(0x%04X, %d);\n", args->target, args->s);
            break;
        }
        case glMultiTexCoord1sv_INDEX: {
            glMultiTexCoord1sv_PACKED *unpacked = (glMultiTexCoord1sv_PACKED *)packed;
            glMultiTexCoord1sv_ARGS *args = (glMultiTexCoord1sv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord1sv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord2d_INDEX: {
            glMultiTexCoord2d_PACKED *unpacked = (glMultiTexCoord2d_PACKED *)packed;
            glMultiTexCoord2d_ARGS *args = (glMultiTexCoord2d_ARGS *)&unpacked->args;
            printf("glMultiTexCoord2d(0x%04X, %0.2f, %0.2f);\n", args->target, args->s, args->t);
            break;
        }
        case glMultiTexCoord2dv_INDEX: {
            glMultiTexCoord2dv_PACKED *unpacked = (glMultiTexCoord2dv_PACKED *)packed;
            glMultiTexCoord2dv_ARGS *args = (glMultiTexCoord2dv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord2dv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord2f_INDEX: {
            glMultiTexCoord2f_PACKED *unpacked = (glMultiTexCoord2f_PACKED *)packed;
            glMultiTexCoord2f_ARGS *args = (glMultiTexCoord2f_ARGS *)&unpacked->args;
            printf("glMultiTexCoord2f(0x%04X, %0.2f, %0.2f);\n", args->target, args->s, args->t);
            break;
        }
        case glMultiTexCoord2fARB_INDEX: {
            glMultiTexCoord2fARB_PACKED *unpacked = (glMultiTexCoord2fARB_PACKED *)packed;
            glMultiTexCoord2fARB_ARGS *args = (glMultiTexCoord2fARB_ARGS *)&unpacked->args;
            printf("glMultiTexCoord2fARB(0x%04X, %0.2f, %0.2f);\n", args->target, args->s, args->t);
            break;
        }
        case glMultiTexCoord2fv_INDEX: {
            glMultiTexCoord2fv_PACKED *unpacked = (glMultiTexCoord2fv_PACKED *)packed;
            glMultiTexCoord2fv_ARGS *args = (glMultiTexCoord2fv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord2fv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord2fvARB_INDEX: {
            glMultiTexCoord2fvARB_PACKED *unpacked = (glMultiTexCoord2fvARB_PACKED *)packed;
            glMultiTexCoord2fvARB_ARGS *args = (glMultiTexCoord2fvARB_ARGS *)&unpacked->args;
            printf("glMultiTexCoord2fvARB(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord2i_INDEX: {
            glMultiTexCoord2i_PACKED *unpacked = (glMultiTexCoord2i_PACKED *)packed;
            glMultiTexCoord2i_ARGS *args = (glMultiTexCoord2i_ARGS *)&unpacked->args;
            printf("glMultiTexCoord2i(0x%04X, %d, %d);\n", args->target, args->s, args->t);
            break;
        }
        case glMultiTexCoord2iv_INDEX: {
            glMultiTexCoord2iv_PACKED *unpacked = (glMultiTexCoord2iv_PACKED *)packed;
            glMultiTexCoord2iv_ARGS *args = (glMultiTexCoord2iv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord2iv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord2s_INDEX: {
            glMultiTexCoord2s_PACKED *unpacked = (glMultiTexCoord2s_PACKED *)packed;
            glMultiTexCoord2s_ARGS *args = (glMultiTexCoord2s_ARGS *)&unpacked->args;
            printf("glMultiTexCoord2s(0x%04X, %d, %d);\n", args->target, args->s, args->t);
            break;
        }
        case glMultiTexCoord2sv_INDEX: {
            glMultiTexCoord2sv_PACKED *unpacked = (glMultiTexCoord2sv_PACKED *)packed;
            glMultiTexCoord2sv_ARGS *args = (glMultiTexCoord2sv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord2sv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord3d_INDEX: {
            glMultiTexCoord3d_PACKED *unpacked = (glMultiTexCoord3d_PACKED *)packed;
            glMultiTexCoord3d_ARGS *args = (glMultiTexCoord3d_ARGS *)&unpacked->args;
            printf("glMultiTexCoord3d(0x%04X, %0.2f, %0.2f, %0.2f);\n", args->target, args->s, args->t, args->r);
            break;
        }
        case glMultiTexCoord3dv_INDEX: {
            glMultiTexCoord3dv_PACKED *unpacked = (glMultiTexCoord3dv_PACKED *)packed;
            glMultiTexCoord3dv_ARGS *args = (glMultiTexCoord3dv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord3dv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord3f_INDEX: {
            glMultiTexCoord3f_PACKED *unpacked = (glMultiTexCoord3f_PACKED *)packed;
            glMultiTexCoord3f_ARGS *args = (glMultiTexCoord3f_ARGS *)&unpacked->args;
            printf("glMultiTexCoord3f(0x%04X, %0.2f, %0.2f, %0.2f);\n", args->target, args->s, args->t, args->r);
            break;
        }
        case glMultiTexCoord3fv_INDEX: {
            glMultiTexCoord3fv_PACKED *unpacked = (glMultiTexCoord3fv_PACKED *)packed;
            glMultiTexCoord3fv_ARGS *args = (glMultiTexCoord3fv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord3fv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord3i_INDEX: {
            glMultiTexCoord3i_PACKED *unpacked = (glMultiTexCoord3i_PACKED *)packed;
            glMultiTexCoord3i_ARGS *args = (glMultiTexCoord3i_ARGS *)&unpacked->args;
            printf("glMultiTexCoord3i(0x%04X, %d, %d, %d);\n", args->target, args->s, args->t, args->r);
            break;
        }
        case glMultiTexCoord3iv_INDEX: {
            glMultiTexCoord3iv_PACKED *unpacked = (glMultiTexCoord3iv_PACKED *)packed;
            glMultiTexCoord3iv_ARGS *args = (glMultiTexCoord3iv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord3iv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord3s_INDEX: {
            glMultiTexCoord3s_PACKED *unpacked = (glMultiTexCoord3s_PACKED *)packed;
            glMultiTexCoord3s_ARGS *args = (glMultiTexCoord3s_ARGS *)&unpacked->args;
            printf("glMultiTexCoord3s(0x%04X, %d, %d, %d);\n", args->target, args->s, args->t, args->r);
            break;
        }
        case glMultiTexCoord3sv_INDEX: {
            glMultiTexCoord3sv_PACKED *unpacked = (glMultiTexCoord3sv_PACKED *)packed;
            glMultiTexCoord3sv_ARGS *args = (glMultiTexCoord3sv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord3sv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord4d_INDEX: {
            glMultiTexCoord4d_PACKED *unpacked = (glMultiTexCoord4d_PACKED *)packed;
            glMultiTexCoord4d_ARGS *args = (glMultiTexCoord4d_ARGS *)&unpacked->args;
            printf("glMultiTexCoord4d(0x%04X, %0.2f, %0.2f, %0.2f, %0.2f);\n", args->target, args->s, args->t, args->r, args->q);
            break;
        }
        case glMultiTexCoord4dv_INDEX: {
            glMultiTexCoord4dv_PACKED *unpacked = (glMultiTexCoord4dv_PACKED *)packed;
            glMultiTexCoord4dv_ARGS *args = (glMultiTexCoord4dv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord4dv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord4f_INDEX: {
            glMultiTexCoord4f_PACKED *unpacked = (glMultiTexCoord4f_PACKED *)packed;
            glMultiTexCoord4f_ARGS *args = (glMultiTexCoord4f_ARGS *)&unpacked->args;
            printf("glMultiTexCoord4f(0x%04X, %0.2f, %0.2f, %0.2f, %0.2f);\n", args->target, args->s, args->t, args->r, args->q);
            break;
        }
        case glMultiTexCoord4fARB_INDEX: {
            glMultiTexCoord4fARB_PACKED *unpacked = (glMultiTexCoord4fARB_PACKED *)packed;
            glMultiTexCoord4fARB_ARGS *args = (glMultiTexCoord4fARB_ARGS *)&unpacked->args;
            printf("glMultiTexCoord4fARB(0x%04X, %0.2f, %0.2f, %0.2f, %0.2f);\n", args->target, args->s, args->t, args->r, args->q);
            break;
        }
        case glMultiTexCoord4fv_INDEX: {
            glMultiTexCoord4fv_PACKED *unpacked = (glMultiTexCoord4fv_PACKED *)packed;
            glMultiTexCoord4fv_ARGS *args = (glMultiTexCoord4fv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord4fv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord4fvARB_INDEX: {
            glMultiTexCoord4fvARB_PACKED *unpacked = (glMultiTexCoord4fvARB_PACKED *)packed;
            glMultiTexCoord4fvARB_ARGS *args = (glMultiTexCoord4fvARB_ARGS *)&unpacked->args;
            printf("glMultiTexCoord4fvARB(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord4i_INDEX: {
            glMultiTexCoord4i_PACKED *unpacked = (glMultiTexCoord4i_PACKED *)packed;
            glMultiTexCoord4i_ARGS *args = (glMultiTexCoord4i_ARGS *)&unpacked->args;
            printf("glMultiTexCoord4i(0x%04X, %d, %d, %d, %d);\n", args->target, args->s, args->t, args->r, args->q);
            break;
        }
        case glMultiTexCoord4iv_INDEX: {
            glMultiTexCoord4iv_PACKED *unpacked = (glMultiTexCoord4iv_PACKED *)packed;
            glMultiTexCoord4iv_ARGS *args = (glMultiTexCoord4iv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord4iv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glMultiTexCoord4s_INDEX: {
            glMultiTexCoord4s_PACKED *unpacked = (glMultiTexCoord4s_PACKED *)packed;
            glMultiTexCoord4s_ARGS *args = (glMultiTexCoord4s_ARGS *)&unpacked->args;
            printf("glMultiTexCoord4s(0x%04X, %d, %d, %d, %d);\n", args->target, args->s, args->t, args->r, args->q);
            break;
        }
        case glMultiTexCoord4sv_INDEX: {
            glMultiTexCoord4sv_PACKED *unpacked = (glMultiTexCoord4sv_PACKED *)packed;
            glMultiTexCoord4sv_ARGS *args = (glMultiTexCoord4sv_ARGS *)&unpacked->args;
            printf("glMultiTexCoord4sv(0x%04X, %p);\n", args->target, args->v);
            break;
        }
        case glNewList_INDEX: {
            glNewList_PACKED *unpacked = (glNewList_PACKED *)packed;
            glNewList_ARGS *args = (glNewList_ARGS *)&unpacked->args;
            printf("glNewList(%u, 0x%04X);\n", args->list, args->mode);
            break;
        }
        case glNormal3b_INDEX: {
            glNormal3b_PACKED *unpacked = (glNormal3b_PACKED *)packed;
            glNormal3b_ARGS *args = (glNormal3b_ARGS *)&unpacked->args;
            printf("glNormal3b(%c, %c, %c);\n", args->nx, args->ny, args->nz);
            break;
        }
        case glNormal3bv_INDEX: {
            glNormal3bv_PACKED *unpacked = (glNormal3bv_PACKED *)packed;
            glNormal3bv_ARGS *args = (glNormal3bv_ARGS *)&unpacked->args;
            printf("glNormal3bv(%p);\n", args->v);
            break;
        }
        case glNormal3d_INDEX: {
            glNormal3d_PACKED *unpacked = (glNormal3d_PACKED *)packed;
            glNormal3d_ARGS *args = (glNormal3d_ARGS *)&unpacked->args;
            printf("glNormal3d(%0.2f, %0.2f, %0.2f);\n", args->nx, args->ny, args->nz);
            break;
        }
        case glNormal3dv_INDEX: {
            glNormal3dv_PACKED *unpacked = (glNormal3dv_PACKED *)packed;
            glNormal3dv_ARGS *args = (glNormal3dv_ARGS *)&unpacked->args;
            printf("glNormal3dv(%p);\n", args->v);
            break;
        }
        case glNormal3f_INDEX: {
            glNormal3f_PACKED *unpacked = (glNormal3f_PACKED *)packed;
            glNormal3f_ARGS *args = (glNormal3f_ARGS *)&unpacked->args;
            printf("glNormal3f(%0.2f, %0.2f, %0.2f);\n", args->nx, args->ny, args->nz);
            break;
        }
        case glNormal3fv_INDEX: {
            glNormal3fv_PACKED *unpacked = (glNormal3fv_PACKED *)packed;
            glNormal3fv_ARGS *args = (glNormal3fv_ARGS *)&unpacked->args;
            printf("glNormal3fv(%p);\n", args->v);
            break;
        }
        case glNormal3i_INDEX: {
            glNormal3i_PACKED *unpacked = (glNormal3i_PACKED *)packed;
            glNormal3i_ARGS *args = (glNormal3i_ARGS *)&unpacked->args;
            printf("glNormal3i(%d, %d, %d);\n", args->nx, args->ny, args->nz);
            break;
        }
        case glNormal3iv_INDEX: {
            glNormal3iv_PACKED *unpacked = (glNormal3iv_PACKED *)packed;
            glNormal3iv_ARGS *args = (glNormal3iv_ARGS *)&unpacked->args;
            printf("glNormal3iv(%p);\n", args->v);
            break;
        }
        case glNormal3s_INDEX: {
            glNormal3s_PACKED *unpacked = (glNormal3s_PACKED *)packed;
            glNormal3s_ARGS *args = (glNormal3s_ARGS *)&unpacked->args;
            printf("glNormal3s(%d, %d, %d);\n", args->nx, args->ny, args->nz);
            break;
        }
        case glNormal3sv_INDEX: {
            glNormal3sv_PACKED *unpacked = (glNormal3sv_PACKED *)packed;
            glNormal3sv_ARGS *args = (glNormal3sv_ARGS *)&unpacked->args;
            printf("glNormal3sv(%p);\n", args->v);
            break;
        }
        case glNormalPointer_INDEX: {
            glNormalPointer_PACKED *unpacked = (glNormalPointer_PACKED *)packed;
            glNormalPointer_ARGS *args = (glNormalPointer_ARGS *)&unpacked->args;
            printf("glNormalPointer(0x%04X, %d, %p);\n", args->type, args->stride, args->pointer);
            break;
        }
        case glOrtho_INDEX: {
            glOrtho_PACKED *unpacked = (glOrtho_PACKED *)packed;
            glOrtho_ARGS *args = (glOrtho_ARGS *)&unpacked->args;
            printf("glOrtho(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", args->left, args->right, args->bottom, args->top, args->zNear, args->zFar);
            break;
        }
        case glOrthofOES_INDEX: {
            glOrthofOES_PACKED *unpacked = (glOrthofOES_PACKED *)packed;
            glOrthofOES_ARGS *args = (glOrthofOES_ARGS *)&unpacked->args;
            printf("glOrthofOES(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", args->l, args->r, args->b, args->t, args->n, args->f);
            break;
        }
        case glPassThrough_INDEX: {
            glPassThrough_PACKED *unpacked = (glPassThrough_PACKED *)packed;
            glPassThrough_ARGS *args = (glPassThrough_ARGS *)&unpacked->args;
            printf("glPassThrough(%0.2f);\n", args->token);
            break;
        }
        case glPixelStorei_INDEX: {
            glPixelStorei_PACKED *unpacked = (glPixelStorei_PACKED *)packed;
            glPixelStorei_ARGS *args = (glPixelStorei_ARGS *)&unpacked->args;
            printf("glPixelStorei(0x%04X, %d);\n", args->pname, args->param);
            break;
        }
        case glPixelTransferf_INDEX: {
            glPixelTransferf_PACKED *unpacked = (glPixelTransferf_PACKED *)packed;
            glPixelTransferf_ARGS *args = (glPixelTransferf_ARGS *)&unpacked->args;
            printf("glPixelTransferf(0x%04X, %0.2f);\n", args->pname, args->param);
            break;
        }
        case glPixelTransferi_INDEX: {
            glPixelTransferi_PACKED *unpacked = (glPixelTransferi_PACKED *)packed;
            glPixelTransferi_ARGS *args = (glPixelTransferi_ARGS *)&unpacked->args;
            printf("glPixelTransferi(0x%04X, %d);\n", args->pname, args->param);
            break;
        }
        case glPixelZoom_INDEX: {
            glPixelZoom_PACKED *unpacked = (glPixelZoom_PACKED *)packed;
            glPixelZoom_ARGS *args = (glPixelZoom_ARGS *)&unpacked->args;
            printf("glPixelZoom(%0.2f, %0.2f);\n", args->xfactor, args->yfactor);
            break;
        }
        case glPointParameterf_INDEX: {
            glPointParameterf_PACKED *unpacked = (glPointParameterf_PACKED *)packed;
            glPointParameterf_ARGS *args = (glPointParameterf_ARGS *)&unpacked->args;
            printf("glPointParameterf(0x%04X, %0.2f);\n", args->pname, args->param);
            break;
        }
        case glPointParameterfv_INDEX: {
            glPointParameterfv_PACKED *unpacked = (glPointParameterfv_PACKED *)packed;
            glPointParameterfv_ARGS *args = (glPointParameterfv_ARGS *)&unpacked->args;
            printf("glPointParameterfv(0x%04X, %p);\n", args->pname, args->params);
            break;
        }
        case glPointSize_INDEX: {
            glPointSize_PACKED *unpacked = (glPointSize_PACKED *)packed;
            glPointSize_ARGS *args = (glPointSize_ARGS *)&unpacked->args;
            printf("glPointSize(%0.2f);\n", args->size);
            break;
        }
        case glPolygonMode_INDEX: {
            glPolygonMode_PACKED *unpacked = (glPolygonMode_PACKED *)packed;
            glPolygonMode_ARGS *args = (glPolygonMode_ARGS *)&unpacked->args;
            printf("glPolygonMode(0x%04X, 0x%04X);\n", args->face, args->mode);
            break;
        }
        case glPolygonOffset_INDEX: {
            glPolygonOffset_PACKED *unpacked = (glPolygonOffset_PACKED *)packed;
            glPolygonOffset_ARGS *args = (glPolygonOffset_ARGS *)&unpacked->args;
            printf("glPolygonOffset(%0.2f, %0.2f);\n", args->factor, args->units);
            break;
        }
        case glPolygonStipple_INDEX: {
            glPolygonStipple_PACKED *unpacked = (glPolygonStipple_PACKED *)packed;
            glPolygonStipple_ARGS *args = (glPolygonStipple_ARGS *)&unpacked->args;
            printf("glPolygonStipple(%p);\n", args->mask);
            break;
        }
        case glPopAttrib_INDEX: {
            printf("glPopAttrib();\n");
            break;
        }
        case glPopClientAttrib_INDEX: {
            printf("glPopClientAttrib();\n");
            break;
        }
        case glPopMatrix_INDEX: {
            printf("glPopMatrix();\n");
            break;
        }
        case glPopName_INDEX: {
            printf("glPopName();\n");
            break;
        }
        case glPrioritizeTextures_INDEX: {
            glPrioritizeTextures_PACKED *unpacked = (glPrioritizeTextures_PACKED *)packed;
            glPrioritizeTextures_ARGS *args = (glPrioritizeTextures_ARGS *)&unpacked->args;
            printf("glPrioritizeTextures(%d, %p, %p);\n", args->n, args->textures, args->priorities);
            break;
        }
        case glPushAttrib_INDEX: {
            glPushAttrib_PACKED *unpacked = (glPushAttrib_PACKED *)packed;
            glPushAttrib_ARGS *args = (glPushAttrib_ARGS *)&unpacked->args;
            printf("glPushAttrib(%d);\n", args->mask);
            break;
        }
        case glPushClientAttrib_INDEX: {
            glPushClientAttrib_PACKED *unpacked = (glPushClientAttrib_PACKED *)packed;
            glPushClientAttrib_ARGS *args = (glPushClientAttrib_ARGS *)&unpacked->args;
            printf("glPushClientAttrib(%d);\n", args->mask);
            break;
        }
        case glPushMatrix_INDEX: {
            printf("glPushMatrix();\n");
            break;
        }
        case glPushName_INDEX: {
            glPushName_PACKED *unpacked = (glPushName_PACKED *)packed;
            glPushName_ARGS *args = (glPushName_ARGS *)&unpacked->args;
            printf("glPushName(%u);\n", args->name);
            break;
        }
        case glRasterPos2d_INDEX: {
            glRasterPos2d_PACKED *unpacked = (glRasterPos2d_PACKED *)packed;
            glRasterPos2d_ARGS *args = (glRasterPos2d_ARGS *)&unpacked->args;
            printf("glRasterPos2d(%0.2f, %0.2f);\n", args->x, args->y);
            break;
        }
        case glRasterPos2dv_INDEX: {
            glRasterPos2dv_PACKED *unpacked = (glRasterPos2dv_PACKED *)packed;
            glRasterPos2dv_ARGS *args = (glRasterPos2dv_ARGS *)&unpacked->args;
            printf("glRasterPos2dv(%p);\n", args->v);
            break;
        }
        case glRasterPos2f_INDEX: {
            glRasterPos2f_PACKED *unpacked = (glRasterPos2f_PACKED *)packed;
            glRasterPos2f_ARGS *args = (glRasterPos2f_ARGS *)&unpacked->args;
            printf("glRasterPos2f(%0.2f, %0.2f);\n", args->x, args->y);
            break;
        }
        case glRasterPos2fv_INDEX: {
            glRasterPos2fv_PACKED *unpacked = (glRasterPos2fv_PACKED *)packed;
            glRasterPos2fv_ARGS *args = (glRasterPos2fv_ARGS *)&unpacked->args;
            printf("glRasterPos2fv(%p);\n", args->v);
            break;
        }
        case glRasterPos2i_INDEX: {
            glRasterPos2i_PACKED *unpacked = (glRasterPos2i_PACKED *)packed;
            glRasterPos2i_ARGS *args = (glRasterPos2i_ARGS *)&unpacked->args;
            printf("glRasterPos2i(%d, %d);\n", args->x, args->y);
            break;
        }
        case glRasterPos2iv_INDEX: {
            glRasterPos2iv_PACKED *unpacked = (glRasterPos2iv_PACKED *)packed;
            glRasterPos2iv_ARGS *args = (glRasterPos2iv_ARGS *)&unpacked->args;
            printf("glRasterPos2iv(%p);\n", args->v);
            break;
        }
        case glRasterPos2s_INDEX: {
            glRasterPos2s_PACKED *unpacked = (glRasterPos2s_PACKED *)packed;
            glRasterPos2s_ARGS *args = (glRasterPos2s_ARGS *)&unpacked->args;
            printf("glRasterPos2s(%d, %d);\n", args->x, args->y);
            break;
        }
        case glRasterPos2sv_INDEX: {
            glRasterPos2sv_PACKED *unpacked = (glRasterPos2sv_PACKED *)packed;
            glRasterPos2sv_ARGS *args = (glRasterPos2sv_ARGS *)&unpacked->args;
            printf("glRasterPos2sv(%p);\n", args->v);
            break;
        }
        case glRasterPos3d_INDEX: {
            glRasterPos3d_PACKED *unpacked = (glRasterPos3d_PACKED *)packed;
            glRasterPos3d_ARGS *args = (glRasterPos3d_ARGS *)&unpacked->args;
            printf("glRasterPos3d(%0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z);
            break;
        }
        case glRasterPos3dv_INDEX: {
            glRasterPos3dv_PACKED *unpacked = (glRasterPos3dv_PACKED *)packed;
            glRasterPos3dv_ARGS *args = (glRasterPos3dv_ARGS *)&unpacked->args;
            printf("glRasterPos3dv(%p);\n", args->v);
            break;
        }
        case glRasterPos3f_INDEX: {
            glRasterPos3f_PACKED *unpacked = (glRasterPos3f_PACKED *)packed;
            glRasterPos3f_ARGS *args = (glRasterPos3f_ARGS *)&unpacked->args;
            printf("glRasterPos3f(%0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z);
            break;
        }
        case glRasterPos3fv_INDEX: {
            glRasterPos3fv_PACKED *unpacked = (glRasterPos3fv_PACKED *)packed;
            glRasterPos3fv_ARGS *args = (glRasterPos3fv_ARGS *)&unpacked->args;
            printf("glRasterPos3fv(%p);\n", args->v);
            break;
        }
        case glRasterPos3i_INDEX: {
            glRasterPos3i_PACKED *unpacked = (glRasterPos3i_PACKED *)packed;
            glRasterPos3i_ARGS *args = (glRasterPos3i_ARGS *)&unpacked->args;
            printf("glRasterPos3i(%d, %d, %d);\n", args->x, args->y, args->z);
            break;
        }
        case glRasterPos3iv_INDEX: {
            glRasterPos3iv_PACKED *unpacked = (glRasterPos3iv_PACKED *)packed;
            glRasterPos3iv_ARGS *args = (glRasterPos3iv_ARGS *)&unpacked->args;
            printf("glRasterPos3iv(%p);\n", args->v);
            break;
        }
        case glRasterPos3s_INDEX: {
            glRasterPos3s_PACKED *unpacked = (glRasterPos3s_PACKED *)packed;
            glRasterPos3s_ARGS *args = (glRasterPos3s_ARGS *)&unpacked->args;
            printf("glRasterPos3s(%d, %d, %d);\n", args->x, args->y, args->z);
            break;
        }
        case glRasterPos3sv_INDEX: {
            glRasterPos3sv_PACKED *unpacked = (glRasterPos3sv_PACKED *)packed;
            glRasterPos3sv_ARGS *args = (glRasterPos3sv_ARGS *)&unpacked->args;
            printf("glRasterPos3sv(%p);\n", args->v);
            break;
        }
        case glRasterPos4d_INDEX: {
            glRasterPos4d_PACKED *unpacked = (glRasterPos4d_PACKED *)packed;
            glRasterPos4d_ARGS *args = (glRasterPos4d_ARGS *)&unpacked->args;
            printf("glRasterPos4d(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z, args->w);
            break;
        }
        case glRasterPos4dv_INDEX: {
            glRasterPos4dv_PACKED *unpacked = (glRasterPos4dv_PACKED *)packed;
            glRasterPos4dv_ARGS *args = (glRasterPos4dv_ARGS *)&unpacked->args;
            printf("glRasterPos4dv(%p);\n", args->v);
            break;
        }
        case glRasterPos4f_INDEX: {
            glRasterPos4f_PACKED *unpacked = (glRasterPos4f_PACKED *)packed;
            glRasterPos4f_ARGS *args = (glRasterPos4f_ARGS *)&unpacked->args;
            printf("glRasterPos4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z, args->w);
            break;
        }
        case glRasterPos4fv_INDEX: {
            glRasterPos4fv_PACKED *unpacked = (glRasterPos4fv_PACKED *)packed;
            glRasterPos4fv_ARGS *args = (glRasterPos4fv_ARGS *)&unpacked->args;
            printf("glRasterPos4fv(%p);\n", args->v);
            break;
        }
        case glRasterPos4i_INDEX: {
            glRasterPos4i_PACKED *unpacked = (glRasterPos4i_PACKED *)packed;
            glRasterPos4i_ARGS *args = (glRasterPos4i_ARGS *)&unpacked->args;
            printf("glRasterPos4i(%d, %d, %d, %d);\n", args->x, args->y, args->z, args->w);
            break;
        }
        case glRasterPos4iv_INDEX: {
            glRasterPos4iv_PACKED *unpacked = (glRasterPos4iv_PACKED *)packed;
            glRasterPos4iv_ARGS *args = (glRasterPos4iv_ARGS *)&unpacked->args;
            printf("glRasterPos4iv(%p);\n", args->v);
            break;
        }
        case glRasterPos4s_INDEX: {
            glRasterPos4s_PACKED *unpacked = (glRasterPos4s_PACKED *)packed;
            glRasterPos4s_ARGS *args = (glRasterPos4s_ARGS *)&unpacked->args;
            printf("glRasterPos4s(%d, %d, %d, %d);\n", args->x, args->y, args->z, args->w);
            break;
        }
        case glRasterPos4sv_INDEX: {
            glRasterPos4sv_PACKED *unpacked = (glRasterPos4sv_PACKED *)packed;
            glRasterPos4sv_ARGS *args = (glRasterPos4sv_ARGS *)&unpacked->args;
            printf("glRasterPos4sv(%p);\n", args->v);
            break;
        }
        case glReadBuffer_INDEX: {
            glReadBuffer_PACKED *unpacked = (glReadBuffer_PACKED *)packed;
            glReadBuffer_ARGS *args = (glReadBuffer_ARGS *)&unpacked->args;
            printf("glReadBuffer(0x%04X);\n", args->mode);
            break;
        }
        case glReadPixels_INDEX: {
            glReadPixels_PACKED *unpacked = (glReadPixels_PACKED *)packed;
            glReadPixels_ARGS *args = (glReadPixels_ARGS *)&unpacked->args;
            printf("glReadPixels(%d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", args->x, args->y, args->width, args->height, args->format, args->type, args->pixels);
            break;
        }
        case glRectd_INDEX: {
            glRectd_PACKED *unpacked = (glRectd_PACKED *)packed;
            glRectd_ARGS *args = (glRectd_ARGS *)&unpacked->args;
            printf("glRectd(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->x1, args->y1, args->x2, args->y2);
            break;
        }
        case glRectdv_INDEX: {
            glRectdv_PACKED *unpacked = (glRectdv_PACKED *)packed;
            glRectdv_ARGS *args = (glRectdv_ARGS *)&unpacked->args;
            printf("glRectdv(%p, %p);\n", args->v1, args->v2);
            break;
        }
        case glRectf_INDEX: {
            glRectf_PACKED *unpacked = (glRectf_PACKED *)packed;
            glRectf_ARGS *args = (glRectf_ARGS *)&unpacked->args;
            printf("glRectf(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->x1, args->y1, args->x2, args->y2);
            break;
        }
        case glRectfv_INDEX: {
            glRectfv_PACKED *unpacked = (glRectfv_PACKED *)packed;
            glRectfv_ARGS *args = (glRectfv_ARGS *)&unpacked->args;
            printf("glRectfv(%p, %p);\n", args->v1, args->v2);
            break;
        }
        case glRecti_INDEX: {
            glRecti_PACKED *unpacked = (glRecti_PACKED *)packed;
            glRecti_ARGS *args = (glRecti_ARGS *)&unpacked->args;
            printf("glRecti(%d, %d, %d, %d);\n", args->x1, args->y1, args->x2, args->y2);
            break;
        }
        case glRectiv_INDEX: {
            glRectiv_PACKED *unpacked = (glRectiv_PACKED *)packed;
            glRectiv_ARGS *args = (glRectiv_ARGS *)&unpacked->args;
            printf("glRectiv(%p, %p);\n", args->v1, args->v2);
            break;
        }
        case glRects_INDEX: {
            glRects_PACKED *unpacked = (glRects_PACKED *)packed;
            glRects_ARGS *args = (glRects_ARGS *)&unpacked->args;
            printf("glRects(%d, %d, %d, %d);\n", args->x1, args->y1, args->x2, args->y2);
            break;
        }
        case glRectsv_INDEX: {
            glRectsv_PACKED *unpacked = (glRectsv_PACKED *)packed;
            glRectsv_ARGS *args = (glRectsv_ARGS *)&unpacked->args;
            printf("glRectsv(%p, %p);\n", args->v1, args->v2);
            break;
        }
        case glRenderMode_INDEX: {
            glRenderMode_PACKED *unpacked = (glRenderMode_PACKED *)packed;
            glRenderMode_ARGS *args = (glRenderMode_ARGS *)&unpacked->args;
            printf("glRenderMode(0x%04X);\n", args->mode);
            break;
        }
        case glRotated_INDEX: {
            glRotated_PACKED *unpacked = (glRotated_PACKED *)packed;
            glRotated_ARGS *args = (glRotated_ARGS *)&unpacked->args;
            printf("glRotated(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->angle, args->x, args->y, args->z);
            break;
        }
        case glRotatef_INDEX: {
            glRotatef_PACKED *unpacked = (glRotatef_PACKED *)packed;
            glRotatef_ARGS *args = (glRotatef_ARGS *)&unpacked->args;
            printf("glRotatef(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->angle, args->x, args->y, args->z);
            break;
        }
        case glSampleCoverage_INDEX: {
            glSampleCoverage_PACKED *unpacked = (glSampleCoverage_PACKED *)packed;
            glSampleCoverage_ARGS *args = (glSampleCoverage_ARGS *)&unpacked->args;
            printf("glSampleCoverage(%0.2f, %d);\n", args->value, args->invert);
            break;
        }
        case glScaled_INDEX: {
            glScaled_PACKED *unpacked = (glScaled_PACKED *)packed;
            glScaled_ARGS *args = (glScaled_ARGS *)&unpacked->args;
            printf("glScaled(%0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z);
            break;
        }
        case glScalef_INDEX: {
            glScalef_PACKED *unpacked = (glScalef_PACKED *)packed;
            glScalef_ARGS *args = (glScalef_ARGS *)&unpacked->args;
            printf("glScalef(%0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z);
            break;
        }
        case glScissor_INDEX: {
            glScissor_PACKED *unpacked = (glScissor_PACKED *)packed;
            glScissor_ARGS *args = (glScissor_ARGS *)&unpacked->args;
            printf("glScissor(%d, %d, %d, %d);\n", args->x, args->y, args->width, args->height);
            break;
        }
        case glSecondaryColor3b_INDEX: {
            glSecondaryColor3b_PACKED *unpacked = (glSecondaryColor3b_PACKED *)packed;
            glSecondaryColor3b_ARGS *args = (glSecondaryColor3b_ARGS *)&unpacked->args;
            printf("glSecondaryColor3b(%c, %c, %c);\n", args->red, args->green, args->blue);
            break;
        }
        case glSecondaryColor3bv_INDEX: {
            glSecondaryColor3bv_PACKED *unpacked = (glSecondaryColor3bv_PACKED *)packed;
            glSecondaryColor3bv_ARGS *args = (glSecondaryColor3bv_ARGS *)&unpacked->args;
            printf("glSecondaryColor3bv(%p);\n", args->v);
            break;
        }
        case glSecondaryColor3d_INDEX: {
            glSecondaryColor3d_PACKED *unpacked = (glSecondaryColor3d_PACKED *)packed;
            glSecondaryColor3d_ARGS *args = (glSecondaryColor3d_ARGS *)&unpacked->args;
            printf("glSecondaryColor3d(%0.2f, %0.2f, %0.2f);\n", args->red, args->green, args->blue);
            break;
        }
        case glSecondaryColor3dv_INDEX: {
            glSecondaryColor3dv_PACKED *unpacked = (glSecondaryColor3dv_PACKED *)packed;
            glSecondaryColor3dv_ARGS *args = (glSecondaryColor3dv_ARGS *)&unpacked->args;
            printf("glSecondaryColor3dv(%p);\n", args->v);
            break;
        }
        case glSecondaryColor3f_INDEX: {
            glSecondaryColor3f_PACKED *unpacked = (glSecondaryColor3f_PACKED *)packed;
            glSecondaryColor3f_ARGS *args = (glSecondaryColor3f_ARGS *)&unpacked->args;
            printf("glSecondaryColor3f(%0.2f, %0.2f, %0.2f);\n", args->red, args->green, args->blue);
            break;
        }
        case glSecondaryColor3fv_INDEX: {
            glSecondaryColor3fv_PACKED *unpacked = (glSecondaryColor3fv_PACKED *)packed;
            glSecondaryColor3fv_ARGS *args = (glSecondaryColor3fv_ARGS *)&unpacked->args;
            printf("glSecondaryColor3fv(%p);\n", args->v);
            break;
        }
        case glSecondaryColor3i_INDEX: {
            glSecondaryColor3i_PACKED *unpacked = (glSecondaryColor3i_PACKED *)packed;
            glSecondaryColor3i_ARGS *args = (glSecondaryColor3i_ARGS *)&unpacked->args;
            printf("glSecondaryColor3i(%d, %d, %d);\n", args->red, args->green, args->blue);
            break;
        }
        case glSecondaryColor3iv_INDEX: {
            glSecondaryColor3iv_PACKED *unpacked = (glSecondaryColor3iv_PACKED *)packed;
            glSecondaryColor3iv_ARGS *args = (glSecondaryColor3iv_ARGS *)&unpacked->args;
            printf("glSecondaryColor3iv(%p);\n", args->v);
            break;
        }
        case glSecondaryColor3s_INDEX: {
            glSecondaryColor3s_PACKED *unpacked = (glSecondaryColor3s_PACKED *)packed;
            glSecondaryColor3s_ARGS *args = (glSecondaryColor3s_ARGS *)&unpacked->args;
            printf("glSecondaryColor3s(%d, %d, %d);\n", args->red, args->green, args->blue);
            break;
        }
        case glSecondaryColor3sv_INDEX: {
            glSecondaryColor3sv_PACKED *unpacked = (glSecondaryColor3sv_PACKED *)packed;
            glSecondaryColor3sv_ARGS *args = (glSecondaryColor3sv_ARGS *)&unpacked->args;
            printf("glSecondaryColor3sv(%p);\n", args->v);
            break;
        }
        case glSecondaryColor3ub_INDEX: {
            glSecondaryColor3ub_PACKED *unpacked = (glSecondaryColor3ub_PACKED *)packed;
            glSecondaryColor3ub_ARGS *args = (glSecondaryColor3ub_ARGS *)&unpacked->args;
            printf("glSecondaryColor3ub(%c, %c, %c);\n", args->red, args->green, args->blue);
            break;
        }
        case glSecondaryColor3ubv_INDEX: {
            glSecondaryColor3ubv_PACKED *unpacked = (glSecondaryColor3ubv_PACKED *)packed;
            glSecondaryColor3ubv_ARGS *args = (glSecondaryColor3ubv_ARGS *)&unpacked->args;
            printf("glSecondaryColor3ubv(%p);\n", args->v);
            break;
        }
        case glSecondaryColor3ui_INDEX: {
            glSecondaryColor3ui_PACKED *unpacked = (glSecondaryColor3ui_PACKED *)packed;
            glSecondaryColor3ui_ARGS *args = (glSecondaryColor3ui_ARGS *)&unpacked->args;
            printf("glSecondaryColor3ui(%u, %u, %u);\n", args->red, args->green, args->blue);
            break;
        }
        case glSecondaryColor3uiv_INDEX: {
            glSecondaryColor3uiv_PACKED *unpacked = (glSecondaryColor3uiv_PACKED *)packed;
            glSecondaryColor3uiv_ARGS *args = (glSecondaryColor3uiv_ARGS *)&unpacked->args;
            printf("glSecondaryColor3uiv(%p);\n", args->v);
            break;
        }
        case glSecondaryColor3us_INDEX: {
            glSecondaryColor3us_PACKED *unpacked = (glSecondaryColor3us_PACKED *)packed;
            glSecondaryColor3us_ARGS *args = (glSecondaryColor3us_ARGS *)&unpacked->args;
            printf("glSecondaryColor3us(%u, %u, %u);\n", args->red, args->green, args->blue);
            break;
        }
        case glSecondaryColor3usv_INDEX: {
            glSecondaryColor3usv_PACKED *unpacked = (glSecondaryColor3usv_PACKED *)packed;
            glSecondaryColor3usv_ARGS *args = (glSecondaryColor3usv_ARGS *)&unpacked->args;
            printf("glSecondaryColor3usv(%p);\n", args->v);
            break;
        }
        case glSelectBuffer_INDEX: {
            glSelectBuffer_PACKED *unpacked = (glSelectBuffer_PACKED *)packed;
            glSelectBuffer_ARGS *args = (glSelectBuffer_ARGS *)&unpacked->args;
            printf("glSelectBuffer(%d, %p);\n", args->size, args->buffer);
            break;
        }
        case glShadeModel_INDEX: {
            glShadeModel_PACKED *unpacked = (glShadeModel_PACKED *)packed;
            glShadeModel_ARGS *args = (glShadeModel_ARGS *)&unpacked->args;
            printf("glShadeModel(0x%04X);\n", args->mode);
            break;
        }
        case glStencilFunc_INDEX: {
            glStencilFunc_PACKED *unpacked = (glStencilFunc_PACKED *)packed;
            glStencilFunc_ARGS *args = (glStencilFunc_ARGS *)&unpacked->args;
            printf("glStencilFunc(0x%04X, %d, %u);\n", args->func, args->ref, args->mask);
            break;
        }
        case glStencilMask_INDEX: {
            glStencilMask_PACKED *unpacked = (glStencilMask_PACKED *)packed;
            glStencilMask_ARGS *args = (glStencilMask_ARGS *)&unpacked->args;
            printf("glStencilMask(%u);\n", args->mask);
            break;
        }
        case glStencilOp_INDEX: {
            glStencilOp_PACKED *unpacked = (glStencilOp_PACKED *)packed;
            glStencilOp_ARGS *args = (glStencilOp_ARGS *)&unpacked->args;
            printf("glStencilOp(0x%04X, 0x%04X, 0x%04X);\n", args->fail, args->zfail, args->zpass);
            break;
        }
        case glTexCoord1d_INDEX: {
            glTexCoord1d_PACKED *unpacked = (glTexCoord1d_PACKED *)packed;
            glTexCoord1d_ARGS *args = (glTexCoord1d_ARGS *)&unpacked->args;
            printf("glTexCoord1d(%0.2f);\n", args->s);
            break;
        }
        case glTexCoord1dv_INDEX: {
            glTexCoord1dv_PACKED *unpacked = (glTexCoord1dv_PACKED *)packed;
            glTexCoord1dv_ARGS *args = (glTexCoord1dv_ARGS *)&unpacked->args;
            printf("glTexCoord1dv(%p);\n", args->v);
            break;
        }
        case glTexCoord1f_INDEX: {
            glTexCoord1f_PACKED *unpacked = (glTexCoord1f_PACKED *)packed;
            glTexCoord1f_ARGS *args = (glTexCoord1f_ARGS *)&unpacked->args;
            printf("glTexCoord1f(%0.2f);\n", args->s);
            break;
        }
        case glTexCoord1fv_INDEX: {
            glTexCoord1fv_PACKED *unpacked = (glTexCoord1fv_PACKED *)packed;
            glTexCoord1fv_ARGS *args = (glTexCoord1fv_ARGS *)&unpacked->args;
            printf("glTexCoord1fv(%p);\n", args->v);
            break;
        }
        case glTexCoord1i_INDEX: {
            glTexCoord1i_PACKED *unpacked = (glTexCoord1i_PACKED *)packed;
            glTexCoord1i_ARGS *args = (glTexCoord1i_ARGS *)&unpacked->args;
            printf("glTexCoord1i(%d);\n", args->s);
            break;
        }
        case glTexCoord1iv_INDEX: {
            glTexCoord1iv_PACKED *unpacked = (glTexCoord1iv_PACKED *)packed;
            glTexCoord1iv_ARGS *args = (glTexCoord1iv_ARGS *)&unpacked->args;
            printf("glTexCoord1iv(%p);\n", args->v);
            break;
        }
        case glTexCoord1s_INDEX: {
            glTexCoord1s_PACKED *unpacked = (glTexCoord1s_PACKED *)packed;
            glTexCoord1s_ARGS *args = (glTexCoord1s_ARGS *)&unpacked->args;
            printf("glTexCoord1s(%d);\n", args->s);
            break;
        }
        case glTexCoord1sv_INDEX: {
            glTexCoord1sv_PACKED *unpacked = (glTexCoord1sv_PACKED *)packed;
            glTexCoord1sv_ARGS *args = (glTexCoord1sv_ARGS *)&unpacked->args;
            printf("glTexCoord1sv(%p);\n", args->v);
            break;
        }
        case glTexCoord2d_INDEX: {
            glTexCoord2d_PACKED *unpacked = (glTexCoord2d_PACKED *)packed;
            glTexCoord2d_ARGS *args = (glTexCoord2d_ARGS *)&unpacked->args;
            printf("glTexCoord2d(%0.2f, %0.2f);\n", args->s, args->t);
            break;
        }
        case glTexCoord2dv_INDEX: {
            glTexCoord2dv_PACKED *unpacked = (glTexCoord2dv_PACKED *)packed;
            glTexCoord2dv_ARGS *args = (glTexCoord2dv_ARGS *)&unpacked->args;
            printf("glTexCoord2dv(%p);\n", args->v);
            break;
        }
        case glTexCoord2f_INDEX: {
            glTexCoord2f_PACKED *unpacked = (glTexCoord2f_PACKED *)packed;
            glTexCoord2f_ARGS *args = (glTexCoord2f_ARGS *)&unpacked->args;
            printf("glTexCoord2f(%0.2f, %0.2f);\n", args->s, args->t);
            break;
        }
        case glTexCoord2fv_INDEX: {
            glTexCoord2fv_PACKED *unpacked = (glTexCoord2fv_PACKED *)packed;
            glTexCoord2fv_ARGS *args = (glTexCoord2fv_ARGS *)&unpacked->args;
            printf("glTexCoord2fv(%p);\n", args->v);
            break;
        }
        case glTexCoord2i_INDEX: {
            glTexCoord2i_PACKED *unpacked = (glTexCoord2i_PACKED *)packed;
            glTexCoord2i_ARGS *args = (glTexCoord2i_ARGS *)&unpacked->args;
            printf("glTexCoord2i(%d, %d);\n", args->s, args->t);
            break;
        }
        case glTexCoord2iv_INDEX: {
            glTexCoord2iv_PACKED *unpacked = (glTexCoord2iv_PACKED *)packed;
            glTexCoord2iv_ARGS *args = (glTexCoord2iv_ARGS *)&unpacked->args;
            printf("glTexCoord2iv(%p);\n", args->v);
            break;
        }
        case glTexCoord2s_INDEX: {
            glTexCoord2s_PACKED *unpacked = (glTexCoord2s_PACKED *)packed;
            glTexCoord2s_ARGS *args = (glTexCoord2s_ARGS *)&unpacked->args;
            printf("glTexCoord2s(%d, %d);\n", args->s, args->t);
            break;
        }
        case glTexCoord2sv_INDEX: {
            glTexCoord2sv_PACKED *unpacked = (glTexCoord2sv_PACKED *)packed;
            glTexCoord2sv_ARGS *args = (glTexCoord2sv_ARGS *)&unpacked->args;
            printf("glTexCoord2sv(%p);\n", args->v);
            break;
        }
        case glTexCoord3d_INDEX: {
            glTexCoord3d_PACKED *unpacked = (glTexCoord3d_PACKED *)packed;
            glTexCoord3d_ARGS *args = (glTexCoord3d_ARGS *)&unpacked->args;
            printf("glTexCoord3d(%0.2f, %0.2f, %0.2f);\n", args->s, args->t, args->r);
            break;
        }
        case glTexCoord3dv_INDEX: {
            glTexCoord3dv_PACKED *unpacked = (glTexCoord3dv_PACKED *)packed;
            glTexCoord3dv_ARGS *args = (glTexCoord3dv_ARGS *)&unpacked->args;
            printf("glTexCoord3dv(%p);\n", args->v);
            break;
        }
        case glTexCoord3f_INDEX: {
            glTexCoord3f_PACKED *unpacked = (glTexCoord3f_PACKED *)packed;
            glTexCoord3f_ARGS *args = (glTexCoord3f_ARGS *)&unpacked->args;
            printf("glTexCoord3f(%0.2f, %0.2f, %0.2f);\n", args->s, args->t, args->r);
            break;
        }
        case glTexCoord3fv_INDEX: {
            glTexCoord3fv_PACKED *unpacked = (glTexCoord3fv_PACKED *)packed;
            glTexCoord3fv_ARGS *args = (glTexCoord3fv_ARGS *)&unpacked->args;
            printf("glTexCoord3fv(%p);\n", args->v);
            break;
        }
        case glTexCoord3i_INDEX: {
            glTexCoord3i_PACKED *unpacked = (glTexCoord3i_PACKED *)packed;
            glTexCoord3i_ARGS *args = (glTexCoord3i_ARGS *)&unpacked->args;
            printf("glTexCoord3i(%d, %d, %d);\n", args->s, args->t, args->r);
            break;
        }
        case glTexCoord3iv_INDEX: {
            glTexCoord3iv_PACKED *unpacked = (glTexCoord3iv_PACKED *)packed;
            glTexCoord3iv_ARGS *args = (glTexCoord3iv_ARGS *)&unpacked->args;
            printf("glTexCoord3iv(%p);\n", args->v);
            break;
        }
        case glTexCoord3s_INDEX: {
            glTexCoord3s_PACKED *unpacked = (glTexCoord3s_PACKED *)packed;
            glTexCoord3s_ARGS *args = (glTexCoord3s_ARGS *)&unpacked->args;
            printf("glTexCoord3s(%d, %d, %d);\n", args->s, args->t, args->r);
            break;
        }
        case glTexCoord3sv_INDEX: {
            glTexCoord3sv_PACKED *unpacked = (glTexCoord3sv_PACKED *)packed;
            glTexCoord3sv_ARGS *args = (glTexCoord3sv_ARGS *)&unpacked->args;
            printf("glTexCoord3sv(%p);\n", args->v);
            break;
        }
        case glTexCoord4d_INDEX: {
            glTexCoord4d_PACKED *unpacked = (glTexCoord4d_PACKED *)packed;
            glTexCoord4d_ARGS *args = (glTexCoord4d_ARGS *)&unpacked->args;
            printf("glTexCoord4d(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->s, args->t, args->r, args->q);
            break;
        }
        case glTexCoord4dv_INDEX: {
            glTexCoord4dv_PACKED *unpacked = (glTexCoord4dv_PACKED *)packed;
            glTexCoord4dv_ARGS *args = (glTexCoord4dv_ARGS *)&unpacked->args;
            printf("glTexCoord4dv(%p);\n", args->v);
            break;
        }
        case glTexCoord4f_INDEX: {
            glTexCoord4f_PACKED *unpacked = (glTexCoord4f_PACKED *)packed;
            glTexCoord4f_ARGS *args = (glTexCoord4f_ARGS *)&unpacked->args;
            printf("glTexCoord4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->s, args->t, args->r, args->q);
            break;
        }
        case glTexCoord4fv_INDEX: {
            glTexCoord4fv_PACKED *unpacked = (glTexCoord4fv_PACKED *)packed;
            glTexCoord4fv_ARGS *args = (glTexCoord4fv_ARGS *)&unpacked->args;
            printf("glTexCoord4fv(%p);\n", args->v);
            break;
        }
        case glTexCoord4i_INDEX: {
            glTexCoord4i_PACKED *unpacked = (glTexCoord4i_PACKED *)packed;
            glTexCoord4i_ARGS *args = (glTexCoord4i_ARGS *)&unpacked->args;
            printf("glTexCoord4i(%d, %d, %d, %d);\n", args->s, args->t, args->r, args->q);
            break;
        }
        case glTexCoord4iv_INDEX: {
            glTexCoord4iv_PACKED *unpacked = (glTexCoord4iv_PACKED *)packed;
            glTexCoord4iv_ARGS *args = (glTexCoord4iv_ARGS *)&unpacked->args;
            printf("glTexCoord4iv(%p);\n", args->v);
            break;
        }
        case glTexCoord4s_INDEX: {
            glTexCoord4s_PACKED *unpacked = (glTexCoord4s_PACKED *)packed;
            glTexCoord4s_ARGS *args = (glTexCoord4s_ARGS *)&unpacked->args;
            printf("glTexCoord4s(%d, %d, %d, %d);\n", args->s, args->t, args->r, args->q);
            break;
        }
        case glTexCoord4sv_INDEX: {
            glTexCoord4sv_PACKED *unpacked = (glTexCoord4sv_PACKED *)packed;
            glTexCoord4sv_ARGS *args = (glTexCoord4sv_ARGS *)&unpacked->args;
            printf("glTexCoord4sv(%p);\n", args->v);
            break;
        }
        case glTexCoordPointer_INDEX: {
            glTexCoordPointer_PACKED *unpacked = (glTexCoordPointer_PACKED *)packed;
            glTexCoordPointer_ARGS *args = (glTexCoordPointer_ARGS *)&unpacked->args;
            printf("glTexCoordPointer(%d, 0x%04X, %d, %p);\n", args->size, args->type, args->stride, args->pointer);
            break;
        }
        case glTexEnvf_INDEX: {
            glTexEnvf_PACKED *unpacked = (glTexEnvf_PACKED *)packed;
            glTexEnvf_ARGS *args = (glTexEnvf_ARGS *)&unpacked->args;
            printf("glTexEnvf(0x%04X, 0x%04X, %0.2f);\n", args->target, args->pname, args->param);
            break;
        }
        case glTexEnvfv_INDEX: {
            glTexEnvfv_PACKED *unpacked = (glTexEnvfv_PACKED *)packed;
            glTexEnvfv_ARGS *args = (glTexEnvfv_ARGS *)&unpacked->args;
            printf("glTexEnvfv(0x%04X, 0x%04X, %p);\n", args->target, args->pname, args->params);
            break;
        }
        case glTexEnvi_INDEX: {
            glTexEnvi_PACKED *unpacked = (glTexEnvi_PACKED *)packed;
            glTexEnvi_ARGS *args = (glTexEnvi_ARGS *)&unpacked->args;
            printf("glTexEnvi(0x%04X, 0x%04X, %d);\n", args->target, args->pname, args->param);
            break;
        }
        case glTexEnviv_INDEX: {
            glTexEnviv_PACKED *unpacked = (glTexEnviv_PACKED *)packed;
            glTexEnviv_ARGS *args = (glTexEnviv_ARGS *)&unpacked->args;
            printf("glTexEnviv(0x%04X, 0x%04X, %p);\n", args->target, args->pname, args->params);
            break;
        }
        case glTexGend_INDEX: {
            glTexGend_PACKED *unpacked = (glTexGend_PACKED *)packed;
            glTexGend_ARGS *args = (glTexGend_ARGS *)&unpacked->args;
            printf("glTexGend(0x%04X, 0x%04X, %0.2f);\n", args->coord, args->pname, args->param);
            break;
        }
        case glTexGendv_INDEX: {
            glTexGendv_PACKED *unpacked = (glTexGendv_PACKED *)packed;
            glTexGendv_ARGS *args = (glTexGendv_ARGS *)&unpacked->args;
            printf("glTexGendv(0x%04X, 0x%04X, %p);\n", args->coord, args->pname, args->params);
            break;
        }
        case glTexGenf_INDEX: {
            glTexGenf_PACKED *unpacked = (glTexGenf_PACKED *)packed;
            glTexGenf_ARGS *args = (glTexGenf_ARGS *)&unpacked->args;
            printf("glTexGenf(0x%04X, 0x%04X, %0.2f);\n", args->coord, args->pname, args->param);
            break;
        }
        case glTexGenfv_INDEX: {
            glTexGenfv_PACKED *unpacked = (glTexGenfv_PACKED *)packed;
            glTexGenfv_ARGS *args = (glTexGenfv_ARGS *)&unpacked->args;
            printf("glTexGenfv(0x%04X, 0x%04X, %p);\n", args->coord, args->pname, args->params);
            break;
        }
        case glTexGeni_INDEX: {
            glTexGeni_PACKED *unpacked = (glTexGeni_PACKED *)packed;
            glTexGeni_ARGS *args = (glTexGeni_ARGS *)&unpacked->args;
            printf("glTexGeni(0x%04X, 0x%04X, %d);\n", args->coord, args->pname, args->param);
            break;
        }
        case glTexGeniv_INDEX: {
            glTexGeniv_PACKED *unpacked = (glTexGeniv_PACKED *)packed;
            glTexGeniv_ARGS *args = (glTexGeniv_ARGS *)&unpacked->args;
            printf("glTexGeniv(0x%04X, 0x%04X, %p);\n", args->coord, args->pname, args->params);
            break;
        }
        case glTexImage1D_INDEX: {
            glTexImage1D_PACKED *unpacked = (glTexImage1D_PACKED *)packed;
            glTexImage1D_ARGS *args = (glTexImage1D_ARGS *)&unpacked->args;
            printf("glTexImage1D(0x%04X, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", args->target, args->level, args->internalformat, args->width, args->border, args->format, args->type, args->pixels);
            break;
        }
        case glTexImage2D_INDEX: {
            glTexImage2D_PACKED *unpacked = (glTexImage2D_PACKED *)packed;
            glTexImage2D_ARGS *args = (glTexImage2D_ARGS *)&unpacked->args;
            printf("glTexImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", args->target, args->level, args->internalformat, args->width, args->height, args->border, args->format, args->type, args->pixels);
            break;
        }
        case glTexImage3D_INDEX: {
            glTexImage3D_PACKED *unpacked = (glTexImage3D_PACKED *)packed;
            glTexImage3D_ARGS *args = (glTexImage3D_ARGS *)&unpacked->args;
            printf("glTexImage3D(0x%04X, %d, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", args->target, args->level, args->internalformat, args->width, args->height, args->depth, args->border, args->format, args->type, args->pixels);
            break;
        }
        case glTexParameterf_INDEX: {
            glTexParameterf_PACKED *unpacked = (glTexParameterf_PACKED *)packed;
            glTexParameterf_ARGS *args = (glTexParameterf_ARGS *)&unpacked->args;
            printf("glTexParameterf(0x%04X, 0x%04X, %0.2f);\n", args->target, args->pname, args->param);
            break;
        }
        case glTexParameterfv_INDEX: {
            glTexParameterfv_PACKED *unpacked = (glTexParameterfv_PACKED *)packed;
            glTexParameterfv_ARGS *args = (glTexParameterfv_ARGS *)&unpacked->args;
            printf("glTexParameterfv(0x%04X, 0x%04X, %p);\n", args->target, args->pname, args->params);
            break;
        }
        case glTexParameteri_INDEX: {
            glTexParameteri_PACKED *unpacked = (glTexParameteri_PACKED *)packed;
            glTexParameteri_ARGS *args = (glTexParameteri_ARGS *)&unpacked->args;
            printf("glTexParameteri(0x%04X, 0x%04X, %d);\n", args->target, args->pname, args->param);
            break;
        }
        case glTexParameteriv_INDEX: {
            glTexParameteriv_PACKED *unpacked = (glTexParameteriv_PACKED *)packed;
            glTexParameteriv_ARGS *args = (glTexParameteriv_ARGS *)&unpacked->args;
            printf("glTexParameteriv(0x%04X, 0x%04X, %p);\n", args->target, args->pname, args->params);
            break;
        }
        case glTexSubImage1D_INDEX: {
            glTexSubImage1D_PACKED *unpacked = (glTexSubImage1D_PACKED *)packed;
            glTexSubImage1D_ARGS *args = (glTexSubImage1D_ARGS *)&unpacked->args;
            printf("glTexSubImage1D(0x%04X, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", args->target, args->level, args->xoffset, args->width, args->format, args->type, args->pixels);
            break;
        }
        case glTexSubImage2D_INDEX: {
            glTexSubImage2D_PACKED *unpacked = (glTexSubImage2D_PACKED *)packed;
            glTexSubImage2D_ARGS *args = (glTexSubImage2D_ARGS *)&unpacked->args;
            printf("glTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", args->target, args->level, args->xoffset, args->yoffset, args->width, args->height, args->format, args->type, args->pixels);
            break;
        }
        case glTexSubImage3D_INDEX: {
            glTexSubImage3D_PACKED *unpacked = (glTexSubImage3D_PACKED *)packed;
            glTexSubImage3D_ARGS *args = (glTexSubImage3D_ARGS *)&unpacked->args;
            printf("glTexSubImage3D(0x%04X, %d, %d, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", args->target, args->level, args->xoffset, args->yoffset, args->zoffset, args->width, args->height, args->depth, args->format, args->type, args->pixels);
            break;
        }
        case glTranslated_INDEX: {
            glTranslated_PACKED *unpacked = (glTranslated_PACKED *)packed;
            glTranslated_ARGS *args = (glTranslated_ARGS *)&unpacked->args;
            printf("glTranslated(%0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z);
            break;
        }
        case glTranslatef_INDEX: {
            glTranslatef_PACKED *unpacked = (glTranslatef_PACKED *)packed;
            glTranslatef_ARGS *args = (glTranslatef_ARGS *)&unpacked->args;
            printf("glTranslatef(%0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z);
            break;
        }
        case glUnlockArraysEXT_INDEX: {
            printf("glUnlockArraysEXT();\n");
            break;
        }
        case glVertex2d_INDEX: {
            glVertex2d_PACKED *unpacked = (glVertex2d_PACKED *)packed;
            glVertex2d_ARGS *args = (glVertex2d_ARGS *)&unpacked->args;
            printf("glVertex2d(%0.2f, %0.2f);\n", args->x, args->y);
            break;
        }
        case glVertex2dv_INDEX: {
            glVertex2dv_PACKED *unpacked = (glVertex2dv_PACKED *)packed;
            glVertex2dv_ARGS *args = (glVertex2dv_ARGS *)&unpacked->args;
            printf("glVertex2dv(%p);\n", args->v);
            break;
        }
        case glVertex2f_INDEX: {
            glVertex2f_PACKED *unpacked = (glVertex2f_PACKED *)packed;
            glVertex2f_ARGS *args = (glVertex2f_ARGS *)&unpacked->args;
            printf("glVertex2f(%0.2f, %0.2f);\n", args->x, args->y);
            break;
        }
        case glVertex2fv_INDEX: {
            glVertex2fv_PACKED *unpacked = (glVertex2fv_PACKED *)packed;
            glVertex2fv_ARGS *args = (glVertex2fv_ARGS *)&unpacked->args;
            printf("glVertex2fv(%p);\n", args->v);
            break;
        }
        case glVertex2i_INDEX: {
            glVertex2i_PACKED *unpacked = (glVertex2i_PACKED *)packed;
            glVertex2i_ARGS *args = (glVertex2i_ARGS *)&unpacked->args;
            printf("glVertex2i(%d, %d);\n", args->x, args->y);
            break;
        }
        case glVertex2iv_INDEX: {
            glVertex2iv_PACKED *unpacked = (glVertex2iv_PACKED *)packed;
            glVertex2iv_ARGS *args = (glVertex2iv_ARGS *)&unpacked->args;
            printf("glVertex2iv(%p);\n", args->v);
            break;
        }
        case glVertex2s_INDEX: {
            glVertex2s_PACKED *unpacked = (glVertex2s_PACKED *)packed;
            glVertex2s_ARGS *args = (glVertex2s_ARGS *)&unpacked->args;
            printf("glVertex2s(%d, %d);\n", args->x, args->y);
            break;
        }
        case glVertex2sv_INDEX: {
            glVertex2sv_PACKED *unpacked = (glVertex2sv_PACKED *)packed;
            glVertex2sv_ARGS *args = (glVertex2sv_ARGS *)&unpacked->args;
            printf("glVertex2sv(%p);\n", args->v);
            break;
        }
        case glVertex3d_INDEX: {
            glVertex3d_PACKED *unpacked = (glVertex3d_PACKED *)packed;
            glVertex3d_ARGS *args = (glVertex3d_ARGS *)&unpacked->args;
            printf("glVertex3d(%0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z);
            break;
        }
        case glVertex3dv_INDEX: {
            glVertex3dv_PACKED *unpacked = (glVertex3dv_PACKED *)packed;
            glVertex3dv_ARGS *args = (glVertex3dv_ARGS *)&unpacked->args;
            printf("glVertex3dv(%p);\n", args->v);
            break;
        }
        case glVertex3f_INDEX: {
            glVertex3f_PACKED *unpacked = (glVertex3f_PACKED *)packed;
            glVertex3f_ARGS *args = (glVertex3f_ARGS *)&unpacked->args;
            printf("glVertex3f(%0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z);
            break;
        }
        case glVertex3fv_INDEX: {
            glVertex3fv_PACKED *unpacked = (glVertex3fv_PACKED *)packed;
            glVertex3fv_ARGS *args = (glVertex3fv_ARGS *)&unpacked->args;
            printf("glVertex3fv(%p);\n", args->v);
            break;
        }
        case glVertex3i_INDEX: {
            glVertex3i_PACKED *unpacked = (glVertex3i_PACKED *)packed;
            glVertex3i_ARGS *args = (glVertex3i_ARGS *)&unpacked->args;
            printf("glVertex3i(%d, %d, %d);\n", args->x, args->y, args->z);
            break;
        }
        case glVertex3iv_INDEX: {
            glVertex3iv_PACKED *unpacked = (glVertex3iv_PACKED *)packed;
            glVertex3iv_ARGS *args = (glVertex3iv_ARGS *)&unpacked->args;
            printf("glVertex3iv(%p);\n", args->v);
            break;
        }
        case glVertex3s_INDEX: {
            glVertex3s_PACKED *unpacked = (glVertex3s_PACKED *)packed;
            glVertex3s_ARGS *args = (glVertex3s_ARGS *)&unpacked->args;
            printf("glVertex3s(%d, %d, %d);\n", args->x, args->y, args->z);
            break;
        }
        case glVertex3sv_INDEX: {
            glVertex3sv_PACKED *unpacked = (glVertex3sv_PACKED *)packed;
            glVertex3sv_ARGS *args = (glVertex3sv_ARGS *)&unpacked->args;
            printf("glVertex3sv(%p);\n", args->v);
            break;
        }
        case glVertex4d_INDEX: {
            glVertex4d_PACKED *unpacked = (glVertex4d_PACKED *)packed;
            glVertex4d_ARGS *args = (glVertex4d_ARGS *)&unpacked->args;
            printf("glVertex4d(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z, args->w);
            break;
        }
        case glVertex4dv_INDEX: {
            glVertex4dv_PACKED *unpacked = (glVertex4dv_PACKED *)packed;
            glVertex4dv_ARGS *args = (glVertex4dv_ARGS *)&unpacked->args;
            printf("glVertex4dv(%p);\n", args->v);
            break;
        }
        case glVertex4f_INDEX: {
            glVertex4f_PACKED *unpacked = (glVertex4f_PACKED *)packed;
            glVertex4f_ARGS *args = (glVertex4f_ARGS *)&unpacked->args;
            printf("glVertex4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z, args->w);
            break;
        }
        case glVertex4fv_INDEX: {
            glVertex4fv_PACKED *unpacked = (glVertex4fv_PACKED *)packed;
            glVertex4fv_ARGS *args = (glVertex4fv_ARGS *)&unpacked->args;
            printf("glVertex4fv(%p);\n", args->v);
            break;
        }
        case glVertex4i_INDEX: {
            glVertex4i_PACKED *unpacked = (glVertex4i_PACKED *)packed;
            glVertex4i_ARGS *args = (glVertex4i_ARGS *)&unpacked->args;
            printf("glVertex4i(%d, %d, %d, %d);\n", args->x, args->y, args->z, args->w);
            break;
        }
        case glVertex4iv_INDEX: {
            glVertex4iv_PACKED *unpacked = (glVertex4iv_PACKED *)packed;
            glVertex4iv_ARGS *args = (glVertex4iv_ARGS *)&unpacked->args;
            printf("glVertex4iv(%p);\n", args->v);
            break;
        }
        case glVertex4s_INDEX: {
            glVertex4s_PACKED *unpacked = (glVertex4s_PACKED *)packed;
            glVertex4s_ARGS *args = (glVertex4s_ARGS *)&unpacked->args;
            printf("glVertex4s(%d, %d, %d, %d);\n", args->x, args->y, args->z, args->w);
            break;
        }
        case glVertex4sv_INDEX: {
            glVertex4sv_PACKED *unpacked = (glVertex4sv_PACKED *)packed;
            glVertex4sv_ARGS *args = (glVertex4sv_ARGS *)&unpacked->args;
            printf("glVertex4sv(%p);\n", args->v);
            break;
        }
        case glVertexPointer_INDEX: {
            glVertexPointer_PACKED *unpacked = (glVertexPointer_PACKED *)packed;
            glVertexPointer_ARGS *args = (glVertexPointer_ARGS *)&unpacked->args;
            printf("glVertexPointer(%d, 0x%04X, %d, %p);\n", args->size, args->type, args->stride, args->pointer);
            break;
        }
        case glViewport_INDEX: {
            glViewport_PACKED *unpacked = (glViewport_PACKED *)packed;
            glViewport_ARGS *args = (glViewport_ARGS *)&unpacked->args;
            printf("glViewport(%d, %d, %d, %d);\n", args->x, args->y, args->width, args->height);
            break;
        }
        case glWindowPos2d_INDEX: {
            glWindowPos2d_PACKED *unpacked = (glWindowPos2d_PACKED *)packed;
            glWindowPos2d_ARGS *args = (glWindowPos2d_ARGS *)&unpacked->args;
            printf("glWindowPos2d(%0.2f, %0.2f);\n", args->x, args->y);
            break;
        }
        case glWindowPos2dv_INDEX: {
            glWindowPos2dv_PACKED *unpacked = (glWindowPos2dv_PACKED *)packed;
            glWindowPos2dv_ARGS *args = (glWindowPos2dv_ARGS *)&unpacked->args;
            printf("glWindowPos2dv(%p);\n", args->v);
            break;
        }
        case glWindowPos2f_INDEX: {
            glWindowPos2f_PACKED *unpacked = (glWindowPos2f_PACKED *)packed;
            glWindowPos2f_ARGS *args = (glWindowPos2f_ARGS *)&unpacked->args;
            printf("glWindowPos2f(%0.2f, %0.2f);\n", args->x, args->y);
            break;
        }
        case glWindowPos2fv_INDEX: {
            glWindowPos2fv_PACKED *unpacked = (glWindowPos2fv_PACKED *)packed;
            glWindowPos2fv_ARGS *args = (glWindowPos2fv_ARGS *)&unpacked->args;
            printf("glWindowPos2fv(%p);\n", args->v);
            break;
        }
        case glWindowPos2i_INDEX: {
            glWindowPos2i_PACKED *unpacked = (glWindowPos2i_PACKED *)packed;
            glWindowPos2i_ARGS *args = (glWindowPos2i_ARGS *)&unpacked->args;
            printf("glWindowPos2i(%d, %d);\n", args->x, args->y);
            break;
        }
        case glWindowPos2iv_INDEX: {
            glWindowPos2iv_PACKED *unpacked = (glWindowPos2iv_PACKED *)packed;
            glWindowPos2iv_ARGS *args = (glWindowPos2iv_ARGS *)&unpacked->args;
            printf("glWindowPos2iv(%p);\n", args->v);
            break;
        }
        case glWindowPos2s_INDEX: {
            glWindowPos2s_PACKED *unpacked = (glWindowPos2s_PACKED *)packed;
            glWindowPos2s_ARGS *args = (glWindowPos2s_ARGS *)&unpacked->args;
            printf("glWindowPos2s(%d, %d);\n", args->x, args->y);
            break;
        }
        case glWindowPos2sv_INDEX: {
            glWindowPos2sv_PACKED *unpacked = (glWindowPos2sv_PACKED *)packed;
            glWindowPos2sv_ARGS *args = (glWindowPos2sv_ARGS *)&unpacked->args;
            printf("glWindowPos2sv(%p);\n", args->v);
            break;
        }
        case glWindowPos3d_INDEX: {
            glWindowPos3d_PACKED *unpacked = (glWindowPos3d_PACKED *)packed;
            glWindowPos3d_ARGS *args = (glWindowPos3d_ARGS *)&unpacked->args;
            printf("glWindowPos3d(%0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z);
            break;
        }
        case glWindowPos3dv_INDEX: {
            glWindowPos3dv_PACKED *unpacked = (glWindowPos3dv_PACKED *)packed;
            glWindowPos3dv_ARGS *args = (glWindowPos3dv_ARGS *)&unpacked->args;
            printf("glWindowPos3dv(%p);\n", args->v);
            break;
        }
        case glWindowPos3f_INDEX: {
            glWindowPos3f_PACKED *unpacked = (glWindowPos3f_PACKED *)packed;
            glWindowPos3f_ARGS *args = (glWindowPos3f_ARGS *)&unpacked->args;
            printf("glWindowPos3f(%0.2f, %0.2f, %0.2f);\n", args->x, args->y, args->z);
            break;
        }
        case glWindowPos3fv_INDEX: {
            glWindowPos3fv_PACKED *unpacked = (glWindowPos3fv_PACKED *)packed;
            glWindowPos3fv_ARGS *args = (glWindowPos3fv_ARGS *)&unpacked->args;
            printf("glWindowPos3fv(%p);\n", args->v);
            break;
        }
        case glWindowPos3i_INDEX: {
            glWindowPos3i_PACKED *unpacked = (glWindowPos3i_PACKED *)packed;
            glWindowPos3i_ARGS *args = (glWindowPos3i_ARGS *)&unpacked->args;
            printf("glWindowPos3i(%d, %d, %d);\n", args->x, args->y, args->z);
            break;
        }
        case glWindowPos3iv_INDEX: {
            glWindowPos3iv_PACKED *unpacked = (glWindowPos3iv_PACKED *)packed;
            glWindowPos3iv_ARGS *args = (glWindowPos3iv_ARGS *)&unpacked->args;
            printf("glWindowPos3iv(%p);\n", args->v);
            break;
        }
        case glWindowPos3s_INDEX: {
            glWindowPos3s_PACKED *unpacked = (glWindowPos3s_PACKED *)packed;
            glWindowPos3s_ARGS *args = (glWindowPos3s_ARGS *)&unpacked->args;
            printf("glWindowPos3s(%d, %d, %d);\n", args->x, args->y, args->z);
            break;
        }
        case glWindowPos3sv_INDEX: {
            glWindowPos3sv_PACKED *unpacked = (glWindowPos3sv_PACKED *)packed;
            glWindowPos3sv_ARGS *args = (glWindowPos3sv_ARGS *)&unpacked->args;
            printf("glWindowPos3sv(%p);\n", args->v);
            break;
        }
        case glXChooseFBConfig_INDEX: {
            glXChooseFBConfig_PACKED *unpacked = (glXChooseFBConfig_PACKED *)packed;
            glXChooseFBConfig_ARGS *args = (glXChooseFBConfig_ARGS *)&unpacked->args;
            printf("glXChooseFBConfig(%p, %d, %p, %p);\n", args->dpy, args->screen, args->attrib_list, args->nelements);
            break;
        }
        case glXChooseVisual_INDEX: {
            glXChooseVisual_PACKED *unpacked = (glXChooseVisual_PACKED *)packed;
            glXChooseVisual_ARGS *args = (glXChooseVisual_ARGS *)&unpacked->args;
            printf("glXChooseVisual(%p, %d, %p);\n", args->dpy, args->screen, args->attribList);
            break;
        }
        case glXCopyContext_INDEX: {
            glXCopyContext_PACKED *unpacked = (glXCopyContext_PACKED *)packed;
            glXCopyContext_ARGS *args = (glXCopyContext_ARGS *)&unpacked->args;
            printf("glXCopyContext(%p, %p, %p, %lu);\n", args->dpy, args->src, args->dst, args->mask);
            break;
        }
        case glXCreateContext_INDEX: {
            glXCreateContext_PACKED *unpacked = (glXCreateContext_PACKED *)packed;
            glXCreateContext_ARGS *args = (glXCreateContext_ARGS *)&unpacked->args;
            printf("glXCreateContext(%p, %p, %p, %d);\n", args->dpy, args->vis, args->shareList, args->direct);
            break;
        }
        case glXCreateContextAttribsARB_INDEX: {
            glXCreateContextAttribsARB_PACKED *unpacked = (glXCreateContextAttribsARB_PACKED *)packed;
            glXCreateContextAttribsARB_ARGS *args = (glXCreateContextAttribsARB_ARGS *)&unpacked->args;
            printf("glXCreateContextAttribsARB(%p, %p, %p, %d, %p);\n", args->dpy, args->config, args->share_context, args->direct, args->attrib_list);
            break;
        }
        case glXCreateGLXPixmap_INDEX: {
            glXCreateGLXPixmap_PACKED *unpacked = (glXCreateGLXPixmap_PACKED *)packed;
            glXCreateGLXPixmap_ARGS *args = (glXCreateGLXPixmap_ARGS *)&unpacked->args;
            printf("glXCreateGLXPixmap(%p, %p, %lu);\n", args->dpy, args->visual, args->pixmap);
            break;
        }
        case glXCreateNewContext_INDEX: {
            glXCreateNewContext_PACKED *unpacked = (glXCreateNewContext_PACKED *)packed;
            glXCreateNewContext_ARGS *args = (glXCreateNewContext_ARGS *)&unpacked->args;
            printf("glXCreateNewContext(%p, %p, %d, %p, %d);\n", args->dpy, args->config, args->render_type, args->share_list, args->direct);
            break;
        }
        case glXCreateWindow_INDEX: {
            glXCreateWindow_PACKED *unpacked = (glXCreateWindow_PACKED *)packed;
            glXCreateWindow_ARGS *args = (glXCreateWindow_ARGS *)&unpacked->args;
            printf("glXCreateWindow(%p, %p, %lu, %p);\n", args->dpy, args->config, args->win, args->attrib_list);
            break;
        }
        case glXDestroyContext_INDEX: {
            glXDestroyContext_PACKED *unpacked = (glXDestroyContext_PACKED *)packed;
            glXDestroyContext_ARGS *args = (glXDestroyContext_ARGS *)&unpacked->args;
            printf("glXDestroyContext(%p, %p);\n", args->dpy, args->ctx);
            break;
        }
        case glXDestroyGLXPixmap_INDEX: {
            glXDestroyGLXPixmap_PACKED *unpacked = (glXDestroyGLXPixmap_PACKED *)packed;
            glXDestroyGLXPixmap_ARGS *args = (glXDestroyGLXPixmap_ARGS *)&unpacked->args;
            printf("glXDestroyGLXPixmap(%p, %p);\n", args->dpy, args->pixmap);
            break;
        }
        case glXDestroyWindow_INDEX: {
            glXDestroyWindow_PACKED *unpacked = (glXDestroyWindow_PACKED *)packed;
            glXDestroyWindow_ARGS *args = (glXDestroyWindow_ARGS *)&unpacked->args;
            printf("glXDestroyWindow(%p, %p);\n", args->dpy, args->win);
            break;
        }
        case glXGetClientString_INDEX: {
            glXGetClientString_PACKED *unpacked = (glXGetClientString_PACKED *)packed;
            glXGetClientString_ARGS *args = (glXGetClientString_ARGS *)&unpacked->args;
            printf("glXGetClientString(%p, %d);\n", args->display, args->name);
            break;
        }
        case glXGetConfig_INDEX: {
            glXGetConfig_PACKED *unpacked = (glXGetConfig_PACKED *)packed;
            glXGetConfig_ARGS *args = (glXGetConfig_ARGS *)&unpacked->args;
            printf("glXGetConfig(%p, %p, %d, %p);\n", args->display, args->visual, args->attribute, args->value);
            break;
        }
        case glXGetCurrentContext_INDEX: {
            printf("glXGetCurrentContext();\n");
            break;
        }
        case glXGetCurrentDisplay_INDEX: {
            printf("glXGetCurrentDisplay();\n");
            break;
        }
        case glXGetCurrentDrawable_INDEX: {
            printf("glXGetCurrentDrawable();\n");
            break;
        }
        case glXGetFBConfigAttrib_INDEX: {
            glXGetFBConfigAttrib_PACKED *unpacked = (glXGetFBConfigAttrib_PACKED *)packed;
            glXGetFBConfigAttrib_ARGS *args = (glXGetFBConfigAttrib_ARGS *)&unpacked->args;
            printf("glXGetFBConfigAttrib(%p, %p, %d, %p);\n", args->dpy, args->config, args->attribute, args->value);
            break;
        }
        case glXGetFBConfigs_INDEX: {
            glXGetFBConfigs_PACKED *unpacked = (glXGetFBConfigs_PACKED *)packed;
            glXGetFBConfigs_ARGS *args = (glXGetFBConfigs_ARGS *)&unpacked->args;
            printf("glXGetFBConfigs(%p, %d, %p);\n", args->dpy, args->screen, args->nelements);
            break;
        }
        case glXGetProcAddress_INDEX: {
            glXGetProcAddress_PACKED *unpacked = (glXGetProcAddress_PACKED *)packed;
            glXGetProcAddress_ARGS *args = (glXGetProcAddress_ARGS *)&unpacked->args;
            printf("glXGetProcAddress(%p);\n", args->procName);
            break;
        }
        case glXGetProcAddressARB_INDEX: {
            glXGetProcAddressARB_PACKED *unpacked = (glXGetProcAddressARB_PACKED *)packed;
            glXGetProcAddressARB_ARGS *args = (glXGetProcAddressARB_ARGS *)&unpacked->args;
            printf("glXGetProcAddressARB(%p);\n", args->procName);
            break;
        }
        case glXGetVisualFromFBConfig_INDEX: {
            glXGetVisualFromFBConfig_PACKED *unpacked = (glXGetVisualFromFBConfig_PACKED *)packed;
            glXGetVisualFromFBConfig_ARGS *args = (glXGetVisualFromFBConfig_ARGS *)&unpacked->args;
            printf("glXGetVisualFromFBConfig(%p, %p);\n", args->dpy, args->config);
            break;
        }
        case glXIsDirect_INDEX: {
            glXIsDirect_PACKED *unpacked = (glXIsDirect_PACKED *)packed;
            glXIsDirect_ARGS *args = (glXIsDirect_ARGS *)&unpacked->args;
            printf("glXIsDirect(%p, %p);\n", args->dpy, args->ctx);
            break;
        }
        case glXMakeContextCurrent_INDEX: {
            glXMakeContextCurrent_PACKED *unpacked = (glXMakeContextCurrent_PACKED *)packed;
            glXMakeContextCurrent_ARGS *args = (glXMakeContextCurrent_ARGS *)&unpacked->args;
            printf("glXMakeContextCurrent(%p, %d, %d, %p);\n", args->dpy, args->draw, args->read, args->ctx);
            break;
        }
        case glXMakeCurrent_INDEX: {
            glXMakeCurrent_PACKED *unpacked = (glXMakeCurrent_PACKED *)packed;
            glXMakeCurrent_ARGS *args = (glXMakeCurrent_ARGS *)&unpacked->args;
            printf("glXMakeCurrent(%p, %d, %p);\n", args->dpy, args->drawable, args->ctx);
            break;
        }
        case glXQueryExtension_INDEX: {
            glXQueryExtension_PACKED *unpacked = (glXQueryExtension_PACKED *)packed;
            glXQueryExtension_ARGS *args = (glXQueryExtension_ARGS *)&unpacked->args;
            printf("glXQueryExtension(%p, %p, %p);\n", args->display, args->errorBase, args->eventBase);
            break;
        }
        case glXQueryExtensionsString_INDEX: {
            glXQueryExtensionsString_PACKED *unpacked = (glXQueryExtensionsString_PACKED *)packed;
            glXQueryExtensionsString_ARGS *args = (glXQueryExtensionsString_ARGS *)&unpacked->args;
            printf("glXQueryExtensionsString(%p, %d);\n", args->dpy, args->screen);
            break;
        }
        case glXQueryServerString_INDEX: {
            glXQueryServerString_PACKED *unpacked = (glXQueryServerString_PACKED *)packed;
            glXQueryServerString_ARGS *args = (glXQueryServerString_ARGS *)&unpacked->args;
            printf("glXQueryServerString(%p, %d, %d);\n", args->dpy, args->screen, args->name);
            break;
        }
        case glXQueryVersion_INDEX: {
            glXQueryVersion_PACKED *unpacked = (glXQueryVersion_PACKED *)packed;
            glXQueryVersion_ARGS *args = (glXQueryVersion_ARGS *)&unpacked->args;
            printf("glXQueryVersion(%p, %p, %p);\n", args->dpy, args->maj, args->min);
            break;
        }
        case glXReleaseBuffersMESA_INDEX: {
            glXReleaseBuffersMESA_PACKED *unpacked = (glXReleaseBuffersMESA_PACKED *)packed;
            glXReleaseBuffersMESA_ARGS *args = (glXReleaseBuffersMESA_ARGS *)&unpacked->args;
            printf("glXReleaseBuffersMESA(%p, %d);\n", args->dpy, args->drawable);
            break;
        }
        case glXSwapBuffers_INDEX: {
            glXSwapBuffers_PACKED *unpacked = (glXSwapBuffers_PACKED *)packed;
            glXSwapBuffers_ARGS *args = (glXSwapBuffers_ARGS *)&unpacked->args;
            printf("glXSwapBuffers(%p, %d);\n", args->dpy, args->drawable);
            break;
        }
        case glXSwapIntervalEXT_INDEX: {
            glXSwapIntervalEXT_PACKED *unpacked = (glXSwapIntervalEXT_PACKED *)packed;
            glXSwapIntervalEXT_ARGS *args = (glXSwapIntervalEXT_ARGS *)&unpacked->args;
            printf("glXSwapIntervalEXT(%p, %d, %d);\n", args->dpy, args->drawable, args->interval);
            break;
        }
        case glXSwapIntervalMESA_INDEX: {
            glXSwapIntervalMESA_PACKED *unpacked = (glXSwapIntervalMESA_PACKED *)packed;
            glXSwapIntervalMESA_ARGS *args = (glXSwapIntervalMESA_ARGS *)&unpacked->args;
            printf("glXSwapIntervalMESA(%u);\n", args->interval);
            break;
        }
        case glXSwapIntervalSGI_INDEX: {
            glXSwapIntervalSGI_PACKED *unpacked = (glXSwapIntervalSGI_PACKED *)packed;
            glXSwapIntervalSGI_ARGS *args = (glXSwapIntervalSGI_ARGS *)&unpacked->args;
            printf("glXSwapIntervalSGI(%d);\n", args->interval);
            break;
        }
        case glXUseXFont_INDEX: {
            glXUseXFont_PACKED *unpacked = (glXUseXFont_PACKED *)packed;
            glXUseXFont_ARGS *args = (glXUseXFont_ARGS *)&unpacked->args;
            printf("glXUseXFont(%lu, %d, %d, %d);\n", args->font, args->first, args->count, args->listBase);
            break;
        }
        case glXWaitGL_INDEX: {
            printf("glXWaitGL();\n");
            break;
        }
        case glXWaitX_INDEX: {
            printf("glXWaitX();\n");
            break;
        }
        default:
            fprintf(stderr, "warning: glIndexedPrint with unknown index %d\n", packed->index);
            break;
    }
}

const int INDEX_RET_SIZE[] = {
    0,
    [glActiveTexture_INDEX] =     0,
    [glActiveTextureARB_INDEX] =     0,
    [glAlphaFunc_INDEX] =     0,
    [glAreTexturesResident_INDEX] =     sizeof(GLboolean),
    [glArrayElement_INDEX] =     0,
    [glBegin_INDEX] =     0,
    [glBindBuffer_INDEX] =     0,
    [glBindTexture_INDEX] =     0,
    [glBitmap_INDEX] =     0,
    [glBlendColor_INDEX] =     0,
    [glBlendEquation_INDEX] =     0,
    [glBlendEquationSeparate_INDEX] =     0,
    [glBlendEquationSeparatei_INDEX] =     0,
    [glBlendFunc_INDEX] =     0,
    [glBlendFuncSeparate_INDEX] =     0,
    [glBlendFuncSeparatei_INDEX] =     0,
    [glBufferData_INDEX] =     0,
    [glBufferSubData_INDEX] =     0,
    [glCallList_INDEX] =     0,
    [glCallLists_INDEX] =     0,
    [glClear_INDEX] =     0,
    [glClearAccum_INDEX] =     0,
    [glClearColor_INDEX] =     0,
    [glClearDepth_INDEX] =     0,
    [glClearDepthf_INDEX] =     0,
    [glClearDepthfOES_INDEX] =     0,
    [glClearStencil_INDEX] =     0,
    [glClientActiveTexture_INDEX] =     0,
    [glClientActiveTextureARB_INDEX] =     0,
    [glClipPlane_INDEX] =     0,
    [glClipPlanefOES_INDEX] =     0,
    [glColor3b_INDEX] =     0,
    [glColor3bv_INDEX] =     0,
    [glColor3d_INDEX] =     0,
    [glColor3dv_INDEX] =     0,
    [glColor3f_INDEX] =     0,
    [glColor3fv_INDEX] =     0,
    [glColor3i_INDEX] =     0,
    [glColor3iv_INDEX] =     0,
    [glColor3s_INDEX] =     0,
    [glColor3sv_INDEX] =     0,
    [glColor3ub_INDEX] =     0,
    [glColor3ubv_INDEX] =     0,
    [glColor3ui_INDEX] =     0,
    [glColor3uiv_INDEX] =     0,
    [glColor3us_INDEX] =     0,
    [glColor3usv_INDEX] =     0,
    [glColor4b_INDEX] =     0,
    [glColor4bv_INDEX] =     0,
    [glColor4d_INDEX] =     0,
    [glColor4dv_INDEX] =     0,
    [glColor4f_INDEX] =     0,
    [glColor4fv_INDEX] =     0,
    [glColor4i_INDEX] =     0,
    [glColor4iv_INDEX] =     0,
    [glColor4s_INDEX] =     0,
    [glColor4sv_INDEX] =     0,
    [glColor4ub_INDEX] =     0,
    [glColor4ubv_INDEX] =     0,
    [glColor4ui_INDEX] =     0,
    [glColor4uiv_INDEX] =     0,
    [glColor4us_INDEX] =     0,
    [glColor4usv_INDEX] =     0,
    [glColorMask_INDEX] =     0,
    [glColorMaterial_INDEX] =     0,
    [glColorPointer_INDEX] =     0,
    [glCompressedTexImage2D_INDEX] =     0,
    [glCompressedTexSubImage2D_INDEX] =     0,
    [glCopyPixels_INDEX] =     0,
    [glCopyTexImage2D_INDEX] =     0,
    [glCopyTexSubImage2D_INDEX] =     0,
    [glCullFace_INDEX] =     0,
    [glDeleteBuffers_INDEX] =     0,
    [glDeleteLists_INDEX] =     0,
    [glDeleteTextures_INDEX] =     0,
    [glDepthFunc_INDEX] =     0,
    [glDepthMask_INDEX] =     0,
    [glDepthRange_INDEX] =     0,
    [glDepthRangef_INDEX] =     0,
    [glDepthRangefOES_INDEX] =     0,
    [glDisable_INDEX] =     0,
    [glDisableClientState_INDEX] =     0,
    [glDrawArrays_INDEX] =     0,
    [glDrawBuffer_INDEX] =     0,
    [glDrawElements_INDEX] =     0,
    [glDrawPixels_INDEX] =     0,
    [glDrawRangeElements_INDEX] =     0,
    [glEdgeFlag_INDEX] =     0,
    [glEnable_INDEX] =     0,
    [glEnableClientState_INDEX] =     0,
    [glEnd_INDEX] =     0,
    [glEndList_INDEX] =     0,
    [glEvalCoord1d_INDEX] =     0,
    [glEvalCoord1dv_INDEX] =     0,
    [glEvalCoord1f_INDEX] =     0,
    [glEvalCoord1fv_INDEX] =     0,
    [glEvalCoord2d_INDEX] =     0,
    [glEvalCoord2dv_INDEX] =     0,
    [glEvalCoord2f_INDEX] =     0,
    [glEvalCoord2fv_INDEX] =     0,
    [glEvalMesh1_INDEX] =     0,
    [glEvalMesh2_INDEX] =     0,
    [glEvalPoint1_INDEX] =     0,
    [glEvalPoint2_INDEX] =     0,
    [glFeedbackBuffer_INDEX] =     0,
    [glFinish_INDEX] =     0,
    [glFlush_INDEX] =     0,
    [glFogCoordd_INDEX] =     0,
    [glFogCoorddv_INDEX] =     0,
    [glFogCoordf_INDEX] =     0,
    [glFogCoordfv_INDEX] =     0,
    [glFogf_INDEX] =     0,
    [glFogfv_INDEX] =     0,
    [glFogi_INDEX] =     0,
    [glFogiv_INDEX] =     0,
    [glFrontFace_INDEX] =     0,
    [glFrustum_INDEX] =     0,
    [glFrustumfOES_INDEX] =     0,
    [glGenBuffers_INDEX] =     0,
    [glGenLists_INDEX] =     sizeof(GLuint),
    [glGenTextures_INDEX] =     0,
    [glGetBooleanv_INDEX] =     0,
    [glGetBufferParameteriv_INDEX] =     0,
    [glGetClipPlanefOES_INDEX] =     0,
    [glGetDoublev_INDEX] =     0,
    [glGetError_INDEX] =     sizeof(GLenum),
    [glGetFloatv_INDEX] =     0,
    [glGetIntegerv_INDEX] =     0,
    [glGetLightfv_INDEX] =     0,
    [glGetMapdv_INDEX] =     0,
    [glGetMapfv_INDEX] =     0,
    [glGetMapiv_INDEX] =     0,
    [glGetMaterialfv_INDEX] =     0,
    [glGetMaterialiv_INDEX] =     0,
    [glGetPointerv_INDEX] =     0,
    [glGetString_INDEX] =     sizeof(const GLubyte *),
    [glGetTexEnvfv_INDEX] =     0,
    [glGetTexEnviv_INDEX] =     0,
    [glGetTexImage_INDEX] =     0,
    [glGetTexLevelParameterfv_INDEX] =     0,
    [glGetTexLevelParameteriv_INDEX] =     0,
    [glGetTexParameterfv_INDEX] =     0,
    [glGetTexParameteriv_INDEX] =     0,
    [glHint_INDEX] =     0,
    [glIndexd_INDEX] =     0,
    [glIndexdv_INDEX] =     0,
    [glIndexf_INDEX] =     0,
    [glIndexfv_INDEX] =     0,
    [glIndexi_INDEX] =     0,
    [glIndexiv_INDEX] =     0,
    [glIndexs_INDEX] =     0,
    [glIndexsv_INDEX] =     0,
    [glIndexub_INDEX] =     0,
    [glIndexubv_INDEX] =     0,
    [glInitNames_INDEX] =     0,
    [glInterleavedArrays_INDEX] =     0,
    [glIsBuffer_INDEX] =     sizeof(GLboolean),
    [glIsEnabled_INDEX] =     sizeof(GLboolean),
    [glIsList_INDEX] =     sizeof(GLboolean),
    [glIsTexture_INDEX] =     sizeof(GLboolean),
    [glLightModelf_INDEX] =     0,
    [glLightModelfv_INDEX] =     0,
    [glLightModeli_INDEX] =     0,
    [glLightModeliv_INDEX] =     0,
    [glLightf_INDEX] =     0,
    [glLightfv_INDEX] =     0,
    [glLighti_INDEX] =     0,
    [glLightiv_INDEX] =     0,
    [glLineStipple_INDEX] =     0,
    [glLineWidth_INDEX] =     0,
    [glListBase_INDEX] =     0,
    [glLoadIdentity_INDEX] =     0,
    [glLoadMatrixd_INDEX] =     0,
    [glLoadMatrixf_INDEX] =     0,
    [glLoadName_INDEX] =     0,
    [glLoadTransposeMatrixd_INDEX] =     0,
    [glLoadTransposeMatrixf_INDEX] =     0,
    [glLockArraysEXT_INDEX] =     0,
    [glLogicOp_INDEX] =     0,
    [glMap1d_INDEX] =     0,
    [glMap1f_INDEX] =     0,
    [glMap2d_INDEX] =     0,
    [glMap2f_INDEX] =     0,
    [glMapGrid1d_INDEX] =     0,
    [glMapGrid1f_INDEX] =     0,
    [glMapGrid2d_INDEX] =     0,
    [glMapGrid2f_INDEX] =     0,
    [glMaterialf_INDEX] =     0,
    [glMaterialfv_INDEX] =     0,
    [glMateriali_INDEX] =     0,
    [glMaterialiv_INDEX] =     0,
    [glMatrixMode_INDEX] =     0,
    [glMultMatrixd_INDEX] =     0,
    [glMultMatrixf_INDEX] =     0,
    [glMultTransposeMatrixd_INDEX] =     0,
    [glMultTransposeMatrixf_INDEX] =     0,
    [glMultiTexCoord1d_INDEX] =     0,
    [glMultiTexCoord1dv_INDEX] =     0,
    [glMultiTexCoord1f_INDEX] =     0,
    [glMultiTexCoord1fv_INDEX] =     0,
    [glMultiTexCoord1i_INDEX] =     0,
    [glMultiTexCoord1iv_INDEX] =     0,
    [glMultiTexCoord1s_INDEX] =     0,
    [glMultiTexCoord1sv_INDEX] =     0,
    [glMultiTexCoord2d_INDEX] =     0,
    [glMultiTexCoord2dv_INDEX] =     0,
    [glMultiTexCoord2f_INDEX] =     0,
    [glMultiTexCoord2fARB_INDEX] =     0,
    [glMultiTexCoord2fv_INDEX] =     0,
    [glMultiTexCoord2fvARB_INDEX] =     0,
    [glMultiTexCoord2i_INDEX] =     0,
    [glMultiTexCoord2iv_INDEX] =     0,
    [glMultiTexCoord2s_INDEX] =     0,
    [glMultiTexCoord2sv_INDEX] =     0,
    [glMultiTexCoord3d_INDEX] =     0,
    [glMultiTexCoord3dv_INDEX] =     0,
    [glMultiTexCoord3f_INDEX] =     0,
    [glMultiTexCoord3fv_INDEX] =     0,
    [glMultiTexCoord3i_INDEX] =     0,
    [glMultiTexCoord3iv_INDEX] =     0,
    [glMultiTexCoord3s_INDEX] =     0,
    [glMultiTexCoord3sv_INDEX] =     0,
    [glMultiTexCoord4d_INDEX] =     0,
    [glMultiTexCoord4dv_INDEX] =     0,
    [glMultiTexCoord4f_INDEX] =     0,
    [glMultiTexCoord4fARB_INDEX] =     0,
    [glMultiTexCoord4fv_INDEX] =     0,
    [glMultiTexCoord4fvARB_INDEX] =     0,
    [glMultiTexCoord4i_INDEX] =     0,
    [glMultiTexCoord4iv_INDEX] =     0,
    [glMultiTexCoord4s_INDEX] =     0,
    [glMultiTexCoord4sv_INDEX] =     0,
    [glNewList_INDEX] =     0,
    [glNormal3b_INDEX] =     0,
    [glNormal3bv_INDEX] =     0,
    [glNormal3d_INDEX] =     0,
    [glNormal3dv_INDEX] =     0,
    [glNormal3f_INDEX] =     0,
    [glNormal3fv_INDEX] =     0,
    [glNormal3i_INDEX] =     0,
    [glNormal3iv_INDEX] =     0,
    [glNormal3s_INDEX] =     0,
    [glNormal3sv_INDEX] =     0,
    [glNormalPointer_INDEX] =     0,
    [glOrtho_INDEX] =     0,
    [glOrthofOES_INDEX] =     0,
    [glPassThrough_INDEX] =     0,
    [glPixelStorei_INDEX] =     0,
    [glPixelTransferf_INDEX] =     0,
    [glPixelTransferi_INDEX] =     0,
    [glPixelZoom_INDEX] =     0,
    [glPointParameterf_INDEX] =     0,
    [glPointParameterfv_INDEX] =     0,
    [glPointSize_INDEX] =     0,
    [glPolygonMode_INDEX] =     0,
    [glPolygonOffset_INDEX] =     0,
    [glPolygonStipple_INDEX] =     0,
    [glPopAttrib_INDEX] =     0,
    [glPopClientAttrib_INDEX] =     0,
    [glPopMatrix_INDEX] =     0,
    [glPopName_INDEX] =     0,
    [glPrioritizeTextures_INDEX] =     0,
    [glPushAttrib_INDEX] =     0,
    [glPushClientAttrib_INDEX] =     0,
    [glPushMatrix_INDEX] =     0,
    [glPushName_INDEX] =     0,
    [glRasterPos2d_INDEX] =     0,
    [glRasterPos2dv_INDEX] =     0,
    [glRasterPos2f_INDEX] =     0,
    [glRasterPos2fv_INDEX] =     0,
    [glRasterPos2i_INDEX] =     0,
    [glRasterPos2iv_INDEX] =     0,
    [glRasterPos2s_INDEX] =     0,
    [glRasterPos2sv_INDEX] =     0,
    [glRasterPos3d_INDEX] =     0,
    [glRasterPos3dv_INDEX] =     0,
    [glRasterPos3f_INDEX] =     0,
    [glRasterPos3fv_INDEX] =     0,
    [glRasterPos3i_INDEX] =     0,
    [glRasterPos3iv_INDEX] =     0,
    [glRasterPos3s_INDEX] =     0,
    [glRasterPos3sv_INDEX] =     0,
    [glRasterPos4d_INDEX] =     0,
    [glRasterPos4dv_INDEX] =     0,
    [glRasterPos4f_INDEX] =     0,
    [glRasterPos4fv_INDEX] =     0,
    [glRasterPos4i_INDEX] =     0,
    [glRasterPos4iv_INDEX] =     0,
    [glRasterPos4s_INDEX] =     0,
    [glRasterPos4sv_INDEX] =     0,
    [glReadBuffer_INDEX] =     0,
    [glReadPixels_INDEX] =     0,
    [glRectd_INDEX] =     0,
    [glRectdv_INDEX] =     0,
    [glRectf_INDEX] =     0,
    [glRectfv_INDEX] =     0,
    [glRecti_INDEX] =     0,
    [glRectiv_INDEX] =     0,
    [glRects_INDEX] =     0,
    [glRectsv_INDEX] =     0,
    [glRenderMode_INDEX] =     sizeof(GLint),
    [glRotated_INDEX] =     0,
    [glRotatef_INDEX] =     0,
    [glSampleCoverage_INDEX] =     0,
    [glScaled_INDEX] =     0,
    [glScalef_INDEX] =     0,
    [glScissor_INDEX] =     0,
    [glSecondaryColor3b_INDEX] =     0,
    [glSecondaryColor3bv_INDEX] =     0,
    [glSecondaryColor3d_INDEX] =     0,
    [glSecondaryColor3dv_INDEX] =     0,
    [glSecondaryColor3f_INDEX] =     0,
    [glSecondaryColor3fv_INDEX] =     0,
    [glSecondaryColor3i_INDEX] =     0,
    [glSecondaryColor3iv_INDEX] =     0,
    [glSecondaryColor3s_INDEX] =     0,
    [glSecondaryColor3sv_INDEX] =     0,
    [glSecondaryColor3ub_INDEX] =     0,
    [glSecondaryColor3ubv_INDEX] =     0,
    [glSecondaryColor3ui_INDEX] =     0,
    [glSecondaryColor3uiv_INDEX] =     0,
    [glSecondaryColor3us_INDEX] =     0,
    [glSecondaryColor3usv_INDEX] =     0,
    [glSelectBuffer_INDEX] =     0,
    [glShadeModel_INDEX] =     0,
    [glStencilFunc_INDEX] =     0,
    [glStencilMask_INDEX] =     0,
    [glStencilOp_INDEX] =     0,
    [glTexCoord1d_INDEX] =     0,
    [glTexCoord1dv_INDEX] =     0,
    [glTexCoord1f_INDEX] =     0,
    [glTexCoord1fv_INDEX] =     0,
    [glTexCoord1i_INDEX] =     0,
    [glTexCoord1iv_INDEX] =     0,
    [glTexCoord1s_INDEX] =     0,
    [glTexCoord1sv_INDEX] =     0,
    [glTexCoord2d_INDEX] =     0,
    [glTexCoord2dv_INDEX] =     0,
    [glTexCoord2f_INDEX] =     0,
    [glTexCoord2fv_INDEX] =     0,
    [glTexCoord2i_INDEX] =     0,
    [glTexCoord2iv_INDEX] =     0,
    [glTexCoord2s_INDEX] =     0,
    [glTexCoord2sv_INDEX] =     0,
    [glTexCoord3d_INDEX] =     0,
    [glTexCoord3dv_INDEX] =     0,
    [glTexCoord3f_INDEX] =     0,
    [glTexCoord3fv_INDEX] =     0,
    [glTexCoord3i_INDEX] =     0,
    [glTexCoord3iv_INDEX] =     0,
    [glTexCoord3s_INDEX] =     0,
    [glTexCoord3sv_INDEX] =     0,
    [glTexCoord4d_INDEX] =     0,
    [glTexCoord4dv_INDEX] =     0,
    [glTexCoord4f_INDEX] =     0,
    [glTexCoord4fv_INDEX] =     0,
    [glTexCoord4i_INDEX] =     0,
    [glTexCoord4iv_INDEX] =     0,
    [glTexCoord4s_INDEX] =     0,
    [glTexCoord4sv_INDEX] =     0,
    [glTexCoordPointer_INDEX] =     0,
    [glTexEnvf_INDEX] =     0,
    [glTexEnvfv_INDEX] =     0,
    [glTexEnvi_INDEX] =     0,
    [glTexEnviv_INDEX] =     0,
    [glTexGend_INDEX] =     0,
    [glTexGendv_INDEX] =     0,
    [glTexGenf_INDEX] =     0,
    [glTexGenfv_INDEX] =     0,
    [glTexGeni_INDEX] =     0,
    [glTexGeniv_INDEX] =     0,
    [glTexImage1D_INDEX] =     0,
    [glTexImage2D_INDEX] =     0,
    [glTexImage3D_INDEX] =     0,
    [glTexParameterf_INDEX] =     0,
    [glTexParameterfv_INDEX] =     0,
    [glTexParameteri_INDEX] =     0,
    [glTexParameteriv_INDEX] =     0,
    [glTexSubImage1D_INDEX] =     0,
    [glTexSubImage2D_INDEX] =     0,
    [glTexSubImage3D_INDEX] =     0,
    [glTranslated_INDEX] =     0,
    [glTranslatef_INDEX] =     0,
    [glUnlockArraysEXT_INDEX] =     0,
    [glVertex2d_INDEX] =     0,
    [glVertex2dv_INDEX] =     0,
    [glVertex2f_INDEX] =     0,
    [glVertex2fv_INDEX] =     0,
    [glVertex2i_INDEX] =     0,
    [glVertex2iv_INDEX] =     0,
    [glVertex2s_INDEX] =     0,
    [glVertex2sv_INDEX] =     0,
    [glVertex3d_INDEX] =     0,
    [glVertex3dv_INDEX] =     0,
    [glVertex3f_INDEX] =     0,
    [glVertex3fv_INDEX] =     0,
    [glVertex3i_INDEX] =     0,
    [glVertex3iv_INDEX] =     0,
    [glVertex3s_INDEX] =     0,
    [glVertex3sv_INDEX] =     0,
    [glVertex4d_INDEX] =     0,
    [glVertex4dv_INDEX] =     0,
    [glVertex4f_INDEX] =     0,
    [glVertex4fv_INDEX] =     0,
    [glVertex4i_INDEX] =     0,
    [glVertex4iv_INDEX] =     0,
    [glVertex4s_INDEX] =     0,
    [glVertex4sv_INDEX] =     0,
    [glVertexPointer_INDEX] =     0,
    [glViewport_INDEX] =     0,
    [glWindowPos2d_INDEX] =     0,
    [glWindowPos2dv_INDEX] =     0,
    [glWindowPos2f_INDEX] =     0,
    [glWindowPos2fv_INDEX] =     0,
    [glWindowPos2i_INDEX] =     0,
    [glWindowPos2iv_INDEX] =     0,
    [glWindowPos2s_INDEX] =     0,
    [glWindowPos2sv_INDEX] =     0,
    [glWindowPos3d_INDEX] =     0,
    [glWindowPos3dv_INDEX] =     0,
    [glWindowPos3f_INDEX] =     0,
    [glWindowPos3fv_INDEX] =     0,
    [glWindowPos3i_INDEX] =     0,
    [glWindowPos3iv_INDEX] =     0,
    [glWindowPos3s_INDEX] =     0,
    [glWindowPos3sv_INDEX] =     0,
    [glXChooseFBConfig_INDEX] =     sizeof(GLXFBConfig *),
    [glXChooseVisual_INDEX] =     sizeof(XVisualInfo *),
    [glXCopyContext_INDEX] =     0,
    [glXCreateContext_INDEX] =     sizeof(GLXContext),
    [glXCreateContextAttribsARB_INDEX] =     sizeof(GLXContext),
    [glXCreateGLXPixmap_INDEX] =     sizeof(GLXPixmap),
    [glXCreateNewContext_INDEX] =     sizeof(GLXContext),
    [glXCreateWindow_INDEX] =     sizeof(GLXWindow),
    [glXDestroyContext_INDEX] =     0,
    [glXDestroyGLXPixmap_INDEX] =     0,
    [glXDestroyWindow_INDEX] =     0,
    [glXGetClientString_INDEX] =     sizeof(const char *),
    [glXGetConfig_INDEX] =     sizeof(int),
    [glXGetCurrentContext_INDEX] =     sizeof(GLXContext),
    [glXGetCurrentDisplay_INDEX] =     sizeof(Display *),
    [glXGetCurrentDrawable_INDEX] =     sizeof(GLXDrawable),
    [glXGetFBConfigAttrib_INDEX] =     sizeof(int),
    [glXGetFBConfigs_INDEX] =     sizeof(GLXFBConfig *),
    [glXGetProcAddress_INDEX] =     sizeof(__GLXextFuncPtr),
    [glXGetProcAddressARB_INDEX] =     sizeof(__GLXextFuncPtr),
    [glXGetVisualFromFBConfig_INDEX] =     sizeof(XVisualInfo *),
    [glXIsDirect_INDEX] =     sizeof(Bool),
    [glXMakeContextCurrent_INDEX] =     sizeof(Bool),
    [glXMakeCurrent_INDEX] =     sizeof(Bool),
    [glXQueryExtension_INDEX] =     sizeof(Bool),
    [glXQueryExtensionsString_INDEX] =     sizeof(const char *),
    [glXQueryServerString_INDEX] =     sizeof(const char *),
    [glXQueryVersion_INDEX] =     sizeof(Bool),
    [glXReleaseBuffersMESA_INDEX] =     sizeof(Bool),
    [glXSwapBuffers_INDEX] =     0,
    [glXSwapIntervalEXT_INDEX] =     0,
    [glXSwapIntervalMESA_INDEX] =     sizeof(int),
    [glXSwapIntervalSGI_INDEX] =     sizeof(int),
    [glXUseXFont_INDEX] =     0,
    [glXWaitGL_INDEX] =     0,
    [glXWaitX_INDEX] =     0,
};

const int INDEX_PACKED_SIZE[] = {
    0,
    [glActiveTexture_INDEX] = sizeof(glActiveTexture_PACKED),
    [glActiveTextureARB_INDEX] = sizeof(glActiveTextureARB_PACKED),
    [glAlphaFunc_INDEX] = sizeof(glAlphaFunc_PACKED),
    [glAreTexturesResident_INDEX] = sizeof(glAreTexturesResident_PACKED),
    [glArrayElement_INDEX] = sizeof(glArrayElement_PACKED),
    [glBegin_INDEX] = sizeof(glBegin_PACKED),
    [glBindBuffer_INDEX] = sizeof(glBindBuffer_PACKED),
    [glBindTexture_INDEX] = sizeof(glBindTexture_PACKED),
    [glBitmap_INDEX] = sizeof(glBitmap_PACKED),
    [glBlendColor_INDEX] = sizeof(glBlendColor_PACKED),
    [glBlendEquation_INDEX] = sizeof(glBlendEquation_PACKED),
    [glBlendEquationSeparate_INDEX] = sizeof(glBlendEquationSeparate_PACKED),
    [glBlendEquationSeparatei_INDEX] = sizeof(glBlendEquationSeparatei_PACKED),
    [glBlendFunc_INDEX] = sizeof(glBlendFunc_PACKED),
    [glBlendFuncSeparate_INDEX] = sizeof(glBlendFuncSeparate_PACKED),
    [glBlendFuncSeparatei_INDEX] = sizeof(glBlendFuncSeparatei_PACKED),
    [glBufferData_INDEX] = sizeof(glBufferData_PACKED),
    [glBufferSubData_INDEX] = sizeof(glBufferSubData_PACKED),
    [glCallList_INDEX] = sizeof(glCallList_PACKED),
    [glCallLists_INDEX] = sizeof(glCallLists_PACKED),
    [glClear_INDEX] = sizeof(glClear_PACKED),
    [glClearAccum_INDEX] = sizeof(glClearAccum_PACKED),
    [glClearColor_INDEX] = sizeof(glClearColor_PACKED),
    [glClearDepth_INDEX] = sizeof(glClearDepth_PACKED),
    [glClearDepthf_INDEX] = sizeof(glClearDepthf_PACKED),
    [glClearDepthfOES_INDEX] = sizeof(glClearDepthfOES_PACKED),
    [glClearStencil_INDEX] = sizeof(glClearStencil_PACKED),
    [glClientActiveTexture_INDEX] = sizeof(glClientActiveTexture_PACKED),
    [glClientActiveTextureARB_INDEX] = sizeof(glClientActiveTextureARB_PACKED),
    [glClipPlane_INDEX] = sizeof(glClipPlane_PACKED),
    [glClipPlanefOES_INDEX] = sizeof(glClipPlanefOES_PACKED),
    [glColor3b_INDEX] = sizeof(glColor3b_PACKED),
    [glColor3bv_INDEX] = sizeof(glColor3bv_PACKED),
    [glColor3d_INDEX] = sizeof(glColor3d_PACKED),
    [glColor3dv_INDEX] = sizeof(glColor3dv_PACKED),
    [glColor3f_INDEX] = sizeof(glColor3f_PACKED),
    [glColor3fv_INDEX] = sizeof(glColor3fv_PACKED),
    [glColor3i_INDEX] = sizeof(glColor3i_PACKED),
    [glColor3iv_INDEX] = sizeof(glColor3iv_PACKED),
    [glColor3s_INDEX] = sizeof(glColor3s_PACKED),
    [glColor3sv_INDEX] = sizeof(glColor3sv_PACKED),
    [glColor3ub_INDEX] = sizeof(glColor3ub_PACKED),
    [glColor3ubv_INDEX] = sizeof(glColor3ubv_PACKED),
    [glColor3ui_INDEX] = sizeof(glColor3ui_PACKED),
    [glColor3uiv_INDEX] = sizeof(glColor3uiv_PACKED),
    [glColor3us_INDEX] = sizeof(glColor3us_PACKED),
    [glColor3usv_INDEX] = sizeof(glColor3usv_PACKED),
    [glColor4b_INDEX] = sizeof(glColor4b_PACKED),
    [glColor4bv_INDEX] = sizeof(glColor4bv_PACKED),
    [glColor4d_INDEX] = sizeof(glColor4d_PACKED),
    [glColor4dv_INDEX] = sizeof(glColor4dv_PACKED),
    [glColor4f_INDEX] = sizeof(glColor4f_PACKED),
    [glColor4fv_INDEX] = sizeof(glColor4fv_PACKED),
    [glColor4i_INDEX] = sizeof(glColor4i_PACKED),
    [glColor4iv_INDEX] = sizeof(glColor4iv_PACKED),
    [glColor4s_INDEX] = sizeof(glColor4s_PACKED),
    [glColor4sv_INDEX] = sizeof(glColor4sv_PACKED),
    [glColor4ub_INDEX] = sizeof(glColor4ub_PACKED),
    [glColor4ubv_INDEX] = sizeof(glColor4ubv_PACKED),
    [glColor4ui_INDEX] = sizeof(glColor4ui_PACKED),
    [glColor4uiv_INDEX] = sizeof(glColor4uiv_PACKED),
    [glColor4us_INDEX] = sizeof(glColor4us_PACKED),
    [glColor4usv_INDEX] = sizeof(glColor4usv_PACKED),
    [glColorMask_INDEX] = sizeof(glColorMask_PACKED),
    [glColorMaterial_INDEX] = sizeof(glColorMaterial_PACKED),
    [glColorPointer_INDEX] = sizeof(glColorPointer_PACKED),
    [glCompressedTexImage2D_INDEX] = sizeof(glCompressedTexImage2D_PACKED),
    [glCompressedTexSubImage2D_INDEX] = sizeof(glCompressedTexSubImage2D_PACKED),
    [glCopyPixels_INDEX] = sizeof(glCopyPixels_PACKED),
    [glCopyTexImage2D_INDEX] = sizeof(glCopyTexImage2D_PACKED),
    [glCopyTexSubImage2D_INDEX] = sizeof(glCopyTexSubImage2D_PACKED),
    [glCullFace_INDEX] = sizeof(glCullFace_PACKED),
    [glDeleteBuffers_INDEX] = sizeof(glDeleteBuffers_PACKED),
    [glDeleteLists_INDEX] = sizeof(glDeleteLists_PACKED),
    [glDeleteTextures_INDEX] = sizeof(glDeleteTextures_PACKED),
    [glDepthFunc_INDEX] = sizeof(glDepthFunc_PACKED),
    [glDepthMask_INDEX] = sizeof(glDepthMask_PACKED),
    [glDepthRange_INDEX] = sizeof(glDepthRange_PACKED),
    [glDepthRangef_INDEX] = sizeof(glDepthRangef_PACKED),
    [glDepthRangefOES_INDEX] = sizeof(glDepthRangefOES_PACKED),
    [glDisable_INDEX] = sizeof(glDisable_PACKED),
    [glDisableClientState_INDEX] = sizeof(glDisableClientState_PACKED),
    [glDrawArrays_INDEX] = sizeof(glDrawArrays_PACKED),
    [glDrawBuffer_INDEX] = sizeof(glDrawBuffer_PACKED),
    [glDrawElements_INDEX] = sizeof(glDrawElements_PACKED),
    [glDrawPixels_INDEX] = sizeof(glDrawPixels_PACKED),
    [glDrawRangeElements_INDEX] = sizeof(glDrawRangeElements_PACKED),
    [glEdgeFlag_INDEX] = sizeof(glEdgeFlag_PACKED),
    [glEnable_INDEX] = sizeof(glEnable_PACKED),
    [glEnableClientState_INDEX] = sizeof(glEnableClientState_PACKED),
    [glEnd_INDEX] = sizeof(glEnd_PACKED),
    [glEndList_INDEX] = sizeof(glEndList_PACKED),
    [glEvalCoord1d_INDEX] = sizeof(glEvalCoord1d_PACKED),
    [glEvalCoord1dv_INDEX] = sizeof(glEvalCoord1dv_PACKED),
    [glEvalCoord1f_INDEX] = sizeof(glEvalCoord1f_PACKED),
    [glEvalCoord1fv_INDEX] = sizeof(glEvalCoord1fv_PACKED),
    [glEvalCoord2d_INDEX] = sizeof(glEvalCoord2d_PACKED),
    [glEvalCoord2dv_INDEX] = sizeof(glEvalCoord2dv_PACKED),
    [glEvalCoord2f_INDEX] = sizeof(glEvalCoord2f_PACKED),
    [glEvalCoord2fv_INDEX] = sizeof(glEvalCoord2fv_PACKED),
    [glEvalMesh1_INDEX] = sizeof(glEvalMesh1_PACKED),
    [glEvalMesh2_INDEX] = sizeof(glEvalMesh2_PACKED),
    [glEvalPoint1_INDEX] = sizeof(glEvalPoint1_PACKED),
    [glEvalPoint2_INDEX] = sizeof(glEvalPoint2_PACKED),
    [glFeedbackBuffer_INDEX] = sizeof(glFeedbackBuffer_PACKED),
    [glFinish_INDEX] = sizeof(glFinish_PACKED),
    [glFlush_INDEX] = sizeof(glFlush_PACKED),
    [glFogCoordd_INDEX] = sizeof(glFogCoordd_PACKED),
    [glFogCoorddv_INDEX] = sizeof(glFogCoorddv_PACKED),
    [glFogCoordf_INDEX] = sizeof(glFogCoordf_PACKED),
    [glFogCoordfv_INDEX] = sizeof(glFogCoordfv_PACKED),
    [glFogf_INDEX] = sizeof(glFogf_PACKED),
    [glFogfv_INDEX] = sizeof(glFogfv_PACKED),
    [glFogi_INDEX] = sizeof(glFogi_PACKED),
    [glFogiv_INDEX] = sizeof(glFogiv_PACKED),
    [glFrontFace_INDEX] = sizeof(glFrontFace_PACKED),
    [glFrustum_INDEX] = sizeof(glFrustum_PACKED),
    [glFrustumfOES_INDEX] = sizeof(glFrustumfOES_PACKED),
    [glGenBuffers_INDEX] = sizeof(glGenBuffers_PACKED),
    [glGenLists_INDEX] = sizeof(glGenLists_PACKED),
    [glGenTextures_INDEX] = sizeof(glGenTextures_PACKED),
    [glGetBooleanv_INDEX] = sizeof(glGetBooleanv_PACKED),
    [glGetBufferParameteriv_INDEX] = sizeof(glGetBufferParameteriv_PACKED),
    [glGetClipPlanefOES_INDEX] = sizeof(glGetClipPlanefOES_PACKED),
    [glGetDoublev_INDEX] = sizeof(glGetDoublev_PACKED),
    [glGetError_INDEX] = sizeof(glGetError_PACKED),
    [glGetFloatv_INDEX] = sizeof(glGetFloatv_PACKED),
    [glGetIntegerv_INDEX] = sizeof(glGetIntegerv_PACKED),
    [glGetLightfv_INDEX] = sizeof(glGetLightfv_PACKED),
    [glGetMapdv_INDEX] = sizeof(glGetMapdv_PACKED),
    [glGetMapfv_INDEX] = sizeof(glGetMapfv_PACKED),
    [glGetMapiv_INDEX] = sizeof(glGetMapiv_PACKED),
    [glGetMaterialfv_INDEX] = sizeof(glGetMaterialfv_PACKED),
    [glGetMaterialiv_INDEX] = sizeof(glGetMaterialiv_PACKED),
    [glGetPointerv_INDEX] = sizeof(glGetPointerv_PACKED),
    [glGetString_INDEX] = sizeof(glGetString_PACKED),
    [glGetTexEnvfv_INDEX] = sizeof(glGetTexEnvfv_PACKED),
    [glGetTexEnviv_INDEX] = sizeof(glGetTexEnviv_PACKED),
    [glGetTexImage_INDEX] = sizeof(glGetTexImage_PACKED),
    [glGetTexLevelParameterfv_INDEX] = sizeof(glGetTexLevelParameterfv_PACKED),
    [glGetTexLevelParameteriv_INDEX] = sizeof(glGetTexLevelParameteriv_PACKED),
    [glGetTexParameterfv_INDEX] = sizeof(glGetTexParameterfv_PACKED),
    [glGetTexParameteriv_INDEX] = sizeof(glGetTexParameteriv_PACKED),
    [glHint_INDEX] = sizeof(glHint_PACKED),
    [glIndexd_INDEX] = sizeof(glIndexd_PACKED),
    [glIndexdv_INDEX] = sizeof(glIndexdv_PACKED),
    [glIndexf_INDEX] = sizeof(glIndexf_PACKED),
    [glIndexfv_INDEX] = sizeof(glIndexfv_PACKED),
    [glIndexi_INDEX] = sizeof(glIndexi_PACKED),
    [glIndexiv_INDEX] = sizeof(glIndexiv_PACKED),
    [glIndexs_INDEX] = sizeof(glIndexs_PACKED),
    [glIndexsv_INDEX] = sizeof(glIndexsv_PACKED),
    [glIndexub_INDEX] = sizeof(glIndexub_PACKED),
    [glIndexubv_INDEX] = sizeof(glIndexubv_PACKED),
    [glInitNames_INDEX] = sizeof(glInitNames_PACKED),
    [glInterleavedArrays_INDEX] = sizeof(glInterleavedArrays_PACKED),
    [glIsBuffer_INDEX] = sizeof(glIsBuffer_PACKED),
    [glIsEnabled_INDEX] = sizeof(glIsEnabled_PACKED),
    [glIsList_INDEX] = sizeof(glIsList_PACKED),
    [glIsTexture_INDEX] = sizeof(glIsTexture_PACKED),
    [glLightModelf_INDEX] = sizeof(glLightModelf_PACKED),
    [glLightModelfv_INDEX] = sizeof(glLightModelfv_PACKED),
    [glLightModeli_INDEX] = sizeof(glLightModeli_PACKED),
    [glLightModeliv_INDEX] = sizeof(glLightModeliv_PACKED),
    [glLightf_INDEX] = sizeof(glLightf_PACKED),
    [glLightfv_INDEX] = sizeof(glLightfv_PACKED),
    [glLighti_INDEX] = sizeof(glLighti_PACKED),
    [glLightiv_INDEX] = sizeof(glLightiv_PACKED),
    [glLineStipple_INDEX] = sizeof(glLineStipple_PACKED),
    [glLineWidth_INDEX] = sizeof(glLineWidth_PACKED),
    [glListBase_INDEX] = sizeof(glListBase_PACKED),
    [glLoadIdentity_INDEX] = sizeof(glLoadIdentity_PACKED),
    [glLoadMatrixd_INDEX] = sizeof(glLoadMatrixd_PACKED),
    [glLoadMatrixf_INDEX] = sizeof(glLoadMatrixf_PACKED),
    [glLoadName_INDEX] = sizeof(glLoadName_PACKED),
    [glLoadTransposeMatrixd_INDEX] = sizeof(glLoadTransposeMatrixd_PACKED),
    [glLoadTransposeMatrixf_INDEX] = sizeof(glLoadTransposeMatrixf_PACKED),
    [glLockArraysEXT_INDEX] = sizeof(glLockArraysEXT_PACKED),
    [glLogicOp_INDEX] = sizeof(glLogicOp_PACKED),
    [glMap1d_INDEX] = sizeof(glMap1d_PACKED),
    [glMap1f_INDEX] = sizeof(glMap1f_PACKED),
    [glMap2d_INDEX] = sizeof(glMap2d_PACKED),
    [glMap2f_INDEX] = sizeof(glMap2f_PACKED),
    [glMapGrid1d_INDEX] = sizeof(glMapGrid1d_PACKED),
    [glMapGrid1f_INDEX] = sizeof(glMapGrid1f_PACKED),
    [glMapGrid2d_INDEX] = sizeof(glMapGrid2d_PACKED),
    [glMapGrid2f_INDEX] = sizeof(glMapGrid2f_PACKED),
    [glMaterialf_INDEX] = sizeof(glMaterialf_PACKED),
    [glMaterialfv_INDEX] = sizeof(glMaterialfv_PACKED),
    [glMateriali_INDEX] = sizeof(glMateriali_PACKED),
    [glMaterialiv_INDEX] = sizeof(glMaterialiv_PACKED),
    [glMatrixMode_INDEX] = sizeof(glMatrixMode_PACKED),
    [glMultMatrixd_INDEX] = sizeof(glMultMatrixd_PACKED),
    [glMultMatrixf_INDEX] = sizeof(glMultMatrixf_PACKED),
    [glMultTransposeMatrixd_INDEX] = sizeof(glMultTransposeMatrixd_PACKED),
    [glMultTransposeMatrixf_INDEX] = sizeof(glMultTransposeMatrixf_PACKED),
    [glMultiTexCoord1d_INDEX] = sizeof(glMultiTexCoord1d_PACKED),
    [glMultiTexCoord1dv_INDEX] = sizeof(glMultiTexCoord1dv_PACKED),
    [glMultiTexCoord1f_INDEX] = sizeof(glMultiTexCoord1f_PACKED),
    [glMultiTexCoord1fv_INDEX] = sizeof(glMultiTexCoord1fv_PACKED),
    [glMultiTexCoord1i_INDEX] = sizeof(glMultiTexCoord1i_PACKED),
    [glMultiTexCoord1iv_INDEX] = sizeof(glMultiTexCoord1iv_PACKED),
    [glMultiTexCoord1s_INDEX] = sizeof(glMultiTexCoord1s_PACKED),
    [glMultiTexCoord1sv_INDEX] = sizeof(glMultiTexCoord1sv_PACKED),
    [glMultiTexCoord2d_INDEX] = sizeof(glMultiTexCoord2d_PACKED),
    [glMultiTexCoord2dv_INDEX] = sizeof(glMultiTexCoord2dv_PACKED),
    [glMultiTexCoord2f_INDEX] = sizeof(glMultiTexCoord2f_PACKED),
    [glMultiTexCoord2fARB_INDEX] = sizeof(glMultiTexCoord2fARB_PACKED),
    [glMultiTexCoord2fv_INDEX] = sizeof(glMultiTexCoord2fv_PACKED),
    [glMultiTexCoord2fvARB_INDEX] = sizeof(glMultiTexCoord2fvARB_PACKED),
    [glMultiTexCoord2i_INDEX] = sizeof(glMultiTexCoord2i_PACKED),
    [glMultiTexCoord2iv_INDEX] = sizeof(glMultiTexCoord2iv_PACKED),
    [glMultiTexCoord2s_INDEX] = sizeof(glMultiTexCoord2s_PACKED),
    [glMultiTexCoord2sv_INDEX] = sizeof(glMultiTexCoord2sv_PACKED),
    [glMultiTexCoord3d_INDEX] = sizeof(glMultiTexCoord3d_PACKED),
    [glMultiTexCoord3dv_INDEX] = sizeof(glMultiTexCoord3dv_PACKED),
    [glMultiTexCoord3f_INDEX] = sizeof(glMultiTexCoord3f_PACKED),
    [glMultiTexCoord3fv_INDEX] = sizeof(glMultiTexCoord3fv_PACKED),
    [glMultiTexCoord3i_INDEX] = sizeof(glMultiTexCoord3i_PACKED),
    [glMultiTexCoord3iv_INDEX] = sizeof(glMultiTexCoord3iv_PACKED),
    [glMultiTexCoord3s_INDEX] = sizeof(glMultiTexCoord3s_PACKED),
    [glMultiTexCoord3sv_INDEX] = sizeof(glMultiTexCoord3sv_PACKED),
    [glMultiTexCoord4d_INDEX] = sizeof(glMultiTexCoord4d_PACKED),
    [glMultiTexCoord4dv_INDEX] = sizeof(glMultiTexCoord4dv_PACKED),
    [glMultiTexCoord4f_INDEX] = sizeof(glMultiTexCoord4f_PACKED),
    [glMultiTexCoord4fARB_INDEX] = sizeof(glMultiTexCoord4fARB_PACKED),
    [glMultiTexCoord4fv_INDEX] = sizeof(glMultiTexCoord4fv_PACKED),
    [glMultiTexCoord4fvARB_INDEX] = sizeof(glMultiTexCoord4fvARB_PACKED),
    [glMultiTexCoord4i_INDEX] = sizeof(glMultiTexCoord4i_PACKED),
    [glMultiTexCoord4iv_INDEX] = sizeof(glMultiTexCoord4iv_PACKED),
    [glMultiTexCoord4s_INDEX] = sizeof(glMultiTexCoord4s_PACKED),
    [glMultiTexCoord4sv_INDEX] = sizeof(glMultiTexCoord4sv_PACKED),
    [glNewList_INDEX] = sizeof(glNewList_PACKED),
    [glNormal3b_INDEX] = sizeof(glNormal3b_PACKED),
    [glNormal3bv_INDEX] = sizeof(glNormal3bv_PACKED),
    [glNormal3d_INDEX] = sizeof(glNormal3d_PACKED),
    [glNormal3dv_INDEX] = sizeof(glNormal3dv_PACKED),
    [glNormal3f_INDEX] = sizeof(glNormal3f_PACKED),
    [glNormal3fv_INDEX] = sizeof(glNormal3fv_PACKED),
    [glNormal3i_INDEX] = sizeof(glNormal3i_PACKED),
    [glNormal3iv_INDEX] = sizeof(glNormal3iv_PACKED),
    [glNormal3s_INDEX] = sizeof(glNormal3s_PACKED),
    [glNormal3sv_INDEX] = sizeof(glNormal3sv_PACKED),
    [glNormalPointer_INDEX] = sizeof(glNormalPointer_PACKED),
    [glOrtho_INDEX] = sizeof(glOrtho_PACKED),
    [glOrthofOES_INDEX] = sizeof(glOrthofOES_PACKED),
    [glPassThrough_INDEX] = sizeof(glPassThrough_PACKED),
    [glPixelStorei_INDEX] = sizeof(glPixelStorei_PACKED),
    [glPixelTransferf_INDEX] = sizeof(glPixelTransferf_PACKED),
    [glPixelTransferi_INDEX] = sizeof(glPixelTransferi_PACKED),
    [glPixelZoom_INDEX] = sizeof(glPixelZoom_PACKED),
    [glPointParameterf_INDEX] = sizeof(glPointParameterf_PACKED),
    [glPointParameterfv_INDEX] = sizeof(glPointParameterfv_PACKED),
    [glPointSize_INDEX] = sizeof(glPointSize_PACKED),
    [glPolygonMode_INDEX] = sizeof(glPolygonMode_PACKED),
    [glPolygonOffset_INDEX] = sizeof(glPolygonOffset_PACKED),
    [glPolygonStipple_INDEX] = sizeof(glPolygonStipple_PACKED),
    [glPopAttrib_INDEX] = sizeof(glPopAttrib_PACKED),
    [glPopClientAttrib_INDEX] = sizeof(glPopClientAttrib_PACKED),
    [glPopMatrix_INDEX] = sizeof(glPopMatrix_PACKED),
    [glPopName_INDEX] = sizeof(glPopName_PACKED),
    [glPrioritizeTextures_INDEX] = sizeof(glPrioritizeTextures_PACKED),
    [glPushAttrib_INDEX] = sizeof(glPushAttrib_PACKED),
    [glPushClientAttrib_INDEX] = sizeof(glPushClientAttrib_PACKED),
    [glPushMatrix_INDEX] = sizeof(glPushMatrix_PACKED),
    [glPushName_INDEX] = sizeof(glPushName_PACKED),
    [glRasterPos2d_INDEX] = sizeof(glRasterPos2d_PACKED),
    [glRasterPos2dv_INDEX] = sizeof(glRasterPos2dv_PACKED),
    [glRasterPos2f_INDEX] = sizeof(glRasterPos2f_PACKED),
    [glRasterPos2fv_INDEX] = sizeof(glRasterPos2fv_PACKED),
    [glRasterPos2i_INDEX] = sizeof(glRasterPos2i_PACKED),
    [glRasterPos2iv_INDEX] = sizeof(glRasterPos2iv_PACKED),
    [glRasterPos2s_INDEX] = sizeof(glRasterPos2s_PACKED),
    [glRasterPos2sv_INDEX] = sizeof(glRasterPos2sv_PACKED),
    [glRasterPos3d_INDEX] = sizeof(glRasterPos3d_PACKED),
    [glRasterPos3dv_INDEX] = sizeof(glRasterPos3dv_PACKED),
    [glRasterPos3f_INDEX] = sizeof(glRasterPos3f_PACKED),
    [glRasterPos3fv_INDEX] = sizeof(glRasterPos3fv_PACKED),
    [glRasterPos3i_INDEX] = sizeof(glRasterPos3i_PACKED),
    [glRasterPos3iv_INDEX] = sizeof(glRasterPos3iv_PACKED),
    [glRasterPos3s_INDEX] = sizeof(glRasterPos3s_PACKED),
    [glRasterPos3sv_INDEX] = sizeof(glRasterPos3sv_PACKED),
    [glRasterPos4d_INDEX] = sizeof(glRasterPos4d_PACKED),
    [glRasterPos4dv_INDEX] = sizeof(glRasterPos4dv_PACKED),
    [glRasterPos4f_INDEX] = sizeof(glRasterPos4f_PACKED),
    [glRasterPos4fv_INDEX] = sizeof(glRasterPos4fv_PACKED),
    [glRasterPos4i_INDEX] = sizeof(glRasterPos4i_PACKED),
    [glRasterPos4iv_INDEX] = sizeof(glRasterPos4iv_PACKED),
    [glRasterPos4s_INDEX] = sizeof(glRasterPos4s_PACKED),
    [glRasterPos4sv_INDEX] = sizeof(glRasterPos4sv_PACKED),
    [glReadBuffer_INDEX] = sizeof(glReadBuffer_PACKED),
    [glReadPixels_INDEX] = sizeof(glReadPixels_PACKED),
    [glRectd_INDEX] = sizeof(glRectd_PACKED),
    [glRectdv_INDEX] = sizeof(glRectdv_PACKED),
    [glRectf_INDEX] = sizeof(glRectf_PACKED),
    [glRectfv_INDEX] = sizeof(glRectfv_PACKED),
    [glRecti_INDEX] = sizeof(glRecti_PACKED),
    [glRectiv_INDEX] = sizeof(glRectiv_PACKED),
    [glRects_INDEX] = sizeof(glRects_PACKED),
    [glRectsv_INDEX] = sizeof(glRectsv_PACKED),
    [glRenderMode_INDEX] = sizeof(glRenderMode_PACKED),
    [glRotated_INDEX] = sizeof(glRotated_PACKED),
    [glRotatef_INDEX] = sizeof(glRotatef_PACKED),
    [glSampleCoverage_INDEX] = sizeof(glSampleCoverage_PACKED),
    [glScaled_INDEX] = sizeof(glScaled_PACKED),
    [glScalef_INDEX] = sizeof(glScalef_PACKED),
    [glScissor_INDEX] = sizeof(glScissor_PACKED),
    [glSecondaryColor3b_INDEX] = sizeof(glSecondaryColor3b_PACKED),
    [glSecondaryColor3bv_INDEX] = sizeof(glSecondaryColor3bv_PACKED),
    [glSecondaryColor3d_INDEX] = sizeof(glSecondaryColor3d_PACKED),
    [glSecondaryColor3dv_INDEX] = sizeof(glSecondaryColor3dv_PACKED),
    [glSecondaryColor3f_INDEX] = sizeof(glSecondaryColor3f_PACKED),
    [glSecondaryColor3fv_INDEX] = sizeof(glSecondaryColor3fv_PACKED),
    [glSecondaryColor3i_INDEX] = sizeof(glSecondaryColor3i_PACKED),
    [glSecondaryColor3iv_INDEX] = sizeof(glSecondaryColor3iv_PACKED),
    [glSecondaryColor3s_INDEX] = sizeof(glSecondaryColor3s_PACKED),
    [glSecondaryColor3sv_INDEX] = sizeof(glSecondaryColor3sv_PACKED),
    [glSecondaryColor3ub_INDEX] = sizeof(glSecondaryColor3ub_PACKED),
    [glSecondaryColor3ubv_INDEX] = sizeof(glSecondaryColor3ubv_PACKED),
    [glSecondaryColor3ui_INDEX] = sizeof(glSecondaryColor3ui_PACKED),
    [glSecondaryColor3uiv_INDEX] = sizeof(glSecondaryColor3uiv_PACKED),
    [glSecondaryColor3us_INDEX] = sizeof(glSecondaryColor3us_PACKED),
    [glSecondaryColor3usv_INDEX] = sizeof(glSecondaryColor3usv_PACKED),
    [glSelectBuffer_INDEX] = sizeof(glSelectBuffer_PACKED),
    [glShadeModel_INDEX] = sizeof(glShadeModel_PACKED),
    [glStencilFunc_INDEX] = sizeof(glStencilFunc_PACKED),
    [glStencilMask_INDEX] = sizeof(glStencilMask_PACKED),
    [glStencilOp_INDEX] = sizeof(glStencilOp_PACKED),
    [glTexCoord1d_INDEX] = sizeof(glTexCoord1d_PACKED),
    [glTexCoord1dv_INDEX] = sizeof(glTexCoord1dv_PACKED),
    [glTexCoord1f_INDEX] = sizeof(glTexCoord1f_PACKED),
    [glTexCoord1fv_INDEX] = sizeof(glTexCoord1fv_PACKED),
    [glTexCoord1i_INDEX] = sizeof(glTexCoord1i_PACKED),
    [glTexCoord1iv_INDEX] = sizeof(glTexCoord1iv_PACKED),
    [glTexCoord1s_INDEX] = sizeof(glTexCoord1s_PACKED),
    [glTexCoord1sv_INDEX] = sizeof(glTexCoord1sv_PACKED),
    [glTexCoord2d_INDEX] = sizeof(glTexCoord2d_PACKED),
    [glTexCoord2dv_INDEX] = sizeof(glTexCoord2dv_PACKED),
    [glTexCoord2f_INDEX] = sizeof(glTexCoord2f_PACKED),
    [glTexCoord2fv_INDEX] = sizeof(glTexCoord2fv_PACKED),
    [glTexCoord2i_INDEX] = sizeof(glTexCoord2i_PACKED),
    [glTexCoord2iv_INDEX] = sizeof(glTexCoord2iv_PACKED),
    [glTexCoord2s_INDEX] = sizeof(glTexCoord2s_PACKED),
    [glTexCoord2sv_INDEX] = sizeof(glTexCoord2sv_PACKED),
    [glTexCoord3d_INDEX] = sizeof(glTexCoord3d_PACKED),
    [glTexCoord3dv_INDEX] = sizeof(glTexCoord3dv_PACKED),
    [glTexCoord3f_INDEX] = sizeof(glTexCoord3f_PACKED),
    [glTexCoord3fv_INDEX] = sizeof(glTexCoord3fv_PACKED),
    [glTexCoord3i_INDEX] = sizeof(glTexCoord3i_PACKED),
    [glTexCoord3iv_INDEX] = sizeof(glTexCoord3iv_PACKED),
    [glTexCoord3s_INDEX] = sizeof(glTexCoord3s_PACKED),
    [glTexCoord3sv_INDEX] = sizeof(glTexCoord3sv_PACKED),
    [glTexCoord4d_INDEX] = sizeof(glTexCoord4d_PACKED),
    [glTexCoord4dv_INDEX] = sizeof(glTexCoord4dv_PACKED),
    [glTexCoord4f_INDEX] = sizeof(glTexCoord4f_PACKED),
    [glTexCoord4fv_INDEX] = sizeof(glTexCoord4fv_PACKED),
    [glTexCoord4i_INDEX] = sizeof(glTexCoord4i_PACKED),
    [glTexCoord4iv_INDEX] = sizeof(glTexCoord4iv_PACKED),
    [glTexCoord4s_INDEX] = sizeof(glTexCoord4s_PACKED),
    [glTexCoord4sv_INDEX] = sizeof(glTexCoord4sv_PACKED),
    [glTexCoordPointer_INDEX] = sizeof(glTexCoordPointer_PACKED),
    [glTexEnvf_INDEX] = sizeof(glTexEnvf_PACKED),
    [glTexEnvfv_INDEX] = sizeof(glTexEnvfv_PACKED),
    [glTexEnvi_INDEX] = sizeof(glTexEnvi_PACKED),
    [glTexEnviv_INDEX] = sizeof(glTexEnviv_PACKED),
    [glTexGend_INDEX] = sizeof(glTexGend_PACKED),
    [glTexGendv_INDEX] = sizeof(glTexGendv_PACKED),
    [glTexGenf_INDEX] = sizeof(glTexGenf_PACKED),
    [glTexGenfv_INDEX] = sizeof(glTexGenfv_PACKED),
    [glTexGeni_INDEX] = sizeof(glTexGeni_PACKED),
    [glTexGeniv_INDEX] = sizeof(glTexGeniv_PACKED),
    [glTexImage1D_INDEX] = sizeof(glTexImage1D_PACKED),
    [glTexImage2D_INDEX] = sizeof(glTexImage2D_PACKED),
    [glTexImage3D_INDEX] = sizeof(glTexImage3D_PACKED),
    [glTexParameterf_INDEX] = sizeof(glTexParameterf_PACKED),
    [glTexParameterfv_INDEX] = sizeof(glTexParameterfv_PACKED),
    [glTexParameteri_INDEX] = sizeof(glTexParameteri_PACKED),
    [glTexParameteriv_INDEX] = sizeof(glTexParameteriv_PACKED),
    [glTexSubImage1D_INDEX] = sizeof(glTexSubImage1D_PACKED),
    [glTexSubImage2D_INDEX] = sizeof(glTexSubImage2D_PACKED),
    [glTexSubImage3D_INDEX] = sizeof(glTexSubImage3D_PACKED),
    [glTranslated_INDEX] = sizeof(glTranslated_PACKED),
    [glTranslatef_INDEX] = sizeof(glTranslatef_PACKED),
    [glUnlockArraysEXT_INDEX] = sizeof(glUnlockArraysEXT_PACKED),
    [glVertex2d_INDEX] = sizeof(glVertex2d_PACKED),
    [glVertex2dv_INDEX] = sizeof(glVertex2dv_PACKED),
    [glVertex2f_INDEX] = sizeof(glVertex2f_PACKED),
    [glVertex2fv_INDEX] = sizeof(glVertex2fv_PACKED),
    [glVertex2i_INDEX] = sizeof(glVertex2i_PACKED),
    [glVertex2iv_INDEX] = sizeof(glVertex2iv_PACKED),
    [glVertex2s_INDEX] = sizeof(glVertex2s_PACKED),
    [glVertex2sv_INDEX] = sizeof(glVertex2sv_PACKED),
    [glVertex3d_INDEX] = sizeof(glVertex3d_PACKED),
    [glVertex3dv_INDEX] = sizeof(glVertex3dv_PACKED),
    [glVertex3f_INDEX] = sizeof(glVertex3f_PACKED),
    [glVertex3fv_INDEX] = sizeof(glVertex3fv_PACKED),
    [glVertex3i_INDEX] = sizeof(glVertex3i_PACKED),
    [glVertex3iv_INDEX] = sizeof(glVertex3iv_PACKED),
    [glVertex3s_INDEX] = sizeof(glVertex3s_PACKED),
    [glVertex3sv_INDEX] = sizeof(glVertex3sv_PACKED),
    [glVertex4d_INDEX] = sizeof(glVertex4d_PACKED),
    [glVertex4dv_INDEX] = sizeof(glVertex4dv_PACKED),
    [glVertex4f_INDEX] = sizeof(glVertex4f_PACKED),
    [glVertex4fv_INDEX] = sizeof(glVertex4fv_PACKED),
    [glVertex4i_INDEX] = sizeof(glVertex4i_PACKED),
    [glVertex4iv_INDEX] = sizeof(glVertex4iv_PACKED),
    [glVertex4s_INDEX] = sizeof(glVertex4s_PACKED),
    [glVertex4sv_INDEX] = sizeof(glVertex4sv_PACKED),
    [glVertexPointer_INDEX] = sizeof(glVertexPointer_PACKED),
    [glViewport_INDEX] = sizeof(glViewport_PACKED),
    [glWindowPos2d_INDEX] = sizeof(glWindowPos2d_PACKED),
    [glWindowPos2dv_INDEX] = sizeof(glWindowPos2dv_PACKED),
    [glWindowPos2f_INDEX] = sizeof(glWindowPos2f_PACKED),
    [glWindowPos2fv_INDEX] = sizeof(glWindowPos2fv_PACKED),
    [glWindowPos2i_INDEX] = sizeof(glWindowPos2i_PACKED),
    [glWindowPos2iv_INDEX] = sizeof(glWindowPos2iv_PACKED),
    [glWindowPos2s_INDEX] = sizeof(glWindowPos2s_PACKED),
    [glWindowPos2sv_INDEX] = sizeof(glWindowPos2sv_PACKED),
    [glWindowPos3d_INDEX] = sizeof(glWindowPos3d_PACKED),
    [glWindowPos3dv_INDEX] = sizeof(glWindowPos3dv_PACKED),
    [glWindowPos3f_INDEX] = sizeof(glWindowPos3f_PACKED),
    [glWindowPos3fv_INDEX] = sizeof(glWindowPos3fv_PACKED),
    [glWindowPos3i_INDEX] = sizeof(glWindowPos3i_PACKED),
    [glWindowPos3iv_INDEX] = sizeof(glWindowPos3iv_PACKED),
    [glWindowPos3s_INDEX] = sizeof(glWindowPos3s_PACKED),
    [glWindowPos3sv_INDEX] = sizeof(glWindowPos3sv_PACKED),
    [glXChooseFBConfig_INDEX] = sizeof(glXChooseFBConfig_PACKED),
    [glXChooseVisual_INDEX] = sizeof(glXChooseVisual_PACKED),
    [glXCopyContext_INDEX] = sizeof(glXCopyContext_PACKED),
    [glXCreateContext_INDEX] = sizeof(glXCreateContext_PACKED),
    [glXCreateContextAttribsARB_INDEX] = sizeof(glXCreateContextAttribsARB_PACKED),
    [glXCreateGLXPixmap_INDEX] = sizeof(glXCreateGLXPixmap_PACKED),
    [glXCreateNewContext_INDEX] = sizeof(glXCreateNewContext_PACKED),
    [glXCreateWindow_INDEX] = sizeof(glXCreateWindow_PACKED),
    [glXDestroyContext_INDEX] = sizeof(glXDestroyContext_PACKED),
    [glXDestroyGLXPixmap_INDEX] = sizeof(glXDestroyGLXPixmap_PACKED),
    [glXDestroyWindow_INDEX] = sizeof(glXDestroyWindow_PACKED),
    [glXGetClientString_INDEX] = sizeof(glXGetClientString_PACKED),
    [glXGetConfig_INDEX] = sizeof(glXGetConfig_PACKED),
    [glXGetCurrentContext_INDEX] = sizeof(glXGetCurrentContext_PACKED),
    [glXGetCurrentDisplay_INDEX] = sizeof(glXGetCurrentDisplay_PACKED),
    [glXGetCurrentDrawable_INDEX] = sizeof(glXGetCurrentDrawable_PACKED),
    [glXGetFBConfigAttrib_INDEX] = sizeof(glXGetFBConfigAttrib_PACKED),
    [glXGetFBConfigs_INDEX] = sizeof(glXGetFBConfigs_PACKED),
    [glXGetProcAddress_INDEX] = sizeof(glXGetProcAddress_PACKED),
    [glXGetProcAddressARB_INDEX] = sizeof(glXGetProcAddressARB_PACKED),
    [glXGetVisualFromFBConfig_INDEX] = sizeof(glXGetVisualFromFBConfig_PACKED),
    [glXIsDirect_INDEX] = sizeof(glXIsDirect_PACKED),
    [glXMakeContextCurrent_INDEX] = sizeof(glXMakeContextCurrent_PACKED),
    [glXMakeCurrent_INDEX] = sizeof(glXMakeCurrent_PACKED),
    [glXQueryExtension_INDEX] = sizeof(glXQueryExtension_PACKED),
    [glXQueryExtensionsString_INDEX] = sizeof(glXQueryExtensionsString_PACKED),
    [glXQueryServerString_INDEX] = sizeof(glXQueryServerString_PACKED),
    [glXQueryVersion_INDEX] = sizeof(glXQueryVersion_PACKED),
    [glXReleaseBuffersMESA_INDEX] = sizeof(glXReleaseBuffersMESA_PACKED),
    [glXSwapBuffers_INDEX] = sizeof(glXSwapBuffers_PACKED),
    [glXSwapIntervalEXT_INDEX] = sizeof(glXSwapIntervalEXT_PACKED),
    [glXSwapIntervalMESA_INDEX] = sizeof(glXSwapIntervalMESA_PACKED),
    [glXSwapIntervalSGI_INDEX] = sizeof(glXSwapIntervalSGI_PACKED),
    [glXUseXFont_INDEX] = sizeof(glXUseXFont_PACKED),
    [glXWaitGL_INDEX] = sizeof(glXWaitGL_PACKED),
    [glXWaitX_INDEX] = sizeof(glXWaitX_PACKED),
};

const char *INDEX_NAME[] = {
    0,
    [glActiveTexture_INDEX] = "glActiveTexture",
    [glActiveTextureARB_INDEX] = "glActiveTextureARB",
    [glAlphaFunc_INDEX] = "glAlphaFunc",
    [glAreTexturesResident_INDEX] = "glAreTexturesResident",
    [glArrayElement_INDEX] = "glArrayElement",
    [glBegin_INDEX] = "glBegin",
    [glBindBuffer_INDEX] = "glBindBuffer",
    [glBindTexture_INDEX] = "glBindTexture",
    [glBitmap_INDEX] = "glBitmap",
    [glBlendColor_INDEX] = "glBlendColor",
    [glBlendEquation_INDEX] = "glBlendEquation",
    [glBlendEquationSeparate_INDEX] = "glBlendEquationSeparate",
    [glBlendEquationSeparatei_INDEX] = "glBlendEquationSeparatei",
    [glBlendFunc_INDEX] = "glBlendFunc",
    [glBlendFuncSeparate_INDEX] = "glBlendFuncSeparate",
    [glBlendFuncSeparatei_INDEX] = "glBlendFuncSeparatei",
    [glBufferData_INDEX] = "glBufferData",
    [glBufferSubData_INDEX] = "glBufferSubData",
    [glCallList_INDEX] = "glCallList",
    [glCallLists_INDEX] = "glCallLists",
    [glClear_INDEX] = "glClear",
    [glClearAccum_INDEX] = "glClearAccum",
    [glClearColor_INDEX] = "glClearColor",
    [glClearDepth_INDEX] = "glClearDepth",
    [glClearDepthf_INDEX] = "glClearDepthf",
    [glClearDepthfOES_INDEX] = "glClearDepthfOES",
    [glClearStencil_INDEX] = "glClearStencil",
    [glClientActiveTexture_INDEX] = "glClientActiveTexture",
    [glClientActiveTextureARB_INDEX] = "glClientActiveTextureARB",
    [glClipPlane_INDEX] = "glClipPlane",
    [glClipPlanefOES_INDEX] = "glClipPlanefOES",
    [glColor3b_INDEX] = "glColor3b",
    [glColor3bv_INDEX] = "glColor3bv",
    [glColor3d_INDEX] = "glColor3d",
    [glColor3dv_INDEX] = "glColor3dv",
    [glColor3f_INDEX] = "glColor3f",
    [glColor3fv_INDEX] = "glColor3fv",
    [glColor3i_INDEX] = "glColor3i",
    [glColor3iv_INDEX] = "glColor3iv",
    [glColor3s_INDEX] = "glColor3s",
    [glColor3sv_INDEX] = "glColor3sv",
    [glColor3ub_INDEX] = "glColor3ub",
    [glColor3ubv_INDEX] = "glColor3ubv",
    [glColor3ui_INDEX] = "glColor3ui",
    [glColor3uiv_INDEX] = "glColor3uiv",
    [glColor3us_INDEX] = "glColor3us",
    [glColor3usv_INDEX] = "glColor3usv",
    [glColor4b_INDEX] = "glColor4b",
    [glColor4bv_INDEX] = "glColor4bv",
    [glColor4d_INDEX] = "glColor4d",
    [glColor4dv_INDEX] = "glColor4dv",
    [glColor4f_INDEX] = "glColor4f",
    [glColor4fv_INDEX] = "glColor4fv",
    [glColor4i_INDEX] = "glColor4i",
    [glColor4iv_INDEX] = "glColor4iv",
    [glColor4s_INDEX] = "glColor4s",
    [glColor4sv_INDEX] = "glColor4sv",
    [glColor4ub_INDEX] = "glColor4ub",
    [glColor4ubv_INDEX] = "glColor4ubv",
    [glColor4ui_INDEX] = "glColor4ui",
    [glColor4uiv_INDEX] = "glColor4uiv",
    [glColor4us_INDEX] = "glColor4us",
    [glColor4usv_INDEX] = "glColor4usv",
    [glColorMask_INDEX] = "glColorMask",
    [glColorMaterial_INDEX] = "glColorMaterial",
    [glColorPointer_INDEX] = "glColorPointer",
    [glCompressedTexImage2D_INDEX] = "glCompressedTexImage2D",
    [glCompressedTexSubImage2D_INDEX] = "glCompressedTexSubImage2D",
    [glCopyPixels_INDEX] = "glCopyPixels",
    [glCopyTexImage2D_INDEX] = "glCopyTexImage2D",
    [glCopyTexSubImage2D_INDEX] = "glCopyTexSubImage2D",
    [glCullFace_INDEX] = "glCullFace",
    [glDeleteBuffers_INDEX] = "glDeleteBuffers",
    [glDeleteLists_INDEX] = "glDeleteLists",
    [glDeleteTextures_INDEX] = "glDeleteTextures",
    [glDepthFunc_INDEX] = "glDepthFunc",
    [glDepthMask_INDEX] = "glDepthMask",
    [glDepthRange_INDEX] = "glDepthRange",
    [glDepthRangef_INDEX] = "glDepthRangef",
    [glDepthRangefOES_INDEX] = "glDepthRangefOES",
    [glDisable_INDEX] = "glDisable",
    [glDisableClientState_INDEX] = "glDisableClientState",
    [glDrawArrays_INDEX] = "glDrawArrays",
    [glDrawBuffer_INDEX] = "glDrawBuffer",
    [glDrawElements_INDEX] = "glDrawElements",
    [glDrawPixels_INDEX] = "glDrawPixels",
    [glDrawRangeElements_INDEX] = "glDrawRangeElements",
    [glEdgeFlag_INDEX] = "glEdgeFlag",
    [glEnable_INDEX] = "glEnable",
    [glEnableClientState_INDEX] = "glEnableClientState",
    [glEnd_INDEX] = "glEnd",
    [glEndList_INDEX] = "glEndList",
    [glEvalCoord1d_INDEX] = "glEvalCoord1d",
    [glEvalCoord1dv_INDEX] = "glEvalCoord1dv",
    [glEvalCoord1f_INDEX] = "glEvalCoord1f",
    [glEvalCoord1fv_INDEX] = "glEvalCoord1fv",
    [glEvalCoord2d_INDEX] = "glEvalCoord2d",
    [glEvalCoord2dv_INDEX] = "glEvalCoord2dv",
    [glEvalCoord2f_INDEX] = "glEvalCoord2f",
    [glEvalCoord2fv_INDEX] = "glEvalCoord2fv",
    [glEvalMesh1_INDEX] = "glEvalMesh1",
    [glEvalMesh2_INDEX] = "glEvalMesh2",
    [glEvalPoint1_INDEX] = "glEvalPoint1",
    [glEvalPoint2_INDEX] = "glEvalPoint2",
    [glFeedbackBuffer_INDEX] = "glFeedbackBuffer",
    [glFinish_INDEX] = "glFinish",
    [glFlush_INDEX] = "glFlush",
    [glFogCoordd_INDEX] = "glFogCoordd",
    [glFogCoorddv_INDEX] = "glFogCoorddv",
    [glFogCoordf_INDEX] = "glFogCoordf",
    [glFogCoordfv_INDEX] = "glFogCoordfv",
    [glFogf_INDEX] = "glFogf",
    [glFogfv_INDEX] = "glFogfv",
    [glFogi_INDEX] = "glFogi",
    [glFogiv_INDEX] = "glFogiv",
    [glFrontFace_INDEX] = "glFrontFace",
    [glFrustum_INDEX] = "glFrustum",
    [glFrustumfOES_INDEX] = "glFrustumfOES",
    [glGenBuffers_INDEX] = "glGenBuffers",
    [glGenLists_INDEX] = "glGenLists",
    [glGenTextures_INDEX] = "glGenTextures",
    [glGetBooleanv_INDEX] = "glGetBooleanv",
    [glGetBufferParameteriv_INDEX] = "glGetBufferParameteriv",
    [glGetClipPlanefOES_INDEX] = "glGetClipPlanefOES",
    [glGetDoublev_INDEX] = "glGetDoublev",
    [glGetError_INDEX] = "glGetError",
    [glGetFloatv_INDEX] = "glGetFloatv",
    [glGetIntegerv_INDEX] = "glGetIntegerv",
    [glGetLightfv_INDEX] = "glGetLightfv",
    [glGetMapdv_INDEX] = "glGetMapdv",
    [glGetMapfv_INDEX] = "glGetMapfv",
    [glGetMapiv_INDEX] = "glGetMapiv",
    [glGetMaterialfv_INDEX] = "glGetMaterialfv",
    [glGetMaterialiv_INDEX] = "glGetMaterialiv",
    [glGetPointerv_INDEX] = "glGetPointerv",
    [glGetString_INDEX] = "glGetString",
    [glGetTexEnvfv_INDEX] = "glGetTexEnvfv",
    [glGetTexEnviv_INDEX] = "glGetTexEnviv",
    [glGetTexImage_INDEX] = "glGetTexImage",
    [glGetTexLevelParameterfv_INDEX] = "glGetTexLevelParameterfv",
    [glGetTexLevelParameteriv_INDEX] = "glGetTexLevelParameteriv",
    [glGetTexParameterfv_INDEX] = "glGetTexParameterfv",
    [glGetTexParameteriv_INDEX] = "glGetTexParameteriv",
    [glHint_INDEX] = "glHint",
    [glIndexd_INDEX] = "glIndexd",
    [glIndexdv_INDEX] = "glIndexdv",
    [glIndexf_INDEX] = "glIndexf",
    [glIndexfv_INDEX] = "glIndexfv",
    [glIndexi_INDEX] = "glIndexi",
    [glIndexiv_INDEX] = "glIndexiv",
    [glIndexs_INDEX] = "glIndexs",
    [glIndexsv_INDEX] = "glIndexsv",
    [glIndexub_INDEX] = "glIndexub",
    [glIndexubv_INDEX] = "glIndexubv",
    [glInitNames_INDEX] = "glInitNames",
    [glInterleavedArrays_INDEX] = "glInterleavedArrays",
    [glIsBuffer_INDEX] = "glIsBuffer",
    [glIsEnabled_INDEX] = "glIsEnabled",
    [glIsList_INDEX] = "glIsList",
    [glIsTexture_INDEX] = "glIsTexture",
    [glLightModelf_INDEX] = "glLightModelf",
    [glLightModelfv_INDEX] = "glLightModelfv",
    [glLightModeli_INDEX] = "glLightModeli",
    [glLightModeliv_INDEX] = "glLightModeliv",
    [glLightf_INDEX] = "glLightf",
    [glLightfv_INDEX] = "glLightfv",
    [glLighti_INDEX] = "glLighti",
    [glLightiv_INDEX] = "glLightiv",
    [glLineStipple_INDEX] = "glLineStipple",
    [glLineWidth_INDEX] = "glLineWidth",
    [glListBase_INDEX] = "glListBase",
    [glLoadIdentity_INDEX] = "glLoadIdentity",
    [glLoadMatrixd_INDEX] = "glLoadMatrixd",
    [glLoadMatrixf_INDEX] = "glLoadMatrixf",
    [glLoadName_INDEX] = "glLoadName",
    [glLoadTransposeMatrixd_INDEX] = "glLoadTransposeMatrixd",
    [glLoadTransposeMatrixf_INDEX] = "glLoadTransposeMatrixf",
    [glLockArraysEXT_INDEX] = "glLockArraysEXT",
    [glLogicOp_INDEX] = "glLogicOp",
    [glMap1d_INDEX] = "glMap1d",
    [glMap1f_INDEX] = "glMap1f",
    [glMap2d_INDEX] = "glMap2d",
    [glMap2f_INDEX] = "glMap2f",
    [glMapGrid1d_INDEX] = "glMapGrid1d",
    [glMapGrid1f_INDEX] = "glMapGrid1f",
    [glMapGrid2d_INDEX] = "glMapGrid2d",
    [glMapGrid2f_INDEX] = "glMapGrid2f",
    [glMaterialf_INDEX] = "glMaterialf",
    [glMaterialfv_INDEX] = "glMaterialfv",
    [glMateriali_INDEX] = "glMateriali",
    [glMaterialiv_INDEX] = "glMaterialiv",
    [glMatrixMode_INDEX] = "glMatrixMode",
    [glMultMatrixd_INDEX] = "glMultMatrixd",
    [glMultMatrixf_INDEX] = "glMultMatrixf",
    [glMultTransposeMatrixd_INDEX] = "glMultTransposeMatrixd",
    [glMultTransposeMatrixf_INDEX] = "glMultTransposeMatrixf",
    [glMultiTexCoord1d_INDEX] = "glMultiTexCoord1d",
    [glMultiTexCoord1dv_INDEX] = "glMultiTexCoord1dv",
    [glMultiTexCoord1f_INDEX] = "glMultiTexCoord1f",
    [glMultiTexCoord1fv_INDEX] = "glMultiTexCoord1fv",
    [glMultiTexCoord1i_INDEX] = "glMultiTexCoord1i",
    [glMultiTexCoord1iv_INDEX] = "glMultiTexCoord1iv",
    [glMultiTexCoord1s_INDEX] = "glMultiTexCoord1s",
    [glMultiTexCoord1sv_INDEX] = "glMultiTexCoord1sv",
    [glMultiTexCoord2d_INDEX] = "glMultiTexCoord2d",
    [glMultiTexCoord2dv_INDEX] = "glMultiTexCoord2dv",
    [glMultiTexCoord2f_INDEX] = "glMultiTexCoord2f",
    [glMultiTexCoord2fARB_INDEX] = "glMultiTexCoord2fARB",
    [glMultiTexCoord2fv_INDEX] = "glMultiTexCoord2fv",
    [glMultiTexCoord2fvARB_INDEX] = "glMultiTexCoord2fvARB",
    [glMultiTexCoord2i_INDEX] = "glMultiTexCoord2i",
    [glMultiTexCoord2iv_INDEX] = "glMultiTexCoord2iv",
    [glMultiTexCoord2s_INDEX] = "glMultiTexCoord2s",
    [glMultiTexCoord2sv_INDEX] = "glMultiTexCoord2sv",
    [glMultiTexCoord3d_INDEX] = "glMultiTexCoord3d",
    [glMultiTexCoord3dv_INDEX] = "glMultiTexCoord3dv",
    [glMultiTexCoord3f_INDEX] = "glMultiTexCoord3f",
    [glMultiTexCoord3fv_INDEX] = "glMultiTexCoord3fv",
    [glMultiTexCoord3i_INDEX] = "glMultiTexCoord3i",
    [glMultiTexCoord3iv_INDEX] = "glMultiTexCoord3iv",
    [glMultiTexCoord3s_INDEX] = "glMultiTexCoord3s",
    [glMultiTexCoord3sv_INDEX] = "glMultiTexCoord3sv",
    [glMultiTexCoord4d_INDEX] = "glMultiTexCoord4d",
    [glMultiTexCoord4dv_INDEX] = "glMultiTexCoord4dv",
    [glMultiTexCoord4f_INDEX] = "glMultiTexCoord4f",
    [glMultiTexCoord4fARB_INDEX] = "glMultiTexCoord4fARB",
    [glMultiTexCoord4fv_INDEX] = "glMultiTexCoord4fv",
    [glMultiTexCoord4fvARB_INDEX] = "glMultiTexCoord4fvARB",
    [glMultiTexCoord4i_INDEX] = "glMultiTexCoord4i",
    [glMultiTexCoord4iv_INDEX] = "glMultiTexCoord4iv",
    [glMultiTexCoord4s_INDEX] = "glMultiTexCoord4s",
    [glMultiTexCoord4sv_INDEX] = "glMultiTexCoord4sv",
    [glNewList_INDEX] = "glNewList",
    [glNormal3b_INDEX] = "glNormal3b",
    [glNormal3bv_INDEX] = "glNormal3bv",
    [glNormal3d_INDEX] = "glNormal3d",
    [glNormal3dv_INDEX] = "glNormal3dv",
    [glNormal3f_INDEX] = "glNormal3f",
    [glNormal3fv_INDEX] = "glNormal3fv",
    [glNormal3i_INDEX] = "glNormal3i",
    [glNormal3iv_INDEX] = "glNormal3iv",
    [glNormal3s_INDEX] = "glNormal3s",
    [glNormal3sv_INDEX] = "glNormal3sv",
    [glNormalPointer_INDEX] = "glNormalPointer",
    [glOrtho_INDEX] = "glOrtho",
    [glOrthofOES_INDEX] = "glOrthofOES",
    [glPassThrough_INDEX] = "glPassThrough",
    [glPixelStorei_INDEX] = "glPixelStorei",
    [glPixelTransferf_INDEX] = "glPixelTransferf",
    [glPixelTransferi_INDEX] = "glPixelTransferi",
    [glPixelZoom_INDEX] = "glPixelZoom",
    [glPointParameterf_INDEX] = "glPointParameterf",
    [glPointParameterfv_INDEX] = "glPointParameterfv",
    [glPointSize_INDEX] = "glPointSize",
    [glPolygonMode_INDEX] = "glPolygonMode",
    [glPolygonOffset_INDEX] = "glPolygonOffset",
    [glPolygonStipple_INDEX] = "glPolygonStipple",
    [glPopAttrib_INDEX] = "glPopAttrib",
    [glPopClientAttrib_INDEX] = "glPopClientAttrib",
    [glPopMatrix_INDEX] = "glPopMatrix",
    [glPopName_INDEX] = "glPopName",
    [glPrioritizeTextures_INDEX] = "glPrioritizeTextures",
    [glPushAttrib_INDEX] = "glPushAttrib",
    [glPushClientAttrib_INDEX] = "glPushClientAttrib",
    [glPushMatrix_INDEX] = "glPushMatrix",
    [glPushName_INDEX] = "glPushName",
    [glRasterPos2d_INDEX] = "glRasterPos2d",
    [glRasterPos2dv_INDEX] = "glRasterPos2dv",
    [glRasterPos2f_INDEX] = "glRasterPos2f",
    [glRasterPos2fv_INDEX] = "glRasterPos2fv",
    [glRasterPos2i_INDEX] = "glRasterPos2i",
    [glRasterPos2iv_INDEX] = "glRasterPos2iv",
    [glRasterPos2s_INDEX] = "glRasterPos2s",
    [glRasterPos2sv_INDEX] = "glRasterPos2sv",
    [glRasterPos3d_INDEX] = "glRasterPos3d",
    [glRasterPos3dv_INDEX] = "glRasterPos3dv",
    [glRasterPos3f_INDEX] = "glRasterPos3f",
    [glRasterPos3fv_INDEX] = "glRasterPos3fv",
    [glRasterPos3i_INDEX] = "glRasterPos3i",
    [glRasterPos3iv_INDEX] = "glRasterPos3iv",
    [glRasterPos3s_INDEX] = "glRasterPos3s",
    [glRasterPos3sv_INDEX] = "glRasterPos3sv",
    [glRasterPos4d_INDEX] = "glRasterPos4d",
    [glRasterPos4dv_INDEX] = "glRasterPos4dv",
    [glRasterPos4f_INDEX] = "glRasterPos4f",
    [glRasterPos4fv_INDEX] = "glRasterPos4fv",
    [glRasterPos4i_INDEX] = "glRasterPos4i",
    [glRasterPos4iv_INDEX] = "glRasterPos4iv",
    [glRasterPos4s_INDEX] = "glRasterPos4s",
    [glRasterPos4sv_INDEX] = "glRasterPos4sv",
    [glReadBuffer_INDEX] = "glReadBuffer",
    [glReadPixels_INDEX] = "glReadPixels",
    [glRectd_INDEX] = "glRectd",
    [glRectdv_INDEX] = "glRectdv",
    [glRectf_INDEX] = "glRectf",
    [glRectfv_INDEX] = "glRectfv",
    [glRecti_INDEX] = "glRecti",
    [glRectiv_INDEX] = "glRectiv",
    [glRects_INDEX] = "glRects",
    [glRectsv_INDEX] = "glRectsv",
    [glRenderMode_INDEX] = "glRenderMode",
    [glRotated_INDEX] = "glRotated",
    [glRotatef_INDEX] = "glRotatef",
    [glSampleCoverage_INDEX] = "glSampleCoverage",
    [glScaled_INDEX] = "glScaled",
    [glScalef_INDEX] = "glScalef",
    [glScissor_INDEX] = "glScissor",
    [glSecondaryColor3b_INDEX] = "glSecondaryColor3b",
    [glSecondaryColor3bv_INDEX] = "glSecondaryColor3bv",
    [glSecondaryColor3d_INDEX] = "glSecondaryColor3d",
    [glSecondaryColor3dv_INDEX] = "glSecondaryColor3dv",
    [glSecondaryColor3f_INDEX] = "glSecondaryColor3f",
    [glSecondaryColor3fv_INDEX] = "glSecondaryColor3fv",
    [glSecondaryColor3i_INDEX] = "glSecondaryColor3i",
    [glSecondaryColor3iv_INDEX] = "glSecondaryColor3iv",
    [glSecondaryColor3s_INDEX] = "glSecondaryColor3s",
    [glSecondaryColor3sv_INDEX] = "glSecondaryColor3sv",
    [glSecondaryColor3ub_INDEX] = "glSecondaryColor3ub",
    [glSecondaryColor3ubv_INDEX] = "glSecondaryColor3ubv",
    [glSecondaryColor3ui_INDEX] = "glSecondaryColor3ui",
    [glSecondaryColor3uiv_INDEX] = "glSecondaryColor3uiv",
    [glSecondaryColor3us_INDEX] = "glSecondaryColor3us",
    [glSecondaryColor3usv_INDEX] = "glSecondaryColor3usv",
    [glSelectBuffer_INDEX] = "glSelectBuffer",
    [glShadeModel_INDEX] = "glShadeModel",
    [glStencilFunc_INDEX] = "glStencilFunc",
    [glStencilMask_INDEX] = "glStencilMask",
    [glStencilOp_INDEX] = "glStencilOp",
    [glTexCoord1d_INDEX] = "glTexCoord1d",
    [glTexCoord1dv_INDEX] = "glTexCoord1dv",
    [glTexCoord1f_INDEX] = "glTexCoord1f",
    [glTexCoord1fv_INDEX] = "glTexCoord1fv",
    [glTexCoord1i_INDEX] = "glTexCoord1i",
    [glTexCoord1iv_INDEX] = "glTexCoord1iv",
    [glTexCoord1s_INDEX] = "glTexCoord1s",
    [glTexCoord1sv_INDEX] = "glTexCoord1sv",
    [glTexCoord2d_INDEX] = "glTexCoord2d",
    [glTexCoord2dv_INDEX] = "glTexCoord2dv",
    [glTexCoord2f_INDEX] = "glTexCoord2f",
    [glTexCoord2fv_INDEX] = "glTexCoord2fv",
    [glTexCoord2i_INDEX] = "glTexCoord2i",
    [glTexCoord2iv_INDEX] = "glTexCoord2iv",
    [glTexCoord2s_INDEX] = "glTexCoord2s",
    [glTexCoord2sv_INDEX] = "glTexCoord2sv",
    [glTexCoord3d_INDEX] = "glTexCoord3d",
    [glTexCoord3dv_INDEX] = "glTexCoord3dv",
    [glTexCoord3f_INDEX] = "glTexCoord3f",
    [glTexCoord3fv_INDEX] = "glTexCoord3fv",
    [glTexCoord3i_INDEX] = "glTexCoord3i",
    [glTexCoord3iv_INDEX] = "glTexCoord3iv",
    [glTexCoord3s_INDEX] = "glTexCoord3s",
    [glTexCoord3sv_INDEX] = "glTexCoord3sv",
    [glTexCoord4d_INDEX] = "glTexCoord4d",
    [glTexCoord4dv_INDEX] = "glTexCoord4dv",
    [glTexCoord4f_INDEX] = "glTexCoord4f",
    [glTexCoord4fv_INDEX] = "glTexCoord4fv",
    [glTexCoord4i_INDEX] = "glTexCoord4i",
    [glTexCoord4iv_INDEX] = "glTexCoord4iv",
    [glTexCoord4s_INDEX] = "glTexCoord4s",
    [glTexCoord4sv_INDEX] = "glTexCoord4sv",
    [glTexCoordPointer_INDEX] = "glTexCoordPointer",
    [glTexEnvf_INDEX] = "glTexEnvf",
    [glTexEnvfv_INDEX] = "glTexEnvfv",
    [glTexEnvi_INDEX] = "glTexEnvi",
    [glTexEnviv_INDEX] = "glTexEnviv",
    [glTexGend_INDEX] = "glTexGend",
    [glTexGendv_INDEX] = "glTexGendv",
    [glTexGenf_INDEX] = "glTexGenf",
    [glTexGenfv_INDEX] = "glTexGenfv",
    [glTexGeni_INDEX] = "glTexGeni",
    [glTexGeniv_INDEX] = "glTexGeniv",
    [glTexImage1D_INDEX] = "glTexImage1D",
    [glTexImage2D_INDEX] = "glTexImage2D",
    [glTexImage3D_INDEX] = "glTexImage3D",
    [glTexParameterf_INDEX] = "glTexParameterf",
    [glTexParameterfv_INDEX] = "glTexParameterfv",
    [glTexParameteri_INDEX] = "glTexParameteri",
    [glTexParameteriv_INDEX] = "glTexParameteriv",
    [glTexSubImage1D_INDEX] = "glTexSubImage1D",
    [glTexSubImage2D_INDEX] = "glTexSubImage2D",
    [glTexSubImage3D_INDEX] = "glTexSubImage3D",
    [glTranslated_INDEX] = "glTranslated",
    [glTranslatef_INDEX] = "glTranslatef",
    [glUnlockArraysEXT_INDEX] = "glUnlockArraysEXT",
    [glVertex2d_INDEX] = "glVertex2d",
    [glVertex2dv_INDEX] = "glVertex2dv",
    [glVertex2f_INDEX] = "glVertex2f",
    [glVertex2fv_INDEX] = "glVertex2fv",
    [glVertex2i_INDEX] = "glVertex2i",
    [glVertex2iv_INDEX] = "glVertex2iv",
    [glVertex2s_INDEX] = "glVertex2s",
    [glVertex2sv_INDEX] = "glVertex2sv",
    [glVertex3d_INDEX] = "glVertex3d",
    [glVertex3dv_INDEX] = "glVertex3dv",
    [glVertex3f_INDEX] = "glVertex3f",
    [glVertex3fv_INDEX] = "glVertex3fv",
    [glVertex3i_INDEX] = "glVertex3i",
    [glVertex3iv_INDEX] = "glVertex3iv",
    [glVertex3s_INDEX] = "glVertex3s",
    [glVertex3sv_INDEX] = "glVertex3sv",
    [glVertex4d_INDEX] = "glVertex4d",
    [glVertex4dv_INDEX] = "glVertex4dv",
    [glVertex4f_INDEX] = "glVertex4f",
    [glVertex4fv_INDEX] = "glVertex4fv",
    [glVertex4i_INDEX] = "glVertex4i",
    [glVertex4iv_INDEX] = "glVertex4iv",
    [glVertex4s_INDEX] = "glVertex4s",
    [glVertex4sv_INDEX] = "glVertex4sv",
    [glVertexPointer_INDEX] = "glVertexPointer",
    [glViewport_INDEX] = "glViewport",
    [glWindowPos2d_INDEX] = "glWindowPos2d",
    [glWindowPos2dv_INDEX] = "glWindowPos2dv",
    [glWindowPos2f_INDEX] = "glWindowPos2f",
    [glWindowPos2fv_INDEX] = "glWindowPos2fv",
    [glWindowPos2i_INDEX] = "glWindowPos2i",
    [glWindowPos2iv_INDEX] = "glWindowPos2iv",
    [glWindowPos2s_INDEX] = "glWindowPos2s",
    [glWindowPos2sv_INDEX] = "glWindowPos2sv",
    [glWindowPos3d_INDEX] = "glWindowPos3d",
    [glWindowPos3dv_INDEX] = "glWindowPos3dv",
    [glWindowPos3f_INDEX] = "glWindowPos3f",
    [glWindowPos3fv_INDEX] = "glWindowPos3fv",
    [glWindowPos3i_INDEX] = "glWindowPos3i",
    [glWindowPos3iv_INDEX] = "glWindowPos3iv",
    [glWindowPos3s_INDEX] = "glWindowPos3s",
    [glWindowPos3sv_INDEX] = "glWindowPos3sv",
    [glXChooseFBConfig_INDEX] = "glXChooseFBConfig",
    [glXChooseVisual_INDEX] = "glXChooseVisual",
    [glXCopyContext_INDEX] = "glXCopyContext",
    [glXCreateContext_INDEX] = "glXCreateContext",
    [glXCreateContextAttribsARB_INDEX] = "glXCreateContextAttribsARB",
    [glXCreateGLXPixmap_INDEX] = "glXCreateGLXPixmap",
    [glXCreateNewContext_INDEX] = "glXCreateNewContext",
    [glXCreateWindow_INDEX] = "glXCreateWindow",
    [glXDestroyContext_INDEX] = "glXDestroyContext",
    [glXDestroyGLXPixmap_INDEX] = "glXDestroyGLXPixmap",
    [glXDestroyWindow_INDEX] = "glXDestroyWindow",
    [glXGetClientString_INDEX] = "glXGetClientString",
    [glXGetConfig_INDEX] = "glXGetConfig",
    [glXGetCurrentContext_INDEX] = "glXGetCurrentContext",
    [glXGetCurrentDisplay_INDEX] = "glXGetCurrentDisplay",
    [glXGetCurrentDrawable_INDEX] = "glXGetCurrentDrawable",
    [glXGetFBConfigAttrib_INDEX] = "glXGetFBConfigAttrib",
    [glXGetFBConfigs_INDEX] = "glXGetFBConfigs",
    [glXGetProcAddress_INDEX] = "glXGetProcAddress",
    [glXGetProcAddressARB_INDEX] = "glXGetProcAddressARB",
    [glXGetVisualFromFBConfig_INDEX] = "glXGetVisualFromFBConfig",
    [glXIsDirect_INDEX] = "glXIsDirect",
    [glXMakeContextCurrent_INDEX] = "glXMakeContextCurrent",
    [glXMakeCurrent_INDEX] = "glXMakeCurrent",
    [glXQueryExtension_INDEX] = "glXQueryExtension",
    [glXQueryExtensionsString_INDEX] = "glXQueryExtensionsString",
    [glXQueryServerString_INDEX] = "glXQueryServerString",
    [glXQueryVersion_INDEX] = "glXQueryVersion",
    [glXReleaseBuffersMESA_INDEX] = "glXReleaseBuffersMESA",
    [glXSwapBuffers_INDEX] = "glXSwapBuffers",
    [glXSwapIntervalEXT_INDEX] = "glXSwapIntervalEXT",
    [glXSwapIntervalMESA_INDEX] = "glXSwapIntervalMESA",
    [glXSwapIntervalSGI_INDEX] = "glXSwapIntervalSGI",
    [glXUseXFont_INDEX] = "glXUseXFont",
    [glXWaitGL_INDEX] = "glXWaitGL",
    [glXWaitX_INDEX] = "glXWaitX",
};

packed_call_t *pack_glActiveTexture(glActiveTexture_PACKED *_dst, GLenum texture) {
    if (_dst == NULL) _dst = malloc(sizeof(glActiveTexture_PACKED));
    _dst->index = glActiveTexture_INDEX;
    _dst->args.texture = (GLenum)texture;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glActiveTextureARB(glActiveTextureARB_PACKED *_dst, GLenum texture) {
    if (_dst == NULL) _dst = malloc(sizeof(glActiveTextureARB_PACKED));
    _dst->index = glActiveTextureARB_INDEX;
    _dst->args.texture = (GLenum)texture;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glAlphaFunc(glAlphaFunc_PACKED *_dst, GLenum func, GLfloat ref) {
    if (_dst == NULL) _dst = malloc(sizeof(glAlphaFunc_PACKED));
    _dst->index = glAlphaFunc_INDEX;
    _dst->args.func = (GLenum)func;
    _dst->args.ref = (GLfloat)ref;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glAreTexturesResident(glAreTexturesResident_PACKED *_dst, GLsizei n, const GLuint * textures, GLboolean * residences) {
    if (_dst == NULL) _dst = malloc(sizeof(glAreTexturesResident_PACKED));
    _dst->index = glAreTexturesResident_INDEX;
    _dst->args.n = (GLsizei)n;
    _dst->args.textures = (GLuint *)textures;
    _dst->args.residences = (GLboolean *)residences;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glArrayElement(glArrayElement_PACKED *_dst, GLint i) {
    if (_dst == NULL) _dst = malloc(sizeof(glArrayElement_PACKED));
    _dst->index = glArrayElement_INDEX;
    _dst->args.i = (GLint)i;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBegin(glBegin_PACKED *_dst, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glBegin_PACKED));
    _dst->index = glBegin_INDEX;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBindBuffer(glBindBuffer_PACKED *_dst, GLenum target, GLuint buffer) {
    if (_dst == NULL) _dst = malloc(sizeof(glBindBuffer_PACKED));
    _dst->index = glBindBuffer_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.buffer = (GLuint)buffer;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBindTexture(glBindTexture_PACKED *_dst, GLenum target, GLuint texture) {
    if (_dst == NULL) _dst = malloc(sizeof(glBindTexture_PACKED));
    _dst->index = glBindTexture_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.texture = (GLuint)texture;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBitmap(glBitmap_PACKED *_dst, GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap) {
    if (_dst == NULL) _dst = malloc(sizeof(glBitmap_PACKED));
    _dst->index = glBitmap_INDEX;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.xorig = (GLfloat)xorig;
    _dst->args.yorig = (GLfloat)yorig;
    _dst->args.xmove = (GLfloat)xmove;
    _dst->args.ymove = (GLfloat)ymove;
    _dst->args.bitmap = (GLubyte *)bitmap;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBlendColor(glBlendColor_PACKED *_dst, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glBlendColor_PACKED));
    _dst->index = glBlendColor_INDEX;
    _dst->args.red = (GLfloat)red;
    _dst->args.green = (GLfloat)green;
    _dst->args.blue = (GLfloat)blue;
    _dst->args.alpha = (GLfloat)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBlendEquation(glBlendEquation_PACKED *_dst, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glBlendEquation_PACKED));
    _dst->index = glBlendEquation_INDEX;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBlendEquationSeparate(glBlendEquationSeparate_PACKED *_dst, GLenum modeRGB, GLenum modeAlpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glBlendEquationSeparate_PACKED));
    _dst->index = glBlendEquationSeparate_INDEX;
    _dst->args.modeRGB = (GLenum)modeRGB;
    _dst->args.modeAlpha = (GLenum)modeAlpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBlendEquationSeparatei(glBlendEquationSeparatei_PACKED *_dst, GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glBlendEquationSeparatei_PACKED));
    _dst->index = glBlendEquationSeparatei_INDEX;
    _dst->args.buf = (GLuint)buf;
    _dst->args.modeRGB = (GLenum)modeRGB;
    _dst->args.modeAlpha = (GLenum)modeAlpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBlendFunc(glBlendFunc_PACKED *_dst, GLenum sfactor, GLenum dfactor) {
    if (_dst == NULL) _dst = malloc(sizeof(glBlendFunc_PACKED));
    _dst->index = glBlendFunc_INDEX;
    _dst->args.sfactor = (GLenum)sfactor;
    _dst->args.dfactor = (GLenum)dfactor;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBlendFuncSeparate(glBlendFuncSeparate_PACKED *_dst, GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glBlendFuncSeparate_PACKED));
    _dst->index = glBlendFuncSeparate_INDEX;
    _dst->args.sfactorRGB = (GLenum)sfactorRGB;
    _dst->args.dfactorRGB = (GLenum)dfactorRGB;
    _dst->args.sfactorAlpha = (GLenum)sfactorAlpha;
    _dst->args.dfactorAlpha = (GLenum)dfactorAlpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBlendFuncSeparatei(glBlendFuncSeparatei_PACKED *_dst, GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glBlendFuncSeparatei_PACKED));
    _dst->index = glBlendFuncSeparatei_INDEX;
    _dst->args.buf = (GLuint)buf;
    _dst->args.srcRGB = (GLenum)srcRGB;
    _dst->args.dstRGB = (GLenum)dstRGB;
    _dst->args.srcAlpha = (GLenum)srcAlpha;
    _dst->args.dstAlpha = (GLenum)dstAlpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBufferData(glBufferData_PACKED *_dst, GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage) {
    if (_dst == NULL) _dst = malloc(sizeof(glBufferData_PACKED));
    _dst->index = glBufferData_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.size = (GLsizeiptr)size;
    _dst->args.data = (GLvoid *)data;
    _dst->args.usage = (GLenum)usage;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glBufferSubData(glBufferSubData_PACKED *_dst, GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data) {
    if (_dst == NULL) _dst = malloc(sizeof(glBufferSubData_PACKED));
    _dst->index = glBufferSubData_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.offset = (GLintptr)offset;
    _dst->args.size = (GLsizeiptr)size;
    _dst->args.data = (GLvoid *)data;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glCallList(glCallList_PACKED *_dst, GLuint list) {
    if (_dst == NULL) _dst = malloc(sizeof(glCallList_PACKED));
    _dst->index = glCallList_INDEX;
    _dst->args.list = (GLuint)list;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glCallLists(glCallLists_PACKED *_dst, GLsizei n, GLenum type, const GLvoid * lists) {
    if (_dst == NULL) _dst = malloc(sizeof(glCallLists_PACKED));
    _dst->index = glCallLists_INDEX;
    _dst->args.n = (GLsizei)n;
    _dst->args.type = (GLenum)type;
    _dst->args.lists = (GLvoid *)lists;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClear(glClear_PACKED *_dst, GLbitfield mask) {
    if (_dst == NULL) _dst = malloc(sizeof(glClear_PACKED));
    _dst->index = glClear_INDEX;
    _dst->args.mask = (GLbitfield)mask;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClearAccum(glClearAccum_PACKED *_dst, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glClearAccum_PACKED));
    _dst->index = glClearAccum_INDEX;
    _dst->args.red = (GLfloat)red;
    _dst->args.green = (GLfloat)green;
    _dst->args.blue = (GLfloat)blue;
    _dst->args.alpha = (GLfloat)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClearColor(glClearColor_PACKED *_dst, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glClearColor_PACKED));
    _dst->index = glClearColor_INDEX;
    _dst->args.red = (GLfloat)red;
    _dst->args.green = (GLfloat)green;
    _dst->args.blue = (GLfloat)blue;
    _dst->args.alpha = (GLfloat)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClearDepth(glClearDepth_PACKED *_dst, GLdouble depth) {
    if (_dst == NULL) _dst = malloc(sizeof(glClearDepth_PACKED));
    _dst->index = glClearDepth_INDEX;
    _dst->args.depth = (GLdouble)depth;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClearDepthf(glClearDepthf_PACKED *_dst, GLfloat depth) {
    if (_dst == NULL) _dst = malloc(sizeof(glClearDepthf_PACKED));
    _dst->index = glClearDepthf_INDEX;
    _dst->args.depth = (GLfloat)depth;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClearDepthfOES(glClearDepthfOES_PACKED *_dst, GLclampf depth) {
    if (_dst == NULL) _dst = malloc(sizeof(glClearDepthfOES_PACKED));
    _dst->index = glClearDepthfOES_INDEX;
    _dst->args.depth = (GLclampf)depth;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClearStencil(glClearStencil_PACKED *_dst, GLint s) {
    if (_dst == NULL) _dst = malloc(sizeof(glClearStencil_PACKED));
    _dst->index = glClearStencil_INDEX;
    _dst->args.s = (GLint)s;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClientActiveTexture(glClientActiveTexture_PACKED *_dst, GLenum texture) {
    if (_dst == NULL) _dst = malloc(sizeof(glClientActiveTexture_PACKED));
    _dst->index = glClientActiveTexture_INDEX;
    _dst->args.texture = (GLenum)texture;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClientActiveTextureARB(glClientActiveTextureARB_PACKED *_dst, GLenum texture) {
    if (_dst == NULL) _dst = malloc(sizeof(glClientActiveTextureARB_PACKED));
    _dst->index = glClientActiveTextureARB_INDEX;
    _dst->args.texture = (GLenum)texture;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClipPlane(glClipPlane_PACKED *_dst, GLenum plane, const GLdouble * equation) {
    if (_dst == NULL) _dst = malloc(sizeof(glClipPlane_PACKED));
    _dst->index = glClipPlane_INDEX;
    _dst->args.plane = (GLenum)plane;
    _dst->args.equation = (GLdouble *)equation;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glClipPlanefOES(glClipPlanefOES_PACKED *_dst, GLenum plane, const GLfloat * equation) {
    if (_dst == NULL) _dst = malloc(sizeof(glClipPlanefOES_PACKED));
    _dst->index = glClipPlanefOES_INDEX;
    _dst->args.plane = (GLenum)plane;
    _dst->args.equation = (GLfloat *)equation;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3b(glColor3b_PACKED *_dst, GLbyte red, GLbyte green, GLbyte blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3b_PACKED));
    _dst->index = glColor3b_INDEX;
    _dst->args.red = (GLbyte)red;
    _dst->args.green = (GLbyte)green;
    _dst->args.blue = (GLbyte)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3bv(glColor3bv_PACKED *_dst, const GLbyte * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3bv_PACKED));
    _dst->index = glColor3bv_INDEX;
    _dst->args.v = (GLbyte *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3d(glColor3d_PACKED *_dst, GLdouble red, GLdouble green, GLdouble blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3d_PACKED));
    _dst->index = glColor3d_INDEX;
    _dst->args.red = (GLdouble)red;
    _dst->args.green = (GLdouble)green;
    _dst->args.blue = (GLdouble)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3dv(glColor3dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3dv_PACKED));
    _dst->index = glColor3dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3f(glColor3f_PACKED *_dst, GLfloat red, GLfloat green, GLfloat blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3f_PACKED));
    _dst->index = glColor3f_INDEX;
    _dst->args.red = (GLfloat)red;
    _dst->args.green = (GLfloat)green;
    _dst->args.blue = (GLfloat)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3fv(glColor3fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3fv_PACKED));
    _dst->index = glColor3fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3i(glColor3i_PACKED *_dst, GLint red, GLint green, GLint blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3i_PACKED));
    _dst->index = glColor3i_INDEX;
    _dst->args.red = (GLint)red;
    _dst->args.green = (GLint)green;
    _dst->args.blue = (GLint)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3iv(glColor3iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3iv_PACKED));
    _dst->index = glColor3iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3s(glColor3s_PACKED *_dst, GLshort red, GLshort green, GLshort blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3s_PACKED));
    _dst->index = glColor3s_INDEX;
    _dst->args.red = (GLshort)red;
    _dst->args.green = (GLshort)green;
    _dst->args.blue = (GLshort)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3sv(glColor3sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3sv_PACKED));
    _dst->index = glColor3sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3ub(glColor3ub_PACKED *_dst, GLubyte red, GLubyte green, GLubyte blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3ub_PACKED));
    _dst->index = glColor3ub_INDEX;
    _dst->args.red = (GLubyte)red;
    _dst->args.green = (GLubyte)green;
    _dst->args.blue = (GLubyte)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3ubv(glColor3ubv_PACKED *_dst, const GLubyte * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3ubv_PACKED));
    _dst->index = glColor3ubv_INDEX;
    _dst->args.v = (GLubyte *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3ui(glColor3ui_PACKED *_dst, GLuint red, GLuint green, GLuint blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3ui_PACKED));
    _dst->index = glColor3ui_INDEX;
    _dst->args.red = (GLuint)red;
    _dst->args.green = (GLuint)green;
    _dst->args.blue = (GLuint)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3uiv(glColor3uiv_PACKED *_dst, const GLuint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3uiv_PACKED));
    _dst->index = glColor3uiv_INDEX;
    _dst->args.v = (GLuint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3us(glColor3us_PACKED *_dst, GLushort red, GLushort green, GLushort blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3us_PACKED));
    _dst->index = glColor3us_INDEX;
    _dst->args.red = (GLushort)red;
    _dst->args.green = (GLushort)green;
    _dst->args.blue = (GLushort)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor3usv(glColor3usv_PACKED *_dst, const GLushort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor3usv_PACKED));
    _dst->index = glColor3usv_INDEX;
    _dst->args.v = (GLushort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4b(glColor4b_PACKED *_dst, GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4b_PACKED));
    _dst->index = glColor4b_INDEX;
    _dst->args.red = (GLbyte)red;
    _dst->args.green = (GLbyte)green;
    _dst->args.blue = (GLbyte)blue;
    _dst->args.alpha = (GLbyte)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4bv(glColor4bv_PACKED *_dst, const GLbyte * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4bv_PACKED));
    _dst->index = glColor4bv_INDEX;
    _dst->args.v = (GLbyte *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4d(glColor4d_PACKED *_dst, GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4d_PACKED));
    _dst->index = glColor4d_INDEX;
    _dst->args.red = (GLdouble)red;
    _dst->args.green = (GLdouble)green;
    _dst->args.blue = (GLdouble)blue;
    _dst->args.alpha = (GLdouble)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4dv(glColor4dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4dv_PACKED));
    _dst->index = glColor4dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4f(glColor4f_PACKED *_dst, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4f_PACKED));
    _dst->index = glColor4f_INDEX;
    _dst->args.red = (GLfloat)red;
    _dst->args.green = (GLfloat)green;
    _dst->args.blue = (GLfloat)blue;
    _dst->args.alpha = (GLfloat)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4fv(glColor4fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4fv_PACKED));
    _dst->index = glColor4fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4i(glColor4i_PACKED *_dst, GLint red, GLint green, GLint blue, GLint alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4i_PACKED));
    _dst->index = glColor4i_INDEX;
    _dst->args.red = (GLint)red;
    _dst->args.green = (GLint)green;
    _dst->args.blue = (GLint)blue;
    _dst->args.alpha = (GLint)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4iv(glColor4iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4iv_PACKED));
    _dst->index = glColor4iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4s(glColor4s_PACKED *_dst, GLshort red, GLshort green, GLshort blue, GLshort alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4s_PACKED));
    _dst->index = glColor4s_INDEX;
    _dst->args.red = (GLshort)red;
    _dst->args.green = (GLshort)green;
    _dst->args.blue = (GLshort)blue;
    _dst->args.alpha = (GLshort)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4sv(glColor4sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4sv_PACKED));
    _dst->index = glColor4sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4ub(glColor4ub_PACKED *_dst, GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4ub_PACKED));
    _dst->index = glColor4ub_INDEX;
    _dst->args.red = (GLubyte)red;
    _dst->args.green = (GLubyte)green;
    _dst->args.blue = (GLubyte)blue;
    _dst->args.alpha = (GLubyte)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4ubv(glColor4ubv_PACKED *_dst, const GLubyte * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4ubv_PACKED));
    _dst->index = glColor4ubv_INDEX;
    _dst->args.v = (GLubyte *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4ui(glColor4ui_PACKED *_dst, GLuint red, GLuint green, GLuint blue, GLuint alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4ui_PACKED));
    _dst->index = glColor4ui_INDEX;
    _dst->args.red = (GLuint)red;
    _dst->args.green = (GLuint)green;
    _dst->args.blue = (GLuint)blue;
    _dst->args.alpha = (GLuint)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4uiv(glColor4uiv_PACKED *_dst, const GLuint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4uiv_PACKED));
    _dst->index = glColor4uiv_INDEX;
    _dst->args.v = (GLuint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4us(glColor4us_PACKED *_dst, GLushort red, GLushort green, GLushort blue, GLushort alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4us_PACKED));
    _dst->index = glColor4us_INDEX;
    _dst->args.red = (GLushort)red;
    _dst->args.green = (GLushort)green;
    _dst->args.blue = (GLushort)blue;
    _dst->args.alpha = (GLushort)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColor4usv(glColor4usv_PACKED *_dst, const GLushort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glColor4usv_PACKED));
    _dst->index = glColor4usv_INDEX;
    _dst->args.v = (GLushort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColorMask(glColorMask_PACKED *_dst, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
    if (_dst == NULL) _dst = malloc(sizeof(glColorMask_PACKED));
    _dst->index = glColorMask_INDEX;
    _dst->args.red = (GLboolean)red;
    _dst->args.green = (GLboolean)green;
    _dst->args.blue = (GLboolean)blue;
    _dst->args.alpha = (GLboolean)alpha;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColorMaterial(glColorMaterial_PACKED *_dst, GLenum face, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glColorMaterial_PACKED));
    _dst->index = glColorMaterial_INDEX;
    _dst->args.face = (GLenum)face;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glColorPointer(glColorPointer_PACKED *_dst, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    if (_dst == NULL) _dst = malloc(sizeof(glColorPointer_PACKED));
    _dst->index = glColorPointer_INDEX;
    _dst->args.size = (GLint)size;
    _dst->args.type = (GLenum)type;
    _dst->args.stride = (GLsizei)stride;
    _dst->args.pointer = (GLvoid *)pointer;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glCompressedTexImage2D(glCompressedTexImage2D_PACKED *_dst, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data) {
    if (_dst == NULL) _dst = malloc(sizeof(glCompressedTexImage2D_PACKED));
    _dst->index = glCompressedTexImage2D_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.internalformat = (GLenum)internalformat;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.border = (GLint)border;
    _dst->args.imageSize = (GLsizei)imageSize;
    _dst->args.data = (GLvoid *)data;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glCompressedTexSubImage2D(glCompressedTexSubImage2D_PACKED *_dst, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data) {
    if (_dst == NULL) _dst = malloc(sizeof(glCompressedTexSubImage2D_PACKED));
    _dst->index = glCompressedTexSubImage2D_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.xoffset = (GLint)xoffset;
    _dst->args.yoffset = (GLint)yoffset;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.format = (GLenum)format;
    _dst->args.imageSize = (GLsizei)imageSize;
    _dst->args.data = (GLvoid *)data;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glCopyPixels(glCopyPixels_PACKED *_dst, GLint x, GLint y, GLsizei width, GLsizei height, GLenum type) {
    if (_dst == NULL) _dst = malloc(sizeof(glCopyPixels_PACKED));
    _dst->index = glCopyPixels_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.type = (GLenum)type;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glCopyTexImage2D(glCopyTexImage2D_PACKED *_dst, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
    if (_dst == NULL) _dst = malloc(sizeof(glCopyTexImage2D_PACKED));
    _dst->index = glCopyTexImage2D_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.internalformat = (GLenum)internalformat;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.border = (GLint)border;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glCopyTexSubImage2D(glCopyTexSubImage2D_PACKED *_dst, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
    if (_dst == NULL) _dst = malloc(sizeof(glCopyTexSubImage2D_PACKED));
    _dst->index = glCopyTexSubImage2D_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.xoffset = (GLint)xoffset;
    _dst->args.yoffset = (GLint)yoffset;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glCullFace(glCullFace_PACKED *_dst, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glCullFace_PACKED));
    _dst->index = glCullFace_INDEX;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDeleteBuffers(glDeleteBuffers_PACKED *_dst, GLsizei n, const GLuint * buffers) {
    if (_dst == NULL) _dst = malloc(sizeof(glDeleteBuffers_PACKED));
    _dst->index = glDeleteBuffers_INDEX;
    _dst->args.n = (GLsizei)n;
    _dst->args.buffers = (GLuint *)buffers;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDeleteLists(glDeleteLists_PACKED *_dst, GLuint list, GLsizei range) {
    if (_dst == NULL) _dst = malloc(sizeof(glDeleteLists_PACKED));
    _dst->index = glDeleteLists_INDEX;
    _dst->args.list = (GLuint)list;
    _dst->args.range = (GLsizei)range;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDeleteTextures(glDeleteTextures_PACKED *_dst, GLsizei n, const GLuint * textures) {
    if (_dst == NULL) _dst = malloc(sizeof(glDeleteTextures_PACKED));
    _dst->index = glDeleteTextures_INDEX;
    _dst->args.n = (GLsizei)n;
    _dst->args.textures = (GLuint *)textures;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDepthFunc(glDepthFunc_PACKED *_dst, GLenum func) {
    if (_dst == NULL) _dst = malloc(sizeof(glDepthFunc_PACKED));
    _dst->index = glDepthFunc_INDEX;
    _dst->args.func = (GLenum)func;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDepthMask(glDepthMask_PACKED *_dst, GLboolean flag) {
    if (_dst == NULL) _dst = malloc(sizeof(glDepthMask_PACKED));
    _dst->index = glDepthMask_INDEX;
    _dst->args.flag = (GLboolean)flag;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDepthRange(glDepthRange_PACKED *_dst, GLdouble near, GLdouble far) {
    if (_dst == NULL) _dst = malloc(sizeof(glDepthRange_PACKED));
    _dst->index = glDepthRange_INDEX;
    _dst->args.near = (GLdouble)near;
    _dst->args.far = (GLdouble)far;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDepthRangef(glDepthRangef_PACKED *_dst, GLfloat near, GLfloat far) {
    if (_dst == NULL) _dst = malloc(sizeof(glDepthRangef_PACKED));
    _dst->index = glDepthRangef_INDEX;
    _dst->args.near = (GLfloat)near;
    _dst->args.far = (GLfloat)far;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDepthRangefOES(glDepthRangefOES_PACKED *_dst, GLclampf n, GLclampf f) {
    if (_dst == NULL) _dst = malloc(sizeof(glDepthRangefOES_PACKED));
    _dst->index = glDepthRangefOES_INDEX;
    _dst->args.n = (GLclampf)n;
    _dst->args.f = (GLclampf)f;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDisable(glDisable_PACKED *_dst, GLenum cap) {
    if (_dst == NULL) _dst = malloc(sizeof(glDisable_PACKED));
    _dst->index = glDisable_INDEX;
    _dst->args.cap = (GLenum)cap;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDisableClientState(glDisableClientState_PACKED *_dst, GLenum array) {
    if (_dst == NULL) _dst = malloc(sizeof(glDisableClientState_PACKED));
    _dst->index = glDisableClientState_INDEX;
    _dst->args.array = (GLenum)array;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDrawArrays(glDrawArrays_PACKED *_dst, GLenum mode, GLint first, GLsizei count) {
    if (_dst == NULL) _dst = malloc(sizeof(glDrawArrays_PACKED));
    _dst->index = glDrawArrays_INDEX;
    _dst->args.mode = (GLenum)mode;
    _dst->args.first = (GLint)first;
    _dst->args.count = (GLsizei)count;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDrawBuffer(glDrawBuffer_PACKED *_dst, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glDrawBuffer_PACKED));
    _dst->index = glDrawBuffer_INDEX;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDrawElements(glDrawElements_PACKED *_dst, GLenum mode, GLsizei count, GLenum type, const GLvoid * indices) {
    if (_dst == NULL) _dst = malloc(sizeof(glDrawElements_PACKED));
    _dst->index = glDrawElements_INDEX;
    _dst->args.mode = (GLenum)mode;
    _dst->args.count = (GLsizei)count;
    _dst->args.type = (GLenum)type;
    _dst->args.indices = (GLvoid *)indices;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDrawPixels(glDrawPixels_PACKED *_dst, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) {
    if (_dst == NULL) _dst = malloc(sizeof(glDrawPixels_PACKED));
    _dst->index = glDrawPixels_INDEX;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.format = (GLenum)format;
    _dst->args.type = (GLenum)type;
    _dst->args.pixels = (GLvoid *)pixels;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glDrawRangeElements(glDrawRangeElements_PACKED *_dst, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices) {
    if (_dst == NULL) _dst = malloc(sizeof(glDrawRangeElements_PACKED));
    _dst->index = glDrawRangeElements_INDEX;
    _dst->args.mode = (GLenum)mode;
    _dst->args.start = (GLuint)start;
    _dst->args.end = (GLuint)end;
    _dst->args.count = (GLsizei)count;
    _dst->args.type = (GLenum)type;
    _dst->args.indices = (GLvoid *)indices;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEdgeFlag(glEdgeFlag_PACKED *_dst, GLboolean flag) {
    if (_dst == NULL) _dst = malloc(sizeof(glEdgeFlag_PACKED));
    _dst->index = glEdgeFlag_INDEX;
    _dst->args.flag = (GLboolean)flag;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEnable(glEnable_PACKED *_dst, GLenum cap) {
    if (_dst == NULL) _dst = malloc(sizeof(glEnable_PACKED));
    _dst->index = glEnable_INDEX;
    _dst->args.cap = (GLenum)cap;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEnableClientState(glEnableClientState_PACKED *_dst, GLenum array) {
    if (_dst == NULL) _dst = malloc(sizeof(glEnableClientState_PACKED));
    _dst->index = glEnableClientState_INDEX;
    _dst->args.array = (GLenum)array;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEnd(glEnd_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glEnd_PACKED));
    _dst->index = glEnd_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEndList(glEndList_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glEndList_PACKED));
    _dst->index = glEndList_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalCoord1d(glEvalCoord1d_PACKED *_dst, GLdouble u) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalCoord1d_PACKED));
    _dst->index = glEvalCoord1d_INDEX;
    _dst->args.u = (GLdouble)u;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalCoord1dv(glEvalCoord1dv_PACKED *_dst, const GLdouble * u) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalCoord1dv_PACKED));
    _dst->index = glEvalCoord1dv_INDEX;
    _dst->args.u = (GLdouble *)u;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalCoord1f(glEvalCoord1f_PACKED *_dst, GLfloat u) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalCoord1f_PACKED));
    _dst->index = glEvalCoord1f_INDEX;
    _dst->args.u = (GLfloat)u;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalCoord1fv(glEvalCoord1fv_PACKED *_dst, const GLfloat * u) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalCoord1fv_PACKED));
    _dst->index = glEvalCoord1fv_INDEX;
    _dst->args.u = (GLfloat *)u;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalCoord2d(glEvalCoord2d_PACKED *_dst, GLdouble u, GLdouble v) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalCoord2d_PACKED));
    _dst->index = glEvalCoord2d_INDEX;
    _dst->args.u = (GLdouble)u;
    _dst->args.v = (GLdouble)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalCoord2dv(glEvalCoord2dv_PACKED *_dst, const GLdouble * u) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalCoord2dv_PACKED));
    _dst->index = glEvalCoord2dv_INDEX;
    _dst->args.u = (GLdouble *)u;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalCoord2f(glEvalCoord2f_PACKED *_dst, GLfloat u, GLfloat v) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalCoord2f_PACKED));
    _dst->index = glEvalCoord2f_INDEX;
    _dst->args.u = (GLfloat)u;
    _dst->args.v = (GLfloat)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalCoord2fv(glEvalCoord2fv_PACKED *_dst, const GLfloat * u) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalCoord2fv_PACKED));
    _dst->index = glEvalCoord2fv_INDEX;
    _dst->args.u = (GLfloat *)u;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalMesh1(glEvalMesh1_PACKED *_dst, GLenum mode, GLint i1, GLint i2) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalMesh1_PACKED));
    _dst->index = glEvalMesh1_INDEX;
    _dst->args.mode = (GLenum)mode;
    _dst->args.i1 = (GLint)i1;
    _dst->args.i2 = (GLint)i2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalMesh2(glEvalMesh2_PACKED *_dst, GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalMesh2_PACKED));
    _dst->index = glEvalMesh2_INDEX;
    _dst->args.mode = (GLenum)mode;
    _dst->args.i1 = (GLint)i1;
    _dst->args.i2 = (GLint)i2;
    _dst->args.j1 = (GLint)j1;
    _dst->args.j2 = (GLint)j2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalPoint1(glEvalPoint1_PACKED *_dst, GLint i) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalPoint1_PACKED));
    _dst->index = glEvalPoint1_INDEX;
    _dst->args.i = (GLint)i;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glEvalPoint2(glEvalPoint2_PACKED *_dst, GLint i, GLint j) {
    if (_dst == NULL) _dst = malloc(sizeof(glEvalPoint2_PACKED));
    _dst->index = glEvalPoint2_INDEX;
    _dst->args.i = (GLint)i;
    _dst->args.j = (GLint)j;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFeedbackBuffer(glFeedbackBuffer_PACKED *_dst, GLsizei size, GLenum type, GLfloat * buffer) {
    if (_dst == NULL) _dst = malloc(sizeof(glFeedbackBuffer_PACKED));
    _dst->index = glFeedbackBuffer_INDEX;
    _dst->args.size = (GLsizei)size;
    _dst->args.type = (GLenum)type;
    _dst->args.buffer = (GLfloat *)buffer;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFinish(glFinish_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glFinish_PACKED));
    _dst->index = glFinish_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFlush(glFlush_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glFlush_PACKED));
    _dst->index = glFlush_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFogCoordd(glFogCoordd_PACKED *_dst, GLdouble coord) {
    if (_dst == NULL) _dst = malloc(sizeof(glFogCoordd_PACKED));
    _dst->index = glFogCoordd_INDEX;
    _dst->args.coord = (GLdouble)coord;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFogCoorddv(glFogCoorddv_PACKED *_dst, const GLdouble * coord) {
    if (_dst == NULL) _dst = malloc(sizeof(glFogCoorddv_PACKED));
    _dst->index = glFogCoorddv_INDEX;
    _dst->args.coord = (GLdouble *)coord;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFogCoordf(glFogCoordf_PACKED *_dst, GLfloat coord) {
    if (_dst == NULL) _dst = malloc(sizeof(glFogCoordf_PACKED));
    _dst->index = glFogCoordf_INDEX;
    _dst->args.coord = (GLfloat)coord;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFogCoordfv(glFogCoordfv_PACKED *_dst, const GLfloat * coord) {
    if (_dst == NULL) _dst = malloc(sizeof(glFogCoordfv_PACKED));
    _dst->index = glFogCoordfv_INDEX;
    _dst->args.coord = (GLfloat *)coord;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFogf(glFogf_PACKED *_dst, GLenum pname, GLfloat param) {
    if (_dst == NULL) _dst = malloc(sizeof(glFogf_PACKED));
    _dst->index = glFogf_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLfloat)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFogfv(glFogfv_PACKED *_dst, GLenum pname, const GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glFogfv_PACKED));
    _dst->index = glFogfv_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFogi(glFogi_PACKED *_dst, GLenum pname, GLint param) {
    if (_dst == NULL) _dst = malloc(sizeof(glFogi_PACKED));
    _dst->index = glFogi_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLint)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFogiv(glFogiv_PACKED *_dst, GLenum pname, const GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glFogiv_PACKED));
    _dst->index = glFogiv_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFrontFace(glFrontFace_PACKED *_dst, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glFrontFace_PACKED));
    _dst->index = glFrontFace_INDEX;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFrustum(glFrustum_PACKED *_dst, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) {
    if (_dst == NULL) _dst = malloc(sizeof(glFrustum_PACKED));
    _dst->index = glFrustum_INDEX;
    _dst->args.left = (GLdouble)left;
    _dst->args.right = (GLdouble)right;
    _dst->args.bottom = (GLdouble)bottom;
    _dst->args.top = (GLdouble)top;
    _dst->args.zNear = (GLdouble)zNear;
    _dst->args.zFar = (GLdouble)zFar;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glFrustumfOES(glFrustumfOES_PACKED *_dst, GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) {
    if (_dst == NULL) _dst = malloc(sizeof(glFrustumfOES_PACKED));
    _dst->index = glFrustumfOES_INDEX;
    _dst->args.l = (GLfloat)l;
    _dst->args.r = (GLfloat)r;
    _dst->args.b = (GLfloat)b;
    _dst->args.t = (GLfloat)t;
    _dst->args.n = (GLfloat)n;
    _dst->args.f = (GLfloat)f;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGenBuffers(glGenBuffers_PACKED *_dst, GLsizei n, GLuint * buffers) {
    if (_dst == NULL) _dst = malloc(sizeof(glGenBuffers_PACKED));
    _dst->index = glGenBuffers_INDEX;
    _dst->args.n = (GLsizei)n;
    _dst->args.buffers = (GLuint *)buffers;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGenLists(glGenLists_PACKED *_dst, GLsizei range) {
    if (_dst == NULL) _dst = malloc(sizeof(glGenLists_PACKED));
    _dst->index = glGenLists_INDEX;
    _dst->args.range = (GLsizei)range;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGenTextures(glGenTextures_PACKED *_dst, GLsizei n, GLuint * textures) {
    if (_dst == NULL) _dst = malloc(sizeof(glGenTextures_PACKED));
    _dst->index = glGenTextures_INDEX;
    _dst->args.n = (GLsizei)n;
    _dst->args.textures = (GLuint *)textures;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetBooleanv(glGetBooleanv_PACKED *_dst, GLenum pname, GLboolean * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetBooleanv_PACKED));
    _dst->index = glGetBooleanv_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLboolean *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetBufferParameteriv(glGetBufferParameteriv_PACKED *_dst, GLenum target, GLenum pname, GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetBufferParameteriv_PACKED));
    _dst->index = glGetBufferParameteriv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetClipPlanefOES(glGetClipPlanefOES_PACKED *_dst, GLenum plane, GLfloat * equation) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetClipPlanefOES_PACKED));
    _dst->index = glGetClipPlanefOES_INDEX;
    _dst->args.plane = (GLenum)plane;
    _dst->args.equation = (GLfloat *)equation;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetDoublev(glGetDoublev_PACKED *_dst, GLenum pname, GLdouble * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetDoublev_PACKED));
    _dst->index = glGetDoublev_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLdouble *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetError(glGetError_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetError_PACKED));
    _dst->index = glGetError_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetFloatv(glGetFloatv_PACKED *_dst, GLenum pname, GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetFloatv_PACKED));
    _dst->index = glGetFloatv_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetIntegerv(glGetIntegerv_PACKED *_dst, GLenum pname, GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetIntegerv_PACKED));
    _dst->index = glGetIntegerv_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetLightfv(glGetLightfv_PACKED *_dst, GLenum light, GLenum pname, GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetLightfv_PACKED));
    _dst->index = glGetLightfv_INDEX;
    _dst->args.light = (GLenum)light;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetMapdv(glGetMapdv_PACKED *_dst, GLenum target, GLenum query, GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetMapdv_PACKED));
    _dst->index = glGetMapdv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.query = (GLenum)query;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetMapfv(glGetMapfv_PACKED *_dst, GLenum target, GLenum query, GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetMapfv_PACKED));
    _dst->index = glGetMapfv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.query = (GLenum)query;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetMapiv(glGetMapiv_PACKED *_dst, GLenum target, GLenum query, GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetMapiv_PACKED));
    _dst->index = glGetMapiv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.query = (GLenum)query;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetMaterialfv(glGetMaterialfv_PACKED *_dst, GLenum face, GLenum pname, GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetMaterialfv_PACKED));
    _dst->index = glGetMaterialfv_INDEX;
    _dst->args.face = (GLenum)face;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetMaterialiv(glGetMaterialiv_PACKED *_dst, GLenum face, GLenum pname, GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetMaterialiv_PACKED));
    _dst->index = glGetMaterialiv_INDEX;
    _dst->args.face = (GLenum)face;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetPointerv(glGetPointerv_PACKED *_dst, GLenum pname, GLvoid ** params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetPointerv_PACKED));
    _dst->index = glGetPointerv_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLvoid **)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetString(glGetString_PACKED *_dst, GLenum name) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetString_PACKED));
    _dst->index = glGetString_INDEX;
    _dst->args.name = (GLenum)name;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetTexEnvfv(glGetTexEnvfv_PACKED *_dst, GLenum target, GLenum pname, GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetTexEnvfv_PACKED));
    _dst->index = glGetTexEnvfv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetTexEnviv(glGetTexEnviv_PACKED *_dst, GLenum target, GLenum pname, GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetTexEnviv_PACKED));
    _dst->index = glGetTexEnviv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetTexImage(glGetTexImage_PACKED *_dst, GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetTexImage_PACKED));
    _dst->index = glGetTexImage_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.format = (GLenum)format;
    _dst->args.type = (GLenum)type;
    _dst->args.pixels = (GLvoid *)pixels;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetTexLevelParameterfv(glGetTexLevelParameterfv_PACKED *_dst, GLenum target, GLint level, GLenum pname, GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetTexLevelParameterfv_PACKED));
    _dst->index = glGetTexLevelParameterfv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetTexLevelParameteriv(glGetTexLevelParameteriv_PACKED *_dst, GLenum target, GLint level, GLenum pname, GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetTexLevelParameteriv_PACKED));
    _dst->index = glGetTexLevelParameteriv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetTexParameterfv(glGetTexParameterfv_PACKED *_dst, GLenum target, GLenum pname, GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetTexParameterfv_PACKED));
    _dst->index = glGetTexParameterfv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glGetTexParameteriv(glGetTexParameteriv_PACKED *_dst, GLenum target, GLenum pname, GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glGetTexParameteriv_PACKED));
    _dst->index = glGetTexParameteriv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glHint(glHint_PACKED *_dst, GLenum target, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glHint_PACKED));
    _dst->index = glHint_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIndexd(glIndexd_PACKED *_dst, GLdouble c) {
    if (_dst == NULL) _dst = malloc(sizeof(glIndexd_PACKED));
    _dst->index = glIndexd_INDEX;
    _dst->args.c = (GLdouble)c;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIndexdv(glIndexdv_PACKED *_dst, const GLdouble * c) {
    if (_dst == NULL) _dst = malloc(sizeof(glIndexdv_PACKED));
    _dst->index = glIndexdv_INDEX;
    _dst->args.c = (GLdouble *)c;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIndexf(glIndexf_PACKED *_dst, GLfloat c) {
    if (_dst == NULL) _dst = malloc(sizeof(glIndexf_PACKED));
    _dst->index = glIndexf_INDEX;
    _dst->args.c = (GLfloat)c;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIndexfv(glIndexfv_PACKED *_dst, const GLfloat * c) {
    if (_dst == NULL) _dst = malloc(sizeof(glIndexfv_PACKED));
    _dst->index = glIndexfv_INDEX;
    _dst->args.c = (GLfloat *)c;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIndexi(glIndexi_PACKED *_dst, GLint c) {
    if (_dst == NULL) _dst = malloc(sizeof(glIndexi_PACKED));
    _dst->index = glIndexi_INDEX;
    _dst->args.c = (GLint)c;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIndexiv(glIndexiv_PACKED *_dst, const GLint * c) {
    if (_dst == NULL) _dst = malloc(sizeof(glIndexiv_PACKED));
    _dst->index = glIndexiv_INDEX;
    _dst->args.c = (GLint *)c;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIndexs(glIndexs_PACKED *_dst, GLshort c) {
    if (_dst == NULL) _dst = malloc(sizeof(glIndexs_PACKED));
    _dst->index = glIndexs_INDEX;
    _dst->args.c = (GLshort)c;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIndexsv(glIndexsv_PACKED *_dst, const GLshort * c) {
    if (_dst == NULL) _dst = malloc(sizeof(glIndexsv_PACKED));
    _dst->index = glIndexsv_INDEX;
    _dst->args.c = (GLshort *)c;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIndexub(glIndexub_PACKED *_dst, GLubyte c) {
    if (_dst == NULL) _dst = malloc(sizeof(glIndexub_PACKED));
    _dst->index = glIndexub_INDEX;
    _dst->args.c = (GLubyte)c;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIndexubv(glIndexubv_PACKED *_dst, const GLubyte * c) {
    if (_dst == NULL) _dst = malloc(sizeof(glIndexubv_PACKED));
    _dst->index = glIndexubv_INDEX;
    _dst->args.c = (GLubyte *)c;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glInitNames(glInitNames_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glInitNames_PACKED));
    _dst->index = glInitNames_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glInterleavedArrays(glInterleavedArrays_PACKED *_dst, GLenum format, GLsizei stride, const GLvoid * pointer) {
    if (_dst == NULL) _dst = malloc(sizeof(glInterleavedArrays_PACKED));
    _dst->index = glInterleavedArrays_INDEX;
    _dst->args.format = (GLenum)format;
    _dst->args.stride = (GLsizei)stride;
    _dst->args.pointer = (GLvoid *)pointer;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIsBuffer(glIsBuffer_PACKED *_dst, GLuint buffer) {
    if (_dst == NULL) _dst = malloc(sizeof(glIsBuffer_PACKED));
    _dst->index = glIsBuffer_INDEX;
    _dst->args.buffer = (GLuint)buffer;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIsEnabled(glIsEnabled_PACKED *_dst, GLenum cap) {
    if (_dst == NULL) _dst = malloc(sizeof(glIsEnabled_PACKED));
    _dst->index = glIsEnabled_INDEX;
    _dst->args.cap = (GLenum)cap;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIsList(glIsList_PACKED *_dst, GLuint list) {
    if (_dst == NULL) _dst = malloc(sizeof(glIsList_PACKED));
    _dst->index = glIsList_INDEX;
    _dst->args.list = (GLuint)list;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glIsTexture(glIsTexture_PACKED *_dst, GLuint texture) {
    if (_dst == NULL) _dst = malloc(sizeof(glIsTexture_PACKED));
    _dst->index = glIsTexture_INDEX;
    _dst->args.texture = (GLuint)texture;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLightModelf(glLightModelf_PACKED *_dst, GLenum pname, GLfloat param) {
    if (_dst == NULL) _dst = malloc(sizeof(glLightModelf_PACKED));
    _dst->index = glLightModelf_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLfloat)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLightModelfv(glLightModelfv_PACKED *_dst, GLenum pname, const GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glLightModelfv_PACKED));
    _dst->index = glLightModelfv_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLightModeli(glLightModeli_PACKED *_dst, GLenum pname, GLint param) {
    if (_dst == NULL) _dst = malloc(sizeof(glLightModeli_PACKED));
    _dst->index = glLightModeli_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLint)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLightModeliv(glLightModeliv_PACKED *_dst, GLenum pname, const GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glLightModeliv_PACKED));
    _dst->index = glLightModeliv_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLightf(glLightf_PACKED *_dst, GLenum light, GLenum pname, GLfloat param) {
    if (_dst == NULL) _dst = malloc(sizeof(glLightf_PACKED));
    _dst->index = glLightf_INDEX;
    _dst->args.light = (GLenum)light;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLfloat)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLightfv(glLightfv_PACKED *_dst, GLenum light, GLenum pname, const GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glLightfv_PACKED));
    _dst->index = glLightfv_INDEX;
    _dst->args.light = (GLenum)light;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLighti(glLighti_PACKED *_dst, GLenum light, GLenum pname, GLint param) {
    if (_dst == NULL) _dst = malloc(sizeof(glLighti_PACKED));
    _dst->index = glLighti_INDEX;
    _dst->args.light = (GLenum)light;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLint)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLightiv(glLightiv_PACKED *_dst, GLenum light, GLenum pname, const GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glLightiv_PACKED));
    _dst->index = glLightiv_INDEX;
    _dst->args.light = (GLenum)light;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLineStipple(glLineStipple_PACKED *_dst, GLint factor, GLushort pattern) {
    if (_dst == NULL) _dst = malloc(sizeof(glLineStipple_PACKED));
    _dst->index = glLineStipple_INDEX;
    _dst->args.factor = (GLint)factor;
    _dst->args.pattern = (GLushort)pattern;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLineWidth(glLineWidth_PACKED *_dst, GLfloat width) {
    if (_dst == NULL) _dst = malloc(sizeof(glLineWidth_PACKED));
    _dst->index = glLineWidth_INDEX;
    _dst->args.width = (GLfloat)width;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glListBase(glListBase_PACKED *_dst, GLuint base) {
    if (_dst == NULL) _dst = malloc(sizeof(glListBase_PACKED));
    _dst->index = glListBase_INDEX;
    _dst->args.base = (GLuint)base;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLoadIdentity(glLoadIdentity_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glLoadIdentity_PACKED));
    _dst->index = glLoadIdentity_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLoadMatrixd(glLoadMatrixd_PACKED *_dst, const GLdouble * m) {
    if (_dst == NULL) _dst = malloc(sizeof(glLoadMatrixd_PACKED));
    _dst->index = glLoadMatrixd_INDEX;
    _dst->args.m = (GLdouble *)m;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLoadMatrixf(glLoadMatrixf_PACKED *_dst, const GLfloat * m) {
    if (_dst == NULL) _dst = malloc(sizeof(glLoadMatrixf_PACKED));
    _dst->index = glLoadMatrixf_INDEX;
    _dst->args.m = (GLfloat *)m;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLoadName(glLoadName_PACKED *_dst, GLuint name) {
    if (_dst == NULL) _dst = malloc(sizeof(glLoadName_PACKED));
    _dst->index = glLoadName_INDEX;
    _dst->args.name = (GLuint)name;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLoadTransposeMatrixd(glLoadTransposeMatrixd_PACKED *_dst, const GLdouble * m) {
    if (_dst == NULL) _dst = malloc(sizeof(glLoadTransposeMatrixd_PACKED));
    _dst->index = glLoadTransposeMatrixd_INDEX;
    _dst->args.m = (GLdouble *)m;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLoadTransposeMatrixf(glLoadTransposeMatrixf_PACKED *_dst, const GLfloat * m) {
    if (_dst == NULL) _dst = malloc(sizeof(glLoadTransposeMatrixf_PACKED));
    _dst->index = glLoadTransposeMatrixf_INDEX;
    _dst->args.m = (GLfloat *)m;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLockArraysEXT(glLockArraysEXT_PACKED *_dst, GLint first, GLsizei count) {
    if (_dst == NULL) _dst = malloc(sizeof(glLockArraysEXT_PACKED));
    _dst->index = glLockArraysEXT_INDEX;
    _dst->args.first = (GLint)first;
    _dst->args.count = (GLsizei)count;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glLogicOp(glLogicOp_PACKED *_dst, GLenum opcode) {
    if (_dst == NULL) _dst = malloc(sizeof(glLogicOp_PACKED));
    _dst->index = glLogicOp_INDEX;
    _dst->args.opcode = (GLenum)opcode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMap1d(glMap1d_PACKED *_dst, GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points) {
    if (_dst == NULL) _dst = malloc(sizeof(glMap1d_PACKED));
    _dst->index = glMap1d_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.u1 = (GLdouble)u1;
    _dst->args.u2 = (GLdouble)u2;
    _dst->args.stride = (GLint)stride;
    _dst->args.order = (GLint)order;
    _dst->args.points = (GLdouble *)points;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMap1f(glMap1f_PACKED *_dst, GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points) {
    if (_dst == NULL) _dst = malloc(sizeof(glMap1f_PACKED));
    _dst->index = glMap1f_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.u1 = (GLfloat)u1;
    _dst->args.u2 = (GLfloat)u2;
    _dst->args.stride = (GLint)stride;
    _dst->args.order = (GLint)order;
    _dst->args.points = (GLfloat *)points;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMap2d(glMap2d_PACKED *_dst, GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points) {
    if (_dst == NULL) _dst = malloc(sizeof(glMap2d_PACKED));
    _dst->index = glMap2d_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.u1 = (GLdouble)u1;
    _dst->args.u2 = (GLdouble)u2;
    _dst->args.ustride = (GLint)ustride;
    _dst->args.uorder = (GLint)uorder;
    _dst->args.v1 = (GLdouble)v1;
    _dst->args.v2 = (GLdouble)v2;
    _dst->args.vstride = (GLint)vstride;
    _dst->args.vorder = (GLint)vorder;
    _dst->args.points = (GLdouble *)points;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMap2f(glMap2f_PACKED *_dst, GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points) {
    if (_dst == NULL) _dst = malloc(sizeof(glMap2f_PACKED));
    _dst->index = glMap2f_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.u1 = (GLfloat)u1;
    _dst->args.u2 = (GLfloat)u2;
    _dst->args.ustride = (GLint)ustride;
    _dst->args.uorder = (GLint)uorder;
    _dst->args.v1 = (GLfloat)v1;
    _dst->args.v2 = (GLfloat)v2;
    _dst->args.vstride = (GLint)vstride;
    _dst->args.vorder = (GLint)vorder;
    _dst->args.points = (GLfloat *)points;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMapGrid1d(glMapGrid1d_PACKED *_dst, GLint un, GLdouble u1, GLdouble u2) {
    if (_dst == NULL) _dst = malloc(sizeof(glMapGrid1d_PACKED));
    _dst->index = glMapGrid1d_INDEX;
    _dst->args.un = (GLint)un;
    _dst->args.u1 = (GLdouble)u1;
    _dst->args.u2 = (GLdouble)u2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMapGrid1f(glMapGrid1f_PACKED *_dst, GLint un, GLfloat u1, GLfloat u2) {
    if (_dst == NULL) _dst = malloc(sizeof(glMapGrid1f_PACKED));
    _dst->index = glMapGrid1f_INDEX;
    _dst->args.un = (GLint)un;
    _dst->args.u1 = (GLfloat)u1;
    _dst->args.u2 = (GLfloat)u2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMapGrid2d(glMapGrid2d_PACKED *_dst, GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2) {
    if (_dst == NULL) _dst = malloc(sizeof(glMapGrid2d_PACKED));
    _dst->index = glMapGrid2d_INDEX;
    _dst->args.un = (GLint)un;
    _dst->args.u1 = (GLdouble)u1;
    _dst->args.u2 = (GLdouble)u2;
    _dst->args.vn = (GLint)vn;
    _dst->args.v1 = (GLdouble)v1;
    _dst->args.v2 = (GLdouble)v2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMapGrid2f(glMapGrid2f_PACKED *_dst, GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2) {
    if (_dst == NULL) _dst = malloc(sizeof(glMapGrid2f_PACKED));
    _dst->index = glMapGrid2f_INDEX;
    _dst->args.un = (GLint)un;
    _dst->args.u1 = (GLfloat)u1;
    _dst->args.u2 = (GLfloat)u2;
    _dst->args.vn = (GLint)vn;
    _dst->args.v1 = (GLfloat)v1;
    _dst->args.v2 = (GLfloat)v2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMaterialf(glMaterialf_PACKED *_dst, GLenum face, GLenum pname, GLfloat param) {
    if (_dst == NULL) _dst = malloc(sizeof(glMaterialf_PACKED));
    _dst->index = glMaterialf_INDEX;
    _dst->args.face = (GLenum)face;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLfloat)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMaterialfv(glMaterialfv_PACKED *_dst, GLenum face, GLenum pname, const GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glMaterialfv_PACKED));
    _dst->index = glMaterialfv_INDEX;
    _dst->args.face = (GLenum)face;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMateriali(glMateriali_PACKED *_dst, GLenum face, GLenum pname, GLint param) {
    if (_dst == NULL) _dst = malloc(sizeof(glMateriali_PACKED));
    _dst->index = glMateriali_INDEX;
    _dst->args.face = (GLenum)face;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLint)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMaterialiv(glMaterialiv_PACKED *_dst, GLenum face, GLenum pname, const GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glMaterialiv_PACKED));
    _dst->index = glMaterialiv_INDEX;
    _dst->args.face = (GLenum)face;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMatrixMode(glMatrixMode_PACKED *_dst, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glMatrixMode_PACKED));
    _dst->index = glMatrixMode_INDEX;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultMatrixd(glMultMatrixd_PACKED *_dst, const GLdouble * m) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultMatrixd_PACKED));
    _dst->index = glMultMatrixd_INDEX;
    _dst->args.m = (GLdouble *)m;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultMatrixf(glMultMatrixf_PACKED *_dst, const GLfloat * m) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultMatrixf_PACKED));
    _dst->index = glMultMatrixf_INDEX;
    _dst->args.m = (GLfloat *)m;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultTransposeMatrixd(glMultTransposeMatrixd_PACKED *_dst, const GLdouble * m) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultTransposeMatrixd_PACKED));
    _dst->index = glMultTransposeMatrixd_INDEX;
    _dst->args.m = (GLdouble *)m;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultTransposeMatrixf(glMultTransposeMatrixf_PACKED *_dst, const GLfloat * m) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultTransposeMatrixf_PACKED));
    _dst->index = glMultTransposeMatrixf_INDEX;
    _dst->args.m = (GLfloat *)m;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord1d(glMultiTexCoord1d_PACKED *_dst, GLenum target, GLdouble s) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord1d_PACKED));
    _dst->index = glMultiTexCoord1d_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLdouble)s;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord1dv(glMultiTexCoord1dv_PACKED *_dst, GLenum target, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord1dv_PACKED));
    _dst->index = glMultiTexCoord1dv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord1f(glMultiTexCoord1f_PACKED *_dst, GLenum target, GLfloat s) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord1f_PACKED));
    _dst->index = glMultiTexCoord1f_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLfloat)s;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord1fv(glMultiTexCoord1fv_PACKED *_dst, GLenum target, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord1fv_PACKED));
    _dst->index = glMultiTexCoord1fv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord1i(glMultiTexCoord1i_PACKED *_dst, GLenum target, GLint s) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord1i_PACKED));
    _dst->index = glMultiTexCoord1i_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLint)s;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord1iv(glMultiTexCoord1iv_PACKED *_dst, GLenum target, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord1iv_PACKED));
    _dst->index = glMultiTexCoord1iv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord1s(glMultiTexCoord1s_PACKED *_dst, GLenum target, GLshort s) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord1s_PACKED));
    _dst->index = glMultiTexCoord1s_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLshort)s;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord1sv(glMultiTexCoord1sv_PACKED *_dst, GLenum target, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord1sv_PACKED));
    _dst->index = glMultiTexCoord1sv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord2d(glMultiTexCoord2d_PACKED *_dst, GLenum target, GLdouble s, GLdouble t) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord2d_PACKED));
    _dst->index = glMultiTexCoord2d_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLdouble)s;
    _dst->args.t = (GLdouble)t;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord2dv(glMultiTexCoord2dv_PACKED *_dst, GLenum target, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord2dv_PACKED));
    _dst->index = glMultiTexCoord2dv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord2f(glMultiTexCoord2f_PACKED *_dst, GLenum target, GLfloat s, GLfloat t) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord2f_PACKED));
    _dst->index = glMultiTexCoord2f_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLfloat)s;
    _dst->args.t = (GLfloat)t;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord2fARB(glMultiTexCoord2fARB_PACKED *_dst, GLenum target, GLfloat s, GLfloat t) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord2fARB_PACKED));
    _dst->index = glMultiTexCoord2fARB_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLfloat)s;
    _dst->args.t = (GLfloat)t;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord2fv(glMultiTexCoord2fv_PACKED *_dst, GLenum target, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord2fv_PACKED));
    _dst->index = glMultiTexCoord2fv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord2fvARB(glMultiTexCoord2fvARB_PACKED *_dst, GLenum target, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord2fvARB_PACKED));
    _dst->index = glMultiTexCoord2fvARB_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord2i(glMultiTexCoord2i_PACKED *_dst, GLenum target, GLint s, GLint t) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord2i_PACKED));
    _dst->index = glMultiTexCoord2i_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLint)s;
    _dst->args.t = (GLint)t;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord2iv(glMultiTexCoord2iv_PACKED *_dst, GLenum target, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord2iv_PACKED));
    _dst->index = glMultiTexCoord2iv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord2s(glMultiTexCoord2s_PACKED *_dst, GLenum target, GLshort s, GLshort t) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord2s_PACKED));
    _dst->index = glMultiTexCoord2s_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLshort)s;
    _dst->args.t = (GLshort)t;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord2sv(glMultiTexCoord2sv_PACKED *_dst, GLenum target, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord2sv_PACKED));
    _dst->index = glMultiTexCoord2sv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord3d(glMultiTexCoord3d_PACKED *_dst, GLenum target, GLdouble s, GLdouble t, GLdouble r) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord3d_PACKED));
    _dst->index = glMultiTexCoord3d_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLdouble)s;
    _dst->args.t = (GLdouble)t;
    _dst->args.r = (GLdouble)r;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord3dv(glMultiTexCoord3dv_PACKED *_dst, GLenum target, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord3dv_PACKED));
    _dst->index = glMultiTexCoord3dv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord3f(glMultiTexCoord3f_PACKED *_dst, GLenum target, GLfloat s, GLfloat t, GLfloat r) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord3f_PACKED));
    _dst->index = glMultiTexCoord3f_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLfloat)s;
    _dst->args.t = (GLfloat)t;
    _dst->args.r = (GLfloat)r;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord3fv(glMultiTexCoord3fv_PACKED *_dst, GLenum target, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord3fv_PACKED));
    _dst->index = glMultiTexCoord3fv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord3i(glMultiTexCoord3i_PACKED *_dst, GLenum target, GLint s, GLint t, GLint r) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord3i_PACKED));
    _dst->index = glMultiTexCoord3i_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLint)s;
    _dst->args.t = (GLint)t;
    _dst->args.r = (GLint)r;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord3iv(glMultiTexCoord3iv_PACKED *_dst, GLenum target, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord3iv_PACKED));
    _dst->index = glMultiTexCoord3iv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord3s(glMultiTexCoord3s_PACKED *_dst, GLenum target, GLshort s, GLshort t, GLshort r) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord3s_PACKED));
    _dst->index = glMultiTexCoord3s_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLshort)s;
    _dst->args.t = (GLshort)t;
    _dst->args.r = (GLshort)r;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord3sv(glMultiTexCoord3sv_PACKED *_dst, GLenum target, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord3sv_PACKED));
    _dst->index = glMultiTexCoord3sv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord4d(glMultiTexCoord4d_PACKED *_dst, GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord4d_PACKED));
    _dst->index = glMultiTexCoord4d_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLdouble)s;
    _dst->args.t = (GLdouble)t;
    _dst->args.r = (GLdouble)r;
    _dst->args.q = (GLdouble)q;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord4dv(glMultiTexCoord4dv_PACKED *_dst, GLenum target, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord4dv_PACKED));
    _dst->index = glMultiTexCoord4dv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord4f(glMultiTexCoord4f_PACKED *_dst, GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord4f_PACKED));
    _dst->index = glMultiTexCoord4f_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLfloat)s;
    _dst->args.t = (GLfloat)t;
    _dst->args.r = (GLfloat)r;
    _dst->args.q = (GLfloat)q;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord4fARB(glMultiTexCoord4fARB_PACKED *_dst, GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord4fARB_PACKED));
    _dst->index = glMultiTexCoord4fARB_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLfloat)s;
    _dst->args.t = (GLfloat)t;
    _dst->args.r = (GLfloat)r;
    _dst->args.q = (GLfloat)q;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord4fv(glMultiTexCoord4fv_PACKED *_dst, GLenum target, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord4fv_PACKED));
    _dst->index = glMultiTexCoord4fv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord4fvARB(glMultiTexCoord4fvARB_PACKED *_dst, GLenum target, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord4fvARB_PACKED));
    _dst->index = glMultiTexCoord4fvARB_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord4i(glMultiTexCoord4i_PACKED *_dst, GLenum target, GLint s, GLint t, GLint r, GLint q) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord4i_PACKED));
    _dst->index = glMultiTexCoord4i_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLint)s;
    _dst->args.t = (GLint)t;
    _dst->args.r = (GLint)r;
    _dst->args.q = (GLint)q;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord4iv(glMultiTexCoord4iv_PACKED *_dst, GLenum target, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord4iv_PACKED));
    _dst->index = glMultiTexCoord4iv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord4s(glMultiTexCoord4s_PACKED *_dst, GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord4s_PACKED));
    _dst->index = glMultiTexCoord4s_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.s = (GLshort)s;
    _dst->args.t = (GLshort)t;
    _dst->args.r = (GLshort)r;
    _dst->args.q = (GLshort)q;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glMultiTexCoord4sv(glMultiTexCoord4sv_PACKED *_dst, GLenum target, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glMultiTexCoord4sv_PACKED));
    _dst->index = glMultiTexCoord4sv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNewList(glNewList_PACKED *_dst, GLuint list, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glNewList_PACKED));
    _dst->index = glNewList_INDEX;
    _dst->args.list = (GLuint)list;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormal3b(glNormal3b_PACKED *_dst, GLbyte nx, GLbyte ny, GLbyte nz) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormal3b_PACKED));
    _dst->index = glNormal3b_INDEX;
    _dst->args.nx = (GLbyte)nx;
    _dst->args.ny = (GLbyte)ny;
    _dst->args.nz = (GLbyte)nz;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormal3bv(glNormal3bv_PACKED *_dst, const GLbyte * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormal3bv_PACKED));
    _dst->index = glNormal3bv_INDEX;
    _dst->args.v = (GLbyte *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormal3d(glNormal3d_PACKED *_dst, GLdouble nx, GLdouble ny, GLdouble nz) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormal3d_PACKED));
    _dst->index = glNormal3d_INDEX;
    _dst->args.nx = (GLdouble)nx;
    _dst->args.ny = (GLdouble)ny;
    _dst->args.nz = (GLdouble)nz;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormal3dv(glNormal3dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormal3dv_PACKED));
    _dst->index = glNormal3dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormal3f(glNormal3f_PACKED *_dst, GLfloat nx, GLfloat ny, GLfloat nz) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormal3f_PACKED));
    _dst->index = glNormal3f_INDEX;
    _dst->args.nx = (GLfloat)nx;
    _dst->args.ny = (GLfloat)ny;
    _dst->args.nz = (GLfloat)nz;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormal3fv(glNormal3fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormal3fv_PACKED));
    _dst->index = glNormal3fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormal3i(glNormal3i_PACKED *_dst, GLint nx, GLint ny, GLint nz) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormal3i_PACKED));
    _dst->index = glNormal3i_INDEX;
    _dst->args.nx = (GLint)nx;
    _dst->args.ny = (GLint)ny;
    _dst->args.nz = (GLint)nz;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormal3iv(glNormal3iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormal3iv_PACKED));
    _dst->index = glNormal3iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormal3s(glNormal3s_PACKED *_dst, GLshort nx, GLshort ny, GLshort nz) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormal3s_PACKED));
    _dst->index = glNormal3s_INDEX;
    _dst->args.nx = (GLshort)nx;
    _dst->args.ny = (GLshort)ny;
    _dst->args.nz = (GLshort)nz;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormal3sv(glNormal3sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormal3sv_PACKED));
    _dst->index = glNormal3sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glNormalPointer(glNormalPointer_PACKED *_dst, GLenum type, GLsizei stride, const GLvoid * pointer) {
    if (_dst == NULL) _dst = malloc(sizeof(glNormalPointer_PACKED));
    _dst->index = glNormalPointer_INDEX;
    _dst->args.type = (GLenum)type;
    _dst->args.stride = (GLsizei)stride;
    _dst->args.pointer = (GLvoid *)pointer;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glOrtho(glOrtho_PACKED *_dst, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) {
    if (_dst == NULL) _dst = malloc(sizeof(glOrtho_PACKED));
    _dst->index = glOrtho_INDEX;
    _dst->args.left = (GLdouble)left;
    _dst->args.right = (GLdouble)right;
    _dst->args.bottom = (GLdouble)bottom;
    _dst->args.top = (GLdouble)top;
    _dst->args.zNear = (GLdouble)zNear;
    _dst->args.zFar = (GLdouble)zFar;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glOrthofOES(glOrthofOES_PACKED *_dst, GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) {
    if (_dst == NULL) _dst = malloc(sizeof(glOrthofOES_PACKED));
    _dst->index = glOrthofOES_INDEX;
    _dst->args.l = (GLfloat)l;
    _dst->args.r = (GLfloat)r;
    _dst->args.b = (GLfloat)b;
    _dst->args.t = (GLfloat)t;
    _dst->args.n = (GLfloat)n;
    _dst->args.f = (GLfloat)f;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPassThrough(glPassThrough_PACKED *_dst, GLfloat token) {
    if (_dst == NULL) _dst = malloc(sizeof(glPassThrough_PACKED));
    _dst->index = glPassThrough_INDEX;
    _dst->args.token = (GLfloat)token;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPixelStorei(glPixelStorei_PACKED *_dst, GLenum pname, GLint param) {
    if (_dst == NULL) _dst = malloc(sizeof(glPixelStorei_PACKED));
    _dst->index = glPixelStorei_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLint)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPixelTransferf(glPixelTransferf_PACKED *_dst, GLenum pname, GLfloat param) {
    if (_dst == NULL) _dst = malloc(sizeof(glPixelTransferf_PACKED));
    _dst->index = glPixelTransferf_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLfloat)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPixelTransferi(glPixelTransferi_PACKED *_dst, GLenum pname, GLint param) {
    if (_dst == NULL) _dst = malloc(sizeof(glPixelTransferi_PACKED));
    _dst->index = glPixelTransferi_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLint)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPixelZoom(glPixelZoom_PACKED *_dst, GLfloat xfactor, GLfloat yfactor) {
    if (_dst == NULL) _dst = malloc(sizeof(glPixelZoom_PACKED));
    _dst->index = glPixelZoom_INDEX;
    _dst->args.xfactor = (GLfloat)xfactor;
    _dst->args.yfactor = (GLfloat)yfactor;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPointParameterf(glPointParameterf_PACKED *_dst, GLenum pname, GLfloat param) {
    if (_dst == NULL) _dst = malloc(sizeof(glPointParameterf_PACKED));
    _dst->index = glPointParameterf_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLfloat)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPointParameterfv(glPointParameterfv_PACKED *_dst, GLenum pname, const GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glPointParameterfv_PACKED));
    _dst->index = glPointParameterfv_INDEX;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPointSize(glPointSize_PACKED *_dst, GLfloat size) {
    if (_dst == NULL) _dst = malloc(sizeof(glPointSize_PACKED));
    _dst->index = glPointSize_INDEX;
    _dst->args.size = (GLfloat)size;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPolygonMode(glPolygonMode_PACKED *_dst, GLenum face, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glPolygonMode_PACKED));
    _dst->index = glPolygonMode_INDEX;
    _dst->args.face = (GLenum)face;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPolygonOffset(glPolygonOffset_PACKED *_dst, GLfloat factor, GLfloat units) {
    if (_dst == NULL) _dst = malloc(sizeof(glPolygonOffset_PACKED));
    _dst->index = glPolygonOffset_INDEX;
    _dst->args.factor = (GLfloat)factor;
    _dst->args.units = (GLfloat)units;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPolygonStipple(glPolygonStipple_PACKED *_dst, const GLubyte * mask) {
    if (_dst == NULL) _dst = malloc(sizeof(glPolygonStipple_PACKED));
    _dst->index = glPolygonStipple_INDEX;
    _dst->args.mask = (GLubyte *)mask;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPopAttrib(glPopAttrib_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glPopAttrib_PACKED));
    _dst->index = glPopAttrib_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPopClientAttrib(glPopClientAttrib_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glPopClientAttrib_PACKED));
    _dst->index = glPopClientAttrib_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPopMatrix(glPopMatrix_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glPopMatrix_PACKED));
    _dst->index = glPopMatrix_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPopName(glPopName_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glPopName_PACKED));
    _dst->index = glPopName_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPrioritizeTextures(glPrioritizeTextures_PACKED *_dst, GLsizei n, const GLuint * textures, const GLfloat * priorities) {
    if (_dst == NULL) _dst = malloc(sizeof(glPrioritizeTextures_PACKED));
    _dst->index = glPrioritizeTextures_INDEX;
    _dst->args.n = (GLsizei)n;
    _dst->args.textures = (GLuint *)textures;
    _dst->args.priorities = (GLfloat *)priorities;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPushAttrib(glPushAttrib_PACKED *_dst, GLbitfield mask) {
    if (_dst == NULL) _dst = malloc(sizeof(glPushAttrib_PACKED));
    _dst->index = glPushAttrib_INDEX;
    _dst->args.mask = (GLbitfield)mask;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPushClientAttrib(glPushClientAttrib_PACKED *_dst, GLbitfield mask) {
    if (_dst == NULL) _dst = malloc(sizeof(glPushClientAttrib_PACKED));
    _dst->index = glPushClientAttrib_INDEX;
    _dst->args.mask = (GLbitfield)mask;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPushMatrix(glPushMatrix_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glPushMatrix_PACKED));
    _dst->index = glPushMatrix_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glPushName(glPushName_PACKED *_dst, GLuint name) {
    if (_dst == NULL) _dst = malloc(sizeof(glPushName_PACKED));
    _dst->index = glPushName_INDEX;
    _dst->args.name = (GLuint)name;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos2d(glRasterPos2d_PACKED *_dst, GLdouble x, GLdouble y) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos2d_PACKED));
    _dst->index = glRasterPos2d_INDEX;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos2dv(glRasterPos2dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos2dv_PACKED));
    _dst->index = glRasterPos2dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos2f(glRasterPos2f_PACKED *_dst, GLfloat x, GLfloat y) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos2f_PACKED));
    _dst->index = glRasterPos2f_INDEX;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos2fv(glRasterPos2fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos2fv_PACKED));
    _dst->index = glRasterPos2fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos2i(glRasterPos2i_PACKED *_dst, GLint x, GLint y) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos2i_PACKED));
    _dst->index = glRasterPos2i_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos2iv(glRasterPos2iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos2iv_PACKED));
    _dst->index = glRasterPos2iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos2s(glRasterPos2s_PACKED *_dst, GLshort x, GLshort y) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos2s_PACKED));
    _dst->index = glRasterPos2s_INDEX;
    _dst->args.x = (GLshort)x;
    _dst->args.y = (GLshort)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos2sv(glRasterPos2sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos2sv_PACKED));
    _dst->index = glRasterPos2sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos3d(glRasterPos3d_PACKED *_dst, GLdouble x, GLdouble y, GLdouble z) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos3d_PACKED));
    _dst->index = glRasterPos3d_INDEX;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    _dst->args.z = (GLdouble)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos3dv(glRasterPos3dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos3dv_PACKED));
    _dst->index = glRasterPos3dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos3f(glRasterPos3f_PACKED *_dst, GLfloat x, GLfloat y, GLfloat z) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos3f_PACKED));
    _dst->index = glRasterPos3f_INDEX;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    _dst->args.z = (GLfloat)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos3fv(glRasterPos3fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos3fv_PACKED));
    _dst->index = glRasterPos3fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos3i(glRasterPos3i_PACKED *_dst, GLint x, GLint y, GLint z) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos3i_PACKED));
    _dst->index = glRasterPos3i_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.z = (GLint)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos3iv(glRasterPos3iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos3iv_PACKED));
    _dst->index = glRasterPos3iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos3s(glRasterPos3s_PACKED *_dst, GLshort x, GLshort y, GLshort z) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos3s_PACKED));
    _dst->index = glRasterPos3s_INDEX;
    _dst->args.x = (GLshort)x;
    _dst->args.y = (GLshort)y;
    _dst->args.z = (GLshort)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos3sv(glRasterPos3sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos3sv_PACKED));
    _dst->index = glRasterPos3sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos4d(glRasterPos4d_PACKED *_dst, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos4d_PACKED));
    _dst->index = glRasterPos4d_INDEX;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    _dst->args.z = (GLdouble)z;
    _dst->args.w = (GLdouble)w;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos4dv(glRasterPos4dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos4dv_PACKED));
    _dst->index = glRasterPos4dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos4f(glRasterPos4f_PACKED *_dst, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos4f_PACKED));
    _dst->index = glRasterPos4f_INDEX;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    _dst->args.z = (GLfloat)z;
    _dst->args.w = (GLfloat)w;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos4fv(glRasterPos4fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos4fv_PACKED));
    _dst->index = glRasterPos4fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos4i(glRasterPos4i_PACKED *_dst, GLint x, GLint y, GLint z, GLint w) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos4i_PACKED));
    _dst->index = glRasterPos4i_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.z = (GLint)z;
    _dst->args.w = (GLint)w;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos4iv(glRasterPos4iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos4iv_PACKED));
    _dst->index = glRasterPos4iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos4s(glRasterPos4s_PACKED *_dst, GLshort x, GLshort y, GLshort z, GLshort w) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos4s_PACKED));
    _dst->index = glRasterPos4s_INDEX;
    _dst->args.x = (GLshort)x;
    _dst->args.y = (GLshort)y;
    _dst->args.z = (GLshort)z;
    _dst->args.w = (GLshort)w;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRasterPos4sv(glRasterPos4sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glRasterPos4sv_PACKED));
    _dst->index = glRasterPos4sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glReadBuffer(glReadBuffer_PACKED *_dst, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glReadBuffer_PACKED));
    _dst->index = glReadBuffer_INDEX;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glReadPixels(glReadPixels_PACKED *_dst, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels) {
    if (_dst == NULL) _dst = malloc(sizeof(glReadPixels_PACKED));
    _dst->index = glReadPixels_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.format = (GLenum)format;
    _dst->args.type = (GLenum)type;
    _dst->args.pixels = (GLvoid *)pixels;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRectd(glRectd_PACKED *_dst, GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2) {
    if (_dst == NULL) _dst = malloc(sizeof(glRectd_PACKED));
    _dst->index = glRectd_INDEX;
    _dst->args.x1 = (GLdouble)x1;
    _dst->args.y1 = (GLdouble)y1;
    _dst->args.x2 = (GLdouble)x2;
    _dst->args.y2 = (GLdouble)y2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRectdv(glRectdv_PACKED *_dst, const GLdouble * v1, const GLdouble * v2) {
    if (_dst == NULL) _dst = malloc(sizeof(glRectdv_PACKED));
    _dst->index = glRectdv_INDEX;
    _dst->args.v1 = (GLdouble *)v1;
    _dst->args.v2 = (GLdouble *)v2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRectf(glRectf_PACKED *_dst, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2) {
    if (_dst == NULL) _dst = malloc(sizeof(glRectf_PACKED));
    _dst->index = glRectf_INDEX;
    _dst->args.x1 = (GLfloat)x1;
    _dst->args.y1 = (GLfloat)y1;
    _dst->args.x2 = (GLfloat)x2;
    _dst->args.y2 = (GLfloat)y2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRectfv(glRectfv_PACKED *_dst, const GLfloat * v1, const GLfloat * v2) {
    if (_dst == NULL) _dst = malloc(sizeof(glRectfv_PACKED));
    _dst->index = glRectfv_INDEX;
    _dst->args.v1 = (GLfloat *)v1;
    _dst->args.v2 = (GLfloat *)v2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRecti(glRecti_PACKED *_dst, GLint x1, GLint y1, GLint x2, GLint y2) {
    if (_dst == NULL) _dst = malloc(sizeof(glRecti_PACKED));
    _dst->index = glRecti_INDEX;
    _dst->args.x1 = (GLint)x1;
    _dst->args.y1 = (GLint)y1;
    _dst->args.x2 = (GLint)x2;
    _dst->args.y2 = (GLint)y2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRectiv(glRectiv_PACKED *_dst, const GLint * v1, const GLint * v2) {
    if (_dst == NULL) _dst = malloc(sizeof(glRectiv_PACKED));
    _dst->index = glRectiv_INDEX;
    _dst->args.v1 = (GLint *)v1;
    _dst->args.v2 = (GLint *)v2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRects(glRects_PACKED *_dst, GLshort x1, GLshort y1, GLshort x2, GLshort y2) {
    if (_dst == NULL) _dst = malloc(sizeof(glRects_PACKED));
    _dst->index = glRects_INDEX;
    _dst->args.x1 = (GLshort)x1;
    _dst->args.y1 = (GLshort)y1;
    _dst->args.x2 = (GLshort)x2;
    _dst->args.y2 = (GLshort)y2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRectsv(glRectsv_PACKED *_dst, const GLshort * v1, const GLshort * v2) {
    if (_dst == NULL) _dst = malloc(sizeof(glRectsv_PACKED));
    _dst->index = glRectsv_INDEX;
    _dst->args.v1 = (GLshort *)v1;
    _dst->args.v2 = (GLshort *)v2;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRenderMode(glRenderMode_PACKED *_dst, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glRenderMode_PACKED));
    _dst->index = glRenderMode_INDEX;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRotated(glRotated_PACKED *_dst, GLdouble angle, GLdouble x, GLdouble y, GLdouble z) {
    if (_dst == NULL) _dst = malloc(sizeof(glRotated_PACKED));
    _dst->index = glRotated_INDEX;
    _dst->args.angle = (GLdouble)angle;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    _dst->args.z = (GLdouble)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glRotatef(glRotatef_PACKED *_dst, GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
    if (_dst == NULL) _dst = malloc(sizeof(glRotatef_PACKED));
    _dst->index = glRotatef_INDEX;
    _dst->args.angle = (GLfloat)angle;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    _dst->args.z = (GLfloat)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSampleCoverage(glSampleCoverage_PACKED *_dst, GLfloat value, GLboolean invert) {
    if (_dst == NULL) _dst = malloc(sizeof(glSampleCoverage_PACKED));
    _dst->index = glSampleCoverage_INDEX;
    _dst->args.value = (GLfloat)value;
    _dst->args.invert = (GLboolean)invert;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glScaled(glScaled_PACKED *_dst, GLdouble x, GLdouble y, GLdouble z) {
    if (_dst == NULL) _dst = malloc(sizeof(glScaled_PACKED));
    _dst->index = glScaled_INDEX;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    _dst->args.z = (GLdouble)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glScalef(glScalef_PACKED *_dst, GLfloat x, GLfloat y, GLfloat z) {
    if (_dst == NULL) _dst = malloc(sizeof(glScalef_PACKED));
    _dst->index = glScalef_INDEX;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    _dst->args.z = (GLfloat)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glScissor(glScissor_PACKED *_dst, GLint x, GLint y, GLsizei width, GLsizei height) {
    if (_dst == NULL) _dst = malloc(sizeof(glScissor_PACKED));
    _dst->index = glScissor_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3b(glSecondaryColor3b_PACKED *_dst, GLbyte red, GLbyte green, GLbyte blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3b_PACKED));
    _dst->index = glSecondaryColor3b_INDEX;
    _dst->args.red = (GLbyte)red;
    _dst->args.green = (GLbyte)green;
    _dst->args.blue = (GLbyte)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3bv(glSecondaryColor3bv_PACKED *_dst, const GLbyte * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3bv_PACKED));
    _dst->index = glSecondaryColor3bv_INDEX;
    _dst->args.v = (GLbyte *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3d(glSecondaryColor3d_PACKED *_dst, GLdouble red, GLdouble green, GLdouble blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3d_PACKED));
    _dst->index = glSecondaryColor3d_INDEX;
    _dst->args.red = (GLdouble)red;
    _dst->args.green = (GLdouble)green;
    _dst->args.blue = (GLdouble)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3dv(glSecondaryColor3dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3dv_PACKED));
    _dst->index = glSecondaryColor3dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3f(glSecondaryColor3f_PACKED *_dst, GLfloat red, GLfloat green, GLfloat blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3f_PACKED));
    _dst->index = glSecondaryColor3f_INDEX;
    _dst->args.red = (GLfloat)red;
    _dst->args.green = (GLfloat)green;
    _dst->args.blue = (GLfloat)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3fv(glSecondaryColor3fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3fv_PACKED));
    _dst->index = glSecondaryColor3fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3i(glSecondaryColor3i_PACKED *_dst, GLint red, GLint green, GLint blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3i_PACKED));
    _dst->index = glSecondaryColor3i_INDEX;
    _dst->args.red = (GLint)red;
    _dst->args.green = (GLint)green;
    _dst->args.blue = (GLint)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3iv(glSecondaryColor3iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3iv_PACKED));
    _dst->index = glSecondaryColor3iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3s(glSecondaryColor3s_PACKED *_dst, GLshort red, GLshort green, GLshort blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3s_PACKED));
    _dst->index = glSecondaryColor3s_INDEX;
    _dst->args.red = (GLshort)red;
    _dst->args.green = (GLshort)green;
    _dst->args.blue = (GLshort)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3sv(glSecondaryColor3sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3sv_PACKED));
    _dst->index = glSecondaryColor3sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3ub(glSecondaryColor3ub_PACKED *_dst, GLubyte red, GLubyte green, GLubyte blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3ub_PACKED));
    _dst->index = glSecondaryColor3ub_INDEX;
    _dst->args.red = (GLubyte)red;
    _dst->args.green = (GLubyte)green;
    _dst->args.blue = (GLubyte)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3ubv(glSecondaryColor3ubv_PACKED *_dst, const GLubyte * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3ubv_PACKED));
    _dst->index = glSecondaryColor3ubv_INDEX;
    _dst->args.v = (GLubyte *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3ui(glSecondaryColor3ui_PACKED *_dst, GLuint red, GLuint green, GLuint blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3ui_PACKED));
    _dst->index = glSecondaryColor3ui_INDEX;
    _dst->args.red = (GLuint)red;
    _dst->args.green = (GLuint)green;
    _dst->args.blue = (GLuint)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3uiv(glSecondaryColor3uiv_PACKED *_dst, const GLuint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3uiv_PACKED));
    _dst->index = glSecondaryColor3uiv_INDEX;
    _dst->args.v = (GLuint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3us(glSecondaryColor3us_PACKED *_dst, GLushort red, GLushort green, GLushort blue) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3us_PACKED));
    _dst->index = glSecondaryColor3us_INDEX;
    _dst->args.red = (GLushort)red;
    _dst->args.green = (GLushort)green;
    _dst->args.blue = (GLushort)blue;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSecondaryColor3usv(glSecondaryColor3usv_PACKED *_dst, const GLushort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glSecondaryColor3usv_PACKED));
    _dst->index = glSecondaryColor3usv_INDEX;
    _dst->args.v = (GLushort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glSelectBuffer(glSelectBuffer_PACKED *_dst, GLsizei size, GLuint * buffer) {
    if (_dst == NULL) _dst = malloc(sizeof(glSelectBuffer_PACKED));
    _dst->index = glSelectBuffer_INDEX;
    _dst->args.size = (GLsizei)size;
    _dst->args.buffer = (GLuint *)buffer;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glShadeModel(glShadeModel_PACKED *_dst, GLenum mode) {
    if (_dst == NULL) _dst = malloc(sizeof(glShadeModel_PACKED));
    _dst->index = glShadeModel_INDEX;
    _dst->args.mode = (GLenum)mode;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glStencilFunc(glStencilFunc_PACKED *_dst, GLenum func, GLint ref, GLuint mask) {
    if (_dst == NULL) _dst = malloc(sizeof(glStencilFunc_PACKED));
    _dst->index = glStencilFunc_INDEX;
    _dst->args.func = (GLenum)func;
    _dst->args.ref = (GLint)ref;
    _dst->args.mask = (GLuint)mask;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glStencilMask(glStencilMask_PACKED *_dst, GLuint mask) {
    if (_dst == NULL) _dst = malloc(sizeof(glStencilMask_PACKED));
    _dst->index = glStencilMask_INDEX;
    _dst->args.mask = (GLuint)mask;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glStencilOp(glStencilOp_PACKED *_dst, GLenum fail, GLenum zfail, GLenum zpass) {
    if (_dst == NULL) _dst = malloc(sizeof(glStencilOp_PACKED));
    _dst->index = glStencilOp_INDEX;
    _dst->args.fail = (GLenum)fail;
    _dst->args.zfail = (GLenum)zfail;
    _dst->args.zpass = (GLenum)zpass;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord1d(glTexCoord1d_PACKED *_dst, GLdouble s) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord1d_PACKED));
    _dst->index = glTexCoord1d_INDEX;
    _dst->args.s = (GLdouble)s;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord1dv(glTexCoord1dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord1dv_PACKED));
    _dst->index = glTexCoord1dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord1f(glTexCoord1f_PACKED *_dst, GLfloat s) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord1f_PACKED));
    _dst->index = glTexCoord1f_INDEX;
    _dst->args.s = (GLfloat)s;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord1fv(glTexCoord1fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord1fv_PACKED));
    _dst->index = glTexCoord1fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord1i(glTexCoord1i_PACKED *_dst, GLint s) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord1i_PACKED));
    _dst->index = glTexCoord1i_INDEX;
    _dst->args.s = (GLint)s;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord1iv(glTexCoord1iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord1iv_PACKED));
    _dst->index = glTexCoord1iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord1s(glTexCoord1s_PACKED *_dst, GLshort s) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord1s_PACKED));
    _dst->index = glTexCoord1s_INDEX;
    _dst->args.s = (GLshort)s;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord1sv(glTexCoord1sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord1sv_PACKED));
    _dst->index = glTexCoord1sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord2d(glTexCoord2d_PACKED *_dst, GLdouble s, GLdouble t) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord2d_PACKED));
    _dst->index = glTexCoord2d_INDEX;
    _dst->args.s = (GLdouble)s;
    _dst->args.t = (GLdouble)t;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord2dv(glTexCoord2dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord2dv_PACKED));
    _dst->index = glTexCoord2dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord2f(glTexCoord2f_PACKED *_dst, GLfloat s, GLfloat t) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord2f_PACKED));
    _dst->index = glTexCoord2f_INDEX;
    _dst->args.s = (GLfloat)s;
    _dst->args.t = (GLfloat)t;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord2fv(glTexCoord2fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord2fv_PACKED));
    _dst->index = glTexCoord2fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord2i(glTexCoord2i_PACKED *_dst, GLint s, GLint t) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord2i_PACKED));
    _dst->index = glTexCoord2i_INDEX;
    _dst->args.s = (GLint)s;
    _dst->args.t = (GLint)t;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord2iv(glTexCoord2iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord2iv_PACKED));
    _dst->index = glTexCoord2iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord2s(glTexCoord2s_PACKED *_dst, GLshort s, GLshort t) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord2s_PACKED));
    _dst->index = glTexCoord2s_INDEX;
    _dst->args.s = (GLshort)s;
    _dst->args.t = (GLshort)t;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord2sv(glTexCoord2sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord2sv_PACKED));
    _dst->index = glTexCoord2sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord3d(glTexCoord3d_PACKED *_dst, GLdouble s, GLdouble t, GLdouble r) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord3d_PACKED));
    _dst->index = glTexCoord3d_INDEX;
    _dst->args.s = (GLdouble)s;
    _dst->args.t = (GLdouble)t;
    _dst->args.r = (GLdouble)r;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord3dv(glTexCoord3dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord3dv_PACKED));
    _dst->index = glTexCoord3dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord3f(glTexCoord3f_PACKED *_dst, GLfloat s, GLfloat t, GLfloat r) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord3f_PACKED));
    _dst->index = glTexCoord3f_INDEX;
    _dst->args.s = (GLfloat)s;
    _dst->args.t = (GLfloat)t;
    _dst->args.r = (GLfloat)r;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord3fv(glTexCoord3fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord3fv_PACKED));
    _dst->index = glTexCoord3fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord3i(glTexCoord3i_PACKED *_dst, GLint s, GLint t, GLint r) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord3i_PACKED));
    _dst->index = glTexCoord3i_INDEX;
    _dst->args.s = (GLint)s;
    _dst->args.t = (GLint)t;
    _dst->args.r = (GLint)r;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord3iv(glTexCoord3iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord3iv_PACKED));
    _dst->index = glTexCoord3iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord3s(glTexCoord3s_PACKED *_dst, GLshort s, GLshort t, GLshort r) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord3s_PACKED));
    _dst->index = glTexCoord3s_INDEX;
    _dst->args.s = (GLshort)s;
    _dst->args.t = (GLshort)t;
    _dst->args.r = (GLshort)r;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord3sv(glTexCoord3sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord3sv_PACKED));
    _dst->index = glTexCoord3sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord4d(glTexCoord4d_PACKED *_dst, GLdouble s, GLdouble t, GLdouble r, GLdouble q) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord4d_PACKED));
    _dst->index = glTexCoord4d_INDEX;
    _dst->args.s = (GLdouble)s;
    _dst->args.t = (GLdouble)t;
    _dst->args.r = (GLdouble)r;
    _dst->args.q = (GLdouble)q;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord4dv(glTexCoord4dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord4dv_PACKED));
    _dst->index = glTexCoord4dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord4f(glTexCoord4f_PACKED *_dst, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord4f_PACKED));
    _dst->index = glTexCoord4f_INDEX;
    _dst->args.s = (GLfloat)s;
    _dst->args.t = (GLfloat)t;
    _dst->args.r = (GLfloat)r;
    _dst->args.q = (GLfloat)q;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord4fv(glTexCoord4fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord4fv_PACKED));
    _dst->index = glTexCoord4fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord4i(glTexCoord4i_PACKED *_dst, GLint s, GLint t, GLint r, GLint q) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord4i_PACKED));
    _dst->index = glTexCoord4i_INDEX;
    _dst->args.s = (GLint)s;
    _dst->args.t = (GLint)t;
    _dst->args.r = (GLint)r;
    _dst->args.q = (GLint)q;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord4iv(glTexCoord4iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord4iv_PACKED));
    _dst->index = glTexCoord4iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord4s(glTexCoord4s_PACKED *_dst, GLshort s, GLshort t, GLshort r, GLshort q) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord4s_PACKED));
    _dst->index = glTexCoord4s_INDEX;
    _dst->args.s = (GLshort)s;
    _dst->args.t = (GLshort)t;
    _dst->args.r = (GLshort)r;
    _dst->args.q = (GLshort)q;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoord4sv(glTexCoord4sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoord4sv_PACKED));
    _dst->index = glTexCoord4sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexCoordPointer(glTexCoordPointer_PACKED *_dst, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexCoordPointer_PACKED));
    _dst->index = glTexCoordPointer_INDEX;
    _dst->args.size = (GLint)size;
    _dst->args.type = (GLenum)type;
    _dst->args.stride = (GLsizei)stride;
    _dst->args.pointer = (GLvoid *)pointer;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexEnvf(glTexEnvf_PACKED *_dst, GLenum target, GLenum pname, GLfloat param) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexEnvf_PACKED));
    _dst->index = glTexEnvf_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLfloat)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexEnvfv(glTexEnvfv_PACKED *_dst, GLenum target, GLenum pname, const GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexEnvfv_PACKED));
    _dst->index = glTexEnvfv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexEnvi(glTexEnvi_PACKED *_dst, GLenum target, GLenum pname, GLint param) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexEnvi_PACKED));
    _dst->index = glTexEnvi_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLint)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexEnviv(glTexEnviv_PACKED *_dst, GLenum target, GLenum pname, const GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexEnviv_PACKED));
    _dst->index = glTexEnviv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexGend(glTexGend_PACKED *_dst, GLenum coord, GLenum pname, GLdouble param) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexGend_PACKED));
    _dst->index = glTexGend_INDEX;
    _dst->args.coord = (GLenum)coord;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLdouble)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexGendv(glTexGendv_PACKED *_dst, GLenum coord, GLenum pname, const GLdouble * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexGendv_PACKED));
    _dst->index = glTexGendv_INDEX;
    _dst->args.coord = (GLenum)coord;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLdouble *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexGenf(glTexGenf_PACKED *_dst, GLenum coord, GLenum pname, GLfloat param) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexGenf_PACKED));
    _dst->index = glTexGenf_INDEX;
    _dst->args.coord = (GLenum)coord;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLfloat)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexGenfv(glTexGenfv_PACKED *_dst, GLenum coord, GLenum pname, const GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexGenfv_PACKED));
    _dst->index = glTexGenfv_INDEX;
    _dst->args.coord = (GLenum)coord;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexGeni(glTexGeni_PACKED *_dst, GLenum coord, GLenum pname, GLint param) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexGeni_PACKED));
    _dst->index = glTexGeni_INDEX;
    _dst->args.coord = (GLenum)coord;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLint)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexGeniv(glTexGeniv_PACKED *_dst, GLenum coord, GLenum pname, const GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexGeniv_PACKED));
    _dst->index = glTexGeniv_INDEX;
    _dst->args.coord = (GLenum)coord;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexImage1D(glTexImage1D_PACKED *_dst, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexImage1D_PACKED));
    _dst->index = glTexImage1D_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.internalformat = (GLint)internalformat;
    _dst->args.width = (GLsizei)width;
    _dst->args.border = (GLint)border;
    _dst->args.format = (GLenum)format;
    _dst->args.type = (GLenum)type;
    _dst->args.pixels = (GLvoid *)pixels;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexImage2D(glTexImage2D_PACKED *_dst, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexImage2D_PACKED));
    _dst->index = glTexImage2D_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.internalformat = (GLint)internalformat;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.border = (GLint)border;
    _dst->args.format = (GLenum)format;
    _dst->args.type = (GLenum)type;
    _dst->args.pixels = (GLvoid *)pixels;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexImage3D(glTexImage3D_PACKED *_dst, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexImage3D_PACKED));
    _dst->index = glTexImage3D_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.internalformat = (GLint)internalformat;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.depth = (GLsizei)depth;
    _dst->args.border = (GLint)border;
    _dst->args.format = (GLenum)format;
    _dst->args.type = (GLenum)type;
    _dst->args.pixels = (GLvoid *)pixels;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexParameterf(glTexParameterf_PACKED *_dst, GLenum target, GLenum pname, GLfloat param) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexParameterf_PACKED));
    _dst->index = glTexParameterf_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLfloat)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexParameterfv(glTexParameterfv_PACKED *_dst, GLenum target, GLenum pname, const GLfloat * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexParameterfv_PACKED));
    _dst->index = glTexParameterfv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLfloat *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexParameteri(glTexParameteri_PACKED *_dst, GLenum target, GLenum pname, GLint param) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexParameteri_PACKED));
    _dst->index = glTexParameteri_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.param = (GLint)param;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexParameteriv(glTexParameteriv_PACKED *_dst, GLenum target, GLenum pname, const GLint * params) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexParameteriv_PACKED));
    _dst->index = glTexParameteriv_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.pname = (GLenum)pname;
    _dst->args.params = (GLint *)params;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexSubImage1D(glTexSubImage1D_PACKED *_dst, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexSubImage1D_PACKED));
    _dst->index = glTexSubImage1D_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.xoffset = (GLint)xoffset;
    _dst->args.width = (GLsizei)width;
    _dst->args.format = (GLenum)format;
    _dst->args.type = (GLenum)type;
    _dst->args.pixels = (GLvoid *)pixels;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexSubImage2D(glTexSubImage2D_PACKED *_dst, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexSubImage2D_PACKED));
    _dst->index = glTexSubImage2D_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.xoffset = (GLint)xoffset;
    _dst->args.yoffset = (GLint)yoffset;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.format = (GLenum)format;
    _dst->args.type = (GLenum)type;
    _dst->args.pixels = (GLvoid *)pixels;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTexSubImage3D(glTexSubImage3D_PACKED *_dst, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels) {
    if (_dst == NULL) _dst = malloc(sizeof(glTexSubImage3D_PACKED));
    _dst->index = glTexSubImage3D_INDEX;
    _dst->args.target = (GLenum)target;
    _dst->args.level = (GLint)level;
    _dst->args.xoffset = (GLint)xoffset;
    _dst->args.yoffset = (GLint)yoffset;
    _dst->args.zoffset = (GLint)zoffset;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    _dst->args.depth = (GLsizei)depth;
    _dst->args.format = (GLenum)format;
    _dst->args.type = (GLenum)type;
    _dst->args.pixels = (GLvoid *)pixels;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTranslated(glTranslated_PACKED *_dst, GLdouble x, GLdouble y, GLdouble z) {
    if (_dst == NULL) _dst = malloc(sizeof(glTranslated_PACKED));
    _dst->index = glTranslated_INDEX;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    _dst->args.z = (GLdouble)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glTranslatef(glTranslatef_PACKED *_dst, GLfloat x, GLfloat y, GLfloat z) {
    if (_dst == NULL) _dst = malloc(sizeof(glTranslatef_PACKED));
    _dst->index = glTranslatef_INDEX;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    _dst->args.z = (GLfloat)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glUnlockArraysEXT(glUnlockArraysEXT_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glUnlockArraysEXT_PACKED));
    _dst->index = glUnlockArraysEXT_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex2d(glVertex2d_PACKED *_dst, GLdouble x, GLdouble y) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex2d_PACKED));
    _dst->index = glVertex2d_INDEX;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex2dv(glVertex2dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex2dv_PACKED));
    _dst->index = glVertex2dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex2f(glVertex2f_PACKED *_dst, GLfloat x, GLfloat y) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex2f_PACKED));
    _dst->index = glVertex2f_INDEX;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex2fv(glVertex2fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex2fv_PACKED));
    _dst->index = glVertex2fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex2i(glVertex2i_PACKED *_dst, GLint x, GLint y) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex2i_PACKED));
    _dst->index = glVertex2i_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex2iv(glVertex2iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex2iv_PACKED));
    _dst->index = glVertex2iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex2s(glVertex2s_PACKED *_dst, GLshort x, GLshort y) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex2s_PACKED));
    _dst->index = glVertex2s_INDEX;
    _dst->args.x = (GLshort)x;
    _dst->args.y = (GLshort)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex2sv(glVertex2sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex2sv_PACKED));
    _dst->index = glVertex2sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex3d(glVertex3d_PACKED *_dst, GLdouble x, GLdouble y, GLdouble z) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex3d_PACKED));
    _dst->index = glVertex3d_INDEX;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    _dst->args.z = (GLdouble)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex3dv(glVertex3dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex3dv_PACKED));
    _dst->index = glVertex3dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex3f(glVertex3f_PACKED *_dst, GLfloat x, GLfloat y, GLfloat z) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex3f_PACKED));
    _dst->index = glVertex3f_INDEX;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    _dst->args.z = (GLfloat)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex3fv(glVertex3fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex3fv_PACKED));
    _dst->index = glVertex3fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex3i(glVertex3i_PACKED *_dst, GLint x, GLint y, GLint z) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex3i_PACKED));
    _dst->index = glVertex3i_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.z = (GLint)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex3iv(glVertex3iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex3iv_PACKED));
    _dst->index = glVertex3iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex3s(glVertex3s_PACKED *_dst, GLshort x, GLshort y, GLshort z) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex3s_PACKED));
    _dst->index = glVertex3s_INDEX;
    _dst->args.x = (GLshort)x;
    _dst->args.y = (GLshort)y;
    _dst->args.z = (GLshort)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex3sv(glVertex3sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex3sv_PACKED));
    _dst->index = glVertex3sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex4d(glVertex4d_PACKED *_dst, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex4d_PACKED));
    _dst->index = glVertex4d_INDEX;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    _dst->args.z = (GLdouble)z;
    _dst->args.w = (GLdouble)w;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex4dv(glVertex4dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex4dv_PACKED));
    _dst->index = glVertex4dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex4f(glVertex4f_PACKED *_dst, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex4f_PACKED));
    _dst->index = glVertex4f_INDEX;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    _dst->args.z = (GLfloat)z;
    _dst->args.w = (GLfloat)w;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex4fv(glVertex4fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex4fv_PACKED));
    _dst->index = glVertex4fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex4i(glVertex4i_PACKED *_dst, GLint x, GLint y, GLint z, GLint w) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex4i_PACKED));
    _dst->index = glVertex4i_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.z = (GLint)z;
    _dst->args.w = (GLint)w;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex4iv(glVertex4iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex4iv_PACKED));
    _dst->index = glVertex4iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex4s(glVertex4s_PACKED *_dst, GLshort x, GLshort y, GLshort z, GLshort w) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex4s_PACKED));
    _dst->index = glVertex4s_INDEX;
    _dst->args.x = (GLshort)x;
    _dst->args.y = (GLshort)y;
    _dst->args.z = (GLshort)z;
    _dst->args.w = (GLshort)w;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertex4sv(glVertex4sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertex4sv_PACKED));
    _dst->index = glVertex4sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glVertexPointer(glVertexPointer_PACKED *_dst, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer) {
    if (_dst == NULL) _dst = malloc(sizeof(glVertexPointer_PACKED));
    _dst->index = glVertexPointer_INDEX;
    _dst->args.size = (GLint)size;
    _dst->args.type = (GLenum)type;
    _dst->args.stride = (GLsizei)stride;
    _dst->args.pointer = (GLvoid *)pointer;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glViewport(glViewport_PACKED *_dst, GLint x, GLint y, GLsizei width, GLsizei height) {
    if (_dst == NULL) _dst = malloc(sizeof(glViewport_PACKED));
    _dst->index = glViewport_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.width = (GLsizei)width;
    _dst->args.height = (GLsizei)height;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos2d(glWindowPos2d_PACKED *_dst, GLdouble x, GLdouble y) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos2d_PACKED));
    _dst->index = glWindowPos2d_INDEX;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos2dv(glWindowPos2dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos2dv_PACKED));
    _dst->index = glWindowPos2dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos2f(glWindowPos2f_PACKED *_dst, GLfloat x, GLfloat y) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos2f_PACKED));
    _dst->index = glWindowPos2f_INDEX;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos2fv(glWindowPos2fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos2fv_PACKED));
    _dst->index = glWindowPos2fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos2i(glWindowPos2i_PACKED *_dst, GLint x, GLint y) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos2i_PACKED));
    _dst->index = glWindowPos2i_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos2iv(glWindowPos2iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos2iv_PACKED));
    _dst->index = glWindowPos2iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos2s(glWindowPos2s_PACKED *_dst, GLshort x, GLshort y) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos2s_PACKED));
    _dst->index = glWindowPos2s_INDEX;
    _dst->args.x = (GLshort)x;
    _dst->args.y = (GLshort)y;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos2sv(glWindowPos2sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos2sv_PACKED));
    _dst->index = glWindowPos2sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos3d(glWindowPos3d_PACKED *_dst, GLdouble x, GLdouble y, GLdouble z) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos3d_PACKED));
    _dst->index = glWindowPos3d_INDEX;
    _dst->args.x = (GLdouble)x;
    _dst->args.y = (GLdouble)y;
    _dst->args.z = (GLdouble)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos3dv(glWindowPos3dv_PACKED *_dst, const GLdouble * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos3dv_PACKED));
    _dst->index = glWindowPos3dv_INDEX;
    _dst->args.v = (GLdouble *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos3f(glWindowPos3f_PACKED *_dst, GLfloat x, GLfloat y, GLfloat z) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos3f_PACKED));
    _dst->index = glWindowPos3f_INDEX;
    _dst->args.x = (GLfloat)x;
    _dst->args.y = (GLfloat)y;
    _dst->args.z = (GLfloat)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos3fv(glWindowPos3fv_PACKED *_dst, const GLfloat * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos3fv_PACKED));
    _dst->index = glWindowPos3fv_INDEX;
    _dst->args.v = (GLfloat *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos3i(glWindowPos3i_PACKED *_dst, GLint x, GLint y, GLint z) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos3i_PACKED));
    _dst->index = glWindowPos3i_INDEX;
    _dst->args.x = (GLint)x;
    _dst->args.y = (GLint)y;
    _dst->args.z = (GLint)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos3iv(glWindowPos3iv_PACKED *_dst, const GLint * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos3iv_PACKED));
    _dst->index = glWindowPos3iv_INDEX;
    _dst->args.v = (GLint *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos3s(glWindowPos3s_PACKED *_dst, GLshort x, GLshort y, GLshort z) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos3s_PACKED));
    _dst->index = glWindowPos3s_INDEX;
    _dst->args.x = (GLshort)x;
    _dst->args.y = (GLshort)y;
    _dst->args.z = (GLshort)z;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glWindowPos3sv(glWindowPos3sv_PACKED *_dst, const GLshort * v) {
    if (_dst == NULL) _dst = malloc(sizeof(glWindowPos3sv_PACKED));
    _dst->index = glWindowPos3sv_INDEX;
    _dst->args.v = (GLshort *)v;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXChooseFBConfig(glXChooseFBConfig_PACKED *_dst, Display * dpy, int screen, const int * attrib_list, int * nelements) {
    if (_dst == NULL) _dst = malloc(sizeof(glXChooseFBConfig_PACKED));
    _dst->index = glXChooseFBConfig_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.screen = (int)screen;
    _dst->args.attrib_list = (int *)attrib_list;
    _dst->args.nelements = (int *)nelements;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXChooseVisual(glXChooseVisual_PACKED *_dst, Display * dpy, int screen, int * attribList) {
    if (_dst == NULL) _dst = malloc(sizeof(glXChooseVisual_PACKED));
    _dst->index = glXChooseVisual_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.screen = (int)screen;
    _dst->args.attribList = (int *)attribList;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXCopyContext(glXCopyContext_PACKED *_dst, Display * dpy, GLXContext src, GLXContext dst, unsigned long mask) {
    if (_dst == NULL) _dst = malloc(sizeof(glXCopyContext_PACKED));
    _dst->index = glXCopyContext_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.src = (GLXContext)src;
    _dst->args.dst = (GLXContext)dst;
    _dst->args.mask = (unsigned long)mask;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXCreateContext(glXCreateContext_PACKED *_dst, Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct) {
    if (_dst == NULL) _dst = malloc(sizeof(glXCreateContext_PACKED));
    _dst->index = glXCreateContext_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.vis = (XVisualInfo *)vis;
    _dst->args.shareList = (GLXContext)shareList;
    _dst->args.direct = (Bool)direct;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXCreateContextAttribsARB(glXCreateContextAttribsARB_PACKED *_dst, Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list) {
    if (_dst == NULL) _dst = malloc(sizeof(glXCreateContextAttribsARB_PACKED));
    _dst->index = glXCreateContextAttribsARB_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.config = (GLXFBConfig)config;
    _dst->args.share_context = (GLXContext)share_context;
    _dst->args.direct = (Bool)direct;
    _dst->args.attrib_list = (int *)attrib_list;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXCreateGLXPixmap(glXCreateGLXPixmap_PACKED *_dst, Display * dpy, XVisualInfo * visual, Pixmap pixmap) {
    if (_dst == NULL) _dst = malloc(sizeof(glXCreateGLXPixmap_PACKED));
    _dst->index = glXCreateGLXPixmap_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.visual = (XVisualInfo *)visual;
    _dst->args.pixmap = (Pixmap)pixmap;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXCreateNewContext(glXCreateNewContext_PACKED *_dst, Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct) {
    if (_dst == NULL) _dst = malloc(sizeof(glXCreateNewContext_PACKED));
    _dst->index = glXCreateNewContext_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.config = (GLXFBConfig)config;
    _dst->args.render_type = (int)render_type;
    _dst->args.share_list = (GLXContext)share_list;
    _dst->args.direct = (Bool)direct;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXCreateWindow(glXCreateWindow_PACKED *_dst, Display * dpy, GLXFBConfig config, Window win, const int * attrib_list) {
    if (_dst == NULL) _dst = malloc(sizeof(glXCreateWindow_PACKED));
    _dst->index = glXCreateWindow_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.config = (GLXFBConfig)config;
    _dst->args.win = (Window)win;
    _dst->args.attrib_list = (int *)attrib_list;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXDestroyContext(glXDestroyContext_PACKED *_dst, Display * dpy, GLXContext ctx) {
    if (_dst == NULL) _dst = malloc(sizeof(glXDestroyContext_PACKED));
    _dst->index = glXDestroyContext_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.ctx = (GLXContext)ctx;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXDestroyGLXPixmap(glXDestroyGLXPixmap_PACKED *_dst, Display * dpy, GLXPixmap pixmap) {
    if (_dst == NULL) _dst = malloc(sizeof(glXDestroyGLXPixmap_PACKED));
    _dst->index = glXDestroyGLXPixmap_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.pixmap = (GLXPixmap)pixmap;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXDestroyWindow(glXDestroyWindow_PACKED *_dst, Display * dpy, GLXWindow win) {
    if (_dst == NULL) _dst = malloc(sizeof(glXDestroyWindow_PACKED));
    _dst->index = glXDestroyWindow_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.win = (GLXWindow)win;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXGetClientString(glXGetClientString_PACKED *_dst, Display * display, int name) {
    if (_dst == NULL) _dst = malloc(sizeof(glXGetClientString_PACKED));
    _dst->index = glXGetClientString_INDEX;
    _dst->args.display = (Display *)display;
    _dst->args.name = (int)name;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXGetConfig(glXGetConfig_PACKED *_dst, Display * display, XVisualInfo * visual, int attribute, int * value) {
    if (_dst == NULL) _dst = malloc(sizeof(glXGetConfig_PACKED));
    _dst->index = glXGetConfig_INDEX;
    _dst->args.display = (Display *)display;
    _dst->args.visual = (XVisualInfo *)visual;
    _dst->args.attribute = (int)attribute;
    _dst->args.value = (int *)value;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXGetCurrentContext(glXGetCurrentContext_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glXGetCurrentContext_PACKED));
    _dst->index = glXGetCurrentContext_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXGetCurrentDisplay(glXGetCurrentDisplay_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glXGetCurrentDisplay_PACKED));
    _dst->index = glXGetCurrentDisplay_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXGetCurrentDrawable(glXGetCurrentDrawable_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glXGetCurrentDrawable_PACKED));
    _dst->index = glXGetCurrentDrawable_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXGetFBConfigAttrib(glXGetFBConfigAttrib_PACKED *_dst, Display * dpy, GLXFBConfig config, int attribute, int * value) {
    if (_dst == NULL) _dst = malloc(sizeof(glXGetFBConfigAttrib_PACKED));
    _dst->index = glXGetFBConfigAttrib_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.config = (GLXFBConfig)config;
    _dst->args.attribute = (int)attribute;
    _dst->args.value = (int *)value;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXGetFBConfigs(glXGetFBConfigs_PACKED *_dst, Display * dpy, int screen, int * nelements) {
    if (_dst == NULL) _dst = malloc(sizeof(glXGetFBConfigs_PACKED));
    _dst->index = glXGetFBConfigs_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.screen = (int)screen;
    _dst->args.nelements = (int *)nelements;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXGetProcAddress(glXGetProcAddress_PACKED *_dst, const GLubyte * procName) {
    if (_dst == NULL) _dst = malloc(sizeof(glXGetProcAddress_PACKED));
    _dst->index = glXGetProcAddress_INDEX;
    _dst->args.procName = (GLubyte *)procName;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXGetProcAddressARB(glXGetProcAddressARB_PACKED *_dst, const GLubyte * procName) {
    if (_dst == NULL) _dst = malloc(sizeof(glXGetProcAddressARB_PACKED));
    _dst->index = glXGetProcAddressARB_INDEX;
    _dst->args.procName = (GLubyte *)procName;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXGetVisualFromFBConfig(glXGetVisualFromFBConfig_PACKED *_dst, Display * dpy, GLXFBConfig config) {
    if (_dst == NULL) _dst = malloc(sizeof(glXGetVisualFromFBConfig_PACKED));
    _dst->index = glXGetVisualFromFBConfig_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.config = (GLXFBConfig)config;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXIsDirect(glXIsDirect_PACKED *_dst, Display * dpy, GLXContext ctx) {
    if (_dst == NULL) _dst = malloc(sizeof(glXIsDirect_PACKED));
    _dst->index = glXIsDirect_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.ctx = (GLXContext)ctx;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXMakeContextCurrent(glXMakeContextCurrent_PACKED *_dst, Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx) {
    if (_dst == NULL) _dst = malloc(sizeof(glXMakeContextCurrent_PACKED));
    _dst->index = glXMakeContextCurrent_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.draw = (GLXDrawable)draw;
    _dst->args.read = (GLXDrawable)read;
    _dst->args.ctx = (GLXContext)ctx;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXMakeCurrent(glXMakeCurrent_PACKED *_dst, Display * dpy, GLXDrawable drawable, GLXContext ctx) {
    if (_dst == NULL) _dst = malloc(sizeof(glXMakeCurrent_PACKED));
    _dst->index = glXMakeCurrent_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.drawable = (GLXDrawable)drawable;
    _dst->args.ctx = (GLXContext)ctx;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXQueryExtension(glXQueryExtension_PACKED *_dst, Display * display, int * errorBase, int * eventBase) {
    if (_dst == NULL) _dst = malloc(sizeof(glXQueryExtension_PACKED));
    _dst->index = glXQueryExtension_INDEX;
    _dst->args.display = (Display *)display;
    _dst->args.errorBase = (int *)errorBase;
    _dst->args.eventBase = (int *)eventBase;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXQueryExtensionsString(glXQueryExtensionsString_PACKED *_dst, Display * dpy, int screen) {
    if (_dst == NULL) _dst = malloc(sizeof(glXQueryExtensionsString_PACKED));
    _dst->index = glXQueryExtensionsString_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.screen = (int)screen;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXQueryServerString(glXQueryServerString_PACKED *_dst, Display * dpy, int screen, int name) {
    if (_dst == NULL) _dst = malloc(sizeof(glXQueryServerString_PACKED));
    _dst->index = glXQueryServerString_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.screen = (int)screen;
    _dst->args.name = (int)name;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXQueryVersion(glXQueryVersion_PACKED *_dst, Display * dpy, int * maj, int * min) {
    if (_dst == NULL) _dst = malloc(sizeof(glXQueryVersion_PACKED));
    _dst->index = glXQueryVersion_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.maj = (int *)maj;
    _dst->args.min = (int *)min;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXReleaseBuffersMESA(glXReleaseBuffersMESA_PACKED *_dst, Display * dpy, GLXDrawable drawable) {
    if (_dst == NULL) _dst = malloc(sizeof(glXReleaseBuffersMESA_PACKED));
    _dst->index = glXReleaseBuffersMESA_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.drawable = (GLXDrawable)drawable;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXSwapBuffers(glXSwapBuffers_PACKED *_dst, Display * dpy, GLXDrawable drawable) {
    if (_dst == NULL) _dst = malloc(sizeof(glXSwapBuffers_PACKED));
    _dst->index = glXSwapBuffers_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.drawable = (GLXDrawable)drawable;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXSwapIntervalEXT(glXSwapIntervalEXT_PACKED *_dst, Display * dpy, GLXDrawable drawable, int interval) {
    if (_dst == NULL) _dst = malloc(sizeof(glXSwapIntervalEXT_PACKED));
    _dst->index = glXSwapIntervalEXT_INDEX;
    _dst->args.dpy = (Display *)dpy;
    _dst->args.drawable = (GLXDrawable)drawable;
    _dst->args.interval = (int)interval;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXSwapIntervalMESA(glXSwapIntervalMESA_PACKED *_dst, unsigned int interval) {
    if (_dst == NULL) _dst = malloc(sizeof(glXSwapIntervalMESA_PACKED));
    _dst->index = glXSwapIntervalMESA_INDEX;
    _dst->args.interval = (unsigned int)interval;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXSwapIntervalSGI(glXSwapIntervalSGI_PACKED *_dst, int interval) {
    if (_dst == NULL) _dst = malloc(sizeof(glXSwapIntervalSGI_PACKED));
    _dst->index = glXSwapIntervalSGI_INDEX;
    _dst->args.interval = (int)interval;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXUseXFont(glXUseXFont_PACKED *_dst, Font font, int first, int count, int listBase) {
    if (_dst == NULL) _dst = malloc(sizeof(glXUseXFont_PACKED));
    _dst->index = glXUseXFont_INDEX;
    _dst->args.font = (Font)font;
    _dst->args.first = (int)first;
    _dst->args.count = (int)count;
    _dst->args.listBase = (int)listBase;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXWaitGL(glXWaitGL_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glXWaitGL_PACKED));
    _dst->index = glXWaitGL_INDEX;
    return (packed_call_t *)_dst;
}
packed_call_t *pack_glXWaitX(glXWaitX_PACKED *_dst) {
    if (_dst == NULL) _dst = malloc(sizeof(glXWaitX_PACKED));
    _dst->index = glXWaitX_INDEX;
    return (packed_call_t *)_dst;
}

#endif

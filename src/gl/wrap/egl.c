#include "glpack.h"
#include "../loader.h"
#include "../skip.h"
#include "../remote.h"

#ifndef skip_eglBindAPI
EGLBoolean eglBindAPI(EGLenum api) {
#ifndef direct_eglBindAPI
    PUSH_IF_COMPILING(eglBindAPI);
#endif
    FORWARD_IF_REMOTE(eglBindAPI);
    LOAD_EGL(eglBindAPI);
    return egl_eglBindAPI(api);
}
#endif
#ifndef skip_eglBindTexImage
EGLBoolean eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer) {
#ifndef direct_eglBindTexImage
    PUSH_IF_COMPILING(eglBindTexImage);
#endif
    FORWARD_IF_REMOTE(eglBindTexImage);
    LOAD_EGL(eglBindTexImage);
    return egl_eglBindTexImage(dpy, surface, buffer);
}
#endif
#ifndef skip_eglChooseConfig
EGLBoolean eglChooseConfig(EGLDisplay dpy, const EGLint * attrib_list, EGLConfig * configs, EGLint config_size, EGLint * num_config) {
#ifndef direct_eglChooseConfig
    PUSH_IF_COMPILING(eglChooseConfig);
#endif
    FORWARD_IF_REMOTE(eglChooseConfig);
    LOAD_EGL(eglChooseConfig);
    return egl_eglChooseConfig(dpy, attrib_list, configs, config_size, num_config);
}
#endif
#ifndef skip_eglClientWaitSyncKHR
EGLint eglClientWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout) {
#ifndef direct_eglClientWaitSyncKHR
    PUSH_IF_COMPILING(eglClientWaitSyncKHR);
#endif
    FORWARD_IF_REMOTE(eglClientWaitSyncKHR);
    LOAD_EGL(eglClientWaitSyncKHR);
    return egl_eglClientWaitSyncKHR(dpy, sync, flags, timeout);
}
#endif
#ifndef skip_eglClientWaitSyncNV
EGLint eglClientWaitSyncNV(EGLSyncNV sync, EGLint flags, EGLTimeNV timeout) {
#ifndef direct_eglClientWaitSyncNV
    PUSH_IF_COMPILING(eglClientWaitSyncNV);
#endif
    FORWARD_IF_REMOTE(eglClientWaitSyncNV);
    LOAD_EGL(eglClientWaitSyncNV);
    return egl_eglClientWaitSyncNV(sync, flags, timeout);
}
#endif
#ifndef skip_eglCopyBuffers
EGLBoolean eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target) {
#ifndef direct_eglCopyBuffers
    PUSH_IF_COMPILING(eglCopyBuffers);
#endif
    FORWARD_IF_REMOTE(eglCopyBuffers);
    LOAD_EGL(eglCopyBuffers);
    return egl_eglCopyBuffers(dpy, surface, target);
}
#endif
#ifndef skip_eglCreateContext
EGLContext eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint * attrib_list) {
#ifndef direct_eglCreateContext
    PUSH_IF_COMPILING(eglCreateContext);
#endif
    FORWARD_IF_REMOTE(eglCreateContext);
    LOAD_EGL(eglCreateContext);
    return egl_eglCreateContext(dpy, config, share_context, attrib_list);
}
#endif
#ifndef skip_eglCreateDRMImageMESA
EGLImageKHR eglCreateDRMImageMESA(EGLDisplay dpy, const EGLint * attrib_list) {
#ifndef direct_eglCreateDRMImageMESA
    PUSH_IF_COMPILING(eglCreateDRMImageMESA);
#endif
    FORWARD_IF_REMOTE(eglCreateDRMImageMESA);
    LOAD_EGL(eglCreateDRMImageMESA);
    return egl_eglCreateDRMImageMESA(dpy, attrib_list);
}
#endif
#ifndef skip_eglCreateFenceSyncNV
EGLSyncNV eglCreateFenceSyncNV(EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list) {
#ifndef direct_eglCreateFenceSyncNV
    PUSH_IF_COMPILING(eglCreateFenceSyncNV);
#endif
    FORWARD_IF_REMOTE(eglCreateFenceSyncNV);
    LOAD_EGL(eglCreateFenceSyncNV);
    return egl_eglCreateFenceSyncNV(dpy, condition, attrib_list);
}
#endif
#ifndef skip_eglCreateImageKHR
EGLImageKHR eglCreateImageKHR(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list) {
#ifndef direct_eglCreateImageKHR
    PUSH_IF_COMPILING(eglCreateImageKHR);
#endif
    FORWARD_IF_REMOTE(eglCreateImageKHR);
    LOAD_EGL(eglCreateImageKHR);
    return egl_eglCreateImageKHR(dpy, ctx, target, buffer, attrib_list);
}
#endif
#ifndef skip_eglCreatePbufferFromClientBuffer
EGLSurface eglCreatePbufferFromClientBuffer(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list) {
#ifndef direct_eglCreatePbufferFromClientBuffer
    PUSH_IF_COMPILING(eglCreatePbufferFromClientBuffer);
#endif
    FORWARD_IF_REMOTE(eglCreatePbufferFromClientBuffer);
    LOAD_EGL(eglCreatePbufferFromClientBuffer);
    return egl_eglCreatePbufferFromClientBuffer(dpy, buftype, buffer, config, attrib_list);
}
#endif
#ifndef skip_eglCreatePbufferSurface
EGLSurface eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint * attrib_list) {
#ifndef direct_eglCreatePbufferSurface
    PUSH_IF_COMPILING(eglCreatePbufferSurface);
#endif
    FORWARD_IF_REMOTE(eglCreatePbufferSurface);
    LOAD_EGL(eglCreatePbufferSurface);
    return egl_eglCreatePbufferSurface(dpy, config, attrib_list);
}
#endif
#ifndef skip_eglCreatePixmapSurface
EGLSurface eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint * attrib_list) {
#ifndef direct_eglCreatePixmapSurface
    PUSH_IF_COMPILING(eglCreatePixmapSurface);
#endif
    FORWARD_IF_REMOTE(eglCreatePixmapSurface);
    LOAD_EGL(eglCreatePixmapSurface);
    return egl_eglCreatePixmapSurface(dpy, config, pixmap, attrib_list);
}
#endif
#ifndef skip_eglCreatePixmapSurfaceHI
EGLSurface eglCreatePixmapSurfaceHI(EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap) {
#ifndef direct_eglCreatePixmapSurfaceHI
    PUSH_IF_COMPILING(eglCreatePixmapSurfaceHI);
#endif
    FORWARD_IF_REMOTE(eglCreatePixmapSurfaceHI);
    LOAD_EGL(eglCreatePixmapSurfaceHI);
    return egl_eglCreatePixmapSurfaceHI(dpy, config, pixmap);
}
#endif
#ifndef skip_eglCreateStreamFromFileDescriptorKHR
EGLStreamKHR eglCreateStreamFromFileDescriptorKHR(EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor) {
#ifndef direct_eglCreateStreamFromFileDescriptorKHR
    PUSH_IF_COMPILING(eglCreateStreamFromFileDescriptorKHR);
#endif
    FORWARD_IF_REMOTE(eglCreateStreamFromFileDescriptorKHR);
    LOAD_EGL(eglCreateStreamFromFileDescriptorKHR);
    return egl_eglCreateStreamFromFileDescriptorKHR(dpy, file_descriptor);
}
#endif
#ifndef skip_eglCreateStreamKHR
EGLStreamKHR eglCreateStreamKHR(EGLDisplay dpy, const EGLint * attrib_list) {
#ifndef direct_eglCreateStreamKHR
    PUSH_IF_COMPILING(eglCreateStreamKHR);
#endif
    FORWARD_IF_REMOTE(eglCreateStreamKHR);
    LOAD_EGL(eglCreateStreamKHR);
    return egl_eglCreateStreamKHR(dpy, attrib_list);
}
#endif
#ifndef skip_eglCreateStreamProducerSurfaceKHR
EGLSurface eglCreateStreamProducerSurfaceKHR(EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list) {
#ifndef direct_eglCreateStreamProducerSurfaceKHR
    PUSH_IF_COMPILING(eglCreateStreamProducerSurfaceKHR);
#endif
    FORWARD_IF_REMOTE(eglCreateStreamProducerSurfaceKHR);
    LOAD_EGL(eglCreateStreamProducerSurfaceKHR);
    return egl_eglCreateStreamProducerSurfaceKHR(dpy, config, stream, attrib_list);
}
#endif
#ifndef skip_eglCreateSyncKHR
EGLSyncKHR eglCreateSyncKHR(EGLDisplay dpy, EGLenum type, const EGLint * attrib_list) {
#ifndef direct_eglCreateSyncKHR
    PUSH_IF_COMPILING(eglCreateSyncKHR);
#endif
    FORWARD_IF_REMOTE(eglCreateSyncKHR);
    LOAD_EGL(eglCreateSyncKHR);
    return egl_eglCreateSyncKHR(dpy, type, attrib_list);
}
#endif
#ifndef skip_eglCreateWindowSurface
EGLSurface eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint * attrib_list) {
#ifndef direct_eglCreateWindowSurface
    PUSH_IF_COMPILING(eglCreateWindowSurface);
#endif
    FORWARD_IF_REMOTE(eglCreateWindowSurface);
    LOAD_EGL(eglCreateWindowSurface);
    return egl_eglCreateWindowSurface(dpy, config, win, attrib_list);
}
#endif
#ifndef skip_eglDestroyContext
EGLBoolean eglDestroyContext(EGLDisplay dpy, EGLContext ctx) {
#ifndef direct_eglDestroyContext
    PUSH_IF_COMPILING(eglDestroyContext);
#endif
    FORWARD_IF_REMOTE(eglDestroyContext);
    LOAD_EGL(eglDestroyContext);
    return egl_eglDestroyContext(dpy, ctx);
}
#endif
#ifndef skip_eglDestroyImageKHR
EGLBoolean eglDestroyImageKHR(EGLDisplay dpy, EGLImageKHR image) {
#ifndef direct_eglDestroyImageKHR
    PUSH_IF_COMPILING(eglDestroyImageKHR);
#endif
    FORWARD_IF_REMOTE(eglDestroyImageKHR);
    LOAD_EGL(eglDestroyImageKHR);
    return egl_eglDestroyImageKHR(dpy, image);
}
#endif
#ifndef skip_eglDestroyStreamKHR
EGLBoolean eglDestroyStreamKHR(EGLDisplay dpy, EGLStreamKHR stream) {
#ifndef direct_eglDestroyStreamKHR
    PUSH_IF_COMPILING(eglDestroyStreamKHR);
#endif
    FORWARD_IF_REMOTE(eglDestroyStreamKHR);
    LOAD_EGL(eglDestroyStreamKHR);
    return egl_eglDestroyStreamKHR(dpy, stream);
}
#endif
#ifndef skip_eglDestroySurface
EGLBoolean eglDestroySurface(EGLDisplay dpy, EGLSurface surface) {
#ifndef direct_eglDestroySurface
    PUSH_IF_COMPILING(eglDestroySurface);
#endif
    FORWARD_IF_REMOTE(eglDestroySurface);
    LOAD_EGL(eglDestroySurface);
    return egl_eglDestroySurface(dpy, surface);
}
#endif
#ifndef skip_eglDestroySyncKHR
EGLBoolean eglDestroySyncKHR(EGLDisplay dpy, EGLSyncKHR sync) {
#ifndef direct_eglDestroySyncKHR
    PUSH_IF_COMPILING(eglDestroySyncKHR);
#endif
    FORWARD_IF_REMOTE(eglDestroySyncKHR);
    LOAD_EGL(eglDestroySyncKHR);
    return egl_eglDestroySyncKHR(dpy, sync);
}
#endif
#ifndef skip_eglDestroySyncNV
EGLBoolean eglDestroySyncNV(EGLSyncNV sync) {
#ifndef direct_eglDestroySyncNV
    PUSH_IF_COMPILING(eglDestroySyncNV);
#endif
    FORWARD_IF_REMOTE(eglDestroySyncNV);
    LOAD_EGL(eglDestroySyncNV);
    return egl_eglDestroySyncNV(sync);
}
#endif
#ifndef skip_eglDupNativeFenceFDANDROID
EGLint eglDupNativeFenceFDANDROID(EGLDisplay dpy, EGLSyncKHR sync) {
#ifndef direct_eglDupNativeFenceFDANDROID
    PUSH_IF_COMPILING(eglDupNativeFenceFDANDROID);
#endif
    FORWARD_IF_REMOTE(eglDupNativeFenceFDANDROID);
    LOAD_EGL(eglDupNativeFenceFDANDROID);
    return egl_eglDupNativeFenceFDANDROID(dpy, sync);
}
#endif
#ifndef skip_eglExportDRMImageMESA
EGLBoolean eglExportDRMImageMESA(EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride) {
#ifndef direct_eglExportDRMImageMESA
    PUSH_IF_COMPILING(eglExportDRMImageMESA);
#endif
    FORWARD_IF_REMOTE(eglExportDRMImageMESA);
    LOAD_EGL(eglExportDRMImageMESA);
    return egl_eglExportDRMImageMESA(dpy, image, name, handle, stride);
}
#endif
#ifndef skip_eglFenceNV
EGLBoolean eglFenceNV(EGLSyncNV sync) {
#ifndef direct_eglFenceNV
    PUSH_IF_COMPILING(eglFenceNV);
#endif
    FORWARD_IF_REMOTE(eglFenceNV);
    LOAD_EGL(eglFenceNV);
    return egl_eglFenceNV(sync);
}
#endif
#ifndef skip_eglGetConfigAttrib
EGLBoolean eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value) {
#ifndef direct_eglGetConfigAttrib
    PUSH_IF_COMPILING(eglGetConfigAttrib);
#endif
    FORWARD_IF_REMOTE(eglGetConfigAttrib);
    LOAD_EGL(eglGetConfigAttrib);
    return egl_eglGetConfigAttrib(dpy, config, attribute, value);
}
#endif
#ifndef skip_eglGetConfigs
EGLBoolean eglGetConfigs(EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config) {
#ifndef direct_eglGetConfigs
    PUSH_IF_COMPILING(eglGetConfigs);
#endif
    FORWARD_IF_REMOTE(eglGetConfigs);
    LOAD_EGL(eglGetConfigs);
    return egl_eglGetConfigs(dpy, configs, config_size, num_config);
}
#endif
#ifndef skip_eglGetCurrentContext
EGLContext eglGetCurrentContext() {
#ifndef direct_eglGetCurrentContext
    PUSH_IF_COMPILING(eglGetCurrentContext);
#endif
    FORWARD_IF_REMOTE(eglGetCurrentContext);
    LOAD_EGL(eglGetCurrentContext);
    return egl_eglGetCurrentContext();
}
#endif
#ifndef skip_eglGetCurrentDisplay
EGLDisplay eglGetCurrentDisplay() {
#ifndef direct_eglGetCurrentDisplay
    PUSH_IF_COMPILING(eglGetCurrentDisplay);
#endif
    FORWARD_IF_REMOTE(eglGetCurrentDisplay);
    LOAD_EGL(eglGetCurrentDisplay);
    return egl_eglGetCurrentDisplay();
}
#endif
#ifndef skip_eglGetCurrentSurface
EGLSurface eglGetCurrentSurface(EGLint readdraw) {
#ifndef direct_eglGetCurrentSurface
    PUSH_IF_COMPILING(eglGetCurrentSurface);
#endif
    FORWARD_IF_REMOTE(eglGetCurrentSurface);
    LOAD_EGL(eglGetCurrentSurface);
    return egl_eglGetCurrentSurface(readdraw);
}
#endif
#ifndef skip_eglGetDisplay
EGLDisplay eglGetDisplay(EGLNativeDisplayType display_id) {
#ifndef direct_eglGetDisplay
    PUSH_IF_COMPILING(eglGetDisplay);
#endif
    FORWARD_IF_REMOTE(eglGetDisplay);
    LOAD_EGL(eglGetDisplay);
    return egl_eglGetDisplay(display_id);
}
#endif
#ifndef skip_eglGetError
EGLint eglGetError() {
#ifndef direct_eglGetError
    PUSH_IF_COMPILING(eglGetError);
#endif
    FORWARD_IF_REMOTE(eglGetError);
    LOAD_EGL(eglGetError);
    return egl_eglGetError();
}
#endif
#ifndef skip_eglGetProcAddress
__eglMustCastToProperFunctionPointerType eglGetProcAddress(const char * procname) {
#ifndef direct_eglGetProcAddress
    PUSH_IF_COMPILING(eglGetProcAddress);
#endif
    FORWARD_IF_REMOTE(eglGetProcAddress);
    LOAD_EGL(eglGetProcAddress);
    return egl_eglGetProcAddress(procname);
}
#endif
#ifndef skip_eglGetStreamFileDescriptorKHR
EGLNativeFileDescriptorKHR eglGetStreamFileDescriptorKHR(EGLDisplay dpy, EGLStreamKHR stream) {
#ifndef direct_eglGetStreamFileDescriptorKHR
    PUSH_IF_COMPILING(eglGetStreamFileDescriptorKHR);
#endif
    FORWARD_IF_REMOTE(eglGetStreamFileDescriptorKHR);
    LOAD_EGL(eglGetStreamFileDescriptorKHR);
    return egl_eglGetStreamFileDescriptorKHR(dpy, stream);
}
#endif
#ifndef skip_eglGetSyncAttribKHR
EGLBoolean eglGetSyncAttribKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value) {
#ifndef direct_eglGetSyncAttribKHR
    PUSH_IF_COMPILING(eglGetSyncAttribKHR);
#endif
    FORWARD_IF_REMOTE(eglGetSyncAttribKHR);
    LOAD_EGL(eglGetSyncAttribKHR);
    return egl_eglGetSyncAttribKHR(dpy, sync, attribute, value);
}
#endif
#ifndef skip_eglGetSyncAttribNV
EGLBoolean eglGetSyncAttribNV(EGLSyncNV sync, EGLint attribute, EGLint * value) {
#ifndef direct_eglGetSyncAttribNV
    PUSH_IF_COMPILING(eglGetSyncAttribNV);
#endif
    FORWARD_IF_REMOTE(eglGetSyncAttribNV);
    LOAD_EGL(eglGetSyncAttribNV);
    return egl_eglGetSyncAttribNV(sync, attribute, value);
}
#endif
#ifndef skip_eglGetSystemTimeFrequencyNV
EGLuint64NV eglGetSystemTimeFrequencyNV() {
#ifndef direct_eglGetSystemTimeFrequencyNV
    PUSH_IF_COMPILING(eglGetSystemTimeFrequencyNV);
#endif
    FORWARD_IF_REMOTE(eglGetSystemTimeFrequencyNV);
    LOAD_EGL(eglGetSystemTimeFrequencyNV);
    return egl_eglGetSystemTimeFrequencyNV();
}
#endif
#ifndef skip_eglGetSystemTimeNV
EGLuint64NV eglGetSystemTimeNV() {
#ifndef direct_eglGetSystemTimeNV
    PUSH_IF_COMPILING(eglGetSystemTimeNV);
#endif
    FORWARD_IF_REMOTE(eglGetSystemTimeNV);
    LOAD_EGL(eglGetSystemTimeNV);
    return egl_eglGetSystemTimeNV();
}
#endif
#ifndef skip_eglInitialize
EGLBoolean eglInitialize(EGLDisplay dpy, EGLint * major, EGLint * minor) {
#ifndef direct_eglInitialize
    PUSH_IF_COMPILING(eglInitialize);
#endif
    FORWARD_IF_REMOTE(eglInitialize);
    LOAD_EGL(eglInitialize);
    return egl_eglInitialize(dpy, major, minor);
}
#endif
#ifndef skip_eglLockSurfaceKHR
EGLBoolean eglLockSurfaceKHR(EGLDisplay display, EGLSurface surface, const EGLint * attrib_list) {
#ifndef direct_eglLockSurfaceKHR
    PUSH_IF_COMPILING(eglLockSurfaceKHR);
#endif
    FORWARD_IF_REMOTE(eglLockSurfaceKHR);
    LOAD_EGL(eglLockSurfaceKHR);
    return egl_eglLockSurfaceKHR(display, surface, attrib_list);
}
#endif
#ifndef skip_eglMakeCurrent
EGLBoolean eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx) {
#ifndef direct_eglMakeCurrent
    PUSH_IF_COMPILING(eglMakeCurrent);
#endif
    FORWARD_IF_REMOTE(eglMakeCurrent);
    LOAD_EGL(eglMakeCurrent);
    return egl_eglMakeCurrent(dpy, draw, read, ctx);
}
#endif
#ifndef skip_eglPostSubBufferNV
EGLBoolean eglPostSubBufferNV(EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height) {
#ifndef direct_eglPostSubBufferNV
    PUSH_IF_COMPILING(eglPostSubBufferNV);
#endif
    FORWARD_IF_REMOTE(eglPostSubBufferNV);
    LOAD_EGL(eglPostSubBufferNV);
    return egl_eglPostSubBufferNV(dpy, surface, x, y, width, height);
}
#endif
#ifndef skip_eglQueryAPI
EGLenum eglQueryAPI() {
#ifndef direct_eglQueryAPI
    PUSH_IF_COMPILING(eglQueryAPI);
#endif
    FORWARD_IF_REMOTE(eglQueryAPI);
    LOAD_EGL(eglQueryAPI);
    return egl_eglQueryAPI();
}
#endif
#ifndef skip_eglQueryContext
EGLBoolean eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint * value) {
#ifndef direct_eglQueryContext
    PUSH_IF_COMPILING(eglQueryContext);
#endif
    FORWARD_IF_REMOTE(eglQueryContext);
    LOAD_EGL(eglQueryContext);
    return egl_eglQueryContext(dpy, ctx, attribute, value);
}
#endif
#ifndef skip_eglQueryNativeDisplayNV
EGLBoolean eglQueryNativeDisplayNV(EGLDisplay dpy, EGLNativeDisplayType * display_id) {
#ifndef direct_eglQueryNativeDisplayNV
    PUSH_IF_COMPILING(eglQueryNativeDisplayNV);
#endif
    FORWARD_IF_REMOTE(eglQueryNativeDisplayNV);
    LOAD_EGL(eglQueryNativeDisplayNV);
    return egl_eglQueryNativeDisplayNV(dpy, display_id);
}
#endif
#ifndef skip_eglQueryNativePixmapNV
EGLBoolean eglQueryNativePixmapNV(EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap) {
#ifndef direct_eglQueryNativePixmapNV
    PUSH_IF_COMPILING(eglQueryNativePixmapNV);
#endif
    FORWARD_IF_REMOTE(eglQueryNativePixmapNV);
    LOAD_EGL(eglQueryNativePixmapNV);
    return egl_eglQueryNativePixmapNV(dpy, surf, pixmap);
}
#endif
#ifndef skip_eglQueryNativeWindowNV
EGLBoolean eglQueryNativeWindowNV(EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window) {
#ifndef direct_eglQueryNativeWindowNV
    PUSH_IF_COMPILING(eglQueryNativeWindowNV);
#endif
    FORWARD_IF_REMOTE(eglQueryNativeWindowNV);
    LOAD_EGL(eglQueryNativeWindowNV);
    return egl_eglQueryNativeWindowNV(dpy, surf, window);
}
#endif
#ifndef skip_eglQueryStreamKHR
EGLBoolean eglQueryStreamKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value) {
#ifndef direct_eglQueryStreamKHR
    PUSH_IF_COMPILING(eglQueryStreamKHR);
#endif
    FORWARD_IF_REMOTE(eglQueryStreamKHR);
    LOAD_EGL(eglQueryStreamKHR);
    return egl_eglQueryStreamKHR(dpy, stream, attribute, value);
}
#endif
#ifndef skip_eglQueryStreamTimeKHR
EGLBoolean eglQueryStreamTimeKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value) {
#ifndef direct_eglQueryStreamTimeKHR
    PUSH_IF_COMPILING(eglQueryStreamTimeKHR);
#endif
    FORWARD_IF_REMOTE(eglQueryStreamTimeKHR);
    LOAD_EGL(eglQueryStreamTimeKHR);
    return egl_eglQueryStreamTimeKHR(dpy, stream, attribute, value);
}
#endif
#ifndef skip_eglQueryStreamu64KHR
EGLBoolean eglQueryStreamu64KHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value) {
#ifndef direct_eglQueryStreamu64KHR
    PUSH_IF_COMPILING(eglQueryStreamu64KHR);
#endif
    FORWARD_IF_REMOTE(eglQueryStreamu64KHR);
    LOAD_EGL(eglQueryStreamu64KHR);
    return egl_eglQueryStreamu64KHR(dpy, stream, attribute, value);
}
#endif
#ifndef skip_eglQueryString
const char * eglQueryString(EGLDisplay dpy, EGLint name) {
#ifndef direct_eglQueryString
    PUSH_IF_COMPILING(eglQueryString);
#endif
    FORWARD_IF_REMOTE(eglQueryString);
    LOAD_EGL(eglQueryString);
    return egl_eglQueryString(dpy, name);
}
#endif
#ifndef skip_eglQuerySurface
EGLBoolean eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint * value) {
#ifndef direct_eglQuerySurface
    PUSH_IF_COMPILING(eglQuerySurface);
#endif
    FORWARD_IF_REMOTE(eglQuerySurface);
    LOAD_EGL(eglQuerySurface);
    return egl_eglQuerySurface(dpy, surface, attribute, value);
}
#endif
#ifndef skip_eglQuerySurfacePointerANGLE
EGLBoolean eglQuerySurfacePointerANGLE(EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value) {
#ifndef direct_eglQuerySurfacePointerANGLE
    PUSH_IF_COMPILING(eglQuerySurfacePointerANGLE);
#endif
    FORWARD_IF_REMOTE(eglQuerySurfacePointerANGLE);
    LOAD_EGL(eglQuerySurfacePointerANGLE);
    return egl_eglQuerySurfacePointerANGLE(dpy, surface, attribute, value);
}
#endif
#ifndef skip_eglReleaseTexImage
EGLBoolean eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer) {
#ifndef direct_eglReleaseTexImage
    PUSH_IF_COMPILING(eglReleaseTexImage);
#endif
    FORWARD_IF_REMOTE(eglReleaseTexImage);
    LOAD_EGL(eglReleaseTexImage);
    return egl_eglReleaseTexImage(dpy, surface, buffer);
}
#endif
#ifndef skip_eglReleaseThread
EGLBoolean eglReleaseThread() {
#ifndef direct_eglReleaseThread
    PUSH_IF_COMPILING(eglReleaseThread);
#endif
    FORWARD_IF_REMOTE(eglReleaseThread);
    LOAD_EGL(eglReleaseThread);
    return egl_eglReleaseThread();
}
#endif
#ifndef skip_eglSignalSyncKHR
EGLBoolean eglSignalSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode) {
#ifndef direct_eglSignalSyncKHR
    PUSH_IF_COMPILING(eglSignalSyncKHR);
#endif
    FORWARD_IF_REMOTE(eglSignalSyncKHR);
    LOAD_EGL(eglSignalSyncKHR);
    return egl_eglSignalSyncKHR(dpy, sync, mode);
}
#endif
#ifndef skip_eglSignalSyncNV
EGLBoolean eglSignalSyncNV(EGLSyncNV sync, EGLenum mode) {
#ifndef direct_eglSignalSyncNV
    PUSH_IF_COMPILING(eglSignalSyncNV);
#endif
    FORWARD_IF_REMOTE(eglSignalSyncNV);
    LOAD_EGL(eglSignalSyncNV);
    return egl_eglSignalSyncNV(sync, mode);
}
#endif
#ifndef skip_eglStreamAttribKHR
EGLBoolean eglStreamAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value) {
#ifndef direct_eglStreamAttribKHR
    PUSH_IF_COMPILING(eglStreamAttribKHR);
#endif
    FORWARD_IF_REMOTE(eglStreamAttribKHR);
    LOAD_EGL(eglStreamAttribKHR);
    return egl_eglStreamAttribKHR(dpy, stream, attribute, value);
}
#endif
#ifndef skip_eglStreamConsumerAcquireKHR
EGLBoolean eglStreamConsumerAcquireKHR(EGLDisplay dpy, EGLStreamKHR stream) {
#ifndef direct_eglStreamConsumerAcquireKHR
    PUSH_IF_COMPILING(eglStreamConsumerAcquireKHR);
#endif
    FORWARD_IF_REMOTE(eglStreamConsumerAcquireKHR);
    LOAD_EGL(eglStreamConsumerAcquireKHR);
    return egl_eglStreamConsumerAcquireKHR(dpy, stream);
}
#endif
#ifndef skip_eglStreamConsumerGLTextureExternalKHR
EGLBoolean eglStreamConsumerGLTextureExternalKHR(EGLDisplay dpy, EGLStreamKHR stream) {
#ifndef direct_eglStreamConsumerGLTextureExternalKHR
    PUSH_IF_COMPILING(eglStreamConsumerGLTextureExternalKHR);
#endif
    FORWARD_IF_REMOTE(eglStreamConsumerGLTextureExternalKHR);
    LOAD_EGL(eglStreamConsumerGLTextureExternalKHR);
    return egl_eglStreamConsumerGLTextureExternalKHR(dpy, stream);
}
#endif
#ifndef skip_eglStreamConsumerReleaseKHR
EGLBoolean eglStreamConsumerReleaseKHR(EGLDisplay dpy, EGLStreamKHR stream) {
#ifndef direct_eglStreamConsumerReleaseKHR
    PUSH_IF_COMPILING(eglStreamConsumerReleaseKHR);
#endif
    FORWARD_IF_REMOTE(eglStreamConsumerReleaseKHR);
    LOAD_EGL(eglStreamConsumerReleaseKHR);
    return egl_eglStreamConsumerReleaseKHR(dpy, stream);
}
#endif
#ifndef skip_eglSurfaceAttrib
EGLBoolean eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value) {
#ifndef direct_eglSurfaceAttrib
    PUSH_IF_COMPILING(eglSurfaceAttrib);
#endif
    FORWARD_IF_REMOTE(eglSurfaceAttrib);
    LOAD_EGL(eglSurfaceAttrib);
    return egl_eglSurfaceAttrib(dpy, surface, attribute, value);
}
#endif
#ifndef skip_eglSwapBuffers
EGLBoolean eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
#ifndef direct_eglSwapBuffers
    PUSH_IF_COMPILING(eglSwapBuffers);
#endif
    FORWARD_IF_REMOTE(eglSwapBuffers);
    LOAD_EGL(eglSwapBuffers);
    return egl_eglSwapBuffers(dpy, surface);
}
#endif
#ifndef skip_eglSwapBuffersWithDamageEXT
EGLBoolean eglSwapBuffersWithDamageEXT(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects) {
#ifndef direct_eglSwapBuffersWithDamageEXT
    PUSH_IF_COMPILING(eglSwapBuffersWithDamageEXT);
#endif
    FORWARD_IF_REMOTE(eglSwapBuffersWithDamageEXT);
    LOAD_EGL(eglSwapBuffersWithDamageEXT);
    return egl_eglSwapBuffersWithDamageEXT(dpy, surface, rects, n_rects);
}
#endif
#ifndef skip_eglSwapInterval
EGLBoolean eglSwapInterval(EGLDisplay dpy, EGLint interval) {
#ifndef direct_eglSwapInterval
    PUSH_IF_COMPILING(eglSwapInterval);
#endif
    FORWARD_IF_REMOTE(eglSwapInterval);
    LOAD_EGL(eglSwapInterval);
    return egl_eglSwapInterval(dpy, interval);
}
#endif
#ifndef skip_eglTerminate
EGLBoolean eglTerminate(EGLDisplay dpy) {
#ifndef direct_eglTerminate
    PUSH_IF_COMPILING(eglTerminate);
#endif
    FORWARD_IF_REMOTE(eglTerminate);
    LOAD_EGL(eglTerminate);
    return egl_eglTerminate(dpy);
}
#endif
#ifndef skip_eglUnlockSurfaceKHR
EGLBoolean eglUnlockSurfaceKHR(EGLDisplay display, EGLSurface surface) {
#ifndef direct_eglUnlockSurfaceKHR
    PUSH_IF_COMPILING(eglUnlockSurfaceKHR);
#endif
    FORWARD_IF_REMOTE(eglUnlockSurfaceKHR);
    LOAD_EGL(eglUnlockSurfaceKHR);
    return egl_eglUnlockSurfaceKHR(display, surface);
}
#endif
#ifndef skip_eglWaitClient
EGLBoolean eglWaitClient() {
#ifndef direct_eglWaitClient
    PUSH_IF_COMPILING(eglWaitClient);
#endif
    FORWARD_IF_REMOTE(eglWaitClient);
    LOAD_EGL(eglWaitClient);
    return egl_eglWaitClient();
}
#endif
#ifndef skip_eglWaitGL
EGLBoolean eglWaitGL() {
#ifndef direct_eglWaitGL
    PUSH_IF_COMPILING(eglWaitGL);
#endif
    FORWARD_IF_REMOTE(eglWaitGL);
    LOAD_EGL(eglWaitGL);
    return egl_eglWaitGL();
}
#endif
#ifndef skip_eglWaitNative
EGLBoolean eglWaitNative(EGLint engine) {
#ifndef direct_eglWaitNative
    PUSH_IF_COMPILING(eglWaitNative);
#endif
    FORWARD_IF_REMOTE(eglWaitNative);
    LOAD_EGL(eglWaitNative);
    return egl_eglWaitNative(engine);
}
#endif
#ifndef skip_eglWaitSyncKHR
EGLint eglWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags) {
#ifndef direct_eglWaitSyncKHR
    PUSH_IF_COMPILING(eglWaitSyncKHR);
#endif
    FORWARD_IF_REMOTE(eglWaitSyncKHR);
    LOAD_EGL(eglWaitSyncKHR);
    return egl_eglWaitSyncKHR(dpy, sync, flags);
}
#endif

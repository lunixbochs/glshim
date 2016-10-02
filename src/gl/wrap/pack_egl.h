#include "../types.h"
#ifndef PACK_EGL_H
#define PACK_EGL_H

#ifndef eglBindAPI_RETURN
typedef struct {
    EGLenum api;
} eglBindAPI_ARGS;
typedef struct {
    int index;
    eglBindAPI_ARGS args;
} eglBindAPI_PACKED;
#endif
#ifndef eglBindTexImage_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surface;
    EGLint buffer;
} eglBindTexImage_ARGS;
typedef struct {
    int index;
    eglBindTexImage_ARGS args;
} eglBindTexImage_PACKED;
#endif
#ifndef eglChooseConfig_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLint * attrib_list;
    EGLConfig * configs;
    EGLint config_size;
    EGLint * num_config;
} eglChooseConfig_ARGS;
typedef struct {
    int index;
    eglChooseConfig_ARGS args;
} eglChooseConfig_PACKED;
#endif
#ifndef eglClientWaitSyncKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSyncKHR sync;
    EGLint flags;
    EGLTimeKHR timeout;
} eglClientWaitSyncKHR_ARGS;
typedef struct {
    int index;
    eglClientWaitSyncKHR_ARGS args;
} eglClientWaitSyncKHR_PACKED;
#endif
#ifndef eglClientWaitSyncNV_RETURN
typedef struct {
    EGLSyncNV sync;
    EGLint flags;
    EGLTimeNV timeout;
} eglClientWaitSyncNV_ARGS;
typedef struct {
    int index;
    eglClientWaitSyncNV_ARGS args;
} eglClientWaitSyncNV_PACKED;
#endif
#ifndef eglCopyBuffers_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surface;
    EGLNativePixmapType target;
} eglCopyBuffers_ARGS;
typedef struct {
    int index;
    eglCopyBuffers_ARGS args;
} eglCopyBuffers_PACKED;
#endif
#ifndef eglCreateContext_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLConfig config;
    EGLContext share_context;
    EGLint * attrib_list;
} eglCreateContext_ARGS;
typedef struct {
    int index;
    eglCreateContext_ARGS args;
} eglCreateContext_PACKED;
#endif
#ifndef eglCreateDRMImageMESA_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLint * attrib_list;
} eglCreateDRMImageMESA_ARGS;
typedef struct {
    int index;
    eglCreateDRMImageMESA_ARGS args;
} eglCreateDRMImageMESA_PACKED;
#endif
#ifndef eglCreateFenceSyncNV_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLenum condition;
    EGLint * attrib_list;
} eglCreateFenceSyncNV_ARGS;
typedef struct {
    int index;
    eglCreateFenceSyncNV_ARGS args;
} eglCreateFenceSyncNV_PACKED;
#endif
#ifndef eglCreateImageKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLContext ctx;
    EGLenum target;
    EGLClientBuffer buffer;
    EGLint * attrib_list;
} eglCreateImageKHR_ARGS;
typedef struct {
    int index;
    eglCreateImageKHR_ARGS args;
} eglCreateImageKHR_PACKED;
#endif
#ifndef eglCreatePbufferFromClientBuffer_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLenum buftype;
    EGLClientBuffer buffer;
    EGLConfig config;
    EGLint * attrib_list;
} eglCreatePbufferFromClientBuffer_ARGS;
typedef struct {
    int index;
    eglCreatePbufferFromClientBuffer_ARGS args;
} eglCreatePbufferFromClientBuffer_PACKED;
#endif
#ifndef eglCreatePbufferSurface_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLConfig config;
    EGLint * attrib_list;
} eglCreatePbufferSurface_ARGS;
typedef struct {
    int index;
    eglCreatePbufferSurface_ARGS args;
} eglCreatePbufferSurface_PACKED;
#endif
#ifndef eglCreatePixmapSurface_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLConfig config;
    EGLNativePixmapType pixmap;
    EGLint * attrib_list;
} eglCreatePixmapSurface_ARGS;
typedef struct {
    int index;
    eglCreatePixmapSurface_ARGS args;
} eglCreatePixmapSurface_PACKED;
#endif
#ifndef eglCreatePixmapSurfaceHI_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLConfig config;
    struct EGLClientPixmapHI * pixmap;
} eglCreatePixmapSurfaceHI_ARGS;
typedef struct {
    int index;
    eglCreatePixmapSurfaceHI_ARGS args;
} eglCreatePixmapSurfaceHI_PACKED;
#endif
#ifndef eglCreateStreamFromFileDescriptorKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLNativeFileDescriptorKHR file_descriptor;
} eglCreateStreamFromFileDescriptorKHR_ARGS;
typedef struct {
    int index;
    eglCreateStreamFromFileDescriptorKHR_ARGS args;
} eglCreateStreamFromFileDescriptorKHR_PACKED;
#endif
#ifndef eglCreateStreamKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLint * attrib_list;
} eglCreateStreamKHR_ARGS;
typedef struct {
    int index;
    eglCreateStreamKHR_ARGS args;
} eglCreateStreamKHR_PACKED;
#endif
#ifndef eglCreateStreamProducerSurfaceKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLConfig config;
    EGLStreamKHR stream;
    EGLint * attrib_list;
} eglCreateStreamProducerSurfaceKHR_ARGS;
typedef struct {
    int index;
    eglCreateStreamProducerSurfaceKHR_ARGS args;
} eglCreateStreamProducerSurfaceKHR_PACKED;
#endif
#ifndef eglCreateSyncKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLenum type;
    EGLint * attrib_list;
} eglCreateSyncKHR_ARGS;
typedef struct {
    int index;
    eglCreateSyncKHR_ARGS args;
} eglCreateSyncKHR_PACKED;
#endif
#ifndef eglCreateWindowSurface_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLConfig config;
    EGLNativeWindowType win;
    EGLint * attrib_list;
} eglCreateWindowSurface_ARGS;
typedef struct {
    int index;
    eglCreateWindowSurface_ARGS args;
} eglCreateWindowSurface_PACKED;
#endif
#ifndef eglDestroyContext_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLContext ctx;
} eglDestroyContext_ARGS;
typedef struct {
    int index;
    eglDestroyContext_ARGS args;
} eglDestroyContext_PACKED;
#endif
#ifndef eglDestroyImageKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLImageKHR image;
} eglDestroyImageKHR_ARGS;
typedef struct {
    int index;
    eglDestroyImageKHR_ARGS args;
} eglDestroyImageKHR_PACKED;
#endif
#ifndef eglDestroyStreamKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLStreamKHR stream;
} eglDestroyStreamKHR_ARGS;
typedef struct {
    int index;
    eglDestroyStreamKHR_ARGS args;
} eglDestroyStreamKHR_PACKED;
#endif
#ifndef eglDestroySurface_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surface;
} eglDestroySurface_ARGS;
typedef struct {
    int index;
    eglDestroySurface_ARGS args;
} eglDestroySurface_PACKED;
#endif
#ifndef eglDestroySyncKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSyncKHR sync;
} eglDestroySyncKHR_ARGS;
typedef struct {
    int index;
    eglDestroySyncKHR_ARGS args;
} eglDestroySyncKHR_PACKED;
#endif
#ifndef eglDestroySyncNV_RETURN
typedef struct {
    EGLSyncNV sync;
} eglDestroySyncNV_ARGS;
typedef struct {
    int index;
    eglDestroySyncNV_ARGS args;
} eglDestroySyncNV_PACKED;
#endif
#ifndef eglDupNativeFenceFDANDROID_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSyncKHR sync;
} eglDupNativeFenceFDANDROID_ARGS;
typedef struct {
    int index;
    eglDupNativeFenceFDANDROID_ARGS args;
} eglDupNativeFenceFDANDROID_PACKED;
#endif
#ifndef eglExportDRMImageMESA_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLImageKHR image;
    EGLint * name;
    EGLint * handle;
    EGLint * stride;
} eglExportDRMImageMESA_ARGS;
typedef struct {
    int index;
    eglExportDRMImageMESA_ARGS args;
} eglExportDRMImageMESA_PACKED;
#endif
#ifndef eglFenceNV_RETURN
typedef struct {
    EGLSyncNV sync;
} eglFenceNV_ARGS;
typedef struct {
    int index;
    eglFenceNV_ARGS args;
} eglFenceNV_PACKED;
#endif
#ifndef eglGetConfigAttrib_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLConfig config;
    EGLint attribute;
    EGLint * value;
} eglGetConfigAttrib_ARGS;
typedef struct {
    int index;
    eglGetConfigAttrib_ARGS args;
} eglGetConfigAttrib_PACKED;
#endif
#ifndef eglGetConfigs_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLConfig * configs;
    EGLint config_size;
    EGLint * num_config;
} eglGetConfigs_ARGS;
typedef struct {
    int index;
    eglGetConfigs_ARGS args;
} eglGetConfigs_PACKED;
#endif
#ifndef eglGetCurrentContext_RETURN
typedef struct {
    int index;
} eglGetCurrentContext_PACKED;
#endif
#ifndef eglGetCurrentDisplay_RETURN
typedef struct {
    int index;
} eglGetCurrentDisplay_PACKED;
#endif
#ifndef eglGetCurrentSurface_RETURN
typedef struct {
    EGLint readdraw;
} eglGetCurrentSurface_ARGS;
typedef struct {
    int index;
    eglGetCurrentSurface_ARGS args;
} eglGetCurrentSurface_PACKED;
#endif
#ifndef eglGetDisplay_RETURN
typedef struct {
    EGLNativeDisplayType display_id;
} eglGetDisplay_ARGS;
typedef struct {
    int index;
    eglGetDisplay_ARGS args;
} eglGetDisplay_PACKED;
#endif
#ifndef eglGetError_RETURN
typedef struct {
    int index;
} eglGetError_PACKED;
#endif
#ifndef eglGetProcAddress_RETURN
typedef struct {
    char * procname;
} eglGetProcAddress_ARGS;
typedef struct {
    int index;
    eglGetProcAddress_ARGS args;
} eglGetProcAddress_PACKED;
#endif
#ifndef eglGetStreamFileDescriptorKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLStreamKHR stream;
} eglGetStreamFileDescriptorKHR_ARGS;
typedef struct {
    int index;
    eglGetStreamFileDescriptorKHR_ARGS args;
} eglGetStreamFileDescriptorKHR_PACKED;
#endif
#ifndef eglGetSyncAttribKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSyncKHR sync;
    EGLint attribute;
    EGLint * value;
} eglGetSyncAttribKHR_ARGS;
typedef struct {
    int index;
    eglGetSyncAttribKHR_ARGS args;
} eglGetSyncAttribKHR_PACKED;
#endif
#ifndef eglGetSyncAttribNV_RETURN
typedef struct {
    EGLSyncNV sync;
    EGLint attribute;
    EGLint * value;
} eglGetSyncAttribNV_ARGS;
typedef struct {
    int index;
    eglGetSyncAttribNV_ARGS args;
} eglGetSyncAttribNV_PACKED;
#endif
#ifndef eglGetSystemTimeFrequencyNV_RETURN
typedef struct {
    int index;
} eglGetSystemTimeFrequencyNV_PACKED;
#endif
#ifndef eglGetSystemTimeNV_RETURN
typedef struct {
    int index;
} eglGetSystemTimeNV_PACKED;
#endif
#ifndef eglInitialize_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLint * major;
    EGLint * minor;
} eglInitialize_ARGS;
typedef struct {
    int index;
    eglInitialize_ARGS args;
} eglInitialize_PACKED;
#endif
#ifndef eglLockSurfaceKHR_RETURN
typedef struct {
    EGLDisplay display;
    EGLSurface surface;
    EGLint * attrib_list;
} eglLockSurfaceKHR_ARGS;
typedef struct {
    int index;
    eglLockSurfaceKHR_ARGS args;
} eglLockSurfaceKHR_PACKED;
#endif
#ifndef eglMakeCurrent_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface draw;
    EGLSurface read;
    EGLContext ctx;
} eglMakeCurrent_ARGS;
typedef struct {
    int index;
    eglMakeCurrent_ARGS args;
} eglMakeCurrent_PACKED;
#endif
#ifndef eglPostSubBufferNV_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surface;
    EGLint x;
    EGLint y;
    EGLint width;
    EGLint height;
} eglPostSubBufferNV_ARGS;
typedef struct {
    int index;
    eglPostSubBufferNV_ARGS args;
} eglPostSubBufferNV_PACKED;
#endif
#ifndef eglQueryAPI_RETURN
typedef struct {
    int index;
} eglQueryAPI_PACKED;
#endif
#ifndef eglQueryContext_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLContext ctx;
    EGLint attribute;
    EGLint * value;
} eglQueryContext_ARGS;
typedef struct {
    int index;
    eglQueryContext_ARGS args;
} eglQueryContext_PACKED;
#endif
#ifndef eglQueryNativeDisplayNV_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLNativeDisplayType * display_id;
} eglQueryNativeDisplayNV_ARGS;
typedef struct {
    int index;
    eglQueryNativeDisplayNV_ARGS args;
} eglQueryNativeDisplayNV_PACKED;
#endif
#ifndef eglQueryNativePixmapNV_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surf;
    EGLNativePixmapType * pixmap;
} eglQueryNativePixmapNV_ARGS;
typedef struct {
    int index;
    eglQueryNativePixmapNV_ARGS args;
} eglQueryNativePixmapNV_PACKED;
#endif
#ifndef eglQueryNativeWindowNV_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surf;
    EGLNativeWindowType * window;
} eglQueryNativeWindowNV_ARGS;
typedef struct {
    int index;
    eglQueryNativeWindowNV_ARGS args;
} eglQueryNativeWindowNV_PACKED;
#endif
#ifndef eglQueryStreamKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLStreamKHR stream;
    EGLenum attribute;
    EGLint * value;
} eglQueryStreamKHR_ARGS;
typedef struct {
    int index;
    eglQueryStreamKHR_ARGS args;
} eglQueryStreamKHR_PACKED;
#endif
#ifndef eglQueryStreamTimeKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLStreamKHR stream;
    EGLenum attribute;
    EGLTimeKHR * value;
} eglQueryStreamTimeKHR_ARGS;
typedef struct {
    int index;
    eglQueryStreamTimeKHR_ARGS args;
} eglQueryStreamTimeKHR_PACKED;
#endif
#ifndef eglQueryStreamu64KHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLStreamKHR stream;
    EGLenum attribute;
    EGLuint64KHR * value;
} eglQueryStreamu64KHR_ARGS;
typedef struct {
    int index;
    eglQueryStreamu64KHR_ARGS args;
} eglQueryStreamu64KHR_PACKED;
#endif
#ifndef eglQueryString_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLint name;
} eglQueryString_ARGS;
typedef struct {
    int index;
    eglQueryString_ARGS args;
} eglQueryString_PACKED;
#endif
#ifndef eglQuerySurface_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surface;
    EGLint attribute;
    EGLint * value;
} eglQuerySurface_ARGS;
typedef struct {
    int index;
    eglQuerySurface_ARGS args;
} eglQuerySurface_PACKED;
#endif
#ifndef eglQuerySurfacePointerANGLE_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surface;
    EGLint attribute;
    void ** value;
} eglQuerySurfacePointerANGLE_ARGS;
typedef struct {
    int index;
    eglQuerySurfacePointerANGLE_ARGS args;
} eglQuerySurfacePointerANGLE_PACKED;
#endif
#ifndef eglReleaseTexImage_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surface;
    EGLint buffer;
} eglReleaseTexImage_ARGS;
typedef struct {
    int index;
    eglReleaseTexImage_ARGS args;
} eglReleaseTexImage_PACKED;
#endif
#ifndef eglReleaseThread_RETURN
typedef struct {
    int index;
} eglReleaseThread_PACKED;
#endif
#ifndef eglSignalSyncKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSyncKHR sync;
    EGLenum mode;
} eglSignalSyncKHR_ARGS;
typedef struct {
    int index;
    eglSignalSyncKHR_ARGS args;
} eglSignalSyncKHR_PACKED;
#endif
#ifndef eglSignalSyncNV_RETURN
typedef struct {
    EGLSyncNV sync;
    EGLenum mode;
} eglSignalSyncNV_ARGS;
typedef struct {
    int index;
    eglSignalSyncNV_ARGS args;
} eglSignalSyncNV_PACKED;
#endif
#ifndef eglStreamAttribKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLStreamKHR stream;
    EGLenum attribute;
    EGLint value;
} eglStreamAttribKHR_ARGS;
typedef struct {
    int index;
    eglStreamAttribKHR_ARGS args;
} eglStreamAttribKHR_PACKED;
#endif
#ifndef eglStreamConsumerAcquireKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLStreamKHR stream;
} eglStreamConsumerAcquireKHR_ARGS;
typedef struct {
    int index;
    eglStreamConsumerAcquireKHR_ARGS args;
} eglStreamConsumerAcquireKHR_PACKED;
#endif
#ifndef eglStreamConsumerGLTextureExternalKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLStreamKHR stream;
} eglStreamConsumerGLTextureExternalKHR_ARGS;
typedef struct {
    int index;
    eglStreamConsumerGLTextureExternalKHR_ARGS args;
} eglStreamConsumerGLTextureExternalKHR_PACKED;
#endif
#ifndef eglStreamConsumerReleaseKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLStreamKHR stream;
} eglStreamConsumerReleaseKHR_ARGS;
typedef struct {
    int index;
    eglStreamConsumerReleaseKHR_ARGS args;
} eglStreamConsumerReleaseKHR_PACKED;
#endif
#ifndef eglSurfaceAttrib_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surface;
    EGLint attribute;
    EGLint value;
} eglSurfaceAttrib_ARGS;
typedef struct {
    int index;
    eglSurfaceAttrib_ARGS args;
} eglSurfaceAttrib_PACKED;
#endif
#ifndef eglSwapBuffers_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surface;
} eglSwapBuffers_ARGS;
typedef struct {
    int index;
    eglSwapBuffers_ARGS args;
} eglSwapBuffers_PACKED;
#endif
#ifndef eglSwapBuffersWithDamageEXT_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSurface surface;
    EGLint * rects;
    EGLint n_rects;
} eglSwapBuffersWithDamageEXT_ARGS;
typedef struct {
    int index;
    eglSwapBuffersWithDamageEXT_ARGS args;
} eglSwapBuffersWithDamageEXT_PACKED;
#endif
#ifndef eglSwapInterval_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLint interval;
} eglSwapInterval_ARGS;
typedef struct {
    int index;
    eglSwapInterval_ARGS args;
} eglSwapInterval_PACKED;
#endif
#ifndef eglTerminate_RETURN
typedef struct {
    EGLDisplay dpy;
} eglTerminate_ARGS;
typedef struct {
    int index;
    eglTerminate_ARGS args;
} eglTerminate_PACKED;
#endif
#ifndef eglUnlockSurfaceKHR_RETURN
typedef struct {
    EGLDisplay display;
    EGLSurface surface;
} eglUnlockSurfaceKHR_ARGS;
typedef struct {
    int index;
    eglUnlockSurfaceKHR_ARGS args;
} eglUnlockSurfaceKHR_PACKED;
#endif
#ifndef eglWaitClient_RETURN
typedef struct {
    int index;
} eglWaitClient_PACKED;
#endif
#ifndef eglWaitGL_RETURN
typedef struct {
    int index;
} eglWaitGL_PACKED;
#endif
#ifndef eglWaitNative_RETURN
typedef struct {
    EGLint engine;
} eglWaitNative_ARGS;
typedef struct {
    int index;
    eglWaitNative_ARGS args;
} eglWaitNative_PACKED;
#endif
#ifndef eglWaitSyncKHR_RETURN
typedef struct {
    EGLDisplay dpy;
    EGLSyncKHR sync;
    EGLint flags;
} eglWaitSyncKHR_ARGS;
typedef struct {
    int index;
    eglWaitSyncKHR_ARGS args;
} eglWaitSyncKHR_PACKED;
#endif

#ifndef eglBindAPI_RETURN
#define eglBindAPI_RETURN EGLBoolean
#define eglBindAPI_ARG_NAMES api
#define eglBindAPI_ARG_EXPAND EGLenum api
#define eglBindAPI_ARG_NAMES_TAIL , api
#define eglBindAPI_ARG_EXPAND_TAIL , EGLenum api
#define forward_eglBindAPI(_api) \
    ({ \
        void *dst = remote_dma(sizeof(eglBindAPI_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglBindAPI(dst, _api), &ret); \
        ret; \
    });
#define call_eglBindAPI(packed, ret_v) do { \
    eglBindAPI_PACKED *unpacked = (eglBindAPI_PACKED *)packed; \
    eglBindAPI_ARGS *args = (eglBindAPI_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglBindAPI(args->api);; \
    } else { \
        eglBindAPI(args->api);; \
    } \
} while(0)
EGLBoolean eglBindAPI(eglBindAPI_ARG_EXPAND);
packed_call_t *pack_eglBindAPI(eglBindAPI_PACKED *_dst eglBindAPI_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglBindAPI_PTR)(eglBindAPI_ARG_EXPAND);
#endif
#ifndef eglBindTexImage_RETURN
#define eglBindTexImage_RETURN EGLBoolean
#define eglBindTexImage_ARG_NAMES dpy, surface, buffer
#define eglBindTexImage_ARG_EXPAND EGLDisplay dpy, EGLSurface surface, EGLint buffer
#define eglBindTexImage_ARG_NAMES_TAIL , dpy, surface, buffer
#define eglBindTexImage_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surface, EGLint buffer
#define forward_eglBindTexImage(_dpy, _surface, _buffer) \
    ({ \
        void *dst = remote_dma(sizeof(eglBindTexImage_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglBindTexImage(dst, _dpy, _surface, _buffer), &ret); \
        ret; \
    });
#define call_eglBindTexImage(packed, ret_v) do { \
    eglBindTexImage_PACKED *unpacked = (eglBindTexImage_PACKED *)packed; \
    eglBindTexImage_ARGS *args = (eglBindTexImage_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglBindTexImage(args->dpy, args->surface, args->buffer);; \
    } else { \
        eglBindTexImage(args->dpy, args->surface, args->buffer);; \
    } \
} while(0)
EGLBoolean eglBindTexImage(eglBindTexImage_ARG_EXPAND);
packed_call_t *pack_eglBindTexImage(eglBindTexImage_PACKED *_dst eglBindTexImage_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglBindTexImage_PTR)(eglBindTexImage_ARG_EXPAND);
#endif
#ifndef eglChooseConfig_RETURN
#define eglChooseConfig_RETURN EGLBoolean
#define eglChooseConfig_ARG_NAMES dpy, attrib_list, configs, config_size, num_config
#define eglChooseConfig_ARG_EXPAND EGLDisplay dpy, const EGLint * attrib_list, EGLConfig * configs, EGLint config_size, EGLint * num_config
#define eglChooseConfig_ARG_NAMES_TAIL , dpy, attrib_list, configs, config_size, num_config
#define eglChooseConfig_ARG_EXPAND_TAIL , EGLDisplay dpy, const EGLint * attrib_list, EGLConfig * configs, EGLint config_size, EGLint * num_config
#define forward_eglChooseConfig(_dpy, _attrib_list, _configs, _config_size, _num_config) \
    ({ \
        void *dst = remote_dma(sizeof(eglChooseConfig_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglChooseConfig(dst, _dpy, _attrib_list, _configs, _config_size, _num_config), &ret); \
        ret; \
    });
#define call_eglChooseConfig(packed, ret_v) do { \
    eglChooseConfig_PACKED *unpacked = (eglChooseConfig_PACKED *)packed; \
    eglChooseConfig_ARGS *args = (eglChooseConfig_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglChooseConfig(args->dpy, args->attrib_list, args->configs, args->config_size, args->num_config);; \
    } else { \
        eglChooseConfig(args->dpy, args->attrib_list, args->configs, args->config_size, args->num_config);; \
    } \
} while(0)
EGLBoolean eglChooseConfig(eglChooseConfig_ARG_EXPAND);
packed_call_t *pack_eglChooseConfig(eglChooseConfig_PACKED *_dst eglChooseConfig_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglChooseConfig_PTR)(eglChooseConfig_ARG_EXPAND);
#endif
#ifndef eglClientWaitSyncKHR_RETURN
#define eglClientWaitSyncKHR_RETURN EGLint
#define eglClientWaitSyncKHR_ARG_NAMES dpy, sync, flags, timeout
#define eglClientWaitSyncKHR_ARG_EXPAND EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout
#define eglClientWaitSyncKHR_ARG_NAMES_TAIL , dpy, sync, flags, timeout
#define eglClientWaitSyncKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout
#define forward_eglClientWaitSyncKHR(_dpy, _sync, _flags, _timeout) \
    ({ \
        void *dst = remote_dma(sizeof(eglClientWaitSyncKHR_PACKED)); \
        EGLint ret = (EGLint)0; \
        remote_dma_send((packed_call_t *)pack_eglClientWaitSyncKHR(dst, _dpy, _sync, _flags, _timeout), &ret); \
        ret; \
    });
#define call_eglClientWaitSyncKHR(packed, ret_v) do { \
    eglClientWaitSyncKHR_PACKED *unpacked = (eglClientWaitSyncKHR_PACKED *)packed; \
    eglClientWaitSyncKHR_ARGS *args = (eglClientWaitSyncKHR_ARGS *)&unpacked->args; \
    EGLint *ret = (EGLint *)ret_v; \
    if (ret != NULL) { \
        *ret = eglClientWaitSyncKHR(args->dpy, args->sync, args->flags, args->timeout);; \
    } else { \
        eglClientWaitSyncKHR(args->dpy, args->sync, args->flags, args->timeout);; \
    } \
} while(0)
EGLint eglClientWaitSyncKHR(eglClientWaitSyncKHR_ARG_EXPAND);
packed_call_t *pack_eglClientWaitSyncKHR(eglClientWaitSyncKHR_PACKED *_dst eglClientWaitSyncKHR_ARG_EXPAND_TAIL);
typedef EGLint (*eglClientWaitSyncKHR_PTR)(eglClientWaitSyncKHR_ARG_EXPAND);
#endif
#ifndef eglClientWaitSyncNV_RETURN
#define eglClientWaitSyncNV_RETURN EGLint
#define eglClientWaitSyncNV_ARG_NAMES sync, flags, timeout
#define eglClientWaitSyncNV_ARG_EXPAND EGLSyncNV sync, EGLint flags, EGLTimeNV timeout
#define eglClientWaitSyncNV_ARG_NAMES_TAIL , sync, flags, timeout
#define eglClientWaitSyncNV_ARG_EXPAND_TAIL , EGLSyncNV sync, EGLint flags, EGLTimeNV timeout
#define forward_eglClientWaitSyncNV(_sync, _flags, _timeout) \
    ({ \
        void *dst = remote_dma(sizeof(eglClientWaitSyncNV_PACKED)); \
        EGLint ret = (EGLint)0; \
        remote_dma_send((packed_call_t *)pack_eglClientWaitSyncNV(dst, _sync, _flags, _timeout), &ret); \
        ret; \
    });
#define call_eglClientWaitSyncNV(packed, ret_v) do { \
    eglClientWaitSyncNV_PACKED *unpacked = (eglClientWaitSyncNV_PACKED *)packed; \
    eglClientWaitSyncNV_ARGS *args = (eglClientWaitSyncNV_ARGS *)&unpacked->args; \
    EGLint *ret = (EGLint *)ret_v; \
    if (ret != NULL) { \
        *ret = eglClientWaitSyncNV(args->sync, args->flags, args->timeout);; \
    } else { \
        eglClientWaitSyncNV(args->sync, args->flags, args->timeout);; \
    } \
} while(0)
EGLint eglClientWaitSyncNV(eglClientWaitSyncNV_ARG_EXPAND);
packed_call_t *pack_eglClientWaitSyncNV(eglClientWaitSyncNV_PACKED *_dst eglClientWaitSyncNV_ARG_EXPAND_TAIL);
typedef EGLint (*eglClientWaitSyncNV_PTR)(eglClientWaitSyncNV_ARG_EXPAND);
#endif
#ifndef eglCopyBuffers_RETURN
#define eglCopyBuffers_RETURN EGLBoolean
#define eglCopyBuffers_ARG_NAMES dpy, surface, target
#define eglCopyBuffers_ARG_EXPAND EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target
#define eglCopyBuffers_ARG_NAMES_TAIL , dpy, surface, target
#define eglCopyBuffers_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target
#define forward_eglCopyBuffers(_dpy, _surface, _target) \
    ({ \
        void *dst = remote_dma(sizeof(eglCopyBuffers_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglCopyBuffers(dst, _dpy, _surface, _target), &ret); \
        ret; \
    });
#define call_eglCopyBuffers(packed, ret_v) do { \
    eglCopyBuffers_PACKED *unpacked = (eglCopyBuffers_PACKED *)packed; \
    eglCopyBuffers_ARGS *args = (eglCopyBuffers_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCopyBuffers(args->dpy, args->surface, args->target);; \
    } else { \
        eglCopyBuffers(args->dpy, args->surface, args->target);; \
    } \
} while(0)
EGLBoolean eglCopyBuffers(eglCopyBuffers_ARG_EXPAND);
packed_call_t *pack_eglCopyBuffers(eglCopyBuffers_PACKED *_dst eglCopyBuffers_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglCopyBuffers_PTR)(eglCopyBuffers_ARG_EXPAND);
#endif
#ifndef eglCreateContext_RETURN
#define eglCreateContext_RETURN EGLContext
#define eglCreateContext_ARG_NAMES dpy, config, share_context, attrib_list
#define eglCreateContext_ARG_EXPAND EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint * attrib_list
#define eglCreateContext_ARG_NAMES_TAIL , dpy, config, share_context, attrib_list
#define eglCreateContext_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint * attrib_list
#define forward_eglCreateContext(_dpy, _config, _share_context, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreateContext_PACKED)); \
        EGLContext ret = (EGLContext)0; \
        remote_dma_send((packed_call_t *)pack_eglCreateContext(dst, _dpy, _config, _share_context, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreateContext(packed, ret_v) do { \
    eglCreateContext_PACKED *unpacked = (eglCreateContext_PACKED *)packed; \
    eglCreateContext_ARGS *args = (eglCreateContext_ARGS *)&unpacked->args; \
    EGLContext *ret = (EGLContext *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreateContext(args->dpy, args->config, args->share_context, args->attrib_list);; \
    } else { \
        eglCreateContext(args->dpy, args->config, args->share_context, args->attrib_list);; \
    } \
} while(0)
EGLContext eglCreateContext(eglCreateContext_ARG_EXPAND);
packed_call_t *pack_eglCreateContext(eglCreateContext_PACKED *_dst eglCreateContext_ARG_EXPAND_TAIL);
typedef EGLContext (*eglCreateContext_PTR)(eglCreateContext_ARG_EXPAND);
#endif
#ifndef eglCreateDRMImageMESA_RETURN
#define eglCreateDRMImageMESA_RETURN EGLImageKHR
#define eglCreateDRMImageMESA_ARG_NAMES dpy, attrib_list
#define eglCreateDRMImageMESA_ARG_EXPAND EGLDisplay dpy, const EGLint * attrib_list
#define eglCreateDRMImageMESA_ARG_NAMES_TAIL , dpy, attrib_list
#define eglCreateDRMImageMESA_ARG_EXPAND_TAIL , EGLDisplay dpy, const EGLint * attrib_list
#define forward_eglCreateDRMImageMESA(_dpy, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreateDRMImageMESA_PACKED)); \
        EGLImageKHR ret = (EGLImageKHR)0; \
        remote_dma_send((packed_call_t *)pack_eglCreateDRMImageMESA(dst, _dpy, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreateDRMImageMESA(packed, ret_v) do { \
    eglCreateDRMImageMESA_PACKED *unpacked = (eglCreateDRMImageMESA_PACKED *)packed; \
    eglCreateDRMImageMESA_ARGS *args = (eglCreateDRMImageMESA_ARGS *)&unpacked->args; \
    EGLImageKHR *ret = (EGLImageKHR *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreateDRMImageMESA(args->dpy, args->attrib_list);; \
    } else { \
        eglCreateDRMImageMESA(args->dpy, args->attrib_list);; \
    } \
} while(0)
EGLImageKHR eglCreateDRMImageMESA(eglCreateDRMImageMESA_ARG_EXPAND);
packed_call_t *pack_eglCreateDRMImageMESA(eglCreateDRMImageMESA_PACKED *_dst eglCreateDRMImageMESA_ARG_EXPAND_TAIL);
typedef EGLImageKHR (*eglCreateDRMImageMESA_PTR)(eglCreateDRMImageMESA_ARG_EXPAND);
#endif
#ifndef eglCreateFenceSyncNV_RETURN
#define eglCreateFenceSyncNV_RETURN EGLSyncNV
#define eglCreateFenceSyncNV_ARG_NAMES dpy, condition, attrib_list
#define eglCreateFenceSyncNV_ARG_EXPAND EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list
#define eglCreateFenceSyncNV_ARG_NAMES_TAIL , dpy, condition, attrib_list
#define eglCreateFenceSyncNV_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list
#define forward_eglCreateFenceSyncNV(_dpy, _condition, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreateFenceSyncNV_PACKED)); \
        EGLSyncNV ret = (EGLSyncNV)0; \
        remote_dma_send((packed_call_t *)pack_eglCreateFenceSyncNV(dst, _dpy, _condition, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreateFenceSyncNV(packed, ret_v) do { \
    eglCreateFenceSyncNV_PACKED *unpacked = (eglCreateFenceSyncNV_PACKED *)packed; \
    eglCreateFenceSyncNV_ARGS *args = (eglCreateFenceSyncNV_ARGS *)&unpacked->args; \
    EGLSyncNV *ret = (EGLSyncNV *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreateFenceSyncNV(args->dpy, args->condition, args->attrib_list);; \
    } else { \
        eglCreateFenceSyncNV(args->dpy, args->condition, args->attrib_list);; \
    } \
} while(0)
EGLSyncNV eglCreateFenceSyncNV(eglCreateFenceSyncNV_ARG_EXPAND);
packed_call_t *pack_eglCreateFenceSyncNV(eglCreateFenceSyncNV_PACKED *_dst eglCreateFenceSyncNV_ARG_EXPAND_TAIL);
typedef EGLSyncNV (*eglCreateFenceSyncNV_PTR)(eglCreateFenceSyncNV_ARG_EXPAND);
#endif
#ifndef eglCreateImageKHR_RETURN
#define eglCreateImageKHR_RETURN EGLImageKHR
#define eglCreateImageKHR_ARG_NAMES dpy, ctx, target, buffer, attrib_list
#define eglCreateImageKHR_ARG_EXPAND EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list
#define eglCreateImageKHR_ARG_NAMES_TAIL , dpy, ctx, target, buffer, attrib_list
#define eglCreateImageKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list
#define forward_eglCreateImageKHR(_dpy, _ctx, _target, _buffer, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreateImageKHR_PACKED)); \
        EGLImageKHR ret = (EGLImageKHR)0; \
        remote_dma_send((packed_call_t *)pack_eglCreateImageKHR(dst, _dpy, _ctx, _target, _buffer, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreateImageKHR(packed, ret_v) do { \
    eglCreateImageKHR_PACKED *unpacked = (eglCreateImageKHR_PACKED *)packed; \
    eglCreateImageKHR_ARGS *args = (eglCreateImageKHR_ARGS *)&unpacked->args; \
    EGLImageKHR *ret = (EGLImageKHR *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreateImageKHR(args->dpy, args->ctx, args->target, args->buffer, args->attrib_list);; \
    } else { \
        eglCreateImageKHR(args->dpy, args->ctx, args->target, args->buffer, args->attrib_list);; \
    } \
} while(0)
EGLImageKHR eglCreateImageKHR(eglCreateImageKHR_ARG_EXPAND);
packed_call_t *pack_eglCreateImageKHR(eglCreateImageKHR_PACKED *_dst eglCreateImageKHR_ARG_EXPAND_TAIL);
typedef EGLImageKHR (*eglCreateImageKHR_PTR)(eglCreateImageKHR_ARG_EXPAND);
#endif
#ifndef eglCreatePbufferFromClientBuffer_RETURN
#define eglCreatePbufferFromClientBuffer_RETURN EGLSurface
#define eglCreatePbufferFromClientBuffer_ARG_NAMES dpy, buftype, buffer, config, attrib_list
#define eglCreatePbufferFromClientBuffer_ARG_EXPAND EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list
#define eglCreatePbufferFromClientBuffer_ARG_NAMES_TAIL , dpy, buftype, buffer, config, attrib_list
#define eglCreatePbufferFromClientBuffer_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list
#define forward_eglCreatePbufferFromClientBuffer(_dpy, _buftype, _buffer, _config, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreatePbufferFromClientBuffer_PACKED)); \
        EGLSurface ret = (EGLSurface)0; \
        remote_dma_send((packed_call_t *)pack_eglCreatePbufferFromClientBuffer(dst, _dpy, _buftype, _buffer, _config, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreatePbufferFromClientBuffer(packed, ret_v) do { \
    eglCreatePbufferFromClientBuffer_PACKED *unpacked = (eglCreatePbufferFromClientBuffer_PACKED *)packed; \
    eglCreatePbufferFromClientBuffer_ARGS *args = (eglCreatePbufferFromClientBuffer_ARGS *)&unpacked->args; \
    EGLSurface *ret = (EGLSurface *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreatePbufferFromClientBuffer(args->dpy, args->buftype, args->buffer, args->config, args->attrib_list);; \
    } else { \
        eglCreatePbufferFromClientBuffer(args->dpy, args->buftype, args->buffer, args->config, args->attrib_list);; \
    } \
} while(0)
EGLSurface eglCreatePbufferFromClientBuffer(eglCreatePbufferFromClientBuffer_ARG_EXPAND);
packed_call_t *pack_eglCreatePbufferFromClientBuffer(eglCreatePbufferFromClientBuffer_PACKED *_dst eglCreatePbufferFromClientBuffer_ARG_EXPAND_TAIL);
typedef EGLSurface (*eglCreatePbufferFromClientBuffer_PTR)(eglCreatePbufferFromClientBuffer_ARG_EXPAND);
#endif
#ifndef eglCreatePbufferSurface_RETURN
#define eglCreatePbufferSurface_RETURN EGLSurface
#define eglCreatePbufferSurface_ARG_NAMES dpy, config, attrib_list
#define eglCreatePbufferSurface_ARG_EXPAND EGLDisplay dpy, EGLConfig config, const EGLint * attrib_list
#define eglCreatePbufferSurface_ARG_NAMES_TAIL , dpy, config, attrib_list
#define eglCreatePbufferSurface_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLConfig config, const EGLint * attrib_list
#define forward_eglCreatePbufferSurface(_dpy, _config, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreatePbufferSurface_PACKED)); \
        EGLSurface ret = (EGLSurface)0; \
        remote_dma_send((packed_call_t *)pack_eglCreatePbufferSurface(dst, _dpy, _config, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreatePbufferSurface(packed, ret_v) do { \
    eglCreatePbufferSurface_PACKED *unpacked = (eglCreatePbufferSurface_PACKED *)packed; \
    eglCreatePbufferSurface_ARGS *args = (eglCreatePbufferSurface_ARGS *)&unpacked->args; \
    EGLSurface *ret = (EGLSurface *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreatePbufferSurface(args->dpy, args->config, args->attrib_list);; \
    } else { \
        eglCreatePbufferSurface(args->dpy, args->config, args->attrib_list);; \
    } \
} while(0)
EGLSurface eglCreatePbufferSurface(eglCreatePbufferSurface_ARG_EXPAND);
packed_call_t *pack_eglCreatePbufferSurface(eglCreatePbufferSurface_PACKED *_dst eglCreatePbufferSurface_ARG_EXPAND_TAIL);
typedef EGLSurface (*eglCreatePbufferSurface_PTR)(eglCreatePbufferSurface_ARG_EXPAND);
#endif
#ifndef eglCreatePixmapSurface_RETURN
#define eglCreatePixmapSurface_RETURN EGLSurface
#define eglCreatePixmapSurface_ARG_NAMES dpy, config, pixmap, attrib_list
#define eglCreatePixmapSurface_ARG_EXPAND EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint * attrib_list
#define eglCreatePixmapSurface_ARG_NAMES_TAIL , dpy, config, pixmap, attrib_list
#define eglCreatePixmapSurface_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint * attrib_list
#define forward_eglCreatePixmapSurface(_dpy, _config, _pixmap, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreatePixmapSurface_PACKED)); \
        EGLSurface ret = (EGLSurface)0; \
        remote_dma_send((packed_call_t *)pack_eglCreatePixmapSurface(dst, _dpy, _config, _pixmap, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreatePixmapSurface(packed, ret_v) do { \
    eglCreatePixmapSurface_PACKED *unpacked = (eglCreatePixmapSurface_PACKED *)packed; \
    eglCreatePixmapSurface_ARGS *args = (eglCreatePixmapSurface_ARGS *)&unpacked->args; \
    EGLSurface *ret = (EGLSurface *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreatePixmapSurface(args->dpy, args->config, args->pixmap, args->attrib_list);; \
    } else { \
        eglCreatePixmapSurface(args->dpy, args->config, args->pixmap, args->attrib_list);; \
    } \
} while(0)
EGLSurface eglCreatePixmapSurface(eglCreatePixmapSurface_ARG_EXPAND);
packed_call_t *pack_eglCreatePixmapSurface(eglCreatePixmapSurface_PACKED *_dst eglCreatePixmapSurface_ARG_EXPAND_TAIL);
typedef EGLSurface (*eglCreatePixmapSurface_PTR)(eglCreatePixmapSurface_ARG_EXPAND);
#endif
#ifndef eglCreatePixmapSurfaceHI_RETURN
#define eglCreatePixmapSurfaceHI_RETURN EGLSurface
#define eglCreatePixmapSurfaceHI_ARG_NAMES dpy, config, pixmap
#define eglCreatePixmapSurfaceHI_ARG_EXPAND EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap
#define eglCreatePixmapSurfaceHI_ARG_NAMES_TAIL , dpy, config, pixmap
#define eglCreatePixmapSurfaceHI_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap
#define forward_eglCreatePixmapSurfaceHI(_dpy, _config, _pixmap) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreatePixmapSurfaceHI_PACKED)); \
        EGLSurface ret = (EGLSurface)0; \
        remote_dma_send((packed_call_t *)pack_eglCreatePixmapSurfaceHI(dst, _dpy, _config, _pixmap), &ret); \
        ret; \
    });
#define call_eglCreatePixmapSurfaceHI(packed, ret_v) do { \
    eglCreatePixmapSurfaceHI_PACKED *unpacked = (eglCreatePixmapSurfaceHI_PACKED *)packed; \
    eglCreatePixmapSurfaceHI_ARGS *args = (eglCreatePixmapSurfaceHI_ARGS *)&unpacked->args; \
    EGLSurface *ret = (EGLSurface *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreatePixmapSurfaceHI(args->dpy, args->config, args->pixmap);; \
    } else { \
        eglCreatePixmapSurfaceHI(args->dpy, args->config, args->pixmap);; \
    } \
} while(0)
EGLSurface eglCreatePixmapSurfaceHI(eglCreatePixmapSurfaceHI_ARG_EXPAND);
packed_call_t *pack_eglCreatePixmapSurfaceHI(eglCreatePixmapSurfaceHI_PACKED *_dst eglCreatePixmapSurfaceHI_ARG_EXPAND_TAIL);
typedef EGLSurface (*eglCreatePixmapSurfaceHI_PTR)(eglCreatePixmapSurfaceHI_ARG_EXPAND);
#endif
#ifndef eglCreateStreamFromFileDescriptorKHR_RETURN
#define eglCreateStreamFromFileDescriptorKHR_RETURN EGLStreamKHR
#define eglCreateStreamFromFileDescriptorKHR_ARG_NAMES dpy, file_descriptor
#define eglCreateStreamFromFileDescriptorKHR_ARG_EXPAND EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor
#define eglCreateStreamFromFileDescriptorKHR_ARG_NAMES_TAIL , dpy, file_descriptor
#define eglCreateStreamFromFileDescriptorKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor
#define forward_eglCreateStreamFromFileDescriptorKHR(_dpy, _file_descriptor) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreateStreamFromFileDescriptorKHR_PACKED)); \
        EGLStreamKHR ret = (EGLStreamKHR)0; \
        remote_dma_send((packed_call_t *)pack_eglCreateStreamFromFileDescriptorKHR(dst, _dpy, _file_descriptor), &ret); \
        ret; \
    });
#define call_eglCreateStreamFromFileDescriptorKHR(packed, ret_v) do { \
    eglCreateStreamFromFileDescriptorKHR_PACKED *unpacked = (eglCreateStreamFromFileDescriptorKHR_PACKED *)packed; \
    eglCreateStreamFromFileDescriptorKHR_ARGS *args = (eglCreateStreamFromFileDescriptorKHR_ARGS *)&unpacked->args; \
    EGLStreamKHR *ret = (EGLStreamKHR *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreateStreamFromFileDescriptorKHR(args->dpy, args->file_descriptor);; \
    } else { \
        eglCreateStreamFromFileDescriptorKHR(args->dpy, args->file_descriptor);; \
    } \
} while(0)
EGLStreamKHR eglCreateStreamFromFileDescriptorKHR(eglCreateStreamFromFileDescriptorKHR_ARG_EXPAND);
packed_call_t *pack_eglCreateStreamFromFileDescriptorKHR(eglCreateStreamFromFileDescriptorKHR_PACKED *_dst eglCreateStreamFromFileDescriptorKHR_ARG_EXPAND_TAIL);
typedef EGLStreamKHR (*eglCreateStreamFromFileDescriptorKHR_PTR)(eglCreateStreamFromFileDescriptorKHR_ARG_EXPAND);
#endif
#ifndef eglCreateStreamKHR_RETURN
#define eglCreateStreamKHR_RETURN EGLStreamKHR
#define eglCreateStreamKHR_ARG_NAMES dpy, attrib_list
#define eglCreateStreamKHR_ARG_EXPAND EGLDisplay dpy, const EGLint * attrib_list
#define eglCreateStreamKHR_ARG_NAMES_TAIL , dpy, attrib_list
#define eglCreateStreamKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, const EGLint * attrib_list
#define forward_eglCreateStreamKHR(_dpy, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreateStreamKHR_PACKED)); \
        EGLStreamKHR ret = (EGLStreamKHR)0; \
        remote_dma_send((packed_call_t *)pack_eglCreateStreamKHR(dst, _dpy, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreateStreamKHR(packed, ret_v) do { \
    eglCreateStreamKHR_PACKED *unpacked = (eglCreateStreamKHR_PACKED *)packed; \
    eglCreateStreamKHR_ARGS *args = (eglCreateStreamKHR_ARGS *)&unpacked->args; \
    EGLStreamKHR *ret = (EGLStreamKHR *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreateStreamKHR(args->dpy, args->attrib_list);; \
    } else { \
        eglCreateStreamKHR(args->dpy, args->attrib_list);; \
    } \
} while(0)
EGLStreamKHR eglCreateStreamKHR(eglCreateStreamKHR_ARG_EXPAND);
packed_call_t *pack_eglCreateStreamKHR(eglCreateStreamKHR_PACKED *_dst eglCreateStreamKHR_ARG_EXPAND_TAIL);
typedef EGLStreamKHR (*eglCreateStreamKHR_PTR)(eglCreateStreamKHR_ARG_EXPAND);
#endif
#ifndef eglCreateStreamProducerSurfaceKHR_RETURN
#define eglCreateStreamProducerSurfaceKHR_RETURN EGLSurface
#define eglCreateStreamProducerSurfaceKHR_ARG_NAMES dpy, config, stream, attrib_list
#define eglCreateStreamProducerSurfaceKHR_ARG_EXPAND EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list
#define eglCreateStreamProducerSurfaceKHR_ARG_NAMES_TAIL , dpy, config, stream, attrib_list
#define eglCreateStreamProducerSurfaceKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list
#define forward_eglCreateStreamProducerSurfaceKHR(_dpy, _config, _stream, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreateStreamProducerSurfaceKHR_PACKED)); \
        EGLSurface ret = (EGLSurface)0; \
        remote_dma_send((packed_call_t *)pack_eglCreateStreamProducerSurfaceKHR(dst, _dpy, _config, _stream, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreateStreamProducerSurfaceKHR(packed, ret_v) do { \
    eglCreateStreamProducerSurfaceKHR_PACKED *unpacked = (eglCreateStreamProducerSurfaceKHR_PACKED *)packed; \
    eglCreateStreamProducerSurfaceKHR_ARGS *args = (eglCreateStreamProducerSurfaceKHR_ARGS *)&unpacked->args; \
    EGLSurface *ret = (EGLSurface *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreateStreamProducerSurfaceKHR(args->dpy, args->config, args->stream, args->attrib_list);; \
    } else { \
        eglCreateStreamProducerSurfaceKHR(args->dpy, args->config, args->stream, args->attrib_list);; \
    } \
} while(0)
EGLSurface eglCreateStreamProducerSurfaceKHR(eglCreateStreamProducerSurfaceKHR_ARG_EXPAND);
packed_call_t *pack_eglCreateStreamProducerSurfaceKHR(eglCreateStreamProducerSurfaceKHR_PACKED *_dst eglCreateStreamProducerSurfaceKHR_ARG_EXPAND_TAIL);
typedef EGLSurface (*eglCreateStreamProducerSurfaceKHR_PTR)(eglCreateStreamProducerSurfaceKHR_ARG_EXPAND);
#endif
#ifndef eglCreateSyncKHR_RETURN
#define eglCreateSyncKHR_RETURN EGLSyncKHR
#define eglCreateSyncKHR_ARG_NAMES dpy, type, attrib_list
#define eglCreateSyncKHR_ARG_EXPAND EGLDisplay dpy, EGLenum type, const EGLint * attrib_list
#define eglCreateSyncKHR_ARG_NAMES_TAIL , dpy, type, attrib_list
#define eglCreateSyncKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLenum type, const EGLint * attrib_list
#define forward_eglCreateSyncKHR(_dpy, _type, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreateSyncKHR_PACKED)); \
        EGLSyncKHR ret = (EGLSyncKHR)0; \
        remote_dma_send((packed_call_t *)pack_eglCreateSyncKHR(dst, _dpy, _type, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreateSyncKHR(packed, ret_v) do { \
    eglCreateSyncKHR_PACKED *unpacked = (eglCreateSyncKHR_PACKED *)packed; \
    eglCreateSyncKHR_ARGS *args = (eglCreateSyncKHR_ARGS *)&unpacked->args; \
    EGLSyncKHR *ret = (EGLSyncKHR *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreateSyncKHR(args->dpy, args->type, args->attrib_list);; \
    } else { \
        eglCreateSyncKHR(args->dpy, args->type, args->attrib_list);; \
    } \
} while(0)
EGLSyncKHR eglCreateSyncKHR(eglCreateSyncKHR_ARG_EXPAND);
packed_call_t *pack_eglCreateSyncKHR(eglCreateSyncKHR_PACKED *_dst eglCreateSyncKHR_ARG_EXPAND_TAIL);
typedef EGLSyncKHR (*eglCreateSyncKHR_PTR)(eglCreateSyncKHR_ARG_EXPAND);
#endif
#ifndef eglCreateWindowSurface_RETURN
#define eglCreateWindowSurface_RETURN EGLSurface
#define eglCreateWindowSurface_ARG_NAMES dpy, config, win, attrib_list
#define eglCreateWindowSurface_ARG_EXPAND EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint * attrib_list
#define eglCreateWindowSurface_ARG_NAMES_TAIL , dpy, config, win, attrib_list
#define eglCreateWindowSurface_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint * attrib_list
#define forward_eglCreateWindowSurface(_dpy, _config, _win, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglCreateWindowSurface_PACKED)); \
        EGLSurface ret = (EGLSurface)0; \
        remote_dma_send((packed_call_t *)pack_eglCreateWindowSurface(dst, _dpy, _config, _win, _attrib_list), &ret); \
        ret; \
    });
#define call_eglCreateWindowSurface(packed, ret_v) do { \
    eglCreateWindowSurface_PACKED *unpacked = (eglCreateWindowSurface_PACKED *)packed; \
    eglCreateWindowSurface_ARGS *args = (eglCreateWindowSurface_ARGS *)&unpacked->args; \
    EGLSurface *ret = (EGLSurface *)ret_v; \
    if (ret != NULL) { \
        *ret = eglCreateWindowSurface(args->dpy, args->config, args->win, args->attrib_list);; \
    } else { \
        eglCreateWindowSurface(args->dpy, args->config, args->win, args->attrib_list);; \
    } \
} while(0)
EGLSurface eglCreateWindowSurface(eglCreateWindowSurface_ARG_EXPAND);
packed_call_t *pack_eglCreateWindowSurface(eglCreateWindowSurface_PACKED *_dst eglCreateWindowSurface_ARG_EXPAND_TAIL);
typedef EGLSurface (*eglCreateWindowSurface_PTR)(eglCreateWindowSurface_ARG_EXPAND);
#endif
#ifndef eglDestroyContext_RETURN
#define eglDestroyContext_RETURN EGLBoolean
#define eglDestroyContext_ARG_NAMES dpy, ctx
#define eglDestroyContext_ARG_EXPAND EGLDisplay dpy, EGLContext ctx
#define eglDestroyContext_ARG_NAMES_TAIL , dpy, ctx
#define eglDestroyContext_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLContext ctx
#define forward_eglDestroyContext(_dpy, _ctx) \
    ({ \
        void *dst = remote_dma(sizeof(eglDestroyContext_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglDestroyContext(dst, _dpy, _ctx), &ret); \
        ret; \
    });
#define call_eglDestroyContext(packed, ret_v) do { \
    eglDestroyContext_PACKED *unpacked = (eglDestroyContext_PACKED *)packed; \
    eglDestroyContext_ARGS *args = (eglDestroyContext_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglDestroyContext(args->dpy, args->ctx);; \
    } else { \
        eglDestroyContext(args->dpy, args->ctx);; \
    } \
} while(0)
EGLBoolean eglDestroyContext(eglDestroyContext_ARG_EXPAND);
packed_call_t *pack_eglDestroyContext(eglDestroyContext_PACKED *_dst eglDestroyContext_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglDestroyContext_PTR)(eglDestroyContext_ARG_EXPAND);
#endif
#ifndef eglDestroyImageKHR_RETURN
#define eglDestroyImageKHR_RETURN EGLBoolean
#define eglDestroyImageKHR_ARG_NAMES dpy, image
#define eglDestroyImageKHR_ARG_EXPAND EGLDisplay dpy, EGLImageKHR image
#define eglDestroyImageKHR_ARG_NAMES_TAIL , dpy, image
#define eglDestroyImageKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLImageKHR image
#define forward_eglDestroyImageKHR(_dpy, _image) \
    ({ \
        void *dst = remote_dma(sizeof(eglDestroyImageKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglDestroyImageKHR(dst, _dpy, _image), &ret); \
        ret; \
    });
#define call_eglDestroyImageKHR(packed, ret_v) do { \
    eglDestroyImageKHR_PACKED *unpacked = (eglDestroyImageKHR_PACKED *)packed; \
    eglDestroyImageKHR_ARGS *args = (eglDestroyImageKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglDestroyImageKHR(args->dpy, args->image);; \
    } else { \
        eglDestroyImageKHR(args->dpy, args->image);; \
    } \
} while(0)
EGLBoolean eglDestroyImageKHR(eglDestroyImageKHR_ARG_EXPAND);
packed_call_t *pack_eglDestroyImageKHR(eglDestroyImageKHR_PACKED *_dst eglDestroyImageKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglDestroyImageKHR_PTR)(eglDestroyImageKHR_ARG_EXPAND);
#endif
#ifndef eglDestroyStreamKHR_RETURN
#define eglDestroyStreamKHR_RETURN EGLBoolean
#define eglDestroyStreamKHR_ARG_NAMES dpy, stream
#define eglDestroyStreamKHR_ARG_EXPAND EGLDisplay dpy, EGLStreamKHR stream
#define eglDestroyStreamKHR_ARG_NAMES_TAIL , dpy, stream
#define eglDestroyStreamKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLStreamKHR stream
#define forward_eglDestroyStreamKHR(_dpy, _stream) \
    ({ \
        void *dst = remote_dma(sizeof(eglDestroyStreamKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglDestroyStreamKHR(dst, _dpy, _stream), &ret); \
        ret; \
    });
#define call_eglDestroyStreamKHR(packed, ret_v) do { \
    eglDestroyStreamKHR_PACKED *unpacked = (eglDestroyStreamKHR_PACKED *)packed; \
    eglDestroyStreamKHR_ARGS *args = (eglDestroyStreamKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglDestroyStreamKHR(args->dpy, args->stream);; \
    } else { \
        eglDestroyStreamKHR(args->dpy, args->stream);; \
    } \
} while(0)
EGLBoolean eglDestroyStreamKHR(eglDestroyStreamKHR_ARG_EXPAND);
packed_call_t *pack_eglDestroyStreamKHR(eglDestroyStreamKHR_PACKED *_dst eglDestroyStreamKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglDestroyStreamKHR_PTR)(eglDestroyStreamKHR_ARG_EXPAND);
#endif
#ifndef eglDestroySurface_RETURN
#define eglDestroySurface_RETURN EGLBoolean
#define eglDestroySurface_ARG_NAMES dpy, surface
#define eglDestroySurface_ARG_EXPAND EGLDisplay dpy, EGLSurface surface
#define eglDestroySurface_ARG_NAMES_TAIL , dpy, surface
#define eglDestroySurface_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surface
#define forward_eglDestroySurface(_dpy, _surface) \
    ({ \
        void *dst = remote_dma(sizeof(eglDestroySurface_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglDestroySurface(dst, _dpy, _surface), &ret); \
        ret; \
    });
#define call_eglDestroySurface(packed, ret_v) do { \
    eglDestroySurface_PACKED *unpacked = (eglDestroySurface_PACKED *)packed; \
    eglDestroySurface_ARGS *args = (eglDestroySurface_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglDestroySurface(args->dpy, args->surface);; \
    } else { \
        eglDestroySurface(args->dpy, args->surface);; \
    } \
} while(0)
EGLBoolean eglDestroySurface(eglDestroySurface_ARG_EXPAND);
packed_call_t *pack_eglDestroySurface(eglDestroySurface_PACKED *_dst eglDestroySurface_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglDestroySurface_PTR)(eglDestroySurface_ARG_EXPAND);
#endif
#ifndef eglDestroySyncKHR_RETURN
#define eglDestroySyncKHR_RETURN EGLBoolean
#define eglDestroySyncKHR_ARG_NAMES dpy, sync
#define eglDestroySyncKHR_ARG_EXPAND EGLDisplay dpy, EGLSyncKHR sync
#define eglDestroySyncKHR_ARG_NAMES_TAIL , dpy, sync
#define eglDestroySyncKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSyncKHR sync
#define forward_eglDestroySyncKHR(_dpy, _sync) \
    ({ \
        void *dst = remote_dma(sizeof(eglDestroySyncKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglDestroySyncKHR(dst, _dpy, _sync), &ret); \
        ret; \
    });
#define call_eglDestroySyncKHR(packed, ret_v) do { \
    eglDestroySyncKHR_PACKED *unpacked = (eglDestroySyncKHR_PACKED *)packed; \
    eglDestroySyncKHR_ARGS *args = (eglDestroySyncKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglDestroySyncKHR(args->dpy, args->sync);; \
    } else { \
        eglDestroySyncKHR(args->dpy, args->sync);; \
    } \
} while(0)
EGLBoolean eglDestroySyncKHR(eglDestroySyncKHR_ARG_EXPAND);
packed_call_t *pack_eglDestroySyncKHR(eglDestroySyncKHR_PACKED *_dst eglDestroySyncKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglDestroySyncKHR_PTR)(eglDestroySyncKHR_ARG_EXPAND);
#endif
#ifndef eglDestroySyncNV_RETURN
#define eglDestroySyncNV_RETURN EGLBoolean
#define eglDestroySyncNV_ARG_NAMES sync
#define eglDestroySyncNV_ARG_EXPAND EGLSyncNV sync
#define eglDestroySyncNV_ARG_NAMES_TAIL , sync
#define eglDestroySyncNV_ARG_EXPAND_TAIL , EGLSyncNV sync
#define forward_eglDestroySyncNV(_sync) \
    ({ \
        void *dst = remote_dma(sizeof(eglDestroySyncNV_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglDestroySyncNV(dst, _sync), &ret); \
        ret; \
    });
#define call_eglDestroySyncNV(packed, ret_v) do { \
    eglDestroySyncNV_PACKED *unpacked = (eglDestroySyncNV_PACKED *)packed; \
    eglDestroySyncNV_ARGS *args = (eglDestroySyncNV_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglDestroySyncNV(args->sync);; \
    } else { \
        eglDestroySyncNV(args->sync);; \
    } \
} while(0)
EGLBoolean eglDestroySyncNV(eglDestroySyncNV_ARG_EXPAND);
packed_call_t *pack_eglDestroySyncNV(eglDestroySyncNV_PACKED *_dst eglDestroySyncNV_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglDestroySyncNV_PTR)(eglDestroySyncNV_ARG_EXPAND);
#endif
#ifndef eglDupNativeFenceFDANDROID_RETURN
#define eglDupNativeFenceFDANDROID_RETURN EGLint
#define eglDupNativeFenceFDANDROID_ARG_NAMES dpy, sync
#define eglDupNativeFenceFDANDROID_ARG_EXPAND EGLDisplay dpy, EGLSyncKHR sync
#define eglDupNativeFenceFDANDROID_ARG_NAMES_TAIL , dpy, sync
#define eglDupNativeFenceFDANDROID_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSyncKHR sync
#define forward_eglDupNativeFenceFDANDROID(_dpy, _sync) \
    ({ \
        void *dst = remote_dma(sizeof(eglDupNativeFenceFDANDROID_PACKED)); \
        EGLint ret = (EGLint)0; \
        remote_dma_send((packed_call_t *)pack_eglDupNativeFenceFDANDROID(dst, _dpy, _sync), &ret); \
        ret; \
    });
#define call_eglDupNativeFenceFDANDROID(packed, ret_v) do { \
    eglDupNativeFenceFDANDROID_PACKED *unpacked = (eglDupNativeFenceFDANDROID_PACKED *)packed; \
    eglDupNativeFenceFDANDROID_ARGS *args = (eglDupNativeFenceFDANDROID_ARGS *)&unpacked->args; \
    EGLint *ret = (EGLint *)ret_v; \
    if (ret != NULL) { \
        *ret = eglDupNativeFenceFDANDROID(args->dpy, args->sync);; \
    } else { \
        eglDupNativeFenceFDANDROID(args->dpy, args->sync);; \
    } \
} while(0)
EGLint eglDupNativeFenceFDANDROID(eglDupNativeFenceFDANDROID_ARG_EXPAND);
packed_call_t *pack_eglDupNativeFenceFDANDROID(eglDupNativeFenceFDANDROID_PACKED *_dst eglDupNativeFenceFDANDROID_ARG_EXPAND_TAIL);
typedef EGLint (*eglDupNativeFenceFDANDROID_PTR)(eglDupNativeFenceFDANDROID_ARG_EXPAND);
#endif
#ifndef eglExportDRMImageMESA_RETURN
#define eglExportDRMImageMESA_RETURN EGLBoolean
#define eglExportDRMImageMESA_ARG_NAMES dpy, image, name, handle, stride
#define eglExportDRMImageMESA_ARG_EXPAND EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride
#define eglExportDRMImageMESA_ARG_NAMES_TAIL , dpy, image, name, handle, stride
#define eglExportDRMImageMESA_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride
#define forward_eglExportDRMImageMESA(_dpy, _image, _name, _handle, _stride) \
    ({ \
        void *dst = remote_dma(sizeof(eglExportDRMImageMESA_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglExportDRMImageMESA(dst, _dpy, _image, _name, _handle, _stride), &ret); \
        ret; \
    });
#define call_eglExportDRMImageMESA(packed, ret_v) do { \
    eglExportDRMImageMESA_PACKED *unpacked = (eglExportDRMImageMESA_PACKED *)packed; \
    eglExportDRMImageMESA_ARGS *args = (eglExportDRMImageMESA_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglExportDRMImageMESA(args->dpy, args->image, args->name, args->handle, args->stride);; \
    } else { \
        eglExportDRMImageMESA(args->dpy, args->image, args->name, args->handle, args->stride);; \
    } \
} while(0)
EGLBoolean eglExportDRMImageMESA(eglExportDRMImageMESA_ARG_EXPAND);
packed_call_t *pack_eglExportDRMImageMESA(eglExportDRMImageMESA_PACKED *_dst eglExportDRMImageMESA_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglExportDRMImageMESA_PTR)(eglExportDRMImageMESA_ARG_EXPAND);
#endif
#ifndef eglFenceNV_RETURN
#define eglFenceNV_RETURN EGLBoolean
#define eglFenceNV_ARG_NAMES sync
#define eglFenceNV_ARG_EXPAND EGLSyncNV sync
#define eglFenceNV_ARG_NAMES_TAIL , sync
#define eglFenceNV_ARG_EXPAND_TAIL , EGLSyncNV sync
#define forward_eglFenceNV(_sync) \
    ({ \
        void *dst = remote_dma(sizeof(eglFenceNV_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglFenceNV(dst, _sync), &ret); \
        ret; \
    });
#define call_eglFenceNV(packed, ret_v) do { \
    eglFenceNV_PACKED *unpacked = (eglFenceNV_PACKED *)packed; \
    eglFenceNV_ARGS *args = (eglFenceNV_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglFenceNV(args->sync);; \
    } else { \
        eglFenceNV(args->sync);; \
    } \
} while(0)
EGLBoolean eglFenceNV(eglFenceNV_ARG_EXPAND);
packed_call_t *pack_eglFenceNV(eglFenceNV_PACKED *_dst eglFenceNV_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglFenceNV_PTR)(eglFenceNV_ARG_EXPAND);
#endif
#ifndef eglGetConfigAttrib_RETURN
#define eglGetConfigAttrib_RETURN EGLBoolean
#define eglGetConfigAttrib_ARG_NAMES dpy, config, attribute, value
#define eglGetConfigAttrib_ARG_EXPAND EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value
#define eglGetConfigAttrib_ARG_NAMES_TAIL , dpy, config, attribute, value
#define eglGetConfigAttrib_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value
#define forward_eglGetConfigAttrib(_dpy, _config, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglGetConfigAttrib_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglGetConfigAttrib(dst, _dpy, _config, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglGetConfigAttrib(packed, ret_v) do { \
    eglGetConfigAttrib_PACKED *unpacked = (eglGetConfigAttrib_PACKED *)packed; \
    eglGetConfigAttrib_ARGS *args = (eglGetConfigAttrib_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetConfigAttrib(args->dpy, args->config, args->attribute, args->value);; \
    } else { \
        eglGetConfigAttrib(args->dpy, args->config, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglGetConfigAttrib(eglGetConfigAttrib_ARG_EXPAND);
packed_call_t *pack_eglGetConfigAttrib(eglGetConfigAttrib_PACKED *_dst eglGetConfigAttrib_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglGetConfigAttrib_PTR)(eglGetConfigAttrib_ARG_EXPAND);
#endif
#ifndef eglGetConfigs_RETURN
#define eglGetConfigs_RETURN EGLBoolean
#define eglGetConfigs_ARG_NAMES dpy, configs, config_size, num_config
#define eglGetConfigs_ARG_EXPAND EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config
#define eglGetConfigs_ARG_NAMES_TAIL , dpy, configs, config_size, num_config
#define eglGetConfigs_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config
#define forward_eglGetConfigs(_dpy, _configs, _config_size, _num_config) \
    ({ \
        void *dst = remote_dma(sizeof(eglGetConfigs_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglGetConfigs(dst, _dpy, _configs, _config_size, _num_config), &ret); \
        ret; \
    });
#define call_eglGetConfigs(packed, ret_v) do { \
    eglGetConfigs_PACKED *unpacked = (eglGetConfigs_PACKED *)packed; \
    eglGetConfigs_ARGS *args = (eglGetConfigs_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetConfigs(args->dpy, args->configs, args->config_size, args->num_config);; \
    } else { \
        eglGetConfigs(args->dpy, args->configs, args->config_size, args->num_config);; \
    } \
} while(0)
EGLBoolean eglGetConfigs(eglGetConfigs_ARG_EXPAND);
packed_call_t *pack_eglGetConfigs(eglGetConfigs_PACKED *_dst eglGetConfigs_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglGetConfigs_PTR)(eglGetConfigs_ARG_EXPAND);
#endif
#ifndef eglGetCurrentContext_RETURN
#define eglGetCurrentContext_RETURN EGLContext
#define eglGetCurrentContext_ARG_NAMES 
#define eglGetCurrentContext_ARG_EXPAND 
#define eglGetCurrentContext_ARG_NAMES_TAIL 
#define eglGetCurrentContext_ARG_EXPAND_TAIL 
#define forward_eglGetCurrentContext() \
    ({ \
        void *dst = remote_dma(sizeof(eglGetCurrentContext_PACKED)); \
        EGLContext ret = (EGLContext)0; \
        remote_dma_send((packed_call_t *)pack_eglGetCurrentContext(dst), &ret); \
        ret; \
    });
#define call_eglGetCurrentContext(packed, ret_v) do { \
    EGLContext *ret = (EGLContext *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetCurrentContext();; \
    } else { \
        eglGetCurrentContext();; \
    } \
} while(0)
EGLContext eglGetCurrentContext(eglGetCurrentContext_ARG_EXPAND);
packed_call_t *pack_eglGetCurrentContext(eglGetCurrentContext_PACKED *_dst eglGetCurrentContext_ARG_EXPAND_TAIL);
typedef EGLContext (*eglGetCurrentContext_PTR)(eglGetCurrentContext_ARG_EXPAND);
#endif
#ifndef eglGetCurrentDisplay_RETURN
#define eglGetCurrentDisplay_RETURN EGLDisplay
#define eglGetCurrentDisplay_ARG_NAMES 
#define eglGetCurrentDisplay_ARG_EXPAND 
#define eglGetCurrentDisplay_ARG_NAMES_TAIL 
#define eglGetCurrentDisplay_ARG_EXPAND_TAIL 
#define forward_eglGetCurrentDisplay() \
    ({ \
        void *dst = remote_dma(sizeof(eglGetCurrentDisplay_PACKED)); \
        EGLDisplay ret = (EGLDisplay)0; \
        remote_dma_send((packed_call_t *)pack_eglGetCurrentDisplay(dst), &ret); \
        ret; \
    });
#define call_eglGetCurrentDisplay(packed, ret_v) do { \
    EGLDisplay *ret = (EGLDisplay *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetCurrentDisplay();; \
    } else { \
        eglGetCurrentDisplay();; \
    } \
} while(0)
EGLDisplay eglGetCurrentDisplay(eglGetCurrentDisplay_ARG_EXPAND);
packed_call_t *pack_eglGetCurrentDisplay(eglGetCurrentDisplay_PACKED *_dst eglGetCurrentDisplay_ARG_EXPAND_TAIL);
typedef EGLDisplay (*eglGetCurrentDisplay_PTR)(eglGetCurrentDisplay_ARG_EXPAND);
#endif
#ifndef eglGetCurrentSurface_RETURN
#define eglGetCurrentSurface_RETURN EGLSurface
#define eglGetCurrentSurface_ARG_NAMES readdraw
#define eglGetCurrentSurface_ARG_EXPAND EGLint readdraw
#define eglGetCurrentSurface_ARG_NAMES_TAIL , readdraw
#define eglGetCurrentSurface_ARG_EXPAND_TAIL , EGLint readdraw
#define forward_eglGetCurrentSurface(_readdraw) \
    ({ \
        void *dst = remote_dma(sizeof(eglGetCurrentSurface_PACKED)); \
        EGLSurface ret = (EGLSurface)0; \
        remote_dma_send((packed_call_t *)pack_eglGetCurrentSurface(dst, _readdraw), &ret); \
        ret; \
    });
#define call_eglGetCurrentSurface(packed, ret_v) do { \
    eglGetCurrentSurface_PACKED *unpacked = (eglGetCurrentSurface_PACKED *)packed; \
    eglGetCurrentSurface_ARGS *args = (eglGetCurrentSurface_ARGS *)&unpacked->args; \
    EGLSurface *ret = (EGLSurface *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetCurrentSurface(args->readdraw);; \
    } else { \
        eglGetCurrentSurface(args->readdraw);; \
    } \
} while(0)
EGLSurface eglGetCurrentSurface(eglGetCurrentSurface_ARG_EXPAND);
packed_call_t *pack_eglGetCurrentSurface(eglGetCurrentSurface_PACKED *_dst eglGetCurrentSurface_ARG_EXPAND_TAIL);
typedef EGLSurface (*eglGetCurrentSurface_PTR)(eglGetCurrentSurface_ARG_EXPAND);
#endif
#ifndef eglGetDisplay_RETURN
#define eglGetDisplay_RETURN EGLDisplay
#define eglGetDisplay_ARG_NAMES display_id
#define eglGetDisplay_ARG_EXPAND EGLNativeDisplayType display_id
#define eglGetDisplay_ARG_NAMES_TAIL , display_id
#define eglGetDisplay_ARG_EXPAND_TAIL , EGLNativeDisplayType display_id
#define forward_eglGetDisplay(_display_id) \
    ({ \
        void *dst = remote_dma(sizeof(eglGetDisplay_PACKED)); \
        EGLDisplay ret = (EGLDisplay)0; \
        remote_dma_send((packed_call_t *)pack_eglGetDisplay(dst, _display_id), &ret); \
        ret; \
    });
#define call_eglGetDisplay(packed, ret_v) do { \
    eglGetDisplay_PACKED *unpacked = (eglGetDisplay_PACKED *)packed; \
    eglGetDisplay_ARGS *args = (eglGetDisplay_ARGS *)&unpacked->args; \
    EGLDisplay *ret = (EGLDisplay *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetDisplay(args->display_id);; \
    } else { \
        eglGetDisplay(args->display_id);; \
    } \
} while(0)
EGLDisplay eglGetDisplay(eglGetDisplay_ARG_EXPAND);
packed_call_t *pack_eglGetDisplay(eglGetDisplay_PACKED *_dst eglGetDisplay_ARG_EXPAND_TAIL);
typedef EGLDisplay (*eglGetDisplay_PTR)(eglGetDisplay_ARG_EXPAND);
#endif
#ifndef eglGetError_RETURN
#define eglGetError_RETURN EGLint
#define eglGetError_ARG_NAMES 
#define eglGetError_ARG_EXPAND 
#define eglGetError_ARG_NAMES_TAIL 
#define eglGetError_ARG_EXPAND_TAIL 
#define forward_eglGetError() \
    ({ \
        void *dst = remote_dma(sizeof(eglGetError_PACKED)); \
        EGLint ret = (EGLint)0; \
        remote_dma_send((packed_call_t *)pack_eglGetError(dst), &ret); \
        ret; \
    });
#define call_eglGetError(packed, ret_v) do { \
    EGLint *ret = (EGLint *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetError();; \
    } else { \
        eglGetError();; \
    } \
} while(0)
EGLint eglGetError(eglGetError_ARG_EXPAND);
packed_call_t *pack_eglGetError(eglGetError_PACKED *_dst eglGetError_ARG_EXPAND_TAIL);
typedef EGLint (*eglGetError_PTR)(eglGetError_ARG_EXPAND);
#endif
#ifndef eglGetProcAddress_RETURN
#define eglGetProcAddress_RETURN __eglMustCastToProperFunctionPointerType
#define eglGetProcAddress_ARG_NAMES procname
#define eglGetProcAddress_ARG_EXPAND const char * procname
#define eglGetProcAddress_ARG_NAMES_TAIL , procname
#define eglGetProcAddress_ARG_EXPAND_TAIL , const char * procname
#define forward_eglGetProcAddress(_procname) \
    ({ \
        void *dst = remote_dma(sizeof(eglGetProcAddress_PACKED)); \
        __eglMustCastToProperFunctionPointerType ret = (__eglMustCastToProperFunctionPointerType)0; \
        remote_dma_send((packed_call_t *)pack_eglGetProcAddress(dst, _procname), &ret); \
        ret; \
    });
#define call_eglGetProcAddress(packed, ret_v) do { \
    eglGetProcAddress_PACKED *unpacked = (eglGetProcAddress_PACKED *)packed; \
    eglGetProcAddress_ARGS *args = (eglGetProcAddress_ARGS *)&unpacked->args; \
    __eglMustCastToProperFunctionPointerType *ret = (__eglMustCastToProperFunctionPointerType *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetProcAddress(args->procname);; \
    } else { \
        eglGetProcAddress(args->procname);; \
    } \
} while(0)
__eglMustCastToProperFunctionPointerType eglGetProcAddress(eglGetProcAddress_ARG_EXPAND);
packed_call_t *pack_eglGetProcAddress(eglGetProcAddress_PACKED *_dst eglGetProcAddress_ARG_EXPAND_TAIL);
typedef __eglMustCastToProperFunctionPointerType (*eglGetProcAddress_PTR)(eglGetProcAddress_ARG_EXPAND);
#endif
#ifndef eglGetStreamFileDescriptorKHR_RETURN
#define eglGetStreamFileDescriptorKHR_RETURN EGLNativeFileDescriptorKHR
#define eglGetStreamFileDescriptorKHR_ARG_NAMES dpy, stream
#define eglGetStreamFileDescriptorKHR_ARG_EXPAND EGLDisplay dpy, EGLStreamKHR stream
#define eglGetStreamFileDescriptorKHR_ARG_NAMES_TAIL , dpy, stream
#define eglGetStreamFileDescriptorKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLStreamKHR stream
#define forward_eglGetStreamFileDescriptorKHR(_dpy, _stream) \
    ({ \
        void *dst = remote_dma(sizeof(eglGetStreamFileDescriptorKHR_PACKED)); \
        EGLNativeFileDescriptorKHR ret = (EGLNativeFileDescriptorKHR)0; \
        remote_dma_send((packed_call_t *)pack_eglGetStreamFileDescriptorKHR(dst, _dpy, _stream), &ret); \
        ret; \
    });
#define call_eglGetStreamFileDescriptorKHR(packed, ret_v) do { \
    eglGetStreamFileDescriptorKHR_PACKED *unpacked = (eglGetStreamFileDescriptorKHR_PACKED *)packed; \
    eglGetStreamFileDescriptorKHR_ARGS *args = (eglGetStreamFileDescriptorKHR_ARGS *)&unpacked->args; \
    EGLNativeFileDescriptorKHR *ret = (EGLNativeFileDescriptorKHR *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetStreamFileDescriptorKHR(args->dpy, args->stream);; \
    } else { \
        eglGetStreamFileDescriptorKHR(args->dpy, args->stream);; \
    } \
} while(0)
EGLNativeFileDescriptorKHR eglGetStreamFileDescriptorKHR(eglGetStreamFileDescriptorKHR_ARG_EXPAND);
packed_call_t *pack_eglGetStreamFileDescriptorKHR(eglGetStreamFileDescriptorKHR_PACKED *_dst eglGetStreamFileDescriptorKHR_ARG_EXPAND_TAIL);
typedef EGLNativeFileDescriptorKHR (*eglGetStreamFileDescriptorKHR_PTR)(eglGetStreamFileDescriptorKHR_ARG_EXPAND);
#endif
#ifndef eglGetSyncAttribKHR_RETURN
#define eglGetSyncAttribKHR_RETURN EGLBoolean
#define eglGetSyncAttribKHR_ARG_NAMES dpy, sync, attribute, value
#define eglGetSyncAttribKHR_ARG_EXPAND EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value
#define eglGetSyncAttribKHR_ARG_NAMES_TAIL , dpy, sync, attribute, value
#define eglGetSyncAttribKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value
#define forward_eglGetSyncAttribKHR(_dpy, _sync, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglGetSyncAttribKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglGetSyncAttribKHR(dst, _dpy, _sync, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglGetSyncAttribKHR(packed, ret_v) do { \
    eglGetSyncAttribKHR_PACKED *unpacked = (eglGetSyncAttribKHR_PACKED *)packed; \
    eglGetSyncAttribKHR_ARGS *args = (eglGetSyncAttribKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetSyncAttribKHR(args->dpy, args->sync, args->attribute, args->value);; \
    } else { \
        eglGetSyncAttribKHR(args->dpy, args->sync, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglGetSyncAttribKHR(eglGetSyncAttribKHR_ARG_EXPAND);
packed_call_t *pack_eglGetSyncAttribKHR(eglGetSyncAttribKHR_PACKED *_dst eglGetSyncAttribKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglGetSyncAttribKHR_PTR)(eglGetSyncAttribKHR_ARG_EXPAND);
#endif
#ifndef eglGetSyncAttribNV_RETURN
#define eglGetSyncAttribNV_RETURN EGLBoolean
#define eglGetSyncAttribNV_ARG_NAMES sync, attribute, value
#define eglGetSyncAttribNV_ARG_EXPAND EGLSyncNV sync, EGLint attribute, EGLint * value
#define eglGetSyncAttribNV_ARG_NAMES_TAIL , sync, attribute, value
#define eglGetSyncAttribNV_ARG_EXPAND_TAIL , EGLSyncNV sync, EGLint attribute, EGLint * value
#define forward_eglGetSyncAttribNV(_sync, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglGetSyncAttribNV_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglGetSyncAttribNV(dst, _sync, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglGetSyncAttribNV(packed, ret_v) do { \
    eglGetSyncAttribNV_PACKED *unpacked = (eglGetSyncAttribNV_PACKED *)packed; \
    eglGetSyncAttribNV_ARGS *args = (eglGetSyncAttribNV_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetSyncAttribNV(args->sync, args->attribute, args->value);; \
    } else { \
        eglGetSyncAttribNV(args->sync, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglGetSyncAttribNV(eglGetSyncAttribNV_ARG_EXPAND);
packed_call_t *pack_eglGetSyncAttribNV(eglGetSyncAttribNV_PACKED *_dst eglGetSyncAttribNV_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglGetSyncAttribNV_PTR)(eglGetSyncAttribNV_ARG_EXPAND);
#endif
#ifndef eglGetSystemTimeFrequencyNV_RETURN
#define eglGetSystemTimeFrequencyNV_RETURN EGLuint64NV
#define eglGetSystemTimeFrequencyNV_ARG_NAMES 
#define eglGetSystemTimeFrequencyNV_ARG_EXPAND 
#define eglGetSystemTimeFrequencyNV_ARG_NAMES_TAIL 
#define eglGetSystemTimeFrequencyNV_ARG_EXPAND_TAIL 
#define forward_eglGetSystemTimeFrequencyNV() \
    ({ \
        void *dst = remote_dma(sizeof(eglGetSystemTimeFrequencyNV_PACKED)); \
        EGLuint64NV ret = (EGLuint64NV)0; \
        remote_dma_send((packed_call_t *)pack_eglGetSystemTimeFrequencyNV(dst), &ret); \
        ret; \
    });
#define call_eglGetSystemTimeFrequencyNV(packed, ret_v) do { \
    EGLuint64NV *ret = (EGLuint64NV *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetSystemTimeFrequencyNV();; \
    } else { \
        eglGetSystemTimeFrequencyNV();; \
    } \
} while(0)
EGLuint64NV eglGetSystemTimeFrequencyNV(eglGetSystemTimeFrequencyNV_ARG_EXPAND);
packed_call_t *pack_eglGetSystemTimeFrequencyNV(eglGetSystemTimeFrequencyNV_PACKED *_dst eglGetSystemTimeFrequencyNV_ARG_EXPAND_TAIL);
typedef EGLuint64NV (*eglGetSystemTimeFrequencyNV_PTR)(eglGetSystemTimeFrequencyNV_ARG_EXPAND);
#endif
#ifndef eglGetSystemTimeNV_RETURN
#define eglGetSystemTimeNV_RETURN EGLuint64NV
#define eglGetSystemTimeNV_ARG_NAMES 
#define eglGetSystemTimeNV_ARG_EXPAND 
#define eglGetSystemTimeNV_ARG_NAMES_TAIL 
#define eglGetSystemTimeNV_ARG_EXPAND_TAIL 
#define forward_eglGetSystemTimeNV() \
    ({ \
        void *dst = remote_dma(sizeof(eglGetSystemTimeNV_PACKED)); \
        EGLuint64NV ret = (EGLuint64NV)0; \
        remote_dma_send((packed_call_t *)pack_eglGetSystemTimeNV(dst), &ret); \
        ret; \
    });
#define call_eglGetSystemTimeNV(packed, ret_v) do { \
    EGLuint64NV *ret = (EGLuint64NV *)ret_v; \
    if (ret != NULL) { \
        *ret = eglGetSystemTimeNV();; \
    } else { \
        eglGetSystemTimeNV();; \
    } \
} while(0)
EGLuint64NV eglGetSystemTimeNV(eglGetSystemTimeNV_ARG_EXPAND);
packed_call_t *pack_eglGetSystemTimeNV(eglGetSystemTimeNV_PACKED *_dst eglGetSystemTimeNV_ARG_EXPAND_TAIL);
typedef EGLuint64NV (*eglGetSystemTimeNV_PTR)(eglGetSystemTimeNV_ARG_EXPAND);
#endif
#ifndef eglInitialize_RETURN
#define eglInitialize_RETURN EGLBoolean
#define eglInitialize_ARG_NAMES dpy, major, minor
#define eglInitialize_ARG_EXPAND EGLDisplay dpy, EGLint * major, EGLint * minor
#define eglInitialize_ARG_NAMES_TAIL , dpy, major, minor
#define eglInitialize_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLint * major, EGLint * minor
#define forward_eglInitialize(_dpy, _major, _minor) \
    ({ \
        void *dst = remote_dma(sizeof(eglInitialize_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglInitialize(dst, _dpy, _major, _minor), &ret); \
        ret; \
    });
#define call_eglInitialize(packed, ret_v) do { \
    eglInitialize_PACKED *unpacked = (eglInitialize_PACKED *)packed; \
    eglInitialize_ARGS *args = (eglInitialize_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglInitialize(args->dpy, args->major, args->minor);; \
    } else { \
        eglInitialize(args->dpy, args->major, args->minor);; \
    } \
} while(0)
EGLBoolean eglInitialize(eglInitialize_ARG_EXPAND);
packed_call_t *pack_eglInitialize(eglInitialize_PACKED *_dst eglInitialize_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglInitialize_PTR)(eglInitialize_ARG_EXPAND);
#endif
#ifndef eglLockSurfaceKHR_RETURN
#define eglLockSurfaceKHR_RETURN EGLBoolean
#define eglLockSurfaceKHR_ARG_NAMES display, surface, attrib_list
#define eglLockSurfaceKHR_ARG_EXPAND EGLDisplay display, EGLSurface surface, const EGLint * attrib_list
#define eglLockSurfaceKHR_ARG_NAMES_TAIL , display, surface, attrib_list
#define eglLockSurfaceKHR_ARG_EXPAND_TAIL , EGLDisplay display, EGLSurface surface, const EGLint * attrib_list
#define forward_eglLockSurfaceKHR(_display, _surface, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(eglLockSurfaceKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglLockSurfaceKHR(dst, _display, _surface, _attrib_list), &ret); \
        ret; \
    });
#define call_eglLockSurfaceKHR(packed, ret_v) do { \
    eglLockSurfaceKHR_PACKED *unpacked = (eglLockSurfaceKHR_PACKED *)packed; \
    eglLockSurfaceKHR_ARGS *args = (eglLockSurfaceKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglLockSurfaceKHR(args->display, args->surface, args->attrib_list);; \
    } else { \
        eglLockSurfaceKHR(args->display, args->surface, args->attrib_list);; \
    } \
} while(0)
EGLBoolean eglLockSurfaceKHR(eglLockSurfaceKHR_ARG_EXPAND);
packed_call_t *pack_eglLockSurfaceKHR(eglLockSurfaceKHR_PACKED *_dst eglLockSurfaceKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglLockSurfaceKHR_PTR)(eglLockSurfaceKHR_ARG_EXPAND);
#endif
#ifndef eglMakeCurrent_RETURN
#define eglMakeCurrent_RETURN EGLBoolean
#define eglMakeCurrent_ARG_NAMES dpy, draw, read, ctx
#define eglMakeCurrent_ARG_EXPAND EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx
#define eglMakeCurrent_ARG_NAMES_TAIL , dpy, draw, read, ctx
#define eglMakeCurrent_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx
#define forward_eglMakeCurrent(_dpy, _draw, _read, _ctx) \
    ({ \
        void *dst = remote_dma(sizeof(eglMakeCurrent_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglMakeCurrent(dst, _dpy, _draw, _read, _ctx), &ret); \
        ret; \
    });
#define call_eglMakeCurrent(packed, ret_v) do { \
    eglMakeCurrent_PACKED *unpacked = (eglMakeCurrent_PACKED *)packed; \
    eglMakeCurrent_ARGS *args = (eglMakeCurrent_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglMakeCurrent(args->dpy, args->draw, args->read, args->ctx);; \
    } else { \
        eglMakeCurrent(args->dpy, args->draw, args->read, args->ctx);; \
    } \
} while(0)
EGLBoolean eglMakeCurrent(eglMakeCurrent_ARG_EXPAND);
packed_call_t *pack_eglMakeCurrent(eglMakeCurrent_PACKED *_dst eglMakeCurrent_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglMakeCurrent_PTR)(eglMakeCurrent_ARG_EXPAND);
#endif
#ifndef eglPostSubBufferNV_RETURN
#define eglPostSubBufferNV_RETURN EGLBoolean
#define eglPostSubBufferNV_ARG_NAMES dpy, surface, x, y, width, height
#define eglPostSubBufferNV_ARG_EXPAND EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height
#define eglPostSubBufferNV_ARG_NAMES_TAIL , dpy, surface, x, y, width, height
#define eglPostSubBufferNV_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height
#define forward_eglPostSubBufferNV(_dpy, _surface, _x, _y, _width, _height) \
    ({ \
        void *dst = remote_dma(sizeof(eglPostSubBufferNV_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglPostSubBufferNV(dst, _dpy, _surface, _x, _y, _width, _height), &ret); \
        ret; \
    });
#define call_eglPostSubBufferNV(packed, ret_v) do { \
    eglPostSubBufferNV_PACKED *unpacked = (eglPostSubBufferNV_PACKED *)packed; \
    eglPostSubBufferNV_ARGS *args = (eglPostSubBufferNV_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglPostSubBufferNV(args->dpy, args->surface, args->x, args->y, args->width, args->height);; \
    } else { \
        eglPostSubBufferNV(args->dpy, args->surface, args->x, args->y, args->width, args->height);; \
    } \
} while(0)
EGLBoolean eglPostSubBufferNV(eglPostSubBufferNV_ARG_EXPAND);
packed_call_t *pack_eglPostSubBufferNV(eglPostSubBufferNV_PACKED *_dst eglPostSubBufferNV_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglPostSubBufferNV_PTR)(eglPostSubBufferNV_ARG_EXPAND);
#endif
#ifndef eglQueryAPI_RETURN
#define eglQueryAPI_RETURN EGLenum
#define eglQueryAPI_ARG_NAMES 
#define eglQueryAPI_ARG_EXPAND 
#define eglQueryAPI_ARG_NAMES_TAIL 
#define eglQueryAPI_ARG_EXPAND_TAIL 
#define forward_eglQueryAPI() \
    ({ \
        void *dst = remote_dma(sizeof(eglQueryAPI_PACKED)); \
        EGLenum ret = (EGLenum)0; \
        remote_dma_send((packed_call_t *)pack_eglQueryAPI(dst), &ret); \
        ret; \
    });
#define call_eglQueryAPI(packed, ret_v) do { \
    EGLenum *ret = (EGLenum *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQueryAPI();; \
    } else { \
        eglQueryAPI();; \
    } \
} while(0)
EGLenum eglQueryAPI(eglQueryAPI_ARG_EXPAND);
packed_call_t *pack_eglQueryAPI(eglQueryAPI_PACKED *_dst eglQueryAPI_ARG_EXPAND_TAIL);
typedef EGLenum (*eglQueryAPI_PTR)(eglQueryAPI_ARG_EXPAND);
#endif
#ifndef eglQueryContext_RETURN
#define eglQueryContext_RETURN EGLBoolean
#define eglQueryContext_ARG_NAMES dpy, ctx, attribute, value
#define eglQueryContext_ARG_EXPAND EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint * value
#define eglQueryContext_ARG_NAMES_TAIL , dpy, ctx, attribute, value
#define eglQueryContext_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint * value
#define forward_eglQueryContext(_dpy, _ctx, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglQueryContext_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglQueryContext(dst, _dpy, _ctx, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglQueryContext(packed, ret_v) do { \
    eglQueryContext_PACKED *unpacked = (eglQueryContext_PACKED *)packed; \
    eglQueryContext_ARGS *args = (eglQueryContext_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQueryContext(args->dpy, args->ctx, args->attribute, args->value);; \
    } else { \
        eglQueryContext(args->dpy, args->ctx, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglQueryContext(eglQueryContext_ARG_EXPAND);
packed_call_t *pack_eglQueryContext(eglQueryContext_PACKED *_dst eglQueryContext_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglQueryContext_PTR)(eglQueryContext_ARG_EXPAND);
#endif
#ifndef eglQueryNativeDisplayNV_RETURN
#define eglQueryNativeDisplayNV_RETURN EGLBoolean
#define eglQueryNativeDisplayNV_ARG_NAMES dpy, display_id
#define eglQueryNativeDisplayNV_ARG_EXPAND EGLDisplay dpy, EGLNativeDisplayType * display_id
#define eglQueryNativeDisplayNV_ARG_NAMES_TAIL , dpy, display_id
#define eglQueryNativeDisplayNV_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLNativeDisplayType * display_id
#define forward_eglQueryNativeDisplayNV(_dpy, _display_id) \
    ({ \
        void *dst = remote_dma(sizeof(eglQueryNativeDisplayNV_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglQueryNativeDisplayNV(dst, _dpy, _display_id), &ret); \
        ret; \
    });
#define call_eglQueryNativeDisplayNV(packed, ret_v) do { \
    eglQueryNativeDisplayNV_PACKED *unpacked = (eglQueryNativeDisplayNV_PACKED *)packed; \
    eglQueryNativeDisplayNV_ARGS *args = (eglQueryNativeDisplayNV_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQueryNativeDisplayNV(args->dpy, args->display_id);; \
    } else { \
        eglQueryNativeDisplayNV(args->dpy, args->display_id);; \
    } \
} while(0)
EGLBoolean eglQueryNativeDisplayNV(eglQueryNativeDisplayNV_ARG_EXPAND);
packed_call_t *pack_eglQueryNativeDisplayNV(eglQueryNativeDisplayNV_PACKED *_dst eglQueryNativeDisplayNV_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglQueryNativeDisplayNV_PTR)(eglQueryNativeDisplayNV_ARG_EXPAND);
#endif
#ifndef eglQueryNativePixmapNV_RETURN
#define eglQueryNativePixmapNV_RETURN EGLBoolean
#define eglQueryNativePixmapNV_ARG_NAMES dpy, surf, pixmap
#define eglQueryNativePixmapNV_ARG_EXPAND EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap
#define eglQueryNativePixmapNV_ARG_NAMES_TAIL , dpy, surf, pixmap
#define eglQueryNativePixmapNV_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap
#define forward_eglQueryNativePixmapNV(_dpy, _surf, _pixmap) \
    ({ \
        void *dst = remote_dma(sizeof(eglQueryNativePixmapNV_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglQueryNativePixmapNV(dst, _dpy, _surf, _pixmap), &ret); \
        ret; \
    });
#define call_eglQueryNativePixmapNV(packed, ret_v) do { \
    eglQueryNativePixmapNV_PACKED *unpacked = (eglQueryNativePixmapNV_PACKED *)packed; \
    eglQueryNativePixmapNV_ARGS *args = (eglQueryNativePixmapNV_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQueryNativePixmapNV(args->dpy, args->surf, args->pixmap);; \
    } else { \
        eglQueryNativePixmapNV(args->dpy, args->surf, args->pixmap);; \
    } \
} while(0)
EGLBoolean eglQueryNativePixmapNV(eglQueryNativePixmapNV_ARG_EXPAND);
packed_call_t *pack_eglQueryNativePixmapNV(eglQueryNativePixmapNV_PACKED *_dst eglQueryNativePixmapNV_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglQueryNativePixmapNV_PTR)(eglQueryNativePixmapNV_ARG_EXPAND);
#endif
#ifndef eglQueryNativeWindowNV_RETURN
#define eglQueryNativeWindowNV_RETURN EGLBoolean
#define eglQueryNativeWindowNV_ARG_NAMES dpy, surf, window
#define eglQueryNativeWindowNV_ARG_EXPAND EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window
#define eglQueryNativeWindowNV_ARG_NAMES_TAIL , dpy, surf, window
#define eglQueryNativeWindowNV_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window
#define forward_eglQueryNativeWindowNV(_dpy, _surf, _window) \
    ({ \
        void *dst = remote_dma(sizeof(eglQueryNativeWindowNV_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglQueryNativeWindowNV(dst, _dpy, _surf, _window), &ret); \
        ret; \
    });
#define call_eglQueryNativeWindowNV(packed, ret_v) do { \
    eglQueryNativeWindowNV_PACKED *unpacked = (eglQueryNativeWindowNV_PACKED *)packed; \
    eglQueryNativeWindowNV_ARGS *args = (eglQueryNativeWindowNV_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQueryNativeWindowNV(args->dpy, args->surf, args->window);; \
    } else { \
        eglQueryNativeWindowNV(args->dpy, args->surf, args->window);; \
    } \
} while(0)
EGLBoolean eglQueryNativeWindowNV(eglQueryNativeWindowNV_ARG_EXPAND);
packed_call_t *pack_eglQueryNativeWindowNV(eglQueryNativeWindowNV_PACKED *_dst eglQueryNativeWindowNV_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglQueryNativeWindowNV_PTR)(eglQueryNativeWindowNV_ARG_EXPAND);
#endif
#ifndef eglQueryStreamKHR_RETURN
#define eglQueryStreamKHR_RETURN EGLBoolean
#define eglQueryStreamKHR_ARG_NAMES dpy, stream, attribute, value
#define eglQueryStreamKHR_ARG_EXPAND EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value
#define eglQueryStreamKHR_ARG_NAMES_TAIL , dpy, stream, attribute, value
#define eglQueryStreamKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value
#define forward_eglQueryStreamKHR(_dpy, _stream, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglQueryStreamKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglQueryStreamKHR(dst, _dpy, _stream, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglQueryStreamKHR(packed, ret_v) do { \
    eglQueryStreamKHR_PACKED *unpacked = (eglQueryStreamKHR_PACKED *)packed; \
    eglQueryStreamKHR_ARGS *args = (eglQueryStreamKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQueryStreamKHR(args->dpy, args->stream, args->attribute, args->value);; \
    } else { \
        eglQueryStreamKHR(args->dpy, args->stream, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglQueryStreamKHR(eglQueryStreamKHR_ARG_EXPAND);
packed_call_t *pack_eglQueryStreamKHR(eglQueryStreamKHR_PACKED *_dst eglQueryStreamKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglQueryStreamKHR_PTR)(eglQueryStreamKHR_ARG_EXPAND);
#endif
#ifndef eglQueryStreamTimeKHR_RETURN
#define eglQueryStreamTimeKHR_RETURN EGLBoolean
#define eglQueryStreamTimeKHR_ARG_NAMES dpy, stream, attribute, value
#define eglQueryStreamTimeKHR_ARG_EXPAND EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value
#define eglQueryStreamTimeKHR_ARG_NAMES_TAIL , dpy, stream, attribute, value
#define eglQueryStreamTimeKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value
#define forward_eglQueryStreamTimeKHR(_dpy, _stream, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglQueryStreamTimeKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglQueryStreamTimeKHR(dst, _dpy, _stream, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglQueryStreamTimeKHR(packed, ret_v) do { \
    eglQueryStreamTimeKHR_PACKED *unpacked = (eglQueryStreamTimeKHR_PACKED *)packed; \
    eglQueryStreamTimeKHR_ARGS *args = (eglQueryStreamTimeKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQueryStreamTimeKHR(args->dpy, args->stream, args->attribute, args->value);; \
    } else { \
        eglQueryStreamTimeKHR(args->dpy, args->stream, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglQueryStreamTimeKHR(eglQueryStreamTimeKHR_ARG_EXPAND);
packed_call_t *pack_eglQueryStreamTimeKHR(eglQueryStreamTimeKHR_PACKED *_dst eglQueryStreamTimeKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglQueryStreamTimeKHR_PTR)(eglQueryStreamTimeKHR_ARG_EXPAND);
#endif
#ifndef eglQueryStreamu64KHR_RETURN
#define eglQueryStreamu64KHR_RETURN EGLBoolean
#define eglQueryStreamu64KHR_ARG_NAMES dpy, stream, attribute, value
#define eglQueryStreamu64KHR_ARG_EXPAND EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value
#define eglQueryStreamu64KHR_ARG_NAMES_TAIL , dpy, stream, attribute, value
#define eglQueryStreamu64KHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value
#define forward_eglQueryStreamu64KHR(_dpy, _stream, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglQueryStreamu64KHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglQueryStreamu64KHR(dst, _dpy, _stream, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglQueryStreamu64KHR(packed, ret_v) do { \
    eglQueryStreamu64KHR_PACKED *unpacked = (eglQueryStreamu64KHR_PACKED *)packed; \
    eglQueryStreamu64KHR_ARGS *args = (eglQueryStreamu64KHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQueryStreamu64KHR(args->dpy, args->stream, args->attribute, args->value);; \
    } else { \
        eglQueryStreamu64KHR(args->dpy, args->stream, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglQueryStreamu64KHR(eglQueryStreamu64KHR_ARG_EXPAND);
packed_call_t *pack_eglQueryStreamu64KHR(eglQueryStreamu64KHR_PACKED *_dst eglQueryStreamu64KHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglQueryStreamu64KHR_PTR)(eglQueryStreamu64KHR_ARG_EXPAND);
#endif
#ifndef eglQueryString_RETURN
#define eglQueryString_RETURN const char *
#define eglQueryString_ARG_NAMES dpy, name
#define eglQueryString_ARG_EXPAND EGLDisplay dpy, EGLint name
#define eglQueryString_ARG_NAMES_TAIL , dpy, name
#define eglQueryString_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLint name
#define forward_eglQueryString(_dpy, _name) \
    ({ \
        void *dst = remote_dma(sizeof(eglQueryString_PACKED)); \
        const char * ret = (const char *)0; \
        remote_dma_send((packed_call_t *)pack_eglQueryString(dst, _dpy, _name), &ret); \
        ret; \
    });
#define call_eglQueryString(packed, ret_v) do { \
    eglQueryString_PACKED *unpacked = (eglQueryString_PACKED *)packed; \
    eglQueryString_ARGS *args = (eglQueryString_ARGS *)&unpacked->args; \
    const char * *ret = (const char * *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQueryString(args->dpy, args->name);; \
    } else { \
        eglQueryString(args->dpy, args->name);; \
    } \
} while(0)
const char * eglQueryString(eglQueryString_ARG_EXPAND);
packed_call_t *pack_eglQueryString(eglQueryString_PACKED *_dst eglQueryString_ARG_EXPAND_TAIL);
typedef const char * (*eglQueryString_PTR)(eglQueryString_ARG_EXPAND);
#endif
#ifndef eglQuerySurface_RETURN
#define eglQuerySurface_RETURN EGLBoolean
#define eglQuerySurface_ARG_NAMES dpy, surface, attribute, value
#define eglQuerySurface_ARG_EXPAND EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint * value
#define eglQuerySurface_ARG_NAMES_TAIL , dpy, surface, attribute, value
#define eglQuerySurface_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint * value
#define forward_eglQuerySurface(_dpy, _surface, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglQuerySurface_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglQuerySurface(dst, _dpy, _surface, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglQuerySurface(packed, ret_v) do { \
    eglQuerySurface_PACKED *unpacked = (eglQuerySurface_PACKED *)packed; \
    eglQuerySurface_ARGS *args = (eglQuerySurface_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQuerySurface(args->dpy, args->surface, args->attribute, args->value);; \
    } else { \
        eglQuerySurface(args->dpy, args->surface, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglQuerySurface(eglQuerySurface_ARG_EXPAND);
packed_call_t *pack_eglQuerySurface(eglQuerySurface_PACKED *_dst eglQuerySurface_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglQuerySurface_PTR)(eglQuerySurface_ARG_EXPAND);
#endif
#ifndef eglQuerySurfacePointerANGLE_RETURN
#define eglQuerySurfacePointerANGLE_RETURN EGLBoolean
#define eglQuerySurfacePointerANGLE_ARG_NAMES dpy, surface, attribute, value
#define eglQuerySurfacePointerANGLE_ARG_EXPAND EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value
#define eglQuerySurfacePointerANGLE_ARG_NAMES_TAIL , dpy, surface, attribute, value
#define eglQuerySurfacePointerANGLE_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value
#define forward_eglQuerySurfacePointerANGLE(_dpy, _surface, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglQuerySurfacePointerANGLE_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglQuerySurfacePointerANGLE(dst, _dpy, _surface, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglQuerySurfacePointerANGLE(packed, ret_v) do { \
    eglQuerySurfacePointerANGLE_PACKED *unpacked = (eglQuerySurfacePointerANGLE_PACKED *)packed; \
    eglQuerySurfacePointerANGLE_ARGS *args = (eglQuerySurfacePointerANGLE_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglQuerySurfacePointerANGLE(args->dpy, args->surface, args->attribute, args->value);; \
    } else { \
        eglQuerySurfacePointerANGLE(args->dpy, args->surface, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglQuerySurfacePointerANGLE(eglQuerySurfacePointerANGLE_ARG_EXPAND);
packed_call_t *pack_eglQuerySurfacePointerANGLE(eglQuerySurfacePointerANGLE_PACKED *_dst eglQuerySurfacePointerANGLE_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglQuerySurfacePointerANGLE_PTR)(eglQuerySurfacePointerANGLE_ARG_EXPAND);
#endif
#ifndef eglReleaseTexImage_RETURN
#define eglReleaseTexImage_RETURN EGLBoolean
#define eglReleaseTexImage_ARG_NAMES dpy, surface, buffer
#define eglReleaseTexImage_ARG_EXPAND EGLDisplay dpy, EGLSurface surface, EGLint buffer
#define eglReleaseTexImage_ARG_NAMES_TAIL , dpy, surface, buffer
#define eglReleaseTexImage_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surface, EGLint buffer
#define forward_eglReleaseTexImage(_dpy, _surface, _buffer) \
    ({ \
        void *dst = remote_dma(sizeof(eglReleaseTexImage_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglReleaseTexImage(dst, _dpy, _surface, _buffer), &ret); \
        ret; \
    });
#define call_eglReleaseTexImage(packed, ret_v) do { \
    eglReleaseTexImage_PACKED *unpacked = (eglReleaseTexImage_PACKED *)packed; \
    eglReleaseTexImage_ARGS *args = (eglReleaseTexImage_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglReleaseTexImage(args->dpy, args->surface, args->buffer);; \
    } else { \
        eglReleaseTexImage(args->dpy, args->surface, args->buffer);; \
    } \
} while(0)
EGLBoolean eglReleaseTexImage(eglReleaseTexImage_ARG_EXPAND);
packed_call_t *pack_eglReleaseTexImage(eglReleaseTexImage_PACKED *_dst eglReleaseTexImage_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglReleaseTexImage_PTR)(eglReleaseTexImage_ARG_EXPAND);
#endif
#ifndef eglReleaseThread_RETURN
#define eglReleaseThread_RETURN EGLBoolean
#define eglReleaseThread_ARG_NAMES 
#define eglReleaseThread_ARG_EXPAND 
#define eglReleaseThread_ARG_NAMES_TAIL 
#define eglReleaseThread_ARG_EXPAND_TAIL 
#define forward_eglReleaseThread() \
    ({ \
        void *dst = remote_dma(sizeof(eglReleaseThread_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglReleaseThread(dst), &ret); \
        ret; \
    });
#define call_eglReleaseThread(packed, ret_v) do { \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglReleaseThread();; \
    } else { \
        eglReleaseThread();; \
    } \
} while(0)
EGLBoolean eglReleaseThread(eglReleaseThread_ARG_EXPAND);
packed_call_t *pack_eglReleaseThread(eglReleaseThread_PACKED *_dst eglReleaseThread_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglReleaseThread_PTR)(eglReleaseThread_ARG_EXPAND);
#endif
#ifndef eglSignalSyncKHR_RETURN
#define eglSignalSyncKHR_RETURN EGLBoolean
#define eglSignalSyncKHR_ARG_NAMES dpy, sync, mode
#define eglSignalSyncKHR_ARG_EXPAND EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode
#define eglSignalSyncKHR_ARG_NAMES_TAIL , dpy, sync, mode
#define eglSignalSyncKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode
#define forward_eglSignalSyncKHR(_dpy, _sync, _mode) \
    ({ \
        void *dst = remote_dma(sizeof(eglSignalSyncKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglSignalSyncKHR(dst, _dpy, _sync, _mode), &ret); \
        ret; \
    });
#define call_eglSignalSyncKHR(packed, ret_v) do { \
    eglSignalSyncKHR_PACKED *unpacked = (eglSignalSyncKHR_PACKED *)packed; \
    eglSignalSyncKHR_ARGS *args = (eglSignalSyncKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglSignalSyncKHR(args->dpy, args->sync, args->mode);; \
    } else { \
        eglSignalSyncKHR(args->dpy, args->sync, args->mode);; \
    } \
} while(0)
EGLBoolean eglSignalSyncKHR(eglSignalSyncKHR_ARG_EXPAND);
packed_call_t *pack_eglSignalSyncKHR(eglSignalSyncKHR_PACKED *_dst eglSignalSyncKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglSignalSyncKHR_PTR)(eglSignalSyncKHR_ARG_EXPAND);
#endif
#ifndef eglSignalSyncNV_RETURN
#define eglSignalSyncNV_RETURN EGLBoolean
#define eglSignalSyncNV_ARG_NAMES sync, mode
#define eglSignalSyncNV_ARG_EXPAND EGLSyncNV sync, EGLenum mode
#define eglSignalSyncNV_ARG_NAMES_TAIL , sync, mode
#define eglSignalSyncNV_ARG_EXPAND_TAIL , EGLSyncNV sync, EGLenum mode
#define forward_eglSignalSyncNV(_sync, _mode) \
    ({ \
        void *dst = remote_dma(sizeof(eglSignalSyncNV_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglSignalSyncNV(dst, _sync, _mode), &ret); \
        ret; \
    });
#define call_eglSignalSyncNV(packed, ret_v) do { \
    eglSignalSyncNV_PACKED *unpacked = (eglSignalSyncNV_PACKED *)packed; \
    eglSignalSyncNV_ARGS *args = (eglSignalSyncNV_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglSignalSyncNV(args->sync, args->mode);; \
    } else { \
        eglSignalSyncNV(args->sync, args->mode);; \
    } \
} while(0)
EGLBoolean eglSignalSyncNV(eglSignalSyncNV_ARG_EXPAND);
packed_call_t *pack_eglSignalSyncNV(eglSignalSyncNV_PACKED *_dst eglSignalSyncNV_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglSignalSyncNV_PTR)(eglSignalSyncNV_ARG_EXPAND);
#endif
#ifndef eglStreamAttribKHR_RETURN
#define eglStreamAttribKHR_RETURN EGLBoolean
#define eglStreamAttribKHR_ARG_NAMES dpy, stream, attribute, value
#define eglStreamAttribKHR_ARG_EXPAND EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value
#define eglStreamAttribKHR_ARG_NAMES_TAIL , dpy, stream, attribute, value
#define eglStreamAttribKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value
#define forward_eglStreamAttribKHR(_dpy, _stream, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglStreamAttribKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglStreamAttribKHR(dst, _dpy, _stream, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglStreamAttribKHR(packed, ret_v) do { \
    eglStreamAttribKHR_PACKED *unpacked = (eglStreamAttribKHR_PACKED *)packed; \
    eglStreamAttribKHR_ARGS *args = (eglStreamAttribKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglStreamAttribKHR(args->dpy, args->stream, args->attribute, args->value);; \
    } else { \
        eglStreamAttribKHR(args->dpy, args->stream, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglStreamAttribKHR(eglStreamAttribKHR_ARG_EXPAND);
packed_call_t *pack_eglStreamAttribKHR(eglStreamAttribKHR_PACKED *_dst eglStreamAttribKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglStreamAttribKHR_PTR)(eglStreamAttribKHR_ARG_EXPAND);
#endif
#ifndef eglStreamConsumerAcquireKHR_RETURN
#define eglStreamConsumerAcquireKHR_RETURN EGLBoolean
#define eglStreamConsumerAcquireKHR_ARG_NAMES dpy, stream
#define eglStreamConsumerAcquireKHR_ARG_EXPAND EGLDisplay dpy, EGLStreamKHR stream
#define eglStreamConsumerAcquireKHR_ARG_NAMES_TAIL , dpy, stream
#define eglStreamConsumerAcquireKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLStreamKHR stream
#define forward_eglStreamConsumerAcquireKHR(_dpy, _stream) \
    ({ \
        void *dst = remote_dma(sizeof(eglStreamConsumerAcquireKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglStreamConsumerAcquireKHR(dst, _dpy, _stream), &ret); \
        ret; \
    });
#define call_eglStreamConsumerAcquireKHR(packed, ret_v) do { \
    eglStreamConsumerAcquireKHR_PACKED *unpacked = (eglStreamConsumerAcquireKHR_PACKED *)packed; \
    eglStreamConsumerAcquireKHR_ARGS *args = (eglStreamConsumerAcquireKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglStreamConsumerAcquireKHR(args->dpy, args->stream);; \
    } else { \
        eglStreamConsumerAcquireKHR(args->dpy, args->stream);; \
    } \
} while(0)
EGLBoolean eglStreamConsumerAcquireKHR(eglStreamConsumerAcquireKHR_ARG_EXPAND);
packed_call_t *pack_eglStreamConsumerAcquireKHR(eglStreamConsumerAcquireKHR_PACKED *_dst eglStreamConsumerAcquireKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglStreamConsumerAcquireKHR_PTR)(eglStreamConsumerAcquireKHR_ARG_EXPAND);
#endif
#ifndef eglStreamConsumerGLTextureExternalKHR_RETURN
#define eglStreamConsumerGLTextureExternalKHR_RETURN EGLBoolean
#define eglStreamConsumerGLTextureExternalKHR_ARG_NAMES dpy, stream
#define eglStreamConsumerGLTextureExternalKHR_ARG_EXPAND EGLDisplay dpy, EGLStreamKHR stream
#define eglStreamConsumerGLTextureExternalKHR_ARG_NAMES_TAIL , dpy, stream
#define eglStreamConsumerGLTextureExternalKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLStreamKHR stream
#define forward_eglStreamConsumerGLTextureExternalKHR(_dpy, _stream) \
    ({ \
        void *dst = remote_dma(sizeof(eglStreamConsumerGLTextureExternalKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglStreamConsumerGLTextureExternalKHR(dst, _dpy, _stream), &ret); \
        ret; \
    });
#define call_eglStreamConsumerGLTextureExternalKHR(packed, ret_v) do { \
    eglStreamConsumerGLTextureExternalKHR_PACKED *unpacked = (eglStreamConsumerGLTextureExternalKHR_PACKED *)packed; \
    eglStreamConsumerGLTextureExternalKHR_ARGS *args = (eglStreamConsumerGLTextureExternalKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglStreamConsumerGLTextureExternalKHR(args->dpy, args->stream);; \
    } else { \
        eglStreamConsumerGLTextureExternalKHR(args->dpy, args->stream);; \
    } \
} while(0)
EGLBoolean eglStreamConsumerGLTextureExternalKHR(eglStreamConsumerGLTextureExternalKHR_ARG_EXPAND);
packed_call_t *pack_eglStreamConsumerGLTextureExternalKHR(eglStreamConsumerGLTextureExternalKHR_PACKED *_dst eglStreamConsumerGLTextureExternalKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglStreamConsumerGLTextureExternalKHR_PTR)(eglStreamConsumerGLTextureExternalKHR_ARG_EXPAND);
#endif
#ifndef eglStreamConsumerReleaseKHR_RETURN
#define eglStreamConsumerReleaseKHR_RETURN EGLBoolean
#define eglStreamConsumerReleaseKHR_ARG_NAMES dpy, stream
#define eglStreamConsumerReleaseKHR_ARG_EXPAND EGLDisplay dpy, EGLStreamKHR stream
#define eglStreamConsumerReleaseKHR_ARG_NAMES_TAIL , dpy, stream
#define eglStreamConsumerReleaseKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLStreamKHR stream
#define forward_eglStreamConsumerReleaseKHR(_dpy, _stream) \
    ({ \
        void *dst = remote_dma(sizeof(eglStreamConsumerReleaseKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglStreamConsumerReleaseKHR(dst, _dpy, _stream), &ret); \
        ret; \
    });
#define call_eglStreamConsumerReleaseKHR(packed, ret_v) do { \
    eglStreamConsumerReleaseKHR_PACKED *unpacked = (eglStreamConsumerReleaseKHR_PACKED *)packed; \
    eglStreamConsumerReleaseKHR_ARGS *args = (eglStreamConsumerReleaseKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglStreamConsumerReleaseKHR(args->dpy, args->stream);; \
    } else { \
        eglStreamConsumerReleaseKHR(args->dpy, args->stream);; \
    } \
} while(0)
EGLBoolean eglStreamConsumerReleaseKHR(eglStreamConsumerReleaseKHR_ARG_EXPAND);
packed_call_t *pack_eglStreamConsumerReleaseKHR(eglStreamConsumerReleaseKHR_PACKED *_dst eglStreamConsumerReleaseKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglStreamConsumerReleaseKHR_PTR)(eglStreamConsumerReleaseKHR_ARG_EXPAND);
#endif
#ifndef eglSurfaceAttrib_RETURN
#define eglSurfaceAttrib_RETURN EGLBoolean
#define eglSurfaceAttrib_ARG_NAMES dpy, surface, attribute, value
#define eglSurfaceAttrib_ARG_EXPAND EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value
#define eglSurfaceAttrib_ARG_NAMES_TAIL , dpy, surface, attribute, value
#define eglSurfaceAttrib_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value
#define forward_eglSurfaceAttrib(_dpy, _surface, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(eglSurfaceAttrib_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglSurfaceAttrib(dst, _dpy, _surface, _attribute, _value), &ret); \
        ret; \
    });
#define call_eglSurfaceAttrib(packed, ret_v) do { \
    eglSurfaceAttrib_PACKED *unpacked = (eglSurfaceAttrib_PACKED *)packed; \
    eglSurfaceAttrib_ARGS *args = (eglSurfaceAttrib_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglSurfaceAttrib(args->dpy, args->surface, args->attribute, args->value);; \
    } else { \
        eglSurfaceAttrib(args->dpy, args->surface, args->attribute, args->value);; \
    } \
} while(0)
EGLBoolean eglSurfaceAttrib(eglSurfaceAttrib_ARG_EXPAND);
packed_call_t *pack_eglSurfaceAttrib(eglSurfaceAttrib_PACKED *_dst eglSurfaceAttrib_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglSurfaceAttrib_PTR)(eglSurfaceAttrib_ARG_EXPAND);
#endif
#ifndef eglSwapBuffers_RETURN
#define eglSwapBuffers_RETURN EGLBoolean
#define eglSwapBuffers_ARG_NAMES dpy, surface
#define eglSwapBuffers_ARG_EXPAND EGLDisplay dpy, EGLSurface surface
#define eglSwapBuffers_ARG_NAMES_TAIL , dpy, surface
#define eglSwapBuffers_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surface
#define forward_eglSwapBuffers(_dpy, _surface) \
    ({ \
        void *dst = remote_dma(sizeof(eglSwapBuffers_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglSwapBuffers(dst, _dpy, _surface), &ret); \
        ret; \
    });
#define call_eglSwapBuffers(packed, ret_v) do { \
    eglSwapBuffers_PACKED *unpacked = (eglSwapBuffers_PACKED *)packed; \
    eglSwapBuffers_ARGS *args = (eglSwapBuffers_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglSwapBuffers(args->dpy, args->surface);; \
    } else { \
        eglSwapBuffers(args->dpy, args->surface);; \
    } \
} while(0)
EGLBoolean eglSwapBuffers(eglSwapBuffers_ARG_EXPAND);
packed_call_t *pack_eglSwapBuffers(eglSwapBuffers_PACKED *_dst eglSwapBuffers_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglSwapBuffers_PTR)(eglSwapBuffers_ARG_EXPAND);
#endif
#ifndef eglSwapBuffersWithDamageEXT_RETURN
#define eglSwapBuffersWithDamageEXT_RETURN EGLBoolean
#define eglSwapBuffersWithDamageEXT_ARG_NAMES dpy, surface, rects, n_rects
#define eglSwapBuffersWithDamageEXT_ARG_EXPAND EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects
#define eglSwapBuffersWithDamageEXT_ARG_NAMES_TAIL , dpy, surface, rects, n_rects
#define eglSwapBuffersWithDamageEXT_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects
#define forward_eglSwapBuffersWithDamageEXT(_dpy, _surface, _rects, _n_rects) \
    ({ \
        void *dst = remote_dma(sizeof(eglSwapBuffersWithDamageEXT_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglSwapBuffersWithDamageEXT(dst, _dpy, _surface, _rects, _n_rects), &ret); \
        ret; \
    });
#define call_eglSwapBuffersWithDamageEXT(packed, ret_v) do { \
    eglSwapBuffersWithDamageEXT_PACKED *unpacked = (eglSwapBuffersWithDamageEXT_PACKED *)packed; \
    eglSwapBuffersWithDamageEXT_ARGS *args = (eglSwapBuffersWithDamageEXT_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglSwapBuffersWithDamageEXT(args->dpy, args->surface, args->rects, args->n_rects);; \
    } else { \
        eglSwapBuffersWithDamageEXT(args->dpy, args->surface, args->rects, args->n_rects);; \
    } \
} while(0)
EGLBoolean eglSwapBuffersWithDamageEXT(eglSwapBuffersWithDamageEXT_ARG_EXPAND);
packed_call_t *pack_eglSwapBuffersWithDamageEXT(eglSwapBuffersWithDamageEXT_PACKED *_dst eglSwapBuffersWithDamageEXT_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglSwapBuffersWithDamageEXT_PTR)(eglSwapBuffersWithDamageEXT_ARG_EXPAND);
#endif
#ifndef eglSwapInterval_RETURN
#define eglSwapInterval_RETURN EGLBoolean
#define eglSwapInterval_ARG_NAMES dpy, interval
#define eglSwapInterval_ARG_EXPAND EGLDisplay dpy, EGLint interval
#define eglSwapInterval_ARG_NAMES_TAIL , dpy, interval
#define eglSwapInterval_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLint interval
#define forward_eglSwapInterval(_dpy, _interval) \
    ({ \
        void *dst = remote_dma(sizeof(eglSwapInterval_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglSwapInterval(dst, _dpy, _interval), &ret); \
        ret; \
    });
#define call_eglSwapInterval(packed, ret_v) do { \
    eglSwapInterval_PACKED *unpacked = (eglSwapInterval_PACKED *)packed; \
    eglSwapInterval_ARGS *args = (eglSwapInterval_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglSwapInterval(args->dpy, args->interval);; \
    } else { \
        eglSwapInterval(args->dpy, args->interval);; \
    } \
} while(0)
EGLBoolean eglSwapInterval(eglSwapInterval_ARG_EXPAND);
packed_call_t *pack_eglSwapInterval(eglSwapInterval_PACKED *_dst eglSwapInterval_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglSwapInterval_PTR)(eglSwapInterval_ARG_EXPAND);
#endif
#ifndef eglTerminate_RETURN
#define eglTerminate_RETURN EGLBoolean
#define eglTerminate_ARG_NAMES dpy
#define eglTerminate_ARG_EXPAND EGLDisplay dpy
#define eglTerminate_ARG_NAMES_TAIL , dpy
#define eglTerminate_ARG_EXPAND_TAIL , EGLDisplay dpy
#define forward_eglTerminate(_dpy) \
    ({ \
        void *dst = remote_dma(sizeof(eglTerminate_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglTerminate(dst, _dpy), &ret); \
        ret; \
    });
#define call_eglTerminate(packed, ret_v) do { \
    eglTerminate_PACKED *unpacked = (eglTerminate_PACKED *)packed; \
    eglTerminate_ARGS *args = (eglTerminate_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglTerminate(args->dpy);; \
    } else { \
        eglTerminate(args->dpy);; \
    } \
} while(0)
EGLBoolean eglTerminate(eglTerminate_ARG_EXPAND);
packed_call_t *pack_eglTerminate(eglTerminate_PACKED *_dst eglTerminate_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglTerminate_PTR)(eglTerminate_ARG_EXPAND);
#endif
#ifndef eglUnlockSurfaceKHR_RETURN
#define eglUnlockSurfaceKHR_RETURN EGLBoolean
#define eglUnlockSurfaceKHR_ARG_NAMES display, surface
#define eglUnlockSurfaceKHR_ARG_EXPAND EGLDisplay display, EGLSurface surface
#define eglUnlockSurfaceKHR_ARG_NAMES_TAIL , display, surface
#define eglUnlockSurfaceKHR_ARG_EXPAND_TAIL , EGLDisplay display, EGLSurface surface
#define forward_eglUnlockSurfaceKHR(_display, _surface) \
    ({ \
        void *dst = remote_dma(sizeof(eglUnlockSurfaceKHR_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglUnlockSurfaceKHR(dst, _display, _surface), &ret); \
        ret; \
    });
#define call_eglUnlockSurfaceKHR(packed, ret_v) do { \
    eglUnlockSurfaceKHR_PACKED *unpacked = (eglUnlockSurfaceKHR_PACKED *)packed; \
    eglUnlockSurfaceKHR_ARGS *args = (eglUnlockSurfaceKHR_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglUnlockSurfaceKHR(args->display, args->surface);; \
    } else { \
        eglUnlockSurfaceKHR(args->display, args->surface);; \
    } \
} while(0)
EGLBoolean eglUnlockSurfaceKHR(eglUnlockSurfaceKHR_ARG_EXPAND);
packed_call_t *pack_eglUnlockSurfaceKHR(eglUnlockSurfaceKHR_PACKED *_dst eglUnlockSurfaceKHR_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglUnlockSurfaceKHR_PTR)(eglUnlockSurfaceKHR_ARG_EXPAND);
#endif
#ifndef eglWaitClient_RETURN
#define eglWaitClient_RETURN EGLBoolean
#define eglWaitClient_ARG_NAMES 
#define eglWaitClient_ARG_EXPAND 
#define eglWaitClient_ARG_NAMES_TAIL 
#define eglWaitClient_ARG_EXPAND_TAIL 
#define forward_eglWaitClient() \
    ({ \
        void *dst = remote_dma(sizeof(eglWaitClient_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglWaitClient(dst), &ret); \
        ret; \
    });
#define call_eglWaitClient(packed, ret_v) do { \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglWaitClient();; \
    } else { \
        eglWaitClient();; \
    } \
} while(0)
EGLBoolean eglWaitClient(eglWaitClient_ARG_EXPAND);
packed_call_t *pack_eglWaitClient(eglWaitClient_PACKED *_dst eglWaitClient_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglWaitClient_PTR)(eglWaitClient_ARG_EXPAND);
#endif
#ifndef eglWaitGL_RETURN
#define eglWaitGL_RETURN EGLBoolean
#define eglWaitGL_ARG_NAMES 
#define eglWaitGL_ARG_EXPAND 
#define eglWaitGL_ARG_NAMES_TAIL 
#define eglWaitGL_ARG_EXPAND_TAIL 
#define forward_eglWaitGL() \
    ({ \
        void *dst = remote_dma(sizeof(eglWaitGL_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglWaitGL(dst), &ret); \
        ret; \
    });
#define call_eglWaitGL(packed, ret_v) do { \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglWaitGL();; \
    } else { \
        eglWaitGL();; \
    } \
} while(0)
EGLBoolean eglWaitGL(eglWaitGL_ARG_EXPAND);
packed_call_t *pack_eglWaitGL(eglWaitGL_PACKED *_dst eglWaitGL_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglWaitGL_PTR)(eglWaitGL_ARG_EXPAND);
#endif
#ifndef eglWaitNative_RETURN
#define eglWaitNative_RETURN EGLBoolean
#define eglWaitNative_ARG_NAMES engine
#define eglWaitNative_ARG_EXPAND EGLint engine
#define eglWaitNative_ARG_NAMES_TAIL , engine
#define eglWaitNative_ARG_EXPAND_TAIL , EGLint engine
#define forward_eglWaitNative(_engine) \
    ({ \
        void *dst = remote_dma(sizeof(eglWaitNative_PACKED)); \
        EGLBoolean ret = (EGLBoolean)0; \
        remote_dma_send((packed_call_t *)pack_eglWaitNative(dst, _engine), &ret); \
        ret; \
    });
#define call_eglWaitNative(packed, ret_v) do { \
    eglWaitNative_PACKED *unpacked = (eglWaitNative_PACKED *)packed; \
    eglWaitNative_ARGS *args = (eglWaitNative_ARGS *)&unpacked->args; \
    EGLBoolean *ret = (EGLBoolean *)ret_v; \
    if (ret != NULL) { \
        *ret = eglWaitNative(args->engine);; \
    } else { \
        eglWaitNative(args->engine);; \
    } \
} while(0)
EGLBoolean eglWaitNative(eglWaitNative_ARG_EXPAND);
packed_call_t *pack_eglWaitNative(eglWaitNative_PACKED *_dst eglWaitNative_ARG_EXPAND_TAIL);
typedef EGLBoolean (*eglWaitNative_PTR)(eglWaitNative_ARG_EXPAND);
#endif
#ifndef eglWaitSyncKHR_RETURN
#define eglWaitSyncKHR_RETURN EGLint
#define eglWaitSyncKHR_ARG_NAMES dpy, sync, flags
#define eglWaitSyncKHR_ARG_EXPAND EGLDisplay dpy, EGLSyncKHR sync, EGLint flags
#define eglWaitSyncKHR_ARG_NAMES_TAIL , dpy, sync, flags
#define eglWaitSyncKHR_ARG_EXPAND_TAIL , EGLDisplay dpy, EGLSyncKHR sync, EGLint flags
#define forward_eglWaitSyncKHR(_dpy, _sync, _flags) \
    ({ \
        void *dst = remote_dma(sizeof(eglWaitSyncKHR_PACKED)); \
        EGLint ret = (EGLint)0; \
        remote_dma_send((packed_call_t *)pack_eglWaitSyncKHR(dst, _dpy, _sync, _flags), &ret); \
        ret; \
    });
#define call_eglWaitSyncKHR(packed, ret_v) do { \
    eglWaitSyncKHR_PACKED *unpacked = (eglWaitSyncKHR_PACKED *)packed; \
    eglWaitSyncKHR_ARGS *args = (eglWaitSyncKHR_ARGS *)&unpacked->args; \
    EGLint *ret = (EGLint *)ret_v; \
    if (ret != NULL) { \
        *ret = eglWaitSyncKHR(args->dpy, args->sync, args->flags);; \
    } else { \
        eglWaitSyncKHR(args->dpy, args->sync, args->flags);; \
    } \
} while(0)
EGLint eglWaitSyncKHR(eglWaitSyncKHR_ARG_EXPAND);
packed_call_t *pack_eglWaitSyncKHR(eglWaitSyncKHR_PACKED *_dst eglWaitSyncKHR_ARG_EXPAND_TAIL);
typedef EGLint (*eglWaitSyncKHR_PTR)(eglWaitSyncKHR_ARG_EXPAND);
#endif

#endif

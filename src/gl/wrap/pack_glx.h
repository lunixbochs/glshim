#include "../types.h"
#ifndef PACK_GLX_H
#define PACK_GLX_H

#ifndef glXAssociateDMPbufferSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXPbufferSGIX pbuffer;
    DMparams * params;
    DMbuffer dmbuffer;
} glXAssociateDMPbufferSGIX_ARGS;
typedef struct {
    int index;
    glXAssociateDMPbufferSGIX_ARGS args;
} glXAssociateDMPbufferSGIX_PACKED;
#endif
#ifndef glXBindChannelToWindowSGIX_RETURN
typedef struct {
    Display * display;
    int screen;
    int channel;
    Window window;
} glXBindChannelToWindowSGIX_ARGS;
typedef struct {
    int index;
    glXBindChannelToWindowSGIX_ARGS args;
} glXBindChannelToWindowSGIX_PACKED;
#endif
#ifndef glXBindHyperpipeSGIX_RETURN
typedef struct {
    Display * dpy;
    int hpId;
} glXBindHyperpipeSGIX_ARGS;
typedef struct {
    int index;
    glXBindHyperpipeSGIX_ARGS args;
} glXBindHyperpipeSGIX_PACKED;
#endif
#ifndef glXBindSwapBarrierNV_RETURN
typedef struct {
    Display * dpy;
    GLuint group;
    GLuint barrier;
} glXBindSwapBarrierNV_ARGS;
typedef struct {
    int index;
    glXBindSwapBarrierNV_ARGS args;
} glXBindSwapBarrierNV_PACKED;
#endif
#ifndef glXBindSwapBarrierSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    int barrier;
} glXBindSwapBarrierSGIX_ARGS;
typedef struct {
    int index;
    glXBindSwapBarrierSGIX_ARGS args;
} glXBindSwapBarrierSGIX_PACKED;
#endif
#ifndef glXBindTexImageEXT_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    int buffer;
    int * attrib_list;
} glXBindTexImageEXT_ARGS;
typedef struct {
    int index;
    glXBindTexImageEXT_ARGS args;
} glXBindTexImageEXT_PACKED;
#endif
#ifndef glXBindVideoCaptureDeviceNV_RETURN
typedef struct {
    Display * dpy;
    unsigned int video_capture_slot;
    GLXVideoCaptureDeviceNV device;
} glXBindVideoCaptureDeviceNV_ARGS;
typedef struct {
    int index;
    glXBindVideoCaptureDeviceNV_ARGS args;
} glXBindVideoCaptureDeviceNV_PACKED;
#endif
#ifndef glXBindVideoDeviceNV_RETURN
typedef struct {
    Display * dpy;
    unsigned int video_slot;
    unsigned int video_device;
    int * attrib_list;
} glXBindVideoDeviceNV_ARGS;
typedef struct {
    int index;
    glXBindVideoDeviceNV_ARGS args;
} glXBindVideoDeviceNV_PACKED;
#endif
#ifndef glXBindVideoImageNV_RETURN
typedef struct {
    Display * dpy;
    GLXVideoDeviceNV VideoDevice;
    GLXPbuffer pbuf;
    int iVideoBuffer;
} glXBindVideoImageNV_ARGS;
typedef struct {
    int index;
    glXBindVideoImageNV_ARGS args;
} glXBindVideoImageNV_PACKED;
#endif
#ifndef glXChangeDrawableAttributes_RETURN
typedef struct {
    uint32_t drawable;
} glXChangeDrawableAttributes_ARGS;
typedef struct {
    int index;
    glXChangeDrawableAttributes_ARGS args;
} glXChangeDrawableAttributes_PACKED;
#endif
#ifndef glXChangeDrawableAttributesSGIX_RETURN
typedef struct {
    uint32_t drawable;
} glXChangeDrawableAttributesSGIX_ARGS;
typedef struct {
    int index;
    glXChangeDrawableAttributesSGIX_ARGS args;
} glXChangeDrawableAttributesSGIX_PACKED;
#endif
#ifndef glXChannelRectSGIX_RETURN
typedef struct {
    Display * display;
    int screen;
    int channel;
    int x;
    int y;
    int w;
    int h;
} glXChannelRectSGIX_ARGS;
typedef struct {
    int index;
    glXChannelRectSGIX_ARGS args;
} glXChannelRectSGIX_PACKED;
#endif
#ifndef glXChannelRectSyncSGIX_RETURN
typedef struct {
    Display * display;
    int screen;
    int channel;
    GLenum synctype;
} glXChannelRectSyncSGIX_ARGS;
typedef struct {
    int index;
    glXChannelRectSyncSGIX_ARGS args;
} glXChannelRectSyncSGIX_PACKED;
#endif
#ifndef glXChooseFBConfig_RETURN
typedef struct {
    Display * dpy;
    int screen;
    int * attrib_list;
    int * nelements;
} glXChooseFBConfig_ARGS;
typedef struct {
    int index;
    glXChooseFBConfig_ARGS args;
} glXChooseFBConfig_PACKED;
#endif
#ifndef glXChooseFBConfigSGIX_RETURN
typedef struct {
    Display * dpy;
    int screen;
    int * attrib_list;
    int * nelements;
} glXChooseFBConfigSGIX_ARGS;
typedef struct {
    int index;
    glXChooseFBConfigSGIX_ARGS args;
} glXChooseFBConfigSGIX_PACKED;
#endif
#ifndef glXChooseVisual_RETURN
typedef struct {
    Display * dpy;
    int screen;
    int * attribList;
} glXChooseVisual_ARGS;
typedef struct {
    int index;
    glXChooseVisual_ARGS args;
} glXChooseVisual_PACKED;
#endif
#ifndef glXClientInfo_RETURN
typedef struct {
    int index;
} glXClientInfo_PACKED;
#endif
#ifndef glXCopyContext_RETURN
typedef struct {
    Display * dpy;
    GLXContext src;
    GLXContext dst;
    unsigned long mask;
} glXCopyContext_ARGS;
typedef struct {
    int index;
    glXCopyContext_ARGS args;
} glXCopyContext_PACKED;
#endif
#ifndef glXCopyImageSubDataNV_RETURN
typedef struct {
    Display * dpy;
    GLXContext srcCtx;
    GLuint srcName;
    GLenum srcTarget;
    GLint srcLevel;
    GLint srcX;
    GLint srcY;
    GLint srcZ;
    GLXContext dstCtx;
    GLuint dstName;
    GLenum dstTarget;
    GLint dstLevel;
    GLint dstX;
    GLint dstY;
    GLint dstZ;
    GLsizei width;
    GLsizei height;
    GLsizei depth;
} glXCopyImageSubDataNV_ARGS;
typedef struct {
    int index;
    glXCopyImageSubDataNV_ARGS args;
} glXCopyImageSubDataNV_PACKED;
#endif
#ifndef glXCopySubBufferMESA_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    int x;
    int y;
    int width;
    int height;
} glXCopySubBufferMESA_ARGS;
typedef struct {
    int index;
    glXCopySubBufferMESA_ARGS args;
} glXCopySubBufferMESA_PACKED;
#endif
#ifndef glXCreateContext_RETURN
typedef struct {
    Display * dpy;
    XVisualInfo * vis;
    GLXContext shareList;
    Bool direct;
} glXCreateContext_ARGS;
typedef struct {
    int index;
    glXCreateContext_ARGS args;
} glXCreateContext_PACKED;
#endif
#ifndef glXCreateContextAttribsARB_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfig config;
    GLXContext share_context;
    Bool direct;
    int * attrib_list;
} glXCreateContextAttribsARB_ARGS;
typedef struct {
    int index;
    glXCreateContextAttribsARB_ARGS args;
} glXCreateContextAttribsARB_PACKED;
#endif
#ifndef glXCreateContextWithConfigSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfigSGIX config;
    int render_type;
    GLXContext share_list;
    Bool direct;
} glXCreateContextWithConfigSGIX_ARGS;
typedef struct {
    int index;
    glXCreateContextWithConfigSGIX_ARGS args;
} glXCreateContextWithConfigSGIX_PACKED;
#endif
#ifndef glXCreateGLXPbufferSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfigSGIX config;
    unsigned int width;
    unsigned int height;
    int * attrib_list;
} glXCreateGLXPbufferSGIX_ARGS;
typedef struct {
    int index;
    glXCreateGLXPbufferSGIX_ARGS args;
} glXCreateGLXPbufferSGIX_PACKED;
#endif
#ifndef glXCreateGLXPixmap_RETURN
typedef struct {
    Display * dpy;
    XVisualInfo * visual;
    Pixmap pixmap;
} glXCreateGLXPixmap_ARGS;
typedef struct {
    int index;
    glXCreateGLXPixmap_ARGS args;
} glXCreateGLXPixmap_PACKED;
#endif
#ifndef glXCreateGLXPixmapMESA_RETURN
typedef struct {
    Display * dpy;
    XVisualInfo * visual;
    Pixmap pixmap;
    Colormap cmap;
} glXCreateGLXPixmapMESA_ARGS;
typedef struct {
    int index;
    glXCreateGLXPixmapMESA_ARGS args;
} glXCreateGLXPixmapMESA_PACKED;
#endif
#ifndef glXCreateGLXPixmapWithConfigSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfigSGIX config;
    Pixmap pixmap;
} glXCreateGLXPixmapWithConfigSGIX_ARGS;
typedef struct {
    int index;
    glXCreateGLXPixmapWithConfigSGIX_ARGS args;
} glXCreateGLXPixmapWithConfigSGIX_PACKED;
#endif
#ifndef glXCreateGLXVideoSourceSGIX_RETURN
typedef struct {
    Display * display;
    int screen;
    VLServer server;
    VLPath path;
    int nodeClass;
    VLNode drainNode;
} glXCreateGLXVideoSourceSGIX_ARGS;
typedef struct {
    int index;
    glXCreateGLXVideoSourceSGIX_ARGS args;
} glXCreateGLXVideoSourceSGIX_PACKED;
#endif
#ifndef glXCreateNewContext_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfig config;
    int render_type;
    GLXContext share_list;
    Bool direct;
} glXCreateNewContext_ARGS;
typedef struct {
    int index;
    glXCreateNewContext_ARGS args;
} glXCreateNewContext_PACKED;
#endif
#ifndef glXCreatePbuffer_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfig config;
    int * attrib_list;
} glXCreatePbuffer_ARGS;
typedef struct {
    int index;
    glXCreatePbuffer_ARGS args;
} glXCreatePbuffer_PACKED;
#endif
#ifndef glXCreatePixmap_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfig config;
    Pixmap pixmap;
    int * attrib_list;
} glXCreatePixmap_ARGS;
typedef struct {
    int index;
    glXCreatePixmap_ARGS args;
} glXCreatePixmap_PACKED;
#endif
#ifndef glXCreateWindow_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfig config;
    Window win;
    int * attrib_list;
} glXCreateWindow_ARGS;
typedef struct {
    int index;
    glXCreateWindow_ARGS args;
} glXCreateWindow_PACKED;
#endif
#ifndef glXCushionSGI_RETURN
typedef struct {
    Display * dpy;
    Window window;
    float cushion;
} glXCushionSGI_ARGS;
typedef struct {
    int index;
    glXCushionSGI_ARGS args;
} glXCushionSGI_PACKED;
#endif
#ifndef glXDestroyContext_RETURN
typedef struct {
    Display * dpy;
    GLXContext ctx;
} glXDestroyContext_ARGS;
typedef struct {
    int index;
    glXDestroyContext_ARGS args;
} glXDestroyContext_PACKED;
#endif
#ifndef glXDestroyGLXPbufferSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXPbufferSGIX pbuf;
} glXDestroyGLXPbufferSGIX_ARGS;
typedef struct {
    int index;
    glXDestroyGLXPbufferSGIX_ARGS args;
} glXDestroyGLXPbufferSGIX_PACKED;
#endif
#ifndef glXDestroyGLXPixmap_RETURN
typedef struct {
    Display * dpy;
    GLXPixmap pixmap;
} glXDestroyGLXPixmap_ARGS;
typedef struct {
    int index;
    glXDestroyGLXPixmap_ARGS args;
} glXDestroyGLXPixmap_PACKED;
#endif
#ifndef glXDestroyGLXVideoSourceSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXVideoSourceSGIX glxvideosource;
} glXDestroyGLXVideoSourceSGIX_ARGS;
typedef struct {
    int index;
    glXDestroyGLXVideoSourceSGIX_ARGS args;
} glXDestroyGLXVideoSourceSGIX_PACKED;
#endif
#ifndef glXDestroyHyperpipeConfigSGIX_RETURN
typedef struct {
    Display * dpy;
    int hpId;
} glXDestroyHyperpipeConfigSGIX_ARGS;
typedef struct {
    int index;
    glXDestroyHyperpipeConfigSGIX_ARGS args;
} glXDestroyHyperpipeConfigSGIX_PACKED;
#endif
#ifndef glXDestroyPbuffer_RETURN
typedef struct {
    Display * dpy;
    GLXPbuffer pbuf;
} glXDestroyPbuffer_ARGS;
typedef struct {
    int index;
    glXDestroyPbuffer_ARGS args;
} glXDestroyPbuffer_PACKED;
#endif
#ifndef glXDestroyPixmap_RETURN
typedef struct {
    Display * dpy;
    GLXPixmap pixmap;
} glXDestroyPixmap_ARGS;
typedef struct {
    int index;
    glXDestroyPixmap_ARGS args;
} glXDestroyPixmap_PACKED;
#endif
#ifndef glXDestroyWindow_RETURN
typedef struct {
    Display * dpy;
    GLXWindow win;
} glXDestroyWindow_ARGS;
typedef struct {
    int index;
    glXDestroyWindow_ARGS args;
} glXDestroyWindow_PACKED;
#endif
#ifndef glXEnumerateVideoCaptureDevicesNV_RETURN
typedef struct {
    Display * dpy;
    int screen;
    int * nelements;
} glXEnumerateVideoCaptureDevicesNV_ARGS;
typedef struct {
    int index;
    glXEnumerateVideoCaptureDevicesNV_ARGS args;
} glXEnumerateVideoCaptureDevicesNV_PACKED;
#endif
#ifndef glXEnumerateVideoDevicesNV_RETURN
typedef struct {
    Display * dpy;
    int screen;
    int * nelements;
} glXEnumerateVideoDevicesNV_ARGS;
typedef struct {
    int index;
    glXEnumerateVideoDevicesNV_ARGS args;
} glXEnumerateVideoDevicesNV_PACKED;
#endif
#ifndef glXFreeContextEXT_RETURN
typedef struct {
    Display * dpy;
    GLXContext context;
} glXFreeContextEXT_ARGS;
typedef struct {
    int index;
    glXFreeContextEXT_ARGS args;
} glXFreeContextEXT_PACKED;
#endif
#ifndef glXGetAGPOffsetMESA_RETURN
typedef struct {
    void * pointer;
} glXGetAGPOffsetMESA_ARGS;
typedef struct {
    int index;
    glXGetAGPOffsetMESA_ARGS args;
} glXGetAGPOffsetMESA_PACKED;
#endif
#ifndef glXGetClientString_RETURN
typedef struct {
    Display * display;
    int name;
} glXGetClientString_ARGS;
typedef struct {
    int index;
    glXGetClientString_ARGS args;
} glXGetClientString_PACKED;
#endif
#ifndef glXGetConfig_RETURN
typedef struct {
    Display * display;
    XVisualInfo * visual;
    int attribute;
    int * value;
} glXGetConfig_ARGS;
typedef struct {
    int index;
    glXGetConfig_ARGS args;
} glXGetConfig_PACKED;
#endif
#ifndef glXGetContextIDEXT_RETURN
typedef struct {
    GLXContext context;
} glXGetContextIDEXT_ARGS;
typedef struct {
    int index;
    glXGetContextIDEXT_ARGS args;
} glXGetContextIDEXT_PACKED;
#endif
#ifndef glXGetCurrentContext_RETURN
typedef struct {
    int index;
} glXGetCurrentContext_PACKED;
#endif
#ifndef glXGetCurrentDisplay_RETURN
typedef struct {
    int index;
} glXGetCurrentDisplay_PACKED;
#endif
#ifndef glXGetCurrentDisplayEXT_RETURN
typedef struct {
    int index;
} glXGetCurrentDisplayEXT_PACKED;
#endif
#ifndef glXGetCurrentDrawable_RETURN
typedef struct {
    int index;
} glXGetCurrentDrawable_PACKED;
#endif
#ifndef glXGetCurrentReadDrawable_RETURN
typedef struct {
    int index;
} glXGetCurrentReadDrawable_PACKED;
#endif
#ifndef glXGetCurrentReadDrawableSGI_RETURN
typedef struct {
    int index;
} glXGetCurrentReadDrawableSGI_PACKED;
#endif
#ifndef glXGetDrawableAttributes_RETURN
typedef struct {
    uint32_t drawable;
} glXGetDrawableAttributes_ARGS;
typedef struct {
    int index;
    glXGetDrawableAttributes_ARGS args;
} glXGetDrawableAttributes_PACKED;
#endif
#ifndef glXGetDrawableAttributesSGIX_RETURN
typedef struct {
    uint32_t drawable;
} glXGetDrawableAttributesSGIX_ARGS;
typedef struct {
    int index;
    glXGetDrawableAttributesSGIX_ARGS args;
} glXGetDrawableAttributesSGIX_PACKED;
#endif
#ifndef glXGetFBConfigAttrib_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfig config;
    int attribute;
    int * value;
} glXGetFBConfigAttrib_ARGS;
typedef struct {
    int index;
    glXGetFBConfigAttrib_ARGS args;
} glXGetFBConfigAttrib_PACKED;
#endif
#ifndef glXGetFBConfigAttribSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfigSGIX config;
    int attribute;
    int * value;
} glXGetFBConfigAttribSGIX_ARGS;
typedef struct {
    int index;
    glXGetFBConfigAttribSGIX_ARGS args;
} glXGetFBConfigAttribSGIX_PACKED;
#endif
#ifndef glXGetFBConfigFromVisualSGIX_RETURN
typedef struct {
    Display * dpy;
    XVisualInfo * vis;
} glXGetFBConfigFromVisualSGIX_ARGS;
typedef struct {
    int index;
    glXGetFBConfigFromVisualSGIX_ARGS args;
} glXGetFBConfigFromVisualSGIX_PACKED;
#endif
#ifndef glXGetFBConfigs_RETURN
typedef struct {
    Display * dpy;
    int screen;
    int * nelements;
} glXGetFBConfigs_ARGS;
typedef struct {
    int index;
    glXGetFBConfigs_ARGS args;
} glXGetFBConfigs_PACKED;
#endif
#ifndef glXGetFBConfigsSGIX_RETURN
typedef struct {
    int index;
} glXGetFBConfigsSGIX_PACKED;
#endif
#ifndef glXGetMscRateOML_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    int32_t * numerator;
    int32_t * denominator;
} glXGetMscRateOML_ARGS;
typedef struct {
    int index;
    glXGetMscRateOML_ARGS args;
} glXGetMscRateOML_PACKED;
#endif
#ifndef glXGetProcAddress_RETURN
typedef struct {
    GLubyte * procName;
} glXGetProcAddress_ARGS;
typedef struct {
    int index;
    glXGetProcAddress_ARGS args;
} glXGetProcAddress_PACKED;
#endif
#ifndef glXGetProcAddressARB_RETURN
typedef struct {
    GLubyte * procName;
} glXGetProcAddressARB_ARGS;
typedef struct {
    int index;
    glXGetProcAddressARB_ARGS args;
} glXGetProcAddressARB_PACKED;
#endif
#ifndef glXGetSelectedEvent_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable draw;
    unsigned long * event_mask;
} glXGetSelectedEvent_ARGS;
typedef struct {
    int index;
    glXGetSelectedEvent_ARGS args;
} glXGetSelectedEvent_PACKED;
#endif
#ifndef glXGetSelectedEventSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    unsigned long * mask;
} glXGetSelectedEventSGIX_ARGS;
typedef struct {
    int index;
    glXGetSelectedEventSGIX_ARGS args;
} glXGetSelectedEventSGIX_PACKED;
#endif
#ifndef glXGetSyncValuesOML_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    int64_t * ust;
    int64_t * msc;
    int64_t * sbc;
} glXGetSyncValuesOML_ARGS;
typedef struct {
    int index;
    glXGetSyncValuesOML_ARGS args;
} glXGetSyncValuesOML_PACKED;
#endif
#ifndef glXGetTransparentIndexSUN_RETURN
typedef struct {
    Display * dpy;
    Window overlay;
    Window underlay;
    long * pTransparentIndex;
} glXGetTransparentIndexSUN_ARGS;
typedef struct {
    int index;
    glXGetTransparentIndexSUN_ARGS args;
} glXGetTransparentIndexSUN_PACKED;
#endif
#ifndef glXGetVideoDeviceNV_RETURN
typedef struct {
    Display * dpy;
    int screen;
    int numVideoDevices;
    GLXVideoDeviceNV * pVideoDevice;
} glXGetVideoDeviceNV_ARGS;
typedef struct {
    int index;
    glXGetVideoDeviceNV_ARGS args;
} glXGetVideoDeviceNV_PACKED;
#endif
#ifndef glXGetVideoInfoNV_RETURN
typedef struct {
    Display * dpy;
    int screen;
    GLXVideoDeviceNV VideoDevice;
    unsigned long * pulCounterOutputPbuffer;
    unsigned long * pulCounterOutputVideo;
} glXGetVideoInfoNV_ARGS;
typedef struct {
    int index;
    glXGetVideoInfoNV_ARGS args;
} glXGetVideoInfoNV_PACKED;
#endif
#ifndef glXGetVideoSyncSGI_RETURN
typedef struct {
    unsigned int * count;
} glXGetVideoSyncSGI_ARGS;
typedef struct {
    int index;
    glXGetVideoSyncSGI_ARGS args;
} glXGetVideoSyncSGI_PACKED;
#endif
#ifndef glXGetVisualConfigs_RETURN
typedef struct {
    int index;
} glXGetVisualConfigs_PACKED;
#endif
#ifndef glXGetVisualFromFBConfig_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfig config;
} glXGetVisualFromFBConfig_ARGS;
typedef struct {
    int index;
    glXGetVisualFromFBConfig_ARGS args;
} glXGetVisualFromFBConfig_PACKED;
#endif
#ifndef glXGetVisualFromFBConfigSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXFBConfigSGIX config;
} glXGetVisualFromFBConfigSGIX_ARGS;
typedef struct {
    int index;
    glXGetVisualFromFBConfigSGIX_ARGS args;
} glXGetVisualFromFBConfigSGIX_PACKED;
#endif
#ifndef glXHyperpipeAttribSGIX_RETURN
typedef struct {
    Display * dpy;
    int timeSlice;
    int attrib;
    int size;
    void * attribList;
} glXHyperpipeAttribSGIX_ARGS;
typedef struct {
    int index;
    glXHyperpipeAttribSGIX_ARGS args;
} glXHyperpipeAttribSGIX_PACKED;
#endif
#ifndef glXHyperpipeConfigSGIX_RETURN
typedef struct {
    Display * dpy;
    int networkId;
    int npipes;
    GLXHyperpipeConfigSGIX * cfg;
    int * hpId;
} glXHyperpipeConfigSGIX_ARGS;
typedef struct {
    int index;
    glXHyperpipeConfigSGIX_ARGS args;
} glXHyperpipeConfigSGIX_PACKED;
#endif
#ifndef glXImportContextEXT_RETURN
typedef struct {
    Display * dpy;
    GLXContextID contextID;
} glXImportContextEXT_ARGS;
typedef struct {
    int index;
    glXImportContextEXT_ARGS args;
} glXImportContextEXT_PACKED;
#endif
#ifndef glXIsDirect_RETURN
typedef struct {
    Display * dpy;
    GLXContext ctx;
} glXIsDirect_ARGS;
typedef struct {
    int index;
    glXIsDirect_ARGS args;
} glXIsDirect_PACKED;
#endif
#ifndef glXJoinSwapGroupNV_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    GLuint group;
} glXJoinSwapGroupNV_ARGS;
typedef struct {
    int index;
    glXJoinSwapGroupNV_ARGS args;
} glXJoinSwapGroupNV_PACKED;
#endif
#ifndef glXJoinSwapGroupSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    GLXDrawable member;
} glXJoinSwapGroupSGIX_ARGS;
typedef struct {
    int index;
    glXJoinSwapGroupSGIX_ARGS args;
} glXJoinSwapGroupSGIX_PACKED;
#endif
#ifndef glXLockVideoCaptureDeviceNV_RETURN
typedef struct {
    Display * dpy;
    GLXVideoCaptureDeviceNV device;
} glXLockVideoCaptureDeviceNV_ARGS;
typedef struct {
    int index;
    glXLockVideoCaptureDeviceNV_ARGS args;
} glXLockVideoCaptureDeviceNV_PACKED;
#endif
#ifndef glXMakeContextCurrent_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable draw;
    GLXDrawable read;
    GLXContext ctx;
} glXMakeContextCurrent_ARGS;
typedef struct {
    int index;
    glXMakeContextCurrent_ARGS args;
} glXMakeContextCurrent_PACKED;
#endif
#ifndef glXMakeCurrent_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    GLXContext ctx;
} glXMakeCurrent_ARGS;
typedef struct {
    int index;
    glXMakeCurrent_ARGS args;
} glXMakeCurrent_PACKED;
#endif
#ifndef glXMakeCurrentReadSGI_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable draw;
    GLXDrawable read;
    GLXContext ctx;
} glXMakeCurrentReadSGI_ARGS;
typedef struct {
    int index;
    glXMakeCurrentReadSGI_ARGS args;
} glXMakeCurrentReadSGI_PACKED;
#endif
#ifndef glXQueryChannelDeltasSGIX_RETURN
typedef struct {
    Display * display;
    int screen;
    int channel;
    int * x;
    int * y;
    int * w;
    int * h;
} glXQueryChannelDeltasSGIX_ARGS;
typedef struct {
    int index;
    glXQueryChannelDeltasSGIX_ARGS args;
} glXQueryChannelDeltasSGIX_PACKED;
#endif
#ifndef glXQueryChannelRectSGIX_RETURN
typedef struct {
    Display * display;
    int screen;
    int channel;
    int * dx;
    int * dy;
    int * dw;
    int * dh;
} glXQueryChannelRectSGIX_ARGS;
typedef struct {
    int index;
    glXQueryChannelRectSGIX_ARGS args;
} glXQueryChannelRectSGIX_PACKED;
#endif
#ifndef glXQueryContext_RETURN
typedef struct {
    Display * dpy;
    GLXContext ctx;
    int attribute;
    int * value;
} glXQueryContext_ARGS;
typedef struct {
    int index;
    glXQueryContext_ARGS args;
} glXQueryContext_PACKED;
#endif
#ifndef glXQueryContextInfoEXT_RETURN
typedef struct {
    Display * dpy;
    GLXContext context;
    int attribute;
    int * value;
} glXQueryContextInfoEXT_ARGS;
typedef struct {
    int index;
    glXQueryContextInfoEXT_ARGS args;
} glXQueryContextInfoEXT_PACKED;
#endif
#ifndef glXQueryDrawable_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable draw;
    int attribute;
    unsigned int * value;
} glXQueryDrawable_ARGS;
typedef struct {
    int index;
    glXQueryDrawable_ARGS args;
} glXQueryDrawable_PACKED;
#endif
#ifndef glXQueryExtension_RETURN
typedef struct {
    Display * display;
    int * errorBase;
    int * eventBase;
} glXQueryExtension_ARGS;
typedef struct {
    int index;
    glXQueryExtension_ARGS args;
} glXQueryExtension_PACKED;
#endif
#ifndef glXQueryExtensionsString_RETURN
typedef struct {
    Display * dpy;
    int screen;
} glXQueryExtensionsString_ARGS;
typedef struct {
    int index;
    glXQueryExtensionsString_ARGS args;
} glXQueryExtensionsString_PACKED;
#endif
#ifndef glXQueryFrameCountNV_RETURN
typedef struct {
    Display * dpy;
    int screen;
    GLuint * count;
} glXQueryFrameCountNV_ARGS;
typedef struct {
    int index;
    glXQueryFrameCountNV_ARGS args;
} glXQueryFrameCountNV_PACKED;
#endif
#ifndef glXQueryGLXPbufferSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXPbufferSGIX pbuf;
    int attribute;
    unsigned int * value;
} glXQueryGLXPbufferSGIX_ARGS;
typedef struct {
    int index;
    glXQueryGLXPbufferSGIX_ARGS args;
} glXQueryGLXPbufferSGIX_PACKED;
#endif
#ifndef glXQueryHyperpipeAttribSGIX_RETURN
typedef struct {
    Display * dpy;
    int timeSlice;
    int attrib;
    int size;
    void * returnAttribList;
} glXQueryHyperpipeAttribSGIX_ARGS;
typedef struct {
    int index;
    glXQueryHyperpipeAttribSGIX_ARGS args;
} glXQueryHyperpipeAttribSGIX_PACKED;
#endif
#ifndef glXQueryHyperpipeBestAttribSGIX_RETURN
typedef struct {
    Display * dpy;
    int timeSlice;
    int attrib;
    int size;
    void * attribList;
    void * returnAttribList;
} glXQueryHyperpipeBestAttribSGIX_ARGS;
typedef struct {
    int index;
    glXQueryHyperpipeBestAttribSGIX_ARGS args;
} glXQueryHyperpipeBestAttribSGIX_PACKED;
#endif
#ifndef glXQueryHyperpipeConfigSGIX_RETURN
typedef struct {
    Display * dpy;
    int hpId;
    int * npipes;
} glXQueryHyperpipeConfigSGIX_ARGS;
typedef struct {
    int index;
    glXQueryHyperpipeConfigSGIX_ARGS args;
} glXQueryHyperpipeConfigSGIX_PACKED;
#endif
#ifndef glXQueryHyperpipeNetworkSGIX_RETURN
typedef struct {
    Display * dpy;
    int * npipes;
} glXQueryHyperpipeNetworkSGIX_ARGS;
typedef struct {
    int index;
    glXQueryHyperpipeNetworkSGIX_ARGS args;
} glXQueryHyperpipeNetworkSGIX_PACKED;
#endif
#ifndef glXQueryMaxSwapBarriersSGIX_RETURN
typedef struct {
    Display * dpy;
    int screen;
    int * max;
} glXQueryMaxSwapBarriersSGIX_ARGS;
typedef struct {
    int index;
    glXQueryMaxSwapBarriersSGIX_ARGS args;
} glXQueryMaxSwapBarriersSGIX_PACKED;
#endif
#ifndef glXQueryMaxSwapGroupsNV_RETURN
typedef struct {
    Display * dpy;
    int screen;
    GLuint * maxGroups;
    GLuint * maxBarriers;
} glXQueryMaxSwapGroupsNV_ARGS;
typedef struct {
    int index;
    glXQueryMaxSwapGroupsNV_ARGS args;
} glXQueryMaxSwapGroupsNV_PACKED;
#endif
#ifndef glXQueryServerString_RETURN
typedef struct {
    Display * dpy;
    int screen;
    int name;
} glXQueryServerString_ARGS;
typedef struct {
    int index;
    glXQueryServerString_ARGS args;
} glXQueryServerString_PACKED;
#endif
#ifndef glXQuerySwapGroupNV_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    GLuint * group;
    GLuint * barrier;
} glXQuerySwapGroupNV_ARGS;
typedef struct {
    int index;
    glXQuerySwapGroupNV_ARGS args;
} glXQuerySwapGroupNV_PACKED;
#endif
#ifndef glXQueryVersion_RETURN
typedef struct {
    Display * dpy;
    int * maj;
    int * min;
} glXQueryVersion_ARGS;
typedef struct {
    int index;
    glXQueryVersion_ARGS args;
} glXQueryVersion_PACKED;
#endif
#ifndef glXQueryVideoCaptureDeviceNV_RETURN
typedef struct {
    Display * dpy;
    GLXVideoCaptureDeviceNV device;
    int attribute;
    int * value;
} glXQueryVideoCaptureDeviceNV_ARGS;
typedef struct {
    int index;
    glXQueryVideoCaptureDeviceNV_ARGS args;
} glXQueryVideoCaptureDeviceNV_PACKED;
#endif
#ifndef glXReleaseBuffersMESA_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
} glXReleaseBuffersMESA_ARGS;
typedef struct {
    int index;
    glXReleaseBuffersMESA_ARGS args;
} glXReleaseBuffersMESA_PACKED;
#endif
#ifndef glXReleaseTexImageEXT_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    int buffer;
} glXReleaseTexImageEXT_ARGS;
typedef struct {
    int index;
    glXReleaseTexImageEXT_ARGS args;
} glXReleaseTexImageEXT_PACKED;
#endif
#ifndef glXReleaseVideoCaptureDeviceNV_RETURN
typedef struct {
    Display * dpy;
    GLXVideoCaptureDeviceNV device;
} glXReleaseVideoCaptureDeviceNV_ARGS;
typedef struct {
    int index;
    glXReleaseVideoCaptureDeviceNV_ARGS args;
} glXReleaseVideoCaptureDeviceNV_PACKED;
#endif
#ifndef glXReleaseVideoDeviceNV_RETURN
typedef struct {
    Display * dpy;
    int screen;
    GLXVideoDeviceNV VideoDevice;
} glXReleaseVideoDeviceNV_ARGS;
typedef struct {
    int index;
    glXReleaseVideoDeviceNV_ARGS args;
} glXReleaseVideoDeviceNV_PACKED;
#endif
#ifndef glXReleaseVideoImageNV_RETURN
typedef struct {
    Display * dpy;
    GLXPbuffer pbuf;
} glXReleaseVideoImageNV_ARGS;
typedef struct {
    int index;
    glXReleaseVideoImageNV_ARGS args;
} glXReleaseVideoImageNV_PACKED;
#endif
#ifndef glXRender_RETURN
typedef struct {
    int index;
} glXRender_PACKED;
#endif
#ifndef glXRenderLarge_RETURN
typedef struct {
    int index;
} glXRenderLarge_PACKED;
#endif
#ifndef glXResetFrameCountNV_RETURN
typedef struct {
    Display * dpy;
    int screen;
} glXResetFrameCountNV_ARGS;
typedef struct {
    int index;
    glXResetFrameCountNV_ARGS args;
} glXResetFrameCountNV_PACKED;
#endif
#ifndef glXSelectEvent_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable draw;
    unsigned long event_mask;
} glXSelectEvent_ARGS;
typedef struct {
    int index;
    glXSelectEvent_ARGS args;
} glXSelectEvent_PACKED;
#endif
#ifndef glXSelectEventSGIX_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    unsigned long mask;
} glXSelectEventSGIX_ARGS;
typedef struct {
    int index;
    glXSelectEventSGIX_ARGS args;
} glXSelectEventSGIX_PACKED;
#endif
#ifndef glXSendPbufferToVideoNV_RETURN
typedef struct {
    Display * dpy;
    GLXPbuffer pbuf;
    int iBufferType;
    unsigned long * pulCounterPbuffer;
    GLboolean bBlock;
} glXSendPbufferToVideoNV_ARGS;
typedef struct {
    int index;
    glXSendPbufferToVideoNV_ARGS args;
} glXSendPbufferToVideoNV_PACKED;
#endif
#ifndef glXSet3DfxModeMESA_RETURN
typedef struct {
    int mode;
} glXSet3DfxModeMESA_ARGS;
typedef struct {
    int index;
    glXSet3DfxModeMESA_ARGS args;
} glXSet3DfxModeMESA_PACKED;
#endif
#ifndef glXSwapBuffers_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
} glXSwapBuffers_ARGS;
typedef struct {
    int index;
    glXSwapBuffers_ARGS args;
} glXSwapBuffers_PACKED;
#endif
#ifndef glXSwapBuffersMscOML_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    int64_t target_msc;
    int64_t divisor;
    int64_t remainder;
} glXSwapBuffersMscOML_ARGS;
typedef struct {
    int index;
    glXSwapBuffersMscOML_ARGS args;
} glXSwapBuffersMscOML_PACKED;
#endif
#ifndef glXSwapIntervalEXT_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    int interval;
} glXSwapIntervalEXT_ARGS;
typedef struct {
    int index;
    glXSwapIntervalEXT_ARGS args;
} glXSwapIntervalEXT_PACKED;
#endif
#ifndef glXSwapIntervalMESA_RETURN
typedef struct {
    unsigned int interval;
} glXSwapIntervalMESA_ARGS;
typedef struct {
    int index;
    glXSwapIntervalMESA_ARGS args;
} glXSwapIntervalMESA_PACKED;
#endif
#ifndef glXSwapIntervalSGI_RETURN
typedef struct {
    int interval;
} glXSwapIntervalSGI_ARGS;
typedef struct {
    int index;
    glXSwapIntervalSGI_ARGS args;
} glXSwapIntervalSGI_PACKED;
#endif
#ifndef glXUseXFont_RETURN
typedef struct {
    Font font;
    int first;
    int count;
    int listBase;
} glXUseXFont_ARGS;
typedef struct {
    int index;
    glXUseXFont_ARGS args;
} glXUseXFont_PACKED;
#endif
#ifndef glXVendorPrivate_RETURN
typedef struct {
    int index;
} glXVendorPrivate_PACKED;
#endif
#ifndef glXVendorPrivateWithReply_RETURN
typedef struct {
    int index;
} glXVendorPrivateWithReply_PACKED;
#endif
#ifndef glXWaitForMscOML_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    int64_t target_msc;
    int64_t divisor;
    int64_t remainder;
    int64_t * ust;
    int64_t * msc;
    int64_t * sbc;
} glXWaitForMscOML_ARGS;
typedef struct {
    int index;
    glXWaitForMscOML_ARGS args;
} glXWaitForMscOML_PACKED;
#endif
#ifndef glXWaitForSbcOML_RETURN
typedef struct {
    Display * dpy;
    GLXDrawable drawable;
    int64_t target_sbc;
    int64_t * ust;
    int64_t * msc;
    int64_t * sbc;
} glXWaitForSbcOML_ARGS;
typedef struct {
    int index;
    glXWaitForSbcOML_ARGS args;
} glXWaitForSbcOML_PACKED;
#endif
#ifndef glXWaitGL_RETURN
typedef struct {
    int index;
} glXWaitGL_PACKED;
#endif
#ifndef glXWaitVideoSyncSGI_RETURN
typedef struct {
    int divisor;
    int remainder;
    unsigned int * count;
} glXWaitVideoSyncSGI_ARGS;
typedef struct {
    int index;
    glXWaitVideoSyncSGI_ARGS args;
} glXWaitVideoSyncSGI_PACKED;
#endif
#ifndef glXWaitX_RETURN
typedef struct {
    int index;
} glXWaitX_PACKED;
#endif

#ifndef glXAssociateDMPbufferSGIX_RETURN
#define glXAssociateDMPbufferSGIX_RETURN Bool
#define glXAssociateDMPbufferSGIX_ARG_NAMES dpy, pbuffer, params, dmbuffer
#define glXAssociateDMPbufferSGIX_ARG_EXPAND Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer
#define glXAssociateDMPbufferSGIX_ARG_NAMES_TAIL , dpy, pbuffer, params, dmbuffer
#define glXAssociateDMPbufferSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer
#define forward_glXAssociateDMPbufferSGIX(_dpy, _pbuffer, _params, _dmbuffer) \
    ({ \
        void *dst = remote_dma(sizeof(glXAssociateDMPbufferSGIX_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXAssociateDMPbufferSGIX(dst, _dpy, _pbuffer, _params, _dmbuffer), &ret); \
        ret; \
    });
#define call_glXAssociateDMPbufferSGIX(packed, ret_v) do { \
    glXAssociateDMPbufferSGIX_PACKED *unpacked = (glXAssociateDMPbufferSGIX_PACKED *)packed; \
    glXAssociateDMPbufferSGIX_ARGS *args = (glXAssociateDMPbufferSGIX_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXAssociateDMPbufferSGIX(args->dpy, args->pbuffer, args->params, args->dmbuffer);; \
    } else { \
        glXAssociateDMPbufferSGIX(args->dpy, args->pbuffer, args->params, args->dmbuffer);; \
    } \
} while(0)
Bool glXAssociateDMPbufferSGIX(glXAssociateDMPbufferSGIX_ARG_EXPAND);
packed_call_t *pack_glXAssociateDMPbufferSGIX(glXAssociateDMPbufferSGIX_PACKED *_dst glXAssociateDMPbufferSGIX_ARG_EXPAND_TAIL);
typedef Bool (*glXAssociateDMPbufferSGIX_PTR)(glXAssociateDMPbufferSGIX_ARG_EXPAND);
#endif
#ifndef glXBindChannelToWindowSGIX_RETURN
#define glXBindChannelToWindowSGIX_RETURN int
#define glXBindChannelToWindowSGIX_ARG_NAMES display, screen, channel, window
#define glXBindChannelToWindowSGIX_ARG_EXPAND Display * display, int screen, int channel, Window window
#define glXBindChannelToWindowSGIX_ARG_NAMES_TAIL , display, screen, channel, window
#define glXBindChannelToWindowSGIX_ARG_EXPAND_TAIL , Display * display, int screen, int channel, Window window
#define forward_glXBindChannelToWindowSGIX(_display, _screen, _channel, _window) \
    ({ \
        void *dst = remote_dma(sizeof(glXBindChannelToWindowSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXBindChannelToWindowSGIX(dst, _display, _screen, _channel, _window), &ret); \
        ret; \
    });
#define call_glXBindChannelToWindowSGIX(packed, ret_v) do { \
    glXBindChannelToWindowSGIX_PACKED *unpacked = (glXBindChannelToWindowSGIX_PACKED *)packed; \
    glXBindChannelToWindowSGIX_ARGS *args = (glXBindChannelToWindowSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXBindChannelToWindowSGIX(args->display, args->screen, args->channel, args->window);; \
    } else { \
        glXBindChannelToWindowSGIX(args->display, args->screen, args->channel, args->window);; \
    } \
} while(0)
int glXBindChannelToWindowSGIX(glXBindChannelToWindowSGIX_ARG_EXPAND);
packed_call_t *pack_glXBindChannelToWindowSGIX(glXBindChannelToWindowSGIX_PACKED *_dst glXBindChannelToWindowSGIX_ARG_EXPAND_TAIL);
typedef int (*glXBindChannelToWindowSGIX_PTR)(glXBindChannelToWindowSGIX_ARG_EXPAND);
#endif
#ifndef glXBindHyperpipeSGIX_RETURN
#define glXBindHyperpipeSGIX_RETURN int
#define glXBindHyperpipeSGIX_ARG_NAMES dpy, hpId
#define glXBindHyperpipeSGIX_ARG_EXPAND Display * dpy, int hpId
#define glXBindHyperpipeSGIX_ARG_NAMES_TAIL , dpy, hpId
#define glXBindHyperpipeSGIX_ARG_EXPAND_TAIL , Display * dpy, int hpId
#define forward_glXBindHyperpipeSGIX(_dpy, _hpId) \
    ({ \
        void *dst = remote_dma(sizeof(glXBindHyperpipeSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXBindHyperpipeSGIX(dst, _dpy, _hpId), &ret); \
        ret; \
    });
#define call_glXBindHyperpipeSGIX(packed, ret_v) do { \
    glXBindHyperpipeSGIX_PACKED *unpacked = (glXBindHyperpipeSGIX_PACKED *)packed; \
    glXBindHyperpipeSGIX_ARGS *args = (glXBindHyperpipeSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXBindHyperpipeSGIX(args->dpy, args->hpId);; \
    } else { \
        glXBindHyperpipeSGIX(args->dpy, args->hpId);; \
    } \
} while(0)
int glXBindHyperpipeSGIX(glXBindHyperpipeSGIX_ARG_EXPAND);
packed_call_t *pack_glXBindHyperpipeSGIX(glXBindHyperpipeSGIX_PACKED *_dst glXBindHyperpipeSGIX_ARG_EXPAND_TAIL);
typedef int (*glXBindHyperpipeSGIX_PTR)(glXBindHyperpipeSGIX_ARG_EXPAND);
#endif
#ifndef glXBindSwapBarrierNV_RETURN
#define glXBindSwapBarrierNV_RETURN Bool
#define glXBindSwapBarrierNV_ARG_NAMES dpy, group, barrier
#define glXBindSwapBarrierNV_ARG_EXPAND Display * dpy, GLuint group, GLuint barrier
#define glXBindSwapBarrierNV_ARG_NAMES_TAIL , dpy, group, barrier
#define glXBindSwapBarrierNV_ARG_EXPAND_TAIL , Display * dpy, GLuint group, GLuint barrier
#define forward_glXBindSwapBarrierNV(_dpy, _group, _barrier) \
    ({ \
        void *dst = remote_dma(sizeof(glXBindSwapBarrierNV_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXBindSwapBarrierNV(dst, _dpy, _group, _barrier), &ret); \
        ret; \
    });
#define call_glXBindSwapBarrierNV(packed, ret_v) do { \
    glXBindSwapBarrierNV_PACKED *unpacked = (glXBindSwapBarrierNV_PACKED *)packed; \
    glXBindSwapBarrierNV_ARGS *args = (glXBindSwapBarrierNV_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXBindSwapBarrierNV(args->dpy, args->group, args->barrier);; \
    } else { \
        glXBindSwapBarrierNV(args->dpy, args->group, args->barrier);; \
    } \
} while(0)
Bool glXBindSwapBarrierNV(glXBindSwapBarrierNV_ARG_EXPAND);
packed_call_t *pack_glXBindSwapBarrierNV(glXBindSwapBarrierNV_PACKED *_dst glXBindSwapBarrierNV_ARG_EXPAND_TAIL);
typedef Bool (*glXBindSwapBarrierNV_PTR)(glXBindSwapBarrierNV_ARG_EXPAND);
#endif
#ifndef glXBindSwapBarrierSGIX_RETURN
#define glXBindSwapBarrierSGIX_RETURN void
#define glXBindSwapBarrierSGIX_ARG_NAMES dpy, drawable, barrier
#define glXBindSwapBarrierSGIX_ARG_EXPAND Display * dpy, GLXDrawable drawable, int barrier
#define glXBindSwapBarrierSGIX_ARG_NAMES_TAIL , dpy, drawable, barrier
#define glXBindSwapBarrierSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, int barrier
#define forward_glXBindSwapBarrierSGIX(_dpy, _drawable, _barrier) \
    ({ \
        void *dst = remote_dma(sizeof(glXBindSwapBarrierSGIX_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXBindSwapBarrierSGIX(dst, _dpy, _drawable, _barrier), NULL); \
    });
#define call_glXBindSwapBarrierSGIX(packed, ret_v) do { \
    glXBindSwapBarrierSGIX_PACKED *unpacked = (glXBindSwapBarrierSGIX_PACKED *)packed; \
    glXBindSwapBarrierSGIX_ARGS *args = (glXBindSwapBarrierSGIX_ARGS *)&unpacked->args; \
    glXBindSwapBarrierSGIX(args->dpy, args->drawable, args->barrier);; \
} while(0)
void glXBindSwapBarrierSGIX(glXBindSwapBarrierSGIX_ARG_EXPAND);
packed_call_t *pack_glXBindSwapBarrierSGIX(glXBindSwapBarrierSGIX_PACKED *_dst glXBindSwapBarrierSGIX_ARG_EXPAND_TAIL);
typedef void (*glXBindSwapBarrierSGIX_PTR)(glXBindSwapBarrierSGIX_ARG_EXPAND);
#endif
#ifndef glXBindTexImageEXT_RETURN
#define glXBindTexImageEXT_RETURN void
#define glXBindTexImageEXT_ARG_NAMES dpy, drawable, buffer, attrib_list
#define glXBindTexImageEXT_ARG_EXPAND Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list
#define glXBindTexImageEXT_ARG_NAMES_TAIL , dpy, drawable, buffer, attrib_list
#define glXBindTexImageEXT_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list
#define forward_glXBindTexImageEXT(_dpy, _drawable, _buffer, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(glXBindTexImageEXT_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXBindTexImageEXT(dst, _dpy, _drawable, _buffer, _attrib_list), NULL); \
    });
#define call_glXBindTexImageEXT(packed, ret_v) do { \
    glXBindTexImageEXT_PACKED *unpacked = (glXBindTexImageEXT_PACKED *)packed; \
    glXBindTexImageEXT_ARGS *args = (glXBindTexImageEXT_ARGS *)&unpacked->args; \
    glXBindTexImageEXT(args->dpy, args->drawable, args->buffer, args->attrib_list);; \
} while(0)
void glXBindTexImageEXT(glXBindTexImageEXT_ARG_EXPAND);
packed_call_t *pack_glXBindTexImageEXT(glXBindTexImageEXT_PACKED *_dst glXBindTexImageEXT_ARG_EXPAND_TAIL);
typedef void (*glXBindTexImageEXT_PTR)(glXBindTexImageEXT_ARG_EXPAND);
#endif
#ifndef glXBindVideoCaptureDeviceNV_RETURN
#define glXBindVideoCaptureDeviceNV_RETURN int
#define glXBindVideoCaptureDeviceNV_ARG_NAMES dpy, video_capture_slot, device
#define glXBindVideoCaptureDeviceNV_ARG_EXPAND Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device
#define glXBindVideoCaptureDeviceNV_ARG_NAMES_TAIL , dpy, video_capture_slot, device
#define glXBindVideoCaptureDeviceNV_ARG_EXPAND_TAIL , Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device
#define forward_glXBindVideoCaptureDeviceNV(_dpy, _video_capture_slot, _device) \
    ({ \
        void *dst = remote_dma(sizeof(glXBindVideoCaptureDeviceNV_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXBindVideoCaptureDeviceNV(dst, _dpy, _video_capture_slot, _device), &ret); \
        ret; \
    });
#define call_glXBindVideoCaptureDeviceNV(packed, ret_v) do { \
    glXBindVideoCaptureDeviceNV_PACKED *unpacked = (glXBindVideoCaptureDeviceNV_PACKED *)packed; \
    glXBindVideoCaptureDeviceNV_ARGS *args = (glXBindVideoCaptureDeviceNV_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXBindVideoCaptureDeviceNV(args->dpy, args->video_capture_slot, args->device);; \
    } else { \
        glXBindVideoCaptureDeviceNV(args->dpy, args->video_capture_slot, args->device);; \
    } \
} while(0)
int glXBindVideoCaptureDeviceNV(glXBindVideoCaptureDeviceNV_ARG_EXPAND);
packed_call_t *pack_glXBindVideoCaptureDeviceNV(glXBindVideoCaptureDeviceNV_PACKED *_dst glXBindVideoCaptureDeviceNV_ARG_EXPAND_TAIL);
typedef int (*glXBindVideoCaptureDeviceNV_PTR)(glXBindVideoCaptureDeviceNV_ARG_EXPAND);
#endif
#ifndef glXBindVideoDeviceNV_RETURN
#define glXBindVideoDeviceNV_RETURN int
#define glXBindVideoDeviceNV_ARG_NAMES dpy, video_slot, video_device, attrib_list
#define glXBindVideoDeviceNV_ARG_EXPAND Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list
#define glXBindVideoDeviceNV_ARG_NAMES_TAIL , dpy, video_slot, video_device, attrib_list
#define glXBindVideoDeviceNV_ARG_EXPAND_TAIL , Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list
#define forward_glXBindVideoDeviceNV(_dpy, _video_slot, _video_device, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(glXBindVideoDeviceNV_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXBindVideoDeviceNV(dst, _dpy, _video_slot, _video_device, _attrib_list), &ret); \
        ret; \
    });
#define call_glXBindVideoDeviceNV(packed, ret_v) do { \
    glXBindVideoDeviceNV_PACKED *unpacked = (glXBindVideoDeviceNV_PACKED *)packed; \
    glXBindVideoDeviceNV_ARGS *args = (glXBindVideoDeviceNV_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXBindVideoDeviceNV(args->dpy, args->video_slot, args->video_device, args->attrib_list);; \
    } else { \
        glXBindVideoDeviceNV(args->dpy, args->video_slot, args->video_device, args->attrib_list);; \
    } \
} while(0)
int glXBindVideoDeviceNV(glXBindVideoDeviceNV_ARG_EXPAND);
packed_call_t *pack_glXBindVideoDeviceNV(glXBindVideoDeviceNV_PACKED *_dst glXBindVideoDeviceNV_ARG_EXPAND_TAIL);
typedef int (*glXBindVideoDeviceNV_PTR)(glXBindVideoDeviceNV_ARG_EXPAND);
#endif
#ifndef glXBindVideoImageNV_RETURN
#define glXBindVideoImageNV_RETURN int
#define glXBindVideoImageNV_ARG_NAMES dpy, VideoDevice, pbuf, iVideoBuffer
#define glXBindVideoImageNV_ARG_EXPAND Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer
#define glXBindVideoImageNV_ARG_NAMES_TAIL , dpy, VideoDevice, pbuf, iVideoBuffer
#define glXBindVideoImageNV_ARG_EXPAND_TAIL , Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer
#define forward_glXBindVideoImageNV(_dpy, _VideoDevice, _pbuf, _iVideoBuffer) \
    ({ \
        void *dst = remote_dma(sizeof(glXBindVideoImageNV_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXBindVideoImageNV(dst, _dpy, _VideoDevice, _pbuf, _iVideoBuffer), &ret); \
        ret; \
    });
#define call_glXBindVideoImageNV(packed, ret_v) do { \
    glXBindVideoImageNV_PACKED *unpacked = (glXBindVideoImageNV_PACKED *)packed; \
    glXBindVideoImageNV_ARGS *args = (glXBindVideoImageNV_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXBindVideoImageNV(args->dpy, args->VideoDevice, args->pbuf, args->iVideoBuffer);; \
    } else { \
        glXBindVideoImageNV(args->dpy, args->VideoDevice, args->pbuf, args->iVideoBuffer);; \
    } \
} while(0)
int glXBindVideoImageNV(glXBindVideoImageNV_ARG_EXPAND);
packed_call_t *pack_glXBindVideoImageNV(glXBindVideoImageNV_PACKED *_dst glXBindVideoImageNV_ARG_EXPAND_TAIL);
typedef int (*glXBindVideoImageNV_PTR)(glXBindVideoImageNV_ARG_EXPAND);
#endif
#ifndef glXChangeDrawableAttributes_RETURN
#define glXChangeDrawableAttributes_RETURN void
#define glXChangeDrawableAttributes_ARG_NAMES drawable
#define glXChangeDrawableAttributes_ARG_EXPAND uint32_t drawable
#define glXChangeDrawableAttributes_ARG_NAMES_TAIL , drawable
#define glXChangeDrawableAttributes_ARG_EXPAND_TAIL , uint32_t drawable
#define forward_glXChangeDrawableAttributes(_drawable) \
    ({ \
        void *dst = remote_dma(sizeof(glXChangeDrawableAttributes_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXChangeDrawableAttributes(dst, _drawable), NULL); \
    });
#define call_glXChangeDrawableAttributes(packed, ret_v) do { \
    glXChangeDrawableAttributes_PACKED *unpacked = (glXChangeDrawableAttributes_PACKED *)packed; \
    glXChangeDrawableAttributes_ARGS *args = (glXChangeDrawableAttributes_ARGS *)&unpacked->args; \
    glXChangeDrawableAttributes(args->drawable);; \
} while(0)
void glXChangeDrawableAttributes(glXChangeDrawableAttributes_ARG_EXPAND);
packed_call_t *pack_glXChangeDrawableAttributes(glXChangeDrawableAttributes_PACKED *_dst glXChangeDrawableAttributes_ARG_EXPAND_TAIL);
typedef void (*glXChangeDrawableAttributes_PTR)(glXChangeDrawableAttributes_ARG_EXPAND);
#endif
#ifndef glXChangeDrawableAttributesSGIX_RETURN
#define glXChangeDrawableAttributesSGIX_RETURN void
#define glXChangeDrawableAttributesSGIX_ARG_NAMES drawable
#define glXChangeDrawableAttributesSGIX_ARG_EXPAND uint32_t drawable
#define glXChangeDrawableAttributesSGIX_ARG_NAMES_TAIL , drawable
#define glXChangeDrawableAttributesSGIX_ARG_EXPAND_TAIL , uint32_t drawable
#define forward_glXChangeDrawableAttributesSGIX(_drawable) \
    ({ \
        void *dst = remote_dma(sizeof(glXChangeDrawableAttributesSGIX_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXChangeDrawableAttributesSGIX(dst, _drawable), NULL); \
    });
#define call_glXChangeDrawableAttributesSGIX(packed, ret_v) do { \
    glXChangeDrawableAttributesSGIX_PACKED *unpacked = (glXChangeDrawableAttributesSGIX_PACKED *)packed; \
    glXChangeDrawableAttributesSGIX_ARGS *args = (glXChangeDrawableAttributesSGIX_ARGS *)&unpacked->args; \
    glXChangeDrawableAttributesSGIX(args->drawable);; \
} while(0)
void glXChangeDrawableAttributesSGIX(glXChangeDrawableAttributesSGIX_ARG_EXPAND);
packed_call_t *pack_glXChangeDrawableAttributesSGIX(glXChangeDrawableAttributesSGIX_PACKED *_dst glXChangeDrawableAttributesSGIX_ARG_EXPAND_TAIL);
typedef void (*glXChangeDrawableAttributesSGIX_PTR)(glXChangeDrawableAttributesSGIX_ARG_EXPAND);
#endif
#ifndef glXChannelRectSGIX_RETURN
#define glXChannelRectSGIX_RETURN int
#define glXChannelRectSGIX_ARG_NAMES display, screen, channel, x, y, w, h
#define glXChannelRectSGIX_ARG_EXPAND Display * display, int screen, int channel, int x, int y, int w, int h
#define glXChannelRectSGIX_ARG_NAMES_TAIL , display, screen, channel, x, y, w, h
#define glXChannelRectSGIX_ARG_EXPAND_TAIL , Display * display, int screen, int channel, int x, int y, int w, int h
#define forward_glXChannelRectSGIX(_display, _screen, _channel, _x, _y, _w, _h) \
    ({ \
        void *dst = remote_dma(sizeof(glXChannelRectSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXChannelRectSGIX(dst, _display, _screen, _channel, _x, _y, _w, _h), &ret); \
        ret; \
    });
#define call_glXChannelRectSGIX(packed, ret_v) do { \
    glXChannelRectSGIX_PACKED *unpacked = (glXChannelRectSGIX_PACKED *)packed; \
    glXChannelRectSGIX_ARGS *args = (glXChannelRectSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXChannelRectSGIX(args->display, args->screen, args->channel, args->x, args->y, args->w, args->h);; \
    } else { \
        glXChannelRectSGIX(args->display, args->screen, args->channel, args->x, args->y, args->w, args->h);; \
    } \
} while(0)
int glXChannelRectSGIX(glXChannelRectSGIX_ARG_EXPAND);
packed_call_t *pack_glXChannelRectSGIX(glXChannelRectSGIX_PACKED *_dst glXChannelRectSGIX_ARG_EXPAND_TAIL);
typedef int (*glXChannelRectSGIX_PTR)(glXChannelRectSGIX_ARG_EXPAND);
#endif
#ifndef glXChannelRectSyncSGIX_RETURN
#define glXChannelRectSyncSGIX_RETURN int
#define glXChannelRectSyncSGIX_ARG_NAMES display, screen, channel, synctype
#define glXChannelRectSyncSGIX_ARG_EXPAND Display * display, int screen, int channel, GLenum synctype
#define glXChannelRectSyncSGIX_ARG_NAMES_TAIL , display, screen, channel, synctype
#define glXChannelRectSyncSGIX_ARG_EXPAND_TAIL , Display * display, int screen, int channel, GLenum synctype
#define forward_glXChannelRectSyncSGIX(_display, _screen, _channel, _synctype) \
    ({ \
        void *dst = remote_dma(sizeof(glXChannelRectSyncSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXChannelRectSyncSGIX(dst, _display, _screen, _channel, _synctype), &ret); \
        ret; \
    });
#define call_glXChannelRectSyncSGIX(packed, ret_v) do { \
    glXChannelRectSyncSGIX_PACKED *unpacked = (glXChannelRectSyncSGIX_PACKED *)packed; \
    glXChannelRectSyncSGIX_ARGS *args = (glXChannelRectSyncSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXChannelRectSyncSGIX(args->display, args->screen, args->channel, args->synctype);; \
    } else { \
        glXChannelRectSyncSGIX(args->display, args->screen, args->channel, args->synctype);; \
    } \
} while(0)
int glXChannelRectSyncSGIX(glXChannelRectSyncSGIX_ARG_EXPAND);
packed_call_t *pack_glXChannelRectSyncSGIX(glXChannelRectSyncSGIX_PACKED *_dst glXChannelRectSyncSGIX_ARG_EXPAND_TAIL);
typedef int (*glXChannelRectSyncSGIX_PTR)(glXChannelRectSyncSGIX_ARG_EXPAND);
#endif
#ifndef glXChooseFBConfig_RETURN
#define glXChooseFBConfig_RETURN GLXFBConfig *
#define glXChooseFBConfig_ARG_NAMES dpy, screen, attrib_list, nelements
#define glXChooseFBConfig_ARG_EXPAND Display * dpy, int screen, const int * attrib_list, int * nelements
#define glXChooseFBConfig_ARG_NAMES_TAIL , dpy, screen, attrib_list, nelements
#define glXChooseFBConfig_ARG_EXPAND_TAIL , Display * dpy, int screen, const int * attrib_list, int * nelements
#define forward_glXChooseFBConfig(_dpy, _screen, _attrib_list, _nelements) \
    ({ \
        void *dst = remote_dma(sizeof(glXChooseFBConfig_PACKED)); \
        GLXFBConfig * ret = (GLXFBConfig *)0; \
        remote_dma_send((packed_call_t *)pack_glXChooseFBConfig(dst, _dpy, _screen, _attrib_list, _nelements), &ret); \
        ret; \
    });
#define call_glXChooseFBConfig(packed, ret_v) do { \
    glXChooseFBConfig_PACKED *unpacked = (glXChooseFBConfig_PACKED *)packed; \
    glXChooseFBConfig_ARGS *args = (glXChooseFBConfig_ARGS *)&unpacked->args; \
    GLXFBConfig * *ret = (GLXFBConfig * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXChooseFBConfig(args->dpy, args->screen, args->attrib_list, args->nelements);; \
    } else { \
        glXChooseFBConfig(args->dpy, args->screen, args->attrib_list, args->nelements);; \
    } \
} while(0)
GLXFBConfig * glXChooseFBConfig(glXChooseFBConfig_ARG_EXPAND);
packed_call_t *pack_glXChooseFBConfig(glXChooseFBConfig_PACKED *_dst glXChooseFBConfig_ARG_EXPAND_TAIL);
typedef GLXFBConfig * (*glXChooseFBConfig_PTR)(glXChooseFBConfig_ARG_EXPAND);
#endif
#ifndef glXChooseFBConfigSGIX_RETURN
#define glXChooseFBConfigSGIX_RETURN GLXFBConfigSGIX *
#define glXChooseFBConfigSGIX_ARG_NAMES dpy, screen, attrib_list, nelements
#define glXChooseFBConfigSGIX_ARG_EXPAND Display * dpy, int screen, int * attrib_list, int * nelements
#define glXChooseFBConfigSGIX_ARG_NAMES_TAIL , dpy, screen, attrib_list, nelements
#define glXChooseFBConfigSGIX_ARG_EXPAND_TAIL , Display * dpy, int screen, int * attrib_list, int * nelements
#define forward_glXChooseFBConfigSGIX(_dpy, _screen, _attrib_list, _nelements) \
    ({ \
        void *dst = remote_dma(sizeof(glXChooseFBConfigSGIX_PACKED)); \
        GLXFBConfigSGIX * ret = (GLXFBConfigSGIX *)0; \
        remote_dma_send((packed_call_t *)pack_glXChooseFBConfigSGIX(dst, _dpy, _screen, _attrib_list, _nelements), &ret); \
        ret; \
    });
#define call_glXChooseFBConfigSGIX(packed, ret_v) do { \
    glXChooseFBConfigSGIX_PACKED *unpacked = (glXChooseFBConfigSGIX_PACKED *)packed; \
    glXChooseFBConfigSGIX_ARGS *args = (glXChooseFBConfigSGIX_ARGS *)&unpacked->args; \
    GLXFBConfigSGIX * *ret = (GLXFBConfigSGIX * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXChooseFBConfigSGIX(args->dpy, args->screen, args->attrib_list, args->nelements);; \
    } else { \
        glXChooseFBConfigSGIX(args->dpy, args->screen, args->attrib_list, args->nelements);; \
    } \
} while(0)
GLXFBConfigSGIX * glXChooseFBConfigSGIX(glXChooseFBConfigSGIX_ARG_EXPAND);
packed_call_t *pack_glXChooseFBConfigSGIX(glXChooseFBConfigSGIX_PACKED *_dst glXChooseFBConfigSGIX_ARG_EXPAND_TAIL);
typedef GLXFBConfigSGIX * (*glXChooseFBConfigSGIX_PTR)(glXChooseFBConfigSGIX_ARG_EXPAND);
#endif
#ifndef glXChooseVisual_RETURN
#define glXChooseVisual_RETURN XVisualInfo *
#define glXChooseVisual_ARG_NAMES dpy, screen, attribList
#define glXChooseVisual_ARG_EXPAND Display * dpy, int screen, int * attribList
#define glXChooseVisual_ARG_NAMES_TAIL , dpy, screen, attribList
#define glXChooseVisual_ARG_EXPAND_TAIL , Display * dpy, int screen, int * attribList
#define forward_glXChooseVisual(_dpy, _screen, _attribList) \
    ({ \
        void *dst = remote_dma(sizeof(glXChooseVisual_PACKED)); \
        XVisualInfo * ret = (XVisualInfo *)0; \
        remote_dma_send((packed_call_t *)pack_glXChooseVisual(dst, _dpy, _screen, _attribList), &ret); \
        ret; \
    });
#define call_glXChooseVisual(packed, ret_v) do { \
    glXChooseVisual_PACKED *unpacked = (glXChooseVisual_PACKED *)packed; \
    glXChooseVisual_ARGS *args = (glXChooseVisual_ARGS *)&unpacked->args; \
    XVisualInfo * *ret = (XVisualInfo * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXChooseVisual(args->dpy, args->screen, args->attribList);; \
    } else { \
        glXChooseVisual(args->dpy, args->screen, args->attribList);; \
    } \
} while(0)
XVisualInfo * glXChooseVisual(glXChooseVisual_ARG_EXPAND);
packed_call_t *pack_glXChooseVisual(glXChooseVisual_PACKED *_dst glXChooseVisual_ARG_EXPAND_TAIL);
typedef XVisualInfo * (*glXChooseVisual_PTR)(glXChooseVisual_ARG_EXPAND);
#endif
#ifndef glXClientInfo_RETURN
#define glXClientInfo_RETURN void
#define glXClientInfo_ARG_NAMES 
#define glXClientInfo_ARG_EXPAND 
#define glXClientInfo_ARG_NAMES_TAIL 
#define glXClientInfo_ARG_EXPAND_TAIL 
#define forward_glXClientInfo() \
    ({ \
        void *dst = remote_dma(sizeof(glXClientInfo_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXClientInfo(dst), NULL); \
    });
#define call_glXClientInfo(packed, ret_v) do { \
    glXClientInfo();; \
} while(0)
void glXClientInfo(glXClientInfo_ARG_EXPAND);
packed_call_t *pack_glXClientInfo(glXClientInfo_PACKED *_dst glXClientInfo_ARG_EXPAND_TAIL);
typedef void (*glXClientInfo_PTR)(glXClientInfo_ARG_EXPAND);
#endif
#ifndef glXCopyContext_RETURN
#define glXCopyContext_RETURN void
#define glXCopyContext_ARG_NAMES dpy, src, dst, mask
#define glXCopyContext_ARG_EXPAND Display * dpy, GLXContext src, GLXContext dst, unsigned long mask
#define glXCopyContext_ARG_NAMES_TAIL , dpy, src, dst, mask
#define glXCopyContext_ARG_EXPAND_TAIL , Display * dpy, GLXContext src, GLXContext dst, unsigned long mask
#define forward_glXCopyContext(_dpy, _src, _dst, _mask) \
    ({ \
        void *dst = remote_dma(sizeof(glXCopyContext_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXCopyContext(dst, _dpy, _src, _dst, _mask), NULL); \
    });
#define call_glXCopyContext(packed, ret_v) do { \
    glXCopyContext_PACKED *unpacked = (glXCopyContext_PACKED *)packed; \
    glXCopyContext_ARGS *args = (glXCopyContext_ARGS *)&unpacked->args; \
    glXCopyContext(args->dpy, args->src, args->dst, args->mask);; \
} while(0)
void glXCopyContext(glXCopyContext_ARG_EXPAND);
packed_call_t *pack_glXCopyContext(glXCopyContext_PACKED *_dst glXCopyContext_ARG_EXPAND_TAIL);
typedef void (*glXCopyContext_PTR)(glXCopyContext_ARG_EXPAND);
#endif
#ifndef glXCopyImageSubDataNV_RETURN
#define glXCopyImageSubDataNV_RETURN void
#define glXCopyImageSubDataNV_ARG_NAMES dpy, srcCtx, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstCtx, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth
#define glXCopyImageSubDataNV_ARG_EXPAND Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth
#define glXCopyImageSubDataNV_ARG_NAMES_TAIL , dpy, srcCtx, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstCtx, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth
#define glXCopyImageSubDataNV_ARG_EXPAND_TAIL , Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth
#define forward_glXCopyImageSubDataNV(_dpy, _srcCtx, _srcName, _srcTarget, _srcLevel, _srcX, _srcY, _srcZ, _dstCtx, _dstName, _dstTarget, _dstLevel, _dstX, _dstY, _dstZ, _width, _height, _depth) \
    ({ \
        void *dst = remote_dma(sizeof(glXCopyImageSubDataNV_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXCopyImageSubDataNV(dst, _dpy, _srcCtx, _srcName, _srcTarget, _srcLevel, _srcX, _srcY, _srcZ, _dstCtx, _dstName, _dstTarget, _dstLevel, _dstX, _dstY, _dstZ, _width, _height, _depth), NULL); \
    });
#define call_glXCopyImageSubDataNV(packed, ret_v) do { \
    glXCopyImageSubDataNV_PACKED *unpacked = (glXCopyImageSubDataNV_PACKED *)packed; \
    glXCopyImageSubDataNV_ARGS *args = (glXCopyImageSubDataNV_ARGS *)&unpacked->args; \
    glXCopyImageSubDataNV(args->dpy, args->srcCtx, args->srcName, args->srcTarget, args->srcLevel, args->srcX, args->srcY, args->srcZ, args->dstCtx, args->dstName, args->dstTarget, args->dstLevel, args->dstX, args->dstY, args->dstZ, args->width, args->height, args->depth);; \
} while(0)
void glXCopyImageSubDataNV(glXCopyImageSubDataNV_ARG_EXPAND);
packed_call_t *pack_glXCopyImageSubDataNV(glXCopyImageSubDataNV_PACKED *_dst glXCopyImageSubDataNV_ARG_EXPAND_TAIL);
typedef void (*glXCopyImageSubDataNV_PTR)(glXCopyImageSubDataNV_ARG_EXPAND);
#endif
#ifndef glXCopySubBufferMESA_RETURN
#define glXCopySubBufferMESA_RETURN void
#define glXCopySubBufferMESA_ARG_NAMES dpy, drawable, x, y, width, height
#define glXCopySubBufferMESA_ARG_EXPAND Display * dpy, GLXDrawable drawable, int x, int y, int width, int height
#define glXCopySubBufferMESA_ARG_NAMES_TAIL , dpy, drawable, x, y, width, height
#define glXCopySubBufferMESA_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, int x, int y, int width, int height
#define forward_glXCopySubBufferMESA(_dpy, _drawable, _x, _y, _width, _height) \
    ({ \
        void *dst = remote_dma(sizeof(glXCopySubBufferMESA_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXCopySubBufferMESA(dst, _dpy, _drawable, _x, _y, _width, _height), NULL); \
    });
#define call_glXCopySubBufferMESA(packed, ret_v) do { \
    glXCopySubBufferMESA_PACKED *unpacked = (glXCopySubBufferMESA_PACKED *)packed; \
    glXCopySubBufferMESA_ARGS *args = (glXCopySubBufferMESA_ARGS *)&unpacked->args; \
    glXCopySubBufferMESA(args->dpy, args->drawable, args->x, args->y, args->width, args->height);; \
} while(0)
void glXCopySubBufferMESA(glXCopySubBufferMESA_ARG_EXPAND);
packed_call_t *pack_glXCopySubBufferMESA(glXCopySubBufferMESA_PACKED *_dst glXCopySubBufferMESA_ARG_EXPAND_TAIL);
typedef void (*glXCopySubBufferMESA_PTR)(glXCopySubBufferMESA_ARG_EXPAND);
#endif
#ifndef glXCreateContext_RETURN
#define glXCreateContext_RETURN GLXContext
#define glXCreateContext_ARG_NAMES dpy, vis, shareList, direct
#define glXCreateContext_ARG_EXPAND Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct
#define glXCreateContext_ARG_NAMES_TAIL , dpy, vis, shareList, direct
#define glXCreateContext_ARG_EXPAND_TAIL , Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct
#define forward_glXCreateContext(_dpy, _vis, _shareList, _direct) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreateContext_PACKED)); \
        GLXContext ret = (GLXContext)0; \
        remote_dma_send((packed_call_t *)pack_glXCreateContext(dst, _dpy, _vis, _shareList, _direct), &ret); \
        ret; \
    });
#define call_glXCreateContext(packed, ret_v) do { \
    glXCreateContext_PACKED *unpacked = (glXCreateContext_PACKED *)packed; \
    glXCreateContext_ARGS *args = (glXCreateContext_ARGS *)&unpacked->args; \
    GLXContext *ret = (GLXContext *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreateContext(args->dpy, args->vis, args->shareList, args->direct);; \
    } else { \
        glXCreateContext(args->dpy, args->vis, args->shareList, args->direct);; \
    } \
} while(0)
GLXContext glXCreateContext(glXCreateContext_ARG_EXPAND);
packed_call_t *pack_glXCreateContext(glXCreateContext_PACKED *_dst glXCreateContext_ARG_EXPAND_TAIL);
typedef GLXContext (*glXCreateContext_PTR)(glXCreateContext_ARG_EXPAND);
#endif
#ifndef glXCreateContextAttribsARB_RETURN
#define glXCreateContextAttribsARB_RETURN GLXContext
#define glXCreateContextAttribsARB_ARG_NAMES dpy, config, share_context, direct, attrib_list
#define glXCreateContextAttribsARB_ARG_EXPAND Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list
#define glXCreateContextAttribsARB_ARG_NAMES_TAIL , dpy, config, share_context, direct, attrib_list
#define glXCreateContextAttribsARB_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list
#define forward_glXCreateContextAttribsARB(_dpy, _config, _share_context, _direct, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreateContextAttribsARB_PACKED)); \
        GLXContext ret = (GLXContext)0; \
        remote_dma_send((packed_call_t *)pack_glXCreateContextAttribsARB(dst, _dpy, _config, _share_context, _direct, _attrib_list), &ret); \
        ret; \
    });
#define call_glXCreateContextAttribsARB(packed, ret_v) do { \
    glXCreateContextAttribsARB_PACKED *unpacked = (glXCreateContextAttribsARB_PACKED *)packed; \
    glXCreateContextAttribsARB_ARGS *args = (glXCreateContextAttribsARB_ARGS *)&unpacked->args; \
    GLXContext *ret = (GLXContext *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreateContextAttribsARB(args->dpy, args->config, args->share_context, args->direct, args->attrib_list);; \
    } else { \
        glXCreateContextAttribsARB(args->dpy, args->config, args->share_context, args->direct, args->attrib_list);; \
    } \
} while(0)
GLXContext glXCreateContextAttribsARB(glXCreateContextAttribsARB_ARG_EXPAND);
packed_call_t *pack_glXCreateContextAttribsARB(glXCreateContextAttribsARB_PACKED *_dst glXCreateContextAttribsARB_ARG_EXPAND_TAIL);
typedef GLXContext (*glXCreateContextAttribsARB_PTR)(glXCreateContextAttribsARB_ARG_EXPAND);
#endif
#ifndef glXCreateContextWithConfigSGIX_RETURN
#define glXCreateContextWithConfigSGIX_RETURN GLXContext
#define glXCreateContextWithConfigSGIX_ARG_NAMES dpy, config, render_type, share_list, direct
#define glXCreateContextWithConfigSGIX_ARG_EXPAND Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct
#define glXCreateContextWithConfigSGIX_ARG_NAMES_TAIL , dpy, config, render_type, share_list, direct
#define glXCreateContextWithConfigSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct
#define forward_glXCreateContextWithConfigSGIX(_dpy, _config, _render_type, _share_list, _direct) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreateContextWithConfigSGIX_PACKED)); \
        GLXContext ret = (GLXContext)0; \
        remote_dma_send((packed_call_t *)pack_glXCreateContextWithConfigSGIX(dst, _dpy, _config, _render_type, _share_list, _direct), &ret); \
        ret; \
    });
#define call_glXCreateContextWithConfigSGIX(packed, ret_v) do { \
    glXCreateContextWithConfigSGIX_PACKED *unpacked = (glXCreateContextWithConfigSGIX_PACKED *)packed; \
    glXCreateContextWithConfigSGIX_ARGS *args = (glXCreateContextWithConfigSGIX_ARGS *)&unpacked->args; \
    GLXContext *ret = (GLXContext *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreateContextWithConfigSGIX(args->dpy, args->config, args->render_type, args->share_list, args->direct);; \
    } else { \
        glXCreateContextWithConfigSGIX(args->dpy, args->config, args->render_type, args->share_list, args->direct);; \
    } \
} while(0)
GLXContext glXCreateContextWithConfigSGIX(glXCreateContextWithConfigSGIX_ARG_EXPAND);
packed_call_t *pack_glXCreateContextWithConfigSGIX(glXCreateContextWithConfigSGIX_PACKED *_dst glXCreateContextWithConfigSGIX_ARG_EXPAND_TAIL);
typedef GLXContext (*glXCreateContextWithConfigSGIX_PTR)(glXCreateContextWithConfigSGIX_ARG_EXPAND);
#endif
#ifndef glXCreateGLXPbufferSGIX_RETURN
#define glXCreateGLXPbufferSGIX_RETURN GLXPbufferSGIX
#define glXCreateGLXPbufferSGIX_ARG_NAMES dpy, config, width, height, attrib_list
#define glXCreateGLXPbufferSGIX_ARG_EXPAND Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list
#define glXCreateGLXPbufferSGIX_ARG_NAMES_TAIL , dpy, config, width, height, attrib_list
#define glXCreateGLXPbufferSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list
#define forward_glXCreateGLXPbufferSGIX(_dpy, _config, _width, _height, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreateGLXPbufferSGIX_PACKED)); \
        GLXPbufferSGIX ret = (GLXPbufferSGIX)0; \
        remote_dma_send((packed_call_t *)pack_glXCreateGLXPbufferSGIX(dst, _dpy, _config, _width, _height, _attrib_list), &ret); \
        ret; \
    });
#define call_glXCreateGLXPbufferSGIX(packed, ret_v) do { \
    glXCreateGLXPbufferSGIX_PACKED *unpacked = (glXCreateGLXPbufferSGIX_PACKED *)packed; \
    glXCreateGLXPbufferSGIX_ARGS *args = (glXCreateGLXPbufferSGIX_ARGS *)&unpacked->args; \
    GLXPbufferSGIX *ret = (GLXPbufferSGIX *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreateGLXPbufferSGIX(args->dpy, args->config, args->width, args->height, args->attrib_list);; \
    } else { \
        glXCreateGLXPbufferSGIX(args->dpy, args->config, args->width, args->height, args->attrib_list);; \
    } \
} while(0)
GLXPbufferSGIX glXCreateGLXPbufferSGIX(glXCreateGLXPbufferSGIX_ARG_EXPAND);
packed_call_t *pack_glXCreateGLXPbufferSGIX(glXCreateGLXPbufferSGIX_PACKED *_dst glXCreateGLXPbufferSGIX_ARG_EXPAND_TAIL);
typedef GLXPbufferSGIX (*glXCreateGLXPbufferSGIX_PTR)(glXCreateGLXPbufferSGIX_ARG_EXPAND);
#endif
#ifndef glXCreateGLXPixmap_RETURN
#define glXCreateGLXPixmap_RETURN GLXPixmap
#define glXCreateGLXPixmap_ARG_NAMES dpy, visual, pixmap
#define glXCreateGLXPixmap_ARG_EXPAND Display * dpy, XVisualInfo * visual, Pixmap pixmap
#define glXCreateGLXPixmap_ARG_NAMES_TAIL , dpy, visual, pixmap
#define glXCreateGLXPixmap_ARG_EXPAND_TAIL , Display * dpy, XVisualInfo * visual, Pixmap pixmap
#define forward_glXCreateGLXPixmap(_dpy, _visual, _pixmap) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreateGLXPixmap_PACKED)); \
        GLXPixmap ret = (GLXPixmap)0; \
        remote_dma_send((packed_call_t *)pack_glXCreateGLXPixmap(dst, _dpy, _visual, _pixmap), &ret); \
        ret; \
    });
#define call_glXCreateGLXPixmap(packed, ret_v) do { \
    glXCreateGLXPixmap_PACKED *unpacked = (glXCreateGLXPixmap_PACKED *)packed; \
    glXCreateGLXPixmap_ARGS *args = (glXCreateGLXPixmap_ARGS *)&unpacked->args; \
    GLXPixmap *ret = (GLXPixmap *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreateGLXPixmap(args->dpy, args->visual, args->pixmap);; \
    } else { \
        glXCreateGLXPixmap(args->dpy, args->visual, args->pixmap);; \
    } \
} while(0)
GLXPixmap glXCreateGLXPixmap(glXCreateGLXPixmap_ARG_EXPAND);
packed_call_t *pack_glXCreateGLXPixmap(glXCreateGLXPixmap_PACKED *_dst glXCreateGLXPixmap_ARG_EXPAND_TAIL);
typedef GLXPixmap (*glXCreateGLXPixmap_PTR)(glXCreateGLXPixmap_ARG_EXPAND);
#endif
#ifndef glXCreateGLXPixmapMESA_RETURN
#define glXCreateGLXPixmapMESA_RETURN GLXPixmap
#define glXCreateGLXPixmapMESA_ARG_NAMES dpy, visual, pixmap, cmap
#define glXCreateGLXPixmapMESA_ARG_EXPAND Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap
#define glXCreateGLXPixmapMESA_ARG_NAMES_TAIL , dpy, visual, pixmap, cmap
#define glXCreateGLXPixmapMESA_ARG_EXPAND_TAIL , Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap
#define forward_glXCreateGLXPixmapMESA(_dpy, _visual, _pixmap, _cmap) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreateGLXPixmapMESA_PACKED)); \
        GLXPixmap ret = (GLXPixmap)0; \
        remote_dma_send((packed_call_t *)pack_glXCreateGLXPixmapMESA(dst, _dpy, _visual, _pixmap, _cmap), &ret); \
        ret; \
    });
#define call_glXCreateGLXPixmapMESA(packed, ret_v) do { \
    glXCreateGLXPixmapMESA_PACKED *unpacked = (glXCreateGLXPixmapMESA_PACKED *)packed; \
    glXCreateGLXPixmapMESA_ARGS *args = (glXCreateGLXPixmapMESA_ARGS *)&unpacked->args; \
    GLXPixmap *ret = (GLXPixmap *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreateGLXPixmapMESA(args->dpy, args->visual, args->pixmap, args->cmap);; \
    } else { \
        glXCreateGLXPixmapMESA(args->dpy, args->visual, args->pixmap, args->cmap);; \
    } \
} while(0)
GLXPixmap glXCreateGLXPixmapMESA(glXCreateGLXPixmapMESA_ARG_EXPAND);
packed_call_t *pack_glXCreateGLXPixmapMESA(glXCreateGLXPixmapMESA_PACKED *_dst glXCreateGLXPixmapMESA_ARG_EXPAND_TAIL);
typedef GLXPixmap (*glXCreateGLXPixmapMESA_PTR)(glXCreateGLXPixmapMESA_ARG_EXPAND);
#endif
#ifndef glXCreateGLXPixmapWithConfigSGIX_RETURN
#define glXCreateGLXPixmapWithConfigSGIX_RETURN GLXPixmap
#define glXCreateGLXPixmapWithConfigSGIX_ARG_NAMES dpy, config, pixmap
#define glXCreateGLXPixmapWithConfigSGIX_ARG_EXPAND Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap
#define glXCreateGLXPixmapWithConfigSGIX_ARG_NAMES_TAIL , dpy, config, pixmap
#define glXCreateGLXPixmapWithConfigSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap
#define forward_glXCreateGLXPixmapWithConfigSGIX(_dpy, _config, _pixmap) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreateGLXPixmapWithConfigSGIX_PACKED)); \
        GLXPixmap ret = (GLXPixmap)0; \
        remote_dma_send((packed_call_t *)pack_glXCreateGLXPixmapWithConfigSGIX(dst, _dpy, _config, _pixmap), &ret); \
        ret; \
    });
#define call_glXCreateGLXPixmapWithConfigSGIX(packed, ret_v) do { \
    glXCreateGLXPixmapWithConfigSGIX_PACKED *unpacked = (glXCreateGLXPixmapWithConfigSGIX_PACKED *)packed; \
    glXCreateGLXPixmapWithConfigSGIX_ARGS *args = (glXCreateGLXPixmapWithConfigSGIX_ARGS *)&unpacked->args; \
    GLXPixmap *ret = (GLXPixmap *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreateGLXPixmapWithConfigSGIX(args->dpy, args->config, args->pixmap);; \
    } else { \
        glXCreateGLXPixmapWithConfigSGIX(args->dpy, args->config, args->pixmap);; \
    } \
} while(0)
GLXPixmap glXCreateGLXPixmapWithConfigSGIX(glXCreateGLXPixmapWithConfigSGIX_ARG_EXPAND);
packed_call_t *pack_glXCreateGLXPixmapWithConfigSGIX(glXCreateGLXPixmapWithConfigSGIX_PACKED *_dst glXCreateGLXPixmapWithConfigSGIX_ARG_EXPAND_TAIL);
typedef GLXPixmap (*glXCreateGLXPixmapWithConfigSGIX_PTR)(glXCreateGLXPixmapWithConfigSGIX_ARG_EXPAND);
#endif
#ifndef glXCreateGLXVideoSourceSGIX_RETURN
#define glXCreateGLXVideoSourceSGIX_RETURN GLXVideoSourceSGIX
#define glXCreateGLXVideoSourceSGIX_ARG_NAMES display, screen, server, path, nodeClass, drainNode
#define glXCreateGLXVideoSourceSGIX_ARG_EXPAND Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode
#define glXCreateGLXVideoSourceSGIX_ARG_NAMES_TAIL , display, screen, server, path, nodeClass, drainNode
#define glXCreateGLXVideoSourceSGIX_ARG_EXPAND_TAIL , Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode
#define forward_glXCreateGLXVideoSourceSGIX(_display, _screen, _server, _path, _nodeClass, _drainNode) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreateGLXVideoSourceSGIX_PACKED)); \
        GLXVideoSourceSGIX ret = (GLXVideoSourceSGIX)0; \
        remote_dma_send((packed_call_t *)pack_glXCreateGLXVideoSourceSGIX(dst, _display, _screen, _server, _path, _nodeClass, _drainNode), &ret); \
        ret; \
    });
#define call_glXCreateGLXVideoSourceSGIX(packed, ret_v) do { \
    glXCreateGLXVideoSourceSGIX_PACKED *unpacked = (glXCreateGLXVideoSourceSGIX_PACKED *)packed; \
    glXCreateGLXVideoSourceSGIX_ARGS *args = (glXCreateGLXVideoSourceSGIX_ARGS *)&unpacked->args; \
    GLXVideoSourceSGIX *ret = (GLXVideoSourceSGIX *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreateGLXVideoSourceSGIX(args->display, args->screen, args->server, args->path, args->nodeClass, args->drainNode);; \
    } else { \
        glXCreateGLXVideoSourceSGIX(args->display, args->screen, args->server, args->path, args->nodeClass, args->drainNode);; \
    } \
} while(0)
GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX(glXCreateGLXVideoSourceSGIX_ARG_EXPAND);
packed_call_t *pack_glXCreateGLXVideoSourceSGIX(glXCreateGLXVideoSourceSGIX_PACKED *_dst glXCreateGLXVideoSourceSGIX_ARG_EXPAND_TAIL);
typedef GLXVideoSourceSGIX (*glXCreateGLXVideoSourceSGIX_PTR)(glXCreateGLXVideoSourceSGIX_ARG_EXPAND);
#endif
#ifndef glXCreateNewContext_RETURN
#define glXCreateNewContext_RETURN GLXContext
#define glXCreateNewContext_ARG_NAMES dpy, config, render_type, share_list, direct
#define glXCreateNewContext_ARG_EXPAND Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct
#define glXCreateNewContext_ARG_NAMES_TAIL , dpy, config, render_type, share_list, direct
#define glXCreateNewContext_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct
#define forward_glXCreateNewContext(_dpy, _config, _render_type, _share_list, _direct) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreateNewContext_PACKED)); \
        GLXContext ret = (GLXContext)0; \
        remote_dma_send((packed_call_t *)pack_glXCreateNewContext(dst, _dpy, _config, _render_type, _share_list, _direct), &ret); \
        ret; \
    });
#define call_glXCreateNewContext(packed, ret_v) do { \
    glXCreateNewContext_PACKED *unpacked = (glXCreateNewContext_PACKED *)packed; \
    glXCreateNewContext_ARGS *args = (glXCreateNewContext_ARGS *)&unpacked->args; \
    GLXContext *ret = (GLXContext *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreateNewContext(args->dpy, args->config, args->render_type, args->share_list, args->direct);; \
    } else { \
        glXCreateNewContext(args->dpy, args->config, args->render_type, args->share_list, args->direct);; \
    } \
} while(0)
GLXContext glXCreateNewContext(glXCreateNewContext_ARG_EXPAND);
packed_call_t *pack_glXCreateNewContext(glXCreateNewContext_PACKED *_dst glXCreateNewContext_ARG_EXPAND_TAIL);
typedef GLXContext (*glXCreateNewContext_PTR)(glXCreateNewContext_ARG_EXPAND);
#endif
#ifndef glXCreatePbuffer_RETURN
#define glXCreatePbuffer_RETURN GLXPbuffer
#define glXCreatePbuffer_ARG_NAMES dpy, config, attrib_list
#define glXCreatePbuffer_ARG_EXPAND Display * dpy, GLXFBConfig config, const int * attrib_list
#define glXCreatePbuffer_ARG_NAMES_TAIL , dpy, config, attrib_list
#define glXCreatePbuffer_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfig config, const int * attrib_list
#define forward_glXCreatePbuffer(_dpy, _config, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreatePbuffer_PACKED)); \
        GLXPbuffer ret = (GLXPbuffer)0; \
        remote_dma_send((packed_call_t *)pack_glXCreatePbuffer(dst, _dpy, _config, _attrib_list), &ret); \
        ret; \
    });
#define call_glXCreatePbuffer(packed, ret_v) do { \
    glXCreatePbuffer_PACKED *unpacked = (glXCreatePbuffer_PACKED *)packed; \
    glXCreatePbuffer_ARGS *args = (glXCreatePbuffer_ARGS *)&unpacked->args; \
    GLXPbuffer *ret = (GLXPbuffer *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreatePbuffer(args->dpy, args->config, args->attrib_list);; \
    } else { \
        glXCreatePbuffer(args->dpy, args->config, args->attrib_list);; \
    } \
} while(0)
GLXPbuffer glXCreatePbuffer(glXCreatePbuffer_ARG_EXPAND);
packed_call_t *pack_glXCreatePbuffer(glXCreatePbuffer_PACKED *_dst glXCreatePbuffer_ARG_EXPAND_TAIL);
typedef GLXPbuffer (*glXCreatePbuffer_PTR)(glXCreatePbuffer_ARG_EXPAND);
#endif
#ifndef glXCreatePixmap_RETURN
#define glXCreatePixmap_RETURN GLXPixmap
#define glXCreatePixmap_ARG_NAMES dpy, config, pixmap, attrib_list
#define glXCreatePixmap_ARG_EXPAND Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list
#define glXCreatePixmap_ARG_NAMES_TAIL , dpy, config, pixmap, attrib_list
#define glXCreatePixmap_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list
#define forward_glXCreatePixmap(_dpy, _config, _pixmap, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreatePixmap_PACKED)); \
        GLXPixmap ret = (GLXPixmap)0; \
        remote_dma_send((packed_call_t *)pack_glXCreatePixmap(dst, _dpy, _config, _pixmap, _attrib_list), &ret); \
        ret; \
    });
#define call_glXCreatePixmap(packed, ret_v) do { \
    glXCreatePixmap_PACKED *unpacked = (glXCreatePixmap_PACKED *)packed; \
    glXCreatePixmap_ARGS *args = (glXCreatePixmap_ARGS *)&unpacked->args; \
    GLXPixmap *ret = (GLXPixmap *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreatePixmap(args->dpy, args->config, args->pixmap, args->attrib_list);; \
    } else { \
        glXCreatePixmap(args->dpy, args->config, args->pixmap, args->attrib_list);; \
    } \
} while(0)
GLXPixmap glXCreatePixmap(glXCreatePixmap_ARG_EXPAND);
packed_call_t *pack_glXCreatePixmap(glXCreatePixmap_PACKED *_dst glXCreatePixmap_ARG_EXPAND_TAIL);
typedef GLXPixmap (*glXCreatePixmap_PTR)(glXCreatePixmap_ARG_EXPAND);
#endif
#ifndef glXCreateWindow_RETURN
#define glXCreateWindow_RETURN GLXWindow
#define glXCreateWindow_ARG_NAMES dpy, config, win, attrib_list
#define glXCreateWindow_ARG_EXPAND Display * dpy, GLXFBConfig config, Window win, const int * attrib_list
#define glXCreateWindow_ARG_NAMES_TAIL , dpy, config, win, attrib_list
#define glXCreateWindow_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfig config, Window win, const int * attrib_list
#define forward_glXCreateWindow(_dpy, _config, _win, _attrib_list) \
    ({ \
        void *dst = remote_dma(sizeof(glXCreateWindow_PACKED)); \
        GLXWindow ret = (GLXWindow)0; \
        remote_dma_send((packed_call_t *)pack_glXCreateWindow(dst, _dpy, _config, _win, _attrib_list), &ret); \
        ret; \
    });
#define call_glXCreateWindow(packed, ret_v) do { \
    glXCreateWindow_PACKED *unpacked = (glXCreateWindow_PACKED *)packed; \
    glXCreateWindow_ARGS *args = (glXCreateWindow_ARGS *)&unpacked->args; \
    GLXWindow *ret = (GLXWindow *)ret_v; \
    if (ret != NULL) { \
        *ret = glXCreateWindow(args->dpy, args->config, args->win, args->attrib_list);; \
    } else { \
        glXCreateWindow(args->dpy, args->config, args->win, args->attrib_list);; \
    } \
} while(0)
GLXWindow glXCreateWindow(glXCreateWindow_ARG_EXPAND);
packed_call_t *pack_glXCreateWindow(glXCreateWindow_PACKED *_dst glXCreateWindow_ARG_EXPAND_TAIL);
typedef GLXWindow (*glXCreateWindow_PTR)(glXCreateWindow_ARG_EXPAND);
#endif
#ifndef glXCushionSGI_RETURN
#define glXCushionSGI_RETURN void
#define glXCushionSGI_ARG_NAMES dpy, window, cushion
#define glXCushionSGI_ARG_EXPAND Display * dpy, Window window, float cushion
#define glXCushionSGI_ARG_NAMES_TAIL , dpy, window, cushion
#define glXCushionSGI_ARG_EXPAND_TAIL , Display * dpy, Window window, float cushion
#define forward_glXCushionSGI(_dpy, _window, _cushion) \
    ({ \
        void *dst = remote_dma(sizeof(glXCushionSGI_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXCushionSGI(dst, _dpy, _window, _cushion), NULL); \
    });
#define call_glXCushionSGI(packed, ret_v) do { \
    glXCushionSGI_PACKED *unpacked = (glXCushionSGI_PACKED *)packed; \
    glXCushionSGI_ARGS *args = (glXCushionSGI_ARGS *)&unpacked->args; \
    glXCushionSGI(args->dpy, args->window, args->cushion);; \
} while(0)
void glXCushionSGI(glXCushionSGI_ARG_EXPAND);
packed_call_t *pack_glXCushionSGI(glXCushionSGI_PACKED *_dst glXCushionSGI_ARG_EXPAND_TAIL);
typedef void (*glXCushionSGI_PTR)(glXCushionSGI_ARG_EXPAND);
#endif
#ifndef glXDestroyContext_RETURN
#define glXDestroyContext_RETURN void
#define glXDestroyContext_ARG_NAMES dpy, ctx
#define glXDestroyContext_ARG_EXPAND Display * dpy, GLXContext ctx
#define glXDestroyContext_ARG_NAMES_TAIL , dpy, ctx
#define glXDestroyContext_ARG_EXPAND_TAIL , Display * dpy, GLXContext ctx
#define forward_glXDestroyContext(_dpy, _ctx) \
    ({ \
        void *dst = remote_dma(sizeof(glXDestroyContext_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXDestroyContext(dst, _dpy, _ctx), NULL); \
    });
#define call_glXDestroyContext(packed, ret_v) do { \
    glXDestroyContext_PACKED *unpacked = (glXDestroyContext_PACKED *)packed; \
    glXDestroyContext_ARGS *args = (glXDestroyContext_ARGS *)&unpacked->args; \
    glXDestroyContext(args->dpy, args->ctx);; \
} while(0)
void glXDestroyContext(glXDestroyContext_ARG_EXPAND);
packed_call_t *pack_glXDestroyContext(glXDestroyContext_PACKED *_dst glXDestroyContext_ARG_EXPAND_TAIL);
typedef void (*glXDestroyContext_PTR)(glXDestroyContext_ARG_EXPAND);
#endif
#ifndef glXDestroyGLXPbufferSGIX_RETURN
#define glXDestroyGLXPbufferSGIX_RETURN void
#define glXDestroyGLXPbufferSGIX_ARG_NAMES dpy, pbuf
#define glXDestroyGLXPbufferSGIX_ARG_EXPAND Display * dpy, GLXPbufferSGIX pbuf
#define glXDestroyGLXPbufferSGIX_ARG_NAMES_TAIL , dpy, pbuf
#define glXDestroyGLXPbufferSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXPbufferSGIX pbuf
#define forward_glXDestroyGLXPbufferSGIX(_dpy, _pbuf) \
    ({ \
        void *dst = remote_dma(sizeof(glXDestroyGLXPbufferSGIX_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXDestroyGLXPbufferSGIX(dst, _dpy, _pbuf), NULL); \
    });
#define call_glXDestroyGLXPbufferSGIX(packed, ret_v) do { \
    glXDestroyGLXPbufferSGIX_PACKED *unpacked = (glXDestroyGLXPbufferSGIX_PACKED *)packed; \
    glXDestroyGLXPbufferSGIX_ARGS *args = (glXDestroyGLXPbufferSGIX_ARGS *)&unpacked->args; \
    glXDestroyGLXPbufferSGIX(args->dpy, args->pbuf);; \
} while(0)
void glXDestroyGLXPbufferSGIX(glXDestroyGLXPbufferSGIX_ARG_EXPAND);
packed_call_t *pack_glXDestroyGLXPbufferSGIX(glXDestroyGLXPbufferSGIX_PACKED *_dst glXDestroyGLXPbufferSGIX_ARG_EXPAND_TAIL);
typedef void (*glXDestroyGLXPbufferSGIX_PTR)(glXDestroyGLXPbufferSGIX_ARG_EXPAND);
#endif
#ifndef glXDestroyGLXPixmap_RETURN
#define glXDestroyGLXPixmap_RETURN void
#define glXDestroyGLXPixmap_ARG_NAMES dpy, pixmap
#define glXDestroyGLXPixmap_ARG_EXPAND Display * dpy, GLXPixmap pixmap
#define glXDestroyGLXPixmap_ARG_NAMES_TAIL , dpy, pixmap
#define glXDestroyGLXPixmap_ARG_EXPAND_TAIL , Display * dpy, GLXPixmap pixmap
#define forward_glXDestroyGLXPixmap(_dpy, _pixmap) \
    ({ \
        void *dst = remote_dma(sizeof(glXDestroyGLXPixmap_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXDestroyGLXPixmap(dst, _dpy, _pixmap), NULL); \
    });
#define call_glXDestroyGLXPixmap(packed, ret_v) do { \
    glXDestroyGLXPixmap_PACKED *unpacked = (glXDestroyGLXPixmap_PACKED *)packed; \
    glXDestroyGLXPixmap_ARGS *args = (glXDestroyGLXPixmap_ARGS *)&unpacked->args; \
    glXDestroyGLXPixmap(args->dpy, args->pixmap);; \
} while(0)
void glXDestroyGLXPixmap(glXDestroyGLXPixmap_ARG_EXPAND);
packed_call_t *pack_glXDestroyGLXPixmap(glXDestroyGLXPixmap_PACKED *_dst glXDestroyGLXPixmap_ARG_EXPAND_TAIL);
typedef void (*glXDestroyGLXPixmap_PTR)(glXDestroyGLXPixmap_ARG_EXPAND);
#endif
#ifndef glXDestroyGLXVideoSourceSGIX_RETURN
#define glXDestroyGLXVideoSourceSGIX_RETURN void
#define glXDestroyGLXVideoSourceSGIX_ARG_NAMES dpy, glxvideosource
#define glXDestroyGLXVideoSourceSGIX_ARG_EXPAND Display * dpy, GLXVideoSourceSGIX glxvideosource
#define glXDestroyGLXVideoSourceSGIX_ARG_NAMES_TAIL , dpy, glxvideosource
#define glXDestroyGLXVideoSourceSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXVideoSourceSGIX glxvideosource
#define forward_glXDestroyGLXVideoSourceSGIX(_dpy, _glxvideosource) \
    ({ \
        void *dst = remote_dma(sizeof(glXDestroyGLXVideoSourceSGIX_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXDestroyGLXVideoSourceSGIX(dst, _dpy, _glxvideosource), NULL); \
    });
#define call_glXDestroyGLXVideoSourceSGIX(packed, ret_v) do { \
    glXDestroyGLXVideoSourceSGIX_PACKED *unpacked = (glXDestroyGLXVideoSourceSGIX_PACKED *)packed; \
    glXDestroyGLXVideoSourceSGIX_ARGS *args = (glXDestroyGLXVideoSourceSGIX_ARGS *)&unpacked->args; \
    glXDestroyGLXVideoSourceSGIX(args->dpy, args->glxvideosource);; \
} while(0)
void glXDestroyGLXVideoSourceSGIX(glXDestroyGLXVideoSourceSGIX_ARG_EXPAND);
packed_call_t *pack_glXDestroyGLXVideoSourceSGIX(glXDestroyGLXVideoSourceSGIX_PACKED *_dst glXDestroyGLXVideoSourceSGIX_ARG_EXPAND_TAIL);
typedef void (*glXDestroyGLXVideoSourceSGIX_PTR)(glXDestroyGLXVideoSourceSGIX_ARG_EXPAND);
#endif
#ifndef glXDestroyHyperpipeConfigSGIX_RETURN
#define glXDestroyHyperpipeConfigSGIX_RETURN int
#define glXDestroyHyperpipeConfigSGIX_ARG_NAMES dpy, hpId
#define glXDestroyHyperpipeConfigSGIX_ARG_EXPAND Display * dpy, int hpId
#define glXDestroyHyperpipeConfigSGIX_ARG_NAMES_TAIL , dpy, hpId
#define glXDestroyHyperpipeConfigSGIX_ARG_EXPAND_TAIL , Display * dpy, int hpId
#define forward_glXDestroyHyperpipeConfigSGIX(_dpy, _hpId) \
    ({ \
        void *dst = remote_dma(sizeof(glXDestroyHyperpipeConfigSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXDestroyHyperpipeConfigSGIX(dst, _dpy, _hpId), &ret); \
        ret; \
    });
#define call_glXDestroyHyperpipeConfigSGIX(packed, ret_v) do { \
    glXDestroyHyperpipeConfigSGIX_PACKED *unpacked = (glXDestroyHyperpipeConfigSGIX_PACKED *)packed; \
    glXDestroyHyperpipeConfigSGIX_ARGS *args = (glXDestroyHyperpipeConfigSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXDestroyHyperpipeConfigSGIX(args->dpy, args->hpId);; \
    } else { \
        glXDestroyHyperpipeConfigSGIX(args->dpy, args->hpId);; \
    } \
} while(0)
int glXDestroyHyperpipeConfigSGIX(glXDestroyHyperpipeConfigSGIX_ARG_EXPAND);
packed_call_t *pack_glXDestroyHyperpipeConfigSGIX(glXDestroyHyperpipeConfigSGIX_PACKED *_dst glXDestroyHyperpipeConfigSGIX_ARG_EXPAND_TAIL);
typedef int (*glXDestroyHyperpipeConfigSGIX_PTR)(glXDestroyHyperpipeConfigSGIX_ARG_EXPAND);
#endif
#ifndef glXDestroyPbuffer_RETURN
#define glXDestroyPbuffer_RETURN void
#define glXDestroyPbuffer_ARG_NAMES dpy, pbuf
#define glXDestroyPbuffer_ARG_EXPAND Display * dpy, GLXPbuffer pbuf
#define glXDestroyPbuffer_ARG_NAMES_TAIL , dpy, pbuf
#define glXDestroyPbuffer_ARG_EXPAND_TAIL , Display * dpy, GLXPbuffer pbuf
#define forward_glXDestroyPbuffer(_dpy, _pbuf) \
    ({ \
        void *dst = remote_dma(sizeof(glXDestroyPbuffer_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXDestroyPbuffer(dst, _dpy, _pbuf), NULL); \
    });
#define call_glXDestroyPbuffer(packed, ret_v) do { \
    glXDestroyPbuffer_PACKED *unpacked = (glXDestroyPbuffer_PACKED *)packed; \
    glXDestroyPbuffer_ARGS *args = (glXDestroyPbuffer_ARGS *)&unpacked->args; \
    glXDestroyPbuffer(args->dpy, args->pbuf);; \
} while(0)
void glXDestroyPbuffer(glXDestroyPbuffer_ARG_EXPAND);
packed_call_t *pack_glXDestroyPbuffer(glXDestroyPbuffer_PACKED *_dst glXDestroyPbuffer_ARG_EXPAND_TAIL);
typedef void (*glXDestroyPbuffer_PTR)(glXDestroyPbuffer_ARG_EXPAND);
#endif
#ifndef glXDestroyPixmap_RETURN
#define glXDestroyPixmap_RETURN void
#define glXDestroyPixmap_ARG_NAMES dpy, pixmap
#define glXDestroyPixmap_ARG_EXPAND Display * dpy, GLXPixmap pixmap
#define glXDestroyPixmap_ARG_NAMES_TAIL , dpy, pixmap
#define glXDestroyPixmap_ARG_EXPAND_TAIL , Display * dpy, GLXPixmap pixmap
#define forward_glXDestroyPixmap(_dpy, _pixmap) \
    ({ \
        void *dst = remote_dma(sizeof(glXDestroyPixmap_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXDestroyPixmap(dst, _dpy, _pixmap), NULL); \
    });
#define call_glXDestroyPixmap(packed, ret_v) do { \
    glXDestroyPixmap_PACKED *unpacked = (glXDestroyPixmap_PACKED *)packed; \
    glXDestroyPixmap_ARGS *args = (glXDestroyPixmap_ARGS *)&unpacked->args; \
    glXDestroyPixmap(args->dpy, args->pixmap);; \
} while(0)
void glXDestroyPixmap(glXDestroyPixmap_ARG_EXPAND);
packed_call_t *pack_glXDestroyPixmap(glXDestroyPixmap_PACKED *_dst glXDestroyPixmap_ARG_EXPAND_TAIL);
typedef void (*glXDestroyPixmap_PTR)(glXDestroyPixmap_ARG_EXPAND);
#endif
#ifndef glXDestroyWindow_RETURN
#define glXDestroyWindow_RETURN void
#define glXDestroyWindow_ARG_NAMES dpy, win
#define glXDestroyWindow_ARG_EXPAND Display * dpy, GLXWindow win
#define glXDestroyWindow_ARG_NAMES_TAIL , dpy, win
#define glXDestroyWindow_ARG_EXPAND_TAIL , Display * dpy, GLXWindow win
#define forward_glXDestroyWindow(_dpy, _win) \
    ({ \
        void *dst = remote_dma(sizeof(glXDestroyWindow_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXDestroyWindow(dst, _dpy, _win), NULL); \
    });
#define call_glXDestroyWindow(packed, ret_v) do { \
    glXDestroyWindow_PACKED *unpacked = (glXDestroyWindow_PACKED *)packed; \
    glXDestroyWindow_ARGS *args = (glXDestroyWindow_ARGS *)&unpacked->args; \
    glXDestroyWindow(args->dpy, args->win);; \
} while(0)
void glXDestroyWindow(glXDestroyWindow_ARG_EXPAND);
packed_call_t *pack_glXDestroyWindow(glXDestroyWindow_PACKED *_dst glXDestroyWindow_ARG_EXPAND_TAIL);
typedef void (*glXDestroyWindow_PTR)(glXDestroyWindow_ARG_EXPAND);
#endif
#ifndef glXEnumerateVideoCaptureDevicesNV_RETURN
#define glXEnumerateVideoCaptureDevicesNV_RETURN GLXVideoCaptureDeviceNV *
#define glXEnumerateVideoCaptureDevicesNV_ARG_NAMES dpy, screen, nelements
#define glXEnumerateVideoCaptureDevicesNV_ARG_EXPAND Display * dpy, int screen, int * nelements
#define glXEnumerateVideoCaptureDevicesNV_ARG_NAMES_TAIL , dpy, screen, nelements
#define glXEnumerateVideoCaptureDevicesNV_ARG_EXPAND_TAIL , Display * dpy, int screen, int * nelements
#define forward_glXEnumerateVideoCaptureDevicesNV(_dpy, _screen, _nelements) \
    ({ \
        void *dst = remote_dma(sizeof(glXEnumerateVideoCaptureDevicesNV_PACKED)); \
        GLXVideoCaptureDeviceNV * ret = (GLXVideoCaptureDeviceNV *)0; \
        remote_dma_send((packed_call_t *)pack_glXEnumerateVideoCaptureDevicesNV(dst, _dpy, _screen, _nelements), &ret); \
        ret; \
    });
#define call_glXEnumerateVideoCaptureDevicesNV(packed, ret_v) do { \
    glXEnumerateVideoCaptureDevicesNV_PACKED *unpacked = (glXEnumerateVideoCaptureDevicesNV_PACKED *)packed; \
    glXEnumerateVideoCaptureDevicesNV_ARGS *args = (glXEnumerateVideoCaptureDevicesNV_ARGS *)&unpacked->args; \
    GLXVideoCaptureDeviceNV * *ret = (GLXVideoCaptureDeviceNV * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXEnumerateVideoCaptureDevicesNV(args->dpy, args->screen, args->nelements);; \
    } else { \
        glXEnumerateVideoCaptureDevicesNV(args->dpy, args->screen, args->nelements);; \
    } \
} while(0)
GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV(glXEnumerateVideoCaptureDevicesNV_ARG_EXPAND);
packed_call_t *pack_glXEnumerateVideoCaptureDevicesNV(glXEnumerateVideoCaptureDevicesNV_PACKED *_dst glXEnumerateVideoCaptureDevicesNV_ARG_EXPAND_TAIL);
typedef GLXVideoCaptureDeviceNV * (*glXEnumerateVideoCaptureDevicesNV_PTR)(glXEnumerateVideoCaptureDevicesNV_ARG_EXPAND);
#endif
#ifndef glXEnumerateVideoDevicesNV_RETURN
#define glXEnumerateVideoDevicesNV_RETURN unsigned int *
#define glXEnumerateVideoDevicesNV_ARG_NAMES dpy, screen, nelements
#define glXEnumerateVideoDevicesNV_ARG_EXPAND Display * dpy, int screen, int * nelements
#define glXEnumerateVideoDevicesNV_ARG_NAMES_TAIL , dpy, screen, nelements
#define glXEnumerateVideoDevicesNV_ARG_EXPAND_TAIL , Display * dpy, int screen, int * nelements
#define forward_glXEnumerateVideoDevicesNV(_dpy, _screen, _nelements) \
    ({ \
        void *dst = remote_dma(sizeof(glXEnumerateVideoDevicesNV_PACKED)); \
        unsigned int * ret = (unsigned int *)0; \
        remote_dma_send((packed_call_t *)pack_glXEnumerateVideoDevicesNV(dst, _dpy, _screen, _nelements), &ret); \
        ret; \
    });
#define call_glXEnumerateVideoDevicesNV(packed, ret_v) do { \
    glXEnumerateVideoDevicesNV_PACKED *unpacked = (glXEnumerateVideoDevicesNV_PACKED *)packed; \
    glXEnumerateVideoDevicesNV_ARGS *args = (glXEnumerateVideoDevicesNV_ARGS *)&unpacked->args; \
    unsigned int * *ret = (unsigned int * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXEnumerateVideoDevicesNV(args->dpy, args->screen, args->nelements);; \
    } else { \
        glXEnumerateVideoDevicesNV(args->dpy, args->screen, args->nelements);; \
    } \
} while(0)
unsigned int * glXEnumerateVideoDevicesNV(glXEnumerateVideoDevicesNV_ARG_EXPAND);
packed_call_t *pack_glXEnumerateVideoDevicesNV(glXEnumerateVideoDevicesNV_PACKED *_dst glXEnumerateVideoDevicesNV_ARG_EXPAND_TAIL);
typedef unsigned int * (*glXEnumerateVideoDevicesNV_PTR)(glXEnumerateVideoDevicesNV_ARG_EXPAND);
#endif
#ifndef glXFreeContextEXT_RETURN
#define glXFreeContextEXT_RETURN void
#define glXFreeContextEXT_ARG_NAMES dpy, context
#define glXFreeContextEXT_ARG_EXPAND Display * dpy, GLXContext context
#define glXFreeContextEXT_ARG_NAMES_TAIL , dpy, context
#define glXFreeContextEXT_ARG_EXPAND_TAIL , Display * dpy, GLXContext context
#define forward_glXFreeContextEXT(_dpy, _context) \
    ({ \
        void *dst = remote_dma(sizeof(glXFreeContextEXT_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXFreeContextEXT(dst, _dpy, _context), NULL); \
    });
#define call_glXFreeContextEXT(packed, ret_v) do { \
    glXFreeContextEXT_PACKED *unpacked = (glXFreeContextEXT_PACKED *)packed; \
    glXFreeContextEXT_ARGS *args = (glXFreeContextEXT_ARGS *)&unpacked->args; \
    glXFreeContextEXT(args->dpy, args->context);; \
} while(0)
void glXFreeContextEXT(glXFreeContextEXT_ARG_EXPAND);
packed_call_t *pack_glXFreeContextEXT(glXFreeContextEXT_PACKED *_dst glXFreeContextEXT_ARG_EXPAND_TAIL);
typedef void (*glXFreeContextEXT_PTR)(glXFreeContextEXT_ARG_EXPAND);
#endif
#ifndef glXGetAGPOffsetMESA_RETURN
#define glXGetAGPOffsetMESA_RETURN unsigned int
#define glXGetAGPOffsetMESA_ARG_NAMES pointer
#define glXGetAGPOffsetMESA_ARG_EXPAND const void * pointer
#define glXGetAGPOffsetMESA_ARG_NAMES_TAIL , pointer
#define glXGetAGPOffsetMESA_ARG_EXPAND_TAIL , const void * pointer
#define forward_glXGetAGPOffsetMESA(_pointer) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetAGPOffsetMESA_PACKED)); \
        unsigned int ret = (unsigned int)0; \
        remote_dma_send((packed_call_t *)pack_glXGetAGPOffsetMESA(dst, _pointer), &ret); \
        ret; \
    });
#define call_glXGetAGPOffsetMESA(packed, ret_v) do { \
    glXGetAGPOffsetMESA_PACKED *unpacked = (glXGetAGPOffsetMESA_PACKED *)packed; \
    glXGetAGPOffsetMESA_ARGS *args = (glXGetAGPOffsetMESA_ARGS *)&unpacked->args; \
    unsigned int *ret = (unsigned int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetAGPOffsetMESA(args->pointer);; \
    } else { \
        glXGetAGPOffsetMESA(args->pointer);; \
    } \
} while(0)
unsigned int glXGetAGPOffsetMESA(glXGetAGPOffsetMESA_ARG_EXPAND);
packed_call_t *pack_glXGetAGPOffsetMESA(glXGetAGPOffsetMESA_PACKED *_dst glXGetAGPOffsetMESA_ARG_EXPAND_TAIL);
typedef unsigned int (*glXGetAGPOffsetMESA_PTR)(glXGetAGPOffsetMESA_ARG_EXPAND);
#endif
#ifndef glXGetClientString_RETURN
#define glXGetClientString_RETURN const char *
#define glXGetClientString_ARG_NAMES display, name
#define glXGetClientString_ARG_EXPAND Display * display, int name
#define glXGetClientString_ARG_NAMES_TAIL , display, name
#define glXGetClientString_ARG_EXPAND_TAIL , Display * display, int name
#define forward_glXGetClientString(_display, _name) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetClientString_PACKED)); \
        const char * ret = (const char *)0; \
        remote_dma_send((packed_call_t *)pack_glXGetClientString(dst, _display, _name), &ret); \
        ret; \
    });
#define call_glXGetClientString(packed, ret_v) do { \
    glXGetClientString_PACKED *unpacked = (glXGetClientString_PACKED *)packed; \
    glXGetClientString_ARGS *args = (glXGetClientString_ARGS *)&unpacked->args; \
    const char * *ret = (const char * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetClientString(args->display, args->name);; \
    } else { \
        glXGetClientString(args->display, args->name);; \
    } \
} while(0)
const char * glXGetClientString(glXGetClientString_ARG_EXPAND);
packed_call_t *pack_glXGetClientString(glXGetClientString_PACKED *_dst glXGetClientString_ARG_EXPAND_TAIL);
typedef const char * (*glXGetClientString_PTR)(glXGetClientString_ARG_EXPAND);
#endif
#ifndef glXGetConfig_RETURN
#define glXGetConfig_RETURN int
#define glXGetConfig_ARG_NAMES display, visual, attribute, value
#define glXGetConfig_ARG_EXPAND Display * display, XVisualInfo * visual, int attribute, int * value
#define glXGetConfig_ARG_NAMES_TAIL , display, visual, attribute, value
#define glXGetConfig_ARG_EXPAND_TAIL , Display * display, XVisualInfo * visual, int attribute, int * value
#define forward_glXGetConfig(_display, _visual, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetConfig_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXGetConfig(dst, _display, _visual, _attribute, _value), &ret); \
        ret; \
    });
#define call_glXGetConfig(packed, ret_v) do { \
    glXGetConfig_PACKED *unpacked = (glXGetConfig_PACKED *)packed; \
    glXGetConfig_ARGS *args = (glXGetConfig_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetConfig(args->display, args->visual, args->attribute, args->value);; \
    } else { \
        glXGetConfig(args->display, args->visual, args->attribute, args->value);; \
    } \
} while(0)
int glXGetConfig(glXGetConfig_ARG_EXPAND);
packed_call_t *pack_glXGetConfig(glXGetConfig_PACKED *_dst glXGetConfig_ARG_EXPAND_TAIL);
typedef int (*glXGetConfig_PTR)(glXGetConfig_ARG_EXPAND);
#endif
#ifndef glXGetContextIDEXT_RETURN
#define glXGetContextIDEXT_RETURN GLXContextID
#define glXGetContextIDEXT_ARG_NAMES context
#define glXGetContextIDEXT_ARG_EXPAND const GLXContext context
#define glXGetContextIDEXT_ARG_NAMES_TAIL , context
#define glXGetContextIDEXT_ARG_EXPAND_TAIL , const GLXContext context
#define forward_glXGetContextIDEXT(_context) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetContextIDEXT_PACKED)); \
        GLXContextID ret = (GLXContextID)0; \
        remote_dma_send((packed_call_t *)pack_glXGetContextIDEXT(dst, _context), &ret); \
        ret; \
    });
#define call_glXGetContextIDEXT(packed, ret_v) do { \
    glXGetContextIDEXT_PACKED *unpacked = (glXGetContextIDEXT_PACKED *)packed; \
    glXGetContextIDEXT_ARGS *args = (glXGetContextIDEXT_ARGS *)&unpacked->args; \
    GLXContextID *ret = (GLXContextID *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetContextIDEXT(args->context);; \
    } else { \
        glXGetContextIDEXT(args->context);; \
    } \
} while(0)
GLXContextID glXGetContextIDEXT(glXGetContextIDEXT_ARG_EXPAND);
packed_call_t *pack_glXGetContextIDEXT(glXGetContextIDEXT_PACKED *_dst glXGetContextIDEXT_ARG_EXPAND_TAIL);
typedef GLXContextID (*glXGetContextIDEXT_PTR)(glXGetContextIDEXT_ARG_EXPAND);
#endif
#ifndef glXGetCurrentContext_RETURN
#define glXGetCurrentContext_RETURN GLXContext
#define glXGetCurrentContext_ARG_NAMES 
#define glXGetCurrentContext_ARG_EXPAND 
#define glXGetCurrentContext_ARG_NAMES_TAIL 
#define glXGetCurrentContext_ARG_EXPAND_TAIL 
#define forward_glXGetCurrentContext() \
    ({ \
        void *dst = remote_dma(sizeof(glXGetCurrentContext_PACKED)); \
        GLXContext ret = (GLXContext)0; \
        remote_dma_send((packed_call_t *)pack_glXGetCurrentContext(dst), &ret); \
        ret; \
    });
#define call_glXGetCurrentContext(packed, ret_v) do { \
    GLXContext *ret = (GLXContext *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetCurrentContext();; \
    } else { \
        glXGetCurrentContext();; \
    } \
} while(0)
GLXContext glXGetCurrentContext(glXGetCurrentContext_ARG_EXPAND);
packed_call_t *pack_glXGetCurrentContext(glXGetCurrentContext_PACKED *_dst glXGetCurrentContext_ARG_EXPAND_TAIL);
typedef GLXContext (*glXGetCurrentContext_PTR)(glXGetCurrentContext_ARG_EXPAND);
#endif
#ifndef glXGetCurrentDisplay_RETURN
#define glXGetCurrentDisplay_RETURN Display *
#define glXGetCurrentDisplay_ARG_NAMES 
#define glXGetCurrentDisplay_ARG_EXPAND 
#define glXGetCurrentDisplay_ARG_NAMES_TAIL 
#define glXGetCurrentDisplay_ARG_EXPAND_TAIL 
#define forward_glXGetCurrentDisplay() \
    ({ \
        void *dst = remote_dma(sizeof(glXGetCurrentDisplay_PACKED)); \
        Display * ret = (Display *)0; \
        remote_dma_send((packed_call_t *)pack_glXGetCurrentDisplay(dst), &ret); \
        ret; \
    });
#define call_glXGetCurrentDisplay(packed, ret_v) do { \
    Display * *ret = (Display * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetCurrentDisplay();; \
    } else { \
        glXGetCurrentDisplay();; \
    } \
} while(0)
Display * glXGetCurrentDisplay(glXGetCurrentDisplay_ARG_EXPAND);
packed_call_t *pack_glXGetCurrentDisplay(glXGetCurrentDisplay_PACKED *_dst glXGetCurrentDisplay_ARG_EXPAND_TAIL);
typedef Display * (*glXGetCurrentDisplay_PTR)(glXGetCurrentDisplay_ARG_EXPAND);
#endif
#ifndef glXGetCurrentDisplayEXT_RETURN
#define glXGetCurrentDisplayEXT_RETURN Display *
#define glXGetCurrentDisplayEXT_ARG_NAMES 
#define glXGetCurrentDisplayEXT_ARG_EXPAND 
#define glXGetCurrentDisplayEXT_ARG_NAMES_TAIL 
#define glXGetCurrentDisplayEXT_ARG_EXPAND_TAIL 
#define forward_glXGetCurrentDisplayEXT() \
    ({ \
        void *dst = remote_dma(sizeof(glXGetCurrentDisplayEXT_PACKED)); \
        Display * ret = (Display *)0; \
        remote_dma_send((packed_call_t *)pack_glXGetCurrentDisplayEXT(dst), &ret); \
        ret; \
    });
#define call_glXGetCurrentDisplayEXT(packed, ret_v) do { \
    Display * *ret = (Display * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetCurrentDisplayEXT();; \
    } else { \
        glXGetCurrentDisplayEXT();; \
    } \
} while(0)
Display * glXGetCurrentDisplayEXT(glXGetCurrentDisplayEXT_ARG_EXPAND);
packed_call_t *pack_glXGetCurrentDisplayEXT(glXGetCurrentDisplayEXT_PACKED *_dst glXGetCurrentDisplayEXT_ARG_EXPAND_TAIL);
typedef Display * (*glXGetCurrentDisplayEXT_PTR)(glXGetCurrentDisplayEXT_ARG_EXPAND);
#endif
#ifndef glXGetCurrentDrawable_RETURN
#define glXGetCurrentDrawable_RETURN GLXDrawable
#define glXGetCurrentDrawable_ARG_NAMES 
#define glXGetCurrentDrawable_ARG_EXPAND 
#define glXGetCurrentDrawable_ARG_NAMES_TAIL 
#define glXGetCurrentDrawable_ARG_EXPAND_TAIL 
#define forward_glXGetCurrentDrawable() \
    ({ \
        void *dst = remote_dma(sizeof(glXGetCurrentDrawable_PACKED)); \
        GLXDrawable ret = (GLXDrawable)0; \
        remote_dma_send((packed_call_t *)pack_glXGetCurrentDrawable(dst), &ret); \
        ret; \
    });
#define call_glXGetCurrentDrawable(packed, ret_v) do { \
    GLXDrawable *ret = (GLXDrawable *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetCurrentDrawable();; \
    } else { \
        glXGetCurrentDrawable();; \
    } \
} while(0)
GLXDrawable glXGetCurrentDrawable(glXGetCurrentDrawable_ARG_EXPAND);
packed_call_t *pack_glXGetCurrentDrawable(glXGetCurrentDrawable_PACKED *_dst glXGetCurrentDrawable_ARG_EXPAND_TAIL);
typedef GLXDrawable (*glXGetCurrentDrawable_PTR)(glXGetCurrentDrawable_ARG_EXPAND);
#endif
#ifndef glXGetCurrentReadDrawable_RETURN
#define glXGetCurrentReadDrawable_RETURN GLXDrawable
#define glXGetCurrentReadDrawable_ARG_NAMES 
#define glXGetCurrentReadDrawable_ARG_EXPAND 
#define glXGetCurrentReadDrawable_ARG_NAMES_TAIL 
#define glXGetCurrentReadDrawable_ARG_EXPAND_TAIL 
#define forward_glXGetCurrentReadDrawable() \
    ({ \
        void *dst = remote_dma(sizeof(glXGetCurrentReadDrawable_PACKED)); \
        GLXDrawable ret = (GLXDrawable)0; \
        remote_dma_send((packed_call_t *)pack_glXGetCurrentReadDrawable(dst), &ret); \
        ret; \
    });
#define call_glXGetCurrentReadDrawable(packed, ret_v) do { \
    GLXDrawable *ret = (GLXDrawable *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetCurrentReadDrawable();; \
    } else { \
        glXGetCurrentReadDrawable();; \
    } \
} while(0)
GLXDrawable glXGetCurrentReadDrawable(glXGetCurrentReadDrawable_ARG_EXPAND);
packed_call_t *pack_glXGetCurrentReadDrawable(glXGetCurrentReadDrawable_PACKED *_dst glXGetCurrentReadDrawable_ARG_EXPAND_TAIL);
typedef GLXDrawable (*glXGetCurrentReadDrawable_PTR)(glXGetCurrentReadDrawable_ARG_EXPAND);
#endif
#ifndef glXGetCurrentReadDrawableSGI_RETURN
#define glXGetCurrentReadDrawableSGI_RETURN GLXDrawable
#define glXGetCurrentReadDrawableSGI_ARG_NAMES 
#define glXGetCurrentReadDrawableSGI_ARG_EXPAND 
#define glXGetCurrentReadDrawableSGI_ARG_NAMES_TAIL 
#define glXGetCurrentReadDrawableSGI_ARG_EXPAND_TAIL 
#define forward_glXGetCurrentReadDrawableSGI() \
    ({ \
        void *dst = remote_dma(sizeof(glXGetCurrentReadDrawableSGI_PACKED)); \
        GLXDrawable ret = (GLXDrawable)0; \
        remote_dma_send((packed_call_t *)pack_glXGetCurrentReadDrawableSGI(dst), &ret); \
        ret; \
    });
#define call_glXGetCurrentReadDrawableSGI(packed, ret_v) do { \
    GLXDrawable *ret = (GLXDrawable *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetCurrentReadDrawableSGI();; \
    } else { \
        glXGetCurrentReadDrawableSGI();; \
    } \
} while(0)
GLXDrawable glXGetCurrentReadDrawableSGI(glXGetCurrentReadDrawableSGI_ARG_EXPAND);
packed_call_t *pack_glXGetCurrentReadDrawableSGI(glXGetCurrentReadDrawableSGI_PACKED *_dst glXGetCurrentReadDrawableSGI_ARG_EXPAND_TAIL);
typedef GLXDrawable (*glXGetCurrentReadDrawableSGI_PTR)(glXGetCurrentReadDrawableSGI_ARG_EXPAND);
#endif
#ifndef glXGetDrawableAttributes_RETURN
#define glXGetDrawableAttributes_RETURN void
#define glXGetDrawableAttributes_ARG_NAMES drawable
#define glXGetDrawableAttributes_ARG_EXPAND uint32_t drawable
#define glXGetDrawableAttributes_ARG_NAMES_TAIL , drawable
#define glXGetDrawableAttributes_ARG_EXPAND_TAIL , uint32_t drawable
#define forward_glXGetDrawableAttributes(_drawable) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetDrawableAttributes_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXGetDrawableAttributes(dst, _drawable), NULL); \
    });
#define call_glXGetDrawableAttributes(packed, ret_v) do { \
    glXGetDrawableAttributes_PACKED *unpacked = (glXGetDrawableAttributes_PACKED *)packed; \
    glXGetDrawableAttributes_ARGS *args = (glXGetDrawableAttributes_ARGS *)&unpacked->args; \
    glXGetDrawableAttributes(args->drawable);; \
} while(0)
void glXGetDrawableAttributes(glXGetDrawableAttributes_ARG_EXPAND);
packed_call_t *pack_glXGetDrawableAttributes(glXGetDrawableAttributes_PACKED *_dst glXGetDrawableAttributes_ARG_EXPAND_TAIL);
typedef void (*glXGetDrawableAttributes_PTR)(glXGetDrawableAttributes_ARG_EXPAND);
#endif
#ifndef glXGetDrawableAttributesSGIX_RETURN
#define glXGetDrawableAttributesSGIX_RETURN void
#define glXGetDrawableAttributesSGIX_ARG_NAMES drawable
#define glXGetDrawableAttributesSGIX_ARG_EXPAND uint32_t drawable
#define glXGetDrawableAttributesSGIX_ARG_NAMES_TAIL , drawable
#define glXGetDrawableAttributesSGIX_ARG_EXPAND_TAIL , uint32_t drawable
#define forward_glXGetDrawableAttributesSGIX(_drawable) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetDrawableAttributesSGIX_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXGetDrawableAttributesSGIX(dst, _drawable), NULL); \
    });
#define call_glXGetDrawableAttributesSGIX(packed, ret_v) do { \
    glXGetDrawableAttributesSGIX_PACKED *unpacked = (glXGetDrawableAttributesSGIX_PACKED *)packed; \
    glXGetDrawableAttributesSGIX_ARGS *args = (glXGetDrawableAttributesSGIX_ARGS *)&unpacked->args; \
    glXGetDrawableAttributesSGIX(args->drawable);; \
} while(0)
void glXGetDrawableAttributesSGIX(glXGetDrawableAttributesSGIX_ARG_EXPAND);
packed_call_t *pack_glXGetDrawableAttributesSGIX(glXGetDrawableAttributesSGIX_PACKED *_dst glXGetDrawableAttributesSGIX_ARG_EXPAND_TAIL);
typedef void (*glXGetDrawableAttributesSGIX_PTR)(glXGetDrawableAttributesSGIX_ARG_EXPAND);
#endif
#ifndef glXGetFBConfigAttrib_RETURN
#define glXGetFBConfigAttrib_RETURN int
#define glXGetFBConfigAttrib_ARG_NAMES dpy, config, attribute, value
#define glXGetFBConfigAttrib_ARG_EXPAND Display * dpy, GLXFBConfig config, int attribute, int * value
#define glXGetFBConfigAttrib_ARG_NAMES_TAIL , dpy, config, attribute, value
#define glXGetFBConfigAttrib_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfig config, int attribute, int * value
#define forward_glXGetFBConfigAttrib(_dpy, _config, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetFBConfigAttrib_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXGetFBConfigAttrib(dst, _dpy, _config, _attribute, _value), &ret); \
        ret; \
    });
#define call_glXGetFBConfigAttrib(packed, ret_v) do { \
    glXGetFBConfigAttrib_PACKED *unpacked = (glXGetFBConfigAttrib_PACKED *)packed; \
    glXGetFBConfigAttrib_ARGS *args = (glXGetFBConfigAttrib_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetFBConfigAttrib(args->dpy, args->config, args->attribute, args->value);; \
    } else { \
        glXGetFBConfigAttrib(args->dpy, args->config, args->attribute, args->value);; \
    } \
} while(0)
int glXGetFBConfigAttrib(glXGetFBConfigAttrib_ARG_EXPAND);
packed_call_t *pack_glXGetFBConfigAttrib(glXGetFBConfigAttrib_PACKED *_dst glXGetFBConfigAttrib_ARG_EXPAND_TAIL);
typedef int (*glXGetFBConfigAttrib_PTR)(glXGetFBConfigAttrib_ARG_EXPAND);
#endif
#ifndef glXGetFBConfigAttribSGIX_RETURN
#define glXGetFBConfigAttribSGIX_RETURN int
#define glXGetFBConfigAttribSGIX_ARG_NAMES dpy, config, attribute, value
#define glXGetFBConfigAttribSGIX_ARG_EXPAND Display * dpy, GLXFBConfigSGIX config, int attribute, int * value
#define glXGetFBConfigAttribSGIX_ARG_NAMES_TAIL , dpy, config, attribute, value
#define glXGetFBConfigAttribSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfigSGIX config, int attribute, int * value
#define forward_glXGetFBConfigAttribSGIX(_dpy, _config, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetFBConfigAttribSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXGetFBConfigAttribSGIX(dst, _dpy, _config, _attribute, _value), &ret); \
        ret; \
    });
#define call_glXGetFBConfigAttribSGIX(packed, ret_v) do { \
    glXGetFBConfigAttribSGIX_PACKED *unpacked = (glXGetFBConfigAttribSGIX_PACKED *)packed; \
    glXGetFBConfigAttribSGIX_ARGS *args = (glXGetFBConfigAttribSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetFBConfigAttribSGIX(args->dpy, args->config, args->attribute, args->value);; \
    } else { \
        glXGetFBConfigAttribSGIX(args->dpy, args->config, args->attribute, args->value);; \
    } \
} while(0)
int glXGetFBConfigAttribSGIX(glXGetFBConfigAttribSGIX_ARG_EXPAND);
packed_call_t *pack_glXGetFBConfigAttribSGIX(glXGetFBConfigAttribSGIX_PACKED *_dst glXGetFBConfigAttribSGIX_ARG_EXPAND_TAIL);
typedef int (*glXGetFBConfigAttribSGIX_PTR)(glXGetFBConfigAttribSGIX_ARG_EXPAND);
#endif
#ifndef glXGetFBConfigFromVisualSGIX_RETURN
#define glXGetFBConfigFromVisualSGIX_RETURN GLXFBConfigSGIX
#define glXGetFBConfigFromVisualSGIX_ARG_NAMES dpy, vis
#define glXGetFBConfigFromVisualSGIX_ARG_EXPAND Display * dpy, XVisualInfo * vis
#define glXGetFBConfigFromVisualSGIX_ARG_NAMES_TAIL , dpy, vis
#define glXGetFBConfigFromVisualSGIX_ARG_EXPAND_TAIL , Display * dpy, XVisualInfo * vis
#define forward_glXGetFBConfigFromVisualSGIX(_dpy, _vis) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetFBConfigFromVisualSGIX_PACKED)); \
        GLXFBConfigSGIX ret = (GLXFBConfigSGIX)0; \
        remote_dma_send((packed_call_t *)pack_glXGetFBConfigFromVisualSGIX(dst, _dpy, _vis), &ret); \
        ret; \
    });
#define call_glXGetFBConfigFromVisualSGIX(packed, ret_v) do { \
    glXGetFBConfigFromVisualSGIX_PACKED *unpacked = (glXGetFBConfigFromVisualSGIX_PACKED *)packed; \
    glXGetFBConfigFromVisualSGIX_ARGS *args = (glXGetFBConfigFromVisualSGIX_ARGS *)&unpacked->args; \
    GLXFBConfigSGIX *ret = (GLXFBConfigSGIX *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetFBConfigFromVisualSGIX(args->dpy, args->vis);; \
    } else { \
        glXGetFBConfigFromVisualSGIX(args->dpy, args->vis);; \
    } \
} while(0)
GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX(glXGetFBConfigFromVisualSGIX_ARG_EXPAND);
packed_call_t *pack_glXGetFBConfigFromVisualSGIX(glXGetFBConfigFromVisualSGIX_PACKED *_dst glXGetFBConfigFromVisualSGIX_ARG_EXPAND_TAIL);
typedef GLXFBConfigSGIX (*glXGetFBConfigFromVisualSGIX_PTR)(glXGetFBConfigFromVisualSGIX_ARG_EXPAND);
#endif
#ifndef glXGetFBConfigs_RETURN
#define glXGetFBConfigs_RETURN GLXFBConfig *
#define glXGetFBConfigs_ARG_NAMES dpy, screen, nelements
#define glXGetFBConfigs_ARG_EXPAND Display * dpy, int screen, int * nelements
#define glXGetFBConfigs_ARG_NAMES_TAIL , dpy, screen, nelements
#define glXGetFBConfigs_ARG_EXPAND_TAIL , Display * dpy, int screen, int * nelements
#define forward_glXGetFBConfigs(_dpy, _screen, _nelements) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetFBConfigs_PACKED)); \
        GLXFBConfig * ret = (GLXFBConfig *)0; \
        remote_dma_send((packed_call_t *)pack_glXGetFBConfigs(dst, _dpy, _screen, _nelements), &ret); \
        ret; \
    });
#define call_glXGetFBConfigs(packed, ret_v) do { \
    glXGetFBConfigs_PACKED *unpacked = (glXGetFBConfigs_PACKED *)packed; \
    glXGetFBConfigs_ARGS *args = (glXGetFBConfigs_ARGS *)&unpacked->args; \
    GLXFBConfig * *ret = (GLXFBConfig * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetFBConfigs(args->dpy, args->screen, args->nelements);; \
    } else { \
        glXGetFBConfigs(args->dpy, args->screen, args->nelements);; \
    } \
} while(0)
GLXFBConfig * glXGetFBConfigs(glXGetFBConfigs_ARG_EXPAND);
packed_call_t *pack_glXGetFBConfigs(glXGetFBConfigs_PACKED *_dst glXGetFBConfigs_ARG_EXPAND_TAIL);
typedef GLXFBConfig * (*glXGetFBConfigs_PTR)(glXGetFBConfigs_ARG_EXPAND);
#endif
#ifndef glXGetFBConfigsSGIX_RETURN
#define glXGetFBConfigsSGIX_RETURN void
#define glXGetFBConfigsSGIX_ARG_NAMES 
#define glXGetFBConfigsSGIX_ARG_EXPAND 
#define glXGetFBConfigsSGIX_ARG_NAMES_TAIL 
#define glXGetFBConfigsSGIX_ARG_EXPAND_TAIL 
#define forward_glXGetFBConfigsSGIX() \
    ({ \
        void *dst = remote_dma(sizeof(glXGetFBConfigsSGIX_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXGetFBConfigsSGIX(dst), NULL); \
    });
#define call_glXGetFBConfigsSGIX(packed, ret_v) do { \
    glXGetFBConfigsSGIX();; \
} while(0)
void glXGetFBConfigsSGIX(glXGetFBConfigsSGIX_ARG_EXPAND);
packed_call_t *pack_glXGetFBConfigsSGIX(glXGetFBConfigsSGIX_PACKED *_dst glXGetFBConfigsSGIX_ARG_EXPAND_TAIL);
typedef void (*glXGetFBConfigsSGIX_PTR)(glXGetFBConfigsSGIX_ARG_EXPAND);
#endif
#ifndef glXGetMscRateOML_RETURN
#define glXGetMscRateOML_RETURN Bool
#define glXGetMscRateOML_ARG_NAMES dpy, drawable, numerator, denominator
#define glXGetMscRateOML_ARG_EXPAND Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator
#define glXGetMscRateOML_ARG_NAMES_TAIL , dpy, drawable, numerator, denominator
#define glXGetMscRateOML_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator
#define forward_glXGetMscRateOML(_dpy, _drawable, _numerator, _denominator) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetMscRateOML_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXGetMscRateOML(dst, _dpy, _drawable, _numerator, _denominator), &ret); \
        ret; \
    });
#define call_glXGetMscRateOML(packed, ret_v) do { \
    glXGetMscRateOML_PACKED *unpacked = (glXGetMscRateOML_PACKED *)packed; \
    glXGetMscRateOML_ARGS *args = (glXGetMscRateOML_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetMscRateOML(args->dpy, args->drawable, args->numerator, args->denominator);; \
    } else { \
        glXGetMscRateOML(args->dpy, args->drawable, args->numerator, args->denominator);; \
    } \
} while(0)
Bool glXGetMscRateOML(glXGetMscRateOML_ARG_EXPAND);
packed_call_t *pack_glXGetMscRateOML(glXGetMscRateOML_PACKED *_dst glXGetMscRateOML_ARG_EXPAND_TAIL);
typedef Bool (*glXGetMscRateOML_PTR)(glXGetMscRateOML_ARG_EXPAND);
#endif
#ifndef glXGetProcAddress_RETURN
#define glXGetProcAddress_RETURN __GLXextFuncPtr
#define glXGetProcAddress_ARG_NAMES procName
#define glXGetProcAddress_ARG_EXPAND const GLubyte * procName
#define glXGetProcAddress_ARG_NAMES_TAIL , procName
#define glXGetProcAddress_ARG_EXPAND_TAIL , const GLubyte * procName
#define forward_glXGetProcAddress(_procName) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetProcAddress_PACKED)); \
        __GLXextFuncPtr ret = (__GLXextFuncPtr)0; \
        remote_dma_send((packed_call_t *)pack_glXGetProcAddress(dst, _procName), &ret); \
        ret; \
    });
#define call_glXGetProcAddress(packed, ret_v) do { \
    glXGetProcAddress_PACKED *unpacked = (glXGetProcAddress_PACKED *)packed; \
    glXGetProcAddress_ARGS *args = (glXGetProcAddress_ARGS *)&unpacked->args; \
    __GLXextFuncPtr *ret = (__GLXextFuncPtr *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetProcAddress(args->procName);; \
    } else { \
        glXGetProcAddress(args->procName);; \
    } \
} while(0)
__GLXextFuncPtr glXGetProcAddress(glXGetProcAddress_ARG_EXPAND);
packed_call_t *pack_glXGetProcAddress(glXGetProcAddress_PACKED *_dst glXGetProcAddress_ARG_EXPAND_TAIL);
typedef __GLXextFuncPtr (*glXGetProcAddress_PTR)(glXGetProcAddress_ARG_EXPAND);
#endif
#ifndef glXGetProcAddressARB_RETURN
#define glXGetProcAddressARB_RETURN __GLXextFuncPtr
#define glXGetProcAddressARB_ARG_NAMES procName
#define glXGetProcAddressARB_ARG_EXPAND const GLubyte * procName
#define glXGetProcAddressARB_ARG_NAMES_TAIL , procName
#define glXGetProcAddressARB_ARG_EXPAND_TAIL , const GLubyte * procName
#define forward_glXGetProcAddressARB(_procName) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetProcAddressARB_PACKED)); \
        __GLXextFuncPtr ret = (__GLXextFuncPtr)0; \
        remote_dma_send((packed_call_t *)pack_glXGetProcAddressARB(dst, _procName), &ret); \
        ret; \
    });
#define call_glXGetProcAddressARB(packed, ret_v) do { \
    glXGetProcAddressARB_PACKED *unpacked = (glXGetProcAddressARB_PACKED *)packed; \
    glXGetProcAddressARB_ARGS *args = (glXGetProcAddressARB_ARGS *)&unpacked->args; \
    __GLXextFuncPtr *ret = (__GLXextFuncPtr *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetProcAddressARB(args->procName);; \
    } else { \
        glXGetProcAddressARB(args->procName);; \
    } \
} while(0)
__GLXextFuncPtr glXGetProcAddressARB(glXGetProcAddressARB_ARG_EXPAND);
packed_call_t *pack_glXGetProcAddressARB(glXGetProcAddressARB_PACKED *_dst glXGetProcAddressARB_ARG_EXPAND_TAIL);
typedef __GLXextFuncPtr (*glXGetProcAddressARB_PTR)(glXGetProcAddressARB_ARG_EXPAND);
#endif
#ifndef glXGetSelectedEvent_RETURN
#define glXGetSelectedEvent_RETURN void
#define glXGetSelectedEvent_ARG_NAMES dpy, draw, event_mask
#define glXGetSelectedEvent_ARG_EXPAND Display * dpy, GLXDrawable draw, unsigned long * event_mask
#define glXGetSelectedEvent_ARG_NAMES_TAIL , dpy, draw, event_mask
#define glXGetSelectedEvent_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable draw, unsigned long * event_mask
#define forward_glXGetSelectedEvent(_dpy, _draw, _event_mask) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetSelectedEvent_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXGetSelectedEvent(dst, _dpy, _draw, _event_mask), NULL); \
    });
#define call_glXGetSelectedEvent(packed, ret_v) do { \
    glXGetSelectedEvent_PACKED *unpacked = (glXGetSelectedEvent_PACKED *)packed; \
    glXGetSelectedEvent_ARGS *args = (glXGetSelectedEvent_ARGS *)&unpacked->args; \
    glXGetSelectedEvent(args->dpy, args->draw, args->event_mask);; \
} while(0)
void glXGetSelectedEvent(glXGetSelectedEvent_ARG_EXPAND);
packed_call_t *pack_glXGetSelectedEvent(glXGetSelectedEvent_PACKED *_dst glXGetSelectedEvent_ARG_EXPAND_TAIL);
typedef void (*glXGetSelectedEvent_PTR)(glXGetSelectedEvent_ARG_EXPAND);
#endif
#ifndef glXGetSelectedEventSGIX_RETURN
#define glXGetSelectedEventSGIX_RETURN void
#define glXGetSelectedEventSGIX_ARG_NAMES dpy, drawable, mask
#define glXGetSelectedEventSGIX_ARG_EXPAND Display * dpy, GLXDrawable drawable, unsigned long * mask
#define glXGetSelectedEventSGIX_ARG_NAMES_TAIL , dpy, drawable, mask
#define glXGetSelectedEventSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, unsigned long * mask
#define forward_glXGetSelectedEventSGIX(_dpy, _drawable, _mask) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetSelectedEventSGIX_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXGetSelectedEventSGIX(dst, _dpy, _drawable, _mask), NULL); \
    });
#define call_glXGetSelectedEventSGIX(packed, ret_v) do { \
    glXGetSelectedEventSGIX_PACKED *unpacked = (glXGetSelectedEventSGIX_PACKED *)packed; \
    glXGetSelectedEventSGIX_ARGS *args = (glXGetSelectedEventSGIX_ARGS *)&unpacked->args; \
    glXGetSelectedEventSGIX(args->dpy, args->drawable, args->mask);; \
} while(0)
void glXGetSelectedEventSGIX(glXGetSelectedEventSGIX_ARG_EXPAND);
packed_call_t *pack_glXGetSelectedEventSGIX(glXGetSelectedEventSGIX_PACKED *_dst glXGetSelectedEventSGIX_ARG_EXPAND_TAIL);
typedef void (*glXGetSelectedEventSGIX_PTR)(glXGetSelectedEventSGIX_ARG_EXPAND);
#endif
#ifndef glXGetSyncValuesOML_RETURN
#define glXGetSyncValuesOML_RETURN Bool
#define glXGetSyncValuesOML_ARG_NAMES dpy, drawable, ust, msc, sbc
#define glXGetSyncValuesOML_ARG_EXPAND Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc
#define glXGetSyncValuesOML_ARG_NAMES_TAIL , dpy, drawable, ust, msc, sbc
#define glXGetSyncValuesOML_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc
#define forward_glXGetSyncValuesOML(_dpy, _drawable, _ust, _msc, _sbc) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetSyncValuesOML_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXGetSyncValuesOML(dst, _dpy, _drawable, _ust, _msc, _sbc), &ret); \
        ret; \
    });
#define call_glXGetSyncValuesOML(packed, ret_v) do { \
    glXGetSyncValuesOML_PACKED *unpacked = (glXGetSyncValuesOML_PACKED *)packed; \
    glXGetSyncValuesOML_ARGS *args = (glXGetSyncValuesOML_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetSyncValuesOML(args->dpy, args->drawable, args->ust, args->msc, args->sbc);; \
    } else { \
        glXGetSyncValuesOML(args->dpy, args->drawable, args->ust, args->msc, args->sbc);; \
    } \
} while(0)
Bool glXGetSyncValuesOML(glXGetSyncValuesOML_ARG_EXPAND);
packed_call_t *pack_glXGetSyncValuesOML(glXGetSyncValuesOML_PACKED *_dst glXGetSyncValuesOML_ARG_EXPAND_TAIL);
typedef Bool (*glXGetSyncValuesOML_PTR)(glXGetSyncValuesOML_ARG_EXPAND);
#endif
#ifndef glXGetTransparentIndexSUN_RETURN
#define glXGetTransparentIndexSUN_RETURN Status
#define glXGetTransparentIndexSUN_ARG_NAMES dpy, overlay, underlay, pTransparentIndex
#define glXGetTransparentIndexSUN_ARG_EXPAND Display * dpy, Window overlay, Window underlay, long * pTransparentIndex
#define glXGetTransparentIndexSUN_ARG_NAMES_TAIL , dpy, overlay, underlay, pTransparentIndex
#define glXGetTransparentIndexSUN_ARG_EXPAND_TAIL , Display * dpy, Window overlay, Window underlay, long * pTransparentIndex
#define forward_glXGetTransparentIndexSUN(_dpy, _overlay, _underlay, _pTransparentIndex) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetTransparentIndexSUN_PACKED)); \
        Status ret = (Status)0; \
        remote_dma_send((packed_call_t *)pack_glXGetTransparentIndexSUN(dst, _dpy, _overlay, _underlay, _pTransparentIndex), &ret); \
        ret; \
    });
#define call_glXGetTransparentIndexSUN(packed, ret_v) do { \
    glXGetTransparentIndexSUN_PACKED *unpacked = (glXGetTransparentIndexSUN_PACKED *)packed; \
    glXGetTransparentIndexSUN_ARGS *args = (glXGetTransparentIndexSUN_ARGS *)&unpacked->args; \
    Status *ret = (Status *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetTransparentIndexSUN(args->dpy, args->overlay, args->underlay, args->pTransparentIndex);; \
    } else { \
        glXGetTransparentIndexSUN(args->dpy, args->overlay, args->underlay, args->pTransparentIndex);; \
    } \
} while(0)
Status glXGetTransparentIndexSUN(glXGetTransparentIndexSUN_ARG_EXPAND);
packed_call_t *pack_glXGetTransparentIndexSUN(glXGetTransparentIndexSUN_PACKED *_dst glXGetTransparentIndexSUN_ARG_EXPAND_TAIL);
typedef Status (*glXGetTransparentIndexSUN_PTR)(glXGetTransparentIndexSUN_ARG_EXPAND);
#endif
#ifndef glXGetVideoDeviceNV_RETURN
#define glXGetVideoDeviceNV_RETURN int
#define glXGetVideoDeviceNV_ARG_NAMES dpy, screen, numVideoDevices, pVideoDevice
#define glXGetVideoDeviceNV_ARG_EXPAND Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice
#define glXGetVideoDeviceNV_ARG_NAMES_TAIL , dpy, screen, numVideoDevices, pVideoDevice
#define glXGetVideoDeviceNV_ARG_EXPAND_TAIL , Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice
#define forward_glXGetVideoDeviceNV(_dpy, _screen, _numVideoDevices, _pVideoDevice) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetVideoDeviceNV_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXGetVideoDeviceNV(dst, _dpy, _screen, _numVideoDevices, _pVideoDevice), &ret); \
        ret; \
    });
#define call_glXGetVideoDeviceNV(packed, ret_v) do { \
    glXGetVideoDeviceNV_PACKED *unpacked = (glXGetVideoDeviceNV_PACKED *)packed; \
    glXGetVideoDeviceNV_ARGS *args = (glXGetVideoDeviceNV_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetVideoDeviceNV(args->dpy, args->screen, args->numVideoDevices, args->pVideoDevice);; \
    } else { \
        glXGetVideoDeviceNV(args->dpy, args->screen, args->numVideoDevices, args->pVideoDevice);; \
    } \
} while(0)
int glXGetVideoDeviceNV(glXGetVideoDeviceNV_ARG_EXPAND);
packed_call_t *pack_glXGetVideoDeviceNV(glXGetVideoDeviceNV_PACKED *_dst glXGetVideoDeviceNV_ARG_EXPAND_TAIL);
typedef int (*glXGetVideoDeviceNV_PTR)(glXGetVideoDeviceNV_ARG_EXPAND);
#endif
#ifndef glXGetVideoInfoNV_RETURN
#define glXGetVideoInfoNV_RETURN int
#define glXGetVideoInfoNV_ARG_NAMES dpy, screen, VideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo
#define glXGetVideoInfoNV_ARG_EXPAND Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo
#define glXGetVideoInfoNV_ARG_NAMES_TAIL , dpy, screen, VideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo
#define glXGetVideoInfoNV_ARG_EXPAND_TAIL , Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo
#define forward_glXGetVideoInfoNV(_dpy, _screen, _VideoDevice, _pulCounterOutputPbuffer, _pulCounterOutputVideo) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetVideoInfoNV_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXGetVideoInfoNV(dst, _dpy, _screen, _VideoDevice, _pulCounterOutputPbuffer, _pulCounterOutputVideo), &ret); \
        ret; \
    });
#define call_glXGetVideoInfoNV(packed, ret_v) do { \
    glXGetVideoInfoNV_PACKED *unpacked = (glXGetVideoInfoNV_PACKED *)packed; \
    glXGetVideoInfoNV_ARGS *args = (glXGetVideoInfoNV_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetVideoInfoNV(args->dpy, args->screen, args->VideoDevice, args->pulCounterOutputPbuffer, args->pulCounterOutputVideo);; \
    } else { \
        glXGetVideoInfoNV(args->dpy, args->screen, args->VideoDevice, args->pulCounterOutputPbuffer, args->pulCounterOutputVideo);; \
    } \
} while(0)
int glXGetVideoInfoNV(glXGetVideoInfoNV_ARG_EXPAND);
packed_call_t *pack_glXGetVideoInfoNV(glXGetVideoInfoNV_PACKED *_dst glXGetVideoInfoNV_ARG_EXPAND_TAIL);
typedef int (*glXGetVideoInfoNV_PTR)(glXGetVideoInfoNV_ARG_EXPAND);
#endif
#ifndef glXGetVideoSyncSGI_RETURN
#define glXGetVideoSyncSGI_RETURN int
#define glXGetVideoSyncSGI_ARG_NAMES count
#define glXGetVideoSyncSGI_ARG_EXPAND unsigned int * count
#define glXGetVideoSyncSGI_ARG_NAMES_TAIL , count
#define glXGetVideoSyncSGI_ARG_EXPAND_TAIL , unsigned int * count
#define forward_glXGetVideoSyncSGI(_count) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetVideoSyncSGI_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXGetVideoSyncSGI(dst, _count), &ret); \
        ret; \
    });
#define call_glXGetVideoSyncSGI(packed, ret_v) do { \
    glXGetVideoSyncSGI_PACKED *unpacked = (glXGetVideoSyncSGI_PACKED *)packed; \
    glXGetVideoSyncSGI_ARGS *args = (glXGetVideoSyncSGI_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetVideoSyncSGI(args->count);; \
    } else { \
        glXGetVideoSyncSGI(args->count);; \
    } \
} while(0)
int glXGetVideoSyncSGI(glXGetVideoSyncSGI_ARG_EXPAND);
packed_call_t *pack_glXGetVideoSyncSGI(glXGetVideoSyncSGI_PACKED *_dst glXGetVideoSyncSGI_ARG_EXPAND_TAIL);
typedef int (*glXGetVideoSyncSGI_PTR)(glXGetVideoSyncSGI_ARG_EXPAND);
#endif
#ifndef glXGetVisualConfigs_RETURN
#define glXGetVisualConfigs_RETURN void
#define glXGetVisualConfigs_ARG_NAMES 
#define glXGetVisualConfigs_ARG_EXPAND 
#define glXGetVisualConfigs_ARG_NAMES_TAIL 
#define glXGetVisualConfigs_ARG_EXPAND_TAIL 
#define forward_glXGetVisualConfigs() \
    ({ \
        void *dst = remote_dma(sizeof(glXGetVisualConfigs_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXGetVisualConfigs(dst), NULL); \
    });
#define call_glXGetVisualConfigs(packed, ret_v) do { \
    glXGetVisualConfigs();; \
} while(0)
void glXGetVisualConfigs(glXGetVisualConfigs_ARG_EXPAND);
packed_call_t *pack_glXGetVisualConfigs(glXGetVisualConfigs_PACKED *_dst glXGetVisualConfigs_ARG_EXPAND_TAIL);
typedef void (*glXGetVisualConfigs_PTR)(glXGetVisualConfigs_ARG_EXPAND);
#endif
#ifndef glXGetVisualFromFBConfig_RETURN
#define glXGetVisualFromFBConfig_RETURN XVisualInfo *
#define glXGetVisualFromFBConfig_ARG_NAMES dpy, config
#define glXGetVisualFromFBConfig_ARG_EXPAND Display * dpy, GLXFBConfig config
#define glXGetVisualFromFBConfig_ARG_NAMES_TAIL , dpy, config
#define glXGetVisualFromFBConfig_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfig config
#define forward_glXGetVisualFromFBConfig(_dpy, _config) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetVisualFromFBConfig_PACKED)); \
        XVisualInfo * ret = (XVisualInfo *)0; \
        remote_dma_send((packed_call_t *)pack_glXGetVisualFromFBConfig(dst, _dpy, _config), &ret); \
        ret; \
    });
#define call_glXGetVisualFromFBConfig(packed, ret_v) do { \
    glXGetVisualFromFBConfig_PACKED *unpacked = (glXGetVisualFromFBConfig_PACKED *)packed; \
    glXGetVisualFromFBConfig_ARGS *args = (glXGetVisualFromFBConfig_ARGS *)&unpacked->args; \
    XVisualInfo * *ret = (XVisualInfo * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetVisualFromFBConfig(args->dpy, args->config);; \
    } else { \
        glXGetVisualFromFBConfig(args->dpy, args->config);; \
    } \
} while(0)
XVisualInfo * glXGetVisualFromFBConfig(glXGetVisualFromFBConfig_ARG_EXPAND);
packed_call_t *pack_glXGetVisualFromFBConfig(glXGetVisualFromFBConfig_PACKED *_dst glXGetVisualFromFBConfig_ARG_EXPAND_TAIL);
typedef XVisualInfo * (*glXGetVisualFromFBConfig_PTR)(glXGetVisualFromFBConfig_ARG_EXPAND);
#endif
#ifndef glXGetVisualFromFBConfigSGIX_RETURN
#define glXGetVisualFromFBConfigSGIX_RETURN XVisualInfo *
#define glXGetVisualFromFBConfigSGIX_ARG_NAMES dpy, config
#define glXGetVisualFromFBConfigSGIX_ARG_EXPAND Display * dpy, GLXFBConfigSGIX config
#define glXGetVisualFromFBConfigSGIX_ARG_NAMES_TAIL , dpy, config
#define glXGetVisualFromFBConfigSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXFBConfigSGIX config
#define forward_glXGetVisualFromFBConfigSGIX(_dpy, _config) \
    ({ \
        void *dst = remote_dma(sizeof(glXGetVisualFromFBConfigSGIX_PACKED)); \
        XVisualInfo * ret = (XVisualInfo *)0; \
        remote_dma_send((packed_call_t *)pack_glXGetVisualFromFBConfigSGIX(dst, _dpy, _config), &ret); \
        ret; \
    });
#define call_glXGetVisualFromFBConfigSGIX(packed, ret_v) do { \
    glXGetVisualFromFBConfigSGIX_PACKED *unpacked = (glXGetVisualFromFBConfigSGIX_PACKED *)packed; \
    glXGetVisualFromFBConfigSGIX_ARGS *args = (glXGetVisualFromFBConfigSGIX_ARGS *)&unpacked->args; \
    XVisualInfo * *ret = (XVisualInfo * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXGetVisualFromFBConfigSGIX(args->dpy, args->config);; \
    } else { \
        glXGetVisualFromFBConfigSGIX(args->dpy, args->config);; \
    } \
} while(0)
XVisualInfo * glXGetVisualFromFBConfigSGIX(glXGetVisualFromFBConfigSGIX_ARG_EXPAND);
packed_call_t *pack_glXGetVisualFromFBConfigSGIX(glXGetVisualFromFBConfigSGIX_PACKED *_dst glXGetVisualFromFBConfigSGIX_ARG_EXPAND_TAIL);
typedef XVisualInfo * (*glXGetVisualFromFBConfigSGIX_PTR)(glXGetVisualFromFBConfigSGIX_ARG_EXPAND);
#endif
#ifndef glXHyperpipeAttribSGIX_RETURN
#define glXHyperpipeAttribSGIX_RETURN int
#define glXHyperpipeAttribSGIX_ARG_NAMES dpy, timeSlice, attrib, size, attribList
#define glXHyperpipeAttribSGIX_ARG_EXPAND Display * dpy, int timeSlice, int attrib, int size, void * attribList
#define glXHyperpipeAttribSGIX_ARG_NAMES_TAIL , dpy, timeSlice, attrib, size, attribList
#define glXHyperpipeAttribSGIX_ARG_EXPAND_TAIL , Display * dpy, int timeSlice, int attrib, int size, void * attribList
#define forward_glXHyperpipeAttribSGIX(_dpy, _timeSlice, _attrib, _size, _attribList) \
    ({ \
        void *dst = remote_dma(sizeof(glXHyperpipeAttribSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXHyperpipeAttribSGIX(dst, _dpy, _timeSlice, _attrib, _size, _attribList), &ret); \
        ret; \
    });
#define call_glXHyperpipeAttribSGIX(packed, ret_v) do { \
    glXHyperpipeAttribSGIX_PACKED *unpacked = (glXHyperpipeAttribSGIX_PACKED *)packed; \
    glXHyperpipeAttribSGIX_ARGS *args = (glXHyperpipeAttribSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXHyperpipeAttribSGIX(args->dpy, args->timeSlice, args->attrib, args->size, args->attribList);; \
    } else { \
        glXHyperpipeAttribSGIX(args->dpy, args->timeSlice, args->attrib, args->size, args->attribList);; \
    } \
} while(0)
int glXHyperpipeAttribSGIX(glXHyperpipeAttribSGIX_ARG_EXPAND);
packed_call_t *pack_glXHyperpipeAttribSGIX(glXHyperpipeAttribSGIX_PACKED *_dst glXHyperpipeAttribSGIX_ARG_EXPAND_TAIL);
typedef int (*glXHyperpipeAttribSGIX_PTR)(glXHyperpipeAttribSGIX_ARG_EXPAND);
#endif
#ifndef glXHyperpipeConfigSGIX_RETURN
#define glXHyperpipeConfigSGIX_RETURN int
#define glXHyperpipeConfigSGIX_ARG_NAMES dpy, networkId, npipes, cfg, hpId
#define glXHyperpipeConfigSGIX_ARG_EXPAND Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId
#define glXHyperpipeConfigSGIX_ARG_NAMES_TAIL , dpy, networkId, npipes, cfg, hpId
#define glXHyperpipeConfigSGIX_ARG_EXPAND_TAIL , Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId
#define forward_glXHyperpipeConfigSGIX(_dpy, _networkId, _npipes, _cfg, _hpId) \
    ({ \
        void *dst = remote_dma(sizeof(glXHyperpipeConfigSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXHyperpipeConfigSGIX(dst, _dpy, _networkId, _npipes, _cfg, _hpId), &ret); \
        ret; \
    });
#define call_glXHyperpipeConfigSGIX(packed, ret_v) do { \
    glXHyperpipeConfigSGIX_PACKED *unpacked = (glXHyperpipeConfigSGIX_PACKED *)packed; \
    glXHyperpipeConfigSGIX_ARGS *args = (glXHyperpipeConfigSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXHyperpipeConfigSGIX(args->dpy, args->networkId, args->npipes, args->cfg, args->hpId);; \
    } else { \
        glXHyperpipeConfigSGIX(args->dpy, args->networkId, args->npipes, args->cfg, args->hpId);; \
    } \
} while(0)
int glXHyperpipeConfigSGIX(glXHyperpipeConfigSGIX_ARG_EXPAND);
packed_call_t *pack_glXHyperpipeConfigSGIX(glXHyperpipeConfigSGIX_PACKED *_dst glXHyperpipeConfigSGIX_ARG_EXPAND_TAIL);
typedef int (*glXHyperpipeConfigSGIX_PTR)(glXHyperpipeConfigSGIX_ARG_EXPAND);
#endif
#ifndef glXImportContextEXT_RETURN
#define glXImportContextEXT_RETURN GLXContext
#define glXImportContextEXT_ARG_NAMES dpy, contextID
#define glXImportContextEXT_ARG_EXPAND Display * dpy, GLXContextID contextID
#define glXImportContextEXT_ARG_NAMES_TAIL , dpy, contextID
#define glXImportContextEXT_ARG_EXPAND_TAIL , Display * dpy, GLXContextID contextID
#define forward_glXImportContextEXT(_dpy, _contextID) \
    ({ \
        void *dst = remote_dma(sizeof(glXImportContextEXT_PACKED)); \
        GLXContext ret = (GLXContext)0; \
        remote_dma_send((packed_call_t *)pack_glXImportContextEXT(dst, _dpy, _contextID), &ret); \
        ret; \
    });
#define call_glXImportContextEXT(packed, ret_v) do { \
    glXImportContextEXT_PACKED *unpacked = (glXImportContextEXT_PACKED *)packed; \
    glXImportContextEXT_ARGS *args = (glXImportContextEXT_ARGS *)&unpacked->args; \
    GLXContext *ret = (GLXContext *)ret_v; \
    if (ret != NULL) { \
        *ret = glXImportContextEXT(args->dpy, args->contextID);; \
    } else { \
        glXImportContextEXT(args->dpy, args->contextID);; \
    } \
} while(0)
GLXContext glXImportContextEXT(glXImportContextEXT_ARG_EXPAND);
packed_call_t *pack_glXImportContextEXT(glXImportContextEXT_PACKED *_dst glXImportContextEXT_ARG_EXPAND_TAIL);
typedef GLXContext (*glXImportContextEXT_PTR)(glXImportContextEXT_ARG_EXPAND);
#endif
#ifndef glXIsDirect_RETURN
#define glXIsDirect_RETURN Bool
#define glXIsDirect_ARG_NAMES dpy, ctx
#define glXIsDirect_ARG_EXPAND Display * dpy, GLXContext ctx
#define glXIsDirect_ARG_NAMES_TAIL , dpy, ctx
#define glXIsDirect_ARG_EXPAND_TAIL , Display * dpy, GLXContext ctx
#define forward_glXIsDirect(_dpy, _ctx) \
    ({ \
        void *dst = remote_dma(sizeof(glXIsDirect_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXIsDirect(dst, _dpy, _ctx), &ret); \
        ret; \
    });
#define call_glXIsDirect(packed, ret_v) do { \
    glXIsDirect_PACKED *unpacked = (glXIsDirect_PACKED *)packed; \
    glXIsDirect_ARGS *args = (glXIsDirect_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXIsDirect(args->dpy, args->ctx);; \
    } else { \
        glXIsDirect(args->dpy, args->ctx);; \
    } \
} while(0)
Bool glXIsDirect(glXIsDirect_ARG_EXPAND);
packed_call_t *pack_glXIsDirect(glXIsDirect_PACKED *_dst glXIsDirect_ARG_EXPAND_TAIL);
typedef Bool (*glXIsDirect_PTR)(glXIsDirect_ARG_EXPAND);
#endif
#ifndef glXJoinSwapGroupNV_RETURN
#define glXJoinSwapGroupNV_RETURN Bool
#define glXJoinSwapGroupNV_ARG_NAMES dpy, drawable, group
#define glXJoinSwapGroupNV_ARG_EXPAND Display * dpy, GLXDrawable drawable, GLuint group
#define glXJoinSwapGroupNV_ARG_NAMES_TAIL , dpy, drawable, group
#define glXJoinSwapGroupNV_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, GLuint group
#define forward_glXJoinSwapGroupNV(_dpy, _drawable, _group) \
    ({ \
        void *dst = remote_dma(sizeof(glXJoinSwapGroupNV_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXJoinSwapGroupNV(dst, _dpy, _drawable, _group), &ret); \
        ret; \
    });
#define call_glXJoinSwapGroupNV(packed, ret_v) do { \
    glXJoinSwapGroupNV_PACKED *unpacked = (glXJoinSwapGroupNV_PACKED *)packed; \
    glXJoinSwapGroupNV_ARGS *args = (glXJoinSwapGroupNV_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXJoinSwapGroupNV(args->dpy, args->drawable, args->group);; \
    } else { \
        glXJoinSwapGroupNV(args->dpy, args->drawable, args->group);; \
    } \
} while(0)
Bool glXJoinSwapGroupNV(glXJoinSwapGroupNV_ARG_EXPAND);
packed_call_t *pack_glXJoinSwapGroupNV(glXJoinSwapGroupNV_PACKED *_dst glXJoinSwapGroupNV_ARG_EXPAND_TAIL);
typedef Bool (*glXJoinSwapGroupNV_PTR)(glXJoinSwapGroupNV_ARG_EXPAND);
#endif
#ifndef glXJoinSwapGroupSGIX_RETURN
#define glXJoinSwapGroupSGIX_RETURN void
#define glXJoinSwapGroupSGIX_ARG_NAMES dpy, drawable, member
#define glXJoinSwapGroupSGIX_ARG_EXPAND Display * dpy, GLXDrawable drawable, GLXDrawable member
#define glXJoinSwapGroupSGIX_ARG_NAMES_TAIL , dpy, drawable, member
#define glXJoinSwapGroupSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, GLXDrawable member
#define forward_glXJoinSwapGroupSGIX(_dpy, _drawable, _member) \
    ({ \
        void *dst = remote_dma(sizeof(glXJoinSwapGroupSGIX_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXJoinSwapGroupSGIX(dst, _dpy, _drawable, _member), NULL); \
    });
#define call_glXJoinSwapGroupSGIX(packed, ret_v) do { \
    glXJoinSwapGroupSGIX_PACKED *unpacked = (glXJoinSwapGroupSGIX_PACKED *)packed; \
    glXJoinSwapGroupSGIX_ARGS *args = (glXJoinSwapGroupSGIX_ARGS *)&unpacked->args; \
    glXJoinSwapGroupSGIX(args->dpy, args->drawable, args->member);; \
} while(0)
void glXJoinSwapGroupSGIX(glXJoinSwapGroupSGIX_ARG_EXPAND);
packed_call_t *pack_glXJoinSwapGroupSGIX(glXJoinSwapGroupSGIX_PACKED *_dst glXJoinSwapGroupSGIX_ARG_EXPAND_TAIL);
typedef void (*glXJoinSwapGroupSGIX_PTR)(glXJoinSwapGroupSGIX_ARG_EXPAND);
#endif
#ifndef glXLockVideoCaptureDeviceNV_RETURN
#define glXLockVideoCaptureDeviceNV_RETURN void
#define glXLockVideoCaptureDeviceNV_ARG_NAMES dpy, device
#define glXLockVideoCaptureDeviceNV_ARG_EXPAND Display * dpy, GLXVideoCaptureDeviceNV device
#define glXLockVideoCaptureDeviceNV_ARG_NAMES_TAIL , dpy, device
#define glXLockVideoCaptureDeviceNV_ARG_EXPAND_TAIL , Display * dpy, GLXVideoCaptureDeviceNV device
#define forward_glXLockVideoCaptureDeviceNV(_dpy, _device) \
    ({ \
        void *dst = remote_dma(sizeof(glXLockVideoCaptureDeviceNV_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXLockVideoCaptureDeviceNV(dst, _dpy, _device), NULL); \
    });
#define call_glXLockVideoCaptureDeviceNV(packed, ret_v) do { \
    glXLockVideoCaptureDeviceNV_PACKED *unpacked = (glXLockVideoCaptureDeviceNV_PACKED *)packed; \
    glXLockVideoCaptureDeviceNV_ARGS *args = (glXLockVideoCaptureDeviceNV_ARGS *)&unpacked->args; \
    glXLockVideoCaptureDeviceNV(args->dpy, args->device);; \
} while(0)
void glXLockVideoCaptureDeviceNV(glXLockVideoCaptureDeviceNV_ARG_EXPAND);
packed_call_t *pack_glXLockVideoCaptureDeviceNV(glXLockVideoCaptureDeviceNV_PACKED *_dst glXLockVideoCaptureDeviceNV_ARG_EXPAND_TAIL);
typedef void (*glXLockVideoCaptureDeviceNV_PTR)(glXLockVideoCaptureDeviceNV_ARG_EXPAND);
#endif
#ifndef glXMakeContextCurrent_RETURN
#define glXMakeContextCurrent_RETURN Bool
#define glXMakeContextCurrent_ARG_NAMES dpy, draw, read, ctx
#define glXMakeContextCurrent_ARG_EXPAND Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx
#define glXMakeContextCurrent_ARG_NAMES_TAIL , dpy, draw, read, ctx
#define glXMakeContextCurrent_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx
#define forward_glXMakeContextCurrent(_dpy, _draw, _read, _ctx) \
    ({ \
        void *dst = remote_dma(sizeof(glXMakeContextCurrent_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXMakeContextCurrent(dst, _dpy, _draw, _read, _ctx), &ret); \
        ret; \
    });
#define call_glXMakeContextCurrent(packed, ret_v) do { \
    glXMakeContextCurrent_PACKED *unpacked = (glXMakeContextCurrent_PACKED *)packed; \
    glXMakeContextCurrent_ARGS *args = (glXMakeContextCurrent_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXMakeContextCurrent(args->dpy, args->draw, args->read, args->ctx);; \
    } else { \
        glXMakeContextCurrent(args->dpy, args->draw, args->read, args->ctx);; \
    } \
} while(0)
Bool glXMakeContextCurrent(glXMakeContextCurrent_ARG_EXPAND);
packed_call_t *pack_glXMakeContextCurrent(glXMakeContextCurrent_PACKED *_dst glXMakeContextCurrent_ARG_EXPAND_TAIL);
typedef Bool (*glXMakeContextCurrent_PTR)(glXMakeContextCurrent_ARG_EXPAND);
#endif
#ifndef glXMakeCurrent_RETURN
#define glXMakeCurrent_RETURN Bool
#define glXMakeCurrent_ARG_NAMES dpy, drawable, ctx
#define glXMakeCurrent_ARG_EXPAND Display * dpy, GLXDrawable drawable, GLXContext ctx
#define glXMakeCurrent_ARG_NAMES_TAIL , dpy, drawable, ctx
#define glXMakeCurrent_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, GLXContext ctx
#define forward_glXMakeCurrent(_dpy, _drawable, _ctx) \
    ({ \
        void *dst = remote_dma(sizeof(glXMakeCurrent_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXMakeCurrent(dst, _dpy, _drawable, _ctx), &ret); \
        ret; \
    });
#define call_glXMakeCurrent(packed, ret_v) do { \
    glXMakeCurrent_PACKED *unpacked = (glXMakeCurrent_PACKED *)packed; \
    glXMakeCurrent_ARGS *args = (glXMakeCurrent_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXMakeCurrent(args->dpy, args->drawable, args->ctx);; \
    } else { \
        glXMakeCurrent(args->dpy, args->drawable, args->ctx);; \
    } \
} while(0)
Bool glXMakeCurrent(glXMakeCurrent_ARG_EXPAND);
packed_call_t *pack_glXMakeCurrent(glXMakeCurrent_PACKED *_dst glXMakeCurrent_ARG_EXPAND_TAIL);
typedef Bool (*glXMakeCurrent_PTR)(glXMakeCurrent_ARG_EXPAND);
#endif
#ifndef glXMakeCurrentReadSGI_RETURN
#define glXMakeCurrentReadSGI_RETURN Bool
#define glXMakeCurrentReadSGI_ARG_NAMES dpy, draw, read, ctx
#define glXMakeCurrentReadSGI_ARG_EXPAND Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx
#define glXMakeCurrentReadSGI_ARG_NAMES_TAIL , dpy, draw, read, ctx
#define glXMakeCurrentReadSGI_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx
#define forward_glXMakeCurrentReadSGI(_dpy, _draw, _read, _ctx) \
    ({ \
        void *dst = remote_dma(sizeof(glXMakeCurrentReadSGI_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXMakeCurrentReadSGI(dst, _dpy, _draw, _read, _ctx), &ret); \
        ret; \
    });
#define call_glXMakeCurrentReadSGI(packed, ret_v) do { \
    glXMakeCurrentReadSGI_PACKED *unpacked = (glXMakeCurrentReadSGI_PACKED *)packed; \
    glXMakeCurrentReadSGI_ARGS *args = (glXMakeCurrentReadSGI_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXMakeCurrentReadSGI(args->dpy, args->draw, args->read, args->ctx);; \
    } else { \
        glXMakeCurrentReadSGI(args->dpy, args->draw, args->read, args->ctx);; \
    } \
} while(0)
Bool glXMakeCurrentReadSGI(glXMakeCurrentReadSGI_ARG_EXPAND);
packed_call_t *pack_glXMakeCurrentReadSGI(glXMakeCurrentReadSGI_PACKED *_dst glXMakeCurrentReadSGI_ARG_EXPAND_TAIL);
typedef Bool (*glXMakeCurrentReadSGI_PTR)(glXMakeCurrentReadSGI_ARG_EXPAND);
#endif
#ifndef glXQueryChannelDeltasSGIX_RETURN
#define glXQueryChannelDeltasSGIX_RETURN int
#define glXQueryChannelDeltasSGIX_ARG_NAMES display, screen, channel, x, y, w, h
#define glXQueryChannelDeltasSGIX_ARG_EXPAND Display * display, int screen, int channel, int * x, int * y, int * w, int * h
#define glXQueryChannelDeltasSGIX_ARG_NAMES_TAIL , display, screen, channel, x, y, w, h
#define glXQueryChannelDeltasSGIX_ARG_EXPAND_TAIL , Display * display, int screen, int channel, int * x, int * y, int * w, int * h
#define forward_glXQueryChannelDeltasSGIX(_display, _screen, _channel, _x, _y, _w, _h) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryChannelDeltasSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryChannelDeltasSGIX(dst, _display, _screen, _channel, _x, _y, _w, _h), &ret); \
        ret; \
    });
#define call_glXQueryChannelDeltasSGIX(packed, ret_v) do { \
    glXQueryChannelDeltasSGIX_PACKED *unpacked = (glXQueryChannelDeltasSGIX_PACKED *)packed; \
    glXQueryChannelDeltasSGIX_ARGS *args = (glXQueryChannelDeltasSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryChannelDeltasSGIX(args->display, args->screen, args->channel, args->x, args->y, args->w, args->h);; \
    } else { \
        glXQueryChannelDeltasSGIX(args->display, args->screen, args->channel, args->x, args->y, args->w, args->h);; \
    } \
} while(0)
int glXQueryChannelDeltasSGIX(glXQueryChannelDeltasSGIX_ARG_EXPAND);
packed_call_t *pack_glXQueryChannelDeltasSGIX(glXQueryChannelDeltasSGIX_PACKED *_dst glXQueryChannelDeltasSGIX_ARG_EXPAND_TAIL);
typedef int (*glXQueryChannelDeltasSGIX_PTR)(glXQueryChannelDeltasSGIX_ARG_EXPAND);
#endif
#ifndef glXQueryChannelRectSGIX_RETURN
#define glXQueryChannelRectSGIX_RETURN int
#define glXQueryChannelRectSGIX_ARG_NAMES display, screen, channel, dx, dy, dw, dh
#define glXQueryChannelRectSGIX_ARG_EXPAND Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh
#define glXQueryChannelRectSGIX_ARG_NAMES_TAIL , display, screen, channel, dx, dy, dw, dh
#define glXQueryChannelRectSGIX_ARG_EXPAND_TAIL , Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh
#define forward_glXQueryChannelRectSGIX(_display, _screen, _channel, _dx, _dy, _dw, _dh) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryChannelRectSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryChannelRectSGIX(dst, _display, _screen, _channel, _dx, _dy, _dw, _dh), &ret); \
        ret; \
    });
#define call_glXQueryChannelRectSGIX(packed, ret_v) do { \
    glXQueryChannelRectSGIX_PACKED *unpacked = (glXQueryChannelRectSGIX_PACKED *)packed; \
    glXQueryChannelRectSGIX_ARGS *args = (glXQueryChannelRectSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryChannelRectSGIX(args->display, args->screen, args->channel, args->dx, args->dy, args->dw, args->dh);; \
    } else { \
        glXQueryChannelRectSGIX(args->display, args->screen, args->channel, args->dx, args->dy, args->dw, args->dh);; \
    } \
} while(0)
int glXQueryChannelRectSGIX(glXQueryChannelRectSGIX_ARG_EXPAND);
packed_call_t *pack_glXQueryChannelRectSGIX(glXQueryChannelRectSGIX_PACKED *_dst glXQueryChannelRectSGIX_ARG_EXPAND_TAIL);
typedef int (*glXQueryChannelRectSGIX_PTR)(glXQueryChannelRectSGIX_ARG_EXPAND);
#endif
#ifndef glXQueryContext_RETURN
#define glXQueryContext_RETURN int
#define glXQueryContext_ARG_NAMES dpy, ctx, attribute, value
#define glXQueryContext_ARG_EXPAND Display * dpy, GLXContext ctx, int attribute, int * value
#define glXQueryContext_ARG_NAMES_TAIL , dpy, ctx, attribute, value
#define glXQueryContext_ARG_EXPAND_TAIL , Display * dpy, GLXContext ctx, int attribute, int * value
#define forward_glXQueryContext(_dpy, _ctx, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryContext_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryContext(dst, _dpy, _ctx, _attribute, _value), &ret); \
        ret; \
    });
#define call_glXQueryContext(packed, ret_v) do { \
    glXQueryContext_PACKED *unpacked = (glXQueryContext_PACKED *)packed; \
    glXQueryContext_ARGS *args = (glXQueryContext_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryContext(args->dpy, args->ctx, args->attribute, args->value);; \
    } else { \
        glXQueryContext(args->dpy, args->ctx, args->attribute, args->value);; \
    } \
} while(0)
int glXQueryContext(glXQueryContext_ARG_EXPAND);
packed_call_t *pack_glXQueryContext(glXQueryContext_PACKED *_dst glXQueryContext_ARG_EXPAND_TAIL);
typedef int (*glXQueryContext_PTR)(glXQueryContext_ARG_EXPAND);
#endif
#ifndef glXQueryContextInfoEXT_RETURN
#define glXQueryContextInfoEXT_RETURN int
#define glXQueryContextInfoEXT_ARG_NAMES dpy, context, attribute, value
#define glXQueryContextInfoEXT_ARG_EXPAND Display * dpy, GLXContext context, int attribute, int * value
#define glXQueryContextInfoEXT_ARG_NAMES_TAIL , dpy, context, attribute, value
#define glXQueryContextInfoEXT_ARG_EXPAND_TAIL , Display * dpy, GLXContext context, int attribute, int * value
#define forward_glXQueryContextInfoEXT(_dpy, _context, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryContextInfoEXT_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryContextInfoEXT(dst, _dpy, _context, _attribute, _value), &ret); \
        ret; \
    });
#define call_glXQueryContextInfoEXT(packed, ret_v) do { \
    glXQueryContextInfoEXT_PACKED *unpacked = (glXQueryContextInfoEXT_PACKED *)packed; \
    glXQueryContextInfoEXT_ARGS *args = (glXQueryContextInfoEXT_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryContextInfoEXT(args->dpy, args->context, args->attribute, args->value);; \
    } else { \
        glXQueryContextInfoEXT(args->dpy, args->context, args->attribute, args->value);; \
    } \
} while(0)
int glXQueryContextInfoEXT(glXQueryContextInfoEXT_ARG_EXPAND);
packed_call_t *pack_glXQueryContextInfoEXT(glXQueryContextInfoEXT_PACKED *_dst glXQueryContextInfoEXT_ARG_EXPAND_TAIL);
typedef int (*glXQueryContextInfoEXT_PTR)(glXQueryContextInfoEXT_ARG_EXPAND);
#endif
#ifndef glXQueryDrawable_RETURN
#define glXQueryDrawable_RETURN void
#define glXQueryDrawable_ARG_NAMES dpy, draw, attribute, value
#define glXQueryDrawable_ARG_EXPAND Display * dpy, GLXDrawable draw, int attribute, unsigned int * value
#define glXQueryDrawable_ARG_NAMES_TAIL , dpy, draw, attribute, value
#define glXQueryDrawable_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable draw, int attribute, unsigned int * value
#define forward_glXQueryDrawable(_dpy, _draw, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryDrawable_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXQueryDrawable(dst, _dpy, _draw, _attribute, _value), NULL); \
    });
#define call_glXQueryDrawable(packed, ret_v) do { \
    glXQueryDrawable_PACKED *unpacked = (glXQueryDrawable_PACKED *)packed; \
    glXQueryDrawable_ARGS *args = (glXQueryDrawable_ARGS *)&unpacked->args; \
    glXQueryDrawable(args->dpy, args->draw, args->attribute, args->value);; \
} while(0)
void glXQueryDrawable(glXQueryDrawable_ARG_EXPAND);
packed_call_t *pack_glXQueryDrawable(glXQueryDrawable_PACKED *_dst glXQueryDrawable_ARG_EXPAND_TAIL);
typedef void (*glXQueryDrawable_PTR)(glXQueryDrawable_ARG_EXPAND);
#endif
#ifndef glXQueryExtension_RETURN
#define glXQueryExtension_RETURN Bool
#define glXQueryExtension_ARG_NAMES display, errorBase, eventBase
#define glXQueryExtension_ARG_EXPAND Display * display, int * errorBase, int * eventBase
#define glXQueryExtension_ARG_NAMES_TAIL , display, errorBase, eventBase
#define glXQueryExtension_ARG_EXPAND_TAIL , Display * display, int * errorBase, int * eventBase
#define forward_glXQueryExtension(_display, _errorBase, _eventBase) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryExtension_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryExtension(dst, _display, _errorBase, _eventBase), &ret); \
        ret; \
    });
#define call_glXQueryExtension(packed, ret_v) do { \
    glXQueryExtension_PACKED *unpacked = (glXQueryExtension_PACKED *)packed; \
    glXQueryExtension_ARGS *args = (glXQueryExtension_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryExtension(args->display, args->errorBase, args->eventBase);; \
    } else { \
        glXQueryExtension(args->display, args->errorBase, args->eventBase);; \
    } \
} while(0)
Bool glXQueryExtension(glXQueryExtension_ARG_EXPAND);
packed_call_t *pack_glXQueryExtension(glXQueryExtension_PACKED *_dst glXQueryExtension_ARG_EXPAND_TAIL);
typedef Bool (*glXQueryExtension_PTR)(glXQueryExtension_ARG_EXPAND);
#endif
#ifndef glXQueryExtensionsString_RETURN
#define glXQueryExtensionsString_RETURN const char *
#define glXQueryExtensionsString_ARG_NAMES dpy, screen
#define glXQueryExtensionsString_ARG_EXPAND Display * dpy, int screen
#define glXQueryExtensionsString_ARG_NAMES_TAIL , dpy, screen
#define glXQueryExtensionsString_ARG_EXPAND_TAIL , Display * dpy, int screen
#define forward_glXQueryExtensionsString(_dpy, _screen) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryExtensionsString_PACKED)); \
        const char * ret = (const char *)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryExtensionsString(dst, _dpy, _screen), &ret); \
        ret; \
    });
#define call_glXQueryExtensionsString(packed, ret_v) do { \
    glXQueryExtensionsString_PACKED *unpacked = (glXQueryExtensionsString_PACKED *)packed; \
    glXQueryExtensionsString_ARGS *args = (glXQueryExtensionsString_ARGS *)&unpacked->args; \
    const char * *ret = (const char * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryExtensionsString(args->dpy, args->screen);; \
    } else { \
        glXQueryExtensionsString(args->dpy, args->screen);; \
    } \
} while(0)
const char * glXQueryExtensionsString(glXQueryExtensionsString_ARG_EXPAND);
packed_call_t *pack_glXQueryExtensionsString(glXQueryExtensionsString_PACKED *_dst glXQueryExtensionsString_ARG_EXPAND_TAIL);
typedef const char * (*glXQueryExtensionsString_PTR)(glXQueryExtensionsString_ARG_EXPAND);
#endif
#ifndef glXQueryFrameCountNV_RETURN
#define glXQueryFrameCountNV_RETURN Bool
#define glXQueryFrameCountNV_ARG_NAMES dpy, screen, count
#define glXQueryFrameCountNV_ARG_EXPAND Display * dpy, int screen, GLuint * count
#define glXQueryFrameCountNV_ARG_NAMES_TAIL , dpy, screen, count
#define glXQueryFrameCountNV_ARG_EXPAND_TAIL , Display * dpy, int screen, GLuint * count
#define forward_glXQueryFrameCountNV(_dpy, _screen, _count) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryFrameCountNV_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryFrameCountNV(dst, _dpy, _screen, _count), &ret); \
        ret; \
    });
#define call_glXQueryFrameCountNV(packed, ret_v) do { \
    glXQueryFrameCountNV_PACKED *unpacked = (glXQueryFrameCountNV_PACKED *)packed; \
    glXQueryFrameCountNV_ARGS *args = (glXQueryFrameCountNV_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryFrameCountNV(args->dpy, args->screen, args->count);; \
    } else { \
        glXQueryFrameCountNV(args->dpy, args->screen, args->count);; \
    } \
} while(0)
Bool glXQueryFrameCountNV(glXQueryFrameCountNV_ARG_EXPAND);
packed_call_t *pack_glXQueryFrameCountNV(glXQueryFrameCountNV_PACKED *_dst glXQueryFrameCountNV_ARG_EXPAND_TAIL);
typedef Bool (*glXQueryFrameCountNV_PTR)(glXQueryFrameCountNV_ARG_EXPAND);
#endif
#ifndef glXQueryGLXPbufferSGIX_RETURN
#define glXQueryGLXPbufferSGIX_RETURN int
#define glXQueryGLXPbufferSGIX_ARG_NAMES dpy, pbuf, attribute, value
#define glXQueryGLXPbufferSGIX_ARG_EXPAND Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value
#define glXQueryGLXPbufferSGIX_ARG_NAMES_TAIL , dpy, pbuf, attribute, value
#define glXQueryGLXPbufferSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value
#define forward_glXQueryGLXPbufferSGIX(_dpy, _pbuf, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryGLXPbufferSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryGLXPbufferSGIX(dst, _dpy, _pbuf, _attribute, _value), &ret); \
        ret; \
    });
#define call_glXQueryGLXPbufferSGIX(packed, ret_v) do { \
    glXQueryGLXPbufferSGIX_PACKED *unpacked = (glXQueryGLXPbufferSGIX_PACKED *)packed; \
    glXQueryGLXPbufferSGIX_ARGS *args = (glXQueryGLXPbufferSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryGLXPbufferSGIX(args->dpy, args->pbuf, args->attribute, args->value);; \
    } else { \
        glXQueryGLXPbufferSGIX(args->dpy, args->pbuf, args->attribute, args->value);; \
    } \
} while(0)
int glXQueryGLXPbufferSGIX(glXQueryGLXPbufferSGIX_ARG_EXPAND);
packed_call_t *pack_glXQueryGLXPbufferSGIX(glXQueryGLXPbufferSGIX_PACKED *_dst glXQueryGLXPbufferSGIX_ARG_EXPAND_TAIL);
typedef int (*glXQueryGLXPbufferSGIX_PTR)(glXQueryGLXPbufferSGIX_ARG_EXPAND);
#endif
#ifndef glXQueryHyperpipeAttribSGIX_RETURN
#define glXQueryHyperpipeAttribSGIX_RETURN int
#define glXQueryHyperpipeAttribSGIX_ARG_NAMES dpy, timeSlice, attrib, size, returnAttribList
#define glXQueryHyperpipeAttribSGIX_ARG_EXPAND Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList
#define glXQueryHyperpipeAttribSGIX_ARG_NAMES_TAIL , dpy, timeSlice, attrib, size, returnAttribList
#define glXQueryHyperpipeAttribSGIX_ARG_EXPAND_TAIL , Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList
#define forward_glXQueryHyperpipeAttribSGIX(_dpy, _timeSlice, _attrib, _size, _returnAttribList) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryHyperpipeAttribSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryHyperpipeAttribSGIX(dst, _dpy, _timeSlice, _attrib, _size, _returnAttribList), &ret); \
        ret; \
    });
#define call_glXQueryHyperpipeAttribSGIX(packed, ret_v) do { \
    glXQueryHyperpipeAttribSGIX_PACKED *unpacked = (glXQueryHyperpipeAttribSGIX_PACKED *)packed; \
    glXQueryHyperpipeAttribSGIX_ARGS *args = (glXQueryHyperpipeAttribSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryHyperpipeAttribSGIX(args->dpy, args->timeSlice, args->attrib, args->size, args->returnAttribList);; \
    } else { \
        glXQueryHyperpipeAttribSGIX(args->dpy, args->timeSlice, args->attrib, args->size, args->returnAttribList);; \
    } \
} while(0)
int glXQueryHyperpipeAttribSGIX(glXQueryHyperpipeAttribSGIX_ARG_EXPAND);
packed_call_t *pack_glXQueryHyperpipeAttribSGIX(glXQueryHyperpipeAttribSGIX_PACKED *_dst glXQueryHyperpipeAttribSGIX_ARG_EXPAND_TAIL);
typedef int (*glXQueryHyperpipeAttribSGIX_PTR)(glXQueryHyperpipeAttribSGIX_ARG_EXPAND);
#endif
#ifndef glXQueryHyperpipeBestAttribSGIX_RETURN
#define glXQueryHyperpipeBestAttribSGIX_RETURN int
#define glXQueryHyperpipeBestAttribSGIX_ARG_NAMES dpy, timeSlice, attrib, size, attribList, returnAttribList
#define glXQueryHyperpipeBestAttribSGIX_ARG_EXPAND Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList
#define glXQueryHyperpipeBestAttribSGIX_ARG_NAMES_TAIL , dpy, timeSlice, attrib, size, attribList, returnAttribList
#define glXQueryHyperpipeBestAttribSGIX_ARG_EXPAND_TAIL , Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList
#define forward_glXQueryHyperpipeBestAttribSGIX(_dpy, _timeSlice, _attrib, _size, _attribList, _returnAttribList) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryHyperpipeBestAttribSGIX_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryHyperpipeBestAttribSGIX(dst, _dpy, _timeSlice, _attrib, _size, _attribList, _returnAttribList), &ret); \
        ret; \
    });
#define call_glXQueryHyperpipeBestAttribSGIX(packed, ret_v) do { \
    glXQueryHyperpipeBestAttribSGIX_PACKED *unpacked = (glXQueryHyperpipeBestAttribSGIX_PACKED *)packed; \
    glXQueryHyperpipeBestAttribSGIX_ARGS *args = (glXQueryHyperpipeBestAttribSGIX_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryHyperpipeBestAttribSGIX(args->dpy, args->timeSlice, args->attrib, args->size, args->attribList, args->returnAttribList);; \
    } else { \
        glXQueryHyperpipeBestAttribSGIX(args->dpy, args->timeSlice, args->attrib, args->size, args->attribList, args->returnAttribList);; \
    } \
} while(0)
int glXQueryHyperpipeBestAttribSGIX(glXQueryHyperpipeBestAttribSGIX_ARG_EXPAND);
packed_call_t *pack_glXQueryHyperpipeBestAttribSGIX(glXQueryHyperpipeBestAttribSGIX_PACKED *_dst glXQueryHyperpipeBestAttribSGIX_ARG_EXPAND_TAIL);
typedef int (*glXQueryHyperpipeBestAttribSGIX_PTR)(glXQueryHyperpipeBestAttribSGIX_ARG_EXPAND);
#endif
#ifndef glXQueryHyperpipeConfigSGIX_RETURN
#define glXQueryHyperpipeConfigSGIX_RETURN GLXHyperpipeConfigSGIX *
#define glXQueryHyperpipeConfigSGIX_ARG_NAMES dpy, hpId, npipes
#define glXQueryHyperpipeConfigSGIX_ARG_EXPAND Display * dpy, int hpId, int * npipes
#define glXQueryHyperpipeConfigSGIX_ARG_NAMES_TAIL , dpy, hpId, npipes
#define glXQueryHyperpipeConfigSGIX_ARG_EXPAND_TAIL , Display * dpy, int hpId, int * npipes
#define forward_glXQueryHyperpipeConfigSGIX(_dpy, _hpId, _npipes) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryHyperpipeConfigSGIX_PACKED)); \
        GLXHyperpipeConfigSGIX * ret = (GLXHyperpipeConfigSGIX *)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryHyperpipeConfigSGIX(dst, _dpy, _hpId, _npipes), &ret); \
        ret; \
    });
#define call_glXQueryHyperpipeConfigSGIX(packed, ret_v) do { \
    glXQueryHyperpipeConfigSGIX_PACKED *unpacked = (glXQueryHyperpipeConfigSGIX_PACKED *)packed; \
    glXQueryHyperpipeConfigSGIX_ARGS *args = (glXQueryHyperpipeConfigSGIX_ARGS *)&unpacked->args; \
    GLXHyperpipeConfigSGIX * *ret = (GLXHyperpipeConfigSGIX * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryHyperpipeConfigSGIX(args->dpy, args->hpId, args->npipes);; \
    } else { \
        glXQueryHyperpipeConfigSGIX(args->dpy, args->hpId, args->npipes);; \
    } \
} while(0)
GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX(glXQueryHyperpipeConfigSGIX_ARG_EXPAND);
packed_call_t *pack_glXQueryHyperpipeConfigSGIX(glXQueryHyperpipeConfigSGIX_PACKED *_dst glXQueryHyperpipeConfigSGIX_ARG_EXPAND_TAIL);
typedef GLXHyperpipeConfigSGIX * (*glXQueryHyperpipeConfigSGIX_PTR)(glXQueryHyperpipeConfigSGIX_ARG_EXPAND);
#endif
#ifndef glXQueryHyperpipeNetworkSGIX_RETURN
#define glXQueryHyperpipeNetworkSGIX_RETURN GLXHyperpipeNetworkSGIX *
#define glXQueryHyperpipeNetworkSGIX_ARG_NAMES dpy, npipes
#define glXQueryHyperpipeNetworkSGIX_ARG_EXPAND Display * dpy, int * npipes
#define glXQueryHyperpipeNetworkSGIX_ARG_NAMES_TAIL , dpy, npipes
#define glXQueryHyperpipeNetworkSGIX_ARG_EXPAND_TAIL , Display * dpy, int * npipes
#define forward_glXQueryHyperpipeNetworkSGIX(_dpy, _npipes) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryHyperpipeNetworkSGIX_PACKED)); \
        GLXHyperpipeNetworkSGIX * ret = (GLXHyperpipeNetworkSGIX *)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryHyperpipeNetworkSGIX(dst, _dpy, _npipes), &ret); \
        ret; \
    });
#define call_glXQueryHyperpipeNetworkSGIX(packed, ret_v) do { \
    glXQueryHyperpipeNetworkSGIX_PACKED *unpacked = (glXQueryHyperpipeNetworkSGIX_PACKED *)packed; \
    glXQueryHyperpipeNetworkSGIX_ARGS *args = (glXQueryHyperpipeNetworkSGIX_ARGS *)&unpacked->args; \
    GLXHyperpipeNetworkSGIX * *ret = (GLXHyperpipeNetworkSGIX * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryHyperpipeNetworkSGIX(args->dpy, args->npipes);; \
    } else { \
        glXQueryHyperpipeNetworkSGIX(args->dpy, args->npipes);; \
    } \
} while(0)
GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX(glXQueryHyperpipeNetworkSGIX_ARG_EXPAND);
packed_call_t *pack_glXQueryHyperpipeNetworkSGIX(glXQueryHyperpipeNetworkSGIX_PACKED *_dst glXQueryHyperpipeNetworkSGIX_ARG_EXPAND_TAIL);
typedef GLXHyperpipeNetworkSGIX * (*glXQueryHyperpipeNetworkSGIX_PTR)(glXQueryHyperpipeNetworkSGIX_ARG_EXPAND);
#endif
#ifndef glXQueryMaxSwapBarriersSGIX_RETURN
#define glXQueryMaxSwapBarriersSGIX_RETURN Bool
#define glXQueryMaxSwapBarriersSGIX_ARG_NAMES dpy, screen, max
#define glXQueryMaxSwapBarriersSGIX_ARG_EXPAND Display * dpy, int screen, int * max
#define glXQueryMaxSwapBarriersSGIX_ARG_NAMES_TAIL , dpy, screen, max
#define glXQueryMaxSwapBarriersSGIX_ARG_EXPAND_TAIL , Display * dpy, int screen, int * max
#define forward_glXQueryMaxSwapBarriersSGIX(_dpy, _screen, _max) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryMaxSwapBarriersSGIX_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryMaxSwapBarriersSGIX(dst, _dpy, _screen, _max), &ret); \
        ret; \
    });
#define call_glXQueryMaxSwapBarriersSGIX(packed, ret_v) do { \
    glXQueryMaxSwapBarriersSGIX_PACKED *unpacked = (glXQueryMaxSwapBarriersSGIX_PACKED *)packed; \
    glXQueryMaxSwapBarriersSGIX_ARGS *args = (glXQueryMaxSwapBarriersSGIX_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryMaxSwapBarriersSGIX(args->dpy, args->screen, args->max);; \
    } else { \
        glXQueryMaxSwapBarriersSGIX(args->dpy, args->screen, args->max);; \
    } \
} while(0)
Bool glXQueryMaxSwapBarriersSGIX(glXQueryMaxSwapBarriersSGIX_ARG_EXPAND);
packed_call_t *pack_glXQueryMaxSwapBarriersSGIX(glXQueryMaxSwapBarriersSGIX_PACKED *_dst glXQueryMaxSwapBarriersSGIX_ARG_EXPAND_TAIL);
typedef Bool (*glXQueryMaxSwapBarriersSGIX_PTR)(glXQueryMaxSwapBarriersSGIX_ARG_EXPAND);
#endif
#ifndef glXQueryMaxSwapGroupsNV_RETURN
#define glXQueryMaxSwapGroupsNV_RETURN Bool
#define glXQueryMaxSwapGroupsNV_ARG_NAMES dpy, screen, maxGroups, maxBarriers
#define glXQueryMaxSwapGroupsNV_ARG_EXPAND Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers
#define glXQueryMaxSwapGroupsNV_ARG_NAMES_TAIL , dpy, screen, maxGroups, maxBarriers
#define glXQueryMaxSwapGroupsNV_ARG_EXPAND_TAIL , Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers
#define forward_glXQueryMaxSwapGroupsNV(_dpy, _screen, _maxGroups, _maxBarriers) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryMaxSwapGroupsNV_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryMaxSwapGroupsNV(dst, _dpy, _screen, _maxGroups, _maxBarriers), &ret); \
        ret; \
    });
#define call_glXQueryMaxSwapGroupsNV(packed, ret_v) do { \
    glXQueryMaxSwapGroupsNV_PACKED *unpacked = (glXQueryMaxSwapGroupsNV_PACKED *)packed; \
    glXQueryMaxSwapGroupsNV_ARGS *args = (glXQueryMaxSwapGroupsNV_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryMaxSwapGroupsNV(args->dpy, args->screen, args->maxGroups, args->maxBarriers);; \
    } else { \
        glXQueryMaxSwapGroupsNV(args->dpy, args->screen, args->maxGroups, args->maxBarriers);; \
    } \
} while(0)
Bool glXQueryMaxSwapGroupsNV(glXQueryMaxSwapGroupsNV_ARG_EXPAND);
packed_call_t *pack_glXQueryMaxSwapGroupsNV(glXQueryMaxSwapGroupsNV_PACKED *_dst glXQueryMaxSwapGroupsNV_ARG_EXPAND_TAIL);
typedef Bool (*glXQueryMaxSwapGroupsNV_PTR)(glXQueryMaxSwapGroupsNV_ARG_EXPAND);
#endif
#ifndef glXQueryServerString_RETURN
#define glXQueryServerString_RETURN const char *
#define glXQueryServerString_ARG_NAMES dpy, screen, name
#define glXQueryServerString_ARG_EXPAND Display * dpy, int screen, int name
#define glXQueryServerString_ARG_NAMES_TAIL , dpy, screen, name
#define glXQueryServerString_ARG_EXPAND_TAIL , Display * dpy, int screen, int name
#define forward_glXQueryServerString(_dpy, _screen, _name) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryServerString_PACKED)); \
        const char * ret = (const char *)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryServerString(dst, _dpy, _screen, _name), &ret); \
        ret; \
    });
#define call_glXQueryServerString(packed, ret_v) do { \
    glXQueryServerString_PACKED *unpacked = (glXQueryServerString_PACKED *)packed; \
    glXQueryServerString_ARGS *args = (glXQueryServerString_ARGS *)&unpacked->args; \
    const char * *ret = (const char * *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryServerString(args->dpy, args->screen, args->name);; \
    } else { \
        glXQueryServerString(args->dpy, args->screen, args->name);; \
    } \
} while(0)
const char * glXQueryServerString(glXQueryServerString_ARG_EXPAND);
packed_call_t *pack_glXQueryServerString(glXQueryServerString_PACKED *_dst glXQueryServerString_ARG_EXPAND_TAIL);
typedef const char * (*glXQueryServerString_PTR)(glXQueryServerString_ARG_EXPAND);
#endif
#ifndef glXQuerySwapGroupNV_RETURN
#define glXQuerySwapGroupNV_RETURN Bool
#define glXQuerySwapGroupNV_ARG_NAMES dpy, drawable, group, barrier
#define glXQuerySwapGroupNV_ARG_EXPAND Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier
#define glXQuerySwapGroupNV_ARG_NAMES_TAIL , dpy, drawable, group, barrier
#define glXQuerySwapGroupNV_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier
#define forward_glXQuerySwapGroupNV(_dpy, _drawable, _group, _barrier) \
    ({ \
        void *dst = remote_dma(sizeof(glXQuerySwapGroupNV_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXQuerySwapGroupNV(dst, _dpy, _drawable, _group, _barrier), &ret); \
        ret; \
    });
#define call_glXQuerySwapGroupNV(packed, ret_v) do { \
    glXQuerySwapGroupNV_PACKED *unpacked = (glXQuerySwapGroupNV_PACKED *)packed; \
    glXQuerySwapGroupNV_ARGS *args = (glXQuerySwapGroupNV_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQuerySwapGroupNV(args->dpy, args->drawable, args->group, args->barrier);; \
    } else { \
        glXQuerySwapGroupNV(args->dpy, args->drawable, args->group, args->barrier);; \
    } \
} while(0)
Bool glXQuerySwapGroupNV(glXQuerySwapGroupNV_ARG_EXPAND);
packed_call_t *pack_glXQuerySwapGroupNV(glXQuerySwapGroupNV_PACKED *_dst glXQuerySwapGroupNV_ARG_EXPAND_TAIL);
typedef Bool (*glXQuerySwapGroupNV_PTR)(glXQuerySwapGroupNV_ARG_EXPAND);
#endif
#ifndef glXQueryVersion_RETURN
#define glXQueryVersion_RETURN Bool
#define glXQueryVersion_ARG_NAMES dpy, maj, min
#define glXQueryVersion_ARG_EXPAND Display * dpy, int * maj, int * min
#define glXQueryVersion_ARG_NAMES_TAIL , dpy, maj, min
#define glXQueryVersion_ARG_EXPAND_TAIL , Display * dpy, int * maj, int * min
#define forward_glXQueryVersion(_dpy, _maj, _min) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryVersion_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryVersion(dst, _dpy, _maj, _min), &ret); \
        ret; \
    });
#define call_glXQueryVersion(packed, ret_v) do { \
    glXQueryVersion_PACKED *unpacked = (glXQueryVersion_PACKED *)packed; \
    glXQueryVersion_ARGS *args = (glXQueryVersion_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryVersion(args->dpy, args->maj, args->min);; \
    } else { \
        glXQueryVersion(args->dpy, args->maj, args->min);; \
    } \
} while(0)
Bool glXQueryVersion(glXQueryVersion_ARG_EXPAND);
packed_call_t *pack_glXQueryVersion(glXQueryVersion_PACKED *_dst glXQueryVersion_ARG_EXPAND_TAIL);
typedef Bool (*glXQueryVersion_PTR)(glXQueryVersion_ARG_EXPAND);
#endif
#ifndef glXQueryVideoCaptureDeviceNV_RETURN
#define glXQueryVideoCaptureDeviceNV_RETURN int
#define glXQueryVideoCaptureDeviceNV_ARG_NAMES dpy, device, attribute, value
#define glXQueryVideoCaptureDeviceNV_ARG_EXPAND Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value
#define glXQueryVideoCaptureDeviceNV_ARG_NAMES_TAIL , dpy, device, attribute, value
#define glXQueryVideoCaptureDeviceNV_ARG_EXPAND_TAIL , Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value
#define forward_glXQueryVideoCaptureDeviceNV(_dpy, _device, _attribute, _value) \
    ({ \
        void *dst = remote_dma(sizeof(glXQueryVideoCaptureDeviceNV_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXQueryVideoCaptureDeviceNV(dst, _dpy, _device, _attribute, _value), &ret); \
        ret; \
    });
#define call_glXQueryVideoCaptureDeviceNV(packed, ret_v) do { \
    glXQueryVideoCaptureDeviceNV_PACKED *unpacked = (glXQueryVideoCaptureDeviceNV_PACKED *)packed; \
    glXQueryVideoCaptureDeviceNV_ARGS *args = (glXQueryVideoCaptureDeviceNV_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXQueryVideoCaptureDeviceNV(args->dpy, args->device, args->attribute, args->value);; \
    } else { \
        glXQueryVideoCaptureDeviceNV(args->dpy, args->device, args->attribute, args->value);; \
    } \
} while(0)
int glXQueryVideoCaptureDeviceNV(glXQueryVideoCaptureDeviceNV_ARG_EXPAND);
packed_call_t *pack_glXQueryVideoCaptureDeviceNV(glXQueryVideoCaptureDeviceNV_PACKED *_dst glXQueryVideoCaptureDeviceNV_ARG_EXPAND_TAIL);
typedef int (*glXQueryVideoCaptureDeviceNV_PTR)(glXQueryVideoCaptureDeviceNV_ARG_EXPAND);
#endif
#ifndef glXReleaseBuffersMESA_RETURN
#define glXReleaseBuffersMESA_RETURN Bool
#define glXReleaseBuffersMESA_ARG_NAMES dpy, drawable
#define glXReleaseBuffersMESA_ARG_EXPAND Display * dpy, GLXDrawable drawable
#define glXReleaseBuffersMESA_ARG_NAMES_TAIL , dpy, drawable
#define glXReleaseBuffersMESA_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable
#define forward_glXReleaseBuffersMESA(_dpy, _drawable) \
    ({ \
        void *dst = remote_dma(sizeof(glXReleaseBuffersMESA_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXReleaseBuffersMESA(dst, _dpy, _drawable), &ret); \
        ret; \
    });
#define call_glXReleaseBuffersMESA(packed, ret_v) do { \
    glXReleaseBuffersMESA_PACKED *unpacked = (glXReleaseBuffersMESA_PACKED *)packed; \
    glXReleaseBuffersMESA_ARGS *args = (glXReleaseBuffersMESA_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXReleaseBuffersMESA(args->dpy, args->drawable);; \
    } else { \
        glXReleaseBuffersMESA(args->dpy, args->drawable);; \
    } \
} while(0)
Bool glXReleaseBuffersMESA(glXReleaseBuffersMESA_ARG_EXPAND);
packed_call_t *pack_glXReleaseBuffersMESA(glXReleaseBuffersMESA_PACKED *_dst glXReleaseBuffersMESA_ARG_EXPAND_TAIL);
typedef Bool (*glXReleaseBuffersMESA_PTR)(glXReleaseBuffersMESA_ARG_EXPAND);
#endif
#ifndef glXReleaseTexImageEXT_RETURN
#define glXReleaseTexImageEXT_RETURN void
#define glXReleaseTexImageEXT_ARG_NAMES dpy, drawable, buffer
#define glXReleaseTexImageEXT_ARG_EXPAND Display * dpy, GLXDrawable drawable, int buffer
#define glXReleaseTexImageEXT_ARG_NAMES_TAIL , dpy, drawable, buffer
#define glXReleaseTexImageEXT_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, int buffer
#define forward_glXReleaseTexImageEXT(_dpy, _drawable, _buffer) \
    ({ \
        void *dst = remote_dma(sizeof(glXReleaseTexImageEXT_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXReleaseTexImageEXT(dst, _dpy, _drawable, _buffer), NULL); \
    });
#define call_glXReleaseTexImageEXT(packed, ret_v) do { \
    glXReleaseTexImageEXT_PACKED *unpacked = (glXReleaseTexImageEXT_PACKED *)packed; \
    glXReleaseTexImageEXT_ARGS *args = (glXReleaseTexImageEXT_ARGS *)&unpacked->args; \
    glXReleaseTexImageEXT(args->dpy, args->drawable, args->buffer);; \
} while(0)
void glXReleaseTexImageEXT(glXReleaseTexImageEXT_ARG_EXPAND);
packed_call_t *pack_glXReleaseTexImageEXT(glXReleaseTexImageEXT_PACKED *_dst glXReleaseTexImageEXT_ARG_EXPAND_TAIL);
typedef void (*glXReleaseTexImageEXT_PTR)(glXReleaseTexImageEXT_ARG_EXPAND);
#endif
#ifndef glXReleaseVideoCaptureDeviceNV_RETURN
#define glXReleaseVideoCaptureDeviceNV_RETURN void
#define glXReleaseVideoCaptureDeviceNV_ARG_NAMES dpy, device
#define glXReleaseVideoCaptureDeviceNV_ARG_EXPAND Display * dpy, GLXVideoCaptureDeviceNV device
#define glXReleaseVideoCaptureDeviceNV_ARG_NAMES_TAIL , dpy, device
#define glXReleaseVideoCaptureDeviceNV_ARG_EXPAND_TAIL , Display * dpy, GLXVideoCaptureDeviceNV device
#define forward_glXReleaseVideoCaptureDeviceNV(_dpy, _device) \
    ({ \
        void *dst = remote_dma(sizeof(glXReleaseVideoCaptureDeviceNV_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXReleaseVideoCaptureDeviceNV(dst, _dpy, _device), NULL); \
    });
#define call_glXReleaseVideoCaptureDeviceNV(packed, ret_v) do { \
    glXReleaseVideoCaptureDeviceNV_PACKED *unpacked = (glXReleaseVideoCaptureDeviceNV_PACKED *)packed; \
    glXReleaseVideoCaptureDeviceNV_ARGS *args = (glXReleaseVideoCaptureDeviceNV_ARGS *)&unpacked->args; \
    glXReleaseVideoCaptureDeviceNV(args->dpy, args->device);; \
} while(0)
void glXReleaseVideoCaptureDeviceNV(glXReleaseVideoCaptureDeviceNV_ARG_EXPAND);
packed_call_t *pack_glXReleaseVideoCaptureDeviceNV(glXReleaseVideoCaptureDeviceNV_PACKED *_dst glXReleaseVideoCaptureDeviceNV_ARG_EXPAND_TAIL);
typedef void (*glXReleaseVideoCaptureDeviceNV_PTR)(glXReleaseVideoCaptureDeviceNV_ARG_EXPAND);
#endif
#ifndef glXReleaseVideoDeviceNV_RETURN
#define glXReleaseVideoDeviceNV_RETURN int
#define glXReleaseVideoDeviceNV_ARG_NAMES dpy, screen, VideoDevice
#define glXReleaseVideoDeviceNV_ARG_EXPAND Display * dpy, int screen, GLXVideoDeviceNV VideoDevice
#define glXReleaseVideoDeviceNV_ARG_NAMES_TAIL , dpy, screen, VideoDevice
#define glXReleaseVideoDeviceNV_ARG_EXPAND_TAIL , Display * dpy, int screen, GLXVideoDeviceNV VideoDevice
#define forward_glXReleaseVideoDeviceNV(_dpy, _screen, _VideoDevice) \
    ({ \
        void *dst = remote_dma(sizeof(glXReleaseVideoDeviceNV_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXReleaseVideoDeviceNV(dst, _dpy, _screen, _VideoDevice), &ret); \
        ret; \
    });
#define call_glXReleaseVideoDeviceNV(packed, ret_v) do { \
    glXReleaseVideoDeviceNV_PACKED *unpacked = (glXReleaseVideoDeviceNV_PACKED *)packed; \
    glXReleaseVideoDeviceNV_ARGS *args = (glXReleaseVideoDeviceNV_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXReleaseVideoDeviceNV(args->dpy, args->screen, args->VideoDevice);; \
    } else { \
        glXReleaseVideoDeviceNV(args->dpy, args->screen, args->VideoDevice);; \
    } \
} while(0)
int glXReleaseVideoDeviceNV(glXReleaseVideoDeviceNV_ARG_EXPAND);
packed_call_t *pack_glXReleaseVideoDeviceNV(glXReleaseVideoDeviceNV_PACKED *_dst glXReleaseVideoDeviceNV_ARG_EXPAND_TAIL);
typedef int (*glXReleaseVideoDeviceNV_PTR)(glXReleaseVideoDeviceNV_ARG_EXPAND);
#endif
#ifndef glXReleaseVideoImageNV_RETURN
#define glXReleaseVideoImageNV_RETURN int
#define glXReleaseVideoImageNV_ARG_NAMES dpy, pbuf
#define glXReleaseVideoImageNV_ARG_EXPAND Display * dpy, GLXPbuffer pbuf
#define glXReleaseVideoImageNV_ARG_NAMES_TAIL , dpy, pbuf
#define glXReleaseVideoImageNV_ARG_EXPAND_TAIL , Display * dpy, GLXPbuffer pbuf
#define forward_glXReleaseVideoImageNV(_dpy, _pbuf) \
    ({ \
        void *dst = remote_dma(sizeof(glXReleaseVideoImageNV_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXReleaseVideoImageNV(dst, _dpy, _pbuf), &ret); \
        ret; \
    });
#define call_glXReleaseVideoImageNV(packed, ret_v) do { \
    glXReleaseVideoImageNV_PACKED *unpacked = (glXReleaseVideoImageNV_PACKED *)packed; \
    glXReleaseVideoImageNV_ARGS *args = (glXReleaseVideoImageNV_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXReleaseVideoImageNV(args->dpy, args->pbuf);; \
    } else { \
        glXReleaseVideoImageNV(args->dpy, args->pbuf);; \
    } \
} while(0)
int glXReleaseVideoImageNV(glXReleaseVideoImageNV_ARG_EXPAND);
packed_call_t *pack_glXReleaseVideoImageNV(glXReleaseVideoImageNV_PACKED *_dst glXReleaseVideoImageNV_ARG_EXPAND_TAIL);
typedef int (*glXReleaseVideoImageNV_PTR)(glXReleaseVideoImageNV_ARG_EXPAND);
#endif
#ifndef glXRender_RETURN
#define glXRender_RETURN void
#define glXRender_ARG_NAMES 
#define glXRender_ARG_EXPAND 
#define glXRender_ARG_NAMES_TAIL 
#define glXRender_ARG_EXPAND_TAIL 
#define forward_glXRender() \
    ({ \
        void *dst = remote_dma(sizeof(glXRender_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXRender(dst), NULL); \
    });
#define call_glXRender(packed, ret_v) do { \
    glXRender();; \
} while(0)
void glXRender(glXRender_ARG_EXPAND);
packed_call_t *pack_glXRender(glXRender_PACKED *_dst glXRender_ARG_EXPAND_TAIL);
typedef void (*glXRender_PTR)(glXRender_ARG_EXPAND);
#endif
#ifndef glXRenderLarge_RETURN
#define glXRenderLarge_RETURN void
#define glXRenderLarge_ARG_NAMES 
#define glXRenderLarge_ARG_EXPAND 
#define glXRenderLarge_ARG_NAMES_TAIL 
#define glXRenderLarge_ARG_EXPAND_TAIL 
#define forward_glXRenderLarge() \
    ({ \
        void *dst = remote_dma(sizeof(glXRenderLarge_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXRenderLarge(dst), NULL); \
    });
#define call_glXRenderLarge(packed, ret_v) do { \
    glXRenderLarge();; \
} while(0)
void glXRenderLarge(glXRenderLarge_ARG_EXPAND);
packed_call_t *pack_glXRenderLarge(glXRenderLarge_PACKED *_dst glXRenderLarge_ARG_EXPAND_TAIL);
typedef void (*glXRenderLarge_PTR)(glXRenderLarge_ARG_EXPAND);
#endif
#ifndef glXResetFrameCountNV_RETURN
#define glXResetFrameCountNV_RETURN Bool
#define glXResetFrameCountNV_ARG_NAMES dpy, screen
#define glXResetFrameCountNV_ARG_EXPAND Display * dpy, int screen
#define glXResetFrameCountNV_ARG_NAMES_TAIL , dpy, screen
#define glXResetFrameCountNV_ARG_EXPAND_TAIL , Display * dpy, int screen
#define forward_glXResetFrameCountNV(_dpy, _screen) \
    ({ \
        void *dst = remote_dma(sizeof(glXResetFrameCountNV_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXResetFrameCountNV(dst, _dpy, _screen), &ret); \
        ret; \
    });
#define call_glXResetFrameCountNV(packed, ret_v) do { \
    glXResetFrameCountNV_PACKED *unpacked = (glXResetFrameCountNV_PACKED *)packed; \
    glXResetFrameCountNV_ARGS *args = (glXResetFrameCountNV_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXResetFrameCountNV(args->dpy, args->screen);; \
    } else { \
        glXResetFrameCountNV(args->dpy, args->screen);; \
    } \
} while(0)
Bool glXResetFrameCountNV(glXResetFrameCountNV_ARG_EXPAND);
packed_call_t *pack_glXResetFrameCountNV(glXResetFrameCountNV_PACKED *_dst glXResetFrameCountNV_ARG_EXPAND_TAIL);
typedef Bool (*glXResetFrameCountNV_PTR)(glXResetFrameCountNV_ARG_EXPAND);
#endif
#ifndef glXSelectEvent_RETURN
#define glXSelectEvent_RETURN void
#define glXSelectEvent_ARG_NAMES dpy, draw, event_mask
#define glXSelectEvent_ARG_EXPAND Display * dpy, GLXDrawable draw, unsigned long event_mask
#define glXSelectEvent_ARG_NAMES_TAIL , dpy, draw, event_mask
#define glXSelectEvent_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable draw, unsigned long event_mask
#define forward_glXSelectEvent(_dpy, _draw, _event_mask) \
    ({ \
        void *dst = remote_dma(sizeof(glXSelectEvent_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXSelectEvent(dst, _dpy, _draw, _event_mask), NULL); \
    });
#define call_glXSelectEvent(packed, ret_v) do { \
    glXSelectEvent_PACKED *unpacked = (glXSelectEvent_PACKED *)packed; \
    glXSelectEvent_ARGS *args = (glXSelectEvent_ARGS *)&unpacked->args; \
    glXSelectEvent(args->dpy, args->draw, args->event_mask);; \
} while(0)
void glXSelectEvent(glXSelectEvent_ARG_EXPAND);
packed_call_t *pack_glXSelectEvent(glXSelectEvent_PACKED *_dst glXSelectEvent_ARG_EXPAND_TAIL);
typedef void (*glXSelectEvent_PTR)(glXSelectEvent_ARG_EXPAND);
#endif
#ifndef glXSelectEventSGIX_RETURN
#define glXSelectEventSGIX_RETURN void
#define glXSelectEventSGIX_ARG_NAMES dpy, drawable, mask
#define glXSelectEventSGIX_ARG_EXPAND Display * dpy, GLXDrawable drawable, unsigned long mask
#define glXSelectEventSGIX_ARG_NAMES_TAIL , dpy, drawable, mask
#define glXSelectEventSGIX_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, unsigned long mask
#define forward_glXSelectEventSGIX(_dpy, _drawable, _mask) \
    ({ \
        void *dst = remote_dma(sizeof(glXSelectEventSGIX_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXSelectEventSGIX(dst, _dpy, _drawable, _mask), NULL); \
    });
#define call_glXSelectEventSGIX(packed, ret_v) do { \
    glXSelectEventSGIX_PACKED *unpacked = (glXSelectEventSGIX_PACKED *)packed; \
    glXSelectEventSGIX_ARGS *args = (glXSelectEventSGIX_ARGS *)&unpacked->args; \
    glXSelectEventSGIX(args->dpy, args->drawable, args->mask);; \
} while(0)
void glXSelectEventSGIX(glXSelectEventSGIX_ARG_EXPAND);
packed_call_t *pack_glXSelectEventSGIX(glXSelectEventSGIX_PACKED *_dst glXSelectEventSGIX_ARG_EXPAND_TAIL);
typedef void (*glXSelectEventSGIX_PTR)(glXSelectEventSGIX_ARG_EXPAND);
#endif
#ifndef glXSendPbufferToVideoNV_RETURN
#define glXSendPbufferToVideoNV_RETURN int
#define glXSendPbufferToVideoNV_ARG_NAMES dpy, pbuf, iBufferType, pulCounterPbuffer, bBlock
#define glXSendPbufferToVideoNV_ARG_EXPAND Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock
#define glXSendPbufferToVideoNV_ARG_NAMES_TAIL , dpy, pbuf, iBufferType, pulCounterPbuffer, bBlock
#define glXSendPbufferToVideoNV_ARG_EXPAND_TAIL , Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock
#define forward_glXSendPbufferToVideoNV(_dpy, _pbuf, _iBufferType, _pulCounterPbuffer, _bBlock) \
    ({ \
        void *dst = remote_dma(sizeof(glXSendPbufferToVideoNV_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXSendPbufferToVideoNV(dst, _dpy, _pbuf, _iBufferType, _pulCounterPbuffer, _bBlock), &ret); \
        ret; \
    });
#define call_glXSendPbufferToVideoNV(packed, ret_v) do { \
    glXSendPbufferToVideoNV_PACKED *unpacked = (glXSendPbufferToVideoNV_PACKED *)packed; \
    glXSendPbufferToVideoNV_ARGS *args = (glXSendPbufferToVideoNV_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXSendPbufferToVideoNV(args->dpy, args->pbuf, args->iBufferType, args->pulCounterPbuffer, args->bBlock);; \
    } else { \
        glXSendPbufferToVideoNV(args->dpy, args->pbuf, args->iBufferType, args->pulCounterPbuffer, args->bBlock);; \
    } \
} while(0)
int glXSendPbufferToVideoNV(glXSendPbufferToVideoNV_ARG_EXPAND);
packed_call_t *pack_glXSendPbufferToVideoNV(glXSendPbufferToVideoNV_PACKED *_dst glXSendPbufferToVideoNV_ARG_EXPAND_TAIL);
typedef int (*glXSendPbufferToVideoNV_PTR)(glXSendPbufferToVideoNV_ARG_EXPAND);
#endif
#ifndef glXSet3DfxModeMESA_RETURN
#define glXSet3DfxModeMESA_RETURN Bool
#define glXSet3DfxModeMESA_ARG_NAMES mode
#define glXSet3DfxModeMESA_ARG_EXPAND int mode
#define glXSet3DfxModeMESA_ARG_NAMES_TAIL , mode
#define glXSet3DfxModeMESA_ARG_EXPAND_TAIL , int mode
#define forward_glXSet3DfxModeMESA(_mode) \
    ({ \
        void *dst = remote_dma(sizeof(glXSet3DfxModeMESA_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXSet3DfxModeMESA(dst, _mode), &ret); \
        ret; \
    });
#define call_glXSet3DfxModeMESA(packed, ret_v) do { \
    glXSet3DfxModeMESA_PACKED *unpacked = (glXSet3DfxModeMESA_PACKED *)packed; \
    glXSet3DfxModeMESA_ARGS *args = (glXSet3DfxModeMESA_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXSet3DfxModeMESA(args->mode);; \
    } else { \
        glXSet3DfxModeMESA(args->mode);; \
    } \
} while(0)
Bool glXSet3DfxModeMESA(glXSet3DfxModeMESA_ARG_EXPAND);
packed_call_t *pack_glXSet3DfxModeMESA(glXSet3DfxModeMESA_PACKED *_dst glXSet3DfxModeMESA_ARG_EXPAND_TAIL);
typedef Bool (*glXSet3DfxModeMESA_PTR)(glXSet3DfxModeMESA_ARG_EXPAND);
#endif
#ifndef glXSwapBuffers_RETURN
#define glXSwapBuffers_RETURN void
#define glXSwapBuffers_ARG_NAMES dpy, drawable
#define glXSwapBuffers_ARG_EXPAND Display * dpy, GLXDrawable drawable
#define glXSwapBuffers_ARG_NAMES_TAIL , dpy, drawable
#define glXSwapBuffers_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable
#define forward_glXSwapBuffers(_dpy, _drawable) \
    ({ \
        void *dst = remote_dma(sizeof(glXSwapBuffers_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXSwapBuffers(dst, _dpy, _drawable), NULL); \
    });
#define call_glXSwapBuffers(packed, ret_v) do { \
    glXSwapBuffers_PACKED *unpacked = (glXSwapBuffers_PACKED *)packed; \
    glXSwapBuffers_ARGS *args = (glXSwapBuffers_ARGS *)&unpacked->args; \
    glXSwapBuffers(args->dpy, args->drawable);; \
} while(0)
void glXSwapBuffers(glXSwapBuffers_ARG_EXPAND);
packed_call_t *pack_glXSwapBuffers(glXSwapBuffers_PACKED *_dst glXSwapBuffers_ARG_EXPAND_TAIL);
typedef void (*glXSwapBuffers_PTR)(glXSwapBuffers_ARG_EXPAND);
#endif
#ifndef glXSwapBuffersMscOML_RETURN
#define glXSwapBuffersMscOML_RETURN int64_t
#define glXSwapBuffersMscOML_ARG_NAMES dpy, drawable, target_msc, divisor, remainder
#define glXSwapBuffersMscOML_ARG_EXPAND Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder
#define glXSwapBuffersMscOML_ARG_NAMES_TAIL , dpy, drawable, target_msc, divisor, remainder
#define glXSwapBuffersMscOML_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder
#define forward_glXSwapBuffersMscOML(_dpy, _drawable, _target_msc, _divisor, _remainder) \
    ({ \
        void *dst = remote_dma(sizeof(glXSwapBuffersMscOML_PACKED)); \
        int64_t ret = (int64_t)0; \
        remote_dma_send((packed_call_t *)pack_glXSwapBuffersMscOML(dst, _dpy, _drawable, _target_msc, _divisor, _remainder), &ret); \
        ret; \
    });
#define call_glXSwapBuffersMscOML(packed, ret_v) do { \
    glXSwapBuffersMscOML_PACKED *unpacked = (glXSwapBuffersMscOML_PACKED *)packed; \
    glXSwapBuffersMscOML_ARGS *args = (glXSwapBuffersMscOML_ARGS *)&unpacked->args; \
    int64_t *ret = (int64_t *)ret_v; \
    if (ret != NULL) { \
        *ret = glXSwapBuffersMscOML(args->dpy, args->drawable, args->target_msc, args->divisor, args->remainder);; \
    } else { \
        glXSwapBuffersMscOML(args->dpy, args->drawable, args->target_msc, args->divisor, args->remainder);; \
    } \
} while(0)
int64_t glXSwapBuffersMscOML(glXSwapBuffersMscOML_ARG_EXPAND);
packed_call_t *pack_glXSwapBuffersMscOML(glXSwapBuffersMscOML_PACKED *_dst glXSwapBuffersMscOML_ARG_EXPAND_TAIL);
typedef int64_t (*glXSwapBuffersMscOML_PTR)(glXSwapBuffersMscOML_ARG_EXPAND);
#endif
#ifndef glXSwapIntervalEXT_RETURN
#define glXSwapIntervalEXT_RETURN void
#define glXSwapIntervalEXT_ARG_NAMES dpy, drawable, interval
#define glXSwapIntervalEXT_ARG_EXPAND Display * dpy, GLXDrawable drawable, int interval
#define glXSwapIntervalEXT_ARG_NAMES_TAIL , dpy, drawable, interval
#define glXSwapIntervalEXT_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, int interval
#define forward_glXSwapIntervalEXT(_dpy, _drawable, _interval) \
    ({ \
        void *dst = remote_dma(sizeof(glXSwapIntervalEXT_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXSwapIntervalEXT(dst, _dpy, _drawable, _interval), NULL); \
    });
#define call_glXSwapIntervalEXT(packed, ret_v) do { \
    glXSwapIntervalEXT_PACKED *unpacked = (glXSwapIntervalEXT_PACKED *)packed; \
    glXSwapIntervalEXT_ARGS *args = (glXSwapIntervalEXT_ARGS *)&unpacked->args; \
    glXSwapIntervalEXT(args->dpy, args->drawable, args->interval);; \
} while(0)
void glXSwapIntervalEXT(glXSwapIntervalEXT_ARG_EXPAND);
packed_call_t *pack_glXSwapIntervalEXT(glXSwapIntervalEXT_PACKED *_dst glXSwapIntervalEXT_ARG_EXPAND_TAIL);
typedef void (*glXSwapIntervalEXT_PTR)(glXSwapIntervalEXT_ARG_EXPAND);
#endif
#ifndef glXSwapIntervalMESA_RETURN
#define glXSwapIntervalMESA_RETURN int
#define glXSwapIntervalMESA_ARG_NAMES interval
#define glXSwapIntervalMESA_ARG_EXPAND unsigned int interval
#define glXSwapIntervalMESA_ARG_NAMES_TAIL , interval
#define glXSwapIntervalMESA_ARG_EXPAND_TAIL , unsigned int interval
#define forward_glXSwapIntervalMESA(_interval) \
    ({ \
        void *dst = remote_dma(sizeof(glXSwapIntervalMESA_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXSwapIntervalMESA(dst, _interval), &ret); \
        ret; \
    });
#define call_glXSwapIntervalMESA(packed, ret_v) do { \
    glXSwapIntervalMESA_PACKED *unpacked = (glXSwapIntervalMESA_PACKED *)packed; \
    glXSwapIntervalMESA_ARGS *args = (glXSwapIntervalMESA_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXSwapIntervalMESA(args->interval);; \
    } else { \
        glXSwapIntervalMESA(args->interval);; \
    } \
} while(0)
int glXSwapIntervalMESA(glXSwapIntervalMESA_ARG_EXPAND);
packed_call_t *pack_glXSwapIntervalMESA(glXSwapIntervalMESA_PACKED *_dst glXSwapIntervalMESA_ARG_EXPAND_TAIL);
typedef int (*glXSwapIntervalMESA_PTR)(glXSwapIntervalMESA_ARG_EXPAND);
#endif
#ifndef glXSwapIntervalSGI_RETURN
#define glXSwapIntervalSGI_RETURN int
#define glXSwapIntervalSGI_ARG_NAMES interval
#define glXSwapIntervalSGI_ARG_EXPAND int interval
#define glXSwapIntervalSGI_ARG_NAMES_TAIL , interval
#define glXSwapIntervalSGI_ARG_EXPAND_TAIL , int interval
#define forward_glXSwapIntervalSGI(_interval) \
    ({ \
        void *dst = remote_dma(sizeof(glXSwapIntervalSGI_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXSwapIntervalSGI(dst, _interval), &ret); \
        ret; \
    });
#define call_glXSwapIntervalSGI(packed, ret_v) do { \
    glXSwapIntervalSGI_PACKED *unpacked = (glXSwapIntervalSGI_PACKED *)packed; \
    glXSwapIntervalSGI_ARGS *args = (glXSwapIntervalSGI_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXSwapIntervalSGI(args->interval);; \
    } else { \
        glXSwapIntervalSGI(args->interval);; \
    } \
} while(0)
int glXSwapIntervalSGI(glXSwapIntervalSGI_ARG_EXPAND);
packed_call_t *pack_glXSwapIntervalSGI(glXSwapIntervalSGI_PACKED *_dst glXSwapIntervalSGI_ARG_EXPAND_TAIL);
typedef int (*glXSwapIntervalSGI_PTR)(glXSwapIntervalSGI_ARG_EXPAND);
#endif
#ifndef glXUseXFont_RETURN
#define glXUseXFont_RETURN void
#define glXUseXFont_ARG_NAMES font, first, count, listBase
#define glXUseXFont_ARG_EXPAND Font font, int first, int count, int listBase
#define glXUseXFont_ARG_NAMES_TAIL , font, first, count, listBase
#define glXUseXFont_ARG_EXPAND_TAIL , Font font, int first, int count, int listBase
#define forward_glXUseXFont(_font, _first, _count, _listBase) \
    ({ \
        void *dst = remote_dma(sizeof(glXUseXFont_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXUseXFont(dst, _font, _first, _count, _listBase), NULL); \
    });
#define call_glXUseXFont(packed, ret_v) do { \
    glXUseXFont_PACKED *unpacked = (glXUseXFont_PACKED *)packed; \
    glXUseXFont_ARGS *args = (glXUseXFont_ARGS *)&unpacked->args; \
    glXUseXFont(args->font, args->first, args->count, args->listBase);; \
} while(0)
void glXUseXFont(glXUseXFont_ARG_EXPAND);
packed_call_t *pack_glXUseXFont(glXUseXFont_PACKED *_dst glXUseXFont_ARG_EXPAND_TAIL);
typedef void (*glXUseXFont_PTR)(glXUseXFont_ARG_EXPAND);
#endif
#ifndef glXVendorPrivate_RETURN
#define glXVendorPrivate_RETURN void
#define glXVendorPrivate_ARG_NAMES 
#define glXVendorPrivate_ARG_EXPAND 
#define glXVendorPrivate_ARG_NAMES_TAIL 
#define glXVendorPrivate_ARG_EXPAND_TAIL 
#define forward_glXVendorPrivate() \
    ({ \
        void *dst = remote_dma(sizeof(glXVendorPrivate_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXVendorPrivate(dst), NULL); \
    });
#define call_glXVendorPrivate(packed, ret_v) do { \
    glXVendorPrivate();; \
} while(0)
void glXVendorPrivate(glXVendorPrivate_ARG_EXPAND);
packed_call_t *pack_glXVendorPrivate(glXVendorPrivate_PACKED *_dst glXVendorPrivate_ARG_EXPAND_TAIL);
typedef void (*glXVendorPrivate_PTR)(glXVendorPrivate_ARG_EXPAND);
#endif
#ifndef glXVendorPrivateWithReply_RETURN
#define glXVendorPrivateWithReply_RETURN void
#define glXVendorPrivateWithReply_ARG_NAMES 
#define glXVendorPrivateWithReply_ARG_EXPAND 
#define glXVendorPrivateWithReply_ARG_NAMES_TAIL 
#define glXVendorPrivateWithReply_ARG_EXPAND_TAIL 
#define forward_glXVendorPrivateWithReply() \
    ({ \
        void *dst = remote_dma(sizeof(glXVendorPrivateWithReply_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXVendorPrivateWithReply(dst), NULL); \
    });
#define call_glXVendorPrivateWithReply(packed, ret_v) do { \
    glXVendorPrivateWithReply();; \
} while(0)
void glXVendorPrivateWithReply(glXVendorPrivateWithReply_ARG_EXPAND);
packed_call_t *pack_glXVendorPrivateWithReply(glXVendorPrivateWithReply_PACKED *_dst glXVendorPrivateWithReply_ARG_EXPAND_TAIL);
typedef void (*glXVendorPrivateWithReply_PTR)(glXVendorPrivateWithReply_ARG_EXPAND);
#endif
#ifndef glXWaitForMscOML_RETURN
#define glXWaitForMscOML_RETURN Bool
#define glXWaitForMscOML_ARG_NAMES dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc
#define glXWaitForMscOML_ARG_EXPAND Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc
#define glXWaitForMscOML_ARG_NAMES_TAIL , dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc
#define glXWaitForMscOML_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc
#define forward_glXWaitForMscOML(_dpy, _drawable, _target_msc, _divisor, _remainder, _ust, _msc, _sbc) \
    ({ \
        void *dst = remote_dma(sizeof(glXWaitForMscOML_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXWaitForMscOML(dst, _dpy, _drawable, _target_msc, _divisor, _remainder, _ust, _msc, _sbc), &ret); \
        ret; \
    });
#define call_glXWaitForMscOML(packed, ret_v) do { \
    glXWaitForMscOML_PACKED *unpacked = (glXWaitForMscOML_PACKED *)packed; \
    glXWaitForMscOML_ARGS *args = (glXWaitForMscOML_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXWaitForMscOML(args->dpy, args->drawable, args->target_msc, args->divisor, args->remainder, args->ust, args->msc, args->sbc);; \
    } else { \
        glXWaitForMscOML(args->dpy, args->drawable, args->target_msc, args->divisor, args->remainder, args->ust, args->msc, args->sbc);; \
    } \
} while(0)
Bool glXWaitForMscOML(glXWaitForMscOML_ARG_EXPAND);
packed_call_t *pack_glXWaitForMscOML(glXWaitForMscOML_PACKED *_dst glXWaitForMscOML_ARG_EXPAND_TAIL);
typedef Bool (*glXWaitForMscOML_PTR)(glXWaitForMscOML_ARG_EXPAND);
#endif
#ifndef glXWaitForSbcOML_RETURN
#define glXWaitForSbcOML_RETURN Bool
#define glXWaitForSbcOML_ARG_NAMES dpy, drawable, target_sbc, ust, msc, sbc
#define glXWaitForSbcOML_ARG_EXPAND Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc
#define glXWaitForSbcOML_ARG_NAMES_TAIL , dpy, drawable, target_sbc, ust, msc, sbc
#define glXWaitForSbcOML_ARG_EXPAND_TAIL , Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc
#define forward_glXWaitForSbcOML(_dpy, _drawable, _target_sbc, _ust, _msc, _sbc) \
    ({ \
        void *dst = remote_dma(sizeof(glXWaitForSbcOML_PACKED)); \
        Bool ret = (Bool)0; \
        remote_dma_send((packed_call_t *)pack_glXWaitForSbcOML(dst, _dpy, _drawable, _target_sbc, _ust, _msc, _sbc), &ret); \
        ret; \
    });
#define call_glXWaitForSbcOML(packed, ret_v) do { \
    glXWaitForSbcOML_PACKED *unpacked = (glXWaitForSbcOML_PACKED *)packed; \
    glXWaitForSbcOML_ARGS *args = (glXWaitForSbcOML_ARGS *)&unpacked->args; \
    Bool *ret = (Bool *)ret_v; \
    if (ret != NULL) { \
        *ret = glXWaitForSbcOML(args->dpy, args->drawable, args->target_sbc, args->ust, args->msc, args->sbc);; \
    } else { \
        glXWaitForSbcOML(args->dpy, args->drawable, args->target_sbc, args->ust, args->msc, args->sbc);; \
    } \
} while(0)
Bool glXWaitForSbcOML(glXWaitForSbcOML_ARG_EXPAND);
packed_call_t *pack_glXWaitForSbcOML(glXWaitForSbcOML_PACKED *_dst glXWaitForSbcOML_ARG_EXPAND_TAIL);
typedef Bool (*glXWaitForSbcOML_PTR)(glXWaitForSbcOML_ARG_EXPAND);
#endif
#ifndef glXWaitGL_RETURN
#define glXWaitGL_RETURN void
#define glXWaitGL_ARG_NAMES 
#define glXWaitGL_ARG_EXPAND 
#define glXWaitGL_ARG_NAMES_TAIL 
#define glXWaitGL_ARG_EXPAND_TAIL 
#define forward_glXWaitGL() \
    ({ \
        void *dst = remote_dma(sizeof(glXWaitGL_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXWaitGL(dst), NULL); \
    });
#define call_glXWaitGL(packed, ret_v) do { \
    glXWaitGL();; \
} while(0)
void glXWaitGL(glXWaitGL_ARG_EXPAND);
packed_call_t *pack_glXWaitGL(glXWaitGL_PACKED *_dst glXWaitGL_ARG_EXPAND_TAIL);
typedef void (*glXWaitGL_PTR)(glXWaitGL_ARG_EXPAND);
#endif
#ifndef glXWaitVideoSyncSGI_RETURN
#define glXWaitVideoSyncSGI_RETURN int
#define glXWaitVideoSyncSGI_ARG_NAMES divisor, remainder, count
#define glXWaitVideoSyncSGI_ARG_EXPAND int divisor, int remainder, unsigned int * count
#define glXWaitVideoSyncSGI_ARG_NAMES_TAIL , divisor, remainder, count
#define glXWaitVideoSyncSGI_ARG_EXPAND_TAIL , int divisor, int remainder, unsigned int * count
#define forward_glXWaitVideoSyncSGI(_divisor, _remainder, _count) \
    ({ \
        void *dst = remote_dma(sizeof(glXWaitVideoSyncSGI_PACKED)); \
        int ret = (int)0; \
        remote_dma_send((packed_call_t *)pack_glXWaitVideoSyncSGI(dst, _divisor, _remainder, _count), &ret); \
        ret; \
    });
#define call_glXWaitVideoSyncSGI(packed, ret_v) do { \
    glXWaitVideoSyncSGI_PACKED *unpacked = (glXWaitVideoSyncSGI_PACKED *)packed; \
    glXWaitVideoSyncSGI_ARGS *args = (glXWaitVideoSyncSGI_ARGS *)&unpacked->args; \
    int *ret = (int *)ret_v; \
    if (ret != NULL) { \
        *ret = glXWaitVideoSyncSGI(args->divisor, args->remainder, args->count);; \
    } else { \
        glXWaitVideoSyncSGI(args->divisor, args->remainder, args->count);; \
    } \
} while(0)
int glXWaitVideoSyncSGI(glXWaitVideoSyncSGI_ARG_EXPAND);
packed_call_t *pack_glXWaitVideoSyncSGI(glXWaitVideoSyncSGI_PACKED *_dst glXWaitVideoSyncSGI_ARG_EXPAND_TAIL);
typedef int (*glXWaitVideoSyncSGI_PTR)(glXWaitVideoSyncSGI_ARG_EXPAND);
#endif
#ifndef glXWaitX_RETURN
#define glXWaitX_RETURN void
#define glXWaitX_ARG_NAMES 
#define glXWaitX_ARG_EXPAND 
#define glXWaitX_ARG_NAMES_TAIL 
#define glXWaitX_ARG_EXPAND_TAIL 
#define forward_glXWaitX() \
    ({ \
        void *dst = remote_dma(sizeof(glXWaitX_PACKED)); \
        remote_dma_send((packed_call_t *)pack_glXWaitX(dst), NULL); \
    });
#define call_glXWaitX(packed, ret_v) do { \
    glXWaitX();; \
} while(0)
void glXWaitX(glXWaitX_ARG_EXPAND);
packed_call_t *pack_glXWaitX(glXWaitX_PACKED *_dst glXWaitX_ARG_EXPAND_TAIL);
typedef void (*glXWaitX_PTR)(glXWaitX_ARG_EXPAND);
#endif

#endif

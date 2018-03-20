#ifdef __linux__
#include <linux/fb.h>
#endif
#include <fcntl.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <unistd.h>

#include "glx.h"

#include "../gl/loader.h"
#include "../gl/raster.h"
#include "../gl/remote.h"
#include "text.h"
#include "liveinfo.h"

bool eglInitialized = false;
EGLSurface eglSurface;
EGLConfig eglConfigs[1];

int8_t CheckEGLErrors() {
    LOAD_EGL(eglGetError);
    EGLenum error;
    char *errortext;

    error = egl_eglGetError();

    if (error != EGL_SUCCESS && error != 0) {
        switch (error) {
            case EGL_NOT_INITIALIZED:     errortext = "EGL_NOT_INITIALIZED"; break;
            case EGL_BAD_ACCESS:          errortext = "EGL_BAD_ACCESS"; break;
            case EGL_BAD_ALLOC:           errortext = "EGL_BAD_ALLOC"; break;
            case EGL_BAD_ATTRIBUTE:       errortext = "EGL_BAD_ATTRIBUTE"; break;
            case EGL_BAD_CONTEXT:         errortext = "EGL_BAD_CONTEXT"; break;
            case EGL_BAD_CONFIG:          errortext = "EGL_BAD_CONFIG"; break;
            case EGL_BAD_CURRENT_SURFACE: errortext = "EGL_BAD_CURRENT_SURFACE"; break;
            case EGL_BAD_DISPLAY:         errortext = "EGL_BAD_DISPLAY"; break;
            case EGL_BAD_SURFACE:         errortext = "EGL_BAD_SURFACE"; break;
            case EGL_BAD_MATCH:           errortext = "EGL_BAD_MATCH"; break;
            case EGL_BAD_PARAMETER:       errortext = "EGL_BAD_PARAMETER"; break;
            case EGL_BAD_NATIVE_PIXMAP:   errortext = "EGL_BAD_NATIVE_PIXMAP"; break;
            case EGL_BAD_NATIVE_WINDOW:   errortext = "EGL_BAD_NATIVE_WINDOW"; break;
            default:                      errortext = "unknown"; break;
        }

        printf("ERROR: EGL Error detected: %s (0x%X)\n", errortext, error);
        return 1;
    }

    return 0;
}

static int get_config_default(int attribute, int *value) {
    switch (attribute) {
        case GLX_USE_GL:
        case GLX_RGBA:
        case GLX_DOUBLEBUFFER:
            *value = 1;
            break;
        case GLX_STEREO:
            *value = 0;
            break;
        case GLX_AUX_BUFFERS:
            *value = 0;
            break;
        case GLX_RED_SIZE:
            *value = 5;
            break;
        case GLX_GREEN_SIZE:
            *value = 6;
            break;
        case GLX_BLUE_SIZE:
            *value = 5;
            break;
        case GLX_ALPHA_SIZE:
            *value = 8;
            break;
        case GLX_DEPTH_SIZE:
            *value = 16;
            break;
        case GLX_STENCIL_SIZE:
        case GLX_ACCUM_RED_SIZE:
        case GLX_ACCUM_GREEN_SIZE:
        case GLX_ACCUM_BLUE_SIZE:
        case GLX_ACCUM_ALPHA_SIZE:
            *value = 0;
            break;
        case GLX_RENDER_TYPE:
            *value = GLX_RGBA_BIT;
            break;
        case GLX_VISUAL_ID:
            *value = 1;
            break;
        case GLX_FBCONFIG_ID:
            *value = 1;
            break;
        case GLX_DRAWABLE_TYPE:
            *value = GLX_WINDOW_BIT;
            break;
        case 2: // apparently this is bpp
            *value = 16;
            return 0;
        default:
            printf("libGL: unknown attrib %i\n", attribute);
            *value = 0;
            return 1;
    }
    return 0;
}

static EGLContext eglContext;
static GLXContext glxContext;

#ifdef __linux__
#ifndef FBIO_WAITFORVSYNC
#define FBIO_WAITFORVSYNC _IOW('F', 0x20, __u32)
#endif
#endif
static bool g_showfps = false;
static bool g_liveinfo = true;
static bool g_fps_overlay = false;
static bool g_usefb = false;
static bool g_vsync = false;
static bool g_xrefresh = false;
static bool g_x11_reopen = false;
// raspberry pi globals
static bool g_bcm_active = false;
static bool g_bcmhost = false;
void (*bcm_host_init)();
void (*bcm_host_deinit)();

static int fbdev = -1;
static int swap_interval = 1;

static Display *get_display(Display *display) {
    static Display *x11_display = NULL;
    if (! x11_display) {
        if (g_x11_reopen) {
            x11_display = XOpenDisplay(NULL);
        } else {
            x11_display = display;
        }
    }
    return x11_display;
}

static EGLDisplay get_egl_display(Display *display) {
    static EGLDisplay eglDisplay = NULL;
    LOAD_EGL(eglGetDisplay);
    if (! eglDisplay) {
        if (! g_usefb) {
            eglDisplay = egl_eglGetDisplay(get_display(display));
        } else {
            eglDisplay = egl_eglGetDisplay(EGL_DEFAULT_DISPLAY);
        }
        if (! g_usefb && eglDisplay == EGL_NO_DISPLAY) {
            fprintf(stderr, "libGL: Could not open display. Trying framebuffer.\n");
            eglDisplay = egl_eglGetDisplay(EGL_DEFAULT_DISPLAY);
            g_usefb = 1;
        }
    }
    return eglDisplay;
}

static void init_vsync() {
    fbdev = open("/dev/fb0", O_RDONLY);
    if (fbdev < 0) {
        fprintf(stderr, "Could not open /dev/fb0 for vsync.\n");
    }
}

static void xrefresh() {
    system("xrefresh");
}

static void signal_handler(int sig) {
    if (g_xrefresh)
        xrefresh();

    if (g_bcmhost && g_bcm_active) {
        g_bcm_active = false;
        bcm_host_deinit();
    }
    signal(sig, SIG_DFL);
    raise(sig);
}

#define ONCE do { static bool first = true; if (! first) return; first = true; } while (0);

static void scan_env() {
    ONCE;
    printf("libGL: built on %s %s\n", __DATE__, __TIME__);
    #define env(name, global, message)                    \
        char *env_##name = getenv(#name);                 \
        if (env_##name && strcmp(env_##name, "1") == 0) { \
            printf("libGL: " message "\n");               \
            global = true;                                \
        }

    env(LIBGL_XREFRESH, g_xrefresh, "xrefresh will be called on cleanup");
    if (g_xrefresh || g_bcmhost) {
        // TODO: a bit gross. Maybe look at this: http://stackoverflow.com/a/13290134/293352
        signal(SIGBUS, signal_handler);
        signal(SIGFPE, signal_handler);
        signal(SIGILL, signal_handler);
        signal(SIGSEGV, signal_handler);
        if (g_xrefresh || g_bcmhost) {
            signal(SIGINT, signal_handler);
            signal(SIGQUIT, signal_handler);
            signal(SIGTERM, signal_handler);
        }
        if (g_xrefresh)
            atexit(xrefresh);
    }
    env(LIBGL_FB, g_usefb, "framebuffer output enabled");
    env(LIBGL_FPS, g_showfps, "fps counter enabled");
    env(LIBGL_FPS_OVERLAY, g_fps_overlay, "fps overlay enabled");
    env(LIBGL_VSYNC, g_vsync, "vsync enabled");
    env(LIBGL_X11_REOPEN, g_x11_reopen, "reopening X11 display");
    if (g_vsync) {
        init_vsync();
    }
    const char *remote = getenv("LIBGL_REMOTE");
    if (remote) {
        unsetenv("LIBGL_REMOTE");
        if (strcmp(remote, "1") == 0) {
            remote = NULL;
        }
        int pid = remote_spawn(remote);
        if (pid > 0) {
            state.remote = pid;
            printf("libGL: remote pid %d\n", pid);
        }
    }
}

static void bcm_setup() {
    ONCE;
    if (bcm_host) {
        bcm_host_init = dlsym(bcm_host, "bcm_host_init");
        bcm_host_deinit = dlsym(bcm_host, "bcm_host_deinit");
        if (bcm_host_init && bcm_host_deinit)
            g_bcmhost = true;
        if (g_bcmhost)
            atexit(bcm_host_deinit);
    }
}

GLXContext glXCreateContext(Display *dpy, XVisualInfo *vis, GLXContext shareList, Bool direct) {
    scan_env();
    FORWARD_IF_REMOTE(glXCreateContext);
    PROXY_GLES(glXCreateContext);
    bcm_setup();

    LOAD_EGL(eglBindAPI);
    LOAD_EGL(eglChooseConfig);
    LOAD_EGL(eglCreateContext);
    LOAD_EGL(eglDestroyContext);
    LOAD_EGL(eglDestroySurface);
    LOAD_EGL(eglInitialize);
    LOAD_EGL(eglMakeCurrent);

    EGLint configAttribs[] = {
#ifdef PANDORA
        EGL_RED_SIZE, 5,
        EGL_GREEN_SIZE, 6,
        EGL_BLUE_SIZE, 5,
#endif
        EGL_DEPTH_SIZE, 16,
#ifdef USE_ES2
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
#else
        EGL_BUFFER_SIZE, 16,
        EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES_BIT,
#endif
        EGL_NONE
    };

#ifdef USE_ES2
    EGLint attrib_list[] = {
        EGL_CONTEXT_CLIENT_VERSION, 2,
        EGL_NONE
    };
#else
    EGLint *attrib_list = NULL;
#endif

    if (g_bcmhost && !g_bcm_active) {
        g_bcm_active = true;
        bcm_host_init();
    }

    GLXContext fake = malloc(sizeof(struct __GLXContextRec));
    EGLDisplay eglDisplay = get_egl_display(dpy);
    if (eglDisplay) {
        egl_eglMakeCurrent(eglDisplay, NULL, NULL, EGL_NO_CONTEXT);
        if (eglContext) {
            egl_eglDestroyContext(eglDisplay, eglContext);
            eglContext = NULL;
        }
        if (eglSurface) {
            egl_eglDestroySurface(eglDisplay, eglSurface);
            eglSurface = NULL;
        }
    }

    if (eglDisplay == EGL_NO_DISPLAY) {
        printf("Unable to create EGL display.\n");
        return fake;
    }

    // first time?
    EGLBoolean result;
    if (eglInitialized == false) {
        egl_eglBindAPI(EGL_OPENGL_ES_API);
        result = egl_eglInitialize(eglDisplay, NULL, NULL);
        if (result != EGL_TRUE) {
            printf("Unable to initialize EGL display.\n");
            return fake;
        }
        eglInitialized = true;
    }

    int configsFound;
    result = egl_eglChooseConfig(eglDisplay, configAttribs, eglConfigs, 1, &configsFound);
    CheckEGLErrors();
    if (result != EGL_TRUE || configsFound == 0) {
        printf("No EGL configs found.\n");
        return fake;
    }
    eglContext = egl_eglCreateContext(eglDisplay, eglConfigs[0], EGL_NO_CONTEXT, attrib_list);
    CheckEGLErrors();

    // need to return a glx context pointing at it
    fake->display = get_display(dpy);
    fake->direct = true;
    fake->xid = 1;
    return fake;
}

GLXContext glXCreateContextAttribsARB(Display *dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int *attrib_list) {
    PROXY_GLES(glXCreateContextAttribsARB);
    return glXCreateContext(dpy, NULL, NULL, direct);
}

void glXDestroyContext(Display *dpy, GLXContext ctx) {
    FORWARD_IF_REMOTE(glXDestroyContext);
    PROXY_GLES(glXDestroyContext);
    LOAD_EGL(eglDestroyContext);
    LOAD_EGL(eglDestroySurface);
    EGLDisplay eglDisplay = get_egl_display(dpy);
    if (eglContext) {
        EGLBoolean result = egl_eglDestroyContext(eglDisplay, eglContext);
        if (eglSurface != NULL) {
            egl_eglDestroySurface(eglDisplay, eglSurface);
        }

        if (result != EGL_TRUE) {
            printf("Failed to destroy EGL context.\n");
        }
        if (fbdev >= 0) {
            close(fbdev);
            fbdev = -1;
        }
    }
    return;
}

Display *glXGetCurrentDisplay() {
    PROXY_GLES(glXGetCurrentDisplay);
    Display *dpy = get_display(NULL);
    if (dpy && eglContext)
        return dpy;
    return NULL;
}

XVisualInfo *glXChooseVisual(Display *dpy, int screen, int *attribList) {
    PROXY_GLES(glXChooseVisual);
    dpy = get_display(dpy);
    int depth = DefaultDepth(dpy, screen);
    XVisualInfo *visual = (XVisualInfo *)malloc(sizeof(XVisualInfo));
    XMatchVisualInfo(dpy, screen, depth, TrueColor, visual);
    return visual;
}

/*
EGL_BAD_MATCH is generated if draw or read are not compatible with context
or if context is set to EGL_NO_CONTEXT and draw or read are not set to
EGL_NO_SURFACE, or if draw or read are set to EGL_NO_SURFACE and context is
not set to EGL_NO_CONTEXT.
*/

Bool glXMakeCurrent(Display *dpy, GLXDrawable drawable, GLXContext ctx) {
    FORWARD_IF_REMOTE(glXMakeCurrent);
    PROXY_GLES(glXMakeCurrent);
    LOAD_EGL(eglCreateWindowSurface);
    LOAD_EGL(eglDestroySurface);
    LOAD_EGL(eglMakeCurrent);
    EGLDisplay eglDisplay = get_egl_display(dpy);
    if (eglDisplay != NULL) {
        egl_eglMakeCurrent(eglDisplay, NULL, NULL, EGL_NO_CONTEXT);
        if (eglSurface != NULL) {
            egl_eglDestroySurface(eglDisplay, eglSurface);
        }
    }
    // call with NULL to just destroy old stuff.
    if (! ctx) {
        return true;
    }
    if (g_usefb)
        drawable = 0;
    eglSurface = egl_eglCreateWindowSurface(eglDisplay, eglConfigs[0], drawable, NULL);
    CheckEGLErrors();

    EGLBoolean result = egl_eglMakeCurrent(eglDisplay, eglSurface, eglSurface, eglContext);
    CheckEGLErrors();
    if (result) {
        return true;
    }
    return false;
}

Bool glXMakeContextCurrent(Display *dpy, GLXDrawable draw, int read, GLXContext ctx) {
    PROXY_GLES(glXMakeContextCurrent);
    return glXMakeCurrent(dpy, draw, ctx);
}

void glXSwapBuffers(Display *dpy, GLXDrawable drawable) {
    FORWARD_IF_REMOTE(glXSwapBuffers);
    if (g_showfps || g_liveinfo) {
        // framerate counter
        static float avg, fps = 0;
        static int frame1, last_frame, frame, now, current_frames;
        struct timeval out;
        gettimeofday(&out, NULL);
        now = out.tv_sec;
        frame++;
        current_frames++;

        if (frame == 1) {
            frame1 = now;
        } else if (frame1 < now) {
            if (last_frame < now) {
                float change = current_frames / (float)(now - last_frame);
                float weight = 0.7;
                if (! fps) {
                    fps = change;
                } else {
                    fps = (1 - weight) * fps + weight * change;
                }
                current_frames = 0;

                avg = frame / (float)(now - frame1);
                if (g_showfps) {
                    printf("libGL fps: %.2f, avg: %.2f\n", fps, avg);
                }
            }
        }

        last_frame = now;

        if (fps > 0) {
            char buf[17] = {0};
            if (g_fps_overlay) {
                snprintf(buf, 16, "%.2f fps\n", fps);
                text_draw(4, 17, buf);
            }
            // this shows the framerate on notaz' live system info overlay
            if (g_liveinfo) {
                snprintf(buf, 16, "fps:%.2f", fps);
                if (liveinfo_send(buf) < 0) {
                    g_liveinfo = false;
                }
            }
        }
    }

    PROXY_GLES(glXSwapBuffers);
    LOAD_EGL(eglSwapBuffers);
    render_raster();
#ifdef __linux__
    if (g_vsync && fbdev >= 0) {
        // TODO: can I just return if I don't meet vsync over multiple frames?
        // this will just block otherwise.
        int arg = 0;
        for (int i = 0; i < swap_interval; i++) {
            ioctl(fbdev, FBIO_WAITFORVSYNC, &arg);
        }
    }
#endif
    egl_eglSwapBuffers(get_egl_display(dpy), eglSurface);
    CheckEGLErrors();
}

int glXGetConfig(Display *display, XVisualInfo *visual, int attribute, int *value) {
    PROXY_GLES(glXGetConfig);
    return get_config_default(attribute, value);
}

const char *glXQueryExtensionsString(Display *dpy, int screen) {
    PROXY_GLES(glXQueryExtensionsString);
    const char *extensions = {
        "GLX_ARB_create_context "
        "GLX_ARB_create_context_profile "
        "GLX_EXT_create_context_es2_profile "
    };
    return extensions;
}

const char *glXQueryServerString(Display *dpy, int screen, int name) {
    PROXY_GLES(glXQueryServerString);
    return "";
}

Bool glXQueryExtension(Display *display, int *errorBase, int *eventBase) {
    PROXY_GLES(glXQueryExtension);
    if (errorBase)
        *errorBase = 0;

    if (eventBase)
        *eventBase = 0;

    return true;
}

Bool glXQueryVersion(Display *dpy, int *maj, int *min) {
    PROXY_GLES(glXQueryVersion);
    // TODO: figure out which version we want to pretend to implement
    *maj = 1;
    *min = 4;
    return true;
}

const char *glXGetClientString(Display *display, int name) {
    PROXY_GLES(glXGetClientString);
    // TODO: return actual data here
    switch (name) {
        case GLX_VENDOR: break;
        case GLX_VERSION: break;
        case GLX_EXTENSIONS: break;
    }
    return "";
}

// stubs for glfw (GLX 1.3)
GLXContext glXGetCurrentContext() {
    PROXY_GLES(glXGetCurrentContext);
    // hack to make some games start
    return glxContext ? glxContext : (void *)1;
}

GLXFBConfig *glXChooseFBConfig(Display *dpy, int screen, const int *attrib_list, int *nelements) {
    PROXY_GLES(glXChooseFBConfig);
    *nelements = 1;
    GLXFBConfig *configs = malloc(sizeof(GLXFBConfig) * *nelements);
    return configs;
}

GLXFBConfig *glXGetFBConfigs(Display *dpy, int screen, int *nelements) {
    PROXY_GLES(glXGetFBConfigs);
    *nelements = 1;
    GLXFBConfig *configs = malloc(sizeof(GLXFBConfig) * *nelements);
    return configs;
}

int glXGetFBConfigAttrib(Display *dpy, GLXFBConfig config, int attribute, int *value) {
    PROXY_GLES(glXGetFBConfigAttrib);
    return get_config_default(attribute, value);
}

XVisualInfo *glXGetVisualFromFBConfig(Display *dpy, GLXFBConfig config) {
    PROXY_GLES(glXGetVisualFromFBConfig);
    XVisualInfo *visual = (XVisualInfo *)malloc(sizeof(XVisualInfo));
    XMatchVisualInfo(get_display(dpy), 0, 16, TrueColor, visual);
    return visual;
}

GLXContext glXCreateNewContext(Display *dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct) {
    PROXY_GLES(glXCreateNewContext);
    return glXCreateContext(dpy, 0, share_list, direct);
}

int glXSwapIntervalMESA(unsigned int interval) {
    printf("glXSwapInterval(%i)\n", interval);
    if (! g_vsync)
        printf("Enable LIBGL_VSYNC=1 if you want to use vsync.\n");
    swap_interval = interval;
    return 0;
}

int glXSwapIntervalSGI(int interval) {
    return glXSwapIntervalMESA(interval);
}

void glXSwapIntervalEXT(Display *display, GLXDrawable drawable, int interval) {
    glXSwapIntervalMESA(interval);
}

// misc stubs
void glXCopyContext(Display *dpy, GLXContext src, GLXContext dst, unsigned long mask) {
    PROXY_GLES(glXCopyContext);
}

GLXPixmap glXCreateGLXPixmap(Display *dpy, XVisualInfo *visual, Pixmap pixmap) {
    PROXY_GLES(glXCreateGLXPixmap);
    return 0;
} // should return GLXPixmap

void glXDestroyGLXPixmap(Display *dpy, void *pixmap) {
    PROXY_GLES(glXDestroyGLXPixmap);
} // really wants a GLXpixmap

GLXDrawable glXGetCurrentDrawable() {
    PROXY_GLES(glXGetCurrentDrawable);
    return 0;
} // this should actually return GLXDrawable. Good luck.

Bool glXIsDirect(Display *dpy, GLXContext ctx) {
    PROXY_GLES(glXIsDirect);
    return true;
}

GLXWindow glXCreateWindow(Display *dpy, GLXFBConfig config, Window win, const int *attrib_list) {
    PROXY_GLES(glXCreateWindow);
    return 0;
}

void glXDestroyWindow(Display *dpy, GLXWindow win) {
    PROXY_GLES(glXDestroyWindow);
}

void glXUseXFont(Font font, int first, int count, int listBase) {
    PROXY_GLES(glXUseXFont);
    if (state.list.active) {
        fprintf(stderr, "libGL:error: glXUseXFont called during active block\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        unsigned int c = first + i;
        int list = listBase + i;
        glNewList(list, GL_COMPILE);
        text_draw_glyph(c);
        glEndList();
    }
}

void glXWaitGL() {
    PROXY_GLES(glXWaitGL);
}

void glXWaitX() {
    PROXY_GLES(glXWaitX);
}

Bool glXReleaseBuffersMESA(Display *dpy, GLXDrawable drawable) {
    PROXY_GLES(glXReleaseBuffersMESA);
    return 0;
}

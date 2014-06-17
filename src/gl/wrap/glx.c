#include <X11/Xlib.h>
#include "gl.h"
#include "../glx/glx.h"

typedef void *(*glXChooseVisual_PTR)(void *, int, int *);
typedef GLXContext (*glXCreateContext_PTR)(Display *, void *, GLXContext, Bool);
typedef Bool (*glXMakeCurrent_PTR)(Display *, int, GLXContext);
typedef void (*glXSwapBuffers_PTR)(Display *, int);
typedef void (*glXDestroyContext_PTR)(Display *, GLXContext);

XVisualInfo *glXChooseVisual(Display *display, int screen, int *attributes) {
    LOAD_GLES(glXChooseVisual);
    return gles_glXChooseVisual(display, screen, attributes);
}

GLXContext glXCreateContext(Display *display, XVisualInfo *visual, GLXContext shareList, Bool isDirect) {
    LOAD_GLES(glXCreateContext);
    return gles_glXCreateContext(display, visual, shareList, isDirect);
}

Bool glXMakeCurrent(Display *display, int drawable, GLXContext context) {
    LOAD_GLES(glXMakeCurrent);
    return gles_glXMakeCurrent(display, drawable, context);
}

void glXSwapBuffers(Display *display, int drawable) {
    LOAD_GLES(glXSwapBuffers);
    gles_glXSwapBuffers(display, drawable);
}

void glXDestroyContext(Display *dpy, GLXContext ctx) {
    LOAD_GLES(glXDestroyContext);
    glXDestroyContext(dpy, ctx);
}

const char *glXQueryExtensionsString(Display *display, int screen) {
    const char *extensions = {
        "GLX_ARB_create_context "
        "GLX_ARB_create_context_profile "
        "GLX_EXT_create_context_es2_profile "
    };
    return extensions;
}

const char *glXQueryServerString(Display *display, int screen, int name) {
    return "";
}

const char *glXGetClientString(Display *display, int name) {
    // TODO: return actual data here
    switch (name) {
        case GLX_VENDOR: break;
        case GLX_VERSION: break;
        case GLX_EXTENSIONS: break;
    }
    return "";
}

Bool glXQueryVersion(Display *display, int *major, int *minor) {
    // TODO: figure out which version we want to pretend to implement
    *major = 1;
    *minor = 4;
    return true;
}

Bool glXIsDirect() {
    return true;
}

void glXWaitX() {}

#include <X11/Xlib.h>
#include "gl.h"

typedef void *GLXContext;

typedef void *(*glXChooseVisual_PTR)(void *, int, int *);
typedef GLXContext *(*glXCreateContext_PTR)(Display *, void *, GLXContext, Bool);
typedef Bool (*glXMakeCurrent_PTR)(Display *, int, GLXContext);
typedef void (*glXSwapBuffers_PTR)(Display *, int);

void *glXChooseVisual(void *display, int screen, int *attributes) {
    LOAD_GLES(glXChooseVisual);
    return gles_glXChooseVisual(display, screen, attributes);
}

GLXContext *glXCreateContext(Display *display,
                             void *visual,
                             GLXContext shareList,
                             Bool isDirect) {
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

void glXWaitX() {}

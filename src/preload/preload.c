#define _GNU_SOURCE

#include <SDL/SDL.h>
#include <X11/Xlib.h>
#include <dlfcn.h>
#include <stdint.h>
#include <stdio.h>
#include <GL/glx.h>

/*
typedef int (*SDLINITPTR)(uint32_t flags);
int SDL_Init(uint32_t flags) {
    static SDLINITPTR orig;
    glXCreateContext(0, 0, 0, 0);
    glXMakeCurrent(1, 1, 1);
    if (! orig)
        orig = (SDLINITPTR)dlsym(RTLD_NEXT, "SDL_Init");
    return orig(flags);
}
*/

void SDL_GL_SwapBuffers() {
    glXSwapBuffers(0, 0);
}

void *SDL_GL_GetProcAddress(const char *s) {
    return glXGetProcAddress(s);
}

typedef SDL_Surface *(*SDLSETVIDEOMODEPTR)(int width, int height, int bpp, uint32_t flags);
SDL_Surface *SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
    bpp = 0;

    static SDLSETVIDEOMODEPTR orig;
    if (! orig)
        orig = (SDLSETVIDEOMODEPTR)dlsym(RTLD_NEXT, "SDL_SetVideoMode");

    if (flags & SDL_OPENGL) {
        flags &= ~SDL_OPENGL;
        glXCreateContext(0, 0, 0, 0);
        glXMakeCurrent((void *)1, 1, (void *)1);
    }
    printf("SDL_SetVideoMode(%d, %d, %d, 0x%x);\n", width, height, bpp, flags);
    return orig(width, height, bpp, flags);
}

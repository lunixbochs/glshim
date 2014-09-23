#ifndef LOADER_H
#define LOADER_H

#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "const.h"
#include "wrap/gles.h"

// will become references to dlopen'd gles and egl
extern void *gles, *egl;

static const char *lib_ext[] = {
    "so",
    "so.1",
    "so.2",
    "dylib",
    "dll",
    NULL,
};

static const char *gles_lib[] = {
#ifdef USE_ES2
    "libGLESv2_CM",
    "libGLESv2",
#else
    "libGLESv1_CM",
    "libGLES_CM",
#endif // USE_ES2
    NULL
};

static const char *egl_lib[] = {
    "libEGL",
    NULL
};

extern void *open_lib(const char **names, const char *override);
extern void load_gles_lib();
extern void load_egl_lib();

#ifndef WARN_NULL
#define WARN_NULL(name) if (name == NULL) printf("libGL: warning, " #name " is NULL\n");
#endif

#ifndef LOAD_RAW
#define LOAD_RAW(lib, name, ...) \
    static name##_PTR lib##_##name; \
    { \
        static bool first = true; \
        if (first) { \
            first = false; \
            if (lib == NULL) { \
                load_##lib##_lib(); \
            } \
            if (lib != NULL) { \
                lib##_##name = (name##_PTR)__VA_ARGS__; \
            } \
        } \
    }
#endif

#define LOAD_LIB(lib, name) LOAD_RAW(lib, name, dlsym(lib, #name))

#define LOAD_GLES(name) \
    LOAD_GLES_SILENT(name); \
    WARN_NULL(gles_##name);

#define LOAD_GLES_SILENT(name) LOAD_LIB(gles, name)
#define LOAD_EGL(name) LOAD_LIB(egl, name)
#define LOAD_OES(name) \
    LOAD_EGL(eglGetProcAddress); \
    LOAD_RAW(egl, name, egl_eglGetProcAddress(#name));

#ifndef PUSH_IF_COMPILING_EXT
#define PUSH_IF_COMPILING_EXT(name, ...)             \
    if (state.list.active) {                         \
        push_##name(__VA_ARGS__);                    \
        return (name##_RETURN)0;                     \
    }
#endif

#ifndef PUSH_IF_COMPILING
#define PUSH_IF_COMPILING(name) PUSH_IF_COMPILING_EXT(name, name##_ARG_NAMES)
#endif

#ifndef PROXY
#define PROXY(load_name, lib, name) \
    LOAD_##load_name(name); \
    if (lib##_##name != NULL) { \
        return lib##_##name(name##_ARG_NAMES); \
    }
#endif

#define PROXY_GLES(name) PROXY(GLES_SILENT, gles, name)
#define PROXY_EGL(name) PROXY(EGL, egl, name)
#define PROXY_OES(name) PROXY(OES, egl, name)

#endif

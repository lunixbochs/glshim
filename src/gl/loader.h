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

#define LOAD(lib, name) \
    static name##_PTR lib##_##name; \
    { \
        static bool first = true; \
        if (first) { \
            first = false; \
            if (lib == NULL) { \
                load_##lib##_lib(); \
            } \
            lib##_##name = (name##_PTR)dlsym(lib, #name); \
        } \
    }

#ifndef LOAD_GLES
#define LOAD_GLES(name) \
    LOAD_GLES_SILENT(name); \
    WARN_NULL(gles_##name);

#define LOAD_GLES_SILENT(name) LOAD(gles, name)
#endif

#ifndef LOAD_EGL
#define LOAD_EGL(name) LOAD(egl, name)
#endif

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

#ifndef PROXY_GLES
#define PROXY_GLES(name) \
    LOAD_GLES_SILENT(name); \
    if (gles_##name != NULL) { \
        return gles_##name(name##_ARG_NAMES); \
    }
#endif

#endif

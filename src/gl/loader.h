#ifndef LOADER_H
#define LOADER_H

#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "const.h"
#include "wrap/gles.h"

// will become a reference to dlopen'd gles
extern void *gles;

static const char *gles_ext[] = {
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

#ifndef WARN_NULL
#define WARN_NULL(name) if (name == NULL) printf("libGL: warning, " #name " is NULL\n");
#endif

static void load_gles_lib() {
    if (gles) {
        return;
    }
    char gles_name[PATH_MAX + 1];
    char *override = getenv("LIBGL_GLES");
    int flags = RTLD_LOCAL | RTLD_NOW;
#ifdef RTLD_DEEPBIND
    flags |= RTLD_DEEPBIND;
#endif
    if (override) {
        if ((gles = dlopen(override, flags))) {
            strncpy(gles_name, override, PATH_MAX);
            printf("libGL backend: %s\n", gles_name);
            return;
        }
    }
    for (int i = 0; gles_lib[i]; i++) {
        for (int e = 0; gles_ext[e]; e++) {
            snprintf(gles_name, PATH_MAX, "%s.%s", gles_lib[i], gles_ext[e]);
            gles = dlopen(gles_name, flags);
            if (gles) {
                printf("libGL backend: %s\n", gles_name);
                return;
            }
        }
    }
    WARN_NULL(gles);
}

#ifndef LOAD_GLES
#define LOAD_GLES(name) \
    LOAD_GLES_SILENT(name); \
    WARN_NULL(gles_##name);

#define LOAD_GLES_SILENT(name)                            \
    static name##_PTR gles_##name;                        \
    {                                                     \
        static bool first = true;                         \
        if (first) {                                      \
            first = false;                                \
            if (gles == NULL) {                           \
                load_gles_lib();                          \
            }                                             \
            gles_##name = (name##_PTR)dlsym(gles, #name); \
        }                                                 \
    }
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

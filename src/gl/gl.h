#include <dlfcn.h>
#include <GLES/gl.h>
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "khash.h"
#include "types.h"

#ifdef __linux__
#include <linux/limits.h>
#endif

#ifndef PATH_MAX
#define PATH_MAX 254
#endif

#ifdef __ARM_NEON__
#include <arm_neon.h>
#endif

#ifndef GL_H
#define GL_H

#include "../config.h"
#include "wrap/es.h"
#include "const.h"

#define checkError(code)                          \
    {int error; while ((error = glGetError())) {} \
    code                                          \
    if ((error = glGetError()))                   \
        printf(#code " -> %i\n", error);}

#define printError(file, line)              \
    {int error; if ((error = glGetError())) \
        printf(file ":%i -> %i\n", line, error);}

#define GLdouble double

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

#ifndef MIN
#define MIN(a, b) (((a) < (b) ? (a) : (b)))
#endif

#ifndef MAX
#define MAX(a, b) (((a) > (b) ? (a) : (b)))
#endif

#define WARN_NULL(name) if (name == NULL) printf("libGL: warning, " #name " is NULL\n");

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

#define LOAD_GLES(name)                                   \
    static name##_PTR gles_##name;                        \
    {                                                     \
        static bool first = true;                         \
        if (first) {                                      \
            first = false;                                \
            if (gles == NULL) {                           \
                load_gles_lib();                          \
            }                                             \
            gles_##name = (name##_PTR)dlsym(gles, #name); \
            WARN_NULL(gles_##name);                       \
        }                                                 \
    }

#define PUSH_IF_COMPILING_EXT(name, ...)             \
    if (state.list.active) {                         \
        push_##name(__VA_ARGS__);                    \
        return (name##_RETURN)0;                     \
    }

#define PUSH_IF_COMPILING(name) PUSH_IF_COMPILING_EXT(name, name##_ARG_NAMES)

#include "gl_helpers.h"

#include "wrap/stub.h"
#include "wrap/gl.h"
#include "block.h"
#include "eval.h"
#include "light.h"
#include "line.h"
#include "list.h"
#include "pixel.h"
#include "raster.h"
#include "stack.h"
#include "texgen.h"
#include "texture.h"
#include "array.h"

#include "state.h"
extern glstate_t state;

#include "defines.h"

#endif

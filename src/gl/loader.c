#include <stdarg.h>
#include "loader.h"

void *gles = NULL, *egl = NULL, *bcm_host = NULL, *vcos = NULL;
int g_use_tgl = 0;

static const char *path_prefix[] = {
    "",
    "/opt/vc/lib/",
    "/usr/local/lib/",
    "/usr/lib/",
    NULL,
};

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

void *open_lib(const char **names, const char *override) {
    void *lib = NULL;

    char path_name[PATH_MAX + 1];
    int flags = RTLD_LOCAL | RTLD_NOW;
#ifdef RTLD_DEEPBIND
    flags |= RTLD_DEEPBIND;
#endif
    if (override) {
        if ((lib = dlopen(override, flags))) {
            strncpy(path_name, override, PATH_MAX);
            printf("libGL:loaded: %s\n", path_name);
            return lib;
        } else {
            printf("LIBGL_GLES override failed: %s\n", dlerror());
        }
    }
    for (int p = 0; path_prefix[p]; p++) {
        for (int i = 0; names[i]; i++) {
            for (int e = 0; lib_ext[e]; e++) {
                snprintf(path_name, PATH_MAX, "%s%s.%s", path_prefix[p], names[i], lib_ext[e]);
                if ((lib = dlopen(path_name, flags))) {
                    printf("libGL:loaded: %s\n", path_name);
                    return lib;
                }
            }
        }
    }
    return lib;
}

void load_libs() {
    static int first = true;
    if (! first) return;
    first = false;
    g_use_tgl = getenv("LIBGL_SWRAST") != NULL;

    if (g_use_tgl) {
        fprintf(stderr, "glshim: using software renderer\n");
    } else {
        char *gles_override = getenv("LIBGL_GLES");
        // optimistically try to load the raspberry pi libs
        if (! gles_override) {
            const char *bcm_host_name[] = {"libbcm_host", NULL};
            const char *vcos_name[] = {"libvcos", NULL};
            bcm_host = open_lib(bcm_host_name, NULL);
            vcos = open_lib(vcos_name, NULL);
        }
        gles = open_lib(gles_lib, gles_override);
        WARN_NULL(gles);

        char *egl_override = getenv("LIBGL_EGL");
        egl = open_lib(egl_lib, egl_override);
        WARN_NULL(egl);

        if (!gles || !egl) {
            fprintf(stderr, "glshim: falling back to software renderer\n");
            gles = egl = bcm_host = vcos = NULL;
            g_use_tgl = 1;
        }
    }
}

void debugf(char *fmt, ...) {
    static int debug = -1;
    if (debug < 0) {
        debug = 0;
        char *tmp = getenv("LIBGL_DEBUG");
        if (tmp && strcmp(tmp, "1") == 0) {
            debug = 1;
        }
    }
    if (debug == 1) {
        va_list arg;
        va_start(arg, fmt);
        vprintf(fmt, arg);
        va_end(arg);
    }
}

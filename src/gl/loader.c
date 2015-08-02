#include "loader.h"

void *gles = NULL, *egl = NULL, *bcm_host = NULL, *vcos = NULL;

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

void load_gles_lib() {
    if (gles) {
        return;
    }
    char *override = getenv("LIBGL_GLES");
    // optimistically try to load the raspberry pi libs
    if (! override) {
        const char *bcm_host_name[] = {"libbcm_host", NULL};
        const char *vcos_name[] = {"libvcos", NULL};
        bcm_host = open_lib(bcm_host_name, NULL);
        vcos = open_lib(vcos_name, NULL);
    }
    gles = open_lib(gles_lib, override);
    WARN_NULL(gles);
}

void load_egl_lib() {
    if (egl) {
        return;
    }
    char *override = getenv("LIBGL_EGL");
    egl = open_lib(egl_lib, override);
    WARN_NULL(egl);
}

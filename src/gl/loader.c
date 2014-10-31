#include "loader.h"

void *gles = NULL, *egl = NULL;

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
    for (int i = 0; names[i]; i++) {
        for (int e = 0; lib_ext[e]; e++) {
            snprintf(path_name, PATH_MAX, "%s.%s", names[i], lib_ext[e]);
            if ((lib = dlopen(path_name, flags))) {
                printf("libGL:loaded: %s\n", path_name);
                return lib;
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

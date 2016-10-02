#ifndef LOAD_GLES_H
#define LOAD_GLES_H

#include "../loader.h"
#include "../wrap/pack_gles.h"
#include "../wrap/pack_egl.h"

#ifndef LOAD_GLES
#define LOAD_GLES(name) \
    LOAD_GLES_SILENT(name); \
    WARN_NULL(gles_##name); \
    if (gles_##name == NULL) gles_##name = stub_##name;
#endif

#define LOAD_GLES_SILENT(name) LOAD_LIB(gles, name)

#define LOAD_EGL(name) LOAD_LIB(egl, name)
#define LOAD_OES(name) \
    LOAD_EGL(eglGetProcAddress); \
    LOAD_RAW(egl, name, egl_eglGetProcAddress(#name));

#ifndef PROXY_GLES
#define PROXY_GLES(name) PROXY(GLES_SILENT, gles, name)
#endif
#define PROXY_EGL(name) PROXY(EGL, egl, name)
#define PROXY_OES(name) PROXY(OES, egl, name)

#endif

#define LOAD_RAW(...) {}
#define LOAD_GLES(...) {}
#define PROXY(...) {}
#define PROXY_GLES(name) gles_##name(name##_ARG_NAMES)

#include <stdio.h>
#include <string.h>
#include "mock.h"

#define free(...) {}
#undef emit_glGetError
#define emit_glGetError(...) {}

#define LOAD_GLES(name) {}
#define PROXY_GLES(name) {}

#include <stdio.h>
#include "mock.h"

#define free(...) {}
#undef emit_glGetError
#define emit_glGetError(...) {}

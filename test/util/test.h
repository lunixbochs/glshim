#define LOAD_RAW(...) {}
#define LOAD_GLES(...) {}
#define PROXY(...) {}

#include <stdio.h>
#include <string.h>
#include "mock.h"

#define free(...) {}
#undef emit_glGetError
#define emit_glGetError(...) {}

#define LOAD_RAW(...) {}
#define PROXY(...) {}

#include <stdio.h>
#include "mock.h"

#define free(...) {}
#undef emit_glGetError
#define emit_glGetError(...) {}

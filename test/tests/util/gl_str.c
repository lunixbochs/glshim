#include "gl_str.h"

int main() {
#define check(func, name) assert(strcmp(func(name), #name) == 0);
    check(gl_str_primitive, GL_QUADS);
    check(gl_str, GL_FLOAT);
    check(gl_bits_glPushClientAttrib, GL_CLIENT_ALL_ATTRIB_BITS);
    check(gl_bits_glPushAttrib, GL_CURRENT_BIT | GL_POINT_BIT);
    mock_return;
}

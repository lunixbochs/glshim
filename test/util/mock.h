#ifndef USE_ES2
#ifdef __cplusplus
extern "C" {
#endif
#include "gl_str.h"
#include "wrap/glpack.h"
#ifndef MOCK_H
#define MOCK_H

const char *mock_name(int func);
void *mock_cur();
void *mock_get(int idx);
void *mock_peek();
void *mock_shift();
void *mock_slide(int func);
void mock_print(const packed_call_t *packed);
void mock_push(void *call);

packed_call_t *_mock_expect(char *name, int index);
#define mock_expect(name) _mock_expect(#name, name##_INDEX);

static int verbose_test = 0;
static int failed_test = 0;
#define verbose { verbose_test = 1; }

#define mock_warningf(...) { printf("WARNING: "), printf(__VA_ARGS__); }
#define mock_errorf(...) { printf("ERROR: "); printf(__VA_ARGS__); failed_test = 1; }
#define mock_assert(cond, ...) { if (!(cond)) { mock_errorf(__VA_ARGS__); }}
#define assert(cond) mock_assert(cond, "%s\n", #cond)

#define VT100_RED "\e[1;31m"
#define VT100_CLEAR "\e[0m"

int mock_fcmp(float *a, float *b, size_t len);
void mock_fdiff(float *a, float *b, size_t len);
void mock_ptrdiff(char *prefix, void *ptr, void *other, size_t size);

#define mock_return { \
    packed_call_t *call = NULL; \
    while ((call = mock_shift()) != NULL) { \
        mock_warningf("extra "); \
        mock_print(call); \
    } \
    if (state.error) { \
        mock_warningf("Ended with GL error flag: %s\n", gl_str(state.error)); \
    } \
    return failed_test; \
}

#define emit_glActiveTexture(texture) { \
    mock_push(pack_glActiveTexture(NULL, texture)); \
}
#define test_glActiveTexture(_texture) { \
    glActiveTexture_PACKED *packed = mock_expect(glActiveTexture); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.texture != _texture) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glActiveTexture(0x%04X);\n", _texture); \
        } \
    } \
}
#define emit_glAlphaFunc(func, ref) { \
    mock_push(pack_glAlphaFunc(NULL, func, ref)); \
}
#define test_glAlphaFunc(_func, _ref) { \
    glAlphaFunc_PACKED *packed = mock_expect(glAlphaFunc); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.func != _func) { \
            match = 0; \
        } \
        if (packed->args.ref != _ref) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glAlphaFunc(0x%04X, %0.2f);\n", _func, _ref); \
        } \
    } \
}
#define emit_glAlphaFuncx(func, ref) { \
    mock_push(pack_glAlphaFuncx(NULL, func, ref)); \
}
#define test_glAlphaFuncx(_func, _ref) { \
    glAlphaFuncx_PACKED *packed = mock_expect(glAlphaFuncx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.func != _func) { \
            match = 0; \
        } \
        if (packed->args.ref != _ref) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glAlphaFuncx(0x%04X, %d);\n", _func, _ref); \
        } \
    } \
}
#define emit_glBindBuffer(target, buffer) { \
    mock_push(pack_glBindBuffer(NULL, target, buffer)); \
}
#define test_glBindBuffer(_target, _buffer) { \
    glBindBuffer_PACKED *packed = mock_expect(glBindBuffer); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.buffer != _buffer) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glBindBuffer(0x%04X, %u);\n", _target, _buffer); \
        } \
    } \
}
#define emit_glBindTexture(target, texture) { \
    mock_push(pack_glBindTexture(NULL, target, texture)); \
}
#define test_glBindTexture(_target, _texture) { \
    glBindTexture_PACKED *packed = mock_expect(glBindTexture); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.texture != _texture) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glBindTexture(0x%04X, %u);\n", _target, _texture); \
        } \
    } \
}
#define emit_glBlendColorOES(red, green, blue, alpha) { \
    mock_push(pack_glBlendColorOES(NULL, red, green, blue, alpha)); \
}
#define test_glBlendColorOES(_red, _green, _blue, _alpha) { \
    glBlendColorOES_PACKED *packed = mock_expect(glBlendColorOES); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.red != _red) { \
            match = 0; \
        } \
        if (packed->args.green != _green) { \
            match = 0; \
        } \
        if (packed->args.blue != _blue) { \
            match = 0; \
        } \
        if (packed->args.alpha != _alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glBlendColorOES(%0.2f, %0.2f, %0.2f, %0.2f);\n", _red, _green, _blue, _alpha); \
        } \
    } \
}
#define emit_glBlendEquationOES(mode) { \
    mock_push(pack_glBlendEquationOES(NULL, mode)); \
}
#define test_glBlendEquationOES(_mode) { \
    glBlendEquationOES_PACKED *packed = mock_expect(glBlendEquationOES); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.mode != _mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glBlendEquationOES(0x%04X);\n", _mode); \
        } \
    } \
}
#define emit_glBlendEquationSeparateOES(modeRGB, modeAlpha) { \
    mock_push(pack_glBlendEquationSeparateOES(NULL, modeRGB, modeAlpha)); \
}
#define test_glBlendEquationSeparateOES(_modeRGB, _modeAlpha) { \
    glBlendEquationSeparateOES_PACKED *packed = mock_expect(glBlendEquationSeparateOES); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.modeRGB != _modeRGB) { \
            match = 0; \
        } \
        if (packed->args.modeAlpha != _modeAlpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glBlendEquationSeparateOES(0x%04X, 0x%04X);\n", _modeRGB, _modeAlpha); \
        } \
    } \
}
#define emit_glBlendFunc(sfactor, dfactor) { \
    mock_push(pack_glBlendFunc(NULL, sfactor, dfactor)); \
}
#define test_glBlendFunc(_sfactor, _dfactor) { \
    glBlendFunc_PACKED *packed = mock_expect(glBlendFunc); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.sfactor != _sfactor) { \
            match = 0; \
        } \
        if (packed->args.dfactor != _dfactor) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glBlendFunc(0x%04X, 0x%04X);\n", _sfactor, _dfactor); \
        } \
    } \
}
#define emit_glBlendFuncSeparateOES(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha) { \
    mock_push(pack_glBlendFuncSeparateOES(NULL, sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha)); \
}
#define test_glBlendFuncSeparateOES(_sfactorRGB, _dfactorRGB, _sfactorAlpha, _dfactorAlpha) { \
    glBlendFuncSeparateOES_PACKED *packed = mock_expect(glBlendFuncSeparateOES); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.sfactorRGB != _sfactorRGB) { \
            match = 0; \
        } \
        if (packed->args.dfactorRGB != _dfactorRGB) { \
            match = 0; \
        } \
        if (packed->args.sfactorAlpha != _sfactorAlpha) { \
            match = 0; \
        } \
        if (packed->args.dfactorAlpha != _dfactorAlpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glBlendFuncSeparateOES(0x%04X, 0x%04X, 0x%04X, 0x%04X);\n", _sfactorRGB, _dfactorRGB, _sfactorAlpha, _dfactorAlpha); \
        } \
    } \
}
#define emit_glBufferData(target, size, data, usage) { \
    mock_push(pack_glBufferData(NULL, target, size, data, usage)); \
}
#define test_glBufferData(_target, _size, _data, _usage) { \
    glBufferData_PACKED *packed = mock_expect(glBufferData); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.size != _size) { \
            match = 0; \
        } \
        a = packed->args.data, b = _data; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_data)) != 0))) { \
            printf("  ERROR: arg mismatch: data\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_data)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_data)); \
            match = 0; \
        } \
        if (packed->args.usage != _usage) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glBufferData(0x%04X, %td, %p, 0x%04X);\n", _target, _size, _data, _usage); \
        } \
    } \
}
#define emit_glBufferSubData(target, offset, size, data) { \
    mock_push(pack_glBufferSubData(NULL, target, offset, size, data)); \
}
#define test_glBufferSubData(_target, _offset, _size, _data) { \
    glBufferSubData_PACKED *packed = mock_expect(glBufferSubData); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.offset != _offset) { \
            match = 0; \
        } \
        if (packed->args.size != _size) { \
            match = 0; \
        } \
        a = packed->args.data, b = _data; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_data)) != 0))) { \
            printf("  ERROR: arg mismatch: data\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_data)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_data)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glBufferSubData(0x%04X, %td, %td, %p);\n", _target, _offset, _size, _data); \
        } \
    } \
}
#define emit_glClear(mask) { \
    mock_push(pack_glClear(NULL, mask)); \
}
#define test_glClear(_mask) { \
    glClear_PACKED *packed = mock_expect(glClear); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.mask != _mask) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glClear(%d);\n", _mask); \
        } \
    } \
}
#define emit_glClearColor(red, green, blue, alpha) { \
    mock_push(pack_glClearColor(NULL, red, green, blue, alpha)); \
}
#define test_glClearColor(_red, _green, _blue, _alpha) { \
    glClearColor_PACKED *packed = mock_expect(glClearColor); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.red != _red) { \
            match = 0; \
        } \
        if (packed->args.green != _green) { \
            match = 0; \
        } \
        if (packed->args.blue != _blue) { \
            match = 0; \
        } \
        if (packed->args.alpha != _alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glClearColor(%0.2f, %0.2f, %0.2f, %0.2f);\n", _red, _green, _blue, _alpha); \
        } \
    } \
}
#define emit_glClearColorx(red, green, blue, alpha) { \
    mock_push(pack_glClearColorx(NULL, red, green, blue, alpha)); \
}
#define test_glClearColorx(_red, _green, _blue, _alpha) { \
    glClearColorx_PACKED *packed = mock_expect(glClearColorx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.red != _red) { \
            match = 0; \
        } \
        if (packed->args.green != _green) { \
            match = 0; \
        } \
        if (packed->args.blue != _blue) { \
            match = 0; \
        } \
        if (packed->args.alpha != _alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glClearColorx(%d, %d, %d, %d);\n", _red, _green, _blue, _alpha); \
        } \
    } \
}
#define emit_glClearDepthf(depth) { \
    mock_push(pack_glClearDepthf(NULL, depth)); \
}
#define test_glClearDepthf(_depth) { \
    glClearDepthf_PACKED *packed = mock_expect(glClearDepthf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.depth != _depth) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glClearDepthf(%0.2f);\n", _depth); \
        } \
    } \
}
#define emit_glClearDepthx(depth) { \
    mock_push(pack_glClearDepthx(NULL, depth)); \
}
#define test_glClearDepthx(_depth) { \
    glClearDepthx_PACKED *packed = mock_expect(glClearDepthx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.depth != _depth) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glClearDepthx(%d);\n", _depth); \
        } \
    } \
}
#define emit_glClearStencil(s) { \
    mock_push(pack_glClearStencil(NULL, s)); \
}
#define test_glClearStencil(_s) { \
    glClearStencil_PACKED *packed = mock_expect(glClearStencil); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.s != _s) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glClearStencil(%d);\n", _s); \
        } \
    } \
}
#define emit_glClientActiveTexture(texture) { \
    mock_push(pack_glClientActiveTexture(NULL, texture)); \
}
#define test_glClientActiveTexture(_texture) { \
    glClientActiveTexture_PACKED *packed = mock_expect(glClientActiveTexture); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.texture != _texture) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glClientActiveTexture(0x%04X);\n", _texture); \
        } \
    } \
}
#define emit_glClipPlanef(plane, equation) { \
    mock_push(pack_glClipPlanef(NULL, plane, equation)); \
}
#define test_glClipPlanef(_plane, _equation) { \
    glClipPlanef_PACKED *packed = mock_expect(glClipPlanef); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.plane != _plane) { \
            match = 0; \
        } \
        a = packed->args.equation, b = _equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_equation)) != 0))) { \
            printf("  ERROR: arg mismatch: equation\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_equation)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_equation)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glClipPlanef(0x%04X, %p);\n", _plane, _equation); \
        } \
    } \
}
#define emit_glClipPlanex(plane, equation) { \
    mock_push(pack_glClipPlanex(NULL, plane, equation)); \
}
#define test_glClipPlanex(_plane, _equation) { \
    glClipPlanex_PACKED *packed = mock_expect(glClipPlanex); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.plane != _plane) { \
            match = 0; \
        } \
        a = packed->args.equation, b = _equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_equation)) != 0))) { \
            printf("  ERROR: arg mismatch: equation\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_equation)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_equation)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glClipPlanex(0x%04X, %p);\n", _plane, _equation); \
        } \
    } \
}
#define emit_glColor4f(red, green, blue, alpha) { \
    mock_push(pack_glColor4f(NULL, red, green, blue, alpha)); \
}
#define test_glColor4f(_red, _green, _blue, _alpha) { \
    glColor4f_PACKED *packed = mock_expect(glColor4f); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.red - _red >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.green - _green >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.blue - _blue >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.alpha - _alpha >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glColor4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", _red, _green, _blue, _alpha); \
        } \
    } \
}
#define emit_glColor4ub(red, green, blue, alpha) { \
    mock_push(pack_glColor4ub(NULL, red, green, blue, alpha)); \
}
#define test_glColor4ub(_red, _green, _blue, _alpha) { \
    glColor4ub_PACKED *packed = mock_expect(glColor4ub); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.red != _red) { \
            match = 0; \
        } \
        if (packed->args.green != _green) { \
            match = 0; \
        } \
        if (packed->args.blue != _blue) { \
            match = 0; \
        } \
        if (packed->args.alpha != _alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glColor4ub(%c, %c, %c, %c);\n", _red, _green, _blue, _alpha); \
        } \
    } \
}
#define emit_glColor4x(red, green, blue, alpha) { \
    mock_push(pack_glColor4x(NULL, red, green, blue, alpha)); \
}
#define test_glColor4x(_red, _green, _blue, _alpha) { \
    glColor4x_PACKED *packed = mock_expect(glColor4x); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.red != _red) { \
            match = 0; \
        } \
        if (packed->args.green != _green) { \
            match = 0; \
        } \
        if (packed->args.blue != _blue) { \
            match = 0; \
        } \
        if (packed->args.alpha != _alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glColor4x(%d, %d, %d, %d);\n", _red, _green, _blue, _alpha); \
        } \
    } \
}
#define emit_glColorMask(red, green, blue, alpha) { \
    mock_push(pack_glColorMask(NULL, red, green, blue, alpha)); \
}
#define test_glColorMask(_red, _green, _blue, _alpha) { \
    glColorMask_PACKED *packed = mock_expect(glColorMask); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.red != _red) { \
            match = 0; \
        } \
        if (packed->args.green != _green) { \
            match = 0; \
        } \
        if (packed->args.blue != _blue) { \
            match = 0; \
        } \
        if (packed->args.alpha != _alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glColorMask(%d, %d, %d, %d);\n", _red, _green, _blue, _alpha); \
        } \
    } \
}
#define emit_glColorPointer(size, type, stride, pointer) { \
    mock_push(pack_glColorPointer(NULL, size, type, stride, pointer)); \
}
#define test_glColorPointer(_size, _type, _stride, _pointer) { \
    glColorPointer_PACKED *packed = mock_expect(glColorPointer); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.size != _size) { \
            match = 0; \
        } \
        if (packed->args.type != _type) { \
            match = 0; \
        } \
        if (packed->args.stride != _stride) { \
            match = 0; \
        } \
        a = packed->args.pointer, b = _pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pointer)) != 0))) { \
            printf("  ERROR: arg mismatch: pointer\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pointer)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pointer)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glColorPointer(%d, 0x%04X, %d, %p);\n", _size, _type, _stride, _pointer); \
        } \
    } \
}
#define emit_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data) { \
    mock_push(pack_glCompressedTexImage2D(NULL, target, level, internalformat, width, height, border, imageSize, data)); \
}
#define test_glCompressedTexImage2D(_target, _level, _internalformat, _width, _height, _border, _imageSize, _data) { \
    glCompressedTexImage2D_PACKED *packed = mock_expect(glCompressedTexImage2D); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.level != _level) { \
            match = 0; \
        } \
        if (packed->args.internalformat != _internalformat) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (packed->args.border != _border) { \
            match = 0; \
        } \
        if (packed->args.imageSize != _imageSize) { \
            match = 0; \
        } \
        a = packed->args.data, b = _data; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_data)) != 0))) { \
            printf("  ERROR: arg mismatch: data\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_data)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_data)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glCompressedTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %p);\n", _target, _level, _internalformat, _width, _height, _border, _imageSize, _data); \
        } \
    } \
}
#define emit_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data) { \
    mock_push(pack_glCompressedTexSubImage2D(NULL, target, level, xoffset, yoffset, width, height, format, imageSize, data)); \
}
#define test_glCompressedTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _imageSize, _data) { \
    glCompressedTexSubImage2D_PACKED *packed = mock_expect(glCompressedTexSubImage2D); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.level != _level) { \
            match = 0; \
        } \
        if (packed->args.xoffset != _xoffset) { \
            match = 0; \
        } \
        if (packed->args.yoffset != _yoffset) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (packed->args.format != _format) { \
            match = 0; \
        } \
        if (packed->args.imageSize != _imageSize) { \
            match = 0; \
        } \
        a = packed->args.data, b = _data; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_data)) != 0))) { \
            printf("  ERROR: arg mismatch: data\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_data)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_data)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glCompressedTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, %d, %p);\n", _target, _level, _xoffset, _yoffset, _width, _height, _format, _imageSize, _data); \
        } \
    } \
}
#define emit_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border) { \
    mock_push(pack_glCopyTexImage2D(NULL, target, level, internalformat, x, y, width, height, border)); \
}
#define test_glCopyTexImage2D(_target, _level, _internalformat, _x, _y, _width, _height, _border) { \
    glCopyTexImage2D_PACKED *packed = mock_expect(glCopyTexImage2D); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.level != _level) { \
            match = 0; \
        } \
        if (packed->args.internalformat != _internalformat) { \
            match = 0; \
        } \
        if (packed->args.x != _x) { \
            match = 0; \
        } \
        if (packed->args.y != _y) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (packed->args.border != _border) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glCopyTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %d);\n", _target, _level, _internalformat, _x, _y, _width, _height, _border); \
        } \
    } \
}
#define emit_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height) { \
    mock_push(pack_glCopyTexSubImage2D(NULL, target, level, xoffset, yoffset, x, y, width, height)); \
}
#define test_glCopyTexSubImage2D(_target, _level, _xoffset, _yoffset, _x, _y, _width, _height) { \
    glCopyTexSubImage2D_PACKED *packed = mock_expect(glCopyTexSubImage2D); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.level != _level) { \
            match = 0; \
        } \
        if (packed->args.xoffset != _xoffset) { \
            match = 0; \
        } \
        if (packed->args.yoffset != _yoffset) { \
            match = 0; \
        } \
        if (packed->args.x != _x) { \
            match = 0; \
        } \
        if (packed->args.y != _y) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glCopyTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, %d, %d);\n", _target, _level, _xoffset, _yoffset, _x, _y, _width, _height); \
        } \
    } \
}
#define emit_glCullFace(mode) { \
    mock_push(pack_glCullFace(NULL, mode)); \
}
#define test_glCullFace(_mode) { \
    glCullFace_PACKED *packed = mock_expect(glCullFace); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.mode != _mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glCullFace(0x%04X);\n", _mode); \
        } \
    } \
}
#define emit_glDeleteBuffers(n, buffers) { \
    mock_push(pack_glDeleteBuffers(NULL, n, buffers)); \
}
#define test_glDeleteBuffers(_n, _buffers) { \
    glDeleteBuffers_PACKED *packed = mock_expect(glDeleteBuffers); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.n != _n) { \
            match = 0; \
        } \
        a = packed->args.buffers, b = _buffers; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_buffers)) != 0))) { \
            printf("  ERROR: arg mismatch: buffers\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_buffers)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_buffers)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glDeleteBuffers(%d, %p);\n", _n, _buffers); \
        } \
    } \
}
#define emit_glDeleteTextures(n, textures) { \
    mock_push(pack_glDeleteTextures(NULL, n, textures)); \
}
#define test_glDeleteTextures(_n, _textures) { \
    glDeleteTextures_PACKED *packed = mock_expect(glDeleteTextures); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.n != _n) { \
            match = 0; \
        } \
        a = packed->args.textures, b = _textures; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_textures)) != 0))) { \
            printf("  ERROR: arg mismatch: textures\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_textures)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_textures)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glDeleteTextures(%d, %p);\n", _n, _textures); \
        } \
    } \
}
#define emit_glDepthFunc(func) { \
    mock_push(pack_glDepthFunc(NULL, func)); \
}
#define test_glDepthFunc(_func) { \
    glDepthFunc_PACKED *packed = mock_expect(glDepthFunc); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.func != _func) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glDepthFunc(0x%04X);\n", _func); \
        } \
    } \
}
#define emit_glDepthMask(flag) { \
    mock_push(pack_glDepthMask(NULL, flag)); \
}
#define test_glDepthMask(_flag) { \
    glDepthMask_PACKED *packed = mock_expect(glDepthMask); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.flag != _flag) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glDepthMask(%d);\n", _flag); \
        } \
    } \
}
#define emit_glDepthRangef(near, far) { \
    mock_push(pack_glDepthRangef(NULL, near, far)); \
}
#define test_glDepthRangef(_near, _far) { \
    glDepthRangef_PACKED *packed = mock_expect(glDepthRangef); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.near != _near) { \
            match = 0; \
        } \
        if (packed->args.far != _far) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glDepthRangef(%0.2f, %0.2f);\n", _near, _far); \
        } \
    } \
}
#define emit_glDepthRangex(near, far) { \
    mock_push(pack_glDepthRangex(NULL, near, far)); \
}
#define test_glDepthRangex(_near, _far) { \
    glDepthRangex_PACKED *packed = mock_expect(glDepthRangex); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.near != _near) { \
            match = 0; \
        } \
        if (packed->args.far != _far) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glDepthRangex(%d, %d);\n", _near, _far); \
        } \
    } \
}
#define emit_glDisable(cap) { \
    mock_push(pack_glDisable(NULL, cap)); \
}
#define test_glDisable(_cap) { \
    glDisable_PACKED *packed = mock_expect(glDisable); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.cap != _cap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glDisable(0x%04X);\n", _cap); \
        } \
    } \
}
#define emit_glDisableClientState(array) { \
    mock_push(pack_glDisableClientState(NULL, array)); \
}
#define test_glDisableClientState(_array) { \
    glDisableClientState_PACKED *packed = mock_expect(glDisableClientState); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.array != _array) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glDisableClientState(0x%04X);\n", _array); \
        } \
    } \
}
#define emit_glDrawArrays(mode, first, count) { \
    mock_push(pack_glDrawArrays(NULL, mode, first, count)); \
}
#define test_glDrawArrays(_mode, _first, _count) { \
    glDrawArrays_PACKED *packed = mock_expect(glDrawArrays); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.mode != _mode) { \
            match = 0; \
        } \
        if (packed->args.first != _first) { \
            match = 0; \
        } \
        if (packed->args.count != _count) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glDrawArrays(0x%04X, %d, %d);\n", _mode, _first, _count); \
        } \
    } \
}
#define emit_glDrawElements(mode, count, type, indices) { \
    mock_push(pack_glDrawElements(NULL, mode, count, type, indices)); \
}
#define test_glDrawElements(_mode, _count, _type, _indices) { \
    glDrawElements_PACKED *packed = mock_expect(glDrawElements); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.mode != _mode) { \
            match = 0; \
        } \
        if (packed->args.count != _count) { \
            match = 0; \
        } \
        if (packed->args.type != _type) { \
            match = 0; \
        } \
        a = packed->args.indices, b = _indices; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_indices)) != 0))) { \
            printf("  ERROR: arg mismatch: indices\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_indices)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_indices)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glDrawElements(0x%04X, %d, 0x%04X, %p);\n", _mode, _count, _type, _indices); \
        } \
    } \
}
#define emit_glEnable(cap) { \
    mock_push(pack_glEnable(NULL, cap)); \
}
#define test_glEnable(_cap) { \
    glEnable_PACKED *packed = mock_expect(glEnable); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.cap != _cap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glEnable(0x%04X);\n", _cap); \
        } \
    } \
}
#define emit_glEnableClientState(array) { \
    mock_push(pack_glEnableClientState(NULL, array)); \
}
#define test_glEnableClientState(_array) { \
    glEnableClientState_PACKED *packed = mock_expect(glEnableClientState); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.array != _array) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glEnableClientState(0x%04X);\n", _array); \
        } \
    } \
}
#define emit_glFinish() { \
    mock_push(pack_glFinish(NULL)); \
}
#define test_glFinish() { \
    glFinish_PACKED *packed = mock_expect(glFinish); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glFlush() { \
    mock_push(pack_glFlush(NULL)); \
}
#define test_glFlush() { \
    glFlush_PACKED *packed = mock_expect(glFlush); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glFogf(pname, param) { \
    mock_push(pack_glFogf(NULL, pname, param)); \
}
#define test_glFogf(_pname, _param) { \
    glFogf_PACKED *packed = mock_expect(glFogf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param - _param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glFogf(0x%04X, %0.2f);\n", _pname, _param); \
        } \
    } \
}
#define emit_glFogfv(pname, params) { \
    mock_push(pack_glFogfv(NULL, pname, params)); \
}
#define test_glFogfv(_pname, _params) { \
    glFogfv_PACKED *packed = mock_expect(glFogfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glFogfv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glFogx(pname, param) { \
    mock_push(pack_glFogx(NULL, pname, param)); \
}
#define test_glFogx(_pname, _param) { \
    glFogx_PACKED *packed = mock_expect(glFogx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param != _param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glFogx(0x%04X, %d);\n", _pname, _param); \
        } \
    } \
}
#define emit_glFogxv(pname, params) { \
    mock_push(pack_glFogxv(NULL, pname, params)); \
}
#define test_glFogxv(_pname, _params) { \
    glFogxv_PACKED *packed = mock_expect(glFogxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glFogxv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glFrontFace(mode) { \
    mock_push(pack_glFrontFace(NULL, mode)); \
}
#define test_glFrontFace(_mode) { \
    glFrontFace_PACKED *packed = mock_expect(glFrontFace); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.mode != _mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glFrontFace(0x%04X);\n", _mode); \
        } \
    } \
}
#define emit_glFrustumf(left, right, bottom, top, near, far) { \
    mock_push(pack_glFrustumf(NULL, left, right, bottom, top, near, far)); \
}
#define test_glFrustumf(_left, _right, _bottom, _top, _near, _far) { \
    glFrustumf_PACKED *packed = mock_expect(glFrustumf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.left - _left >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.right - _right >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.bottom - _bottom >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.top - _top >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.near - _near >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.far - _far >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glFrustumf(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", _left, _right, _bottom, _top, _near, _far); \
        } \
    } \
}
#define emit_glFrustumx(left, right, bottom, top, near, far) { \
    mock_push(pack_glFrustumx(NULL, left, right, bottom, top, near, far)); \
}
#define test_glFrustumx(_left, _right, _bottom, _top, _near, _far) { \
    glFrustumx_PACKED *packed = mock_expect(glFrustumx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.left != _left) { \
            match = 0; \
        } \
        if (packed->args.right != _right) { \
            match = 0; \
        } \
        if (packed->args.bottom != _bottom) { \
            match = 0; \
        } \
        if (packed->args.top != _top) { \
            match = 0; \
        } \
        if (packed->args.near != _near) { \
            match = 0; \
        } \
        if (packed->args.far != _far) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glFrustumx(%d, %d, %d, %d, %d, %d);\n", _left, _right, _bottom, _top, _near, _far); \
        } \
    } \
}
#define emit_glGenBuffers(n, buffers) { \
    mock_push(pack_glGenBuffers(NULL, n, buffers)); \
}
#define test_glGenBuffers(_n, _buffers) { \
    glGenBuffers_PACKED *packed = mock_expect(glGenBuffers); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.n != _n) { \
            match = 0; \
        } \
        a = packed->args.buffers, b = _buffers; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_buffers)) != 0))) { \
            printf("  ERROR: arg mismatch: buffers\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_buffers)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_buffers)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGenBuffers(%d, %p);\n", _n, _buffers); \
        } \
    } \
}
#define emit_glGenTextures(n, textures) { \
    mock_push(pack_glGenTextures(NULL, n, textures)); \
}
#define test_glGenTextures(_n, _textures) { \
    glGenTextures_PACKED *packed = mock_expect(glGenTextures); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.n != _n) { \
            match = 0; \
        } \
        a = packed->args.textures, b = _textures; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_textures)) != 0))) { \
            printf("  ERROR: arg mismatch: textures\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_textures)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_textures)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGenTextures(%d, %p);\n", _n, _textures); \
        } \
    } \
}
#define emit_glGetBooleanv(pname, params) { \
    mock_push(pack_glGetBooleanv(NULL, pname, params)); \
}
#define test_glGetBooleanv(_pname, _params) { \
    glGetBooleanv_PACKED *packed = mock_expect(glGetBooleanv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetBooleanv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glGetBufferParameteriv(target, pname, params) { \
    mock_push(pack_glGetBufferParameteriv(NULL, target, pname, params)); \
}
#define test_glGetBufferParameteriv(_target, _pname, _params) { \
    glGetBufferParameteriv_PACKED *packed = mock_expect(glGetBufferParameteriv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetBufferParameteriv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glGetClipPlanef(plane, equation) { \
    mock_push(pack_glGetClipPlanef(NULL, plane, equation)); \
}
#define test_glGetClipPlanef(_plane, _equation) { \
    glGetClipPlanef_PACKED *packed = mock_expect(glGetClipPlanef); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.plane != _plane) { \
            match = 0; \
        } \
        a = packed->args.equation, b = _equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_equation)) != 0))) { \
            printf("  ERROR: arg mismatch: equation\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_equation)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_equation)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetClipPlanef(0x%04X, %p);\n", _plane, _equation); \
        } \
    } \
}
#define emit_glGetClipPlanex(plane, equation) { \
    mock_push(pack_glGetClipPlanex(NULL, plane, equation)); \
}
#define test_glGetClipPlanex(_plane, _equation) { \
    glGetClipPlanex_PACKED *packed = mock_expect(glGetClipPlanex); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.plane != _plane) { \
            match = 0; \
        } \
        a = packed->args.equation, b = _equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_equation)) != 0))) { \
            printf("  ERROR: arg mismatch: equation\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_equation)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_equation)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetClipPlanex(0x%04X, %p);\n", _plane, _equation); \
        } \
    } \
}
#define emit_glGetError() { \
    mock_push(pack_glGetError(NULL)); \
}
#define test_glGetError() { \
    glGetError_PACKED *packed = mock_expect(glGetError); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glGetFixedv(pname, params) { \
    mock_push(pack_glGetFixedv(NULL, pname, params)); \
}
#define test_glGetFixedv(_pname, _params) { \
    glGetFixedv_PACKED *packed = mock_expect(glGetFixedv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetFixedv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glGetFloatv(pname, params) { \
    mock_push(pack_glGetFloatv(NULL, pname, params)); \
}
#define test_glGetFloatv(_pname, _params) { \
    glGetFloatv_PACKED *packed = mock_expect(glGetFloatv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetFloatv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glGetIntegerv(pname, params) { \
    mock_push(pack_glGetIntegerv(NULL, pname, params)); \
}
#define test_glGetIntegerv(_pname, _params) { \
    glGetIntegerv_PACKED *packed = mock_expect(glGetIntegerv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetIntegerv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glGetLightfv(light, pname, params) { \
    mock_push(pack_glGetLightfv(NULL, light, pname, params)); \
}
#define test_glGetLightfv(_light, _pname, _params) { \
    glGetLightfv_PACKED *packed = mock_expect(glGetLightfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.light != _light) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetLightfv(0x%04X, 0x%04X, %p);\n", _light, _pname, _params); \
        } \
    } \
}
#define emit_glGetLightxv(light, pname, params) { \
    mock_push(pack_glGetLightxv(NULL, light, pname, params)); \
}
#define test_glGetLightxv(_light, _pname, _params) { \
    glGetLightxv_PACKED *packed = mock_expect(glGetLightxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.light != _light) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetLightxv(0x%04X, 0x%04X, %p);\n", _light, _pname, _params); \
        } \
    } \
}
#define emit_glGetMaterialfv(face, pname, params) { \
    mock_push(pack_glGetMaterialfv(NULL, face, pname, params)); \
}
#define test_glGetMaterialfv(_face, _pname, _params) { \
    glGetMaterialfv_PACKED *packed = mock_expect(glGetMaterialfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.face != _face) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetMaterialfv(0x%04X, 0x%04X, %p);\n", _face, _pname, _params); \
        } \
    } \
}
#define emit_glGetMaterialxv(face, pname, params) { \
    mock_push(pack_glGetMaterialxv(NULL, face, pname, params)); \
}
#define test_glGetMaterialxv(_face, _pname, _params) { \
    glGetMaterialxv_PACKED *packed = mock_expect(glGetMaterialxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.face != _face) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetMaterialxv(0x%04X, 0x%04X, %p);\n", _face, _pname, _params); \
        } \
    } \
}
#define emit_glGetPointerv(pname, params) { \
    mock_push(pack_glGetPointerv(NULL, pname, params)); \
}
#define test_glGetPointerv(_pname, _params) { \
    glGetPointerv_PACKED *packed = mock_expect(glGetPointerv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetPointerv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glGetString(name) { \
    mock_push(pack_glGetString(NULL, name)); \
}
#define test_glGetString(_name) { \
    glGetString_PACKED *packed = mock_expect(glGetString); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.name != _name) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetString(0x%04X);\n", _name); \
        } \
    } \
}
#define emit_glGetTexEnvfv(target, pname, params) { \
    mock_push(pack_glGetTexEnvfv(NULL, target, pname, params)); \
}
#define test_glGetTexEnvfv(_target, _pname, _params) { \
    glGetTexEnvfv_PACKED *packed = mock_expect(glGetTexEnvfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetTexEnvfv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glGetTexEnviv(target, pname, params) { \
    mock_push(pack_glGetTexEnviv(NULL, target, pname, params)); \
}
#define test_glGetTexEnviv(_target, _pname, _params) { \
    glGetTexEnviv_PACKED *packed = mock_expect(glGetTexEnviv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetTexEnviv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glGetTexEnvxv(target, pname, params) { \
    mock_push(pack_glGetTexEnvxv(NULL, target, pname, params)); \
}
#define test_glGetTexEnvxv(_target, _pname, _params) { \
    glGetTexEnvxv_PACKED *packed = mock_expect(glGetTexEnvxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetTexEnvxv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glGetTexParameterfv(target, pname, params) { \
    mock_push(pack_glGetTexParameterfv(NULL, target, pname, params)); \
}
#define test_glGetTexParameterfv(_target, _pname, _params) { \
    glGetTexParameterfv_PACKED *packed = mock_expect(glGetTexParameterfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetTexParameterfv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glGetTexParameteriv(target, pname, params) { \
    mock_push(pack_glGetTexParameteriv(NULL, target, pname, params)); \
}
#define test_glGetTexParameteriv(_target, _pname, _params) { \
    glGetTexParameteriv_PACKED *packed = mock_expect(glGetTexParameteriv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetTexParameteriv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glGetTexParameterxv(target, pname, params) { \
    mock_push(pack_glGetTexParameterxv(NULL, target, pname, params)); \
}
#define test_glGetTexParameterxv(_target, _pname, _params) { \
    glGetTexParameterxv_PACKED *packed = mock_expect(glGetTexParameterxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetTexParameterxv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glHint(target, mode) { \
    mock_push(pack_glHint(NULL, target, mode)); \
}
#define test_glHint(_target, _mode) { \
    glHint_PACKED *packed = mock_expect(glHint); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.mode != _mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glHint(0x%04X, 0x%04X);\n", _target, _mode); \
        } \
    } \
}
#define emit_glIsBuffer(buffer) { \
    mock_push(pack_glIsBuffer(NULL, buffer)); \
}
#define test_glIsBuffer(_buffer) { \
    glIsBuffer_PACKED *packed = mock_expect(glIsBuffer); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.buffer != _buffer) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glIsBuffer(%u);\n", _buffer); \
        } \
    } \
}
#define emit_glIsEnabled(cap) { \
    mock_push(pack_glIsEnabled(NULL, cap)); \
}
#define test_glIsEnabled(_cap) { \
    glIsEnabled_PACKED *packed = mock_expect(glIsEnabled); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.cap != _cap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glIsEnabled(0x%04X);\n", _cap); \
        } \
    } \
}
#define emit_glIsTexture(texture) { \
    mock_push(pack_glIsTexture(NULL, texture)); \
}
#define test_glIsTexture(_texture) { \
    glIsTexture_PACKED *packed = mock_expect(glIsTexture); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.texture != _texture) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glIsTexture(%u);\n", _texture); \
        } \
    } \
}
#define emit_glLightModelf(pname, param) { \
    mock_push(pack_glLightModelf(NULL, pname, param)); \
}
#define test_glLightModelf(_pname, _param) { \
    glLightModelf_PACKED *packed = mock_expect(glLightModelf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param - _param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLightModelf(0x%04X, %0.2f);\n", _pname, _param); \
        } \
    } \
}
#define emit_glLightModelfv(pname, params) { \
    mock_push(pack_glLightModelfv(NULL, pname, params)); \
}
#define test_glLightModelfv(_pname, _params) { \
    glLightModelfv_PACKED *packed = mock_expect(glLightModelfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLightModelfv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glLightModelx(pname, param) { \
    mock_push(pack_glLightModelx(NULL, pname, param)); \
}
#define test_glLightModelx(_pname, _param) { \
    glLightModelx_PACKED *packed = mock_expect(glLightModelx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param != _param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLightModelx(0x%04X, %d);\n", _pname, _param); \
        } \
    } \
}
#define emit_glLightModelxv(pname, params) { \
    mock_push(pack_glLightModelxv(NULL, pname, params)); \
}
#define test_glLightModelxv(_pname, _params) { \
    glLightModelxv_PACKED *packed = mock_expect(glLightModelxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLightModelxv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glLightf(light, pname, param) { \
    mock_push(pack_glLightf(NULL, light, pname, param)); \
}
#define test_glLightf(_light, _pname, _param) { \
    glLightf_PACKED *packed = mock_expect(glLightf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.light != _light) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param - _param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLightf(0x%04X, 0x%04X, %0.2f);\n", _light, _pname, _param); \
        } \
    } \
}
#define emit_glLightfv(light, pname, params) { \
    mock_push(pack_glLightfv(NULL, light, pname, params)); \
}
#define test_glLightfv(_light, _pname, _params) { \
    glLightfv_PACKED *packed = mock_expect(glLightfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.light != _light) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLightfv(0x%04X, 0x%04X, %p);\n", _light, _pname, _params); \
        } \
    } \
}
#define emit_glLightx(light, pname, param) { \
    mock_push(pack_glLightx(NULL, light, pname, param)); \
}
#define test_glLightx(_light, _pname, _param) { \
    glLightx_PACKED *packed = mock_expect(glLightx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.light != _light) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param != _param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLightx(0x%04X, 0x%04X, %d);\n", _light, _pname, _param); \
        } \
    } \
}
#define emit_glLightxv(light, pname, params) { \
    mock_push(pack_glLightxv(NULL, light, pname, params)); \
}
#define test_glLightxv(_light, _pname, _params) { \
    glLightxv_PACKED *packed = mock_expect(glLightxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.light != _light) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLightxv(0x%04X, 0x%04X, %p);\n", _light, _pname, _params); \
        } \
    } \
}
#define emit_glLineWidth(width) { \
    mock_push(pack_glLineWidth(NULL, width)); \
}
#define test_glLineWidth(_width) { \
    glLineWidth_PACKED *packed = mock_expect(glLineWidth); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.width - _width >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLineWidth(%0.2f);\n", _width); \
        } \
    } \
}
#define emit_glLineWidthx(width) { \
    mock_push(pack_glLineWidthx(NULL, width)); \
}
#define test_glLineWidthx(_width) { \
    glLineWidthx_PACKED *packed = mock_expect(glLineWidthx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLineWidthx(%d);\n", _width); \
        } \
    } \
}
#define emit_glLoadIdentity() { \
    mock_push(pack_glLoadIdentity(NULL)); \
}
#define test_glLoadIdentity() { \
    glLoadIdentity_PACKED *packed = mock_expect(glLoadIdentity); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glLoadMatrixf(m) { \
    mock_push(pack_glLoadMatrixf(NULL, m)); \
}
#define test_glLoadMatrixf(_m) { \
    glLoadMatrixf_PACKED *packed = mock_expect(glLoadMatrixf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.m, b = _m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_m)) != 0))) { \
            printf("  ERROR: arg mismatch: m\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_m)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_m)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLoadMatrixf(%p);\n", _m); \
        } \
    } \
}
#define emit_glLoadMatrixx(m) { \
    mock_push(pack_glLoadMatrixx(NULL, m)); \
}
#define test_glLoadMatrixx(_m) { \
    glLoadMatrixx_PACKED *packed = mock_expect(glLoadMatrixx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.m, b = _m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_m)) != 0))) { \
            printf("  ERROR: arg mismatch: m\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_m)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_m)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLoadMatrixx(%p);\n", _m); \
        } \
    } \
}
#define emit_glLogicOp(opcode) { \
    mock_push(pack_glLogicOp(NULL, opcode)); \
}
#define test_glLogicOp(_opcode) { \
    glLogicOp_PACKED *packed = mock_expect(glLogicOp); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.opcode != _opcode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLogicOp(0x%04X);\n", _opcode); \
        } \
    } \
}
#define emit_glMaterialf(face, pname, param) { \
    mock_push(pack_glMaterialf(NULL, face, pname, param)); \
}
#define test_glMaterialf(_face, _pname, _param) { \
    glMaterialf_PACKED *packed = mock_expect(glMaterialf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.face != _face) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param - _param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glMaterialf(0x%04X, 0x%04X, %0.2f);\n", _face, _pname, _param); \
        } \
    } \
}
#define emit_glMaterialfv(face, pname, params) { \
    mock_push(pack_glMaterialfv(NULL, face, pname, params)); \
}
#define test_glMaterialfv(_face, _pname, _params) { \
    glMaterialfv_PACKED *packed = mock_expect(glMaterialfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.face != _face) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glMaterialfv(0x%04X, 0x%04X, %p);\n", _face, _pname, _params); \
        } \
    } \
}
#define emit_glMaterialx(face, pname, param) { \
    mock_push(pack_glMaterialx(NULL, face, pname, param)); \
}
#define test_glMaterialx(_face, _pname, _param) { \
    glMaterialx_PACKED *packed = mock_expect(glMaterialx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.face != _face) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param != _param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glMaterialx(0x%04X, 0x%04X, %d);\n", _face, _pname, _param); \
        } \
    } \
}
#define emit_glMaterialxv(face, pname, params) { \
    mock_push(pack_glMaterialxv(NULL, face, pname, params)); \
}
#define test_glMaterialxv(_face, _pname, _params) { \
    glMaterialxv_PACKED *packed = mock_expect(glMaterialxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.face != _face) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glMaterialxv(0x%04X, 0x%04X, %p);\n", _face, _pname, _params); \
        } \
    } \
}
#define emit_glMatrixMode(mode) { \
    mock_push(pack_glMatrixMode(NULL, mode)); \
}
#define test_glMatrixMode(_mode) { \
    glMatrixMode_PACKED *packed = mock_expect(glMatrixMode); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.mode != _mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glMatrixMode(0x%04X);\n", _mode); \
        } \
    } \
}
#define emit_glMultMatrixf(m) { \
    mock_push(pack_glMultMatrixf(NULL, m)); \
}
#define test_glMultMatrixf(_m) { \
    glMultMatrixf_PACKED *packed = mock_expect(glMultMatrixf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.m, b = _m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_m)) != 0))) { \
            printf("  ERROR: arg mismatch: m\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_m)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_m)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glMultMatrixf(%p);\n", _m); \
        } \
    } \
}
#define emit_glMultMatrixx(m) { \
    mock_push(pack_glMultMatrixx(NULL, m)); \
}
#define test_glMultMatrixx(_m) { \
    glMultMatrixx_PACKED *packed = mock_expect(glMultMatrixx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.m, b = _m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_m)) != 0))) { \
            printf("  ERROR: arg mismatch: m\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_m)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_m)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glMultMatrixx(%p);\n", _m); \
        } \
    } \
}
#define emit_glMultiTexCoord4f(target, s, t, r, q) { \
    mock_push(pack_glMultiTexCoord4f(NULL, target, s, t, r, q)); \
}
#define test_glMultiTexCoord4f(_target, _s, _t, _r, _q) { \
    glMultiTexCoord4f_PACKED *packed = mock_expect(glMultiTexCoord4f); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.s - _s >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.t - _t >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.r - _r >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.q - _q >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glMultiTexCoord4f(0x%04X, %0.2f, %0.2f, %0.2f, %0.2f);\n", _target, _s, _t, _r, _q); \
        } \
    } \
}
#define emit_glMultiTexCoord4x(target, s, t, r, q) { \
    mock_push(pack_glMultiTexCoord4x(NULL, target, s, t, r, q)); \
}
#define test_glMultiTexCoord4x(_target, _s, _t, _r, _q) { \
    glMultiTexCoord4x_PACKED *packed = mock_expect(glMultiTexCoord4x); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.s != _s) { \
            match = 0; \
        } \
        if (packed->args.t != _t) { \
            match = 0; \
        } \
        if (packed->args.r != _r) { \
            match = 0; \
        } \
        if (packed->args.q != _q) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glMultiTexCoord4x(0x%04X, %d, %d, %d, %d);\n", _target, _s, _t, _r, _q); \
        } \
    } \
}
#define emit_glNormal3f(nx, ny, nz) { \
    mock_push(pack_glNormal3f(NULL, nx, ny, nz)); \
}
#define test_glNormal3f(_nx, _ny, _nz) { \
    glNormal3f_PACKED *packed = mock_expect(glNormal3f); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.nx - _nx >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.ny - _ny >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.nz - _nz >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glNormal3f(%0.2f, %0.2f, %0.2f);\n", _nx, _ny, _nz); \
        } \
    } \
}
#define emit_glNormal3x(nx, ny, nz) { \
    mock_push(pack_glNormal3x(NULL, nx, ny, nz)); \
}
#define test_glNormal3x(_nx, _ny, _nz) { \
    glNormal3x_PACKED *packed = mock_expect(glNormal3x); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.nx != _nx) { \
            match = 0; \
        } \
        if (packed->args.ny != _ny) { \
            match = 0; \
        } \
        if (packed->args.nz != _nz) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glNormal3x(%d, %d, %d);\n", _nx, _ny, _nz); \
        } \
    } \
}
#define emit_glNormalPointer(type, stride, pointer) { \
    mock_push(pack_glNormalPointer(NULL, type, stride, pointer)); \
}
#define test_glNormalPointer(_type, _stride, _pointer) { \
    glNormalPointer_PACKED *packed = mock_expect(glNormalPointer); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.type != _type) { \
            match = 0; \
        } \
        if (packed->args.stride != _stride) { \
            match = 0; \
        } \
        a = packed->args.pointer, b = _pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pointer)) != 0))) { \
            printf("  ERROR: arg mismatch: pointer\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pointer)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pointer)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glNormalPointer(0x%04X, %d, %p);\n", _type, _stride, _pointer); \
        } \
    } \
}
#define emit_glOrthof(left, right, bottom, top, near, far) { \
    mock_push(pack_glOrthof(NULL, left, right, bottom, top, near, far)); \
}
#define test_glOrthof(_left, _right, _bottom, _top, _near, _far) { \
    glOrthof_PACKED *packed = mock_expect(glOrthof); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.left - _left >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.right - _right >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.bottom - _bottom >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.top - _top >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.near - _near >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.far - _far >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glOrthof(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", _left, _right, _bottom, _top, _near, _far); \
        } \
    } \
}
#define emit_glOrthox(left, right, bottom, top, near, far) { \
    mock_push(pack_glOrthox(NULL, left, right, bottom, top, near, far)); \
}
#define test_glOrthox(_left, _right, _bottom, _top, _near, _far) { \
    glOrthox_PACKED *packed = mock_expect(glOrthox); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.left != _left) { \
            match = 0; \
        } \
        if (packed->args.right != _right) { \
            match = 0; \
        } \
        if (packed->args.bottom != _bottom) { \
            match = 0; \
        } \
        if (packed->args.top != _top) { \
            match = 0; \
        } \
        if (packed->args.near != _near) { \
            match = 0; \
        } \
        if (packed->args.far != _far) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glOrthox(%d, %d, %d, %d, %d, %d);\n", _left, _right, _bottom, _top, _near, _far); \
        } \
    } \
}
#define emit_glPixelStorei(pname, param) { \
    mock_push(pack_glPixelStorei(NULL, pname, param)); \
}
#define test_glPixelStorei(_pname, _param) { \
    glPixelStorei_PACKED *packed = mock_expect(glPixelStorei); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param != _param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPixelStorei(0x%04X, %d);\n", _pname, _param); \
        } \
    } \
}
#define emit_glPointParameterf(pname, param) { \
    mock_push(pack_glPointParameterf(NULL, pname, param)); \
}
#define test_glPointParameterf(_pname, _param) { \
    glPointParameterf_PACKED *packed = mock_expect(glPointParameterf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param - _param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPointParameterf(0x%04X, %0.2f);\n", _pname, _param); \
        } \
    } \
}
#define emit_glPointParameterfv(pname, params) { \
    mock_push(pack_glPointParameterfv(NULL, pname, params)); \
}
#define test_glPointParameterfv(_pname, _params) { \
    glPointParameterfv_PACKED *packed = mock_expect(glPointParameterfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPointParameterfv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glPointParameterx(pname, param) { \
    mock_push(pack_glPointParameterx(NULL, pname, param)); \
}
#define test_glPointParameterx(_pname, _param) { \
    glPointParameterx_PACKED *packed = mock_expect(glPointParameterx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param != _param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPointParameterx(0x%04X, %d);\n", _pname, _param); \
        } \
    } \
}
#define emit_glPointParameterxv(pname, params) { \
    mock_push(pack_glPointParameterxv(NULL, pname, params)); \
}
#define test_glPointParameterxv(_pname, _params) { \
    glPointParameterxv_PACKED *packed = mock_expect(glPointParameterxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPointParameterxv(0x%04X, %p);\n", _pname, _params); \
        } \
    } \
}
#define emit_glPointSize(size) { \
    mock_push(pack_glPointSize(NULL, size)); \
}
#define test_glPointSize(_size) { \
    glPointSize_PACKED *packed = mock_expect(glPointSize); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.size - _size >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPointSize(%0.2f);\n", _size); \
        } \
    } \
}
#define emit_glPointSizePointerOES(type, stride, pointer) { \
    mock_push(pack_glPointSizePointerOES(NULL, type, stride, pointer)); \
}
#define test_glPointSizePointerOES(_type, _stride, _pointer) { \
    glPointSizePointerOES_PACKED *packed = mock_expect(glPointSizePointerOES); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.type != _type) { \
            match = 0; \
        } \
        if (packed->args.stride != _stride) { \
            match = 0; \
        } \
        a = packed->args.pointer, b = _pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pointer)) != 0))) { \
            printf("  ERROR: arg mismatch: pointer\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pointer)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pointer)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPointSizePointerOES(0x%04X, %d, %p);\n", _type, _stride, _pointer); \
        } \
    } \
}
#define emit_glPointSizex(size) { \
    mock_push(pack_glPointSizex(NULL, size)); \
}
#define test_glPointSizex(_size) { \
    glPointSizex_PACKED *packed = mock_expect(glPointSizex); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.size != _size) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPointSizex(%d);\n", _size); \
        } \
    } \
}
#define emit_glPolygonOffset(factor, units) { \
    mock_push(pack_glPolygonOffset(NULL, factor, units)); \
}
#define test_glPolygonOffset(_factor, _units) { \
    glPolygonOffset_PACKED *packed = mock_expect(glPolygonOffset); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.factor - _factor >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.units - _units >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPolygonOffset(%0.2f, %0.2f);\n", _factor, _units); \
        } \
    } \
}
#define emit_glPolygonOffsetx(factor, units) { \
    mock_push(pack_glPolygonOffsetx(NULL, factor, units)); \
}
#define test_glPolygonOffsetx(_factor, _units) { \
    glPolygonOffsetx_PACKED *packed = mock_expect(glPolygonOffsetx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.factor != _factor) { \
            match = 0; \
        } \
        if (packed->args.units != _units) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPolygonOffsetx(%d, %d);\n", _factor, _units); \
        } \
    } \
}
#define emit_glPopMatrix() { \
    mock_push(pack_glPopMatrix(NULL)); \
}
#define test_glPopMatrix() { \
    glPopMatrix_PACKED *packed = mock_expect(glPopMatrix); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glPushMatrix() { \
    mock_push(pack_glPushMatrix(NULL)); \
}
#define test_glPushMatrix() { \
    glPushMatrix_PACKED *packed = mock_expect(glPushMatrix); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glReadPixels(x, y, width, height, format, type, pixels) { \
    mock_push(pack_glReadPixels(NULL, x, y, width, height, format, type, pixels)); \
}
#define test_glReadPixels(_x, _y, _width, _height, _format, _type, _pixels) { \
    glReadPixels_PACKED *packed = mock_expect(glReadPixels); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.x != _x) { \
            match = 0; \
        } \
        if (packed->args.y != _y) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (packed->args.format != _format) { \
            match = 0; \
        } \
        if (packed->args.type != _type) { \
            match = 0; \
        } \
        a = packed->args.pixels, b = _pixels; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pixels)) != 0))) { \
            printf("  ERROR: arg mismatch: pixels\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pixels)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pixels)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glReadPixels(%d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", _x, _y, _width, _height, _format, _type, _pixels); \
        } \
    } \
}
#define emit_glRotatef(angle, x, y, z) { \
    mock_push(pack_glRotatef(NULL, angle, x, y, z)); \
}
#define test_glRotatef(_angle, _x, _y, _z) { \
    glRotatef_PACKED *packed = mock_expect(glRotatef); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.angle - _angle >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.x - _x >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.y - _y >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.z - _z >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glRotatef(%0.2f, %0.2f, %0.2f, %0.2f);\n", _angle, _x, _y, _z); \
        } \
    } \
}
#define emit_glRotatex(angle, x, y, z) { \
    mock_push(pack_glRotatex(NULL, angle, x, y, z)); \
}
#define test_glRotatex(_angle, _x, _y, _z) { \
    glRotatex_PACKED *packed = mock_expect(glRotatex); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.angle != _angle) { \
            match = 0; \
        } \
        if (packed->args.x != _x) { \
            match = 0; \
        } \
        if (packed->args.y != _y) { \
            match = 0; \
        } \
        if (packed->args.z != _z) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glRotatex(%d, %d, %d, %d);\n", _angle, _x, _y, _z); \
        } \
    } \
}
#define emit_glSampleCoverage(value, invert) { \
    mock_push(pack_glSampleCoverage(NULL, value, invert)); \
}
#define test_glSampleCoverage(_value, _invert) { \
    glSampleCoverage_PACKED *packed = mock_expect(glSampleCoverage); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.value != _value) { \
            match = 0; \
        } \
        if (packed->args.invert != _invert) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glSampleCoverage(%0.2f, %d);\n", _value, _invert); \
        } \
    } \
}
#define emit_glSampleCoveragex(value, invert) { \
    mock_push(pack_glSampleCoveragex(NULL, value, invert)); \
}
#define test_glSampleCoveragex(_value, _invert) { \
    glSampleCoveragex_PACKED *packed = mock_expect(glSampleCoveragex); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.value != _value) { \
            match = 0; \
        } \
        if (packed->args.invert != _invert) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glSampleCoveragex(%d, %d);\n", _value, _invert); \
        } \
    } \
}
#define emit_glScalef(x, y, z) { \
    mock_push(pack_glScalef(NULL, x, y, z)); \
}
#define test_glScalef(_x, _y, _z) { \
    glScalef_PACKED *packed = mock_expect(glScalef); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.x - _x >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.y - _y >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.z - _z >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glScalef(%0.2f, %0.2f, %0.2f);\n", _x, _y, _z); \
        } \
    } \
}
#define emit_glScalex(x, y, z) { \
    mock_push(pack_glScalex(NULL, x, y, z)); \
}
#define test_glScalex(_x, _y, _z) { \
    glScalex_PACKED *packed = mock_expect(glScalex); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.x != _x) { \
            match = 0; \
        } \
        if (packed->args.y != _y) { \
            match = 0; \
        } \
        if (packed->args.z != _z) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glScalex(%d, %d, %d);\n", _x, _y, _z); \
        } \
    } \
}
#define emit_glScissor(x, y, width, height) { \
    mock_push(pack_glScissor(NULL, x, y, width, height)); \
}
#define test_glScissor(_x, _y, _width, _height) { \
    glScissor_PACKED *packed = mock_expect(glScissor); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.x != _x) { \
            match = 0; \
        } \
        if (packed->args.y != _y) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glScissor(%d, %d, %d, %d);\n", _x, _y, _width, _height); \
        } \
    } \
}
#define emit_glShadeModel(mode) { \
    mock_push(pack_glShadeModel(NULL, mode)); \
}
#define test_glShadeModel(_mode) { \
    glShadeModel_PACKED *packed = mock_expect(glShadeModel); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.mode != _mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glShadeModel(0x%04X);\n", _mode); \
        } \
    } \
}
#define emit_glStencilFunc(func, ref, mask) { \
    mock_push(pack_glStencilFunc(NULL, func, ref, mask)); \
}
#define test_glStencilFunc(_func, _ref, _mask) { \
    glStencilFunc_PACKED *packed = mock_expect(glStencilFunc); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.func != _func) { \
            match = 0; \
        } \
        if (packed->args.ref != _ref) { \
            match = 0; \
        } \
        if (packed->args.mask != _mask) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glStencilFunc(0x%04X, %d, %u);\n", _func, _ref, _mask); \
        } \
    } \
}
#define emit_glStencilMask(mask) { \
    mock_push(pack_glStencilMask(NULL, mask)); \
}
#define test_glStencilMask(_mask) { \
    glStencilMask_PACKED *packed = mock_expect(glStencilMask); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.mask != _mask) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glStencilMask(%u);\n", _mask); \
        } \
    } \
}
#define emit_glStencilOp(fail, zfail, zpass) { \
    mock_push(pack_glStencilOp(NULL, fail, zfail, zpass)); \
}
#define test_glStencilOp(_fail, _zfail, _zpass) { \
    glStencilOp_PACKED *packed = mock_expect(glStencilOp); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.fail != _fail) { \
            match = 0; \
        } \
        if (packed->args.zfail != _zfail) { \
            match = 0; \
        } \
        if (packed->args.zpass != _zpass) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glStencilOp(0x%04X, 0x%04X, 0x%04X);\n", _fail, _zfail, _zpass); \
        } \
    } \
}
#define emit_glTexCoordPointer(size, type, stride, pointer) { \
    mock_push(pack_glTexCoordPointer(NULL, size, type, stride, pointer)); \
}
#define test_glTexCoordPointer(_size, _type, _stride, _pointer) { \
    glTexCoordPointer_PACKED *packed = mock_expect(glTexCoordPointer); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.size != _size) { \
            match = 0; \
        } \
        if (packed->args.type != _type) { \
            match = 0; \
        } \
        if (packed->args.stride != _stride) { \
            match = 0; \
        } \
        a = packed->args.pointer, b = _pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pointer)) != 0))) { \
            printf("  ERROR: arg mismatch: pointer\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pointer)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pointer)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexCoordPointer(%d, 0x%04X, %d, %p);\n", _size, _type, _stride, _pointer); \
        } \
    } \
}
#define emit_glTexEnvf(target, pname, param) { \
    mock_push(pack_glTexEnvf(NULL, target, pname, param)); \
}
#define test_glTexEnvf(_target, _pname, _param) { \
    glTexEnvf_PACKED *packed = mock_expect(glTexEnvf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param - _param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexEnvf(0x%04X, 0x%04X, %0.2f);\n", _target, _pname, _param); \
        } \
    } \
}
#define emit_glTexEnvfv(target, pname, params) { \
    mock_push(pack_glTexEnvfv(NULL, target, pname, params)); \
}
#define test_glTexEnvfv(_target, _pname, _params) { \
    glTexEnvfv_PACKED *packed = mock_expect(glTexEnvfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexEnvfv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glTexEnvi(target, pname, param) { \
    mock_push(pack_glTexEnvi(NULL, target, pname, param)); \
}
#define test_glTexEnvi(_target, _pname, _param) { \
    glTexEnvi_PACKED *packed = mock_expect(glTexEnvi); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param != _param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexEnvi(0x%04X, 0x%04X, %d);\n", _target, _pname, _param); \
        } \
    } \
}
#define emit_glTexEnviv(target, pname, params) { \
    mock_push(pack_glTexEnviv(NULL, target, pname, params)); \
}
#define test_glTexEnviv(_target, _pname, _params) { \
    glTexEnviv_PACKED *packed = mock_expect(glTexEnviv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexEnviv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glTexEnvx(target, pname, param) { \
    mock_push(pack_glTexEnvx(NULL, target, pname, param)); \
}
#define test_glTexEnvx(_target, _pname, _param) { \
    glTexEnvx_PACKED *packed = mock_expect(glTexEnvx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param != _param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexEnvx(0x%04X, 0x%04X, %d);\n", _target, _pname, _param); \
        } \
    } \
}
#define emit_glTexEnvxv(target, pname, params) { \
    mock_push(pack_glTexEnvxv(NULL, target, pname, params)); \
}
#define test_glTexEnvxv(_target, _pname, _params) { \
    glTexEnvxv_PACKED *packed = mock_expect(glTexEnvxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexEnvxv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels) { \
    mock_push(pack_glTexImage2D(NULL, target, level, internalformat, width, height, border, format, type, pixels)); \
}
#define test_glTexImage2D(_target, _level, _internalformat, _width, _height, _border, _format, _type, _pixels) { \
    glTexImage2D_PACKED *packed = mock_expect(glTexImage2D); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.level != _level) { \
            match = 0; \
        } \
        if (packed->args.internalformat != _internalformat) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (packed->args.border != _border) { \
            match = 0; \
        } \
        if (packed->args.format != _format) { \
            match = 0; \
        } \
        if (packed->args.type != _type) { \
            match = 0; \
        } \
        a = packed->args.pixels, b = _pixels; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pixels)) != 0))) { \
            printf("  ERROR: arg mismatch: pixels\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pixels)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pixels)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", _target, _level, _internalformat, _width, _height, _border, _format, _type, _pixels); \
        } \
    } \
}
#define emit_glTexParameterf(target, pname, param) { \
    mock_push(pack_glTexParameterf(NULL, target, pname, param)); \
}
#define test_glTexParameterf(_target, _pname, _param) { \
    glTexParameterf_PACKED *packed = mock_expect(glTexParameterf); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param - _param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexParameterf(0x%04X, 0x%04X, %0.2f);\n", _target, _pname, _param); \
        } \
    } \
}
#define emit_glTexParameterfv(target, pname, params) { \
    mock_push(pack_glTexParameterfv(NULL, target, pname, params)); \
}
#define test_glTexParameterfv(_target, _pname, _params) { \
    glTexParameterfv_PACKED *packed = mock_expect(glTexParameterfv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (mock_fcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexParameterfv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glTexParameteri(target, pname, param) { \
    mock_push(pack_glTexParameteri(NULL, target, pname, param)); \
}
#define test_glTexParameteri(_target, _pname, _param) { \
    glTexParameteri_PACKED *packed = mock_expect(glTexParameteri); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param != _param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexParameteri(0x%04X, 0x%04X, %d);\n", _target, _pname, _param); \
        } \
    } \
}
#define emit_glTexParameteriv(target, pname, params) { \
    mock_push(pack_glTexParameteriv(NULL, target, pname, params)); \
}
#define test_glTexParameteriv(_target, _pname, _params) { \
    glTexParameteriv_PACKED *packed = mock_expect(glTexParameteriv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexParameteriv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glTexParameterx(target, pname, param) { \
    mock_push(pack_glTexParameterx(NULL, target, pname, param)); \
}
#define test_glTexParameterx(_target, _pname, _param) { \
    glTexParameterx_PACKED *packed = mock_expect(glTexParameterx); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        if (packed->args.param != _param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexParameterx(0x%04X, 0x%04X, %d);\n", _target, _pname, _param); \
        } \
    } \
}
#define emit_glTexParameterxv(target, pname, params) { \
    mock_push(pack_glTexParameterxv(NULL, target, pname, params)); \
}
#define test_glTexParameterxv(_target, _pname, _params) { \
    glTexParameterxv_PACKED *packed = mock_expect(glTexParameterxv); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexParameterxv(0x%04X, 0x%04X, %p);\n", _target, _pname, _params); \
        } \
    } \
}
#define emit_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels) { \
    mock_push(pack_glTexSubImage2D(NULL, target, level, xoffset, yoffset, width, height, format, type, pixels)); \
}
#define test_glTexSubImage2D(_target, _level, _xoffset, _yoffset, _width, _height, _format, _type, _pixels) { \
    glTexSubImage2D_PACKED *packed = mock_expect(glTexSubImage2D); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.target != _target) { \
            match = 0; \
        } \
        if (packed->args.level != _level) { \
            match = 0; \
        } \
        if (packed->args.xoffset != _xoffset) { \
            match = 0; \
        } \
        if (packed->args.yoffset != _yoffset) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (packed->args.format != _format) { \
            match = 0; \
        } \
        if (packed->args.type != _type) { \
            match = 0; \
        } \
        a = packed->args.pixels, b = _pixels; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pixels)) != 0))) { \
            printf("  ERROR: arg mismatch: pixels\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pixels)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pixels)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", _target, _level, _xoffset, _yoffset, _width, _height, _format, _type, _pixels); \
        } \
    } \
}
#define emit_glTranslatef(x, y, z) { \
    mock_push(pack_glTranslatef(NULL, x, y, z)); \
}
#define test_glTranslatef(_x, _y, _z) { \
    glTranslatef_PACKED *packed = mock_expect(glTranslatef); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.x - _x >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.y - _y >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.z - _z >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTranslatef(%0.2f, %0.2f, %0.2f);\n", _x, _y, _z); \
        } \
    } \
}
#define emit_glTranslatex(x, y, z) { \
    mock_push(pack_glTranslatex(NULL, x, y, z)); \
}
#define test_glTranslatex(_x, _y, _z) { \
    glTranslatex_PACKED *packed = mock_expect(glTranslatex); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.x != _x) { \
            match = 0; \
        } \
        if (packed->args.y != _y) { \
            match = 0; \
        } \
        if (packed->args.z != _z) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glTranslatex(%d, %d, %d);\n", _x, _y, _z); \
        } \
    } \
}
#define emit_glVertexPointer(size, type, stride, pointer) { \
    mock_push(pack_glVertexPointer(NULL, size, type, stride, pointer)); \
}
#define test_glVertexPointer(_size, _type, _stride, _pointer) { \
    glVertexPointer_PACKED *packed = mock_expect(glVertexPointer); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.size != _size) { \
            match = 0; \
        } \
        if (packed->args.type != _type) { \
            match = 0; \
        } \
        if (packed->args.stride != _stride) { \
            match = 0; \
        } \
        a = packed->args.pointer, b = _pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pointer)) != 0))) { \
            printf("  ERROR: arg mismatch: pointer\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pointer)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pointer)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glVertexPointer(%d, 0x%04X, %d, %p);\n", _size, _type, _stride, _pointer); \
        } \
    } \
}
#define emit_glViewport(x, y, width, height) { \
    mock_push(pack_glViewport(NULL, x, y, width, height)); \
}
#define test_glViewport(_x, _y, _width, _height) { \
    glViewport_PACKED *packed = mock_expect(glViewport); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.x != _x) { \
            match = 0; \
        } \
        if (packed->args.y != _y) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glViewport(%d, %d, %d, %d);\n", _x, _y, _width, _height); \
        } \
    } \
}
#define emit_glXAssociateDMPbufferSGIX(dpy, pbuffer, params, dmbuffer) { \
    mock_push(pack_glXAssociateDMPbufferSGIX(NULL, dpy, pbuffer, params, dmbuffer)); \
}
#define test_glXAssociateDMPbufferSGIX(_dpy, _pbuffer, _params, _dmbuffer) { \
    glXAssociateDMPbufferSGIX_PACKED *packed = mock_expect(glXAssociateDMPbufferSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.pbuffer != _pbuffer) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_params)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_params)); \
            match = 0; \
        } \
        if (packed->args.dmbuffer != _dmbuffer) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXAssociateDMPbufferSGIX(%p, %p, %p, %p);\n", _dpy, _pbuffer, _params, _dmbuffer); \
        } \
    } \
}
#define emit_glXBindChannelToWindowSGIX(display, screen, channel, window) { \
    mock_push(pack_glXBindChannelToWindowSGIX(NULL, display, screen, channel, window)); \
}
#define test_glXBindChannelToWindowSGIX(_display, _screen, _channel, _window) { \
    glXBindChannelToWindowSGIX_PACKED *packed = mock_expect(glXBindChannelToWindowSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_display)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_display)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (packed->args.channel != _channel) { \
            match = 0; \
        } \
        if (packed->args.window != _window) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXBindChannelToWindowSGIX(%p, %d, %d, %lu);\n", _display, _screen, _channel, _window); \
        } \
    } \
}
#define emit_glXBindHyperpipeSGIX(dpy, hpId) { \
    mock_push(pack_glXBindHyperpipeSGIX(NULL, dpy, hpId)); \
}
#define test_glXBindHyperpipeSGIX(_dpy, _hpId) { \
    glXBindHyperpipeSGIX_PACKED *packed = mock_expect(glXBindHyperpipeSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.hpId != _hpId) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXBindHyperpipeSGIX(%p, %d);\n", _dpy, _hpId); \
        } \
    } \
}
#define emit_glXBindSwapBarrierNV(dpy, group, barrier) { \
    mock_push(pack_glXBindSwapBarrierNV(NULL, dpy, group, barrier)); \
}
#define test_glXBindSwapBarrierNV(_dpy, _group, _barrier) { \
    glXBindSwapBarrierNV_PACKED *packed = mock_expect(glXBindSwapBarrierNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.group != _group) { \
            match = 0; \
        } \
        if (packed->args.barrier != _barrier) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXBindSwapBarrierNV(%p, %u, %u);\n", _dpy, _group, _barrier); \
        } \
    } \
}
#define emit_glXBindSwapBarrierSGIX(dpy, drawable, barrier) { \
    mock_push(pack_glXBindSwapBarrierSGIX(NULL, dpy, drawable, barrier)); \
}
#define test_glXBindSwapBarrierSGIX(_dpy, _drawable, _barrier) { \
    glXBindSwapBarrierSGIX_PACKED *packed = mock_expect(glXBindSwapBarrierSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.barrier != _barrier) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXBindSwapBarrierSGIX(%p, %d, %d);\n", _dpy, _drawable, _barrier); \
        } \
    } \
}
#define emit_glXBindTexImageEXT(dpy, drawable, buffer, attrib_list) { \
    mock_push(pack_glXBindTexImageEXT(NULL, dpy, drawable, buffer, attrib_list)); \
}
#define test_glXBindTexImageEXT(_dpy, _drawable, _buffer, _attrib_list) { \
    glXBindTexImageEXT_PACKED *packed = mock_expect(glXBindTexImageEXT); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.buffer != _buffer) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attrib_list)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXBindTexImageEXT(%p, %d, %d, %p);\n", _dpy, _drawable, _buffer, _attrib_list); \
        } \
    } \
}
#define emit_glXBindVideoCaptureDeviceNV(dpy, video_capture_slot, device) { \
    mock_push(pack_glXBindVideoCaptureDeviceNV(NULL, dpy, video_capture_slot, device)); \
}
#define test_glXBindVideoCaptureDeviceNV(_dpy, _video_capture_slot, _device) { \
    glXBindVideoCaptureDeviceNV_PACKED *packed = mock_expect(glXBindVideoCaptureDeviceNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.video_capture_slot != _video_capture_slot) { \
            match = 0; \
        } \
        if (packed->args.device != _device) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXBindVideoCaptureDeviceNV(%p, %u, %p);\n", _dpy, _video_capture_slot, _device); \
        } \
    } \
}
#define emit_glXBindVideoDeviceNV(dpy, video_slot, video_device, attrib_list) { \
    mock_push(pack_glXBindVideoDeviceNV(NULL, dpy, video_slot, video_device, attrib_list)); \
}
#define test_glXBindVideoDeviceNV(_dpy, _video_slot, _video_device, _attrib_list) { \
    glXBindVideoDeviceNV_PACKED *packed = mock_expect(glXBindVideoDeviceNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.video_slot != _video_slot) { \
            match = 0; \
        } \
        if (packed->args.video_device != _video_device) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attrib_list)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXBindVideoDeviceNV(%p, %u, %u, %p);\n", _dpy, _video_slot, _video_device, _attrib_list); \
        } \
    } \
}
#define emit_glXBindVideoImageNV(dpy, VideoDevice, pbuf, iVideoBuffer) { \
    mock_push(pack_glXBindVideoImageNV(NULL, dpy, VideoDevice, pbuf, iVideoBuffer)); \
}
#define test_glXBindVideoImageNV(_dpy, _VideoDevice, _pbuf, _iVideoBuffer) { \
    glXBindVideoImageNV_PACKED *packed = mock_expect(glXBindVideoImageNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.VideoDevice != _VideoDevice) { \
            match = 0; \
        } \
        if (packed->args.pbuf != _pbuf) { \
            match = 0; \
        } \
        if (packed->args.iVideoBuffer != _iVideoBuffer) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXBindVideoImageNV(%p, %p, %p, %d);\n", _dpy, _VideoDevice, _pbuf, _iVideoBuffer); \
        } \
    } \
}
#define emit_glXChangeDrawableAttributes(drawable) { \
    mock_push(pack_glXChangeDrawableAttributes(NULL, drawable)); \
}
#define test_glXChangeDrawableAttributes(_drawable) { \
    glXChangeDrawableAttributes_PACKED *packed = mock_expect(glXChangeDrawableAttributes); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXChangeDrawableAttributes(%"PRIu32");\n", _drawable); \
        } \
    } \
}
#define emit_glXChangeDrawableAttributesSGIX(drawable) { \
    mock_push(pack_glXChangeDrawableAttributesSGIX(NULL, drawable)); \
}
#define test_glXChangeDrawableAttributesSGIX(_drawable) { \
    glXChangeDrawableAttributesSGIX_PACKED *packed = mock_expect(glXChangeDrawableAttributesSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXChangeDrawableAttributesSGIX(%"PRIu32");\n", _drawable); \
        } \
    } \
}
#define emit_glXChannelRectSGIX(display, screen, channel, x, y, w, h) { \
    mock_push(pack_glXChannelRectSGIX(NULL, display, screen, channel, x, y, w, h)); \
}
#define test_glXChannelRectSGIX(_display, _screen, _channel, _x, _y, _w, _h) { \
    glXChannelRectSGIX_PACKED *packed = mock_expect(glXChannelRectSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_display)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_display)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (packed->args.channel != _channel) { \
            match = 0; \
        } \
        if (packed->args.x != _x) { \
            match = 0; \
        } \
        if (packed->args.y != _y) { \
            match = 0; \
        } \
        if (packed->args.w != _w) { \
            match = 0; \
        } \
        if (packed->args.h != _h) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXChannelRectSGIX(%p, %d, %d, %d, %d, %d, %d);\n", _display, _screen, _channel, _x, _y, _w, _h); \
        } \
    } \
}
#define emit_glXChannelRectSyncSGIX(display, screen, channel, synctype) { \
    mock_push(pack_glXChannelRectSyncSGIX(NULL, display, screen, channel, synctype)); \
}
#define test_glXChannelRectSyncSGIX(_display, _screen, _channel, _synctype) { \
    glXChannelRectSyncSGIX_PACKED *packed = mock_expect(glXChannelRectSyncSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_display)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_display)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (packed->args.channel != _channel) { \
            match = 0; \
        } \
        if (packed->args.synctype != _synctype) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXChannelRectSyncSGIX(%p, %d, %d, 0x%04X);\n", _display, _screen, _channel, _synctype); \
        } \
    } \
}
#define emit_glXChooseFBConfig(dpy, screen, attrib_list, nelements) { \
    mock_push(pack_glXChooseFBConfig(NULL, dpy, screen, attrib_list, nelements)); \
}
#define test_glXChooseFBConfig(_dpy, _screen, _attrib_list, _nelements) { \
    glXChooseFBConfig_PACKED *packed = mock_expect(glXChooseFBConfig); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attrib_list)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        a = packed->args.nelements, b = _nelements; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_nelements)) != 0))) { \
            printf("  ERROR: arg mismatch: nelements\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_nelements)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_nelements)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXChooseFBConfig(%p, %d, %p, %p);\n", _dpy, _screen, _attrib_list, _nelements); \
        } \
    } \
}
#define emit_glXChooseFBConfigSGIX(dpy, screen, attrib_list, nelements) { \
    mock_push(pack_glXChooseFBConfigSGIX(NULL, dpy, screen, attrib_list, nelements)); \
}
#define test_glXChooseFBConfigSGIX(_dpy, _screen, _attrib_list, _nelements) { \
    glXChooseFBConfigSGIX_PACKED *packed = mock_expect(glXChooseFBConfigSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attrib_list)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        a = packed->args.nelements, b = _nelements; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_nelements)) != 0))) { \
            printf("  ERROR: arg mismatch: nelements\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_nelements)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_nelements)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXChooseFBConfigSGIX(%p, %d, %p, %p);\n", _dpy, _screen, _attrib_list, _nelements); \
        } \
    } \
}
#define emit_glXChooseVisual(dpy, screen, attribList) { \
    mock_push(pack_glXChooseVisual(NULL, dpy, screen, attribList)); \
}
#define test_glXChooseVisual(_dpy, _screen, _attribList) { \
    glXChooseVisual_PACKED *packed = mock_expect(glXChooseVisual); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.attribList, b = _attribList; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attribList)) != 0))) { \
            printf("  ERROR: arg mismatch: attribList\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attribList)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attribList)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXChooseVisual(%p, %d, %p);\n", _dpy, _screen, _attribList); \
        } \
    } \
}
#define emit_glXClientInfo() { \
    mock_push(pack_glXClientInfo(NULL)); \
}
#define test_glXClientInfo() { \
    glXClientInfo_PACKED *packed = mock_expect(glXClientInfo); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXCopyContext(dpy, src, dst, mask) { \
    mock_push(pack_glXCopyContext(NULL, dpy, src, dst, mask)); \
}
#define test_glXCopyContext(_dpy, _src, _dst, _mask) { \
    glXCopyContext_PACKED *packed = mock_expect(glXCopyContext); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.src != _src) { \
            match = 0; \
        } \
        if (packed->args.dst != _dst) { \
            match = 0; \
        } \
        if (packed->args.mask != _mask) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCopyContext(%p, %p, %p, %lu);\n", _dpy, _src, _dst, _mask); \
        } \
    } \
}
#define emit_glXCopyImageSubDataNV(dpy, srcCtx, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstCtx, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth) { \
    mock_push(pack_glXCopyImageSubDataNV(NULL, dpy, srcCtx, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstCtx, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth)); \
}
#define test_glXCopyImageSubDataNV(_dpy, _srcCtx, _srcName, _srcTarget, _srcLevel, _srcX, _srcY, _srcZ, _dstCtx, _dstName, _dstTarget, _dstLevel, _dstX, _dstY, _dstZ, _width, _height, _depth) { \
    glXCopyImageSubDataNV_PACKED *packed = mock_expect(glXCopyImageSubDataNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.srcCtx != _srcCtx) { \
            match = 0; \
        } \
        if (packed->args.srcName != _srcName) { \
            match = 0; \
        } \
        if (packed->args.srcTarget != _srcTarget) { \
            match = 0; \
        } \
        if (packed->args.srcLevel != _srcLevel) { \
            match = 0; \
        } \
        if (packed->args.srcX != _srcX) { \
            match = 0; \
        } \
        if (packed->args.srcY != _srcY) { \
            match = 0; \
        } \
        if (packed->args.srcZ != _srcZ) { \
            match = 0; \
        } \
        if (packed->args.dstCtx != _dstCtx) { \
            match = 0; \
        } \
        if (packed->args.dstName != _dstName) { \
            match = 0; \
        } \
        if (packed->args.dstTarget != _dstTarget) { \
            match = 0; \
        } \
        if (packed->args.dstLevel != _dstLevel) { \
            match = 0; \
        } \
        if (packed->args.dstX != _dstX) { \
            match = 0; \
        } \
        if (packed->args.dstY != _dstY) { \
            match = 0; \
        } \
        if (packed->args.dstZ != _dstZ) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (packed->args.depth != _depth) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCopyImageSubDataNV(%p, %p, %u, 0x%04X, %d, %d, %d, %d, %p, %u, 0x%04X, %d, %d, %d, %d, %d, %d, %d);\n", _dpy, _srcCtx, _srcName, _srcTarget, _srcLevel, _srcX, _srcY, _srcZ, _dstCtx, _dstName, _dstTarget, _dstLevel, _dstX, _dstY, _dstZ, _width, _height, _depth); \
        } \
    } \
}
#define emit_glXCopySubBufferMESA(dpy, drawable, x, y, width, height) { \
    mock_push(pack_glXCopySubBufferMESA(NULL, dpy, drawable, x, y, width, height)); \
}
#define test_glXCopySubBufferMESA(_dpy, _drawable, _x, _y, _width, _height) { \
    glXCopySubBufferMESA_PACKED *packed = mock_expect(glXCopySubBufferMESA); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.x != _x) { \
            match = 0; \
        } \
        if (packed->args.y != _y) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCopySubBufferMESA(%p, %d, %d, %d, %d, %d);\n", _dpy, _drawable, _x, _y, _width, _height); \
        } \
    } \
}
#define emit_glXCreateContext(dpy, vis, shareList, direct) { \
    mock_push(pack_glXCreateContext(NULL, dpy, vis, shareList, direct)); \
}
#define test_glXCreateContext(_dpy, _vis, _shareList, _direct) { \
    glXCreateContext_PACKED *packed = mock_expect(glXCreateContext); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.vis, b = _vis; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_vis)) != 0))) { \
            printf("  ERROR: arg mismatch: vis\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_vis)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_vis)); \
            match = 0; \
        } \
        if (packed->args.shareList != _shareList) { \
            match = 0; \
        } \
        if (packed->args.direct != _direct) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreateContext(%p, %p, %p, %d);\n", _dpy, _vis, _shareList, _direct); \
        } \
    } \
}
#define emit_glXCreateContextAttribsARB(dpy, config, share_context, direct, attrib_list) { \
    mock_push(pack_glXCreateContextAttribsARB(NULL, dpy, config, share_context, direct, attrib_list)); \
}
#define test_glXCreateContextAttribsARB(_dpy, _config, _share_context, _direct, _attrib_list) { \
    glXCreateContextAttribsARB_PACKED *packed = mock_expect(glXCreateContextAttribsARB); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (packed->args.share_context != _share_context) { \
            match = 0; \
        } \
        if (packed->args.direct != _direct) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attrib_list)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreateContextAttribsARB(%p, %p, %p, %d, %p);\n", _dpy, _config, _share_context, _direct, _attrib_list); \
        } \
    } \
}
#define emit_glXCreateContextWithConfigSGIX(dpy, config, render_type, share_list, direct) { \
    mock_push(pack_glXCreateContextWithConfigSGIX(NULL, dpy, config, render_type, share_list, direct)); \
}
#define test_glXCreateContextWithConfigSGIX(_dpy, _config, _render_type, _share_list, _direct) { \
    glXCreateContextWithConfigSGIX_PACKED *packed = mock_expect(glXCreateContextWithConfigSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (packed->args.render_type != _render_type) { \
            match = 0; \
        } \
        if (packed->args.share_list != _share_list) { \
            match = 0; \
        } \
        if (packed->args.direct != _direct) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreateContextWithConfigSGIX(%p, %p, %d, %p, %d);\n", _dpy, _config, _render_type, _share_list, _direct); \
        } \
    } \
}
#define emit_glXCreateGLXPbufferSGIX(dpy, config, width, height, attrib_list) { \
    mock_push(pack_glXCreateGLXPbufferSGIX(NULL, dpy, config, width, height, attrib_list)); \
}
#define test_glXCreateGLXPbufferSGIX(_dpy, _config, _width, _height, _attrib_list) { \
    glXCreateGLXPbufferSGIX_PACKED *packed = mock_expect(glXCreateGLXPbufferSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (packed->args.width != _width) { \
            match = 0; \
        } \
        if (packed->args.height != _height) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attrib_list)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreateGLXPbufferSGIX(%p, %p, %u, %u, %p);\n", _dpy, _config, _width, _height, _attrib_list); \
        } \
    } \
}
#define emit_glXCreateGLXPixmap(dpy, visual, pixmap) { \
    mock_push(pack_glXCreateGLXPixmap(NULL, dpy, visual, pixmap)); \
}
#define test_glXCreateGLXPixmap(_dpy, _visual, _pixmap) { \
    glXCreateGLXPixmap_PACKED *packed = mock_expect(glXCreateGLXPixmap); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.visual, b = _visual; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_visual)) != 0))) { \
            printf("  ERROR: arg mismatch: visual\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_visual)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_visual)); \
            match = 0; \
        } \
        if (packed->args.pixmap != _pixmap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreateGLXPixmap(%p, %p, %lu);\n", _dpy, _visual, _pixmap); \
        } \
    } \
}
#define emit_glXCreateGLXPixmapMESA(dpy, visual, pixmap, cmap) { \
    mock_push(pack_glXCreateGLXPixmapMESA(NULL, dpy, visual, pixmap, cmap)); \
}
#define test_glXCreateGLXPixmapMESA(_dpy, _visual, _pixmap, _cmap) { \
    glXCreateGLXPixmapMESA_PACKED *packed = mock_expect(glXCreateGLXPixmapMESA); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.visual, b = _visual; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_visual)) != 0))) { \
            printf("  ERROR: arg mismatch: visual\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_visual)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_visual)); \
            match = 0; \
        } \
        if (packed->args.pixmap != _pixmap) { \
            match = 0; \
        } \
        if (packed->args.cmap != _cmap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreateGLXPixmapMESA(%p, %p, %lu, %lu);\n", _dpy, _visual, _pixmap, _cmap); \
        } \
    } \
}
#define emit_glXCreateGLXPixmapWithConfigSGIX(dpy, config, pixmap) { \
    mock_push(pack_glXCreateGLXPixmapWithConfigSGIX(NULL, dpy, config, pixmap)); \
}
#define test_glXCreateGLXPixmapWithConfigSGIX(_dpy, _config, _pixmap) { \
    glXCreateGLXPixmapWithConfigSGIX_PACKED *packed = mock_expect(glXCreateGLXPixmapWithConfigSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (packed->args.pixmap != _pixmap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreateGLXPixmapWithConfigSGIX(%p, %p, %lu);\n", _dpy, _config, _pixmap); \
        } \
    } \
}
#define emit_glXCreateGLXVideoSourceSGIX(display, screen, server, path, nodeClass, drainNode) { \
    mock_push(pack_glXCreateGLXVideoSourceSGIX(NULL, display, screen, server, path, nodeClass, drainNode)); \
}
#define test_glXCreateGLXVideoSourceSGIX(_display, _screen, _server, _path, _nodeClass, _drainNode) { \
    glXCreateGLXVideoSourceSGIX_PACKED *packed = mock_expect(glXCreateGLXVideoSourceSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_display)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_display)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (packed->args.server != _server) { \
            match = 0; \
        } \
        if (packed->args.path != _path) { \
            match = 0; \
        } \
        if (packed->args.nodeClass != _nodeClass) { \
            match = 0; \
        } \
        if (packed->args.drainNode != _drainNode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreateGLXVideoSourceSGIX(%p, %d, %p, %p, %d, %p);\n", _display, _screen, _server, _path, _nodeClass, _drainNode); \
        } \
    } \
}
#define emit_glXCreateNewContext(dpy, config, render_type, share_list, direct) { \
    mock_push(pack_glXCreateNewContext(NULL, dpy, config, render_type, share_list, direct)); \
}
#define test_glXCreateNewContext(_dpy, _config, _render_type, _share_list, _direct) { \
    glXCreateNewContext_PACKED *packed = mock_expect(glXCreateNewContext); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (packed->args.render_type != _render_type) { \
            match = 0; \
        } \
        if (packed->args.share_list != _share_list) { \
            match = 0; \
        } \
        if (packed->args.direct != _direct) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreateNewContext(%p, %p, %d, %p, %d);\n", _dpy, _config, _render_type, _share_list, _direct); \
        } \
    } \
}
#define emit_glXCreatePbuffer(dpy, config, attrib_list) { \
    mock_push(pack_glXCreatePbuffer(NULL, dpy, config, attrib_list)); \
}
#define test_glXCreatePbuffer(_dpy, _config, _attrib_list) { \
    glXCreatePbuffer_PACKED *packed = mock_expect(glXCreatePbuffer); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attrib_list)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreatePbuffer(%p, %p, %p);\n", _dpy, _config, _attrib_list); \
        } \
    } \
}
#define emit_glXCreatePixmap(dpy, config, pixmap, attrib_list) { \
    mock_push(pack_glXCreatePixmap(NULL, dpy, config, pixmap, attrib_list)); \
}
#define test_glXCreatePixmap(_dpy, _config, _pixmap, _attrib_list) { \
    glXCreatePixmap_PACKED *packed = mock_expect(glXCreatePixmap); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (packed->args.pixmap != _pixmap) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attrib_list)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreatePixmap(%p, %p, %lu, %p);\n", _dpy, _config, _pixmap, _attrib_list); \
        } \
    } \
}
#define emit_glXCreateWindow(dpy, config, win, attrib_list) { \
    mock_push(pack_glXCreateWindow(NULL, dpy, config, win, attrib_list)); \
}
#define test_glXCreateWindow(_dpy, _config, _win, _attrib_list) { \
    glXCreateWindow_PACKED *packed = mock_expect(glXCreateWindow); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (packed->args.win != _win) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attrib_list)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCreateWindow(%p, %p, %lu, %p);\n", _dpy, _config, _win, _attrib_list); \
        } \
    } \
}
#define emit_glXCushionSGI(dpy, window, cushion) { \
    mock_push(pack_glXCushionSGI(NULL, dpy, window, cushion)); \
}
#define test_glXCushionSGI(_dpy, _window, _cushion) { \
    glXCushionSGI_PACKED *packed = mock_expect(glXCushionSGI); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.window != _window) { \
            match = 0; \
        } \
        if (packed->args.cushion - _cushion >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXCushionSGI(%p, %lu, %f);\n", _dpy, _window, _cushion); \
        } \
    } \
}
#define emit_glXDestroyContext(dpy, ctx) { \
    mock_push(pack_glXDestroyContext(NULL, dpy, ctx)); \
}
#define test_glXDestroyContext(_dpy, _ctx) { \
    glXDestroyContext_PACKED *packed = mock_expect(glXDestroyContext); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.ctx != _ctx) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXDestroyContext(%p, %p);\n", _dpy, _ctx); \
        } \
    } \
}
#define emit_glXDestroyGLXPbufferSGIX(dpy, pbuf) { \
    mock_push(pack_glXDestroyGLXPbufferSGIX(NULL, dpy, pbuf)); \
}
#define test_glXDestroyGLXPbufferSGIX(_dpy, _pbuf) { \
    glXDestroyGLXPbufferSGIX_PACKED *packed = mock_expect(glXDestroyGLXPbufferSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.pbuf != _pbuf) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXDestroyGLXPbufferSGIX(%p, %p);\n", _dpy, _pbuf); \
        } \
    } \
}
#define emit_glXDestroyGLXPixmap(dpy, pixmap) { \
    mock_push(pack_glXDestroyGLXPixmap(NULL, dpy, pixmap)); \
}
#define test_glXDestroyGLXPixmap(_dpy, _pixmap) { \
    glXDestroyGLXPixmap_PACKED *packed = mock_expect(glXDestroyGLXPixmap); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.pixmap != _pixmap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXDestroyGLXPixmap(%p, %p);\n", _dpy, _pixmap); \
        } \
    } \
}
#define emit_glXDestroyGLXVideoSourceSGIX(dpy, glxvideosource) { \
    mock_push(pack_glXDestroyGLXVideoSourceSGIX(NULL, dpy, glxvideosource)); \
}
#define test_glXDestroyGLXVideoSourceSGIX(_dpy, _glxvideosource) { \
    glXDestroyGLXVideoSourceSGIX_PACKED *packed = mock_expect(glXDestroyGLXVideoSourceSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.glxvideosource != _glxvideosource) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXDestroyGLXVideoSourceSGIX(%p, %p);\n", _dpy, _glxvideosource); \
        } \
    } \
}
#define emit_glXDestroyHyperpipeConfigSGIX(dpy, hpId) { \
    mock_push(pack_glXDestroyHyperpipeConfigSGIX(NULL, dpy, hpId)); \
}
#define test_glXDestroyHyperpipeConfigSGIX(_dpy, _hpId) { \
    glXDestroyHyperpipeConfigSGIX_PACKED *packed = mock_expect(glXDestroyHyperpipeConfigSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.hpId != _hpId) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXDestroyHyperpipeConfigSGIX(%p, %d);\n", _dpy, _hpId); \
        } \
    } \
}
#define emit_glXDestroyPbuffer(dpy, pbuf) { \
    mock_push(pack_glXDestroyPbuffer(NULL, dpy, pbuf)); \
}
#define test_glXDestroyPbuffer(_dpy, _pbuf) { \
    glXDestroyPbuffer_PACKED *packed = mock_expect(glXDestroyPbuffer); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.pbuf != _pbuf) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXDestroyPbuffer(%p, %p);\n", _dpy, _pbuf); \
        } \
    } \
}
#define emit_glXDestroyPixmap(dpy, pixmap) { \
    mock_push(pack_glXDestroyPixmap(NULL, dpy, pixmap)); \
}
#define test_glXDestroyPixmap(_dpy, _pixmap) { \
    glXDestroyPixmap_PACKED *packed = mock_expect(glXDestroyPixmap); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.pixmap != _pixmap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXDestroyPixmap(%p, %p);\n", _dpy, _pixmap); \
        } \
    } \
}
#define emit_glXDestroyWindow(dpy, win) { \
    mock_push(pack_glXDestroyWindow(NULL, dpy, win)); \
}
#define test_glXDestroyWindow(_dpy, _win) { \
    glXDestroyWindow_PACKED *packed = mock_expect(glXDestroyWindow); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.win != _win) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXDestroyWindow(%p, %p);\n", _dpy, _win); \
        } \
    } \
}
#define emit_glXEnumerateVideoCaptureDevicesNV(dpy, screen, nelements) { \
    mock_push(pack_glXEnumerateVideoCaptureDevicesNV(NULL, dpy, screen, nelements)); \
}
#define test_glXEnumerateVideoCaptureDevicesNV(_dpy, _screen, _nelements) { \
    glXEnumerateVideoCaptureDevicesNV_PACKED *packed = mock_expect(glXEnumerateVideoCaptureDevicesNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.nelements, b = _nelements; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_nelements)) != 0))) { \
            printf("  ERROR: arg mismatch: nelements\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_nelements)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_nelements)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXEnumerateVideoCaptureDevicesNV(%p, %d, %p);\n", _dpy, _screen, _nelements); \
        } \
    } \
}
#define emit_glXEnumerateVideoDevicesNV(dpy, screen, nelements) { \
    mock_push(pack_glXEnumerateVideoDevicesNV(NULL, dpy, screen, nelements)); \
}
#define test_glXEnumerateVideoDevicesNV(_dpy, _screen, _nelements) { \
    glXEnumerateVideoDevicesNV_PACKED *packed = mock_expect(glXEnumerateVideoDevicesNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.nelements, b = _nelements; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_nelements)) != 0))) { \
            printf("  ERROR: arg mismatch: nelements\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_nelements)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_nelements)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXEnumerateVideoDevicesNV(%p, %d, %p);\n", _dpy, _screen, _nelements); \
        } \
    } \
}
#define emit_glXFreeContextEXT(dpy, context) { \
    mock_push(pack_glXFreeContextEXT(NULL, dpy, context)); \
}
#define test_glXFreeContextEXT(_dpy, _context) { \
    glXFreeContextEXT_PACKED *packed = mock_expect(glXFreeContextEXT); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.context != _context) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXFreeContextEXT(%p, %p);\n", _dpy, _context); \
        } \
    } \
}
#define emit_glXGetAGPOffsetMESA(pointer) { \
    mock_push(pack_glXGetAGPOffsetMESA(NULL, pointer)); \
}
#define test_glXGetAGPOffsetMESA(_pointer) { \
    glXGetAGPOffsetMESA_PACKED *packed = mock_expect(glXGetAGPOffsetMESA); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.pointer, b = _pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pointer)) != 0))) { \
            printf("  ERROR: arg mismatch: pointer\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pointer)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pointer)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetAGPOffsetMESA(%p);\n", _pointer); \
        } \
    } \
}
#define emit_glXGetClientString(display, name) { \
    mock_push(pack_glXGetClientString(NULL, display, name)); \
}
#define test_glXGetClientString(_display, _name) { \
    glXGetClientString_PACKED *packed = mock_expect(glXGetClientString); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_display)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_display)); \
            match = 0; \
        } \
        if (packed->args.name != _name) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetClientString(%p, %d);\n", _display, _name); \
        } \
    } \
}
#define emit_glXGetConfig(display, visual, attribute, value) { \
    mock_push(pack_glXGetConfig(NULL, display, visual, attribute, value)); \
}
#define test_glXGetConfig(_display, _visual, _attribute, _value) { \
    glXGetConfig_PACKED *packed = mock_expect(glXGetConfig); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_display)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_display)); \
            match = 0; \
        } \
        a = packed->args.visual, b = _visual; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_visual)) != 0))) { \
            printf("  ERROR: arg mismatch: visual\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_visual)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_visual)); \
            match = 0; \
        } \
        if (packed->args.attribute != _attribute) { \
            match = 0; \
        } \
        a = packed->args.value, b = _value; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_value)) != 0))) { \
            printf("  ERROR: arg mismatch: value\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_value)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_value)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetConfig(%p, %p, %d, %p);\n", _display, _visual, _attribute, _value); \
        } \
    } \
}
#define emit_glXGetContextIDEXT(context) { \
    mock_push(pack_glXGetContextIDEXT(NULL, context)); \
}
#define test_glXGetContextIDEXT(_context) { \
    glXGetContextIDEXT_PACKED *packed = mock_expect(glXGetContextIDEXT); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.context != _context) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetContextIDEXT(%p);\n", _context); \
        } \
    } \
}
#define emit_glXGetCurrentContext() { \
    mock_push(pack_glXGetCurrentContext(NULL)); \
}
#define test_glXGetCurrentContext() { \
    glXGetCurrentContext_PACKED *packed = mock_expect(glXGetCurrentContext); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXGetCurrentDisplay() { \
    mock_push(pack_glXGetCurrentDisplay(NULL)); \
}
#define test_glXGetCurrentDisplay() { \
    glXGetCurrentDisplay_PACKED *packed = mock_expect(glXGetCurrentDisplay); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXGetCurrentDisplayEXT() { \
    mock_push(pack_glXGetCurrentDisplayEXT(NULL)); \
}
#define test_glXGetCurrentDisplayEXT() { \
    glXGetCurrentDisplayEXT_PACKED *packed = mock_expect(glXGetCurrentDisplayEXT); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXGetCurrentDrawable() { \
    mock_push(pack_glXGetCurrentDrawable(NULL)); \
}
#define test_glXGetCurrentDrawable() { \
    glXGetCurrentDrawable_PACKED *packed = mock_expect(glXGetCurrentDrawable); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXGetCurrentReadDrawable() { \
    mock_push(pack_glXGetCurrentReadDrawable(NULL)); \
}
#define test_glXGetCurrentReadDrawable() { \
    glXGetCurrentReadDrawable_PACKED *packed = mock_expect(glXGetCurrentReadDrawable); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXGetCurrentReadDrawableSGI() { \
    mock_push(pack_glXGetCurrentReadDrawableSGI(NULL)); \
}
#define test_glXGetCurrentReadDrawableSGI() { \
    glXGetCurrentReadDrawableSGI_PACKED *packed = mock_expect(glXGetCurrentReadDrawableSGI); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXGetDrawableAttributes(drawable) { \
    mock_push(pack_glXGetDrawableAttributes(NULL, drawable)); \
}
#define test_glXGetDrawableAttributes(_drawable) { \
    glXGetDrawableAttributes_PACKED *packed = mock_expect(glXGetDrawableAttributes); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetDrawableAttributes(%"PRIu32");\n", _drawable); \
        } \
    } \
}
#define emit_glXGetDrawableAttributesSGIX(drawable) { \
    mock_push(pack_glXGetDrawableAttributesSGIX(NULL, drawable)); \
}
#define test_glXGetDrawableAttributesSGIX(_drawable) { \
    glXGetDrawableAttributesSGIX_PACKED *packed = mock_expect(glXGetDrawableAttributesSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetDrawableAttributesSGIX(%"PRIu32");\n", _drawable); \
        } \
    } \
}
#define emit_glXGetFBConfigAttrib(dpy, config, attribute, value) { \
    mock_push(pack_glXGetFBConfigAttrib(NULL, dpy, config, attribute, value)); \
}
#define test_glXGetFBConfigAttrib(_dpy, _config, _attribute, _value) { \
    glXGetFBConfigAttrib_PACKED *packed = mock_expect(glXGetFBConfigAttrib); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (packed->args.attribute != _attribute) { \
            match = 0; \
        } \
        a = packed->args.value, b = _value; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_value)) != 0))) { \
            printf("  ERROR: arg mismatch: value\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_value)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_value)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetFBConfigAttrib(%p, %p, %d, %p);\n", _dpy, _config, _attribute, _value); \
        } \
    } \
}
#define emit_glXGetFBConfigAttribSGIX(dpy, config, attribute, value) { \
    mock_push(pack_glXGetFBConfigAttribSGIX(NULL, dpy, config, attribute, value)); \
}
#define test_glXGetFBConfigAttribSGIX(_dpy, _config, _attribute, _value) { \
    glXGetFBConfigAttribSGIX_PACKED *packed = mock_expect(glXGetFBConfigAttribSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (packed->args.attribute != _attribute) { \
            match = 0; \
        } \
        a = packed->args.value, b = _value; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_value)) != 0))) { \
            printf("  ERROR: arg mismatch: value\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_value)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_value)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetFBConfigAttribSGIX(%p, %p, %d, %p);\n", _dpy, _config, _attribute, _value); \
        } \
    } \
}
#define emit_glXGetFBConfigFromVisualSGIX(dpy, vis) { \
    mock_push(pack_glXGetFBConfigFromVisualSGIX(NULL, dpy, vis)); \
}
#define test_glXGetFBConfigFromVisualSGIX(_dpy, _vis) { \
    glXGetFBConfigFromVisualSGIX_PACKED *packed = mock_expect(glXGetFBConfigFromVisualSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.vis, b = _vis; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_vis)) != 0))) { \
            printf("  ERROR: arg mismatch: vis\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_vis)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_vis)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetFBConfigFromVisualSGIX(%p, %p);\n", _dpy, _vis); \
        } \
    } \
}
#define emit_glXGetFBConfigs(dpy, screen, nelements) { \
    mock_push(pack_glXGetFBConfigs(NULL, dpy, screen, nelements)); \
}
#define test_glXGetFBConfigs(_dpy, _screen, _nelements) { \
    glXGetFBConfigs_PACKED *packed = mock_expect(glXGetFBConfigs); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.nelements, b = _nelements; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_nelements)) != 0))) { \
            printf("  ERROR: arg mismatch: nelements\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_nelements)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_nelements)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetFBConfigs(%p, %d, %p);\n", _dpy, _screen, _nelements); \
        } \
    } \
}
#define emit_glXGetFBConfigsSGIX() { \
    mock_push(pack_glXGetFBConfigsSGIX(NULL)); \
}
#define test_glXGetFBConfigsSGIX() { \
    glXGetFBConfigsSGIX_PACKED *packed = mock_expect(glXGetFBConfigsSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXGetMscRateOML(dpy, drawable, numerator, denominator) { \
    mock_push(pack_glXGetMscRateOML(NULL, dpy, drawable, numerator, denominator)); \
}
#define test_glXGetMscRateOML(_dpy, _drawable, _numerator, _denominator) { \
    glXGetMscRateOML_PACKED *packed = mock_expect(glXGetMscRateOML); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        a = packed->args.numerator, b = _numerator; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_numerator)) != 0))) { \
            printf("  ERROR: arg mismatch: numerator\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_numerator)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_numerator)); \
            match = 0; \
        } \
        a = packed->args.denominator, b = _denominator; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_denominator)) != 0))) { \
            printf("  ERROR: arg mismatch: denominator\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_denominator)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_denominator)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetMscRateOML(%p, %d, %p, %p);\n", _dpy, _drawable, _numerator, _denominator); \
        } \
    } \
}
#define emit_glXGetProcAddress(procName) { \
    mock_push(pack_glXGetProcAddress(NULL, procName)); \
}
#define test_glXGetProcAddress(_procName) { \
    glXGetProcAddress_PACKED *packed = mock_expect(glXGetProcAddress); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.procName, b = _procName; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_procName)) != 0))) { \
            printf("  ERROR: arg mismatch: procName\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_procName)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_procName)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetProcAddress(%p);\n", _procName); \
        } \
    } \
}
#define emit_glXGetProcAddressARB(procName) { \
    mock_push(pack_glXGetProcAddressARB(NULL, procName)); \
}
#define test_glXGetProcAddressARB(_procName) { \
    glXGetProcAddressARB_PACKED *packed = mock_expect(glXGetProcAddressARB); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.procName, b = _procName; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_procName)) != 0))) { \
            printf("  ERROR: arg mismatch: procName\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_procName)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_procName)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetProcAddressARB(%p);\n", _procName); \
        } \
    } \
}
#define emit_glXGetSelectedEvent(dpy, draw, event_mask) { \
    mock_push(pack_glXGetSelectedEvent(NULL, dpy, draw, event_mask)); \
}
#define test_glXGetSelectedEvent(_dpy, _draw, _event_mask) { \
    glXGetSelectedEvent_PACKED *packed = mock_expect(glXGetSelectedEvent); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.draw != _draw) { \
            match = 0; \
        } \
        a = packed->args.event_mask, b = _event_mask; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_event_mask)) != 0))) { \
            printf("  ERROR: arg mismatch: event_mask\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_event_mask)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_event_mask)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetSelectedEvent(%p, %d, %p);\n", _dpy, _draw, _event_mask); \
        } \
    } \
}
#define emit_glXGetSelectedEventSGIX(dpy, drawable, mask) { \
    mock_push(pack_glXGetSelectedEventSGIX(NULL, dpy, drawable, mask)); \
}
#define test_glXGetSelectedEventSGIX(_dpy, _drawable, _mask) { \
    glXGetSelectedEventSGIX_PACKED *packed = mock_expect(glXGetSelectedEventSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        a = packed->args.mask, b = _mask; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_mask)) != 0))) { \
            printf("  ERROR: arg mismatch: mask\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_mask)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_mask)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetSelectedEventSGIX(%p, %d, %p);\n", _dpy, _drawable, _mask); \
        } \
    } \
}
#define emit_glXGetSyncValuesOML(dpy, drawable, ust, msc, sbc) { \
    mock_push(pack_glXGetSyncValuesOML(NULL, dpy, drawable, ust, msc, sbc)); \
}
#define test_glXGetSyncValuesOML(_dpy, _drawable, _ust, _msc, _sbc) { \
    glXGetSyncValuesOML_PACKED *packed = mock_expect(glXGetSyncValuesOML); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        a = packed->args.ust, b = _ust; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_ust)) != 0))) { \
            printf("  ERROR: arg mismatch: ust\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_ust)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_ust)); \
            match = 0; \
        } \
        a = packed->args.msc, b = _msc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_msc)) != 0))) { \
            printf("  ERROR: arg mismatch: msc\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_msc)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_msc)); \
            match = 0; \
        } \
        a = packed->args.sbc, b = _sbc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_sbc)) != 0))) { \
            printf("  ERROR: arg mismatch: sbc\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_sbc)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_sbc)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetSyncValuesOML(%p, %d, %p, %p, %p);\n", _dpy, _drawable, _ust, _msc, _sbc); \
        } \
    } \
}
#define emit_glXGetTransparentIndexSUN(dpy, overlay, underlay, pTransparentIndex) { \
    mock_push(pack_glXGetTransparentIndexSUN(NULL, dpy, overlay, underlay, pTransparentIndex)); \
}
#define test_glXGetTransparentIndexSUN(_dpy, _overlay, _underlay, _pTransparentIndex) { \
    glXGetTransparentIndexSUN_PACKED *packed = mock_expect(glXGetTransparentIndexSUN); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.overlay != _overlay) { \
            match = 0; \
        } \
        if (packed->args.underlay != _underlay) { \
            match = 0; \
        } \
        a = packed->args.pTransparentIndex, b = _pTransparentIndex; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pTransparentIndex)) != 0))) { \
            printf("  ERROR: arg mismatch: pTransparentIndex\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pTransparentIndex)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pTransparentIndex)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetTransparentIndexSUN(%p, %lu, %lu, %p);\n", _dpy, _overlay, _underlay, _pTransparentIndex); \
        } \
    } \
}
#define emit_glXGetVideoDeviceNV(dpy, screen, numVideoDevices, pVideoDevice) { \
    mock_push(pack_glXGetVideoDeviceNV(NULL, dpy, screen, numVideoDevices, pVideoDevice)); \
}
#define test_glXGetVideoDeviceNV(_dpy, _screen, _numVideoDevices, _pVideoDevice) { \
    glXGetVideoDeviceNV_PACKED *packed = mock_expect(glXGetVideoDeviceNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (packed->args.numVideoDevices != _numVideoDevices) { \
            match = 0; \
        } \
        a = packed->args.pVideoDevice, b = _pVideoDevice; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pVideoDevice)) != 0))) { \
            printf("  ERROR: arg mismatch: pVideoDevice\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pVideoDevice)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pVideoDevice)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetVideoDeviceNV(%p, %d, %d, %p);\n", _dpy, _screen, _numVideoDevices, _pVideoDevice); \
        } \
    } \
}
#define emit_glXGetVideoInfoNV(dpy, screen, VideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo) { \
    mock_push(pack_glXGetVideoInfoNV(NULL, dpy, screen, VideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo)); \
}
#define test_glXGetVideoInfoNV(_dpy, _screen, _VideoDevice, _pulCounterOutputPbuffer, _pulCounterOutputVideo) { \
    glXGetVideoInfoNV_PACKED *packed = mock_expect(glXGetVideoInfoNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (packed->args.VideoDevice != _VideoDevice) { \
            match = 0; \
        } \
        a = packed->args.pulCounterOutputPbuffer, b = _pulCounterOutputPbuffer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pulCounterOutputPbuffer)) != 0))) { \
            printf("  ERROR: arg mismatch: pulCounterOutputPbuffer\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pulCounterOutputPbuffer)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pulCounterOutputPbuffer)); \
            match = 0; \
        } \
        a = packed->args.pulCounterOutputVideo, b = _pulCounterOutputVideo; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pulCounterOutputVideo)) != 0))) { \
            printf("  ERROR: arg mismatch: pulCounterOutputVideo\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pulCounterOutputVideo)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pulCounterOutputVideo)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetVideoInfoNV(%p, %d, %p, %p, %p);\n", _dpy, _screen, _VideoDevice, _pulCounterOutputPbuffer, _pulCounterOutputVideo); \
        } \
    } \
}
#define emit_glXGetVideoSyncSGI(count) { \
    mock_push(pack_glXGetVideoSyncSGI(NULL, count)); \
}
#define test_glXGetVideoSyncSGI(_count) { \
    glXGetVideoSyncSGI_PACKED *packed = mock_expect(glXGetVideoSyncSGI); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.count, b = _count; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_count)) != 0))) { \
            printf("  ERROR: arg mismatch: count\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_count)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_count)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetVideoSyncSGI(%p);\n", _count); \
        } \
    } \
}
#define emit_glXGetVisualConfigs() { \
    mock_push(pack_glXGetVisualConfigs(NULL)); \
}
#define test_glXGetVisualConfigs() { \
    glXGetVisualConfigs_PACKED *packed = mock_expect(glXGetVisualConfigs); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXGetVisualFromFBConfig(dpy, config) { \
    mock_push(pack_glXGetVisualFromFBConfig(NULL, dpy, config)); \
}
#define test_glXGetVisualFromFBConfig(_dpy, _config) { \
    glXGetVisualFromFBConfig_PACKED *packed = mock_expect(glXGetVisualFromFBConfig); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetVisualFromFBConfig(%p, %p);\n", _dpy, _config); \
        } \
    } \
}
#define emit_glXGetVisualFromFBConfigSGIX(dpy, config) { \
    mock_push(pack_glXGetVisualFromFBConfigSGIX(NULL, dpy, config)); \
}
#define test_glXGetVisualFromFBConfigSGIX(_dpy, _config) { \
    glXGetVisualFromFBConfigSGIX_PACKED *packed = mock_expect(glXGetVisualFromFBConfigSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetVisualFromFBConfigSGIX(%p, %p);\n", _dpy, _config); \
        } \
    } \
}
#define emit_glXHyperpipeAttribSGIX(dpy, timeSlice, attrib, size, attribList) { \
    mock_push(pack_glXHyperpipeAttribSGIX(NULL, dpy, timeSlice, attrib, size, attribList)); \
}
#define test_glXHyperpipeAttribSGIX(_dpy, _timeSlice, _attrib, _size, _attribList) { \
    glXHyperpipeAttribSGIX_PACKED *packed = mock_expect(glXHyperpipeAttribSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.timeSlice != _timeSlice) { \
            match = 0; \
        } \
        if (packed->args.attrib != _attrib) { \
            match = 0; \
        } \
        if (packed->args.size != _size) { \
            match = 0; \
        } \
        a = packed->args.attribList, b = _attribList; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attribList)) != 0))) { \
            printf("  ERROR: arg mismatch: attribList\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attribList)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attribList)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXHyperpipeAttribSGIX(%p, %d, %d, %d, %p);\n", _dpy, _timeSlice, _attrib, _size, _attribList); \
        } \
    } \
}
#define emit_glXHyperpipeConfigSGIX(dpy, networkId, npipes, cfg, hpId) { \
    mock_push(pack_glXHyperpipeConfigSGIX(NULL, dpy, networkId, npipes, cfg, hpId)); \
}
#define test_glXHyperpipeConfigSGIX(_dpy, _networkId, _npipes, _cfg, _hpId) { \
    glXHyperpipeConfigSGIX_PACKED *packed = mock_expect(glXHyperpipeConfigSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.networkId != _networkId) { \
            match = 0; \
        } \
        if (packed->args.npipes != _npipes) { \
            match = 0; \
        } \
        a = packed->args.cfg, b = _cfg; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_cfg)) != 0))) { \
            printf("  ERROR: arg mismatch: cfg\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_cfg)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_cfg)); \
            match = 0; \
        } \
        a = packed->args.hpId, b = _hpId; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_hpId)) != 0))) { \
            printf("  ERROR: arg mismatch: hpId\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_hpId)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_hpId)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXHyperpipeConfigSGIX(%p, %d, %d, %p, %p);\n", _dpy, _networkId, _npipes, _cfg, _hpId); \
        } \
    } \
}
#define emit_glXImportContextEXT(dpy, contextID) { \
    mock_push(pack_glXImportContextEXT(NULL, dpy, contextID)); \
}
#define test_glXImportContextEXT(_dpy, _contextID) { \
    glXImportContextEXT_PACKED *packed = mock_expect(glXImportContextEXT); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.contextID != _contextID) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXImportContextEXT(%p, %p);\n", _dpy, _contextID); \
        } \
    } \
}
#define emit_glXIsDirect(dpy, ctx) { \
    mock_push(pack_glXIsDirect(NULL, dpy, ctx)); \
}
#define test_glXIsDirect(_dpy, _ctx) { \
    glXIsDirect_PACKED *packed = mock_expect(glXIsDirect); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.ctx != _ctx) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXIsDirect(%p, %p);\n", _dpy, _ctx); \
        } \
    } \
}
#define emit_glXJoinSwapGroupNV(dpy, drawable, group) { \
    mock_push(pack_glXJoinSwapGroupNV(NULL, dpy, drawable, group)); \
}
#define test_glXJoinSwapGroupNV(_dpy, _drawable, _group) { \
    glXJoinSwapGroupNV_PACKED *packed = mock_expect(glXJoinSwapGroupNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.group != _group) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXJoinSwapGroupNV(%p, %d, %u);\n", _dpy, _drawable, _group); \
        } \
    } \
}
#define emit_glXJoinSwapGroupSGIX(dpy, drawable, member) { \
    mock_push(pack_glXJoinSwapGroupSGIX(NULL, dpy, drawable, member)); \
}
#define test_glXJoinSwapGroupSGIX(_dpy, _drawable, _member) { \
    glXJoinSwapGroupSGIX_PACKED *packed = mock_expect(glXJoinSwapGroupSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.member != _member) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXJoinSwapGroupSGIX(%p, %d, %d);\n", _dpy, _drawable, _member); \
        } \
    } \
}
#define emit_glXLockVideoCaptureDeviceNV(dpy, device) { \
    mock_push(pack_glXLockVideoCaptureDeviceNV(NULL, dpy, device)); \
}
#define test_glXLockVideoCaptureDeviceNV(_dpy, _device) { \
    glXLockVideoCaptureDeviceNV_PACKED *packed = mock_expect(glXLockVideoCaptureDeviceNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.device != _device) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXLockVideoCaptureDeviceNV(%p, %p);\n", _dpy, _device); \
        } \
    } \
}
#define emit_glXMakeContextCurrent(dpy, draw, read, ctx) { \
    mock_push(pack_glXMakeContextCurrent(NULL, dpy, draw, read, ctx)); \
}
#define test_glXMakeContextCurrent(_dpy, _draw, _read, _ctx) { \
    glXMakeContextCurrent_PACKED *packed = mock_expect(glXMakeContextCurrent); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.draw != _draw) { \
            match = 0; \
        } \
        if (packed->args.read != _read) { \
            match = 0; \
        } \
        if (packed->args.ctx != _ctx) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXMakeContextCurrent(%p, %d, %d, %p);\n", _dpy, _draw, _read, _ctx); \
        } \
    } \
}
#define emit_glXMakeCurrent(dpy, drawable, ctx) { \
    mock_push(pack_glXMakeCurrent(NULL, dpy, drawable, ctx)); \
}
#define test_glXMakeCurrent(_dpy, _drawable, _ctx) { \
    glXMakeCurrent_PACKED *packed = mock_expect(glXMakeCurrent); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.ctx != _ctx) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXMakeCurrent(%p, %d, %p);\n", _dpy, _drawable, _ctx); \
        } \
    } \
}
#define emit_glXMakeCurrentReadSGI(dpy, draw, read, ctx) { \
    mock_push(pack_glXMakeCurrentReadSGI(NULL, dpy, draw, read, ctx)); \
}
#define test_glXMakeCurrentReadSGI(_dpy, _draw, _read, _ctx) { \
    glXMakeCurrentReadSGI_PACKED *packed = mock_expect(glXMakeCurrentReadSGI); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.draw != _draw) { \
            match = 0; \
        } \
        if (packed->args.read != _read) { \
            match = 0; \
        } \
        if (packed->args.ctx != _ctx) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXMakeCurrentReadSGI(%p, %d, %d, %p);\n", _dpy, _draw, _read, _ctx); \
        } \
    } \
}
#define emit_glXQueryChannelDeltasSGIX(display, screen, channel, x, y, w, h) { \
    mock_push(pack_glXQueryChannelDeltasSGIX(NULL, display, screen, channel, x, y, w, h)); \
}
#define test_glXQueryChannelDeltasSGIX(_display, _screen, _channel, _x, _y, _w, _h) { \
    glXQueryChannelDeltasSGIX_PACKED *packed = mock_expect(glXQueryChannelDeltasSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_display)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_display)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (packed->args.channel != _channel) { \
            match = 0; \
        } \
        a = packed->args.x, b = _x; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_x)) != 0))) { \
            printf("  ERROR: arg mismatch: x\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_x)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_x)); \
            match = 0; \
        } \
        a = packed->args.y, b = _y; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_y)) != 0))) { \
            printf("  ERROR: arg mismatch: y\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_y)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_y)); \
            match = 0; \
        } \
        a = packed->args.w, b = _w; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_w)) != 0))) { \
            printf("  ERROR: arg mismatch: w\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_w)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_w)); \
            match = 0; \
        } \
        a = packed->args.h, b = _h; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_h)) != 0))) { \
            printf("  ERROR: arg mismatch: h\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_h)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_h)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryChannelDeltasSGIX(%p, %d, %d, %p, %p, %p, %p);\n", _display, _screen, _channel, _x, _y, _w, _h); \
        } \
    } \
}
#define emit_glXQueryChannelRectSGIX(display, screen, channel, dx, dy, dw, dh) { \
    mock_push(pack_glXQueryChannelRectSGIX(NULL, display, screen, channel, dx, dy, dw, dh)); \
}
#define test_glXQueryChannelRectSGIX(_display, _screen, _channel, _dx, _dy, _dw, _dh) { \
    glXQueryChannelRectSGIX_PACKED *packed = mock_expect(glXQueryChannelRectSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_display)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_display)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (packed->args.channel != _channel) { \
            match = 0; \
        } \
        a = packed->args.dx, b = _dx; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dx)) != 0))) { \
            printf("  ERROR: arg mismatch: dx\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dx)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dx)); \
            match = 0; \
        } \
        a = packed->args.dy, b = _dy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dy)) != 0))) { \
            printf("  ERROR: arg mismatch: dy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dy)); \
            match = 0; \
        } \
        a = packed->args.dw, b = _dw; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dw)) != 0))) { \
            printf("  ERROR: arg mismatch: dw\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dw)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dw)); \
            match = 0; \
        } \
        a = packed->args.dh, b = _dh; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dh)) != 0))) { \
            printf("  ERROR: arg mismatch: dh\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dh)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dh)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryChannelRectSGIX(%p, %d, %d, %p, %p, %p, %p);\n", _display, _screen, _channel, _dx, _dy, _dw, _dh); \
        } \
    } \
}
#define emit_glXQueryContext(dpy, ctx, attribute, value) { \
    mock_push(pack_glXQueryContext(NULL, dpy, ctx, attribute, value)); \
}
#define test_glXQueryContext(_dpy, _ctx, _attribute, _value) { \
    glXQueryContext_PACKED *packed = mock_expect(glXQueryContext); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.ctx != _ctx) { \
            match = 0; \
        } \
        if (packed->args.attribute != _attribute) { \
            match = 0; \
        } \
        a = packed->args.value, b = _value; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_value)) != 0))) { \
            printf("  ERROR: arg mismatch: value\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_value)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_value)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryContext(%p, %p, %d, %p);\n", _dpy, _ctx, _attribute, _value); \
        } \
    } \
}
#define emit_glXQueryContextInfoEXT(dpy, context, attribute, value) { \
    mock_push(pack_glXQueryContextInfoEXT(NULL, dpy, context, attribute, value)); \
}
#define test_glXQueryContextInfoEXT(_dpy, _context, _attribute, _value) { \
    glXQueryContextInfoEXT_PACKED *packed = mock_expect(glXQueryContextInfoEXT); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.context != _context) { \
            match = 0; \
        } \
        if (packed->args.attribute != _attribute) { \
            match = 0; \
        } \
        a = packed->args.value, b = _value; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_value)) != 0))) { \
            printf("  ERROR: arg mismatch: value\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_value)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_value)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryContextInfoEXT(%p, %p, %d, %p);\n", _dpy, _context, _attribute, _value); \
        } \
    } \
}
#define emit_glXQueryDrawable(dpy, draw, attribute, value) { \
    mock_push(pack_glXQueryDrawable(NULL, dpy, draw, attribute, value)); \
}
#define test_glXQueryDrawable(_dpy, _draw, _attribute, _value) { \
    glXQueryDrawable_PACKED *packed = mock_expect(glXQueryDrawable); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.draw != _draw) { \
            match = 0; \
        } \
        if (packed->args.attribute != _attribute) { \
            match = 0; \
        } \
        a = packed->args.value, b = _value; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_value)) != 0))) { \
            printf("  ERROR: arg mismatch: value\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_value)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_value)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryDrawable(%p, %d, %d, %p);\n", _dpy, _draw, _attribute, _value); \
        } \
    } \
}
#define emit_glXQueryExtension(display, errorBase, eventBase) { \
    mock_push(pack_glXQueryExtension(NULL, display, errorBase, eventBase)); \
}
#define test_glXQueryExtension(_display, _errorBase, _eventBase) { \
    glXQueryExtension_PACKED *packed = mock_expect(glXQueryExtension); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_display)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_display)); \
            match = 0; \
        } \
        a = packed->args.errorBase, b = _errorBase; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_errorBase)) != 0))) { \
            printf("  ERROR: arg mismatch: errorBase\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_errorBase)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_errorBase)); \
            match = 0; \
        } \
        a = packed->args.eventBase, b = _eventBase; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_eventBase)) != 0))) { \
            printf("  ERROR: arg mismatch: eventBase\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_eventBase)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_eventBase)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryExtension(%p, %p, %p);\n", _display, _errorBase, _eventBase); \
        } \
    } \
}
#define emit_glXQueryExtensionsString(dpy, screen) { \
    mock_push(pack_glXQueryExtensionsString(NULL, dpy, screen)); \
}
#define test_glXQueryExtensionsString(_dpy, _screen) { \
    glXQueryExtensionsString_PACKED *packed = mock_expect(glXQueryExtensionsString); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryExtensionsString(%p, %d);\n", _dpy, _screen); \
        } \
    } \
}
#define emit_glXQueryFrameCountNV(dpy, screen, count) { \
    mock_push(pack_glXQueryFrameCountNV(NULL, dpy, screen, count)); \
}
#define test_glXQueryFrameCountNV(_dpy, _screen, _count) { \
    glXQueryFrameCountNV_PACKED *packed = mock_expect(glXQueryFrameCountNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.count, b = _count; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_count)) != 0))) { \
            printf("  ERROR: arg mismatch: count\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_count)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_count)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryFrameCountNV(%p, %d, %p);\n", _dpy, _screen, _count); \
        } \
    } \
}
#define emit_glXQueryGLXPbufferSGIX(dpy, pbuf, attribute, value) { \
    mock_push(pack_glXQueryGLXPbufferSGIX(NULL, dpy, pbuf, attribute, value)); \
}
#define test_glXQueryGLXPbufferSGIX(_dpy, _pbuf, _attribute, _value) { \
    glXQueryGLXPbufferSGIX_PACKED *packed = mock_expect(glXQueryGLXPbufferSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.pbuf != _pbuf) { \
            match = 0; \
        } \
        if (packed->args.attribute != _attribute) { \
            match = 0; \
        } \
        a = packed->args.value, b = _value; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_value)) != 0))) { \
            printf("  ERROR: arg mismatch: value\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_value)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_value)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryGLXPbufferSGIX(%p, %p, %d, %p);\n", _dpy, _pbuf, _attribute, _value); \
        } \
    } \
}
#define emit_glXQueryHyperpipeAttribSGIX(dpy, timeSlice, attrib, size, returnAttribList) { \
    mock_push(pack_glXQueryHyperpipeAttribSGIX(NULL, dpy, timeSlice, attrib, size, returnAttribList)); \
}
#define test_glXQueryHyperpipeAttribSGIX(_dpy, _timeSlice, _attrib, _size, _returnAttribList) { \
    glXQueryHyperpipeAttribSGIX_PACKED *packed = mock_expect(glXQueryHyperpipeAttribSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.timeSlice != _timeSlice) { \
            match = 0; \
        } \
        if (packed->args.attrib != _attrib) { \
            match = 0; \
        } \
        if (packed->args.size != _size) { \
            match = 0; \
        } \
        a = packed->args.returnAttribList, b = _returnAttribList; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_returnAttribList)) != 0))) { \
            printf("  ERROR: arg mismatch: returnAttribList\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_returnAttribList)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_returnAttribList)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryHyperpipeAttribSGIX(%p, %d, %d, %d, %p);\n", _dpy, _timeSlice, _attrib, _size, _returnAttribList); \
        } \
    } \
}
#define emit_glXQueryHyperpipeBestAttribSGIX(dpy, timeSlice, attrib, size, attribList, returnAttribList) { \
    mock_push(pack_glXQueryHyperpipeBestAttribSGIX(NULL, dpy, timeSlice, attrib, size, attribList, returnAttribList)); \
}
#define test_glXQueryHyperpipeBestAttribSGIX(_dpy, _timeSlice, _attrib, _size, _attribList, _returnAttribList) { \
    glXQueryHyperpipeBestAttribSGIX_PACKED *packed = mock_expect(glXQueryHyperpipeBestAttribSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.timeSlice != _timeSlice) { \
            match = 0; \
        } \
        if (packed->args.attrib != _attrib) { \
            match = 0; \
        } \
        if (packed->args.size != _size) { \
            match = 0; \
        } \
        a = packed->args.attribList, b = _attribList; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attribList)) != 0))) { \
            printf("  ERROR: arg mismatch: attribList\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_attribList)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_attribList)); \
            match = 0; \
        } \
        a = packed->args.returnAttribList, b = _returnAttribList; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_returnAttribList)) != 0))) { \
            printf("  ERROR: arg mismatch: returnAttribList\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_returnAttribList)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_returnAttribList)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryHyperpipeBestAttribSGIX(%p, %d, %d, %d, %p, %p);\n", _dpy, _timeSlice, _attrib, _size, _attribList, _returnAttribList); \
        } \
    } \
}
#define emit_glXQueryHyperpipeConfigSGIX(dpy, hpId, npipes) { \
    mock_push(pack_glXQueryHyperpipeConfigSGIX(NULL, dpy, hpId, npipes)); \
}
#define test_glXQueryHyperpipeConfigSGIX(_dpy, _hpId, _npipes) { \
    glXQueryHyperpipeConfigSGIX_PACKED *packed = mock_expect(glXQueryHyperpipeConfigSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.hpId != _hpId) { \
            match = 0; \
        } \
        a = packed->args.npipes, b = _npipes; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_npipes)) != 0))) { \
            printf("  ERROR: arg mismatch: npipes\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_npipes)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_npipes)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryHyperpipeConfigSGIX(%p, %d, %p);\n", _dpy, _hpId, _npipes); \
        } \
    } \
}
#define emit_glXQueryHyperpipeNetworkSGIX(dpy, npipes) { \
    mock_push(pack_glXQueryHyperpipeNetworkSGIX(NULL, dpy, npipes)); \
}
#define test_glXQueryHyperpipeNetworkSGIX(_dpy, _npipes) { \
    glXQueryHyperpipeNetworkSGIX_PACKED *packed = mock_expect(glXQueryHyperpipeNetworkSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.npipes, b = _npipes; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_npipes)) != 0))) { \
            printf("  ERROR: arg mismatch: npipes\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_npipes)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_npipes)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryHyperpipeNetworkSGIX(%p, %p);\n", _dpy, _npipes); \
        } \
    } \
}
#define emit_glXQueryMaxSwapBarriersSGIX(dpy, screen, max) { \
    mock_push(pack_glXQueryMaxSwapBarriersSGIX(NULL, dpy, screen, max)); \
}
#define test_glXQueryMaxSwapBarriersSGIX(_dpy, _screen, _max) { \
    glXQueryMaxSwapBarriersSGIX_PACKED *packed = mock_expect(glXQueryMaxSwapBarriersSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.max, b = _max; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_max)) != 0))) { \
            printf("  ERROR: arg mismatch: max\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_max)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_max)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryMaxSwapBarriersSGIX(%p, %d, %p);\n", _dpy, _screen, _max); \
        } \
    } \
}
#define emit_glXQueryMaxSwapGroupsNV(dpy, screen, maxGroups, maxBarriers) { \
    mock_push(pack_glXQueryMaxSwapGroupsNV(NULL, dpy, screen, maxGroups, maxBarriers)); \
}
#define test_glXQueryMaxSwapGroupsNV(_dpy, _screen, _maxGroups, _maxBarriers) { \
    glXQueryMaxSwapGroupsNV_PACKED *packed = mock_expect(glXQueryMaxSwapGroupsNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.maxGroups, b = _maxGroups; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_maxGroups)) != 0))) { \
            printf("  ERROR: arg mismatch: maxGroups\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_maxGroups)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_maxGroups)); \
            match = 0; \
        } \
        a = packed->args.maxBarriers, b = _maxBarriers; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_maxBarriers)) != 0))) { \
            printf("  ERROR: arg mismatch: maxBarriers\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_maxBarriers)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_maxBarriers)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryMaxSwapGroupsNV(%p, %d, %p, %p);\n", _dpy, _screen, _maxGroups, _maxBarriers); \
        } \
    } \
}
#define emit_glXQueryServerString(dpy, screen, name) { \
    mock_push(pack_glXQueryServerString(NULL, dpy, screen, name)); \
}
#define test_glXQueryServerString(_dpy, _screen, _name) { \
    glXQueryServerString_PACKED *packed = mock_expect(glXQueryServerString); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (packed->args.name != _name) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryServerString(%p, %d, %d);\n", _dpy, _screen, _name); \
        } \
    } \
}
#define emit_glXQuerySwapGroupNV(dpy, drawable, group, barrier) { \
    mock_push(pack_glXQuerySwapGroupNV(NULL, dpy, drawable, group, barrier)); \
}
#define test_glXQuerySwapGroupNV(_dpy, _drawable, _group, _barrier) { \
    glXQuerySwapGroupNV_PACKED *packed = mock_expect(glXQuerySwapGroupNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        a = packed->args.group, b = _group; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_group)) != 0))) { \
            printf("  ERROR: arg mismatch: group\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_group)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_group)); \
            match = 0; \
        } \
        a = packed->args.barrier, b = _barrier; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_barrier)) != 0))) { \
            printf("  ERROR: arg mismatch: barrier\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_barrier)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_barrier)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQuerySwapGroupNV(%p, %d, %p, %p);\n", _dpy, _drawable, _group, _barrier); \
        } \
    } \
}
#define emit_glXQueryVersion(dpy, maj, min) { \
    mock_push(pack_glXQueryVersion(NULL, dpy, maj, min)); \
}
#define test_glXQueryVersion(_dpy, _maj, _min) { \
    glXQueryVersion_PACKED *packed = mock_expect(glXQueryVersion); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.maj, b = _maj; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_maj)) != 0))) { \
            printf("  ERROR: arg mismatch: maj\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_maj)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_maj)); \
            match = 0; \
        } \
        a = packed->args.min, b = _min; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_min)) != 0))) { \
            printf("  ERROR: arg mismatch: min\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_min)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_min)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryVersion(%p, %p, %p);\n", _dpy, _maj, _min); \
        } \
    } \
}
#define emit_glXQueryVideoCaptureDeviceNV(dpy, device, attribute, value) { \
    mock_push(pack_glXQueryVideoCaptureDeviceNV(NULL, dpy, device, attribute, value)); \
}
#define test_glXQueryVideoCaptureDeviceNV(_dpy, _device, _attribute, _value) { \
    glXQueryVideoCaptureDeviceNV_PACKED *packed = mock_expect(glXQueryVideoCaptureDeviceNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.device != _device) { \
            match = 0; \
        } \
        if (packed->args.attribute != _attribute) { \
            match = 0; \
        } \
        a = packed->args.value, b = _value; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_value)) != 0))) { \
            printf("  ERROR: arg mismatch: value\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_value)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_value)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXQueryVideoCaptureDeviceNV(%p, %p, %d, %p);\n", _dpy, _device, _attribute, _value); \
        } \
    } \
}
#define emit_glXReleaseBuffersMESA(dpy, drawable) { \
    mock_push(pack_glXReleaseBuffersMESA(NULL, dpy, drawable)); \
}
#define test_glXReleaseBuffersMESA(_dpy, _drawable) { \
    glXReleaseBuffersMESA_PACKED *packed = mock_expect(glXReleaseBuffersMESA); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXReleaseBuffersMESA(%p, %d);\n", _dpy, _drawable); \
        } \
    } \
}
#define emit_glXReleaseTexImageEXT(dpy, drawable, buffer) { \
    mock_push(pack_glXReleaseTexImageEXT(NULL, dpy, drawable, buffer)); \
}
#define test_glXReleaseTexImageEXT(_dpy, _drawable, _buffer) { \
    glXReleaseTexImageEXT_PACKED *packed = mock_expect(glXReleaseTexImageEXT); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.buffer != _buffer) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXReleaseTexImageEXT(%p, %d, %d);\n", _dpy, _drawable, _buffer); \
        } \
    } \
}
#define emit_glXReleaseVideoCaptureDeviceNV(dpy, device) { \
    mock_push(pack_glXReleaseVideoCaptureDeviceNV(NULL, dpy, device)); \
}
#define test_glXReleaseVideoCaptureDeviceNV(_dpy, _device) { \
    glXReleaseVideoCaptureDeviceNV_PACKED *packed = mock_expect(glXReleaseVideoCaptureDeviceNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.device != _device) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXReleaseVideoCaptureDeviceNV(%p, %p);\n", _dpy, _device); \
        } \
    } \
}
#define emit_glXReleaseVideoDeviceNV(dpy, screen, VideoDevice) { \
    mock_push(pack_glXReleaseVideoDeviceNV(NULL, dpy, screen, VideoDevice)); \
}
#define test_glXReleaseVideoDeviceNV(_dpy, _screen, _VideoDevice) { \
    glXReleaseVideoDeviceNV_PACKED *packed = mock_expect(glXReleaseVideoDeviceNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (packed->args.VideoDevice != _VideoDevice) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXReleaseVideoDeviceNV(%p, %d, %p);\n", _dpy, _screen, _VideoDevice); \
        } \
    } \
}
#define emit_glXReleaseVideoImageNV(dpy, pbuf) { \
    mock_push(pack_glXReleaseVideoImageNV(NULL, dpy, pbuf)); \
}
#define test_glXReleaseVideoImageNV(_dpy, _pbuf) { \
    glXReleaseVideoImageNV_PACKED *packed = mock_expect(glXReleaseVideoImageNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.pbuf != _pbuf) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXReleaseVideoImageNV(%p, %p);\n", _dpy, _pbuf); \
        } \
    } \
}
#define emit_glXRender() { \
    mock_push(pack_glXRender(NULL)); \
}
#define test_glXRender() { \
    glXRender_PACKED *packed = mock_expect(glXRender); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXRenderLarge() { \
    mock_push(pack_glXRenderLarge(NULL)); \
}
#define test_glXRenderLarge() { \
    glXRenderLarge_PACKED *packed = mock_expect(glXRenderLarge); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXResetFrameCountNV(dpy, screen) { \
    mock_push(pack_glXResetFrameCountNV(NULL, dpy, screen)); \
}
#define test_glXResetFrameCountNV(_dpy, _screen) { \
    glXResetFrameCountNV_PACKED *packed = mock_expect(glXResetFrameCountNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXResetFrameCountNV(%p, %d);\n", _dpy, _screen); \
        } \
    } \
}
#define emit_glXSelectEvent(dpy, draw, event_mask) { \
    mock_push(pack_glXSelectEvent(NULL, dpy, draw, event_mask)); \
}
#define test_glXSelectEvent(_dpy, _draw, _event_mask) { \
    glXSelectEvent_PACKED *packed = mock_expect(glXSelectEvent); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.draw != _draw) { \
            match = 0; \
        } \
        if (packed->args.event_mask != _event_mask) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXSelectEvent(%p, %d, %lu);\n", _dpy, _draw, _event_mask); \
        } \
    } \
}
#define emit_glXSelectEventSGIX(dpy, drawable, mask) { \
    mock_push(pack_glXSelectEventSGIX(NULL, dpy, drawable, mask)); \
}
#define test_glXSelectEventSGIX(_dpy, _drawable, _mask) { \
    glXSelectEventSGIX_PACKED *packed = mock_expect(glXSelectEventSGIX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.mask != _mask) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXSelectEventSGIX(%p, %d, %lu);\n", _dpy, _drawable, _mask); \
        } \
    } \
}
#define emit_glXSendPbufferToVideoNV(dpy, pbuf, iBufferType, pulCounterPbuffer, bBlock) { \
    mock_push(pack_glXSendPbufferToVideoNV(NULL, dpy, pbuf, iBufferType, pulCounterPbuffer, bBlock)); \
}
#define test_glXSendPbufferToVideoNV(_dpy, _pbuf, _iBufferType, _pulCounterPbuffer, _bBlock) { \
    glXSendPbufferToVideoNV_PACKED *packed = mock_expect(glXSendPbufferToVideoNV); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.pbuf != _pbuf) { \
            match = 0; \
        } \
        if (packed->args.iBufferType != _iBufferType) { \
            match = 0; \
        } \
        a = packed->args.pulCounterPbuffer, b = _pulCounterPbuffer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pulCounterPbuffer)) != 0))) { \
            printf("  ERROR: arg mismatch: pulCounterPbuffer\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_pulCounterPbuffer)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_pulCounterPbuffer)); \
            match = 0; \
        } \
        if (packed->args.bBlock != _bBlock) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXSendPbufferToVideoNV(%p, %p, %d, %p, %d);\n", _dpy, _pbuf, _iBufferType, _pulCounterPbuffer, _bBlock); \
        } \
    } \
}
#define emit_glXSet3DfxModeMESA(mode) { \
    mock_push(pack_glXSet3DfxModeMESA(NULL, mode)); \
}
#define test_glXSet3DfxModeMESA(_mode) { \
    glXSet3DfxModeMESA_PACKED *packed = mock_expect(glXSet3DfxModeMESA); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.mode != _mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXSet3DfxModeMESA(%d);\n", _mode); \
        } \
    } \
}
#define emit_glXSwapBuffers(dpy, drawable) { \
    mock_push(pack_glXSwapBuffers(NULL, dpy, drawable)); \
}
#define test_glXSwapBuffers(_dpy, _drawable) { \
    glXSwapBuffers_PACKED *packed = mock_expect(glXSwapBuffers); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXSwapBuffers(%p, %d);\n", _dpy, _drawable); \
        } \
    } \
}
#define emit_glXSwapBuffersMscOML(dpy, drawable, target_msc, divisor, remainder) { \
    mock_push(pack_glXSwapBuffersMscOML(NULL, dpy, drawable, target_msc, divisor, remainder)); \
}
#define test_glXSwapBuffersMscOML(_dpy, _drawable, _target_msc, _divisor, _remainder) { \
    glXSwapBuffersMscOML_PACKED *packed = mock_expect(glXSwapBuffersMscOML); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.target_msc != _target_msc) { \
            match = 0; \
        } \
        if (packed->args.divisor != _divisor) { \
            match = 0; \
        } \
        if (packed->args.remainder != _remainder) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXSwapBuffersMscOML(%p, %d, %"PRIi64", %"PRIi64", %"PRIi64");\n", _dpy, _drawable, _target_msc, _divisor, _remainder); \
        } \
    } \
}
#define emit_glXSwapIntervalEXT(dpy, drawable, interval) { \
    mock_push(pack_glXSwapIntervalEXT(NULL, dpy, drawable, interval)); \
}
#define test_glXSwapIntervalEXT(_dpy, _drawable, _interval) { \
    glXSwapIntervalEXT_PACKED *packed = mock_expect(glXSwapIntervalEXT); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.interval != _interval) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXSwapIntervalEXT(%p, %d, %d);\n", _dpy, _drawable, _interval); \
        } \
    } \
}
#define emit_glXSwapIntervalMESA(interval) { \
    mock_push(pack_glXSwapIntervalMESA(NULL, interval)); \
}
#define test_glXSwapIntervalMESA(_interval) { \
    glXSwapIntervalMESA_PACKED *packed = mock_expect(glXSwapIntervalMESA); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.interval != _interval) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXSwapIntervalMESA(%u);\n", _interval); \
        } \
    } \
}
#define emit_glXSwapIntervalSGI(interval) { \
    mock_push(pack_glXSwapIntervalSGI(NULL, interval)); \
}
#define test_glXSwapIntervalSGI(_interval) { \
    glXSwapIntervalSGI_PACKED *packed = mock_expect(glXSwapIntervalSGI); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.interval != _interval) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXSwapIntervalSGI(%d);\n", _interval); \
        } \
    } \
}
#define emit_glXUseXFont(font, first, count, listBase) { \
    mock_push(pack_glXUseXFont(NULL, font, first, count, listBase)); \
}
#define test_glXUseXFont(_font, _first, _count, _listBase) { \
    glXUseXFont_PACKED *packed = mock_expect(glXUseXFont); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.font != _font) { \
            match = 0; \
        } \
        if (packed->args.first != _first) { \
            match = 0; \
        } \
        if (packed->args.count != _count) { \
            match = 0; \
        } \
        if (packed->args.listBase != _listBase) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXUseXFont(%lu, %d, %d, %d);\n", _font, _first, _count, _listBase); \
        } \
    } \
}
#define emit_glXVendorPrivate() { \
    mock_push(pack_glXVendorPrivate(NULL)); \
}
#define test_glXVendorPrivate() { \
    glXVendorPrivate_PACKED *packed = mock_expect(glXVendorPrivate); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXVendorPrivateWithReply() { \
    mock_push(pack_glXVendorPrivateWithReply(NULL)); \
}
#define test_glXVendorPrivateWithReply() { \
    glXVendorPrivateWithReply_PACKED *packed = mock_expect(glXVendorPrivateWithReply); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXWaitForMscOML(dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc) { \
    mock_push(pack_glXWaitForMscOML(NULL, dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc)); \
}
#define test_glXWaitForMscOML(_dpy, _drawable, _target_msc, _divisor, _remainder, _ust, _msc, _sbc) { \
    glXWaitForMscOML_PACKED *packed = mock_expect(glXWaitForMscOML); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.target_msc != _target_msc) { \
            match = 0; \
        } \
        if (packed->args.divisor != _divisor) { \
            match = 0; \
        } \
        if (packed->args.remainder != _remainder) { \
            match = 0; \
        } \
        a = packed->args.ust, b = _ust; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_ust)) != 0))) { \
            printf("  ERROR: arg mismatch: ust\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_ust)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_ust)); \
            match = 0; \
        } \
        a = packed->args.msc, b = _msc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_msc)) != 0))) { \
            printf("  ERROR: arg mismatch: msc\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_msc)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_msc)); \
            match = 0; \
        } \
        a = packed->args.sbc, b = _sbc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_sbc)) != 0))) { \
            printf("  ERROR: arg mismatch: sbc\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_sbc)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_sbc)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXWaitForMscOML(%p, %d, %"PRIi64", %"PRIi64", %"PRIi64", %p, %p, %p);\n", _dpy, _drawable, _target_msc, _divisor, _remainder, _ust, _msc, _sbc); \
        } \
    } \
}
#define emit_glXWaitForSbcOML(dpy, drawable, target_sbc, ust, msc, sbc) { \
    mock_push(pack_glXWaitForSbcOML(NULL, dpy, drawable, target_sbc, ust, msc, sbc)); \
}
#define test_glXWaitForSbcOML(_dpy, _drawable, _target_sbc, _ust, _msc, _sbc) { \
    glXWaitForSbcOML_PACKED *packed = mock_expect(glXWaitForSbcOML); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_dpy)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        if (packed->args.target_sbc != _target_sbc) { \
            match = 0; \
        } \
        a = packed->args.ust, b = _ust; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_ust)) != 0))) { \
            printf("  ERROR: arg mismatch: ust\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_ust)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_ust)); \
            match = 0; \
        } \
        a = packed->args.msc, b = _msc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_msc)) != 0))) { \
            printf("  ERROR: arg mismatch: msc\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_msc)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_msc)); \
            match = 0; \
        } \
        a = packed->args.sbc, b = _sbc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_sbc)) != 0))) { \
            printf("  ERROR: arg mismatch: sbc\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_sbc)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_sbc)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXWaitForSbcOML(%p, %d, %"PRIi64", %p, %p, %p);\n", _dpy, _drawable, _target_sbc, _ust, _msc, _sbc); \
        } \
    } \
}
#define emit_glXWaitGL() { \
    mock_push(pack_glXWaitGL(NULL)); \
}
#define test_glXWaitGL() { \
    glXWaitGL_PACKED *packed = mock_expect(glXWaitGL); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}
#define emit_glXWaitVideoSyncSGI(divisor, remainder, count) { \
    mock_push(pack_glXWaitVideoSyncSGI(NULL, divisor, remainder, count)); \
}
#define test_glXWaitVideoSyncSGI(_divisor, _remainder, _count) { \
    glXWaitVideoSyncSGI_PACKED *packed = mock_expect(glXWaitVideoSyncSGI); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.divisor != _divisor) { \
            match = 0; \
        } \
        if (packed->args.remainder != _remainder) { \
            match = 0; \
        } \
        a = packed->args.count, b = _count; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_count)) != 0))) { \
            printf("  ERROR: arg mismatch: count\n"); \
            mock_ptrdiff("  expected:", (void *)b, (void *)a, sizeof(_count)); \
            mock_ptrdiff("     found:", (void *)a, (void *)b, sizeof(_count)); \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXWaitVideoSyncSGI(%d, %d, %p);\n", _divisor, _remainder, _count); \
        } \
    } \
}
#define emit_glXWaitX() { \
    mock_push(pack_glXWaitX(NULL)); \
}
#define test_glXWaitX() { \
    glXWaitX_PACKED *packed = mock_expect(glXWaitX); \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
    } \
}

void gles_glActiveTexture(glActiveTexture_ARG_EXPAND);
void gles_glAlphaFunc(glAlphaFunc_ARG_EXPAND);
void gles_glAlphaFuncx(glAlphaFuncx_ARG_EXPAND);
void gles_glBindBuffer(glBindBuffer_ARG_EXPAND);
void gles_glBindTexture(glBindTexture_ARG_EXPAND);
void gles_glBlendColorOES(glBlendColorOES_ARG_EXPAND);
void gles_glBlendEquationOES(glBlendEquationOES_ARG_EXPAND);
void gles_glBlendEquationSeparateOES(glBlendEquationSeparateOES_ARG_EXPAND);
void gles_glBlendFunc(glBlendFunc_ARG_EXPAND);
void gles_glBlendFuncSeparateOES(glBlendFuncSeparateOES_ARG_EXPAND);
void gles_glBufferData(glBufferData_ARG_EXPAND);
void gles_glBufferSubData(glBufferSubData_ARG_EXPAND);
void gles_glClear(glClear_ARG_EXPAND);
void gles_glClearColor(glClearColor_ARG_EXPAND);
void gles_glClearColorx(glClearColorx_ARG_EXPAND);
void gles_glClearDepthf(glClearDepthf_ARG_EXPAND);
void gles_glClearDepthx(glClearDepthx_ARG_EXPAND);
void gles_glClearStencil(glClearStencil_ARG_EXPAND);
void gles_glClientActiveTexture(glClientActiveTexture_ARG_EXPAND);
void gles_glClipPlanef(glClipPlanef_ARG_EXPAND);
void gles_glClipPlanex(glClipPlanex_ARG_EXPAND);
void gles_glColor4f(glColor4f_ARG_EXPAND);
void gles_glColor4ub(glColor4ub_ARG_EXPAND);
void gles_glColor4x(glColor4x_ARG_EXPAND);
void gles_glColorMask(glColorMask_ARG_EXPAND);
void gles_glColorPointer(glColorPointer_ARG_EXPAND);
void gles_glCompressedTexImage2D(glCompressedTexImage2D_ARG_EXPAND);
void gles_glCompressedTexSubImage2D(glCompressedTexSubImage2D_ARG_EXPAND);
void gles_glCopyTexImage2D(glCopyTexImage2D_ARG_EXPAND);
void gles_glCopyTexSubImage2D(glCopyTexSubImage2D_ARG_EXPAND);
void gles_glCullFace(glCullFace_ARG_EXPAND);
void gles_glDeleteBuffers(glDeleteBuffers_ARG_EXPAND);
void gles_glDeleteTextures(glDeleteTextures_ARG_EXPAND);
void gles_glDepthFunc(glDepthFunc_ARG_EXPAND);
void gles_glDepthMask(glDepthMask_ARG_EXPAND);
void gles_glDepthRangef(glDepthRangef_ARG_EXPAND);
void gles_glDepthRangex(glDepthRangex_ARG_EXPAND);
void gles_glDisable(glDisable_ARG_EXPAND);
void gles_glDisableClientState(glDisableClientState_ARG_EXPAND);
void gles_glDrawArrays(glDrawArrays_ARG_EXPAND);
void gles_glDrawElements(glDrawElements_ARG_EXPAND);
void gles_glEnable(glEnable_ARG_EXPAND);
void gles_glEnableClientState(glEnableClientState_ARG_EXPAND);
void gles_glFinish(glFinish_ARG_EXPAND);
void gles_glFlush(glFlush_ARG_EXPAND);
void gles_glFogf(glFogf_ARG_EXPAND);
void gles_glFogfv(glFogfv_ARG_EXPAND);
void gles_glFogx(glFogx_ARG_EXPAND);
void gles_glFogxv(glFogxv_ARG_EXPAND);
void gles_glFrontFace(glFrontFace_ARG_EXPAND);
void gles_glFrustumf(glFrustumf_ARG_EXPAND);
void gles_glFrustumx(glFrustumx_ARG_EXPAND);
void gles_glGenBuffers(glGenBuffers_ARG_EXPAND);
void gles_glGenTextures(glGenTextures_ARG_EXPAND);
void gles_glGetBooleanv(glGetBooleanv_ARG_EXPAND);
void gles_glGetBufferParameteriv(glGetBufferParameteriv_ARG_EXPAND);
void gles_glGetClipPlanef(glGetClipPlanef_ARG_EXPAND);
void gles_glGetClipPlanex(glGetClipPlanex_ARG_EXPAND);
GLenum gles_glGetError(glGetError_ARG_EXPAND);
void gles_glGetFixedv(glGetFixedv_ARG_EXPAND);
void gles_glGetFloatv(glGetFloatv_ARG_EXPAND);
void gles_glGetIntegerv(glGetIntegerv_ARG_EXPAND);
void gles_glGetLightfv(glGetLightfv_ARG_EXPAND);
void gles_glGetLightxv(glGetLightxv_ARG_EXPAND);
void gles_glGetMaterialfv(glGetMaterialfv_ARG_EXPAND);
void gles_glGetMaterialxv(glGetMaterialxv_ARG_EXPAND);
void gles_glGetPointerv(glGetPointerv_ARG_EXPAND);
const GLubyte * gles_glGetString(glGetString_ARG_EXPAND);
void gles_glGetTexEnvfv(glGetTexEnvfv_ARG_EXPAND);
void gles_glGetTexEnviv(glGetTexEnviv_ARG_EXPAND);
void gles_glGetTexEnvxv(glGetTexEnvxv_ARG_EXPAND);
void gles_glGetTexParameterfv(glGetTexParameterfv_ARG_EXPAND);
void gles_glGetTexParameteriv(glGetTexParameteriv_ARG_EXPAND);
void gles_glGetTexParameterxv(glGetTexParameterxv_ARG_EXPAND);
void gles_glHint(glHint_ARG_EXPAND);
GLboolean gles_glIsBuffer(glIsBuffer_ARG_EXPAND);
GLboolean gles_glIsEnabled(glIsEnabled_ARG_EXPAND);
GLboolean gles_glIsTexture(glIsTexture_ARG_EXPAND);
void gles_glLightModelf(glLightModelf_ARG_EXPAND);
void gles_glLightModelfv(glLightModelfv_ARG_EXPAND);
void gles_glLightModelx(glLightModelx_ARG_EXPAND);
void gles_glLightModelxv(glLightModelxv_ARG_EXPAND);
void gles_glLightf(glLightf_ARG_EXPAND);
void gles_glLightfv(glLightfv_ARG_EXPAND);
void gles_glLightx(glLightx_ARG_EXPAND);
void gles_glLightxv(glLightxv_ARG_EXPAND);
void gles_glLineWidth(glLineWidth_ARG_EXPAND);
void gles_glLineWidthx(glLineWidthx_ARG_EXPAND);
void gles_glLoadIdentity(glLoadIdentity_ARG_EXPAND);
void gles_glLoadMatrixf(glLoadMatrixf_ARG_EXPAND);
void gles_glLoadMatrixx(glLoadMatrixx_ARG_EXPAND);
void gles_glLogicOp(glLogicOp_ARG_EXPAND);
void gles_glMaterialf(glMaterialf_ARG_EXPAND);
void gles_glMaterialfv(glMaterialfv_ARG_EXPAND);
void gles_glMaterialx(glMaterialx_ARG_EXPAND);
void gles_glMaterialxv(glMaterialxv_ARG_EXPAND);
void gles_glMatrixMode(glMatrixMode_ARG_EXPAND);
void gles_glMultMatrixf(glMultMatrixf_ARG_EXPAND);
void gles_glMultMatrixx(glMultMatrixx_ARG_EXPAND);
void gles_glMultiTexCoord4f(glMultiTexCoord4f_ARG_EXPAND);
void gles_glMultiTexCoord4x(glMultiTexCoord4x_ARG_EXPAND);
void gles_glNormal3f(glNormal3f_ARG_EXPAND);
void gles_glNormal3x(glNormal3x_ARG_EXPAND);
void gles_glNormalPointer(glNormalPointer_ARG_EXPAND);
void gles_glOrthof(glOrthof_ARG_EXPAND);
void gles_glOrthox(glOrthox_ARG_EXPAND);
void gles_glPixelStorei(glPixelStorei_ARG_EXPAND);
void gles_glPointParameterf(glPointParameterf_ARG_EXPAND);
void gles_glPointParameterfv(glPointParameterfv_ARG_EXPAND);
void gles_glPointParameterx(glPointParameterx_ARG_EXPAND);
void gles_glPointParameterxv(glPointParameterxv_ARG_EXPAND);
void gles_glPointSize(glPointSize_ARG_EXPAND);
void gles_glPointSizePointerOES(glPointSizePointerOES_ARG_EXPAND);
void gles_glPointSizex(glPointSizex_ARG_EXPAND);
void gles_glPolygonOffset(glPolygonOffset_ARG_EXPAND);
void gles_glPolygonOffsetx(glPolygonOffsetx_ARG_EXPAND);
void gles_glPopMatrix(glPopMatrix_ARG_EXPAND);
void gles_glPushMatrix(glPushMatrix_ARG_EXPAND);
void gles_glReadPixels(glReadPixels_ARG_EXPAND);
void gles_glRotatef(glRotatef_ARG_EXPAND);
void gles_glRotatex(glRotatex_ARG_EXPAND);
void gles_glSampleCoverage(glSampleCoverage_ARG_EXPAND);
void gles_glSampleCoveragex(glSampleCoveragex_ARG_EXPAND);
void gles_glScalef(glScalef_ARG_EXPAND);
void gles_glScalex(glScalex_ARG_EXPAND);
void gles_glScissor(glScissor_ARG_EXPAND);
void gles_glShadeModel(glShadeModel_ARG_EXPAND);
void gles_glStencilFunc(glStencilFunc_ARG_EXPAND);
void gles_glStencilMask(glStencilMask_ARG_EXPAND);
void gles_glStencilOp(glStencilOp_ARG_EXPAND);
void gles_glTexCoordPointer(glTexCoordPointer_ARG_EXPAND);
void gles_glTexEnvf(glTexEnvf_ARG_EXPAND);
void gles_glTexEnvfv(glTexEnvfv_ARG_EXPAND);
void gles_glTexEnvi(glTexEnvi_ARG_EXPAND);
void gles_glTexEnviv(glTexEnviv_ARG_EXPAND);
void gles_glTexEnvx(glTexEnvx_ARG_EXPAND);
void gles_glTexEnvxv(glTexEnvxv_ARG_EXPAND);
void gles_glTexImage2D(glTexImage2D_ARG_EXPAND);
void gles_glTexParameterf(glTexParameterf_ARG_EXPAND);
void gles_glTexParameterfv(glTexParameterfv_ARG_EXPAND);
void gles_glTexParameteri(glTexParameteri_ARG_EXPAND);
void gles_glTexParameteriv(glTexParameteriv_ARG_EXPAND);
void gles_glTexParameterx(glTexParameterx_ARG_EXPAND);
void gles_glTexParameterxv(glTexParameterxv_ARG_EXPAND);
void gles_glTexSubImage2D(glTexSubImage2D_ARG_EXPAND);
void gles_glTranslatef(glTranslatef_ARG_EXPAND);
void gles_glTranslatex(glTranslatex_ARG_EXPAND);
void gles_glVertexPointer(glVertexPointer_ARG_EXPAND);
void gles_glViewport(glViewport_ARG_EXPAND);
#endif

#ifdef __cplusplus
} // extern "C"
#endif
#endif

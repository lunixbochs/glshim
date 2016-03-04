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

static int verbose_test = 0;
static int failed_test = 0;
#define verbose { verbose_test = 1; }

#define mock_warningf(...) { printf("WARNING: "), printf(__VA_ARGS__); }
#define mock_errorf(...) { printf("ERROR: "); printf(__VA_ARGS__); failed_test = 1; }
#define mock_assert(cond, ...) { if (!(cond)) { mock_errorf(__VA_ARGS__); }}
#define assert(cond) mock_assert(cond, "%s\n", #cond)

#define VT100_RED "\e[1;31m"
#define VT100_CLEAR "\e[0m"

#define mock_print_ptr(prefix, ptr, other, size) \
    printf("%s ", prefix); \
    if (ptr == NULL) { \
        printf("NULL"); \
    } else { \
        char *ac = ptr, *bc = other; \
        for (size_t i = 0; i < size; i++) { \
            if (i > 0 && i % 4 == 0) printf(" "); \
            if (i > 0 && i % 32 == 0) { \
                printf("| "); \
                for (int j = i - 32; j < i; j += 4) { \
                    printf("%f ", *(float *)&ac[j]); \
                } \
                printf("\n"); \
                printf("            "); \
            } \
            if (ac[i] == bc[i]) printf("%02X", (unsigned char)ac[i]); \
            else                printf(VT100_RED "%02X" VT100_CLEAR, (unsigned char)ac[i]); \
        } \
        int start = size - 32; \
        if (size % 32 != 0) { \
            size - (size % 32); \
        } \
        printf(" | "); \
        for (int j = start; j < size; j += 4) { \
            printf("%f ", *(float *)&ac[j]); \
        } \
    } \
    printf("\n");

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
    glActiveTexture_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glActiveTexture missing (no calls left)\n"); \
    } else if (packed->index != glActiveTexture_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glActiveTexture_INDEX); \
        if (! packed) { \
            mock_errorf("glActiveTexture missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glActiveTexture:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glAlphaFunc_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glAlphaFunc missing (no calls left)\n"); \
    } else if (packed->index != glAlphaFunc_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glAlphaFunc_INDEX); \
        if (! packed) { \
            mock_errorf("glAlphaFunc missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glAlphaFunc:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glAlphaFuncx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glAlphaFuncx missing (no calls left)\n"); \
    } else if (packed->index != glAlphaFuncx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glAlphaFuncx_INDEX); \
        if (! packed) { \
            mock_errorf("glAlphaFuncx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glAlphaFuncx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glBindBuffer_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBindBuffer missing (no calls left)\n"); \
    } else if (packed->index != glBindBuffer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glBindBuffer_INDEX); \
        if (! packed) { \
            mock_errorf("glBindBuffer missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glBindBuffer:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glBindTexture_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBindTexture missing (no calls left)\n"); \
    } else if (packed->index != glBindTexture_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glBindTexture_INDEX); \
        if (! packed) { \
            mock_errorf("glBindTexture missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glBindTexture:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glBlendColorOES_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBlendColorOES missing (no calls left)\n"); \
    } else if (packed->index != glBlendColorOES_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glBlendColorOES_INDEX); \
        if (! packed) { \
            mock_errorf("glBlendColorOES missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glBlendColorOES:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glBlendEquationOES_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBlendEquationOES missing (no calls left)\n"); \
    } else if (packed->index != glBlendEquationOES_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glBlendEquationOES_INDEX); \
        if (! packed) { \
            mock_errorf("glBlendEquationOES missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glBlendEquationOES:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glBlendEquationSeparateOES_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBlendEquationSeparateOES missing (no calls left)\n"); \
    } else if (packed->index != glBlendEquationSeparateOES_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glBlendEquationSeparateOES_INDEX); \
        if (! packed) { \
            mock_errorf("glBlendEquationSeparateOES missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glBlendEquationSeparateOES:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glBlendFunc_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBlendFunc missing (no calls left)\n"); \
    } else if (packed->index != glBlendFunc_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glBlendFunc_INDEX); \
        if (! packed) { \
            mock_errorf("glBlendFunc missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glBlendFunc:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glBlendFuncSeparateOES_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBlendFuncSeparateOES missing (no calls left)\n"); \
    } else if (packed->index != glBlendFuncSeparateOES_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glBlendFuncSeparateOES_INDEX); \
        if (! packed) { \
            mock_errorf("glBlendFuncSeparateOES missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glBlendFuncSeparateOES:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glBufferData_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBufferData missing (no calls left)\n"); \
    } else if (packed->index != glBufferData_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glBufferData_INDEX); \
        if (! packed) { \
            mock_errorf("glBufferData missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glBufferData:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_data)); \
            mock_print_ptr("     found:", a, b, sizeof(_data)); \
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
    glBufferSubData_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBufferSubData missing (no calls left)\n"); \
    } else if (packed->index != glBufferSubData_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glBufferSubData_INDEX); \
        if (! packed) { \
            mock_errorf("glBufferSubData missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glBufferSubData:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_data)); \
            mock_print_ptr("     found:", a, b, sizeof(_data)); \
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
    glClear_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClear missing (no calls left)\n"); \
    } else if (packed->index != glClear_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glClear_INDEX); \
        if (! packed) { \
            mock_errorf("glClear missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glClear:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glClearColor_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClearColor missing (no calls left)\n"); \
    } else if (packed->index != glClearColor_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glClearColor_INDEX); \
        if (! packed) { \
            mock_errorf("glClearColor missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glClearColor:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glClearColorx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClearColorx missing (no calls left)\n"); \
    } else if (packed->index != glClearColorx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glClearColorx_INDEX); \
        if (! packed) { \
            mock_errorf("glClearColorx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glClearColorx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glClearDepthf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClearDepthf missing (no calls left)\n"); \
    } else if (packed->index != glClearDepthf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glClearDepthf_INDEX); \
        if (! packed) { \
            mock_errorf("glClearDepthf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glClearDepthf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glClearDepthx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClearDepthx missing (no calls left)\n"); \
    } else if (packed->index != glClearDepthx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glClearDepthx_INDEX); \
        if (! packed) { \
            mock_errorf("glClearDepthx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glClearDepthx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glClearStencil_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClearStencil missing (no calls left)\n"); \
    } else if (packed->index != glClearStencil_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glClearStencil_INDEX); \
        if (! packed) { \
            mock_errorf("glClearStencil missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glClearStencil:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glClientActiveTexture_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClientActiveTexture missing (no calls left)\n"); \
    } else if (packed->index != glClientActiveTexture_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glClientActiveTexture_INDEX); \
        if (! packed) { \
            mock_errorf("glClientActiveTexture missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glClientActiveTexture:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glClipPlanef_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClipPlanef missing (no calls left)\n"); \
    } else if (packed->index != glClipPlanef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glClipPlanef_INDEX); \
        if (! packed) { \
            mock_errorf("glClipPlanef missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glClipPlanef:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.plane != _plane) { \
            match = 0; \
        } \
        a = packed->args.equation, b = _equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_equation)) != 0))) { \
            printf("  ERROR: arg mismatch: equation\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_equation)); \
            mock_print_ptr("     found:", a, b, sizeof(_equation)); \
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
    glClipPlanex_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClipPlanex missing (no calls left)\n"); \
    } else if (packed->index != glClipPlanex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glClipPlanex_INDEX); \
        if (! packed) { \
            mock_errorf("glClipPlanex missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glClipPlanex:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.plane != _plane) { \
            match = 0; \
        } \
        a = packed->args.equation, b = _equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_equation)) != 0))) { \
            printf("  ERROR: arg mismatch: equation\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_equation)); \
            mock_print_ptr("     found:", a, b, sizeof(_equation)); \
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
    glColor4f_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glColor4f missing (no calls left)\n"); \
    } else if (packed->index != glColor4f_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glColor4f_INDEX); \
        if (! packed) { \
            mock_errorf("glColor4f missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glColor4f:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glColor4ub_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glColor4ub missing (no calls left)\n"); \
    } else if (packed->index != glColor4ub_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glColor4ub_INDEX); \
        if (! packed) { \
            mock_errorf("glColor4ub missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glColor4ub:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glColor4x_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glColor4x missing (no calls left)\n"); \
    } else if (packed->index != glColor4x_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glColor4x_INDEX); \
        if (! packed) { \
            mock_errorf("glColor4x missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glColor4x:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glColorMask_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glColorMask missing (no calls left)\n"); \
    } else if (packed->index != glColorMask_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glColorMask_INDEX); \
        if (! packed) { \
            mock_errorf("glColorMask missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glColorMask:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glColorPointer_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glColorPointer missing (no calls left)\n"); \
    } else if (packed->index != glColorPointer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glColorPointer_INDEX); \
        if (! packed) { \
            mock_errorf("glColorPointer missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glColorPointer:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pointer)); \
            mock_print_ptr("     found:", a, b, sizeof(_pointer)); \
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
    glCompressedTexImage2D_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glCompressedTexImage2D missing (no calls left)\n"); \
    } else if (packed->index != glCompressedTexImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glCompressedTexImage2D_INDEX); \
        if (! packed) { \
            mock_errorf("glCompressedTexImage2D missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glCompressedTexImage2D:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_data)); \
            mock_print_ptr("     found:", a, b, sizeof(_data)); \
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
    glCompressedTexSubImage2D_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glCompressedTexSubImage2D missing (no calls left)\n"); \
    } else if (packed->index != glCompressedTexSubImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glCompressedTexSubImage2D_INDEX); \
        if (! packed) { \
            mock_errorf("glCompressedTexSubImage2D missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glCompressedTexSubImage2D:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_data)); \
            mock_print_ptr("     found:", a, b, sizeof(_data)); \
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
    glCopyTexImage2D_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glCopyTexImage2D missing (no calls left)\n"); \
    } else if (packed->index != glCopyTexImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glCopyTexImage2D_INDEX); \
        if (! packed) { \
            mock_errorf("glCopyTexImage2D missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glCopyTexImage2D:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glCopyTexSubImage2D_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glCopyTexSubImage2D missing (no calls left)\n"); \
    } else if (packed->index != glCopyTexSubImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glCopyTexSubImage2D_INDEX); \
        if (! packed) { \
            mock_errorf("glCopyTexSubImage2D missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glCopyTexSubImage2D:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glCullFace_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glCullFace missing (no calls left)\n"); \
    } else if (packed->index != glCullFace_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glCullFace_INDEX); \
        if (! packed) { \
            mock_errorf("glCullFace missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glCullFace:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glDeleteBuffers_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDeleteBuffers missing (no calls left)\n"); \
    } else if (packed->index != glDeleteBuffers_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glDeleteBuffers_INDEX); \
        if (! packed) { \
            mock_errorf("glDeleteBuffers missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glDeleteBuffers:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.n != _n) { \
            match = 0; \
        } \
        a = packed->args.buffers, b = _buffers; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_buffers)) != 0))) { \
            printf("  ERROR: arg mismatch: buffers\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_buffers)); \
            mock_print_ptr("     found:", a, b, sizeof(_buffers)); \
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
    glDeleteTextures_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDeleteTextures missing (no calls left)\n"); \
    } else if (packed->index != glDeleteTextures_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glDeleteTextures_INDEX); \
        if (! packed) { \
            mock_errorf("glDeleteTextures missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glDeleteTextures:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.n != _n) { \
            match = 0; \
        } \
        a = packed->args.textures, b = _textures; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_textures)) != 0))) { \
            printf("  ERROR: arg mismatch: textures\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_textures)); \
            mock_print_ptr("     found:", a, b, sizeof(_textures)); \
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
    glDepthFunc_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDepthFunc missing (no calls left)\n"); \
    } else if (packed->index != glDepthFunc_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glDepthFunc_INDEX); \
        if (! packed) { \
            mock_errorf("glDepthFunc missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glDepthFunc:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glDepthMask_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDepthMask missing (no calls left)\n"); \
    } else if (packed->index != glDepthMask_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glDepthMask_INDEX); \
        if (! packed) { \
            mock_errorf("glDepthMask missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glDepthMask:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glDepthRangef_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDepthRangef missing (no calls left)\n"); \
    } else if (packed->index != glDepthRangef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glDepthRangef_INDEX); \
        if (! packed) { \
            mock_errorf("glDepthRangef missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glDepthRangef:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glDepthRangex_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDepthRangex missing (no calls left)\n"); \
    } else if (packed->index != glDepthRangex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glDepthRangex_INDEX); \
        if (! packed) { \
            mock_errorf("glDepthRangex missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glDepthRangex:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glDisable_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDisable missing (no calls left)\n"); \
    } else if (packed->index != glDisable_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glDisable_INDEX); \
        if (! packed) { \
            mock_errorf("glDisable missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glDisable:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glDisableClientState_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDisableClientState missing (no calls left)\n"); \
    } else if (packed->index != glDisableClientState_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glDisableClientState_INDEX); \
        if (! packed) { \
            mock_errorf("glDisableClientState missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glDisableClientState:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glDrawArrays_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDrawArrays missing (no calls left)\n"); \
    } else if (packed->index != glDrawArrays_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glDrawArrays_INDEX); \
        if (! packed) { \
            mock_errorf("glDrawArrays missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glDrawArrays:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glDrawElements_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDrawElements missing (no calls left)\n"); \
    } else if (packed->index != glDrawElements_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glDrawElements_INDEX); \
        if (! packed) { \
            mock_errorf("glDrawElements missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glDrawElements:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_indices)); \
            mock_print_ptr("     found:", a, b, sizeof(_indices)); \
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
    glEnable_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glEnable missing (no calls left)\n"); \
    } else if (packed->index != glEnable_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glEnable_INDEX); \
        if (! packed) { \
            mock_errorf("glEnable missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glEnable:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glEnableClientState_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glEnableClientState missing (no calls left)\n"); \
    } else if (packed->index != glEnableClientState_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glEnableClientState_INDEX); \
        if (! packed) { \
            mock_errorf("glEnableClientState missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glEnableClientState:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glFinish_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFinish missing (no calls left)\n"); \
    } else if (packed->index != glFinish_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glFinish_INDEX); \
        if (! packed) { \
            mock_errorf("glFinish missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glFinish:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glFinish();\n", ); \
        } \
    } \
}
#define emit_glFlush() { \
    mock_push(pack_glFlush(NULL)); \
}
#define test_glFlush() { \
    glFlush_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFlush missing (no calls left)\n"); \
    } else if (packed->index != glFlush_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glFlush_INDEX); \
        if (! packed) { \
            mock_errorf("glFlush missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glFlush:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glFlush();\n", ); \
        } \
    } \
}
#define emit_glFogf(pname, param) { \
    mock_push(pack_glFogf(NULL, pname, param)); \
}
#define test_glFogf(_pname, _param) { \
    glFogf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFogf missing (no calls left)\n"); \
    } else if (packed->index != glFogf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glFogf_INDEX); \
        if (! packed) { \
            mock_errorf("glFogf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glFogf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glFogfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFogfv missing (no calls left)\n"); \
    } else if (packed->index != glFogfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glFogfv_INDEX); \
        if (! packed) { \
            mock_errorf("glFogfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glFogfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glFogx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFogx missing (no calls left)\n"); \
    } else if (packed->index != glFogx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glFogx_INDEX); \
        if (! packed) { \
            mock_errorf("glFogx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glFogx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glFogxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFogxv missing (no calls left)\n"); \
    } else if (packed->index != glFogxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glFogxv_INDEX); \
        if (! packed) { \
            mock_errorf("glFogxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glFogxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glFrontFace_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFrontFace missing (no calls left)\n"); \
    } else if (packed->index != glFrontFace_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glFrontFace_INDEX); \
        if (! packed) { \
            mock_errorf("glFrontFace missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glFrontFace:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glFrustumf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFrustumf missing (no calls left)\n"); \
    } else if (packed->index != glFrustumf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glFrustumf_INDEX); \
        if (! packed) { \
            mock_errorf("glFrustumf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glFrustumf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glFrustumx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFrustumx missing (no calls left)\n"); \
    } else if (packed->index != glFrustumx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glFrustumx_INDEX); \
        if (! packed) { \
            mock_errorf("glFrustumx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glFrustumx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glGenBuffers_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGenBuffers missing (no calls left)\n"); \
    } else if (packed->index != glGenBuffers_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGenBuffers_INDEX); \
        if (! packed) { \
            mock_errorf("glGenBuffers missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGenBuffers:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.n != _n) { \
            match = 0; \
        } \
        a = packed->args.buffers, b = _buffers; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_buffers)) != 0))) { \
            printf("  ERROR: arg mismatch: buffers\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_buffers)); \
            mock_print_ptr("     found:", a, b, sizeof(_buffers)); \
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
    glGenTextures_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGenTextures missing (no calls left)\n"); \
    } else if (packed->index != glGenTextures_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGenTextures_INDEX); \
        if (! packed) { \
            mock_errorf("glGenTextures missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGenTextures:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.n != _n) { \
            match = 0; \
        } \
        a = packed->args.textures, b = _textures; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_textures)) != 0))) { \
            printf("  ERROR: arg mismatch: textures\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_textures)); \
            mock_print_ptr("     found:", a, b, sizeof(_textures)); \
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
    glGetBooleanv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetBooleanv missing (no calls left)\n"); \
    } else if (packed->index != glGetBooleanv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetBooleanv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetBooleanv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetBooleanv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetBufferParameteriv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetBufferParameteriv missing (no calls left)\n"); \
    } else if (packed->index != glGetBufferParameteriv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetBufferParameteriv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetBufferParameteriv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetBufferParameteriv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetClipPlanef_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetClipPlanef missing (no calls left)\n"); \
    } else if (packed->index != glGetClipPlanef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetClipPlanef_INDEX); \
        if (! packed) { \
            mock_errorf("glGetClipPlanef missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetClipPlanef:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.plane != _plane) { \
            match = 0; \
        } \
        a = packed->args.equation, b = _equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_equation)) != 0))) { \
            printf("  ERROR: arg mismatch: equation\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_equation)); \
            mock_print_ptr("     found:", a, b, sizeof(_equation)); \
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
    glGetClipPlanex_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetClipPlanex missing (no calls left)\n"); \
    } else if (packed->index != glGetClipPlanex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetClipPlanex_INDEX); \
        if (! packed) { \
            mock_errorf("glGetClipPlanex missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetClipPlanex:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.plane != _plane) { \
            match = 0; \
        } \
        a = packed->args.equation, b = _equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_equation)) != 0))) { \
            printf("  ERROR: arg mismatch: equation\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_equation)); \
            mock_print_ptr("     found:", a, b, sizeof(_equation)); \
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
    glGetError_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetError missing (no calls left)\n"); \
    } else if (packed->index != glGetError_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetError_INDEX); \
        if (! packed) { \
            mock_errorf("glGetError missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetError:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glGetError();\n", ); \
        } \
    } \
}
#define emit_glGetFixedv(pname, params) { \
    mock_push(pack_glGetFixedv(NULL, pname, params)); \
}
#define test_glGetFixedv(_pname, _params) { \
    glGetFixedv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetFixedv missing (no calls left)\n"); \
    } else if (packed->index != glGetFixedv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetFixedv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetFixedv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetFixedv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetFloatv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetFloatv missing (no calls left)\n"); \
    } else if (packed->index != glGetFloatv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetFloatv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetFloatv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetFloatv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetIntegerv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetIntegerv missing (no calls left)\n"); \
    } else if (packed->index != glGetIntegerv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetIntegerv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetIntegerv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetIntegerv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetLightfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetLightfv missing (no calls left)\n"); \
    } else if (packed->index != glGetLightfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetLightfv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetLightfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetLightfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetLightxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetLightxv missing (no calls left)\n"); \
    } else if (packed->index != glGetLightxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetLightxv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetLightxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetLightxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetMaterialfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetMaterialfv missing (no calls left)\n"); \
    } else if (packed->index != glGetMaterialfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetMaterialfv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetMaterialfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetMaterialfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetMaterialxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetMaterialxv missing (no calls left)\n"); \
    } else if (packed->index != glGetMaterialxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetMaterialxv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetMaterialxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetMaterialxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetPointerv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetPointerv missing (no calls left)\n"); \
    } else if (packed->index != glGetPointerv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetPointerv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetPointerv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetPointerv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetString_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetString missing (no calls left)\n"); \
    } else if (packed->index != glGetString_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetString_INDEX); \
        if (! packed) { \
            mock_errorf("glGetString missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetString:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glGetTexEnvfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexEnvfv missing (no calls left)\n"); \
    } else if (packed->index != glGetTexEnvfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetTexEnvfv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetTexEnvfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetTexEnvfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetTexEnviv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexEnviv missing (no calls left)\n"); \
    } else if (packed->index != glGetTexEnviv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetTexEnviv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetTexEnviv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetTexEnviv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetTexEnvxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexEnvxv missing (no calls left)\n"); \
    } else if (packed->index != glGetTexEnvxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetTexEnvxv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetTexEnvxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetTexEnvxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetTexParameterfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexParameterfv missing (no calls left)\n"); \
    } else if (packed->index != glGetTexParameterfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetTexParameterfv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetTexParameterfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetTexParameterfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetTexParameteriv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexParameteriv missing (no calls left)\n"); \
    } else if (packed->index != glGetTexParameteriv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetTexParameteriv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetTexParameteriv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetTexParameteriv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glGetTexParameterxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexParameterxv missing (no calls left)\n"); \
    } else if (packed->index != glGetTexParameterxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glGetTexParameterxv_INDEX); \
        if (! packed) { \
            mock_errorf("glGetTexParameterxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glGetTexParameterxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glHint_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glHint missing (no calls left)\n"); \
    } else if (packed->index != glHint_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glHint_INDEX); \
        if (! packed) { \
            mock_errorf("glHint missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glHint:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glIsBuffer_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glIsBuffer missing (no calls left)\n"); \
    } else if (packed->index != glIsBuffer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glIsBuffer_INDEX); \
        if (! packed) { \
            mock_errorf("glIsBuffer missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glIsBuffer:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glIsEnabled_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glIsEnabled missing (no calls left)\n"); \
    } else if (packed->index != glIsEnabled_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glIsEnabled_INDEX); \
        if (! packed) { \
            mock_errorf("glIsEnabled missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glIsEnabled:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glIsTexture_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glIsTexture missing (no calls left)\n"); \
    } else if (packed->index != glIsTexture_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glIsTexture_INDEX); \
        if (! packed) { \
            mock_errorf("glIsTexture missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glIsTexture:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glLightModelf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightModelf missing (no calls left)\n"); \
    } else if (packed->index != glLightModelf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLightModelf_INDEX); \
        if (! packed) { \
            mock_errorf("glLightModelf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLightModelf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glLightModelfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightModelfv missing (no calls left)\n"); \
    } else if (packed->index != glLightModelfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLightModelfv_INDEX); \
        if (! packed) { \
            mock_errorf("glLightModelfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLightModelfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glLightModelx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightModelx missing (no calls left)\n"); \
    } else if (packed->index != glLightModelx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLightModelx_INDEX); \
        if (! packed) { \
            mock_errorf("glLightModelx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLightModelx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glLightModelxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightModelxv missing (no calls left)\n"); \
    } else if (packed->index != glLightModelxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLightModelxv_INDEX); \
        if (! packed) { \
            mock_errorf("glLightModelxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLightModelxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glLightf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightf missing (no calls left)\n"); \
    } else if (packed->index != glLightf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLightf_INDEX); \
        if (! packed) { \
            mock_errorf("glLightf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLightf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glLightfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightfv missing (no calls left)\n"); \
    } else if (packed->index != glLightfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLightfv_INDEX); \
        if (! packed) { \
            mock_errorf("glLightfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLightfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glLightx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightx missing (no calls left)\n"); \
    } else if (packed->index != glLightx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLightx_INDEX); \
        if (! packed) { \
            mock_errorf("glLightx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLightx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glLightxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightxv missing (no calls left)\n"); \
    } else if (packed->index != glLightxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLightxv_INDEX); \
        if (! packed) { \
            mock_errorf("glLightxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLightxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glLineWidth_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLineWidth missing (no calls left)\n"); \
    } else if (packed->index != glLineWidth_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLineWidth_INDEX); \
        if (! packed) { \
            mock_errorf("glLineWidth missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLineWidth:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glLineWidthx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLineWidthx missing (no calls left)\n"); \
    } else if (packed->index != glLineWidthx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLineWidthx_INDEX); \
        if (! packed) { \
            mock_errorf("glLineWidthx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLineWidthx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glLoadIdentity_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLoadIdentity missing (no calls left)\n"); \
    } else if (packed->index != glLoadIdentity_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLoadIdentity_INDEX); \
        if (! packed) { \
            mock_errorf("glLoadIdentity missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLoadIdentity:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glLoadIdentity();\n", ); \
        } \
    } \
}
#define emit_glLoadMatrixf(m) { \
    mock_push(pack_glLoadMatrixf(NULL, m)); \
}
#define test_glLoadMatrixf(_m) { \
    glLoadMatrixf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLoadMatrixf missing (no calls left)\n"); \
    } else if (packed->index != glLoadMatrixf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLoadMatrixf_INDEX); \
        if (! packed) { \
            mock_errorf("glLoadMatrixf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLoadMatrixf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.m, b = _m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_m)) != 0))) { \
            printf("  ERROR: arg mismatch: m\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_m)); \
            mock_print_ptr("     found:", a, b, sizeof(_m)); \
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
    glLoadMatrixx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLoadMatrixx missing (no calls left)\n"); \
    } else if (packed->index != glLoadMatrixx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLoadMatrixx_INDEX); \
        if (! packed) { \
            mock_errorf("glLoadMatrixx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLoadMatrixx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.m, b = _m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_m)) != 0))) { \
            printf("  ERROR: arg mismatch: m\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_m)); \
            mock_print_ptr("     found:", a, b, sizeof(_m)); \
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
    glLogicOp_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLogicOp missing (no calls left)\n"); \
    } else if (packed->index != glLogicOp_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glLogicOp_INDEX); \
        if (! packed) { \
            mock_errorf("glLogicOp missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glLogicOp:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glMaterialf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMaterialf missing (no calls left)\n"); \
    } else if (packed->index != glMaterialf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glMaterialf_INDEX); \
        if (! packed) { \
            mock_errorf("glMaterialf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glMaterialf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glMaterialfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMaterialfv missing (no calls left)\n"); \
    } else if (packed->index != glMaterialfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glMaterialfv_INDEX); \
        if (! packed) { \
            mock_errorf("glMaterialfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glMaterialfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glMaterialx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMaterialx missing (no calls left)\n"); \
    } else if (packed->index != glMaterialx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glMaterialx_INDEX); \
        if (! packed) { \
            mock_errorf("glMaterialx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glMaterialx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glMaterialxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMaterialxv missing (no calls left)\n"); \
    } else if (packed->index != glMaterialxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glMaterialxv_INDEX); \
        if (! packed) { \
            mock_errorf("glMaterialxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glMaterialxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glMatrixMode_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMatrixMode missing (no calls left)\n"); \
    } else if (packed->index != glMatrixMode_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glMatrixMode_INDEX); \
        if (! packed) { \
            mock_errorf("glMatrixMode missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glMatrixMode:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glMultMatrixf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMultMatrixf missing (no calls left)\n"); \
    } else if (packed->index != glMultMatrixf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glMultMatrixf_INDEX); \
        if (! packed) { \
            mock_errorf("glMultMatrixf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glMultMatrixf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.m, b = _m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_m)) != 0))) { \
            printf("  ERROR: arg mismatch: m\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_m)); \
            mock_print_ptr("     found:", a, b, sizeof(_m)); \
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
    glMultMatrixx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMultMatrixx missing (no calls left)\n"); \
    } else if (packed->index != glMultMatrixx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glMultMatrixx_INDEX); \
        if (! packed) { \
            mock_errorf("glMultMatrixx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glMultMatrixx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.m, b = _m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_m)) != 0))) { \
            printf("  ERROR: arg mismatch: m\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_m)); \
            mock_print_ptr("     found:", a, b, sizeof(_m)); \
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
    glMultiTexCoord4f_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMultiTexCoord4f missing (no calls left)\n"); \
    } else if (packed->index != glMultiTexCoord4f_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glMultiTexCoord4f_INDEX); \
        if (! packed) { \
            mock_errorf("glMultiTexCoord4f missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glMultiTexCoord4f:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glMultiTexCoord4x_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMultiTexCoord4x missing (no calls left)\n"); \
    } else if (packed->index != glMultiTexCoord4x_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glMultiTexCoord4x_INDEX); \
        if (! packed) { \
            mock_errorf("glMultiTexCoord4x missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glMultiTexCoord4x:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glNormal3f_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glNormal3f missing (no calls left)\n"); \
    } else if (packed->index != glNormal3f_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glNormal3f_INDEX); \
        if (! packed) { \
            mock_errorf("glNormal3f missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glNormal3f:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glNormal3x_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glNormal3x missing (no calls left)\n"); \
    } else if (packed->index != glNormal3x_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glNormal3x_INDEX); \
        if (! packed) { \
            mock_errorf("glNormal3x missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glNormal3x:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glNormalPointer_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glNormalPointer missing (no calls left)\n"); \
    } else if (packed->index != glNormalPointer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glNormalPointer_INDEX); \
        if (! packed) { \
            mock_errorf("glNormalPointer missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glNormalPointer:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pointer)); \
            mock_print_ptr("     found:", a, b, sizeof(_pointer)); \
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
    glOrthof_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glOrthof missing (no calls left)\n"); \
    } else if (packed->index != glOrthof_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glOrthof_INDEX); \
        if (! packed) { \
            mock_errorf("glOrthof missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glOrthof:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glOrthox_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glOrthox missing (no calls left)\n"); \
    } else if (packed->index != glOrthox_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glOrthox_INDEX); \
        if (! packed) { \
            mock_errorf("glOrthox missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glOrthox:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glPixelStorei_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPixelStorei missing (no calls left)\n"); \
    } else if (packed->index != glPixelStorei_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPixelStorei_INDEX); \
        if (! packed) { \
            mock_errorf("glPixelStorei missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPixelStorei:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glPointParameterf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointParameterf missing (no calls left)\n"); \
    } else if (packed->index != glPointParameterf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPointParameterf_INDEX); \
        if (! packed) { \
            mock_errorf("glPointParameterf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPointParameterf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glPointParameterfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointParameterfv missing (no calls left)\n"); \
    } else if (packed->index != glPointParameterfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPointParameterfv_INDEX); \
        if (! packed) { \
            mock_errorf("glPointParameterfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPointParameterfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glPointParameterx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointParameterx missing (no calls left)\n"); \
    } else if (packed->index != glPointParameterx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPointParameterx_INDEX); \
        if (! packed) { \
            mock_errorf("glPointParameterx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPointParameterx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glPointParameterxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointParameterxv missing (no calls left)\n"); \
    } else if (packed->index != glPointParameterxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPointParameterxv_INDEX); \
        if (! packed) { \
            mock_errorf("glPointParameterxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPointParameterxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (packed->args.pname != _pname) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glPointSize_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointSize missing (no calls left)\n"); \
    } else if (packed->index != glPointSize_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPointSize_INDEX); \
        if (! packed) { \
            mock_errorf("glPointSize missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPointSize:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glPointSizePointerOES_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointSizePointerOES missing (no calls left)\n"); \
    } else if (packed->index != glPointSizePointerOES_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPointSizePointerOES_INDEX); \
        if (! packed) { \
            mock_errorf("glPointSizePointerOES missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPointSizePointerOES:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pointer)); \
            mock_print_ptr("     found:", a, b, sizeof(_pointer)); \
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
    glPointSizex_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointSizex missing (no calls left)\n"); \
    } else if (packed->index != glPointSizex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPointSizex_INDEX); \
        if (! packed) { \
            mock_errorf("glPointSizex missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPointSizex:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glPolygonOffset_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPolygonOffset missing (no calls left)\n"); \
    } else if (packed->index != glPolygonOffset_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPolygonOffset_INDEX); \
        if (! packed) { \
            mock_errorf("glPolygonOffset missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPolygonOffset:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glPolygonOffsetx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPolygonOffsetx missing (no calls left)\n"); \
    } else if (packed->index != glPolygonOffsetx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPolygonOffsetx_INDEX); \
        if (! packed) { \
            mock_errorf("glPolygonOffsetx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPolygonOffsetx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glPopMatrix_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPopMatrix missing (no calls left)\n"); \
    } else if (packed->index != glPopMatrix_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPopMatrix_INDEX); \
        if (! packed) { \
            mock_errorf("glPopMatrix missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPopMatrix:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPopMatrix();\n", ); \
        } \
    } \
}
#define emit_glPushMatrix() { \
    mock_push(pack_glPushMatrix(NULL)); \
}
#define test_glPushMatrix() { \
    glPushMatrix_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPushMatrix missing (no calls left)\n"); \
    } else if (packed->index != glPushMatrix_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glPushMatrix_INDEX); \
        if (! packed) { \
            mock_errorf("glPushMatrix missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glPushMatrix:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glPushMatrix();\n", ); \
        } \
    } \
}
#define emit_glReadPixels(x, y, width, height, format, type, pixels) { \
    mock_push(pack_glReadPixels(NULL, x, y, width, height, format, type, pixels)); \
}
#define test_glReadPixels(_x, _y, _width, _height, _format, _type, _pixels) { \
    glReadPixels_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glReadPixels missing (no calls left)\n"); \
    } else if (packed->index != glReadPixels_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glReadPixels_INDEX); \
        if (! packed) { \
            mock_errorf("glReadPixels missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glReadPixels:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pixels)); \
            mock_print_ptr("     found:", a, b, sizeof(_pixels)); \
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
    glRotatef_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glRotatef missing (no calls left)\n"); \
    } else if (packed->index != glRotatef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glRotatef_INDEX); \
        if (! packed) { \
            mock_errorf("glRotatef missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glRotatef:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glRotatex_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glRotatex missing (no calls left)\n"); \
    } else if (packed->index != glRotatex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glRotatex_INDEX); \
        if (! packed) { \
            mock_errorf("glRotatex missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glRotatex:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glSampleCoverage_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glSampleCoverage missing (no calls left)\n"); \
    } else if (packed->index != glSampleCoverage_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glSampleCoverage_INDEX); \
        if (! packed) { \
            mock_errorf("glSampleCoverage missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glSampleCoverage:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glSampleCoveragex_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glSampleCoveragex missing (no calls left)\n"); \
    } else if (packed->index != glSampleCoveragex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glSampleCoveragex_INDEX); \
        if (! packed) { \
            mock_errorf("glSampleCoveragex missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glSampleCoveragex:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glScalef_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glScalef missing (no calls left)\n"); \
    } else if (packed->index != glScalef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glScalef_INDEX); \
        if (! packed) { \
            mock_errorf("glScalef missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glScalef:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glScalex_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glScalex missing (no calls left)\n"); \
    } else if (packed->index != glScalex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glScalex_INDEX); \
        if (! packed) { \
            mock_errorf("glScalex missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glScalex:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glScissor_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glScissor missing (no calls left)\n"); \
    } else if (packed->index != glScissor_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glScissor_INDEX); \
        if (! packed) { \
            mock_errorf("glScissor missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glScissor:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glShadeModel_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glShadeModel missing (no calls left)\n"); \
    } else if (packed->index != glShadeModel_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glShadeModel_INDEX); \
        if (! packed) { \
            mock_errorf("glShadeModel missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glShadeModel:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glStencilFunc_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glStencilFunc missing (no calls left)\n"); \
    } else if (packed->index != glStencilFunc_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glStencilFunc_INDEX); \
        if (! packed) { \
            mock_errorf("glStencilFunc missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glStencilFunc:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glStencilMask_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glStencilMask missing (no calls left)\n"); \
    } else if (packed->index != glStencilMask_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glStencilMask_INDEX); \
        if (! packed) { \
            mock_errorf("glStencilMask missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glStencilMask:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glStencilOp_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glStencilOp missing (no calls left)\n"); \
    } else if (packed->index != glStencilOp_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glStencilOp_INDEX); \
        if (! packed) { \
            mock_errorf("glStencilOp missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glStencilOp:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glTexCoordPointer_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexCoordPointer missing (no calls left)\n"); \
    } else if (packed->index != glTexCoordPointer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexCoordPointer_INDEX); \
        if (! packed) { \
            mock_errorf("glTexCoordPointer missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexCoordPointer:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pointer)); \
            mock_print_ptr("     found:", a, b, sizeof(_pointer)); \
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
    glTexEnvf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnvf missing (no calls left)\n"); \
    } else if (packed->index != glTexEnvf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexEnvf_INDEX); \
        if (! packed) { \
            mock_errorf("glTexEnvf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexEnvf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glTexEnvfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnvfv missing (no calls left)\n"); \
    } else if (packed->index != glTexEnvfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexEnvfv_INDEX); \
        if (! packed) { \
            mock_errorf("glTexEnvfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexEnvfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glTexEnvi_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnvi missing (no calls left)\n"); \
    } else if (packed->index != glTexEnvi_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexEnvi_INDEX); \
        if (! packed) { \
            mock_errorf("glTexEnvi missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexEnvi:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glTexEnviv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnviv missing (no calls left)\n"); \
    } else if (packed->index != glTexEnviv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexEnviv_INDEX); \
        if (! packed) { \
            mock_errorf("glTexEnviv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexEnviv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glTexEnvx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnvx missing (no calls left)\n"); \
    } else if (packed->index != glTexEnvx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexEnvx_INDEX); \
        if (! packed) { \
            mock_errorf("glTexEnvx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexEnvx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glTexEnvxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnvxv missing (no calls left)\n"); \
    } else if (packed->index != glTexEnvxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexEnvxv_INDEX); \
        if (! packed) { \
            mock_errorf("glTexEnvxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexEnvxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glTexImage2D_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexImage2D missing (no calls left)\n"); \
    } else if (packed->index != glTexImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexImage2D_INDEX); \
        if (! packed) { \
            mock_errorf("glTexImage2D missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexImage2D:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pixels)); \
            mock_print_ptr("     found:", a, b, sizeof(_pixels)); \
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
    glTexParameterf_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameterf missing (no calls left)\n"); \
    } else if (packed->index != glTexParameterf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexParameterf_INDEX); \
        if (! packed) { \
            mock_errorf("glTexParameterf missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexParameterf:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glTexParameterfv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameterfv missing (no calls left)\n"); \
    } else if (packed->index != glTexParameterfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexParameterfv_INDEX); \
        if (! packed) { \
            mock_errorf("glTexParameterfv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexParameterfv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glTexParameteri_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameteri missing (no calls left)\n"); \
    } else if (packed->index != glTexParameteri_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexParameteri_INDEX); \
        if (! packed) { \
            mock_errorf("glTexParameteri missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexParameteri:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glTexParameteriv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameteriv missing (no calls left)\n"); \
    } else if (packed->index != glTexParameteriv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexParameteriv_INDEX); \
        if (! packed) { \
            mock_errorf("glTexParameteriv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexParameteriv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glTexParameterx_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameterx missing (no calls left)\n"); \
    } else if (packed->index != glTexParameterx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexParameterx_INDEX); \
        if (! packed) { \
            mock_errorf("glTexParameterx missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexParameterx:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glTexParameterxv_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameterxv missing (no calls left)\n"); \
    } else if (packed->index != glTexParameterxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexParameterxv_INDEX); \
        if (! packed) { \
            mock_errorf("glTexParameterxv missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexParameterxv:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glTexSubImage2D_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexSubImage2D missing (no calls left)\n"); \
    } else if (packed->index != glTexSubImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTexSubImage2D_INDEX); \
        if (! packed) { \
            mock_errorf("glTexSubImage2D missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTexSubImage2D:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pixels)); \
            mock_print_ptr("     found:", a, b, sizeof(_pixels)); \
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
    glTranslatef_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTranslatef missing (no calls left)\n"); \
    } else if (packed->index != glTranslatef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTranslatef_INDEX); \
        if (! packed) { \
            mock_errorf("glTranslatef missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTranslatef:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glTranslatex_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTranslatex missing (no calls left)\n"); \
    } else if (packed->index != glTranslatex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glTranslatex_INDEX); \
        if (! packed) { \
            mock_errorf("glTranslatex missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glTranslatex:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glVertexPointer_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glVertexPointer missing (no calls left)\n"); \
    } else if (packed->index != glVertexPointer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glVertexPointer_INDEX); \
        if (! packed) { \
            mock_errorf("glVertexPointer missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glVertexPointer:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pointer)); \
            mock_print_ptr("     found:", a, b, sizeof(_pointer)); \
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
    glViewport_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glViewport missing (no calls left)\n"); \
    } else if (packed->index != glViewport_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glViewport_INDEX); \
        if (! packed) { \
            mock_errorf("glViewport missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glViewport:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glXAssociateDMPbufferSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXAssociateDMPbufferSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXAssociateDMPbufferSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXAssociateDMPbufferSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXAssociateDMPbufferSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXAssociateDMPbufferSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.pbuffer != _pbuffer) { \
            match = 0; \
        } \
        a = packed->args.params, b = _params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_params)) != 0))) { \
            printf("  ERROR: arg mismatch: params\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_params)); \
            mock_print_ptr("     found:", a, b, sizeof(_params)); \
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
    glXBindChannelToWindowSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXBindChannelToWindowSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXBindChannelToWindowSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXBindChannelToWindowSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXBindChannelToWindowSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXBindChannelToWindowSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_display)); \
            mock_print_ptr("     found:", a, b, sizeof(_display)); \
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
    glXBindHyperpipeSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXBindHyperpipeSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXBindHyperpipeSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXBindHyperpipeSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXBindHyperpipeSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXBindHyperpipeSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXBindSwapBarrierNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXBindSwapBarrierNV missing (no calls left)\n"); \
    } else if (packed->index != glXBindSwapBarrierNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXBindSwapBarrierNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXBindSwapBarrierNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXBindSwapBarrierNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXBindSwapBarrierSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXBindSwapBarrierSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXBindSwapBarrierSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXBindSwapBarrierSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXBindSwapBarrierSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXBindSwapBarrierSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXBindTexImageEXT_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXBindTexImageEXT missing (no calls left)\n"); \
    } else if (packed->index != glXBindTexImageEXT_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXBindTexImageEXT_INDEX); \
        if (! packed) { \
            mock_errorf("glXBindTexImageEXT missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXBindTexImageEXT:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_attrib_list)); \
            mock_print_ptr("     found:", a, b, sizeof(_attrib_list)); \
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
    glXBindVideoCaptureDeviceNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXBindVideoCaptureDeviceNV missing (no calls left)\n"); \
    } else if (packed->index != glXBindVideoCaptureDeviceNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXBindVideoCaptureDeviceNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXBindVideoCaptureDeviceNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXBindVideoCaptureDeviceNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXBindVideoDeviceNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXBindVideoDeviceNV missing (no calls left)\n"); \
    } else if (packed->index != glXBindVideoDeviceNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXBindVideoDeviceNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXBindVideoDeviceNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXBindVideoDeviceNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_attrib_list)); \
            mock_print_ptr("     found:", a, b, sizeof(_attrib_list)); \
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
    glXBindVideoImageNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXBindVideoImageNV missing (no calls left)\n"); \
    } else if (packed->index != glXBindVideoImageNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXBindVideoImageNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXBindVideoImageNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXBindVideoImageNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXChangeDrawableAttributes_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXChangeDrawableAttributes missing (no calls left)\n"); \
    } else if (packed->index != glXChangeDrawableAttributes_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXChangeDrawableAttributes_INDEX); \
        if (! packed) { \
            mock_errorf("glXChangeDrawableAttributes missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXChangeDrawableAttributes:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glXChangeDrawableAttributesSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXChangeDrawableAttributesSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXChangeDrawableAttributesSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXChangeDrawableAttributesSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXChangeDrawableAttributesSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXChangeDrawableAttributesSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glXChannelRectSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXChannelRectSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXChannelRectSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXChannelRectSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXChannelRectSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXChannelRectSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_display)); \
            mock_print_ptr("     found:", a, b, sizeof(_display)); \
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
    glXChannelRectSyncSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXChannelRectSyncSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXChannelRectSyncSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXChannelRectSyncSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXChannelRectSyncSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXChannelRectSyncSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_display)); \
            mock_print_ptr("     found:", a, b, sizeof(_display)); \
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
    glXChooseFBConfig_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXChooseFBConfig missing (no calls left)\n"); \
    } else if (packed->index != glXChooseFBConfig_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXChooseFBConfig_INDEX); \
        if (! packed) { \
            mock_errorf("glXChooseFBConfig missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXChooseFBConfig:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_attrib_list)); \
            mock_print_ptr("     found:", a, b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        a = packed->args.nelements, b = _nelements; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_nelements)) != 0))) { \
            printf("  ERROR: arg mismatch: nelements\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_nelements)); \
            mock_print_ptr("     found:", a, b, sizeof(_nelements)); \
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
    glXChooseFBConfigSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXChooseFBConfigSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXChooseFBConfigSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXChooseFBConfigSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXChooseFBConfigSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXChooseFBConfigSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_attrib_list)); \
            mock_print_ptr("     found:", a, b, sizeof(_attrib_list)); \
            match = 0; \
        } \
        a = packed->args.nelements, b = _nelements; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_nelements)) != 0))) { \
            printf("  ERROR: arg mismatch: nelements\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_nelements)); \
            mock_print_ptr("     found:", a, b, sizeof(_nelements)); \
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
    glXChooseVisual_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXChooseVisual missing (no calls left)\n"); \
    } else if (packed->index != glXChooseVisual_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXChooseVisual_INDEX); \
        if (! packed) { \
            mock_errorf("glXChooseVisual missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXChooseVisual:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.attribList, b = _attribList; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attribList)) != 0))) { \
            printf("  ERROR: arg mismatch: attribList\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_attribList)); \
            mock_print_ptr("     found:", a, b, sizeof(_attribList)); \
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
    glXClientInfo_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXClientInfo missing (no calls left)\n"); \
    } else if (packed->index != glXClientInfo_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXClientInfo_INDEX); \
        if (! packed) { \
            mock_errorf("glXClientInfo missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXClientInfo:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXClientInfo();\n", ); \
        } \
    } \
}
#define emit_glXCopyContext(dpy, src, dst, mask) { \
    mock_push(pack_glXCopyContext(NULL, dpy, src, dst, mask)); \
}
#define test_glXCopyContext(_dpy, _src, _dst, _mask) { \
    glXCopyContext_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCopyContext missing (no calls left)\n"); \
    } else if (packed->index != glXCopyContext_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCopyContext_INDEX); \
        if (! packed) { \
            mock_errorf("glXCopyContext missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCopyContext:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXCopyImageSubDataNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCopyImageSubDataNV missing (no calls left)\n"); \
    } else if (packed->index != glXCopyImageSubDataNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCopyImageSubDataNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXCopyImageSubDataNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCopyImageSubDataNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXCopySubBufferMESA_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCopySubBufferMESA missing (no calls left)\n"); \
    } else if (packed->index != glXCopySubBufferMESA_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCopySubBufferMESA_INDEX); \
        if (! packed) { \
            mock_errorf("glXCopySubBufferMESA missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCopySubBufferMESA:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXCreateContext_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreateContext missing (no calls left)\n"); \
    } else if (packed->index != glXCreateContext_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreateContext_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreateContext missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreateContext:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.vis, b = _vis; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_vis)) != 0))) { \
            printf("  ERROR: arg mismatch: vis\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_vis)); \
            mock_print_ptr("     found:", a, b, sizeof(_vis)); \
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
    glXCreateContextAttribsARB_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreateContextAttribsARB missing (no calls left)\n"); \
    } else if (packed->index != glXCreateContextAttribsARB_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreateContextAttribsARB_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreateContextAttribsARB missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreateContextAttribsARB:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_attrib_list)); \
            mock_print_ptr("     found:", a, b, sizeof(_attrib_list)); \
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
    glXCreateContextWithConfigSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreateContextWithConfigSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXCreateContextWithConfigSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreateContextWithConfigSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreateContextWithConfigSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreateContextWithConfigSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXCreateGLXPbufferSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreateGLXPbufferSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXCreateGLXPbufferSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreateGLXPbufferSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreateGLXPbufferSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreateGLXPbufferSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_attrib_list)); \
            mock_print_ptr("     found:", a, b, sizeof(_attrib_list)); \
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
    glXCreateGLXPixmap_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreateGLXPixmap missing (no calls left)\n"); \
    } else if (packed->index != glXCreateGLXPixmap_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreateGLXPixmap_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreateGLXPixmap missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreateGLXPixmap:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.visual, b = _visual; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_visual)) != 0))) { \
            printf("  ERROR: arg mismatch: visual\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_visual)); \
            mock_print_ptr("     found:", a, b, sizeof(_visual)); \
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
    glXCreateGLXPixmapMESA_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreateGLXPixmapMESA missing (no calls left)\n"); \
    } else if (packed->index != glXCreateGLXPixmapMESA_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreateGLXPixmapMESA_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreateGLXPixmapMESA missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreateGLXPixmapMESA:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.visual, b = _visual; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_visual)) != 0))) { \
            printf("  ERROR: arg mismatch: visual\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_visual)); \
            mock_print_ptr("     found:", a, b, sizeof(_visual)); \
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
    glXCreateGLXPixmapWithConfigSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreateGLXPixmapWithConfigSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXCreateGLXPixmapWithConfigSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreateGLXPixmapWithConfigSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreateGLXPixmapWithConfigSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreateGLXPixmapWithConfigSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXCreateGLXVideoSourceSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreateGLXVideoSourceSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXCreateGLXVideoSourceSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreateGLXVideoSourceSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreateGLXVideoSourceSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreateGLXVideoSourceSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_display)); \
            mock_print_ptr("     found:", a, b, sizeof(_display)); \
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
    glXCreateNewContext_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreateNewContext missing (no calls left)\n"); \
    } else if (packed->index != glXCreateNewContext_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreateNewContext_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreateNewContext missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreateNewContext:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXCreatePbuffer_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreatePbuffer missing (no calls left)\n"); \
    } else if (packed->index != glXCreatePbuffer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreatePbuffer_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreatePbuffer missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreatePbuffer:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.config != _config) { \
            match = 0; \
        } \
        a = packed->args.attrib_list, b = _attrib_list; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_attrib_list)) != 0))) { \
            printf("  ERROR: arg mismatch: attrib_list\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_attrib_list)); \
            mock_print_ptr("     found:", a, b, sizeof(_attrib_list)); \
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
    glXCreatePixmap_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreatePixmap missing (no calls left)\n"); \
    } else if (packed->index != glXCreatePixmap_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreatePixmap_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreatePixmap missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreatePixmap:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_attrib_list)); \
            mock_print_ptr("     found:", a, b, sizeof(_attrib_list)); \
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
    glXCreateWindow_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCreateWindow missing (no calls left)\n"); \
    } else if (packed->index != glXCreateWindow_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCreateWindow_INDEX); \
        if (! packed) { \
            mock_errorf("glXCreateWindow missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCreateWindow:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_attrib_list)); \
            mock_print_ptr("     found:", a, b, sizeof(_attrib_list)); \
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
    glXCushionSGI_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXCushionSGI missing (no calls left)\n"); \
    } else if (packed->index != glXCushionSGI_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXCushionSGI_INDEX); \
        if (! packed) { \
            mock_errorf("glXCushionSGI missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXCushionSGI:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXDestroyContext_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXDestroyContext missing (no calls left)\n"); \
    } else if (packed->index != glXDestroyContext_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXDestroyContext_INDEX); \
        if (! packed) { \
            mock_errorf("glXDestroyContext missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXDestroyContext:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXDestroyGLXPbufferSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXDestroyGLXPbufferSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXDestroyGLXPbufferSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXDestroyGLXPbufferSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXDestroyGLXPbufferSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXDestroyGLXPbufferSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXDestroyGLXPixmap_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXDestroyGLXPixmap missing (no calls left)\n"); \
    } else if (packed->index != glXDestroyGLXPixmap_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXDestroyGLXPixmap_INDEX); \
        if (! packed) { \
            mock_errorf("glXDestroyGLXPixmap missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXDestroyGLXPixmap:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXDestroyGLXVideoSourceSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXDestroyGLXVideoSourceSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXDestroyGLXVideoSourceSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXDestroyGLXVideoSourceSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXDestroyGLXVideoSourceSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXDestroyGLXVideoSourceSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXDestroyHyperpipeConfigSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXDestroyHyperpipeConfigSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXDestroyHyperpipeConfigSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXDestroyHyperpipeConfigSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXDestroyHyperpipeConfigSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXDestroyHyperpipeConfigSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXDestroyPbuffer_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXDestroyPbuffer missing (no calls left)\n"); \
    } else if (packed->index != glXDestroyPbuffer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXDestroyPbuffer_INDEX); \
        if (! packed) { \
            mock_errorf("glXDestroyPbuffer missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXDestroyPbuffer:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXDestroyPixmap_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXDestroyPixmap missing (no calls left)\n"); \
    } else if (packed->index != glXDestroyPixmap_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXDestroyPixmap_INDEX); \
        if (! packed) { \
            mock_errorf("glXDestroyPixmap missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXDestroyPixmap:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXDestroyWindow_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXDestroyWindow missing (no calls left)\n"); \
    } else if (packed->index != glXDestroyWindow_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXDestroyWindow_INDEX); \
        if (! packed) { \
            mock_errorf("glXDestroyWindow missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXDestroyWindow:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXEnumerateVideoCaptureDevicesNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXEnumerateVideoCaptureDevicesNV missing (no calls left)\n"); \
    } else if (packed->index != glXEnumerateVideoCaptureDevicesNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXEnumerateVideoCaptureDevicesNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXEnumerateVideoCaptureDevicesNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXEnumerateVideoCaptureDevicesNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.nelements, b = _nelements; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_nelements)) != 0))) { \
            printf("  ERROR: arg mismatch: nelements\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_nelements)); \
            mock_print_ptr("     found:", a, b, sizeof(_nelements)); \
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
    glXEnumerateVideoDevicesNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXEnumerateVideoDevicesNV missing (no calls left)\n"); \
    } else if (packed->index != glXEnumerateVideoDevicesNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXEnumerateVideoDevicesNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXEnumerateVideoDevicesNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXEnumerateVideoDevicesNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.nelements, b = _nelements; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_nelements)) != 0))) { \
            printf("  ERROR: arg mismatch: nelements\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_nelements)); \
            mock_print_ptr("     found:", a, b, sizeof(_nelements)); \
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
    glXFreeContextEXT_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXFreeContextEXT missing (no calls left)\n"); \
    } else if (packed->index != glXFreeContextEXT_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXFreeContextEXT_INDEX); \
        if (! packed) { \
            mock_errorf("glXFreeContextEXT missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXFreeContextEXT:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXGetAGPOffsetMESA_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetAGPOffsetMESA missing (no calls left)\n"); \
    } else if (packed->index != glXGetAGPOffsetMESA_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetAGPOffsetMESA_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetAGPOffsetMESA missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetAGPOffsetMESA:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.pointer, b = _pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pointer)) != 0))) { \
            printf("  ERROR: arg mismatch: pointer\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_pointer)); \
            mock_print_ptr("     found:", a, b, sizeof(_pointer)); \
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
    glXGetClientString_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetClientString missing (no calls left)\n"); \
    } else if (packed->index != glXGetClientString_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetClientString_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetClientString missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetClientString:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_display)); \
            mock_print_ptr("     found:", a, b, sizeof(_display)); \
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
    glXGetConfig_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetConfig missing (no calls left)\n"); \
    } else if (packed->index != glXGetConfig_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetConfig_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetConfig missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetConfig:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_display)); \
            mock_print_ptr("     found:", a, b, sizeof(_display)); \
            match = 0; \
        } \
        a = packed->args.visual, b = _visual; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_visual)) != 0))) { \
            printf("  ERROR: arg mismatch: visual\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_visual)); \
            mock_print_ptr("     found:", a, b, sizeof(_visual)); \
            match = 0; \
        } \
        if (packed->args.attribute != _attribute) { \
            match = 0; \
        } \
        a = packed->args.value, b = _value; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_value)) != 0))) { \
            printf("  ERROR: arg mismatch: value\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_value)); \
            mock_print_ptr("     found:", a, b, sizeof(_value)); \
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
    glXGetContextIDEXT_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetContextIDEXT missing (no calls left)\n"); \
    } else if (packed->index != glXGetContextIDEXT_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetContextIDEXT_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetContextIDEXT missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetContextIDEXT:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glXGetCurrentContext_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetCurrentContext missing (no calls left)\n"); \
    } else if (packed->index != glXGetCurrentContext_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetCurrentContext_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetCurrentContext missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetCurrentContext:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetCurrentContext();\n", ); \
        } \
    } \
}
#define emit_glXGetCurrentDisplay() { \
    mock_push(pack_glXGetCurrentDisplay(NULL)); \
}
#define test_glXGetCurrentDisplay() { \
    glXGetCurrentDisplay_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetCurrentDisplay missing (no calls left)\n"); \
    } else if (packed->index != glXGetCurrentDisplay_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetCurrentDisplay_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetCurrentDisplay missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetCurrentDisplay:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetCurrentDisplay();\n", ); \
        } \
    } \
}
#define emit_glXGetCurrentDisplayEXT() { \
    mock_push(pack_glXGetCurrentDisplayEXT(NULL)); \
}
#define test_glXGetCurrentDisplayEXT() { \
    glXGetCurrentDisplayEXT_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetCurrentDisplayEXT missing (no calls left)\n"); \
    } else if (packed->index != glXGetCurrentDisplayEXT_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetCurrentDisplayEXT_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetCurrentDisplayEXT missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetCurrentDisplayEXT:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetCurrentDisplayEXT();\n", ); \
        } \
    } \
}
#define emit_glXGetCurrentDrawable() { \
    mock_push(pack_glXGetCurrentDrawable(NULL)); \
}
#define test_glXGetCurrentDrawable() { \
    glXGetCurrentDrawable_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetCurrentDrawable missing (no calls left)\n"); \
    } else if (packed->index != glXGetCurrentDrawable_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetCurrentDrawable_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetCurrentDrawable missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetCurrentDrawable:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetCurrentDrawable();\n", ); \
        } \
    } \
}
#define emit_glXGetCurrentReadDrawable() { \
    mock_push(pack_glXGetCurrentReadDrawable(NULL)); \
}
#define test_glXGetCurrentReadDrawable() { \
    glXGetCurrentReadDrawable_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetCurrentReadDrawable missing (no calls left)\n"); \
    } else if (packed->index != glXGetCurrentReadDrawable_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetCurrentReadDrawable_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetCurrentReadDrawable missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetCurrentReadDrawable:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetCurrentReadDrawable();\n", ); \
        } \
    } \
}
#define emit_glXGetCurrentReadDrawableSGI() { \
    mock_push(pack_glXGetCurrentReadDrawableSGI(NULL)); \
}
#define test_glXGetCurrentReadDrawableSGI() { \
    glXGetCurrentReadDrawableSGI_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetCurrentReadDrawableSGI missing (no calls left)\n"); \
    } else if (packed->index != glXGetCurrentReadDrawableSGI_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetCurrentReadDrawableSGI_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetCurrentReadDrawableSGI missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetCurrentReadDrawableSGI:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetCurrentReadDrawableSGI();\n", ); \
        } \
    } \
}
#define emit_glXGetDrawableAttributes(drawable) { \
    mock_push(pack_glXGetDrawableAttributes(NULL, drawable)); \
}
#define test_glXGetDrawableAttributes(_drawable) { \
    glXGetDrawableAttributes_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetDrawableAttributes missing (no calls left)\n"); \
    } else if (packed->index != glXGetDrawableAttributes_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetDrawableAttributes_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetDrawableAttributes missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetDrawableAttributes:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glXGetDrawableAttributesSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetDrawableAttributesSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXGetDrawableAttributesSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetDrawableAttributesSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetDrawableAttributesSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetDrawableAttributesSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glXGetFBConfigAttrib_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetFBConfigAttrib missing (no calls left)\n"); \
    } else if (packed->index != glXGetFBConfigAttrib_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetFBConfigAttrib_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetFBConfigAttrib missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetFBConfigAttrib:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_value)); \
            mock_print_ptr("     found:", a, b, sizeof(_value)); \
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
    glXGetFBConfigAttribSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetFBConfigAttribSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXGetFBConfigAttribSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetFBConfigAttribSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetFBConfigAttribSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetFBConfigAttribSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_value)); \
            mock_print_ptr("     found:", a, b, sizeof(_value)); \
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
    glXGetFBConfigFromVisualSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetFBConfigFromVisualSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXGetFBConfigFromVisualSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetFBConfigFromVisualSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetFBConfigFromVisualSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetFBConfigFromVisualSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.vis, b = _vis; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_vis)) != 0))) { \
            printf("  ERROR: arg mismatch: vis\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_vis)); \
            mock_print_ptr("     found:", a, b, sizeof(_vis)); \
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
    glXGetFBConfigs_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetFBConfigs missing (no calls left)\n"); \
    } else if (packed->index != glXGetFBConfigs_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetFBConfigs_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetFBConfigs missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetFBConfigs:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.nelements, b = _nelements; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_nelements)) != 0))) { \
            printf("  ERROR: arg mismatch: nelements\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_nelements)); \
            mock_print_ptr("     found:", a, b, sizeof(_nelements)); \
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
    glXGetFBConfigsSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetFBConfigsSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXGetFBConfigsSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetFBConfigsSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetFBConfigsSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetFBConfigsSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetFBConfigsSGIX();\n", ); \
        } \
    } \
}
#define emit_glXGetMscRateOML(dpy, drawable, numerator, denominator) { \
    mock_push(pack_glXGetMscRateOML(NULL, dpy, drawable, numerator, denominator)); \
}
#define test_glXGetMscRateOML(_dpy, _drawable, _numerator, _denominator) { \
    glXGetMscRateOML_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetMscRateOML missing (no calls left)\n"); \
    } else if (packed->index != glXGetMscRateOML_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetMscRateOML_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetMscRateOML missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetMscRateOML:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        a = packed->args.numerator, b = _numerator; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_numerator)) != 0))) { \
            printf("  ERROR: arg mismatch: numerator\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_numerator)); \
            mock_print_ptr("     found:", a, b, sizeof(_numerator)); \
            match = 0; \
        } \
        a = packed->args.denominator, b = _denominator; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_denominator)) != 0))) { \
            printf("  ERROR: arg mismatch: denominator\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_denominator)); \
            mock_print_ptr("     found:", a, b, sizeof(_denominator)); \
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
    glXGetProcAddress_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetProcAddress missing (no calls left)\n"); \
    } else if (packed->index != glXGetProcAddress_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetProcAddress_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetProcAddress missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetProcAddress:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.procName, b = _procName; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_procName)) != 0))) { \
            printf("  ERROR: arg mismatch: procName\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_procName)); \
            mock_print_ptr("     found:", a, b, sizeof(_procName)); \
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
    glXGetProcAddressARB_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetProcAddressARB missing (no calls left)\n"); \
    } else if (packed->index != glXGetProcAddressARB_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetProcAddressARB_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetProcAddressARB missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetProcAddressARB:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.procName, b = _procName; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_procName)) != 0))) { \
            printf("  ERROR: arg mismatch: procName\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_procName)); \
            mock_print_ptr("     found:", a, b, sizeof(_procName)); \
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
    glXGetSelectedEvent_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetSelectedEvent missing (no calls left)\n"); \
    } else if (packed->index != glXGetSelectedEvent_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetSelectedEvent_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetSelectedEvent missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetSelectedEvent:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.draw != _draw) { \
            match = 0; \
        } \
        a = packed->args.event_mask, b = _event_mask; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_event_mask)) != 0))) { \
            printf("  ERROR: arg mismatch: event_mask\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_event_mask)); \
            mock_print_ptr("     found:", a, b, sizeof(_event_mask)); \
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
    glXGetSelectedEventSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetSelectedEventSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXGetSelectedEventSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetSelectedEventSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetSelectedEventSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetSelectedEventSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        a = packed->args.mask, b = _mask; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_mask)) != 0))) { \
            printf("  ERROR: arg mismatch: mask\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_mask)); \
            mock_print_ptr("     found:", a, b, sizeof(_mask)); \
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
    glXGetSyncValuesOML_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetSyncValuesOML missing (no calls left)\n"); \
    } else if (packed->index != glXGetSyncValuesOML_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetSyncValuesOML_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetSyncValuesOML missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetSyncValuesOML:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        a = packed->args.ust, b = _ust; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_ust)) != 0))) { \
            printf("  ERROR: arg mismatch: ust\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_ust)); \
            mock_print_ptr("     found:", a, b, sizeof(_ust)); \
            match = 0; \
        } \
        a = packed->args.msc, b = _msc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_msc)) != 0))) { \
            printf("  ERROR: arg mismatch: msc\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_msc)); \
            mock_print_ptr("     found:", a, b, sizeof(_msc)); \
            match = 0; \
        } \
        a = packed->args.sbc, b = _sbc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_sbc)) != 0))) { \
            printf("  ERROR: arg mismatch: sbc\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_sbc)); \
            mock_print_ptr("     found:", a, b, sizeof(_sbc)); \
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
    glXGetTransparentIndexSUN_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetTransparentIndexSUN missing (no calls left)\n"); \
    } else if (packed->index != glXGetTransparentIndexSUN_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetTransparentIndexSUN_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetTransparentIndexSUN missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetTransparentIndexSUN:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pTransparentIndex)); \
            mock_print_ptr("     found:", a, b, sizeof(_pTransparentIndex)); \
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
    glXGetVideoDeviceNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetVideoDeviceNV missing (no calls left)\n"); \
    } else if (packed->index != glXGetVideoDeviceNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetVideoDeviceNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetVideoDeviceNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetVideoDeviceNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pVideoDevice)); \
            mock_print_ptr("     found:", a, b, sizeof(_pVideoDevice)); \
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
    glXGetVideoInfoNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetVideoInfoNV missing (no calls left)\n"); \
    } else if (packed->index != glXGetVideoInfoNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetVideoInfoNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetVideoInfoNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetVideoInfoNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pulCounterOutputPbuffer)); \
            mock_print_ptr("     found:", a, b, sizeof(_pulCounterOutputPbuffer)); \
            match = 0; \
        } \
        a = packed->args.pulCounterOutputVideo, b = _pulCounterOutputVideo; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_pulCounterOutputVideo)) != 0))) { \
            printf("  ERROR: arg mismatch: pulCounterOutputVideo\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_pulCounterOutputVideo)); \
            mock_print_ptr("     found:", a, b, sizeof(_pulCounterOutputVideo)); \
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
    glXGetVideoSyncSGI_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetVideoSyncSGI missing (no calls left)\n"); \
    } else if (packed->index != glXGetVideoSyncSGI_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetVideoSyncSGI_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetVideoSyncSGI missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetVideoSyncSGI:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.count, b = _count; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_count)) != 0))) { \
            printf("  ERROR: arg mismatch: count\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_count)); \
            mock_print_ptr("     found:", a, b, sizeof(_count)); \
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
    glXGetVisualConfigs_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetVisualConfigs missing (no calls left)\n"); \
    } else if (packed->index != glXGetVisualConfigs_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetVisualConfigs_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetVisualConfigs missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetVisualConfigs:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXGetVisualConfigs();\n", ); \
        } \
    } \
}
#define emit_glXGetVisualFromFBConfig(dpy, config) { \
    mock_push(pack_glXGetVisualFromFBConfig(NULL, dpy, config)); \
}
#define test_glXGetVisualFromFBConfig(_dpy, _config) { \
    glXGetVisualFromFBConfig_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetVisualFromFBConfig missing (no calls left)\n"); \
    } else if (packed->index != glXGetVisualFromFBConfig_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetVisualFromFBConfig_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetVisualFromFBConfig missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetVisualFromFBConfig:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXGetVisualFromFBConfigSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXGetVisualFromFBConfigSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXGetVisualFromFBConfigSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXGetVisualFromFBConfigSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXGetVisualFromFBConfigSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXGetVisualFromFBConfigSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXHyperpipeAttribSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXHyperpipeAttribSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXHyperpipeAttribSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXHyperpipeAttribSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXHyperpipeAttribSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXHyperpipeAttribSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_attribList)); \
            mock_print_ptr("     found:", a, b, sizeof(_attribList)); \
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
    glXHyperpipeConfigSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXHyperpipeConfigSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXHyperpipeConfigSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXHyperpipeConfigSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXHyperpipeConfigSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXHyperpipeConfigSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_cfg)); \
            mock_print_ptr("     found:", a, b, sizeof(_cfg)); \
            match = 0; \
        } \
        a = packed->args.hpId, b = _hpId; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_hpId)) != 0))) { \
            printf("  ERROR: arg mismatch: hpId\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_hpId)); \
            mock_print_ptr("     found:", a, b, sizeof(_hpId)); \
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
    glXImportContextEXT_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXImportContextEXT missing (no calls left)\n"); \
    } else if (packed->index != glXImportContextEXT_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXImportContextEXT_INDEX); \
        if (! packed) { \
            mock_errorf("glXImportContextEXT missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXImportContextEXT:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXIsDirect_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXIsDirect missing (no calls left)\n"); \
    } else if (packed->index != glXIsDirect_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXIsDirect_INDEX); \
        if (! packed) { \
            mock_errorf("glXIsDirect missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXIsDirect:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXJoinSwapGroupNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXJoinSwapGroupNV missing (no calls left)\n"); \
    } else if (packed->index != glXJoinSwapGroupNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXJoinSwapGroupNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXJoinSwapGroupNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXJoinSwapGroupNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXJoinSwapGroupSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXJoinSwapGroupSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXJoinSwapGroupSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXJoinSwapGroupSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXJoinSwapGroupSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXJoinSwapGroupSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXLockVideoCaptureDeviceNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXLockVideoCaptureDeviceNV missing (no calls left)\n"); \
    } else if (packed->index != glXLockVideoCaptureDeviceNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXLockVideoCaptureDeviceNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXLockVideoCaptureDeviceNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXLockVideoCaptureDeviceNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXMakeContextCurrent_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXMakeContextCurrent missing (no calls left)\n"); \
    } else if (packed->index != glXMakeContextCurrent_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXMakeContextCurrent_INDEX); \
        if (! packed) { \
            mock_errorf("glXMakeContextCurrent missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXMakeContextCurrent:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXMakeCurrent_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXMakeCurrent missing (no calls left)\n"); \
    } else if (packed->index != glXMakeCurrent_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXMakeCurrent_INDEX); \
        if (! packed) { \
            mock_errorf("glXMakeCurrent missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXMakeCurrent:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXMakeCurrentReadSGI_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXMakeCurrentReadSGI missing (no calls left)\n"); \
    } else if (packed->index != glXMakeCurrentReadSGI_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXMakeCurrentReadSGI_INDEX); \
        if (! packed) { \
            mock_errorf("glXMakeCurrentReadSGI missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXMakeCurrentReadSGI:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXQueryChannelDeltasSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryChannelDeltasSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXQueryChannelDeltasSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryChannelDeltasSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryChannelDeltasSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryChannelDeltasSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_display)); \
            mock_print_ptr("     found:", a, b, sizeof(_display)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_x)); \
            mock_print_ptr("     found:", a, b, sizeof(_x)); \
            match = 0; \
        } \
        a = packed->args.y, b = _y; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_y)) != 0))) { \
            printf("  ERROR: arg mismatch: y\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_y)); \
            mock_print_ptr("     found:", a, b, sizeof(_y)); \
            match = 0; \
        } \
        a = packed->args.w, b = _w; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_w)) != 0))) { \
            printf("  ERROR: arg mismatch: w\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_w)); \
            mock_print_ptr("     found:", a, b, sizeof(_w)); \
            match = 0; \
        } \
        a = packed->args.h, b = _h; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_h)) != 0))) { \
            printf("  ERROR: arg mismatch: h\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_h)); \
            mock_print_ptr("     found:", a, b, sizeof(_h)); \
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
    glXQueryChannelRectSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryChannelRectSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXQueryChannelRectSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryChannelRectSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryChannelRectSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryChannelRectSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_display)); \
            mock_print_ptr("     found:", a, b, sizeof(_display)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_dx)); \
            mock_print_ptr("     found:", a, b, sizeof(_dx)); \
            match = 0; \
        } \
        a = packed->args.dy, b = _dy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dy)) != 0))) { \
            printf("  ERROR: arg mismatch: dy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dy)); \
            match = 0; \
        } \
        a = packed->args.dw, b = _dw; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dw)) != 0))) { \
            printf("  ERROR: arg mismatch: dw\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dw)); \
            mock_print_ptr("     found:", a, b, sizeof(_dw)); \
            match = 0; \
        } \
        a = packed->args.dh, b = _dh; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dh)) != 0))) { \
            printf("  ERROR: arg mismatch: dh\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dh)); \
            mock_print_ptr("     found:", a, b, sizeof(_dh)); \
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
    glXQueryContext_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryContext missing (no calls left)\n"); \
    } else if (packed->index != glXQueryContext_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryContext_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryContext missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryContext:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_value)); \
            mock_print_ptr("     found:", a, b, sizeof(_value)); \
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
    glXQueryContextInfoEXT_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryContextInfoEXT missing (no calls left)\n"); \
    } else if (packed->index != glXQueryContextInfoEXT_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryContextInfoEXT_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryContextInfoEXT missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryContextInfoEXT:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_value)); \
            mock_print_ptr("     found:", a, b, sizeof(_value)); \
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
    glXQueryDrawable_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryDrawable missing (no calls left)\n"); \
    } else if (packed->index != glXQueryDrawable_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryDrawable_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryDrawable missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryDrawable:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_value)); \
            mock_print_ptr("     found:", a, b, sizeof(_value)); \
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
    glXQueryExtension_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryExtension missing (no calls left)\n"); \
    } else if (packed->index != glXQueryExtension_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryExtension_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryExtension missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryExtension:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.display, b = _display; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_display)) != 0))) { \
            printf("  ERROR: arg mismatch: display\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_display)); \
            mock_print_ptr("     found:", a, b, sizeof(_display)); \
            match = 0; \
        } \
        a = packed->args.errorBase, b = _errorBase; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_errorBase)) != 0))) { \
            printf("  ERROR: arg mismatch: errorBase\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_errorBase)); \
            mock_print_ptr("     found:", a, b, sizeof(_errorBase)); \
            match = 0; \
        } \
        a = packed->args.eventBase, b = _eventBase; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_eventBase)) != 0))) { \
            printf("  ERROR: arg mismatch: eventBase\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_eventBase)); \
            mock_print_ptr("     found:", a, b, sizeof(_eventBase)); \
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
    glXQueryExtensionsString_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryExtensionsString missing (no calls left)\n"); \
    } else if (packed->index != glXQueryExtensionsString_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryExtensionsString_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryExtensionsString missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryExtensionsString:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXQueryFrameCountNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryFrameCountNV missing (no calls left)\n"); \
    } else if (packed->index != glXQueryFrameCountNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryFrameCountNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryFrameCountNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryFrameCountNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.count, b = _count; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_count)) != 0))) { \
            printf("  ERROR: arg mismatch: count\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_count)); \
            mock_print_ptr("     found:", a, b, sizeof(_count)); \
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
    glXQueryGLXPbufferSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryGLXPbufferSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXQueryGLXPbufferSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryGLXPbufferSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryGLXPbufferSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryGLXPbufferSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_value)); \
            mock_print_ptr("     found:", a, b, sizeof(_value)); \
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
    glXQueryHyperpipeAttribSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryHyperpipeAttribSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXQueryHyperpipeAttribSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryHyperpipeAttribSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryHyperpipeAttribSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryHyperpipeAttribSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_returnAttribList)); \
            mock_print_ptr("     found:", a, b, sizeof(_returnAttribList)); \
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
    glXQueryHyperpipeBestAttribSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryHyperpipeBestAttribSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXQueryHyperpipeBestAttribSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryHyperpipeBestAttribSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryHyperpipeBestAttribSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryHyperpipeBestAttribSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_attribList)); \
            mock_print_ptr("     found:", a, b, sizeof(_attribList)); \
            match = 0; \
        } \
        a = packed->args.returnAttribList, b = _returnAttribList; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_returnAttribList)) != 0))) { \
            printf("  ERROR: arg mismatch: returnAttribList\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_returnAttribList)); \
            mock_print_ptr("     found:", a, b, sizeof(_returnAttribList)); \
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
    glXQueryHyperpipeConfigSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryHyperpipeConfigSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXQueryHyperpipeConfigSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryHyperpipeConfigSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryHyperpipeConfigSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryHyperpipeConfigSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.hpId != _hpId) { \
            match = 0; \
        } \
        a = packed->args.npipes, b = _npipes; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_npipes)) != 0))) { \
            printf("  ERROR: arg mismatch: npipes\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_npipes)); \
            mock_print_ptr("     found:", a, b, sizeof(_npipes)); \
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
    glXQueryHyperpipeNetworkSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryHyperpipeNetworkSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXQueryHyperpipeNetworkSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryHyperpipeNetworkSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryHyperpipeNetworkSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryHyperpipeNetworkSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.npipes, b = _npipes; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_npipes)) != 0))) { \
            printf("  ERROR: arg mismatch: npipes\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_npipes)); \
            mock_print_ptr("     found:", a, b, sizeof(_npipes)); \
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
    glXQueryMaxSwapBarriersSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryMaxSwapBarriersSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXQueryMaxSwapBarriersSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryMaxSwapBarriersSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryMaxSwapBarriersSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryMaxSwapBarriersSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.max, b = _max; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_max)) != 0))) { \
            printf("  ERROR: arg mismatch: max\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_max)); \
            mock_print_ptr("     found:", a, b, sizeof(_max)); \
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
    glXQueryMaxSwapGroupsNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryMaxSwapGroupsNV missing (no calls left)\n"); \
    } else if (packed->index != glXQueryMaxSwapGroupsNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryMaxSwapGroupsNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryMaxSwapGroupsNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryMaxSwapGroupsNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.screen != _screen) { \
            match = 0; \
        } \
        a = packed->args.maxGroups, b = _maxGroups; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_maxGroups)) != 0))) { \
            printf("  ERROR: arg mismatch: maxGroups\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_maxGroups)); \
            mock_print_ptr("     found:", a, b, sizeof(_maxGroups)); \
            match = 0; \
        } \
        a = packed->args.maxBarriers, b = _maxBarriers; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_maxBarriers)) != 0))) { \
            printf("  ERROR: arg mismatch: maxBarriers\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_maxBarriers)); \
            mock_print_ptr("     found:", a, b, sizeof(_maxBarriers)); \
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
    glXQueryServerString_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryServerString missing (no calls left)\n"); \
    } else if (packed->index != glXQueryServerString_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryServerString_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryServerString missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryServerString:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXQuerySwapGroupNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQuerySwapGroupNV missing (no calls left)\n"); \
    } else if (packed->index != glXQuerySwapGroupNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQuerySwapGroupNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXQuerySwapGroupNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQuerySwapGroupNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        if (packed->args.drawable != _drawable) { \
            match = 0; \
        } \
        a = packed->args.group, b = _group; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_group)) != 0))) { \
            printf("  ERROR: arg mismatch: group\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_group)); \
            mock_print_ptr("     found:", a, b, sizeof(_group)); \
            match = 0; \
        } \
        a = packed->args.barrier, b = _barrier; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_barrier)) != 0))) { \
            printf("  ERROR: arg mismatch: barrier\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_barrier)); \
            mock_print_ptr("     found:", a, b, sizeof(_barrier)); \
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
    glXQueryVersion_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryVersion missing (no calls left)\n"); \
    } else if (packed->index != glXQueryVersion_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryVersion_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryVersion missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryVersion:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
            match = 0; \
        } \
        a = packed->args.maj, b = _maj; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_maj)) != 0))) { \
            printf("  ERROR: arg mismatch: maj\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_maj)); \
            mock_print_ptr("     found:", a, b, sizeof(_maj)); \
            match = 0; \
        } \
        a = packed->args.min, b = _min; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_min)) != 0))) { \
            printf("  ERROR: arg mismatch: min\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_min)); \
            mock_print_ptr("     found:", a, b, sizeof(_min)); \
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
    glXQueryVideoCaptureDeviceNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXQueryVideoCaptureDeviceNV missing (no calls left)\n"); \
    } else if (packed->index != glXQueryVideoCaptureDeviceNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXQueryVideoCaptureDeviceNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXQueryVideoCaptureDeviceNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXQueryVideoCaptureDeviceNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_value)); \
            mock_print_ptr("     found:", a, b, sizeof(_value)); \
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
    glXReleaseBuffersMESA_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXReleaseBuffersMESA missing (no calls left)\n"); \
    } else if (packed->index != glXReleaseBuffersMESA_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXReleaseBuffersMESA_INDEX); \
        if (! packed) { \
            mock_errorf("glXReleaseBuffersMESA missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXReleaseBuffersMESA:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXReleaseTexImageEXT_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXReleaseTexImageEXT missing (no calls left)\n"); \
    } else if (packed->index != glXReleaseTexImageEXT_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXReleaseTexImageEXT_INDEX); \
        if (! packed) { \
            mock_errorf("glXReleaseTexImageEXT missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXReleaseTexImageEXT:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXReleaseVideoCaptureDeviceNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXReleaseVideoCaptureDeviceNV missing (no calls left)\n"); \
    } else if (packed->index != glXReleaseVideoCaptureDeviceNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXReleaseVideoCaptureDeviceNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXReleaseVideoCaptureDeviceNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXReleaseVideoCaptureDeviceNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXReleaseVideoDeviceNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXReleaseVideoDeviceNV missing (no calls left)\n"); \
    } else if (packed->index != glXReleaseVideoDeviceNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXReleaseVideoDeviceNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXReleaseVideoDeviceNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXReleaseVideoDeviceNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXReleaseVideoImageNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXReleaseVideoImageNV missing (no calls left)\n"); \
    } else if (packed->index != glXReleaseVideoImageNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXReleaseVideoImageNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXReleaseVideoImageNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXReleaseVideoImageNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXRender_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXRender missing (no calls left)\n"); \
    } else if (packed->index != glXRender_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXRender_INDEX); \
        if (! packed) { \
            mock_errorf("glXRender missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXRender:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXRender();\n", ); \
        } \
    } \
}
#define emit_glXRenderLarge() { \
    mock_push(pack_glXRenderLarge(NULL)); \
}
#define test_glXRenderLarge() { \
    glXRenderLarge_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXRenderLarge missing (no calls left)\n"); \
    } else if (packed->index != glXRenderLarge_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXRenderLarge_INDEX); \
        if (! packed) { \
            mock_errorf("glXRenderLarge missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXRenderLarge:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXRenderLarge();\n", ); \
        } \
    } \
}
#define emit_glXResetFrameCountNV(dpy, screen) { \
    mock_push(pack_glXResetFrameCountNV(NULL, dpy, screen)); \
}
#define test_glXResetFrameCountNV(_dpy, _screen) { \
    glXResetFrameCountNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXResetFrameCountNV missing (no calls left)\n"); \
    } else if (packed->index != glXResetFrameCountNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXResetFrameCountNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXResetFrameCountNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXResetFrameCountNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXSelectEvent_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXSelectEvent missing (no calls left)\n"); \
    } else if (packed->index != glXSelectEvent_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXSelectEvent_INDEX); \
        if (! packed) { \
            mock_errorf("glXSelectEvent missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXSelectEvent:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXSelectEventSGIX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXSelectEventSGIX missing (no calls left)\n"); \
    } else if (packed->index != glXSelectEventSGIX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXSelectEventSGIX_INDEX); \
        if (! packed) { \
            mock_errorf("glXSelectEventSGIX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXSelectEventSGIX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXSendPbufferToVideoNV_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXSendPbufferToVideoNV missing (no calls left)\n"); \
    } else if (packed->index != glXSendPbufferToVideoNV_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXSendPbufferToVideoNV_INDEX); \
        if (! packed) { \
            mock_errorf("glXSendPbufferToVideoNV missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXSendPbufferToVideoNV:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_pulCounterPbuffer)); \
            mock_print_ptr("     found:", a, b, sizeof(_pulCounterPbuffer)); \
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
    glXSet3DfxModeMESA_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXSet3DfxModeMESA missing (no calls left)\n"); \
    } else if (packed->index != glXSet3DfxModeMESA_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXSet3DfxModeMESA_INDEX); \
        if (! packed) { \
            mock_errorf("glXSet3DfxModeMESA missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXSet3DfxModeMESA:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glXSwapBuffers_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXSwapBuffers missing (no calls left)\n"); \
    } else if (packed->index != glXSwapBuffers_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXSwapBuffers_INDEX); \
        if (! packed) { \
            mock_errorf("glXSwapBuffers missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXSwapBuffers:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXSwapBuffersMscOML_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXSwapBuffersMscOML missing (no calls left)\n"); \
    } else if (packed->index != glXSwapBuffersMscOML_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXSwapBuffersMscOML_INDEX); \
        if (! packed) { \
            mock_errorf("glXSwapBuffersMscOML missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXSwapBuffersMscOML:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXSwapIntervalEXT_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXSwapIntervalEXT missing (no calls left)\n"); \
    } else if (packed->index != glXSwapIntervalEXT_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXSwapIntervalEXT_INDEX); \
        if (! packed) { \
            mock_errorf("glXSwapIntervalEXT missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXSwapIntervalEXT:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
    glXSwapIntervalMESA_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXSwapIntervalMESA missing (no calls left)\n"); \
    } else if (packed->index != glXSwapIntervalMESA_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXSwapIntervalMESA_INDEX); \
        if (! packed) { \
            mock_errorf("glXSwapIntervalMESA missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXSwapIntervalMESA:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glXSwapIntervalSGI_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXSwapIntervalSGI missing (no calls left)\n"); \
    } else if (packed->index != glXSwapIntervalSGI_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXSwapIntervalSGI_INDEX); \
        if (! packed) { \
            mock_errorf("glXSwapIntervalSGI missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXSwapIntervalSGI:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glXUseXFont_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXUseXFont missing (no calls left)\n"); \
    } else if (packed->index != glXUseXFont_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXUseXFont_INDEX); \
        if (! packed) { \
            mock_errorf("glXUseXFont missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXUseXFont:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
    glXVendorPrivate_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXVendorPrivate missing (no calls left)\n"); \
    } else if (packed->index != glXVendorPrivate_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXVendorPrivate_INDEX); \
        if (! packed) { \
            mock_errorf("glXVendorPrivate missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXVendorPrivate:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXVendorPrivate();\n", ); \
        } \
    } \
}
#define emit_glXVendorPrivateWithReply() { \
    mock_push(pack_glXVendorPrivateWithReply(NULL)); \
}
#define test_glXVendorPrivateWithReply() { \
    glXVendorPrivateWithReply_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXVendorPrivateWithReply missing (no calls left)\n"); \
    } else if (packed->index != glXVendorPrivateWithReply_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXVendorPrivateWithReply_INDEX); \
        if (! packed) { \
            mock_errorf("glXVendorPrivateWithReply missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXVendorPrivateWithReply:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXVendorPrivateWithReply();\n", ); \
        } \
    } \
}
#define emit_glXWaitForMscOML(dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc) { \
    mock_push(pack_glXWaitForMscOML(NULL, dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc)); \
}
#define test_glXWaitForMscOML(_dpy, _drawable, _target_msc, _divisor, _remainder, _ust, _msc, _sbc) { \
    glXWaitForMscOML_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXWaitForMscOML missing (no calls left)\n"); \
    } else if (packed->index != glXWaitForMscOML_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXWaitForMscOML_INDEX); \
        if (! packed) { \
            mock_errorf("glXWaitForMscOML missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXWaitForMscOML:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_ust)); \
            mock_print_ptr("     found:", a, b, sizeof(_ust)); \
            match = 0; \
        } \
        a = packed->args.msc, b = _msc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_msc)) != 0))) { \
            printf("  ERROR: arg mismatch: msc\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_msc)); \
            mock_print_ptr("     found:", a, b, sizeof(_msc)); \
            match = 0; \
        } \
        a = packed->args.sbc, b = _sbc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_sbc)) != 0))) { \
            printf("  ERROR: arg mismatch: sbc\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_sbc)); \
            mock_print_ptr("     found:", a, b, sizeof(_sbc)); \
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
    glXWaitForSbcOML_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXWaitForSbcOML missing (no calls left)\n"); \
    } else if (packed->index != glXWaitForSbcOML_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXWaitForSbcOML_INDEX); \
        if (! packed) { \
            mock_errorf("glXWaitForSbcOML missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXWaitForSbcOML:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        a = packed->args.dpy, b = _dpy; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_dpy)) != 0))) { \
            printf("  ERROR: arg mismatch: dpy\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_dpy)); \
            mock_print_ptr("     found:", a, b, sizeof(_dpy)); \
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
            mock_print_ptr("  expected:", b, a, sizeof(_ust)); \
            mock_print_ptr("     found:", a, b, sizeof(_ust)); \
            match = 0; \
        } \
        a = packed->args.msc, b = _msc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_msc)) != 0))) { \
            printf("  ERROR: arg mismatch: msc\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_msc)); \
            mock_print_ptr("     found:", a, b, sizeof(_msc)); \
            match = 0; \
        } \
        a = packed->args.sbc, b = _sbc; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(_sbc)) != 0))) { \
            printf("  ERROR: arg mismatch: sbc\n"); \
            mock_print_ptr("  expected:", b, a, sizeof(_sbc)); \
            mock_print_ptr("     found:", a, b, sizeof(_sbc)); \
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
    glXWaitGL_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXWaitGL missing (no calls left)\n"); \
    } else if (packed->index != glXWaitGL_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXWaitGL_INDEX); \
        if (! packed) { \
            mock_errorf("glXWaitGL missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXWaitGL:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXWaitGL();\n", ); \
        } \
    } \
}
#define emit_glXWaitVideoSyncSGI(divisor, remainder, count) { \
    mock_push(pack_glXWaitVideoSyncSGI(NULL, divisor, remainder, count)); \
}
#define test_glXWaitVideoSyncSGI(_divisor, _remainder, _count) { \
    glXWaitVideoSyncSGI_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXWaitVideoSyncSGI missing (no calls left)\n"); \
    } else if (packed->index != glXWaitVideoSyncSGI_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXWaitVideoSyncSGI_INDEX); \
        if (! packed) { \
            mock_errorf("glXWaitVideoSyncSGI missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXWaitVideoSyncSGI:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
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
            mock_print_ptr("  expected:", b, a, sizeof(_count)); \
            mock_print_ptr("     found:", a, b, sizeof(_count)); \
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
    glXWaitX_PACKED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glXWaitX missing (no calls left)\n"); \
    } else if (packed->index != glXWaitX_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        packed_call_t *tmp = (packed_call_t *)packed; \
        packed = mock_slide(glXWaitX_INDEX); \
        if (! packed) { \
            mock_errorf("glXWaitX missing\n"); \
        } else { \
            mock_warningf("unexpected call while looking for glXWaitX:\n  "); \
            mock_print(tmp); \
        }\
    } else { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        mock_shift(); \
    } \
    if (packed) { \
        int match = 1; \
        void *a, *b; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            printf("  have: "); mock_print((const packed_call_t *)packed); \
            printf("  want: glXWaitX();\n", ); \
        } \
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

#ifndef USE_ES2
#ifdef __cplusplus
extern "C" {
#endif
#include "wrap/gles.h"

#ifndef MOCK_H
#define MOCK_H

const char *mock_name(int func);
void *mock_cur();
void *mock_get(int idx);
void *mock_peek();
void *mock_shift();
void *mock_slide(int func);
void mock_print(const indexed_call_t *packed);
void mock_push(void *call);

static int verbose_test = 0;
static int failed_test = 0;
#define verbose { verbose_test = 1; }

#define mock_warningf(...) { printf("WARNING: "), printf(__VA_ARGS__); }
#define mock_errorf(...) { printf("ERROR: "); printf(__VA_ARGS__); failed_test = 1; }
#define mock_assert(cond, ...) { if (!(cond)) { mock_errorf(__VA_ARGS__); }}

#define mock_return { \
    indexed_call_t *call = NULL; \
    while ((call = mock_shift()) != NULL) { \
        mock_warningf("extra "); \
        mock_print(call); \
    } \
    return failed_test; \
}

#define pack_glActiveTexture(texture) ({ \
    glActiveTexture_INDEXED *packed_data = malloc(sizeof(glActiveTexture_INDEXED)); \
    packed_data->func = glActiveTexture_INDEX; \
    packed_data->args.a1 = (GLenum)texture; \
    packed_data; \
})
#define emit_glActiveTexture(texture) { \
    mock_push(pack_glActiveTexture(texture)); \
}
#define test_glActiveTexture(texture) { \
    glActiveTexture_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glActiveTexture missing (no calls left)\n"); \
    } else if (packed->func != glActiveTexture_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != texture) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glActiveTexture(0x%04X);\n", texture); \
        } \
    } \
}
#define pack_glAlphaFunc(func, ref) ({ \
    glAlphaFunc_INDEXED *packed_data = malloc(sizeof(glAlphaFunc_INDEXED)); \
    packed_data->func = glAlphaFunc_INDEX; \
    packed_data->args.a1 = (GLenum)func; \
    packed_data->args.a2 = (GLclampf)ref; \
    packed_data; \
})
#define emit_glAlphaFunc(func, ref) { \
    mock_push(pack_glAlphaFunc(func, ref)); \
}
#define test_glAlphaFunc(func, ref) { \
    glAlphaFunc_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glAlphaFunc missing (no calls left)\n"); \
    } else if (packed->func != glAlphaFunc_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != func) { \
            match = 0; \
        } \
        if (packed->args.a2 != ref) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glAlphaFunc(0x%04X, %p);\n", func, ref); \
        } \
    } \
}
#define pack_glAlphaFuncx(func, ref) ({ \
    glAlphaFuncx_INDEXED *packed_data = malloc(sizeof(glAlphaFuncx_INDEXED)); \
    packed_data->func = glAlphaFuncx_INDEX; \
    packed_data->args.a1 = (GLenum)func; \
    packed_data->args.a2 = (GLclampx)ref; \
    packed_data; \
})
#define emit_glAlphaFuncx(func, ref) { \
    mock_push(pack_glAlphaFuncx(func, ref)); \
}
#define test_glAlphaFuncx(func, ref) { \
    glAlphaFuncx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glAlphaFuncx missing (no calls left)\n"); \
    } else if (packed->func != glAlphaFuncx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != func) { \
            match = 0; \
        } \
        if (packed->args.a2 != ref) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glAlphaFuncx(0x%04X, %p);\n", func, ref); \
        } \
    } \
}
#define pack_glBindBuffer(target, buffer) ({ \
    glBindBuffer_INDEXED *packed_data = malloc(sizeof(glBindBuffer_INDEXED)); \
    packed_data->func = glBindBuffer_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLuint)buffer; \
    packed_data; \
})
#define emit_glBindBuffer(target, buffer) { \
    mock_push(pack_glBindBuffer(target, buffer)); \
}
#define test_glBindBuffer(target, buffer) { \
    glBindBuffer_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBindBuffer missing (no calls left)\n"); \
    } else if (packed->func != glBindBuffer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != buffer) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glBindBuffer(0x%04X, %u);\n", target, buffer); \
        } \
    } \
}
#define pack_glBindTexture(target, texture) ({ \
    glBindTexture_INDEXED *packed_data = malloc(sizeof(glBindTexture_INDEXED)); \
    packed_data->func = glBindTexture_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLuint)texture; \
    packed_data; \
})
#define emit_glBindTexture(target, texture) { \
    mock_push(pack_glBindTexture(target, texture)); \
}
#define test_glBindTexture(target, texture) { \
    glBindTexture_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBindTexture missing (no calls left)\n"); \
    } else if (packed->func != glBindTexture_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != texture) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glBindTexture(0x%04X, %u);\n", target, texture); \
        } \
    } \
}
#define pack_glBlendFunc(sfactor, dfactor) ({ \
    glBlendFunc_INDEXED *packed_data = malloc(sizeof(glBlendFunc_INDEXED)); \
    packed_data->func = glBlendFunc_INDEX; \
    packed_data->args.a1 = (GLenum)sfactor; \
    packed_data->args.a2 = (GLenum)dfactor; \
    packed_data; \
})
#define emit_glBlendFunc(sfactor, dfactor) { \
    mock_push(pack_glBlendFunc(sfactor, dfactor)); \
}
#define test_glBlendFunc(sfactor, dfactor) { \
    glBlendFunc_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBlendFunc missing (no calls left)\n"); \
    } else if (packed->func != glBlendFunc_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != sfactor) { \
            match = 0; \
        } \
        if (packed->args.a2 != dfactor) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glBlendFunc(0x%04X, 0x%04X);\n", sfactor, dfactor); \
        } \
    } \
}
#define pack_glBufferData(target, size, data, usage) ({ \
    glBufferData_INDEXED *packed_data = malloc(sizeof(glBufferData_INDEXED)); \
    packed_data->func = glBufferData_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLsizeiptr)size; \
    packed_data->args.a3 = (GLvoid *)data; \
    packed_data->args.a4 = (GLenum)usage; \
    packed_data; \
})
#define emit_glBufferData(target, size, data, usage) { \
    mock_push(pack_glBufferData(target, size, data, usage)); \
}
#define test_glBufferData(target, size, data, usage) { \
    glBufferData_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBufferData missing (no calls left)\n"); \
    } else if (packed->func != glBufferData_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != size) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = data; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(data)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (packed->args.a4 != usage) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glBufferData(0x%04X, %d, %p, 0x%04X);\n", target, size, data, usage); \
        } \
    } \
}
#define pack_glBufferSubData(target, offset, size, data) ({ \
    glBufferSubData_INDEXED *packed_data = malloc(sizeof(glBufferSubData_INDEXED)); \
    packed_data->func = glBufferSubData_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLintptr)offset; \
    packed_data->args.a3 = (GLsizeiptr)size; \
    packed_data->args.a4 = (GLvoid *)data; \
    packed_data; \
})
#define emit_glBufferSubData(target, offset, size, data) { \
    mock_push(pack_glBufferSubData(target, offset, size, data)); \
}
#define test_glBufferSubData(target, offset, size, data) { \
    glBufferSubData_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glBufferSubData missing (no calls left)\n"); \
    } else if (packed->func != glBufferSubData_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != offset) { \
            match = 0; \
        } \
        if (packed->args.a3 != size) { \
            match = 0; \
        } \
        void *a = packed->args.a4, *b = data; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(data)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glBufferSubData(0x%04X, %d, %d, %p);\n", target, offset, size, data); \
        } \
    } \
}
#define pack_glClear(mask) ({ \
    glClear_INDEXED *packed_data = malloc(sizeof(glClear_INDEXED)); \
    packed_data->func = glClear_INDEX; \
    packed_data->args.a1 = (GLbitfield)mask; \
    packed_data; \
})
#define emit_glClear(mask) { \
    mock_push(pack_glClear(mask)); \
}
#define test_glClear(mask) { \
    glClear_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClear missing (no calls left)\n"); \
    } else if (packed->func != glClear_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != mask) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glClear(%d);\n", mask); \
        } \
    } \
}
#define pack_glClearColor(red, green, blue, alpha) ({ \
    glClearColor_INDEXED *packed_data = malloc(sizeof(glClearColor_INDEXED)); \
    packed_data->func = glClearColor_INDEX; \
    packed_data->args.a1 = (GLclampf)red; \
    packed_data->args.a2 = (GLclampf)green; \
    packed_data->args.a3 = (GLclampf)blue; \
    packed_data->args.a4 = (GLclampf)alpha; \
    packed_data; \
})
#define emit_glClearColor(red, green, blue, alpha) { \
    mock_push(pack_glClearColor(red, green, blue, alpha)); \
}
#define test_glClearColor(red, green, blue, alpha) { \
    glClearColor_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClearColor missing (no calls left)\n"); \
    } else if (packed->func != glClearColor_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != red) { \
            match = 0; \
        } \
        if (packed->args.a2 != green) { \
            match = 0; \
        } \
        if (packed->args.a3 != blue) { \
            match = 0; \
        } \
        if (packed->args.a4 != alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glClearColor(%p, %p, %p, %p);\n", red, green, blue, alpha); \
        } \
    } \
}
#define pack_glClearColorx(red, green, blue, alpha) ({ \
    glClearColorx_INDEXED *packed_data = malloc(sizeof(glClearColorx_INDEXED)); \
    packed_data->func = glClearColorx_INDEX; \
    packed_data->args.a1 = (GLclampx)red; \
    packed_data->args.a2 = (GLclampx)green; \
    packed_data->args.a3 = (GLclampx)blue; \
    packed_data->args.a4 = (GLclampx)alpha; \
    packed_data; \
})
#define emit_glClearColorx(red, green, blue, alpha) { \
    mock_push(pack_glClearColorx(red, green, blue, alpha)); \
}
#define test_glClearColorx(red, green, blue, alpha) { \
    glClearColorx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClearColorx missing (no calls left)\n"); \
    } else if (packed->func != glClearColorx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != red) { \
            match = 0; \
        } \
        if (packed->args.a2 != green) { \
            match = 0; \
        } \
        if (packed->args.a3 != blue) { \
            match = 0; \
        } \
        if (packed->args.a4 != alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glClearColorx(%p, %p, %p, %p);\n", red, green, blue, alpha); \
        } \
    } \
}
#define pack_glClearDepthf(depth) ({ \
    glClearDepthf_INDEXED *packed_data = malloc(sizeof(glClearDepthf_INDEXED)); \
    packed_data->func = glClearDepthf_INDEX; \
    packed_data->args.a1 = (GLclampf)depth; \
    packed_data; \
})
#define emit_glClearDepthf(depth) { \
    mock_push(pack_glClearDepthf(depth)); \
}
#define test_glClearDepthf(depth) { \
    glClearDepthf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClearDepthf missing (no calls left)\n"); \
    } else if (packed->func != glClearDepthf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != depth) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glClearDepthf(%p);\n", depth); \
        } \
    } \
}
#define pack_glClearDepthx(depth) ({ \
    glClearDepthx_INDEXED *packed_data = malloc(sizeof(glClearDepthx_INDEXED)); \
    packed_data->func = glClearDepthx_INDEX; \
    packed_data->args.a1 = (GLclampx)depth; \
    packed_data; \
})
#define emit_glClearDepthx(depth) { \
    mock_push(pack_glClearDepthx(depth)); \
}
#define test_glClearDepthx(depth) { \
    glClearDepthx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClearDepthx missing (no calls left)\n"); \
    } else if (packed->func != glClearDepthx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != depth) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glClearDepthx(%p);\n", depth); \
        } \
    } \
}
#define pack_glClearStencil(s) ({ \
    glClearStencil_INDEXED *packed_data = malloc(sizeof(glClearStencil_INDEXED)); \
    packed_data->func = glClearStencil_INDEX; \
    packed_data->args.a1 = (GLint)s; \
    packed_data; \
})
#define emit_glClearStencil(s) { \
    mock_push(pack_glClearStencil(s)); \
}
#define test_glClearStencil(s) { \
    glClearStencil_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClearStencil missing (no calls left)\n"); \
    } else if (packed->func != glClearStencil_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != s) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glClearStencil(%d);\n", s); \
        } \
    } \
}
#define pack_glClientActiveTexture(texture) ({ \
    glClientActiveTexture_INDEXED *packed_data = malloc(sizeof(glClientActiveTexture_INDEXED)); \
    packed_data->func = glClientActiveTexture_INDEX; \
    packed_data->args.a1 = (GLenum)texture; \
    packed_data; \
})
#define emit_glClientActiveTexture(texture) { \
    mock_push(pack_glClientActiveTexture(texture)); \
}
#define test_glClientActiveTexture(texture) { \
    glClientActiveTexture_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClientActiveTexture missing (no calls left)\n"); \
    } else if (packed->func != glClientActiveTexture_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != texture) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glClientActiveTexture(0x%04X);\n", texture); \
        } \
    } \
}
#define pack_glClipPlanef(plane, equation) ({ \
    glClipPlanef_INDEXED *packed_data = malloc(sizeof(glClipPlanef_INDEXED)); \
    packed_data->func = glClipPlanef_INDEX; \
    packed_data->args.a1 = (GLenum)plane; \
    packed_data->args.a2 = (GLfloat *)equation; \
    packed_data; \
})
#define emit_glClipPlanef(plane, equation) { \
    mock_push(pack_glClipPlanef(plane, equation)); \
}
#define test_glClipPlanef(plane, equation) { \
    glClipPlanef_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClipPlanef missing (no calls left)\n"); \
    } else if (packed->func != glClipPlanef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != plane) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(equation)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glClipPlanef(0x%04X, %p);\n", plane, equation); \
        } \
    } \
}
#define pack_glClipPlanex(plane, equation) ({ \
    glClipPlanex_INDEXED *packed_data = malloc(sizeof(glClipPlanex_INDEXED)); \
    packed_data->func = glClipPlanex_INDEX; \
    packed_data->args.a1 = (GLenum)plane; \
    packed_data->args.a2 = (GLfixed *)equation; \
    packed_data; \
})
#define emit_glClipPlanex(plane, equation) { \
    mock_push(pack_glClipPlanex(plane, equation)); \
}
#define test_glClipPlanex(plane, equation) { \
    glClipPlanex_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glClipPlanex missing (no calls left)\n"); \
    } else if (packed->func != glClipPlanex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != plane) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(equation)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glClipPlanex(0x%04X, %p);\n", plane, equation); \
        } \
    } \
}
#define pack_glColor4f(red, green, blue, alpha) ({ \
    glColor4f_INDEXED *packed_data = malloc(sizeof(glColor4f_INDEXED)); \
    packed_data->func = glColor4f_INDEX; \
    packed_data->args.a1 = (GLfloat)red; \
    packed_data->args.a2 = (GLfloat)green; \
    packed_data->args.a3 = (GLfloat)blue; \
    packed_data->args.a4 = (GLfloat)alpha; \
    packed_data; \
})
#define emit_glColor4f(red, green, blue, alpha) { \
    mock_push(pack_glColor4f(red, green, blue, alpha)); \
}
#define test_glColor4f(red, green, blue, alpha) { \
    glColor4f_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glColor4f missing (no calls left)\n"); \
    } else if (packed->func != glColor4f_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 - red >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a2 - green >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a3 - blue >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a4 - alpha >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glColor4f(%0.2f, %0.2f, %0.2f, %0.2f);\n", red, green, blue, alpha); \
        } \
    } \
}
#define pack_glColor4ub(red, green, blue, alpha) ({ \
    glColor4ub_INDEXED *packed_data = malloc(sizeof(glColor4ub_INDEXED)); \
    packed_data->func = glColor4ub_INDEX; \
    packed_data->args.a1 = (GLubyte)red; \
    packed_data->args.a2 = (GLubyte)green; \
    packed_data->args.a3 = (GLubyte)blue; \
    packed_data->args.a4 = (GLubyte)alpha; \
    packed_data; \
})
#define emit_glColor4ub(red, green, blue, alpha) { \
    mock_push(pack_glColor4ub(red, green, blue, alpha)); \
}
#define test_glColor4ub(red, green, blue, alpha) { \
    glColor4ub_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glColor4ub missing (no calls left)\n"); \
    } else if (packed->func != glColor4ub_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != red) { \
            match = 0; \
        } \
        if (packed->args.a2 != green) { \
            match = 0; \
        } \
        if (packed->args.a3 != blue) { \
            match = 0; \
        } \
        if (packed->args.a4 != alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glColor4ub(%c, %c, %c, %c);\n", red, green, blue, alpha); \
        } \
    } \
}
#define pack_glColor4x(red, green, blue, alpha) ({ \
    glColor4x_INDEXED *packed_data = malloc(sizeof(glColor4x_INDEXED)); \
    packed_data->func = glColor4x_INDEX; \
    packed_data->args.a1 = (GLfixed)red; \
    packed_data->args.a2 = (GLfixed)green; \
    packed_data->args.a3 = (GLfixed)blue; \
    packed_data->args.a4 = (GLfixed)alpha; \
    packed_data; \
})
#define emit_glColor4x(red, green, blue, alpha) { \
    mock_push(pack_glColor4x(red, green, blue, alpha)); \
}
#define test_glColor4x(red, green, blue, alpha) { \
    glColor4x_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glColor4x missing (no calls left)\n"); \
    } else if (packed->func != glColor4x_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != red) { \
            match = 0; \
        } \
        if (packed->args.a2 != green) { \
            match = 0; \
        } \
        if (packed->args.a3 != blue) { \
            match = 0; \
        } \
        if (packed->args.a4 != alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glColor4x(%p, %p, %p, %p);\n", red, green, blue, alpha); \
        } \
    } \
}
#define pack_glColorMask(red, green, blue, alpha) ({ \
    glColorMask_INDEXED *packed_data = malloc(sizeof(glColorMask_INDEXED)); \
    packed_data->func = glColorMask_INDEX; \
    packed_data->args.a1 = (GLboolean)red; \
    packed_data->args.a2 = (GLboolean)green; \
    packed_data->args.a3 = (GLboolean)blue; \
    packed_data->args.a4 = (GLboolean)alpha; \
    packed_data; \
})
#define emit_glColorMask(red, green, blue, alpha) { \
    mock_push(pack_glColorMask(red, green, blue, alpha)); \
}
#define test_glColorMask(red, green, blue, alpha) { \
    glColorMask_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glColorMask missing (no calls left)\n"); \
    } else if (packed->func != glColorMask_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != red) { \
            match = 0; \
        } \
        if (packed->args.a2 != green) { \
            match = 0; \
        } \
        if (packed->args.a3 != blue) { \
            match = 0; \
        } \
        if (packed->args.a4 != alpha) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glColorMask(%d, %d, %d, %d);\n", red, green, blue, alpha); \
        } \
    } \
}
#define pack_glColorPointer(size, type, stride, pointer) ({ \
    glColorPointer_INDEXED *packed_data = malloc(sizeof(glColorPointer_INDEXED)); \
    packed_data->func = glColorPointer_INDEX; \
    packed_data->args.a1 = (GLint)size; \
    packed_data->args.a2 = (GLenum)type; \
    packed_data->args.a3 = (GLsizei)stride; \
    packed_data->args.a4 = (GLvoid *)pointer; \
    packed_data; \
})
#define emit_glColorPointer(size, type, stride, pointer) { \
    mock_push(pack_glColorPointer(size, type, stride, pointer)); \
}
#define test_glColorPointer(size, type, stride, pointer) { \
    glColorPointer_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glColorPointer missing (no calls left)\n"); \
    } else if (packed->func != glColorPointer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != size) { \
            match = 0; \
        } \
        if (packed->args.a2 != type) { \
            match = 0; \
        } \
        if (packed->args.a3 != stride) { \
            match = 0; \
        } \
        void *a = packed->args.a4, *b = pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(pointer)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glColorPointer(%d, 0x%04X, %d, %p);\n", size, type, stride, pointer); \
        } \
    } \
}
#define pack_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data) ({ \
    glCompressedTexImage2D_INDEXED *packed_data = malloc(sizeof(glCompressedTexImage2D_INDEXED)); \
    packed_data->func = glCompressedTexImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLenum)internalformat; \
    packed_data->args.a4 = (GLsizei)width; \
    packed_data->args.a5 = (GLsizei)height; \
    packed_data->args.a6 = (GLint)border; \
    packed_data->args.a7 = (GLsizei)imageSize; \
    packed_data->args.a8 = (GLvoid *)data; \
    packed_data; \
})
#define emit_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data) { \
    mock_push(pack_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data)); \
}
#define test_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data) { \
    glCompressedTexImage2D_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glCompressedTexImage2D missing (no calls left)\n"); \
    } else if (packed->func != glCompressedTexImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != level) { \
            match = 0; \
        } \
        if (packed->args.a3 != internalformat) { \
            match = 0; \
        } \
        if (packed->args.a4 != width) { \
            match = 0; \
        } \
        if (packed->args.a5 != height) { \
            match = 0; \
        } \
        if (packed->args.a6 != border) { \
            match = 0; \
        } \
        if (packed->args.a7 != imageSize) { \
            match = 0; \
        } \
        void *a = packed->args.a8, *b = data; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(data)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glCompressedTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %p);\n", target, level, internalformat, width, height, border, imageSize, data); \
        } \
    } \
}
#define pack_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data) ({ \
    glCompressedTexSubImage2D_INDEXED *packed_data = malloc(sizeof(glCompressedTexSubImage2D_INDEXED)); \
    packed_data->func = glCompressedTexSubImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)xoffset; \
    packed_data->args.a4 = (GLint)yoffset; \
    packed_data->args.a5 = (GLsizei)width; \
    packed_data->args.a6 = (GLsizei)height; \
    packed_data->args.a7 = (GLenum)format; \
    packed_data->args.a8 = (GLsizei)imageSize; \
    packed_data->args.a9 = (GLvoid *)data; \
    packed_data; \
})
#define emit_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data) { \
    mock_push(pack_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data)); \
}
#define test_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data) { \
    glCompressedTexSubImage2D_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glCompressedTexSubImage2D missing (no calls left)\n"); \
    } else if (packed->func != glCompressedTexSubImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != level) { \
            match = 0; \
        } \
        if (packed->args.a3 != xoffset) { \
            match = 0; \
        } \
        if (packed->args.a4 != yoffset) { \
            match = 0; \
        } \
        if (packed->args.a5 != width) { \
            match = 0; \
        } \
        if (packed->args.a6 != height) { \
            match = 0; \
        } \
        if (packed->args.a7 != format) { \
            match = 0; \
        } \
        if (packed->args.a8 != imageSize) { \
            match = 0; \
        } \
        void *a = packed->args.a9, *b = data; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(data)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glCompressedTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, %d, %p);\n", target, level, xoffset, yoffset, width, height, format, imageSize, data); \
        } \
    } \
}
#define pack_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border) ({ \
    glCopyTexImage2D_INDEXED *packed_data = malloc(sizeof(glCopyTexImage2D_INDEXED)); \
    packed_data->func = glCopyTexImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLenum)internalformat; \
    packed_data->args.a4 = (GLint)x; \
    packed_data->args.a5 = (GLint)y; \
    packed_data->args.a6 = (GLsizei)width; \
    packed_data->args.a7 = (GLsizei)height; \
    packed_data->args.a8 = (GLint)border; \
    packed_data; \
})
#define emit_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border) { \
    mock_push(pack_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border)); \
}
#define test_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border) { \
    glCopyTexImage2D_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glCopyTexImage2D missing (no calls left)\n"); \
    } else if (packed->func != glCopyTexImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != level) { \
            match = 0; \
        } \
        if (packed->args.a3 != internalformat) { \
            match = 0; \
        } \
        if (packed->args.a4 != x) { \
            match = 0; \
        } \
        if (packed->args.a5 != y) { \
            match = 0; \
        } \
        if (packed->args.a6 != width) { \
            match = 0; \
        } \
        if (packed->args.a7 != height) { \
            match = 0; \
        } \
        if (packed->args.a8 != border) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glCopyTexImage2D(0x%04X, %d, 0x%04X, %d, %d, %d, %d, %d);\n", target, level, internalformat, x, y, width, height, border); \
        } \
    } \
}
#define pack_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height) ({ \
    glCopyTexSubImage2D_INDEXED *packed_data = malloc(sizeof(glCopyTexSubImage2D_INDEXED)); \
    packed_data->func = glCopyTexSubImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)xoffset; \
    packed_data->args.a4 = (GLint)yoffset; \
    packed_data->args.a5 = (GLint)x; \
    packed_data->args.a6 = (GLint)y; \
    packed_data->args.a7 = (GLsizei)width; \
    packed_data->args.a8 = (GLsizei)height; \
    packed_data; \
})
#define emit_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height) { \
    mock_push(pack_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height)); \
}
#define test_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height) { \
    glCopyTexSubImage2D_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glCopyTexSubImage2D missing (no calls left)\n"); \
    } else if (packed->func != glCopyTexSubImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != level) { \
            match = 0; \
        } \
        if (packed->args.a3 != xoffset) { \
            match = 0; \
        } \
        if (packed->args.a4 != yoffset) { \
            match = 0; \
        } \
        if (packed->args.a5 != x) { \
            match = 0; \
        } \
        if (packed->args.a6 != y) { \
            match = 0; \
        } \
        if (packed->args.a7 != width) { \
            match = 0; \
        } \
        if (packed->args.a8 != height) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glCopyTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, %d, %d);\n", target, level, xoffset, yoffset, x, y, width, height); \
        } \
    } \
}
#define pack_glCullFace(mode) ({ \
    glCullFace_INDEXED *packed_data = malloc(sizeof(glCullFace_INDEXED)); \
    packed_data->func = glCullFace_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data; \
})
#define emit_glCullFace(mode) { \
    mock_push(pack_glCullFace(mode)); \
}
#define test_glCullFace(mode) { \
    glCullFace_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glCullFace missing (no calls left)\n"); \
    } else if (packed->func != glCullFace_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glCullFace(0x%04X);\n", mode); \
        } \
    } \
}
#define pack_glDeleteBuffers(n, buffers) ({ \
    glDeleteBuffers_INDEXED *packed_data = malloc(sizeof(glDeleteBuffers_INDEXED)); \
    packed_data->func = glDeleteBuffers_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)buffers; \
    packed_data; \
})
#define emit_glDeleteBuffers(n, buffers) { \
    mock_push(pack_glDeleteBuffers(n, buffers)); \
}
#define test_glDeleteBuffers(n, buffers) { \
    glDeleteBuffers_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDeleteBuffers missing (no calls left)\n"); \
    } else if (packed->func != glDeleteBuffers_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != n) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = buffers; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(buffers)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glDeleteBuffers(%d, %p);\n", n, buffers); \
        } \
    } \
}
#define pack_glDeleteTextures(n, textures) ({ \
    glDeleteTextures_INDEXED *packed_data = malloc(sizeof(glDeleteTextures_INDEXED)); \
    packed_data->func = glDeleteTextures_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)textures; \
    packed_data; \
})
#define emit_glDeleteTextures(n, textures) { \
    mock_push(pack_glDeleteTextures(n, textures)); \
}
#define test_glDeleteTextures(n, textures) { \
    glDeleteTextures_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDeleteTextures missing (no calls left)\n"); \
    } else if (packed->func != glDeleteTextures_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != n) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = textures; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(textures)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glDeleteTextures(%d, %p);\n", n, textures); \
        } \
    } \
}
#define pack_glDepthFunc(func) ({ \
    glDepthFunc_INDEXED *packed_data = malloc(sizeof(glDepthFunc_INDEXED)); \
    packed_data->func = glDepthFunc_INDEX; \
    packed_data->args.a1 = (GLenum)func; \
    packed_data; \
})
#define emit_glDepthFunc(func) { \
    mock_push(pack_glDepthFunc(func)); \
}
#define test_glDepthFunc(func) { \
    glDepthFunc_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDepthFunc missing (no calls left)\n"); \
    } else if (packed->func != glDepthFunc_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != func) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glDepthFunc(0x%04X);\n", func); \
        } \
    } \
}
#define pack_glDepthMask(flag) ({ \
    glDepthMask_INDEXED *packed_data = malloc(sizeof(glDepthMask_INDEXED)); \
    packed_data->func = glDepthMask_INDEX; \
    packed_data->args.a1 = (GLboolean)flag; \
    packed_data; \
})
#define emit_glDepthMask(flag) { \
    mock_push(pack_glDepthMask(flag)); \
}
#define test_glDepthMask(flag) { \
    glDepthMask_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDepthMask missing (no calls left)\n"); \
    } else if (packed->func != glDepthMask_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != flag) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glDepthMask(%d);\n", flag); \
        } \
    } \
}
#define pack_glDepthRangef(near, far) ({ \
    glDepthRangef_INDEXED *packed_data = malloc(sizeof(glDepthRangef_INDEXED)); \
    packed_data->func = glDepthRangef_INDEX; \
    packed_data->args.a1 = (GLclampf)near; \
    packed_data->args.a2 = (GLclampf)far; \
    packed_data; \
})
#define emit_glDepthRangef(near, far) { \
    mock_push(pack_glDepthRangef(near, far)); \
}
#define test_glDepthRangef(near, far) { \
    glDepthRangef_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDepthRangef missing (no calls left)\n"); \
    } else if (packed->func != glDepthRangef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != near) { \
            match = 0; \
        } \
        if (packed->args.a2 != far) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glDepthRangef(%p, %p);\n", near, far); \
        } \
    } \
}
#define pack_glDepthRangex(near, far) ({ \
    glDepthRangex_INDEXED *packed_data = malloc(sizeof(glDepthRangex_INDEXED)); \
    packed_data->func = glDepthRangex_INDEX; \
    packed_data->args.a1 = (GLclampx)near; \
    packed_data->args.a2 = (GLclampx)far; \
    packed_data; \
})
#define emit_glDepthRangex(near, far) { \
    mock_push(pack_glDepthRangex(near, far)); \
}
#define test_glDepthRangex(near, far) { \
    glDepthRangex_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDepthRangex missing (no calls left)\n"); \
    } else if (packed->func != glDepthRangex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != near) { \
            match = 0; \
        } \
        if (packed->args.a2 != far) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glDepthRangex(%p, %p);\n", near, far); \
        } \
    } \
}
#define pack_glDisable(cap) ({ \
    glDisable_INDEXED *packed_data = malloc(sizeof(glDisable_INDEXED)); \
    packed_data->func = glDisable_INDEX; \
    packed_data->args.a1 = (GLenum)cap; \
    packed_data; \
})
#define emit_glDisable(cap) { \
    mock_push(pack_glDisable(cap)); \
}
#define test_glDisable(cap) { \
    glDisable_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDisable missing (no calls left)\n"); \
    } else if (packed->func != glDisable_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != cap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glDisable(0x%04X);\n", cap); \
        } \
    } \
}
#define pack_glDisableClientState(array) ({ \
    glDisableClientState_INDEXED *packed_data = malloc(sizeof(glDisableClientState_INDEXED)); \
    packed_data->func = glDisableClientState_INDEX; \
    packed_data->args.a1 = (GLenum)array; \
    packed_data; \
})
#define emit_glDisableClientState(array) { \
    mock_push(pack_glDisableClientState(array)); \
}
#define test_glDisableClientState(array) { \
    glDisableClientState_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDisableClientState missing (no calls left)\n"); \
    } else if (packed->func != glDisableClientState_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != array) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glDisableClientState(0x%04X);\n", array); \
        } \
    } \
}
#define pack_glDrawArrays(mode, first, count) ({ \
    glDrawArrays_INDEXED *packed_data = malloc(sizeof(glDrawArrays_INDEXED)); \
    packed_data->func = glDrawArrays_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data->args.a2 = (GLint)first; \
    packed_data->args.a3 = (GLsizei)count; \
    packed_data; \
})
#define emit_glDrawArrays(mode, first, count) { \
    mock_push(pack_glDrawArrays(mode, first, count)); \
}
#define test_glDrawArrays(mode, first, count) { \
    glDrawArrays_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDrawArrays missing (no calls left)\n"); \
    } else if (packed->func != glDrawArrays_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != mode) { \
            match = 0; \
        } \
        if (packed->args.a2 != first) { \
            match = 0; \
        } \
        if (packed->args.a3 != count) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glDrawArrays(0x%04X, %d, %d);\n", mode, first, count); \
        } \
    } \
}
#define pack_glDrawElements(mode, count, type, indices) ({ \
    glDrawElements_INDEXED *packed_data = malloc(sizeof(glDrawElements_INDEXED)); \
    packed_data->func = glDrawElements_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data->args.a2 = (GLsizei)count; \
    packed_data->args.a3 = (GLenum)type; \
    packed_data->args.a4 = (GLvoid *)indices; \
    packed_data; \
})
#define emit_glDrawElements(mode, count, type, indices) { \
    mock_push(pack_glDrawElements(mode, count, type, indices)); \
}
#define test_glDrawElements(mode, count, type, indices) { \
    glDrawElements_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glDrawElements missing (no calls left)\n"); \
    } else if (packed->func != glDrawElements_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != mode) { \
            match = 0; \
        } \
        if (packed->args.a2 != count) { \
            match = 0; \
        } \
        if (packed->args.a3 != type) { \
            match = 0; \
        } \
        void *a = packed->args.a4, *b = indices; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(indices)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glDrawElements(0x%04X, %d, 0x%04X, %p);\n", mode, count, type, indices); \
        } \
    } \
}
#define pack_glEnable(cap) ({ \
    glEnable_INDEXED *packed_data = malloc(sizeof(glEnable_INDEXED)); \
    packed_data->func = glEnable_INDEX; \
    packed_data->args.a1 = (GLenum)cap; \
    packed_data; \
})
#define emit_glEnable(cap) { \
    mock_push(pack_glEnable(cap)); \
}
#define test_glEnable(cap) { \
    glEnable_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glEnable missing (no calls left)\n"); \
    } else if (packed->func != glEnable_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != cap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glEnable(0x%04X);\n", cap); \
        } \
    } \
}
#define pack_glEnableClientState(array) ({ \
    glEnableClientState_INDEXED *packed_data = malloc(sizeof(glEnableClientState_INDEXED)); \
    packed_data->func = glEnableClientState_INDEX; \
    packed_data->args.a1 = (GLenum)array; \
    packed_data; \
})
#define emit_glEnableClientState(array) { \
    mock_push(pack_glEnableClientState(array)); \
}
#define test_glEnableClientState(array) { \
    glEnableClientState_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glEnableClientState missing (no calls left)\n"); \
    } else if (packed->func != glEnableClientState_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != array) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glEnableClientState(0x%04X);\n", array); \
        } \
    } \
}
#define pack_glFinish() ({ \
    glFinish_INDEXED *packed_data = malloc(sizeof(glFinish_INDEXED)); \
    packed_data->func = glFinish_INDEX; \
    packed_data; \
})
#define emit_glFinish() { \
    mock_push(pack_glFinish()); \
}
#define test_glFinish() { \
    glFinish_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFinish missing (no calls left)\n"); \
    } else if (packed->func != glFinish_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glFinish();\n", ); \
        } \
    } \
}
#define pack_glFlush() ({ \
    glFlush_INDEXED *packed_data = malloc(sizeof(glFlush_INDEXED)); \
    packed_data->func = glFlush_INDEX; \
    packed_data; \
})
#define emit_glFlush() { \
    mock_push(pack_glFlush()); \
}
#define test_glFlush() { \
    glFlush_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFlush missing (no calls left)\n"); \
    } else if (packed->func != glFlush_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glFlush();\n", ); \
        } \
    } \
}
#define pack_glFogf(pname, param) ({ \
    glFogf_INDEXED *packed_data = malloc(sizeof(glFogf_INDEXED)); \
    packed_data->func = glFogf_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat)param; \
    packed_data; \
})
#define emit_glFogf(pname, param) { \
    mock_push(pack_glFogf(pname, param)); \
}
#define test_glFogf(pname, param) { \
    glFogf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFogf missing (no calls left)\n"); \
    } else if (packed->func != glFogf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        if (packed->args.a2 - param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glFogf(0x%04X, %0.2f);\n", pname, param); \
        } \
    } \
}
#define pack_glFogfv(pname, params) ({ \
    glFogfv_INDEXED *packed_data = malloc(sizeof(glFogfv_INDEXED)); \
    packed_data->func = glFogfv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glFogfv(pname, params) { \
    mock_push(pack_glFogfv(pname, params)); \
}
#define test_glFogfv(pname, params) { \
    glFogfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFogfv missing (no calls left)\n"); \
    } else if (packed->func != glFogfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glFogfv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glFogx(pname, param) ({ \
    glFogx_INDEXED *packed_data = malloc(sizeof(glFogx_INDEXED)); \
    packed_data->func = glFogx_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed)param; \
    packed_data; \
})
#define emit_glFogx(pname, param) { \
    mock_push(pack_glFogx(pname, param)); \
}
#define test_glFogx(pname, param) { \
    glFogx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFogx missing (no calls left)\n"); \
    } else if (packed->func != glFogx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        if (packed->args.a2 != param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glFogx(0x%04X, %p);\n", pname, param); \
        } \
    } \
}
#define pack_glFogxv(pname, params) ({ \
    glFogxv_INDEXED *packed_data = malloc(sizeof(glFogxv_INDEXED)); \
    packed_data->func = glFogxv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glFogxv(pname, params) { \
    mock_push(pack_glFogxv(pname, params)); \
}
#define test_glFogxv(pname, params) { \
    glFogxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFogxv missing (no calls left)\n"); \
    } else if (packed->func != glFogxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glFogxv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glFrontFace(mode) ({ \
    glFrontFace_INDEXED *packed_data = malloc(sizeof(glFrontFace_INDEXED)); \
    packed_data->func = glFrontFace_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data; \
})
#define emit_glFrontFace(mode) { \
    mock_push(pack_glFrontFace(mode)); \
}
#define test_glFrontFace(mode) { \
    glFrontFace_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFrontFace missing (no calls left)\n"); \
    } else if (packed->func != glFrontFace_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glFrontFace(0x%04X);\n", mode); \
        } \
    } \
}
#define pack_glFrustumf(left, right, bottom, top, near, far) ({ \
    glFrustumf_INDEXED *packed_data = malloc(sizeof(glFrustumf_INDEXED)); \
    packed_data->func = glFrustumf_INDEX; \
    packed_data->args.a1 = (GLfloat)left; \
    packed_data->args.a2 = (GLfloat)right; \
    packed_data->args.a3 = (GLfloat)bottom; \
    packed_data->args.a4 = (GLfloat)top; \
    packed_data->args.a5 = (GLfloat)near; \
    packed_data->args.a6 = (GLfloat)far; \
    packed_data; \
})
#define emit_glFrustumf(left, right, bottom, top, near, far) { \
    mock_push(pack_glFrustumf(left, right, bottom, top, near, far)); \
}
#define test_glFrustumf(left, right, bottom, top, near, far) { \
    glFrustumf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFrustumf missing (no calls left)\n"); \
    } else if (packed->func != glFrustumf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 - left >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a2 - right >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a3 - bottom >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a4 - top >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a5 - near >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a6 - far >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glFrustumf(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", left, right, bottom, top, near, far); \
        } \
    } \
}
#define pack_glFrustumx(left, right, bottom, top, near, far) ({ \
    glFrustumx_INDEXED *packed_data = malloc(sizeof(glFrustumx_INDEXED)); \
    packed_data->func = glFrustumx_INDEX; \
    packed_data->args.a1 = (GLfixed)left; \
    packed_data->args.a2 = (GLfixed)right; \
    packed_data->args.a3 = (GLfixed)bottom; \
    packed_data->args.a4 = (GLfixed)top; \
    packed_data->args.a5 = (GLfixed)near; \
    packed_data->args.a6 = (GLfixed)far; \
    packed_data; \
})
#define emit_glFrustumx(left, right, bottom, top, near, far) { \
    mock_push(pack_glFrustumx(left, right, bottom, top, near, far)); \
}
#define test_glFrustumx(left, right, bottom, top, near, far) { \
    glFrustumx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glFrustumx missing (no calls left)\n"); \
    } else if (packed->func != glFrustumx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != left) { \
            match = 0; \
        } \
        if (packed->args.a2 != right) { \
            match = 0; \
        } \
        if (packed->args.a3 != bottom) { \
            match = 0; \
        } \
        if (packed->args.a4 != top) { \
            match = 0; \
        } \
        if (packed->args.a5 != near) { \
            match = 0; \
        } \
        if (packed->args.a6 != far) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glFrustumx(%p, %p, %p, %p, %p, %p);\n", left, right, bottom, top, near, far); \
        } \
    } \
}
#define pack_glGenBuffers(n, buffers) ({ \
    glGenBuffers_INDEXED *packed_data = malloc(sizeof(glGenBuffers_INDEXED)); \
    packed_data->func = glGenBuffers_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)buffers; \
    packed_data; \
})
#define emit_glGenBuffers(n, buffers) { \
    mock_push(pack_glGenBuffers(n, buffers)); \
}
#define test_glGenBuffers(n, buffers) { \
    glGenBuffers_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGenBuffers missing (no calls left)\n"); \
    } else if (packed->func != glGenBuffers_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != n) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = buffers; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(buffers)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGenBuffers(%d, %p);\n", n, buffers); \
        } \
    } \
}
#define pack_glGenTextures(n, textures) ({ \
    glGenTextures_INDEXED *packed_data = malloc(sizeof(glGenTextures_INDEXED)); \
    packed_data->func = glGenTextures_INDEX; \
    packed_data->args.a1 = (GLsizei)n; \
    packed_data->args.a2 = (GLuint *)textures; \
    packed_data; \
})
#define emit_glGenTextures(n, textures) { \
    mock_push(pack_glGenTextures(n, textures)); \
}
#define test_glGenTextures(n, textures) { \
    glGenTextures_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGenTextures missing (no calls left)\n"); \
    } else if (packed->func != glGenTextures_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != n) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = textures; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(textures)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGenTextures(%d, %p);\n", n, textures); \
        } \
    } \
}
#define pack_glGetBooleanv(pname, params) ({ \
    glGetBooleanv_INDEXED *packed_data = malloc(sizeof(glGetBooleanv_INDEXED)); \
    packed_data->func = glGetBooleanv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLboolean *)params; \
    packed_data; \
})
#define emit_glGetBooleanv(pname, params) { \
    mock_push(pack_glGetBooleanv(pname, params)); \
}
#define test_glGetBooleanv(pname, params) { \
    glGetBooleanv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetBooleanv missing (no calls left)\n"); \
    } else if (packed->func != glGetBooleanv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetBooleanv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glGetBufferParameteriv(target, pname, params) ({ \
    glGetBufferParameteriv_INDEXED *packed_data = malloc(sizeof(glGetBufferParameteriv_INDEXED)); \
    packed_data->func = glGetBufferParameteriv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define emit_glGetBufferParameteriv(target, pname, params) { \
    mock_push(pack_glGetBufferParameteriv(target, pname, params)); \
}
#define test_glGetBufferParameteriv(target, pname, params) { \
    glGetBufferParameteriv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetBufferParameteriv missing (no calls left)\n"); \
    } else if (packed->func != glGetBufferParameteriv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetBufferParameteriv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glGetClipPlanef(plane, equation) ({ \
    glGetClipPlanef_INDEXED *packed_data = malloc(sizeof(glGetClipPlanef_INDEXED)); \
    packed_data->func = glGetClipPlanef_INDEX; \
    packed_data->args.a1 = (GLenum)plane; \
    packed_data->args.a2 = (GLfloat *)equation; \
    packed_data; \
})
#define emit_glGetClipPlanef(plane, equation) { \
    mock_push(pack_glGetClipPlanef(plane, equation)); \
}
#define test_glGetClipPlanef(plane, equation) { \
    glGetClipPlanef_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetClipPlanef missing (no calls left)\n"); \
    } else if (packed->func != glGetClipPlanef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != plane) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(equation)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetClipPlanef(0x%04X, %p);\n", plane, equation); \
        } \
    } \
}
#define pack_glGetClipPlanex(plane, equation) ({ \
    glGetClipPlanex_INDEXED *packed_data = malloc(sizeof(glGetClipPlanex_INDEXED)); \
    packed_data->func = glGetClipPlanex_INDEX; \
    packed_data->args.a1 = (GLenum)plane; \
    packed_data->args.a2 = (GLfixed *)equation; \
    packed_data; \
})
#define emit_glGetClipPlanex(plane, equation) { \
    mock_push(pack_glGetClipPlanex(plane, equation)); \
}
#define test_glGetClipPlanex(plane, equation) { \
    glGetClipPlanex_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetClipPlanex missing (no calls left)\n"); \
    } else if (packed->func != glGetClipPlanex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != plane) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = equation; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(equation)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetClipPlanex(0x%04X, %p);\n", plane, equation); \
        } \
    } \
}
#define pack_glGetError() ({ \
    glGetError_INDEXED *packed_data = malloc(sizeof(glGetError_INDEXED)); \
    packed_data->func = glGetError_INDEX; \
    packed_data; \
})
#define emit_glGetError() { \
    mock_push(pack_glGetError()); \
}
#define test_glGetError() { \
    glGetError_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetError missing (no calls left)\n"); \
    } else if (packed->func != glGetError_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetError();\n", ); \
        } \
    } \
}
#define pack_glGetFixedv(pname, params) ({ \
    glGetFixedv_INDEXED *packed_data = malloc(sizeof(glGetFixedv_INDEXED)); \
    packed_data->func = glGetFixedv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glGetFixedv(pname, params) { \
    mock_push(pack_glGetFixedv(pname, params)); \
}
#define test_glGetFixedv(pname, params) { \
    glGetFixedv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetFixedv missing (no calls left)\n"); \
    } else if (packed->func != glGetFixedv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetFixedv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glGetFloatv(pname, params) ({ \
    glGetFloatv_INDEXED *packed_data = malloc(sizeof(glGetFloatv_INDEXED)); \
    packed_data->func = glGetFloatv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glGetFloatv(pname, params) { \
    mock_push(pack_glGetFloatv(pname, params)); \
}
#define test_glGetFloatv(pname, params) { \
    glGetFloatv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetFloatv missing (no calls left)\n"); \
    } else if (packed->func != glGetFloatv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetFloatv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glGetIntegerv(pname, params) ({ \
    glGetIntegerv_INDEXED *packed_data = malloc(sizeof(glGetIntegerv_INDEXED)); \
    packed_data->func = glGetIntegerv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLint *)params; \
    packed_data; \
})
#define emit_glGetIntegerv(pname, params) { \
    mock_push(pack_glGetIntegerv(pname, params)); \
}
#define test_glGetIntegerv(pname, params) { \
    glGetIntegerv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetIntegerv missing (no calls left)\n"); \
    } else if (packed->func != glGetIntegerv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetIntegerv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glGetLightfv(light, pname, params) ({ \
    glGetLightfv_INDEXED *packed_data = malloc(sizeof(glGetLightfv_INDEXED)); \
    packed_data->func = glGetLightfv_INDEX; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glGetLightfv(light, pname, params) { \
    mock_push(pack_glGetLightfv(light, pname, params)); \
}
#define test_glGetLightfv(light, pname, params) { \
    glGetLightfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetLightfv missing (no calls left)\n"); \
    } else if (packed->func != glGetLightfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != light) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetLightfv(0x%04X, 0x%04X, %p);\n", light, pname, params); \
        } \
    } \
}
#define pack_glGetLightxv(light, pname, params) ({ \
    glGetLightxv_INDEXED *packed_data = malloc(sizeof(glGetLightxv_INDEXED)); \
    packed_data->func = glGetLightxv_INDEX; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glGetLightxv(light, pname, params) { \
    mock_push(pack_glGetLightxv(light, pname, params)); \
}
#define test_glGetLightxv(light, pname, params) { \
    glGetLightxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetLightxv missing (no calls left)\n"); \
    } else if (packed->func != glGetLightxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != light) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetLightxv(0x%04X, 0x%04X, %p);\n", light, pname, params); \
        } \
    } \
}
#define pack_glGetMaterialfv(face, pname, params) ({ \
    glGetMaterialfv_INDEXED *packed_data = malloc(sizeof(glGetMaterialfv_INDEXED)); \
    packed_data->func = glGetMaterialfv_INDEX; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glGetMaterialfv(face, pname, params) { \
    mock_push(pack_glGetMaterialfv(face, pname, params)); \
}
#define test_glGetMaterialfv(face, pname, params) { \
    glGetMaterialfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetMaterialfv missing (no calls left)\n"); \
    } else if (packed->func != glGetMaterialfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != face) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetMaterialfv(0x%04X, 0x%04X, %p);\n", face, pname, params); \
        } \
    } \
}
#define pack_glGetMaterialxv(face, pname, params) ({ \
    glGetMaterialxv_INDEXED *packed_data = malloc(sizeof(glGetMaterialxv_INDEXED)); \
    packed_data->func = glGetMaterialxv_INDEX; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glGetMaterialxv(face, pname, params) { \
    mock_push(pack_glGetMaterialxv(face, pname, params)); \
}
#define test_glGetMaterialxv(face, pname, params) { \
    glGetMaterialxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetMaterialxv missing (no calls left)\n"); \
    } else if (packed->func != glGetMaterialxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != face) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetMaterialxv(0x%04X, 0x%04X, %p);\n", face, pname, params); \
        } \
    } \
}
#define pack_glGetPointerv(pname, params) ({ \
    glGetPointerv_INDEXED *packed_data = malloc(sizeof(glGetPointerv_INDEXED)); \
    packed_data->func = glGetPointerv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLvoid **)params; \
    packed_data; \
})
#define emit_glGetPointerv(pname, params) { \
    mock_push(pack_glGetPointerv(pname, params)); \
}
#define test_glGetPointerv(pname, params) { \
    glGetPointerv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetPointerv missing (no calls left)\n"); \
    } else if (packed->func != glGetPointerv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetPointerv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glGetString(name) ({ \
    glGetString_INDEXED *packed_data = malloc(sizeof(glGetString_INDEXED)); \
    packed_data->func = glGetString_INDEX; \
    packed_data->args.a1 = (GLenum)name; \
    packed_data; \
})
#define emit_glGetString(name) { \
    mock_push(pack_glGetString(name)); \
}
#define test_glGetString(name) { \
    glGetString_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetString missing (no calls left)\n"); \
    } else if (packed->func != glGetString_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != name) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetString(0x%04X);\n", name); \
        } \
    } \
}
#define pack_glGetTexEnvfv(target, pname, params) ({ \
    glGetTexEnvfv_INDEXED *packed_data = malloc(sizeof(glGetTexEnvfv_INDEXED)); \
    packed_data->func = glGetTexEnvfv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glGetTexEnvfv(target, pname, params) { \
    mock_push(pack_glGetTexEnvfv(target, pname, params)); \
}
#define test_glGetTexEnvfv(target, pname, params) { \
    glGetTexEnvfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexEnvfv missing (no calls left)\n"); \
    } else if (packed->func != glGetTexEnvfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetTexEnvfv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glGetTexEnviv(target, pname, params) ({ \
    glGetTexEnviv_INDEXED *packed_data = malloc(sizeof(glGetTexEnviv_INDEXED)); \
    packed_data->func = glGetTexEnviv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define emit_glGetTexEnviv(target, pname, params) { \
    mock_push(pack_glGetTexEnviv(target, pname, params)); \
}
#define test_glGetTexEnviv(target, pname, params) { \
    glGetTexEnviv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexEnviv missing (no calls left)\n"); \
    } else if (packed->func != glGetTexEnviv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetTexEnviv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glGetTexEnvxv(target, pname, params) ({ \
    glGetTexEnvxv_INDEXED *packed_data = malloc(sizeof(glGetTexEnvxv_INDEXED)); \
    packed_data->func = glGetTexEnvxv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glGetTexEnvxv(target, pname, params) { \
    mock_push(pack_glGetTexEnvxv(target, pname, params)); \
}
#define test_glGetTexEnvxv(target, pname, params) { \
    glGetTexEnvxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexEnvxv missing (no calls left)\n"); \
    } else if (packed->func != glGetTexEnvxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetTexEnvxv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glGetTexParameterfv(target, pname, params) ({ \
    glGetTexParameterfv_INDEXED *packed_data = malloc(sizeof(glGetTexParameterfv_INDEXED)); \
    packed_data->func = glGetTexParameterfv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glGetTexParameterfv(target, pname, params) { \
    mock_push(pack_glGetTexParameterfv(target, pname, params)); \
}
#define test_glGetTexParameterfv(target, pname, params) { \
    glGetTexParameterfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexParameterfv missing (no calls left)\n"); \
    } else if (packed->func != glGetTexParameterfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetTexParameterfv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glGetTexParameteriv(target, pname, params) ({ \
    glGetTexParameteriv_INDEXED *packed_data = malloc(sizeof(glGetTexParameteriv_INDEXED)); \
    packed_data->func = glGetTexParameteriv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define emit_glGetTexParameteriv(target, pname, params) { \
    mock_push(pack_glGetTexParameteriv(target, pname, params)); \
}
#define test_glGetTexParameteriv(target, pname, params) { \
    glGetTexParameteriv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexParameteriv missing (no calls left)\n"); \
    } else if (packed->func != glGetTexParameteriv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetTexParameteriv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glGetTexParameterxv(target, pname, params) ({ \
    glGetTexParameterxv_INDEXED *packed_data = malloc(sizeof(glGetTexParameterxv_INDEXED)); \
    packed_data->func = glGetTexParameterxv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glGetTexParameterxv(target, pname, params) { \
    mock_push(pack_glGetTexParameterxv(target, pname, params)); \
}
#define test_glGetTexParameterxv(target, pname, params) { \
    glGetTexParameterxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glGetTexParameterxv missing (no calls left)\n"); \
    } else if (packed->func != glGetTexParameterxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glGetTexParameterxv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glHint(target, mode) ({ \
    glHint_INDEXED *packed_data = malloc(sizeof(glHint_INDEXED)); \
    packed_data->func = glHint_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)mode; \
    packed_data; \
})
#define emit_glHint(target, mode) { \
    mock_push(pack_glHint(target, mode)); \
}
#define test_glHint(target, mode) { \
    glHint_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glHint missing (no calls left)\n"); \
    } else if (packed->func != glHint_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glHint(0x%04X, 0x%04X);\n", target, mode); \
        } \
    } \
}
#define pack_glIsBuffer(buffer) ({ \
    glIsBuffer_INDEXED *packed_data = malloc(sizeof(glIsBuffer_INDEXED)); \
    packed_data->func = glIsBuffer_INDEX; \
    packed_data->args.a1 = (GLuint)buffer; \
    packed_data; \
})
#define emit_glIsBuffer(buffer) { \
    mock_push(pack_glIsBuffer(buffer)); \
}
#define test_glIsBuffer(buffer) { \
    glIsBuffer_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glIsBuffer missing (no calls left)\n"); \
    } else if (packed->func != glIsBuffer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != buffer) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glIsBuffer(%u);\n", buffer); \
        } \
    } \
}
#define pack_glIsEnabled(cap) ({ \
    glIsEnabled_INDEXED *packed_data = malloc(sizeof(glIsEnabled_INDEXED)); \
    packed_data->func = glIsEnabled_INDEX; \
    packed_data->args.a1 = (GLenum)cap; \
    packed_data; \
})
#define emit_glIsEnabled(cap) { \
    mock_push(pack_glIsEnabled(cap)); \
}
#define test_glIsEnabled(cap) { \
    glIsEnabled_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glIsEnabled missing (no calls left)\n"); \
    } else if (packed->func != glIsEnabled_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != cap) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glIsEnabled(0x%04X);\n", cap); \
        } \
    } \
}
#define pack_glIsTexture(texture) ({ \
    glIsTexture_INDEXED *packed_data = malloc(sizeof(glIsTexture_INDEXED)); \
    packed_data->func = glIsTexture_INDEX; \
    packed_data->args.a1 = (GLuint)texture; \
    packed_data; \
})
#define emit_glIsTexture(texture) { \
    mock_push(pack_glIsTexture(texture)); \
}
#define test_glIsTexture(texture) { \
    glIsTexture_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glIsTexture missing (no calls left)\n"); \
    } else if (packed->func != glIsTexture_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != texture) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glIsTexture(%u);\n", texture); \
        } \
    } \
}
#define pack_glLightModelf(pname, param) ({ \
    glLightModelf_INDEXED *packed_data = malloc(sizeof(glLightModelf_INDEXED)); \
    packed_data->func = glLightModelf_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat)param; \
    packed_data; \
})
#define emit_glLightModelf(pname, param) { \
    mock_push(pack_glLightModelf(pname, param)); \
}
#define test_glLightModelf(pname, param) { \
    glLightModelf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightModelf missing (no calls left)\n"); \
    } else if (packed->func != glLightModelf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        if (packed->args.a2 - param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLightModelf(0x%04X, %0.2f);\n", pname, param); \
        } \
    } \
}
#define pack_glLightModelfv(pname, params) ({ \
    glLightModelfv_INDEXED *packed_data = malloc(sizeof(glLightModelfv_INDEXED)); \
    packed_data->func = glLightModelfv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glLightModelfv(pname, params) { \
    mock_push(pack_glLightModelfv(pname, params)); \
}
#define test_glLightModelfv(pname, params) { \
    glLightModelfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightModelfv missing (no calls left)\n"); \
    } else if (packed->func != glLightModelfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLightModelfv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glLightModelx(pname, param) ({ \
    glLightModelx_INDEXED *packed_data = malloc(sizeof(glLightModelx_INDEXED)); \
    packed_data->func = glLightModelx_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed)param; \
    packed_data; \
})
#define emit_glLightModelx(pname, param) { \
    mock_push(pack_glLightModelx(pname, param)); \
}
#define test_glLightModelx(pname, param) { \
    glLightModelx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightModelx missing (no calls left)\n"); \
    } else if (packed->func != glLightModelx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        if (packed->args.a2 != param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLightModelx(0x%04X, %p);\n", pname, param); \
        } \
    } \
}
#define pack_glLightModelxv(pname, params) ({ \
    glLightModelxv_INDEXED *packed_data = malloc(sizeof(glLightModelxv_INDEXED)); \
    packed_data->func = glLightModelxv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glLightModelxv(pname, params) { \
    mock_push(pack_glLightModelxv(pname, params)); \
}
#define test_glLightModelxv(pname, params) { \
    glLightModelxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightModelxv missing (no calls left)\n"); \
    } else if (packed->func != glLightModelxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLightModelxv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glLightf(light, pname, param) ({ \
    glLightf_INDEXED *packed_data = malloc(sizeof(glLightf_INDEXED)); \
    packed_data->func = glLightf_INDEX; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat)param; \
    packed_data; \
})
#define emit_glLightf(light, pname, param) { \
    mock_push(pack_glLightf(light, pname, param)); \
}
#define test_glLightf(light, pname, param) { \
    glLightf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightf missing (no calls left)\n"); \
    } else if (packed->func != glLightf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != light) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        if (packed->args.a3 - param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLightf(0x%04X, 0x%04X, %0.2f);\n", light, pname, param); \
        } \
    } \
}
#define pack_glLightfv(light, pname, params) ({ \
    glLightfv_INDEXED *packed_data = malloc(sizeof(glLightfv_INDEXED)); \
    packed_data->func = glLightfv_INDEX; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glLightfv(light, pname, params) { \
    mock_push(pack_glLightfv(light, pname, params)); \
}
#define test_glLightfv(light, pname, params) { \
    glLightfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightfv missing (no calls left)\n"); \
    } else if (packed->func != glLightfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != light) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLightfv(0x%04X, 0x%04X, %p);\n", light, pname, params); \
        } \
    } \
}
#define pack_glLightx(light, pname, param) ({ \
    glLightx_INDEXED *packed_data = malloc(sizeof(glLightx_INDEXED)); \
    packed_data->func = glLightx_INDEX; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed)param; \
    packed_data; \
})
#define emit_glLightx(light, pname, param) { \
    mock_push(pack_glLightx(light, pname, param)); \
}
#define test_glLightx(light, pname, param) { \
    glLightx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightx missing (no calls left)\n"); \
    } else if (packed->func != glLightx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != light) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        if (packed->args.a3 != param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLightx(0x%04X, 0x%04X, %p);\n", light, pname, param); \
        } \
    } \
}
#define pack_glLightxv(light, pname, params) ({ \
    glLightxv_INDEXED *packed_data = malloc(sizeof(glLightxv_INDEXED)); \
    packed_data->func = glLightxv_INDEX; \
    packed_data->args.a1 = (GLenum)light; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glLightxv(light, pname, params) { \
    mock_push(pack_glLightxv(light, pname, params)); \
}
#define test_glLightxv(light, pname, params) { \
    glLightxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLightxv missing (no calls left)\n"); \
    } else if (packed->func != glLightxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != light) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLightxv(0x%04X, 0x%04X, %p);\n", light, pname, params); \
        } \
    } \
}
#define pack_glLineWidth(width) ({ \
    glLineWidth_INDEXED *packed_data = malloc(sizeof(glLineWidth_INDEXED)); \
    packed_data->func = glLineWidth_INDEX; \
    packed_data->args.a1 = (GLfloat)width; \
    packed_data; \
})
#define emit_glLineWidth(width) { \
    mock_push(pack_glLineWidth(width)); \
}
#define test_glLineWidth(width) { \
    glLineWidth_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLineWidth missing (no calls left)\n"); \
    } else if (packed->func != glLineWidth_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 - width >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLineWidth(%0.2f);\n", width); \
        } \
    } \
}
#define pack_glLineWidthx(width) ({ \
    glLineWidthx_INDEXED *packed_data = malloc(sizeof(glLineWidthx_INDEXED)); \
    packed_data->func = glLineWidthx_INDEX; \
    packed_data->args.a1 = (GLfixed)width; \
    packed_data; \
})
#define emit_glLineWidthx(width) { \
    mock_push(pack_glLineWidthx(width)); \
}
#define test_glLineWidthx(width) { \
    glLineWidthx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLineWidthx missing (no calls left)\n"); \
    } else if (packed->func != glLineWidthx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != width) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLineWidthx(%p);\n", width); \
        } \
    } \
}
#define pack_glLoadIdentity() ({ \
    glLoadIdentity_INDEXED *packed_data = malloc(sizeof(glLoadIdentity_INDEXED)); \
    packed_data->func = glLoadIdentity_INDEX; \
    packed_data; \
})
#define emit_glLoadIdentity() { \
    mock_push(pack_glLoadIdentity()); \
}
#define test_glLoadIdentity() { \
    glLoadIdentity_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLoadIdentity missing (no calls left)\n"); \
    } else if (packed->func != glLoadIdentity_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLoadIdentity();\n", ); \
        } \
    } \
}
#define pack_glLoadMatrixf(m) ({ \
    glLoadMatrixf_INDEXED *packed_data = malloc(sizeof(glLoadMatrixf_INDEXED)); \
    packed_data->func = glLoadMatrixf_INDEX; \
    packed_data->args.a1 = (GLfloat *)m; \
    packed_data; \
})
#define emit_glLoadMatrixf(m) { \
    mock_push(pack_glLoadMatrixf(m)); \
}
#define test_glLoadMatrixf(m) { \
    glLoadMatrixf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLoadMatrixf missing (no calls left)\n"); \
    } else if (packed->func != glLoadMatrixf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        void *a = packed->args.a1, *b = m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(m)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLoadMatrixf(%p);\n", m); \
        } \
    } \
}
#define pack_glLoadMatrixx(m) ({ \
    glLoadMatrixx_INDEXED *packed_data = malloc(sizeof(glLoadMatrixx_INDEXED)); \
    packed_data->func = glLoadMatrixx_INDEX; \
    packed_data->args.a1 = (GLfixed *)m; \
    packed_data; \
})
#define emit_glLoadMatrixx(m) { \
    mock_push(pack_glLoadMatrixx(m)); \
}
#define test_glLoadMatrixx(m) { \
    glLoadMatrixx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLoadMatrixx missing (no calls left)\n"); \
    } else if (packed->func != glLoadMatrixx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        void *a = packed->args.a1, *b = m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(m)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLoadMatrixx(%p);\n", m); \
        } \
    } \
}
#define pack_glLogicOp(opcode) ({ \
    glLogicOp_INDEXED *packed_data = malloc(sizeof(glLogicOp_INDEXED)); \
    packed_data->func = glLogicOp_INDEX; \
    packed_data->args.a1 = (GLenum)opcode; \
    packed_data; \
})
#define emit_glLogicOp(opcode) { \
    mock_push(pack_glLogicOp(opcode)); \
}
#define test_glLogicOp(opcode) { \
    glLogicOp_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glLogicOp missing (no calls left)\n"); \
    } else if (packed->func != glLogicOp_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != opcode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glLogicOp(0x%04X);\n", opcode); \
        } \
    } \
}
#define pack_glMaterialf(face, pname, param) ({ \
    glMaterialf_INDEXED *packed_data = malloc(sizeof(glMaterialf_INDEXED)); \
    packed_data->func = glMaterialf_INDEX; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat)param; \
    packed_data; \
})
#define emit_glMaterialf(face, pname, param) { \
    mock_push(pack_glMaterialf(face, pname, param)); \
}
#define test_glMaterialf(face, pname, param) { \
    glMaterialf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMaterialf missing (no calls left)\n"); \
    } else if (packed->func != glMaterialf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != face) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        if (packed->args.a3 - param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glMaterialf(0x%04X, 0x%04X, %0.2f);\n", face, pname, param); \
        } \
    } \
}
#define pack_glMaterialfv(face, pname, params) ({ \
    glMaterialfv_INDEXED *packed_data = malloc(sizeof(glMaterialfv_INDEXED)); \
    packed_data->func = glMaterialfv_INDEX; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glMaterialfv(face, pname, params) { \
    mock_push(pack_glMaterialfv(face, pname, params)); \
}
#define test_glMaterialfv(face, pname, params) { \
    glMaterialfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMaterialfv missing (no calls left)\n"); \
    } else if (packed->func != glMaterialfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != face) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glMaterialfv(0x%04X, 0x%04X, %p);\n", face, pname, params); \
        } \
    } \
}
#define pack_glMaterialx(face, pname, param) ({ \
    glMaterialx_INDEXED *packed_data = malloc(sizeof(glMaterialx_INDEXED)); \
    packed_data->func = glMaterialx_INDEX; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed)param; \
    packed_data; \
})
#define emit_glMaterialx(face, pname, param) { \
    mock_push(pack_glMaterialx(face, pname, param)); \
}
#define test_glMaterialx(face, pname, param) { \
    glMaterialx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMaterialx missing (no calls left)\n"); \
    } else if (packed->func != glMaterialx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != face) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        if (packed->args.a3 != param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glMaterialx(0x%04X, 0x%04X, %p);\n", face, pname, param); \
        } \
    } \
}
#define pack_glMaterialxv(face, pname, params) ({ \
    glMaterialxv_INDEXED *packed_data = malloc(sizeof(glMaterialxv_INDEXED)); \
    packed_data->func = glMaterialxv_INDEX; \
    packed_data->args.a1 = (GLenum)face; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glMaterialxv(face, pname, params) { \
    mock_push(pack_glMaterialxv(face, pname, params)); \
}
#define test_glMaterialxv(face, pname, params) { \
    glMaterialxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMaterialxv missing (no calls left)\n"); \
    } else if (packed->func != glMaterialxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != face) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glMaterialxv(0x%04X, 0x%04X, %p);\n", face, pname, params); \
        } \
    } \
}
#define pack_glMatrixMode(mode) ({ \
    glMatrixMode_INDEXED *packed_data = malloc(sizeof(glMatrixMode_INDEXED)); \
    packed_data->func = glMatrixMode_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data; \
})
#define emit_glMatrixMode(mode) { \
    mock_push(pack_glMatrixMode(mode)); \
}
#define test_glMatrixMode(mode) { \
    glMatrixMode_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMatrixMode missing (no calls left)\n"); \
    } else if (packed->func != glMatrixMode_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glMatrixMode(0x%04X);\n", mode); \
        } \
    } \
}
#define pack_glMultMatrixf(m) ({ \
    glMultMatrixf_INDEXED *packed_data = malloc(sizeof(glMultMatrixf_INDEXED)); \
    packed_data->func = glMultMatrixf_INDEX; \
    packed_data->args.a1 = (GLfloat *)m; \
    packed_data; \
})
#define emit_glMultMatrixf(m) { \
    mock_push(pack_glMultMatrixf(m)); \
}
#define test_glMultMatrixf(m) { \
    glMultMatrixf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMultMatrixf missing (no calls left)\n"); \
    } else if (packed->func != glMultMatrixf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        void *a = packed->args.a1, *b = m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(m)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glMultMatrixf(%p);\n", m); \
        } \
    } \
}
#define pack_glMultMatrixx(m) ({ \
    glMultMatrixx_INDEXED *packed_data = malloc(sizeof(glMultMatrixx_INDEXED)); \
    packed_data->func = glMultMatrixx_INDEX; \
    packed_data->args.a1 = (GLfixed *)m; \
    packed_data; \
})
#define emit_glMultMatrixx(m) { \
    mock_push(pack_glMultMatrixx(m)); \
}
#define test_glMultMatrixx(m) { \
    glMultMatrixx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMultMatrixx missing (no calls left)\n"); \
    } else if (packed->func != glMultMatrixx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        void *a = packed->args.a1, *b = m; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(m)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glMultMatrixx(%p);\n", m); \
        } \
    } \
}
#define pack_glMultiTexCoord4f(target, s, t, r, q) ({ \
    glMultiTexCoord4f_INDEXED *packed_data = malloc(sizeof(glMultiTexCoord4f_INDEXED)); \
    packed_data->func = glMultiTexCoord4f_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLfloat)s; \
    packed_data->args.a3 = (GLfloat)t; \
    packed_data->args.a4 = (GLfloat)r; \
    packed_data->args.a5 = (GLfloat)q; \
    packed_data; \
})
#define emit_glMultiTexCoord4f(target, s, t, r, q) { \
    mock_push(pack_glMultiTexCoord4f(target, s, t, r, q)); \
}
#define test_glMultiTexCoord4f(target, s, t, r, q) { \
    glMultiTexCoord4f_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMultiTexCoord4f missing (no calls left)\n"); \
    } else if (packed->func != glMultiTexCoord4f_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 - s >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a3 - t >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a4 - r >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a5 - q >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glMultiTexCoord4f(0x%04X, %0.2f, %0.2f, %0.2f, %0.2f);\n", target, s, t, r, q); \
        } \
    } \
}
#define pack_glMultiTexCoord4x(target, s, t, r, q) ({ \
    glMultiTexCoord4x_INDEXED *packed_data = malloc(sizeof(glMultiTexCoord4x_INDEXED)); \
    packed_data->func = glMultiTexCoord4x_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLfixed)s; \
    packed_data->args.a3 = (GLfixed)t; \
    packed_data->args.a4 = (GLfixed)r; \
    packed_data->args.a5 = (GLfixed)q; \
    packed_data; \
})
#define emit_glMultiTexCoord4x(target, s, t, r, q) { \
    mock_push(pack_glMultiTexCoord4x(target, s, t, r, q)); \
}
#define test_glMultiTexCoord4x(target, s, t, r, q) { \
    glMultiTexCoord4x_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glMultiTexCoord4x missing (no calls left)\n"); \
    } else if (packed->func != glMultiTexCoord4x_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != s) { \
            match = 0; \
        } \
        if (packed->args.a3 != t) { \
            match = 0; \
        } \
        if (packed->args.a4 != r) { \
            match = 0; \
        } \
        if (packed->args.a5 != q) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glMultiTexCoord4x(0x%04X, %p, %p, %p, %p);\n", target, s, t, r, q); \
        } \
    } \
}
#define pack_glNormal3f(nx, ny, nz) ({ \
    glNormal3f_INDEXED *packed_data = malloc(sizeof(glNormal3f_INDEXED)); \
    packed_data->func = glNormal3f_INDEX; \
    packed_data->args.a1 = (GLfloat)nx; \
    packed_data->args.a2 = (GLfloat)ny; \
    packed_data->args.a3 = (GLfloat)nz; \
    packed_data; \
})
#define emit_glNormal3f(nx, ny, nz) { \
    mock_push(pack_glNormal3f(nx, ny, nz)); \
}
#define test_glNormal3f(nx, ny, nz) { \
    glNormal3f_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glNormal3f missing (no calls left)\n"); \
    } else if (packed->func != glNormal3f_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 - nx >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a2 - ny >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a3 - nz >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glNormal3f(%0.2f, %0.2f, %0.2f);\n", nx, ny, nz); \
        } \
    } \
}
#define pack_glNormal3x(nx, ny, nz) ({ \
    glNormal3x_INDEXED *packed_data = malloc(sizeof(glNormal3x_INDEXED)); \
    packed_data->func = glNormal3x_INDEX; \
    packed_data->args.a1 = (GLfixed)nx; \
    packed_data->args.a2 = (GLfixed)ny; \
    packed_data->args.a3 = (GLfixed)nz; \
    packed_data; \
})
#define emit_glNormal3x(nx, ny, nz) { \
    mock_push(pack_glNormal3x(nx, ny, nz)); \
}
#define test_glNormal3x(nx, ny, nz) { \
    glNormal3x_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glNormal3x missing (no calls left)\n"); \
    } else if (packed->func != glNormal3x_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != nx) { \
            match = 0; \
        } \
        if (packed->args.a2 != ny) { \
            match = 0; \
        } \
        if (packed->args.a3 != nz) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glNormal3x(%p, %p, %p);\n", nx, ny, nz); \
        } \
    } \
}
#define pack_glNormalPointer(type, stride, pointer) ({ \
    glNormalPointer_INDEXED *packed_data = malloc(sizeof(glNormalPointer_INDEXED)); \
    packed_data->func = glNormalPointer_INDEX; \
    packed_data->args.a1 = (GLenum)type; \
    packed_data->args.a2 = (GLsizei)stride; \
    packed_data->args.a3 = (GLvoid *)pointer; \
    packed_data; \
})
#define emit_glNormalPointer(type, stride, pointer) { \
    mock_push(pack_glNormalPointer(type, stride, pointer)); \
}
#define test_glNormalPointer(type, stride, pointer) { \
    glNormalPointer_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glNormalPointer missing (no calls left)\n"); \
    } else if (packed->func != glNormalPointer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != type) { \
            match = 0; \
        } \
        if (packed->args.a2 != stride) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(pointer)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glNormalPointer(0x%04X, %d, %p);\n", type, stride, pointer); \
        } \
    } \
}
#define pack_glOrthof(left, right, bottom, top, near, far) ({ \
    glOrthof_INDEXED *packed_data = malloc(sizeof(glOrthof_INDEXED)); \
    packed_data->func = glOrthof_INDEX; \
    packed_data->args.a1 = (GLfloat)left; \
    packed_data->args.a2 = (GLfloat)right; \
    packed_data->args.a3 = (GLfloat)bottom; \
    packed_data->args.a4 = (GLfloat)top; \
    packed_data->args.a5 = (GLfloat)near; \
    packed_data->args.a6 = (GLfloat)far; \
    packed_data; \
})
#define emit_glOrthof(left, right, bottom, top, near, far) { \
    mock_push(pack_glOrthof(left, right, bottom, top, near, far)); \
}
#define test_glOrthof(left, right, bottom, top, near, far) { \
    glOrthof_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glOrthof missing (no calls left)\n"); \
    } else if (packed->func != glOrthof_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 - left >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a2 - right >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a3 - bottom >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a4 - top >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a5 - near >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a6 - far >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glOrthof(%0.2f, %0.2f, %0.2f, %0.2f, %0.2f, %0.2f);\n", left, right, bottom, top, near, far); \
        } \
    } \
}
#define pack_glOrthox(left, right, bottom, top, near, far) ({ \
    glOrthox_INDEXED *packed_data = malloc(sizeof(glOrthox_INDEXED)); \
    packed_data->func = glOrthox_INDEX; \
    packed_data->args.a1 = (GLfixed)left; \
    packed_data->args.a2 = (GLfixed)right; \
    packed_data->args.a3 = (GLfixed)bottom; \
    packed_data->args.a4 = (GLfixed)top; \
    packed_data->args.a5 = (GLfixed)near; \
    packed_data->args.a6 = (GLfixed)far; \
    packed_data; \
})
#define emit_glOrthox(left, right, bottom, top, near, far) { \
    mock_push(pack_glOrthox(left, right, bottom, top, near, far)); \
}
#define test_glOrthox(left, right, bottom, top, near, far) { \
    glOrthox_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glOrthox missing (no calls left)\n"); \
    } else if (packed->func != glOrthox_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != left) { \
            match = 0; \
        } \
        if (packed->args.a2 != right) { \
            match = 0; \
        } \
        if (packed->args.a3 != bottom) { \
            match = 0; \
        } \
        if (packed->args.a4 != top) { \
            match = 0; \
        } \
        if (packed->args.a5 != near) { \
            match = 0; \
        } \
        if (packed->args.a6 != far) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glOrthox(%p, %p, %p, %p, %p, %p);\n", left, right, bottom, top, near, far); \
        } \
    } \
}
#define pack_glPixelStorei(pname, param) ({ \
    glPixelStorei_INDEXED *packed_data = malloc(sizeof(glPixelStorei_INDEXED)); \
    packed_data->func = glPixelStorei_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLint)param; \
    packed_data; \
})
#define emit_glPixelStorei(pname, param) { \
    mock_push(pack_glPixelStorei(pname, param)); \
}
#define test_glPixelStorei(pname, param) { \
    glPixelStorei_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPixelStorei missing (no calls left)\n"); \
    } else if (packed->func != glPixelStorei_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        if (packed->args.a2 != param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPixelStorei(0x%04X, %d);\n", pname, param); \
        } \
    } \
}
#define pack_glPointParameterf(pname, param) ({ \
    glPointParameterf_INDEXED *packed_data = malloc(sizeof(glPointParameterf_INDEXED)); \
    packed_data->func = glPointParameterf_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat)param; \
    packed_data; \
})
#define emit_glPointParameterf(pname, param) { \
    mock_push(pack_glPointParameterf(pname, param)); \
}
#define test_glPointParameterf(pname, param) { \
    glPointParameterf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointParameterf missing (no calls left)\n"); \
    } else if (packed->func != glPointParameterf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        if (packed->args.a2 - param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPointParameterf(0x%04X, %0.2f);\n", pname, param); \
        } \
    } \
}
#define pack_glPointParameterfv(pname, params) ({ \
    glPointParameterfv_INDEXED *packed_data = malloc(sizeof(glPointParameterfv_INDEXED)); \
    packed_data->func = glPointParameterfv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glPointParameterfv(pname, params) { \
    mock_push(pack_glPointParameterfv(pname, params)); \
}
#define test_glPointParameterfv(pname, params) { \
    glPointParameterfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointParameterfv missing (no calls left)\n"); \
    } else if (packed->func != glPointParameterfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPointParameterfv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glPointParameterx(pname, param) ({ \
    glPointParameterx_INDEXED *packed_data = malloc(sizeof(glPointParameterx_INDEXED)); \
    packed_data->func = glPointParameterx_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed)param; \
    packed_data; \
})
#define emit_glPointParameterx(pname, param) { \
    mock_push(pack_glPointParameterx(pname, param)); \
}
#define test_glPointParameterx(pname, param) { \
    glPointParameterx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointParameterx missing (no calls left)\n"); \
    } else if (packed->func != glPointParameterx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        if (packed->args.a2 != param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPointParameterx(0x%04X, %p);\n", pname, param); \
        } \
    } \
}
#define pack_glPointParameterxv(pname, params) ({ \
    glPointParameterxv_INDEXED *packed_data = malloc(sizeof(glPointParameterxv_INDEXED)); \
    packed_data->func = glPointParameterxv_INDEX; \
    packed_data->args.a1 = (GLenum)pname; \
    packed_data->args.a2 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glPointParameterxv(pname, params) { \
    mock_push(pack_glPointParameterxv(pname, params)); \
}
#define test_glPointParameterxv(pname, params) { \
    glPointParameterxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointParameterxv missing (no calls left)\n"); \
    } else if (packed->func != glPointParameterxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a2, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPointParameterxv(0x%04X, %p);\n", pname, params); \
        } \
    } \
}
#define pack_glPointSize(size) ({ \
    glPointSize_INDEXED *packed_data = malloc(sizeof(glPointSize_INDEXED)); \
    packed_data->func = glPointSize_INDEX; \
    packed_data->args.a1 = (GLfloat)size; \
    packed_data; \
})
#define emit_glPointSize(size) { \
    mock_push(pack_glPointSize(size)); \
}
#define test_glPointSize(size) { \
    glPointSize_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointSize missing (no calls left)\n"); \
    } else if (packed->func != glPointSize_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 - size >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPointSize(%0.2f);\n", size); \
        } \
    } \
}
#define pack_glPointSizePointerOES(type, stride, pointer) ({ \
    glPointSizePointerOES_INDEXED *packed_data = malloc(sizeof(glPointSizePointerOES_INDEXED)); \
    packed_data->func = glPointSizePointerOES_INDEX; \
    packed_data->args.a1 = (GLenum)type; \
    packed_data->args.a2 = (GLsizei)stride; \
    packed_data->args.a3 = (GLvoid *)pointer; \
    packed_data; \
})
#define emit_glPointSizePointerOES(type, stride, pointer) { \
    mock_push(pack_glPointSizePointerOES(type, stride, pointer)); \
}
#define test_glPointSizePointerOES(type, stride, pointer) { \
    glPointSizePointerOES_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointSizePointerOES missing (no calls left)\n"); \
    } else if (packed->func != glPointSizePointerOES_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != type) { \
            match = 0; \
        } \
        if (packed->args.a2 != stride) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(pointer)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPointSizePointerOES(0x%04X, %d, %p);\n", type, stride, pointer); \
        } \
    } \
}
#define pack_glPointSizex(size) ({ \
    glPointSizex_INDEXED *packed_data = malloc(sizeof(glPointSizex_INDEXED)); \
    packed_data->func = glPointSizex_INDEX; \
    packed_data->args.a1 = (GLfixed)size; \
    packed_data; \
})
#define emit_glPointSizex(size) { \
    mock_push(pack_glPointSizex(size)); \
}
#define test_glPointSizex(size) { \
    glPointSizex_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPointSizex missing (no calls left)\n"); \
    } else if (packed->func != glPointSizex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != size) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPointSizex(%p);\n", size); \
        } \
    } \
}
#define pack_glPolygonOffset(factor, units) ({ \
    glPolygonOffset_INDEXED *packed_data = malloc(sizeof(glPolygonOffset_INDEXED)); \
    packed_data->func = glPolygonOffset_INDEX; \
    packed_data->args.a1 = (GLfloat)factor; \
    packed_data->args.a2 = (GLfloat)units; \
    packed_data; \
})
#define emit_glPolygonOffset(factor, units) { \
    mock_push(pack_glPolygonOffset(factor, units)); \
}
#define test_glPolygonOffset(factor, units) { \
    glPolygonOffset_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPolygonOffset missing (no calls left)\n"); \
    } else if (packed->func != glPolygonOffset_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 - factor >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a2 - units >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPolygonOffset(%0.2f, %0.2f);\n", factor, units); \
        } \
    } \
}
#define pack_glPolygonOffsetx(factor, units) ({ \
    glPolygonOffsetx_INDEXED *packed_data = malloc(sizeof(glPolygonOffsetx_INDEXED)); \
    packed_data->func = glPolygonOffsetx_INDEX; \
    packed_data->args.a1 = (GLfixed)factor; \
    packed_data->args.a2 = (GLfixed)units; \
    packed_data; \
})
#define emit_glPolygonOffsetx(factor, units) { \
    mock_push(pack_glPolygonOffsetx(factor, units)); \
}
#define test_glPolygonOffsetx(factor, units) { \
    glPolygonOffsetx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPolygonOffsetx missing (no calls left)\n"); \
    } else if (packed->func != glPolygonOffsetx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != factor) { \
            match = 0; \
        } \
        if (packed->args.a2 != units) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPolygonOffsetx(%p, %p);\n", factor, units); \
        } \
    } \
}
#define pack_glPopMatrix() ({ \
    glPopMatrix_INDEXED *packed_data = malloc(sizeof(glPopMatrix_INDEXED)); \
    packed_data->func = glPopMatrix_INDEX; \
    packed_data; \
})
#define emit_glPopMatrix() { \
    mock_push(pack_glPopMatrix()); \
}
#define test_glPopMatrix() { \
    glPopMatrix_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPopMatrix missing (no calls left)\n"); \
    } else if (packed->func != glPopMatrix_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPopMatrix();\n", ); \
        } \
    } \
}
#define pack_glPushMatrix() ({ \
    glPushMatrix_INDEXED *packed_data = malloc(sizeof(glPushMatrix_INDEXED)); \
    packed_data->func = glPushMatrix_INDEX; \
    packed_data; \
})
#define emit_glPushMatrix() { \
    mock_push(pack_glPushMatrix()); \
}
#define test_glPushMatrix() { \
    glPushMatrix_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glPushMatrix missing (no calls left)\n"); \
    } else if (packed->func != glPushMatrix_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glPushMatrix();\n", ); \
        } \
    } \
}
#define pack_glReadPixels(x, y, width, height, format, type, pixels) ({ \
    glReadPixels_INDEXED *packed_data = malloc(sizeof(glReadPixels_INDEXED)); \
    packed_data->func = glReadPixels_INDEX; \
    packed_data->args.a1 = (GLint)x; \
    packed_data->args.a2 = (GLint)y; \
    packed_data->args.a3 = (GLsizei)width; \
    packed_data->args.a4 = (GLsizei)height; \
    packed_data->args.a5 = (GLenum)format; \
    packed_data->args.a6 = (GLenum)type; \
    packed_data->args.a7 = (GLvoid *)pixels; \
    packed_data; \
})
#define emit_glReadPixels(x, y, width, height, format, type, pixels) { \
    mock_push(pack_glReadPixels(x, y, width, height, format, type, pixels)); \
}
#define test_glReadPixels(x, y, width, height, format, type, pixels) { \
    glReadPixels_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glReadPixels missing (no calls left)\n"); \
    } else if (packed->func != glReadPixels_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != x) { \
            match = 0; \
        } \
        if (packed->args.a2 != y) { \
            match = 0; \
        } \
        if (packed->args.a3 != width) { \
            match = 0; \
        } \
        if (packed->args.a4 != height) { \
            match = 0; \
        } \
        if (packed->args.a5 != format) { \
            match = 0; \
        } \
        if (packed->args.a6 != type) { \
            match = 0; \
        } \
        void *a = packed->args.a7, *b = pixels; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(pixels)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glReadPixels(%d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", x, y, width, height, format, type, pixels); \
        } \
    } \
}
#define pack_glRotatef(angle, x, y, z) ({ \
    glRotatef_INDEXED *packed_data = malloc(sizeof(glRotatef_INDEXED)); \
    packed_data->func = glRotatef_INDEX; \
    packed_data->args.a1 = (GLfloat)angle; \
    packed_data->args.a2 = (GLfloat)x; \
    packed_data->args.a3 = (GLfloat)y; \
    packed_data->args.a4 = (GLfloat)z; \
    packed_data; \
})
#define emit_glRotatef(angle, x, y, z) { \
    mock_push(pack_glRotatef(angle, x, y, z)); \
}
#define test_glRotatef(angle, x, y, z) { \
    glRotatef_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glRotatef missing (no calls left)\n"); \
    } else if (packed->func != glRotatef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 - angle >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a2 - x >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a3 - y >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a4 - z >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glRotatef(%0.2f, %0.2f, %0.2f, %0.2f);\n", angle, x, y, z); \
        } \
    } \
}
#define pack_glRotatex(angle, x, y, z) ({ \
    glRotatex_INDEXED *packed_data = malloc(sizeof(glRotatex_INDEXED)); \
    packed_data->func = glRotatex_INDEX; \
    packed_data->args.a1 = (GLfixed)angle; \
    packed_data->args.a2 = (GLfixed)x; \
    packed_data->args.a3 = (GLfixed)y; \
    packed_data->args.a4 = (GLfixed)z; \
    packed_data; \
})
#define emit_glRotatex(angle, x, y, z) { \
    mock_push(pack_glRotatex(angle, x, y, z)); \
}
#define test_glRotatex(angle, x, y, z) { \
    glRotatex_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glRotatex missing (no calls left)\n"); \
    } else if (packed->func != glRotatex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != angle) { \
            match = 0; \
        } \
        if (packed->args.a2 != x) { \
            match = 0; \
        } \
        if (packed->args.a3 != y) { \
            match = 0; \
        } \
        if (packed->args.a4 != z) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glRotatex(%p, %p, %p, %p);\n", angle, x, y, z); \
        } \
    } \
}
#define pack_glSampleCoverage(value, invert) ({ \
    glSampleCoverage_INDEXED *packed_data = malloc(sizeof(glSampleCoverage_INDEXED)); \
    packed_data->func = glSampleCoverage_INDEX; \
    packed_data->args.a1 = (GLclampf)value; \
    packed_data->args.a2 = (GLboolean)invert; \
    packed_data; \
})
#define emit_glSampleCoverage(value, invert) { \
    mock_push(pack_glSampleCoverage(value, invert)); \
}
#define test_glSampleCoverage(value, invert) { \
    glSampleCoverage_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glSampleCoverage missing (no calls left)\n"); \
    } else if (packed->func != glSampleCoverage_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != value) { \
            match = 0; \
        } \
        if (packed->args.a2 != invert) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glSampleCoverage(%p, %d);\n", value, invert); \
        } \
    } \
}
#define pack_glSampleCoveragex(value, invert) ({ \
    glSampleCoveragex_INDEXED *packed_data = malloc(sizeof(glSampleCoveragex_INDEXED)); \
    packed_data->func = glSampleCoveragex_INDEX; \
    packed_data->args.a1 = (GLclampx)value; \
    packed_data->args.a2 = (GLboolean)invert; \
    packed_data; \
})
#define emit_glSampleCoveragex(value, invert) { \
    mock_push(pack_glSampleCoveragex(value, invert)); \
}
#define test_glSampleCoveragex(value, invert) { \
    glSampleCoveragex_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glSampleCoveragex missing (no calls left)\n"); \
    } else if (packed->func != glSampleCoveragex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != value) { \
            match = 0; \
        } \
        if (packed->args.a2 != invert) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glSampleCoveragex(%p, %d);\n", value, invert); \
        } \
    } \
}
#define pack_glScalef(x, y, z) ({ \
    glScalef_INDEXED *packed_data = malloc(sizeof(glScalef_INDEXED)); \
    packed_data->func = glScalef_INDEX; \
    packed_data->args.a1 = (GLfloat)x; \
    packed_data->args.a2 = (GLfloat)y; \
    packed_data->args.a3 = (GLfloat)z; \
    packed_data; \
})
#define emit_glScalef(x, y, z) { \
    mock_push(pack_glScalef(x, y, z)); \
}
#define test_glScalef(x, y, z) { \
    glScalef_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glScalef missing (no calls left)\n"); \
    } else if (packed->func != glScalef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 - x >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a2 - y >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a3 - z >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glScalef(%0.2f, %0.2f, %0.2f);\n", x, y, z); \
        } \
    } \
}
#define pack_glScalex(x, y, z) ({ \
    glScalex_INDEXED *packed_data = malloc(sizeof(glScalex_INDEXED)); \
    packed_data->func = glScalex_INDEX; \
    packed_data->args.a1 = (GLfixed)x; \
    packed_data->args.a2 = (GLfixed)y; \
    packed_data->args.a3 = (GLfixed)z; \
    packed_data; \
})
#define emit_glScalex(x, y, z) { \
    mock_push(pack_glScalex(x, y, z)); \
}
#define test_glScalex(x, y, z) { \
    glScalex_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glScalex missing (no calls left)\n"); \
    } else if (packed->func != glScalex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != x) { \
            match = 0; \
        } \
        if (packed->args.a2 != y) { \
            match = 0; \
        } \
        if (packed->args.a3 != z) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glScalex(%p, %p, %p);\n", x, y, z); \
        } \
    } \
}
#define pack_glScissor(x, y, width, height) ({ \
    glScissor_INDEXED *packed_data = malloc(sizeof(glScissor_INDEXED)); \
    packed_data->func = glScissor_INDEX; \
    packed_data->args.a1 = (GLint)x; \
    packed_data->args.a2 = (GLint)y; \
    packed_data->args.a3 = (GLsizei)width; \
    packed_data->args.a4 = (GLsizei)height; \
    packed_data; \
})
#define emit_glScissor(x, y, width, height) { \
    mock_push(pack_glScissor(x, y, width, height)); \
}
#define test_glScissor(x, y, width, height) { \
    glScissor_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glScissor missing (no calls left)\n"); \
    } else if (packed->func != glScissor_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != x) { \
            match = 0; \
        } \
        if (packed->args.a2 != y) { \
            match = 0; \
        } \
        if (packed->args.a3 != width) { \
            match = 0; \
        } \
        if (packed->args.a4 != height) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glScissor(%d, %d, %d, %d);\n", x, y, width, height); \
        } \
    } \
}
#define pack_glShadeModel(mode) ({ \
    glShadeModel_INDEXED *packed_data = malloc(sizeof(glShadeModel_INDEXED)); \
    packed_data->func = glShadeModel_INDEX; \
    packed_data->args.a1 = (GLenum)mode; \
    packed_data; \
})
#define emit_glShadeModel(mode) { \
    mock_push(pack_glShadeModel(mode)); \
}
#define test_glShadeModel(mode) { \
    glShadeModel_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glShadeModel missing (no calls left)\n"); \
    } else if (packed->func != glShadeModel_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != mode) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glShadeModel(0x%04X);\n", mode); \
        } \
    } \
}
#define pack_glStencilFunc(func, ref, mask) ({ \
    glStencilFunc_INDEXED *packed_data = malloc(sizeof(glStencilFunc_INDEXED)); \
    packed_data->func = glStencilFunc_INDEX; \
    packed_data->args.a1 = (GLenum)func; \
    packed_data->args.a2 = (GLint)ref; \
    packed_data->args.a3 = (GLuint)mask; \
    packed_data; \
})
#define emit_glStencilFunc(func, ref, mask) { \
    mock_push(pack_glStencilFunc(func, ref, mask)); \
}
#define test_glStencilFunc(func, ref, mask) { \
    glStencilFunc_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glStencilFunc missing (no calls left)\n"); \
    } else if (packed->func != glStencilFunc_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != func) { \
            match = 0; \
        } \
        if (packed->args.a2 != ref) { \
            match = 0; \
        } \
        if (packed->args.a3 != mask) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glStencilFunc(0x%04X, %d, %u);\n", func, ref, mask); \
        } \
    } \
}
#define pack_glStencilMask(mask) ({ \
    glStencilMask_INDEXED *packed_data = malloc(sizeof(glStencilMask_INDEXED)); \
    packed_data->func = glStencilMask_INDEX; \
    packed_data->args.a1 = (GLuint)mask; \
    packed_data; \
})
#define emit_glStencilMask(mask) { \
    mock_push(pack_glStencilMask(mask)); \
}
#define test_glStencilMask(mask) { \
    glStencilMask_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glStencilMask missing (no calls left)\n"); \
    } else if (packed->func != glStencilMask_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != mask) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glStencilMask(%u);\n", mask); \
        } \
    } \
}
#define pack_glStencilOp(fail, zfail, zpass) ({ \
    glStencilOp_INDEXED *packed_data = malloc(sizeof(glStencilOp_INDEXED)); \
    packed_data->func = glStencilOp_INDEX; \
    packed_data->args.a1 = (GLenum)fail; \
    packed_data->args.a2 = (GLenum)zfail; \
    packed_data->args.a3 = (GLenum)zpass; \
    packed_data; \
})
#define emit_glStencilOp(fail, zfail, zpass) { \
    mock_push(pack_glStencilOp(fail, zfail, zpass)); \
}
#define test_glStencilOp(fail, zfail, zpass) { \
    glStencilOp_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glStencilOp missing (no calls left)\n"); \
    } else if (packed->func != glStencilOp_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != fail) { \
            match = 0; \
        } \
        if (packed->args.a2 != zfail) { \
            match = 0; \
        } \
        if (packed->args.a3 != zpass) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glStencilOp(0x%04X, 0x%04X, 0x%04X);\n", fail, zfail, zpass); \
        } \
    } \
}
#define pack_glTexCoordPointer(size, type, stride, pointer) ({ \
    glTexCoordPointer_INDEXED *packed_data = malloc(sizeof(glTexCoordPointer_INDEXED)); \
    packed_data->func = glTexCoordPointer_INDEX; \
    packed_data->args.a1 = (GLint)size; \
    packed_data->args.a2 = (GLenum)type; \
    packed_data->args.a3 = (GLsizei)stride; \
    packed_data->args.a4 = (GLvoid *)pointer; \
    packed_data; \
})
#define emit_glTexCoordPointer(size, type, stride, pointer) { \
    mock_push(pack_glTexCoordPointer(size, type, stride, pointer)); \
}
#define test_glTexCoordPointer(size, type, stride, pointer) { \
    glTexCoordPointer_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexCoordPointer missing (no calls left)\n"); \
    } else if (packed->func != glTexCoordPointer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != size) { \
            match = 0; \
        } \
        if (packed->args.a2 != type) { \
            match = 0; \
        } \
        if (packed->args.a3 != stride) { \
            match = 0; \
        } \
        void *a = packed->args.a4, *b = pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(pointer)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexCoordPointer(%d, 0x%04X, %d, %p);\n", size, type, stride, pointer); \
        } \
    } \
}
#define pack_glTexEnvf(target, pname, param) ({ \
    glTexEnvf_INDEXED *packed_data = malloc(sizeof(glTexEnvf_INDEXED)); \
    packed_data->func = glTexEnvf_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat)param; \
    packed_data; \
})
#define emit_glTexEnvf(target, pname, param) { \
    mock_push(pack_glTexEnvf(target, pname, param)); \
}
#define test_glTexEnvf(target, pname, param) { \
    glTexEnvf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnvf missing (no calls left)\n"); \
    } else if (packed->func != glTexEnvf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        if (packed->args.a3 - param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexEnvf(0x%04X, 0x%04X, %0.2f);\n", target, pname, param); \
        } \
    } \
}
#define pack_glTexEnvfv(target, pname, params) ({ \
    glTexEnvfv_INDEXED *packed_data = malloc(sizeof(glTexEnvfv_INDEXED)); \
    packed_data->func = glTexEnvfv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glTexEnvfv(target, pname, params) { \
    mock_push(pack_glTexEnvfv(target, pname, params)); \
}
#define test_glTexEnvfv(target, pname, params) { \
    glTexEnvfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnvfv missing (no calls left)\n"); \
    } else if (packed->func != glTexEnvfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexEnvfv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glTexEnvi(target, pname, param) ({ \
    glTexEnvi_INDEXED *packed_data = malloc(sizeof(glTexEnvi_INDEXED)); \
    packed_data->func = glTexEnvi_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint)param; \
    packed_data; \
})
#define emit_glTexEnvi(target, pname, param) { \
    mock_push(pack_glTexEnvi(target, pname, param)); \
}
#define test_glTexEnvi(target, pname, param) { \
    glTexEnvi_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnvi missing (no calls left)\n"); \
    } else if (packed->func != glTexEnvi_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        if (packed->args.a3 != param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexEnvi(0x%04X, 0x%04X, %d);\n", target, pname, param); \
        } \
    } \
}
#define pack_glTexEnviv(target, pname, params) ({ \
    glTexEnviv_INDEXED *packed_data = malloc(sizeof(glTexEnviv_INDEXED)); \
    packed_data->func = glTexEnviv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define emit_glTexEnviv(target, pname, params) { \
    mock_push(pack_glTexEnviv(target, pname, params)); \
}
#define test_glTexEnviv(target, pname, params) { \
    glTexEnviv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnviv missing (no calls left)\n"); \
    } else if (packed->func != glTexEnviv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexEnviv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glTexEnvx(target, pname, param) ({ \
    glTexEnvx_INDEXED *packed_data = malloc(sizeof(glTexEnvx_INDEXED)); \
    packed_data->func = glTexEnvx_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed)param; \
    packed_data; \
})
#define emit_glTexEnvx(target, pname, param) { \
    mock_push(pack_glTexEnvx(target, pname, param)); \
}
#define test_glTexEnvx(target, pname, param) { \
    glTexEnvx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnvx missing (no calls left)\n"); \
    } else if (packed->func != glTexEnvx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        if (packed->args.a3 != param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexEnvx(0x%04X, 0x%04X, %p);\n", target, pname, param); \
        } \
    } \
}
#define pack_glTexEnvxv(target, pname, params) ({ \
    glTexEnvxv_INDEXED *packed_data = malloc(sizeof(glTexEnvxv_INDEXED)); \
    packed_data->func = glTexEnvxv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glTexEnvxv(target, pname, params) { \
    mock_push(pack_glTexEnvxv(target, pname, params)); \
}
#define test_glTexEnvxv(target, pname, params) { \
    glTexEnvxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexEnvxv missing (no calls left)\n"); \
    } else if (packed->func != glTexEnvxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexEnvxv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels) ({ \
    glTexImage2D_INDEXED *packed_data = malloc(sizeof(glTexImage2D_INDEXED)); \
    packed_data->func = glTexImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)internalformat; \
    packed_data->args.a4 = (GLsizei)width; \
    packed_data->args.a5 = (GLsizei)height; \
    packed_data->args.a6 = (GLint)border; \
    packed_data->args.a7 = (GLenum)format; \
    packed_data->args.a8 = (GLenum)type; \
    packed_data->args.a9 = (GLvoid *)pixels; \
    packed_data; \
})
#define emit_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels) { \
    mock_push(pack_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels)); \
}
#define test_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels) { \
    glTexImage2D_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexImage2D missing (no calls left)\n"); \
    } else if (packed->func != glTexImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != level) { \
            match = 0; \
        } \
        if (packed->args.a3 != internalformat) { \
            match = 0; \
        } \
        if (packed->args.a4 != width) { \
            match = 0; \
        } \
        if (packed->args.a5 != height) { \
            match = 0; \
        } \
        if (packed->args.a6 != border) { \
            match = 0; \
        } \
        if (packed->args.a7 != format) { \
            match = 0; \
        } \
        if (packed->args.a8 != type) { \
            match = 0; \
        } \
        void *a = packed->args.a9, *b = pixels; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(pixels)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", target, level, internalformat, width, height, border, format, type, pixels); \
        } \
    } \
}
#define pack_glTexParameterf(target, pname, param) ({ \
    glTexParameterf_INDEXED *packed_data = malloc(sizeof(glTexParameterf_INDEXED)); \
    packed_data->func = glTexParameterf_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat)param; \
    packed_data; \
})
#define emit_glTexParameterf(target, pname, param) { \
    mock_push(pack_glTexParameterf(target, pname, param)); \
}
#define test_glTexParameterf(target, pname, param) { \
    glTexParameterf_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameterf missing (no calls left)\n"); \
    } else if (packed->func != glTexParameterf_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        if (packed->args.a3 - param >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexParameterf(0x%04X, 0x%04X, %0.2f);\n", target, pname, param); \
        } \
    } \
}
#define pack_glTexParameterfv(target, pname, params) ({ \
    glTexParameterfv_INDEXED *packed_data = malloc(sizeof(glTexParameterfv_INDEXED)); \
    packed_data->func = glTexParameterfv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfloat *)params; \
    packed_data; \
})
#define emit_glTexParameterfv(target, pname, params) { \
    mock_push(pack_glTexParameterfv(target, pname, params)); \
}
#define test_glTexParameterfv(target, pname, params) { \
    glTexParameterfv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameterfv missing (no calls left)\n"); \
    } else if (packed->func != glTexParameterfv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexParameterfv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glTexParameteri(target, pname, param) ({ \
    glTexParameteri_INDEXED *packed_data = malloc(sizeof(glTexParameteri_INDEXED)); \
    packed_data->func = glTexParameteri_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint)param; \
    packed_data; \
})
#define emit_glTexParameteri(target, pname, param) { \
    mock_push(pack_glTexParameteri(target, pname, param)); \
}
#define test_glTexParameteri(target, pname, param) { \
    glTexParameteri_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameteri missing (no calls left)\n"); \
    } else if (packed->func != glTexParameteri_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        if (packed->args.a3 != param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexParameteri(0x%04X, 0x%04X, %d);\n", target, pname, param); \
        } \
    } \
}
#define pack_glTexParameteriv(target, pname, params) ({ \
    glTexParameteriv_INDEXED *packed_data = malloc(sizeof(glTexParameteriv_INDEXED)); \
    packed_data->func = glTexParameteriv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLint *)params; \
    packed_data; \
})
#define emit_glTexParameteriv(target, pname, params) { \
    mock_push(pack_glTexParameteriv(target, pname, params)); \
}
#define test_glTexParameteriv(target, pname, params) { \
    glTexParameteriv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameteriv missing (no calls left)\n"); \
    } else if (packed->func != glTexParameteriv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexParameteriv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glTexParameterx(target, pname, param) ({ \
    glTexParameterx_INDEXED *packed_data = malloc(sizeof(glTexParameterx_INDEXED)); \
    packed_data->func = glTexParameterx_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed)param; \
    packed_data; \
})
#define emit_glTexParameterx(target, pname, param) { \
    mock_push(pack_glTexParameterx(target, pname, param)); \
}
#define test_glTexParameterx(target, pname, param) { \
    glTexParameterx_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameterx missing (no calls left)\n"); \
    } else if (packed->func != glTexParameterx_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        if (packed->args.a3 != param) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexParameterx(0x%04X, 0x%04X, %p);\n", target, pname, param); \
        } \
    } \
}
#define pack_glTexParameterxv(target, pname, params) ({ \
    glTexParameterxv_INDEXED *packed_data = malloc(sizeof(glTexParameterxv_INDEXED)); \
    packed_data->func = glTexParameterxv_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLenum)pname; \
    packed_data->args.a3 = (GLfixed *)params; \
    packed_data; \
})
#define emit_glTexParameterxv(target, pname, params) { \
    mock_push(pack_glTexParameterxv(target, pname, params)); \
}
#define test_glTexParameterxv(target, pname, params) { \
    glTexParameterxv_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexParameterxv missing (no calls left)\n"); \
    } else if (packed->func != glTexParameterxv_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != pname) { \
            match = 0; \
        } \
        void *a = packed->args.a3, *b = params; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(params)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexParameterxv(0x%04X, 0x%04X, %p);\n", target, pname, params); \
        } \
    } \
}
#define pack_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels) ({ \
    glTexSubImage2D_INDEXED *packed_data = malloc(sizeof(glTexSubImage2D_INDEXED)); \
    packed_data->func = glTexSubImage2D_INDEX; \
    packed_data->args.a1 = (GLenum)target; \
    packed_data->args.a2 = (GLint)level; \
    packed_data->args.a3 = (GLint)xoffset; \
    packed_data->args.a4 = (GLint)yoffset; \
    packed_data->args.a5 = (GLsizei)width; \
    packed_data->args.a6 = (GLsizei)height; \
    packed_data->args.a7 = (GLenum)format; \
    packed_data->args.a8 = (GLenum)type; \
    packed_data->args.a9 = (GLvoid *)pixels; \
    packed_data; \
})
#define emit_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels) { \
    mock_push(pack_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels)); \
}
#define test_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels) { \
    glTexSubImage2D_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTexSubImage2D missing (no calls left)\n"); \
    } else if (packed->func != glTexSubImage2D_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != target) { \
            match = 0; \
        } \
        if (packed->args.a2 != level) { \
            match = 0; \
        } \
        if (packed->args.a3 != xoffset) { \
            match = 0; \
        } \
        if (packed->args.a4 != yoffset) { \
            match = 0; \
        } \
        if (packed->args.a5 != width) { \
            match = 0; \
        } \
        if (packed->args.a6 != height) { \
            match = 0; \
        } \
        if (packed->args.a7 != format) { \
            match = 0; \
        } \
        if (packed->args.a8 != type) { \
            match = 0; \
        } \
        void *a = packed->args.a9, *b = pixels; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(pixels)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTexSubImage2D(0x%04X, %d, %d, %d, %d, %d, 0x%04X, 0x%04X, %p);\n", target, level, xoffset, yoffset, width, height, format, type, pixels); \
        } \
    } \
}
#define pack_glTranslatef(x, y, z) ({ \
    glTranslatef_INDEXED *packed_data = malloc(sizeof(glTranslatef_INDEXED)); \
    packed_data->func = glTranslatef_INDEX; \
    packed_data->args.a1 = (GLfloat)x; \
    packed_data->args.a2 = (GLfloat)y; \
    packed_data->args.a3 = (GLfloat)z; \
    packed_data; \
})
#define emit_glTranslatef(x, y, z) { \
    mock_push(pack_glTranslatef(x, y, z)); \
}
#define test_glTranslatef(x, y, z) { \
    glTranslatef_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTranslatef missing (no calls left)\n"); \
    } else if (packed->func != glTranslatef_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 - x >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a2 - y >= 0.01) { \
            match = 0; \
        } \
        if (packed->args.a3 - z >= 0.01) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTranslatef(%0.2f, %0.2f, %0.2f);\n", x, y, z); \
        } \
    } \
}
#define pack_glTranslatex(x, y, z) ({ \
    glTranslatex_INDEXED *packed_data = malloc(sizeof(glTranslatex_INDEXED)); \
    packed_data->func = glTranslatex_INDEX; \
    packed_data->args.a1 = (GLfixed)x; \
    packed_data->args.a2 = (GLfixed)y; \
    packed_data->args.a3 = (GLfixed)z; \
    packed_data; \
})
#define emit_glTranslatex(x, y, z) { \
    mock_push(pack_glTranslatex(x, y, z)); \
}
#define test_glTranslatex(x, y, z) { \
    glTranslatex_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glTranslatex missing (no calls left)\n"); \
    } else if (packed->func != glTranslatex_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != x) { \
            match = 0; \
        } \
        if (packed->args.a2 != y) { \
            match = 0; \
        } \
        if (packed->args.a3 != z) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glTranslatex(%p, %p, %p);\n", x, y, z); \
        } \
    } \
}
#define pack_glVertexPointer(size, type, stride, pointer) ({ \
    glVertexPointer_INDEXED *packed_data = malloc(sizeof(glVertexPointer_INDEXED)); \
    packed_data->func = glVertexPointer_INDEX; \
    packed_data->args.a1 = (GLint)size; \
    packed_data->args.a2 = (GLenum)type; \
    packed_data->args.a3 = (GLsizei)stride; \
    packed_data->args.a4 = (GLvoid *)pointer; \
    packed_data; \
})
#define emit_glVertexPointer(size, type, stride, pointer) { \
    mock_push(pack_glVertexPointer(size, type, stride, pointer)); \
}
#define test_glVertexPointer(size, type, stride, pointer) { \
    glVertexPointer_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glVertexPointer missing (no calls left)\n"); \
    } else if (packed->func != glVertexPointer_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != size) { \
            match = 0; \
        } \
        if (packed->args.a2 != type) { \
            match = 0; \
        } \
        if (packed->args.a3 != stride) { \
            match = 0; \
        } \
        void *a = packed->args.a4, *b = pointer; \
        if (b == NULL && a != NULL || (a != NULL && b != NULL && (memcmp(a, b, sizeof(pointer)) != 0))) { \
            ptr_error = 1; \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glVertexPointer(%d, 0x%04X, %d, %p);\n", size, type, stride, pointer); \
        } \
    } \
}
#define pack_glViewport(x, y, width, height) ({ \
    glViewport_INDEXED *packed_data = malloc(sizeof(glViewport_INDEXED)); \
    packed_data->func = glViewport_INDEX; \
    packed_data->args.a1 = (GLint)x; \
    packed_data->args.a2 = (GLint)y; \
    packed_data->args.a3 = (GLsizei)width; \
    packed_data->args.a4 = (GLsizei)height; \
    packed_data; \
})
#define emit_glViewport(x, y, width, height) { \
    mock_push(pack_glViewport(x, y, width, height)); \
}
#define test_glViewport(x, y, width, height) { \
    glViewport_INDEXED *packed = mock_cur(); \
    if (packed == NULL) { \
        mock_errorf("glViewport missing (no calls left)\n"); \
    } else if (packed->func != glViewport_INDEX) { \
        if (verbose_test) { \
            mock_print(mock_cur()); \
        } \
        indexed_call_t *tmp = (indexed_call_t *)packed; \
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
        int match = 1, ptr_error = 0; \
        if (packed->args.a1 != x) { \
            match = 0; \
        } \
        if (packed->args.a2 != y) { \
            match = 0; \
        } \
        if (packed->args.a3 != width) { \
            match = 0; \
        } \
        if (packed->args.a4 != height) { \
            match = 0; \
        } \
        if (! match) { \
            mock_errorf("calls do not match:\n"); \
            if (ptr_error) { \
                printf("  (pointer mismatch)\n"); \
            } \
            printf("  have: "); mock_print((const indexed_call_t *)packed); \
            printf("  want: glViewport(%d, %d, %d, %d);\n", x, y, width, height); \
        } \
    } \
}

#define gles_glActiveTexture_INDEX 1
#define gles_glActiveTexture_RETURN void
#define gles_glActiveTexture_ARG_NAMES texture
#define gles_glActiveTexture_ARG_EXPAND GLenum texture
#define gles_glActiveTexture_PACKED PACKED_void_GLenum
#define gles_glActiveTexture_INDEXED INDEXED_void_GLenum
#define gles_glActiveTexture_FORMAT FORMAT_void_GLenum
#define gles_glAlphaFunc_INDEX 2
#define gles_glAlphaFunc_RETURN void
#define gles_glAlphaFunc_ARG_NAMES func, ref
#define gles_glAlphaFunc_ARG_EXPAND GLenum func, GLclampf ref
#define gles_glAlphaFunc_PACKED PACKED_void_GLenum_GLclampf
#define gles_glAlphaFunc_INDEXED INDEXED_void_GLenum_GLclampf
#define gles_glAlphaFunc_FORMAT FORMAT_void_GLenum_GLclampf
#define gles_glAlphaFuncx_INDEX 3
#define gles_glAlphaFuncx_RETURN void
#define gles_glAlphaFuncx_ARG_NAMES func, ref
#define gles_glAlphaFuncx_ARG_EXPAND GLenum func, GLclampx ref
#define gles_glAlphaFuncx_PACKED PACKED_void_GLenum_GLclampx
#define gles_glAlphaFuncx_INDEXED INDEXED_void_GLenum_GLclampx
#define gles_glAlphaFuncx_FORMAT FORMAT_void_GLenum_GLclampx
#define gles_glBindBuffer_INDEX 4
#define gles_glBindBuffer_RETURN void
#define gles_glBindBuffer_ARG_NAMES target, buffer
#define gles_glBindBuffer_ARG_EXPAND GLenum target, GLuint buffer
#define gles_glBindBuffer_PACKED PACKED_void_GLenum_GLuint
#define gles_glBindBuffer_INDEXED INDEXED_void_GLenum_GLuint
#define gles_glBindBuffer_FORMAT FORMAT_void_GLenum_GLuint
#define gles_glBindTexture_INDEX 5
#define gles_glBindTexture_RETURN void
#define gles_glBindTexture_ARG_NAMES target, texture
#define gles_glBindTexture_ARG_EXPAND GLenum target, GLuint texture
#define gles_glBindTexture_PACKED PACKED_void_GLenum_GLuint
#define gles_glBindTexture_INDEXED INDEXED_void_GLenum_GLuint
#define gles_glBindTexture_FORMAT FORMAT_void_GLenum_GLuint
#define gles_glBlendFunc_INDEX 6
#define gles_glBlendFunc_RETURN void
#define gles_glBlendFunc_ARG_NAMES sfactor, dfactor
#define gles_glBlendFunc_ARG_EXPAND GLenum sfactor, GLenum dfactor
#define gles_glBlendFunc_PACKED PACKED_void_GLenum_GLenum
#define gles_glBlendFunc_INDEXED INDEXED_void_GLenum_GLenum
#define gles_glBlendFunc_FORMAT FORMAT_void_GLenum_GLenum
#define gles_glBufferData_INDEX 7
#define gles_glBufferData_RETURN void
#define gles_glBufferData_ARG_NAMES target, size, data, usage
#define gles_glBufferData_ARG_EXPAND GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage
#define gles_glBufferData_PACKED PACKED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum
#define gles_glBufferData_INDEXED INDEXED_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum
#define gles_glBufferData_FORMAT FORMAT_void_GLenum_GLsizeiptr_const_GLvoid___GENPT___GLenum
#define gles_glBufferSubData_INDEX 8
#define gles_glBufferSubData_RETURN void
#define gles_glBufferSubData_ARG_NAMES target, offset, size, data
#define gles_glBufferSubData_ARG_EXPAND GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid * data
#define gles_glBufferSubData_PACKED PACKED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__
#define gles_glBufferSubData_INDEXED INDEXED_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__
#define gles_glBufferSubData_FORMAT FORMAT_void_GLenum_GLintptr_GLsizeiptr_const_GLvoid___GENPT__
#define gles_glClear_INDEX 9
#define gles_glClear_RETURN void
#define gles_glClear_ARG_NAMES mask
#define gles_glClear_ARG_EXPAND GLbitfield mask
#define gles_glClear_PACKED PACKED_void_GLbitfield
#define gles_glClear_INDEXED INDEXED_void_GLbitfield
#define gles_glClear_FORMAT FORMAT_void_GLbitfield
#define gles_glClearColor_INDEX 10
#define gles_glClearColor_RETURN void
#define gles_glClearColor_ARG_NAMES red, green, blue, alpha
#define gles_glClearColor_ARG_EXPAND GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha
#define gles_glClearColor_PACKED PACKED_void_GLclampf_GLclampf_GLclampf_GLclampf
#define gles_glClearColor_INDEXED INDEXED_void_GLclampf_GLclampf_GLclampf_GLclampf
#define gles_glClearColor_FORMAT FORMAT_void_GLclampf_GLclampf_GLclampf_GLclampf
#define gles_glClearColorx_INDEX 11
#define gles_glClearColorx_RETURN void
#define gles_glClearColorx_ARG_NAMES red, green, blue, alpha
#define gles_glClearColorx_ARG_EXPAND GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha
#define gles_glClearColorx_PACKED PACKED_void_GLclampx_GLclampx_GLclampx_GLclampx
#define gles_glClearColorx_INDEXED INDEXED_void_GLclampx_GLclampx_GLclampx_GLclampx
#define gles_glClearColorx_FORMAT FORMAT_void_GLclampx_GLclampx_GLclampx_GLclampx
#define gles_glClearDepthf_INDEX 12
#define gles_glClearDepthf_RETURN void
#define gles_glClearDepthf_ARG_NAMES depth
#define gles_glClearDepthf_ARG_EXPAND GLclampf depth
#define gles_glClearDepthf_PACKED PACKED_void_GLclampf
#define gles_glClearDepthf_INDEXED INDEXED_void_GLclampf
#define gles_glClearDepthf_FORMAT FORMAT_void_GLclampf
#define gles_glClearDepthx_INDEX 13
#define gles_glClearDepthx_RETURN void
#define gles_glClearDepthx_ARG_NAMES depth
#define gles_glClearDepthx_ARG_EXPAND GLclampx depth
#define gles_glClearDepthx_PACKED PACKED_void_GLclampx
#define gles_glClearDepthx_INDEXED INDEXED_void_GLclampx
#define gles_glClearDepthx_FORMAT FORMAT_void_GLclampx
#define gles_glClearStencil_INDEX 14
#define gles_glClearStencil_RETURN void
#define gles_glClearStencil_ARG_NAMES s
#define gles_glClearStencil_ARG_EXPAND GLint s
#define gles_glClearStencil_PACKED PACKED_void_GLint
#define gles_glClearStencil_INDEXED INDEXED_void_GLint
#define gles_glClearStencil_FORMAT FORMAT_void_GLint
#define gles_glClientActiveTexture_INDEX 15
#define gles_glClientActiveTexture_RETURN void
#define gles_glClientActiveTexture_ARG_NAMES texture
#define gles_glClientActiveTexture_ARG_EXPAND GLenum texture
#define gles_glClientActiveTexture_PACKED PACKED_void_GLenum
#define gles_glClientActiveTexture_INDEXED INDEXED_void_GLenum
#define gles_glClientActiveTexture_FORMAT FORMAT_void_GLenum
#define gles_glClipPlanef_INDEX 16
#define gles_glClipPlanef_RETURN void
#define gles_glClipPlanef_ARG_NAMES plane, equation
#define gles_glClipPlanef_ARG_EXPAND GLenum plane, const GLfloat * equation
#define gles_glClipPlanef_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define gles_glClipPlanef_INDEXED INDEXED_void_GLenum_const_GLfloat___GENPT__
#define gles_glClipPlanef_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define gles_glClipPlanex_INDEX 17
#define gles_glClipPlanex_RETURN void
#define gles_glClipPlanex_ARG_NAMES plane, equation
#define gles_glClipPlanex_ARG_EXPAND GLenum plane, const GLfixed * equation
#define gles_glClipPlanex_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define gles_glClipPlanex_INDEXED INDEXED_void_GLenum_const_GLfixed___GENPT__
#define gles_glClipPlanex_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define gles_glColor4f_INDEX 18
#define gles_glColor4f_RETURN void
#define gles_glColor4f_ARG_NAMES red, green, blue, alpha
#define gles_glColor4f_ARG_EXPAND GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha
#define gles_glColor4f_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glColor4f_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glColor4f_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glColor4ub_INDEX 19
#define gles_glColor4ub_RETURN void
#define gles_glColor4ub_ARG_NAMES red, green, blue, alpha
#define gles_glColor4ub_ARG_EXPAND GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha
#define gles_glColor4ub_PACKED PACKED_void_GLubyte_GLubyte_GLubyte_GLubyte
#define gles_glColor4ub_INDEXED INDEXED_void_GLubyte_GLubyte_GLubyte_GLubyte
#define gles_glColor4ub_FORMAT FORMAT_void_GLubyte_GLubyte_GLubyte_GLubyte
#define gles_glColor4x_INDEX 20
#define gles_glColor4x_RETURN void
#define gles_glColor4x_ARG_NAMES red, green, blue, alpha
#define gles_glColor4x_ARG_EXPAND GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha
#define gles_glColor4x_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glColor4x_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glColor4x_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glColorMask_INDEX 21
#define gles_glColorMask_RETURN void
#define gles_glColorMask_ARG_NAMES red, green, blue, alpha
#define gles_glColorMask_ARG_EXPAND GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha
#define gles_glColorMask_PACKED PACKED_void_GLboolean_GLboolean_GLboolean_GLboolean
#define gles_glColorMask_INDEXED INDEXED_void_GLboolean_GLboolean_GLboolean_GLboolean
#define gles_glColorMask_FORMAT FORMAT_void_GLboolean_GLboolean_GLboolean_GLboolean
#define gles_glColorPointer_INDEX 22
#define gles_glColorPointer_RETURN void
#define gles_glColorPointer_ARG_NAMES size, type, stride, pointer
#define gles_glColorPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define gles_glColorPointer_PACKED PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glColorPointer_INDEXED INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glColorPointer_FORMAT FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glCompressedTexImage2D_INDEX 23
#define gles_glCompressedTexImage2D_RETURN void
#define gles_glCompressedTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, imageSize, data
#define gles_glCompressedTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data
#define gles_glCompressedTexImage2D_PACKED PACKED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__
#define gles_glCompressedTexImage2D_INDEXED INDEXED_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__
#define gles_glCompressedTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLenum_GLsizei_GLsizei_GLint_GLsizei_const_GLvoid___GENPT__
#define gles_glCompressedTexSubImage2D_INDEX 24
#define gles_glCompressedTexSubImage2D_RETURN void
#define gles_glCompressedTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, imageSize, data
#define gles_glCompressedTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data
#define gles_glCompressedTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glCompressedTexSubImage2D_INDEXED INDEXED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glCompressedTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glCopyTexImage2D_INDEX 25
#define gles_glCopyTexImage2D_RETURN void
#define gles_glCopyTexImage2D_ARG_NAMES target, level, internalformat, x, y, width, height, border
#define gles_glCopyTexImage2D_ARG_EXPAND GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border
#define gles_glCopyTexImage2D_PACKED PACKED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint
#define gles_glCopyTexImage2D_INDEXED INDEXED_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint
#define gles_glCopyTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLenum_GLint_GLint_GLsizei_GLsizei_GLint
#define gles_glCopyTexSubImage2D_INDEX 26
#define gles_glCopyTexSubImage2D_RETURN void
#define gles_glCopyTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, x, y, width, height
#define gles_glCopyTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height
#define gles_glCopyTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei
#define gles_glCopyTexSubImage2D_INDEXED INDEXED_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei
#define gles_glCopyTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLint_GLint_GLsizei_GLsizei
#define gles_glCullFace_INDEX 27
#define gles_glCullFace_RETURN void
#define gles_glCullFace_ARG_NAMES mode
#define gles_glCullFace_ARG_EXPAND GLenum mode
#define gles_glCullFace_PACKED PACKED_void_GLenum
#define gles_glCullFace_INDEXED INDEXED_void_GLenum
#define gles_glCullFace_FORMAT FORMAT_void_GLenum
#define gles_glDeleteBuffers_INDEX 28
#define gles_glDeleteBuffers_RETURN void
#define gles_glDeleteBuffers_ARG_NAMES n, buffers
#define gles_glDeleteBuffers_ARG_EXPAND GLsizei n, const GLuint * buffers
#define gles_glDeleteBuffers_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define gles_glDeleteBuffers_INDEXED INDEXED_void_GLsizei_const_GLuint___GENPT__
#define gles_glDeleteBuffers_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define gles_glDeleteTextures_INDEX 29
#define gles_glDeleteTextures_RETURN void
#define gles_glDeleteTextures_ARG_NAMES n, textures
#define gles_glDeleteTextures_ARG_EXPAND GLsizei n, const GLuint * textures
#define gles_glDeleteTextures_PACKED PACKED_void_GLsizei_const_GLuint___GENPT__
#define gles_glDeleteTextures_INDEXED INDEXED_void_GLsizei_const_GLuint___GENPT__
#define gles_glDeleteTextures_FORMAT FORMAT_void_GLsizei_const_GLuint___GENPT__
#define gles_glDepthFunc_INDEX 30
#define gles_glDepthFunc_RETURN void
#define gles_glDepthFunc_ARG_NAMES func
#define gles_glDepthFunc_ARG_EXPAND GLenum func
#define gles_glDepthFunc_PACKED PACKED_void_GLenum
#define gles_glDepthFunc_INDEXED INDEXED_void_GLenum
#define gles_glDepthFunc_FORMAT FORMAT_void_GLenum
#define gles_glDepthMask_INDEX 31
#define gles_glDepthMask_RETURN void
#define gles_glDepthMask_ARG_NAMES flag
#define gles_glDepthMask_ARG_EXPAND GLboolean flag
#define gles_glDepthMask_PACKED PACKED_void_GLboolean
#define gles_glDepthMask_INDEXED INDEXED_void_GLboolean
#define gles_glDepthMask_FORMAT FORMAT_void_GLboolean
#define gles_glDepthRangef_INDEX 32
#define gles_glDepthRangef_RETURN void
#define gles_glDepthRangef_ARG_NAMES near, far
#define gles_glDepthRangef_ARG_EXPAND GLclampf near, GLclampf far
#define gles_glDepthRangef_PACKED PACKED_void_GLclampf_GLclampf
#define gles_glDepthRangef_INDEXED INDEXED_void_GLclampf_GLclampf
#define gles_glDepthRangef_FORMAT FORMAT_void_GLclampf_GLclampf
#define gles_glDepthRangex_INDEX 33
#define gles_glDepthRangex_RETURN void
#define gles_glDepthRangex_ARG_NAMES near, far
#define gles_glDepthRangex_ARG_EXPAND GLclampx near, GLclampx far
#define gles_glDepthRangex_PACKED PACKED_void_GLclampx_GLclampx
#define gles_glDepthRangex_INDEXED INDEXED_void_GLclampx_GLclampx
#define gles_glDepthRangex_FORMAT FORMAT_void_GLclampx_GLclampx
#define gles_glDisable_INDEX 34
#define gles_glDisable_RETURN void
#define gles_glDisable_ARG_NAMES cap
#define gles_glDisable_ARG_EXPAND GLenum cap
#define gles_glDisable_PACKED PACKED_void_GLenum
#define gles_glDisable_INDEXED INDEXED_void_GLenum
#define gles_glDisable_FORMAT FORMAT_void_GLenum
#define gles_glDisableClientState_INDEX 35
#define gles_glDisableClientState_RETURN void
#define gles_glDisableClientState_ARG_NAMES array
#define gles_glDisableClientState_ARG_EXPAND GLenum array
#define gles_glDisableClientState_PACKED PACKED_void_GLenum
#define gles_glDisableClientState_INDEXED INDEXED_void_GLenum
#define gles_glDisableClientState_FORMAT FORMAT_void_GLenum
#define gles_glDrawArrays_INDEX 36
#define gles_glDrawArrays_RETURN void
#define gles_glDrawArrays_ARG_NAMES mode, first, count
#define gles_glDrawArrays_ARG_EXPAND GLenum mode, GLint first, GLsizei count
#define gles_glDrawArrays_PACKED PACKED_void_GLenum_GLint_GLsizei
#define gles_glDrawArrays_INDEXED INDEXED_void_GLenum_GLint_GLsizei
#define gles_glDrawArrays_FORMAT FORMAT_void_GLenum_GLint_GLsizei
#define gles_glDrawElements_INDEX 37
#define gles_glDrawElements_RETURN void
#define gles_glDrawElements_ARG_NAMES mode, count, type, indices
#define gles_glDrawElements_ARG_EXPAND GLenum mode, GLsizei count, GLenum type, const GLvoid * indices
#define gles_glDrawElements_PACKED PACKED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__
#define gles_glDrawElements_INDEXED INDEXED_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__
#define gles_glDrawElements_FORMAT FORMAT_void_GLenum_GLsizei_GLenum_const_GLvoid___GENPT__
#define gles_glEnable_INDEX 38
#define gles_glEnable_RETURN void
#define gles_glEnable_ARG_NAMES cap
#define gles_glEnable_ARG_EXPAND GLenum cap
#define gles_glEnable_PACKED PACKED_void_GLenum
#define gles_glEnable_INDEXED INDEXED_void_GLenum
#define gles_glEnable_FORMAT FORMAT_void_GLenum
#define gles_glEnableClientState_INDEX 39
#define gles_glEnableClientState_RETURN void
#define gles_glEnableClientState_ARG_NAMES array
#define gles_glEnableClientState_ARG_EXPAND GLenum array
#define gles_glEnableClientState_PACKED PACKED_void_GLenum
#define gles_glEnableClientState_INDEXED INDEXED_void_GLenum
#define gles_glEnableClientState_FORMAT FORMAT_void_GLenum
#define gles_glFinish_INDEX 40
#define gles_glFinish_RETURN void
#define gles_glFinish_ARG_NAMES 
#define gles_glFinish_ARG_EXPAND 
#define gles_glFinish_PACKED PACKED_void
#define gles_glFinish_INDEXED INDEXED_void
#define gles_glFinish_FORMAT FORMAT_void
#define gles_glFlush_INDEX 41
#define gles_glFlush_RETURN void
#define gles_glFlush_ARG_NAMES 
#define gles_glFlush_ARG_EXPAND 
#define gles_glFlush_PACKED PACKED_void
#define gles_glFlush_INDEXED INDEXED_void
#define gles_glFlush_FORMAT FORMAT_void
#define gles_glFogf_INDEX 42
#define gles_glFogf_RETURN void
#define gles_glFogf_ARG_NAMES pname, param
#define gles_glFogf_ARG_EXPAND GLenum pname, GLfloat param
#define gles_glFogf_PACKED PACKED_void_GLenum_GLfloat
#define gles_glFogf_INDEXED INDEXED_void_GLenum_GLfloat
#define gles_glFogf_FORMAT FORMAT_void_GLenum_GLfloat
#define gles_glFogfv_INDEX 43
#define gles_glFogfv_RETURN void
#define gles_glFogfv_ARG_NAMES pname, params
#define gles_glFogfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define gles_glFogfv_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define gles_glFogfv_INDEXED INDEXED_void_GLenum_const_GLfloat___GENPT__
#define gles_glFogfv_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define gles_glFogx_INDEX 44
#define gles_glFogx_RETURN void
#define gles_glFogx_ARG_NAMES pname, param
#define gles_glFogx_ARG_EXPAND GLenum pname, GLfixed param
#define gles_glFogx_PACKED PACKED_void_GLenum_GLfixed
#define gles_glFogx_INDEXED INDEXED_void_GLenum_GLfixed
#define gles_glFogx_FORMAT FORMAT_void_GLenum_GLfixed
#define gles_glFogxv_INDEX 45
#define gles_glFogxv_RETURN void
#define gles_glFogxv_ARG_NAMES pname, params
#define gles_glFogxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define gles_glFogxv_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define gles_glFogxv_INDEXED INDEXED_void_GLenum_const_GLfixed___GENPT__
#define gles_glFogxv_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define gles_glFrontFace_INDEX 46
#define gles_glFrontFace_RETURN void
#define gles_glFrontFace_ARG_NAMES mode
#define gles_glFrontFace_ARG_EXPAND GLenum mode
#define gles_glFrontFace_PACKED PACKED_void_GLenum
#define gles_glFrontFace_INDEXED INDEXED_void_GLenum
#define gles_glFrontFace_FORMAT FORMAT_void_GLenum
#define gles_glFrustumf_INDEX 47
#define gles_glFrustumf_RETURN void
#define gles_glFrustumf_ARG_NAMES left, right, bottom, top, near, far
#define gles_glFrustumf_ARG_EXPAND GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far
#define gles_glFrustumf_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glFrustumf_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glFrustumf_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glFrustumx_INDEX 48
#define gles_glFrustumx_RETURN void
#define gles_glFrustumx_ARG_NAMES left, right, bottom, top, near, far
#define gles_glFrustumx_ARG_EXPAND GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far
#define gles_glFrustumx_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glFrustumx_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glFrustumx_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glGenBuffers_INDEX 49
#define gles_glGenBuffers_RETURN void
#define gles_glGenBuffers_ARG_NAMES n, buffers
#define gles_glGenBuffers_ARG_EXPAND GLsizei n, GLuint * buffers
#define gles_glGenBuffers_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define gles_glGenBuffers_INDEXED INDEXED_void_GLsizei_GLuint___GENPT__
#define gles_glGenBuffers_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define gles_glGenTextures_INDEX 50
#define gles_glGenTextures_RETURN void
#define gles_glGenTextures_ARG_NAMES n, textures
#define gles_glGenTextures_ARG_EXPAND GLsizei n, GLuint * textures
#define gles_glGenTextures_PACKED PACKED_void_GLsizei_GLuint___GENPT__
#define gles_glGenTextures_INDEXED INDEXED_void_GLsizei_GLuint___GENPT__
#define gles_glGenTextures_FORMAT FORMAT_void_GLsizei_GLuint___GENPT__
#define gles_glGetBooleanv_INDEX 51
#define gles_glGetBooleanv_RETURN void
#define gles_glGetBooleanv_ARG_NAMES pname, params
#define gles_glGetBooleanv_ARG_EXPAND GLenum pname, GLboolean * params
#define gles_glGetBooleanv_PACKED PACKED_void_GLenum_GLboolean___GENPT__
#define gles_glGetBooleanv_INDEXED INDEXED_void_GLenum_GLboolean___GENPT__
#define gles_glGetBooleanv_FORMAT FORMAT_void_GLenum_GLboolean___GENPT__
#define gles_glGetBufferParameteriv_INDEX 52
#define gles_glGetBufferParameteriv_RETURN void
#define gles_glGetBufferParameteriv_ARG_NAMES target, pname, params
#define gles_glGetBufferParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define gles_glGetBufferParameteriv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define gles_glGetBufferParameteriv_INDEXED INDEXED_void_GLenum_GLenum_GLint___GENPT__
#define gles_glGetBufferParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define gles_glGetClipPlanef_INDEX 53
#define gles_glGetClipPlanef_RETURN void
#define gles_glGetClipPlanef_ARG_NAMES plane, equation
#define gles_glGetClipPlanef_ARG_EXPAND GLenum plane, GLfloat * equation
#define gles_glGetClipPlanef_PACKED PACKED_void_GLenum_GLfloat___GENPT__
#define gles_glGetClipPlanef_INDEXED INDEXED_void_GLenum_GLfloat___GENPT__
#define gles_glGetClipPlanef_FORMAT FORMAT_void_GLenum_GLfloat___GENPT__
#define gles_glGetClipPlanex_INDEX 54
#define gles_glGetClipPlanex_RETURN void
#define gles_glGetClipPlanex_ARG_NAMES plane, equation
#define gles_glGetClipPlanex_ARG_EXPAND GLenum plane, GLfixed * equation
#define gles_glGetClipPlanex_PACKED PACKED_void_GLenum_GLfixed___GENPT__
#define gles_glGetClipPlanex_INDEXED INDEXED_void_GLenum_GLfixed___GENPT__
#define gles_glGetClipPlanex_FORMAT FORMAT_void_GLenum_GLfixed___GENPT__
#define gles_glGetError_INDEX 55
#define gles_glGetError_RETURN GLenum
#define gles_glGetError_ARG_NAMES 
#define gles_glGetError_ARG_EXPAND 
#define gles_glGetError_PACKED PACKED_GLenum
#define gles_glGetError_INDEXED INDEXED_GLenum
#define gles_glGetError_FORMAT FORMAT_GLenum
#define gles_glGetFixedv_INDEX 56
#define gles_glGetFixedv_RETURN void
#define gles_glGetFixedv_ARG_NAMES pname, params
#define gles_glGetFixedv_ARG_EXPAND GLenum pname, GLfixed * params
#define gles_glGetFixedv_PACKED PACKED_void_GLenum_GLfixed___GENPT__
#define gles_glGetFixedv_INDEXED INDEXED_void_GLenum_GLfixed___GENPT__
#define gles_glGetFixedv_FORMAT FORMAT_void_GLenum_GLfixed___GENPT__
#define gles_glGetFloatv_INDEX 57
#define gles_glGetFloatv_RETURN void
#define gles_glGetFloatv_ARG_NAMES pname, params
#define gles_glGetFloatv_ARG_EXPAND GLenum pname, GLfloat * params
#define gles_glGetFloatv_PACKED PACKED_void_GLenum_GLfloat___GENPT__
#define gles_glGetFloatv_INDEXED INDEXED_void_GLenum_GLfloat___GENPT__
#define gles_glGetFloatv_FORMAT FORMAT_void_GLenum_GLfloat___GENPT__
#define gles_glGetIntegerv_INDEX 58
#define gles_glGetIntegerv_RETURN void
#define gles_glGetIntegerv_ARG_NAMES pname, params
#define gles_glGetIntegerv_ARG_EXPAND GLenum pname, GLint * params
#define gles_glGetIntegerv_PACKED PACKED_void_GLenum_GLint___GENPT__
#define gles_glGetIntegerv_INDEXED INDEXED_void_GLenum_GLint___GENPT__
#define gles_glGetIntegerv_FORMAT FORMAT_void_GLenum_GLint___GENPT__
#define gles_glGetLightfv_INDEX 59
#define gles_glGetLightfv_RETURN void
#define gles_glGetLightfv_ARG_NAMES light, pname, params
#define gles_glGetLightfv_ARG_EXPAND GLenum light, GLenum pname, GLfloat * params
#define gles_glGetLightfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetLightfv_INDEXED INDEXED_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetLightfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetLightxv_INDEX 60
#define gles_glGetLightxv_RETURN void
#define gles_glGetLightxv_ARG_NAMES light, pname, params
#define gles_glGetLightxv_ARG_EXPAND GLenum light, GLenum pname, GLfixed * params
#define gles_glGetLightxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetLightxv_INDEXED INDEXED_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetLightxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetMaterialfv_INDEX 61
#define gles_glGetMaterialfv_RETURN void
#define gles_glGetMaterialfv_ARG_NAMES face, pname, params
#define gles_glGetMaterialfv_ARG_EXPAND GLenum face, GLenum pname, GLfloat * params
#define gles_glGetMaterialfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetMaterialfv_INDEXED INDEXED_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetMaterialfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetMaterialxv_INDEX 62
#define gles_glGetMaterialxv_RETURN void
#define gles_glGetMaterialxv_ARG_NAMES face, pname, params
#define gles_glGetMaterialxv_ARG_EXPAND GLenum face, GLenum pname, GLfixed * params
#define gles_glGetMaterialxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetMaterialxv_INDEXED INDEXED_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetMaterialxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetPointerv_INDEX 63
#define gles_glGetPointerv_RETURN void
#define gles_glGetPointerv_ARG_NAMES pname, params
#define gles_glGetPointerv_ARG_EXPAND GLenum pname, GLvoid ** params
#define gles_glGetPointerv_PACKED PACKED_void_GLenum_GLvoid___GENPT____GENPT__
#define gles_glGetPointerv_INDEXED INDEXED_void_GLenum_GLvoid___GENPT____GENPT__
#define gles_glGetPointerv_FORMAT FORMAT_void_GLenum_GLvoid___GENPT____GENPT__
#define gles_glGetString_INDEX 64
#define gles_glGetString_RETURN const GLubyte *
#define gles_glGetString_ARG_NAMES name
#define gles_glGetString_ARG_EXPAND GLenum name
#define gles_glGetString_PACKED PACKED_const_GLubyte___GENPT___GLenum
#define gles_glGetString_INDEXED INDEXED_const_GLubyte___GENPT___GLenum
#define gles_glGetString_FORMAT FORMAT_const_GLubyte___GENPT___GLenum
#define gles_glGetTexEnvfv_INDEX 65
#define gles_glGetTexEnvfv_RETURN void
#define gles_glGetTexEnvfv_ARG_NAMES target, pname, params
#define gles_glGetTexEnvfv_ARG_EXPAND GLenum target, GLenum pname, GLfloat * params
#define gles_glGetTexEnvfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetTexEnvfv_INDEXED INDEXED_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetTexEnvfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetTexEnviv_INDEX 66
#define gles_glGetTexEnviv_RETURN void
#define gles_glGetTexEnviv_ARG_NAMES target, pname, params
#define gles_glGetTexEnviv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define gles_glGetTexEnviv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define gles_glGetTexEnviv_INDEXED INDEXED_void_GLenum_GLenum_GLint___GENPT__
#define gles_glGetTexEnviv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define gles_glGetTexEnvxv_INDEX 67
#define gles_glGetTexEnvxv_RETURN void
#define gles_glGetTexEnvxv_ARG_NAMES target, pname, params
#define gles_glGetTexEnvxv_ARG_EXPAND GLenum target, GLenum pname, GLfixed * params
#define gles_glGetTexEnvxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetTexEnvxv_INDEXED INDEXED_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetTexEnvxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetTexParameterfv_INDEX 68
#define gles_glGetTexParameterfv_RETURN void
#define gles_glGetTexParameterfv_ARG_NAMES target, pname, params
#define gles_glGetTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, GLfloat * params
#define gles_glGetTexParameterfv_PACKED PACKED_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetTexParameterfv_INDEXED INDEXED_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetTexParameterfv_FORMAT FORMAT_void_GLenum_GLenum_GLfloat___GENPT__
#define gles_glGetTexParameteriv_INDEX 69
#define gles_glGetTexParameteriv_RETURN void
#define gles_glGetTexParameteriv_ARG_NAMES target, pname, params
#define gles_glGetTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, GLint * params
#define gles_glGetTexParameteriv_PACKED PACKED_void_GLenum_GLenum_GLint___GENPT__
#define gles_glGetTexParameteriv_INDEXED INDEXED_void_GLenum_GLenum_GLint___GENPT__
#define gles_glGetTexParameteriv_FORMAT FORMAT_void_GLenum_GLenum_GLint___GENPT__
#define gles_glGetTexParameterxv_INDEX 70
#define gles_glGetTexParameterxv_RETURN void
#define gles_glGetTexParameterxv_ARG_NAMES target, pname, params
#define gles_glGetTexParameterxv_ARG_EXPAND GLenum target, GLenum pname, GLfixed * params
#define gles_glGetTexParameterxv_PACKED PACKED_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetTexParameterxv_INDEXED INDEXED_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glGetTexParameterxv_FORMAT FORMAT_void_GLenum_GLenum_GLfixed___GENPT__
#define gles_glHint_INDEX 71
#define gles_glHint_RETURN void
#define gles_glHint_ARG_NAMES target, mode
#define gles_glHint_ARG_EXPAND GLenum target, GLenum mode
#define gles_glHint_PACKED PACKED_void_GLenum_GLenum
#define gles_glHint_INDEXED INDEXED_void_GLenum_GLenum
#define gles_glHint_FORMAT FORMAT_void_GLenum_GLenum
#define gles_glIsBuffer_INDEX 72
#define gles_glIsBuffer_RETURN GLboolean
#define gles_glIsBuffer_ARG_NAMES buffer
#define gles_glIsBuffer_ARG_EXPAND GLuint buffer
#define gles_glIsBuffer_PACKED PACKED_GLboolean_GLuint
#define gles_glIsBuffer_INDEXED INDEXED_GLboolean_GLuint
#define gles_glIsBuffer_FORMAT FORMAT_GLboolean_GLuint
#define gles_glIsEnabled_INDEX 73
#define gles_glIsEnabled_RETURN GLboolean
#define gles_glIsEnabled_ARG_NAMES cap
#define gles_glIsEnabled_ARG_EXPAND GLenum cap
#define gles_glIsEnabled_PACKED PACKED_GLboolean_GLenum
#define gles_glIsEnabled_INDEXED INDEXED_GLboolean_GLenum
#define gles_glIsEnabled_FORMAT FORMAT_GLboolean_GLenum
#define gles_glIsTexture_INDEX 74
#define gles_glIsTexture_RETURN GLboolean
#define gles_glIsTexture_ARG_NAMES texture
#define gles_glIsTexture_ARG_EXPAND GLuint texture
#define gles_glIsTexture_PACKED PACKED_GLboolean_GLuint
#define gles_glIsTexture_INDEXED INDEXED_GLboolean_GLuint
#define gles_glIsTexture_FORMAT FORMAT_GLboolean_GLuint
#define gles_glLightModelf_INDEX 75
#define gles_glLightModelf_RETURN void
#define gles_glLightModelf_ARG_NAMES pname, param
#define gles_glLightModelf_ARG_EXPAND GLenum pname, GLfloat param
#define gles_glLightModelf_PACKED PACKED_void_GLenum_GLfloat
#define gles_glLightModelf_INDEXED INDEXED_void_GLenum_GLfloat
#define gles_glLightModelf_FORMAT FORMAT_void_GLenum_GLfloat
#define gles_glLightModelfv_INDEX 76
#define gles_glLightModelfv_RETURN void
#define gles_glLightModelfv_ARG_NAMES pname, params
#define gles_glLightModelfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define gles_glLightModelfv_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define gles_glLightModelfv_INDEXED INDEXED_void_GLenum_const_GLfloat___GENPT__
#define gles_glLightModelfv_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define gles_glLightModelx_INDEX 77
#define gles_glLightModelx_RETURN void
#define gles_glLightModelx_ARG_NAMES pname, param
#define gles_glLightModelx_ARG_EXPAND GLenum pname, GLfixed param
#define gles_glLightModelx_PACKED PACKED_void_GLenum_GLfixed
#define gles_glLightModelx_INDEXED INDEXED_void_GLenum_GLfixed
#define gles_glLightModelx_FORMAT FORMAT_void_GLenum_GLfixed
#define gles_glLightModelxv_INDEX 78
#define gles_glLightModelxv_RETURN void
#define gles_glLightModelxv_ARG_NAMES pname, params
#define gles_glLightModelxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define gles_glLightModelxv_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define gles_glLightModelxv_INDEXED INDEXED_void_GLenum_const_GLfixed___GENPT__
#define gles_glLightModelxv_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define gles_glLightf_INDEX 79
#define gles_glLightf_RETURN void
#define gles_glLightf_ARG_NAMES light, pname, param
#define gles_glLightf_ARG_EXPAND GLenum light, GLenum pname, GLfloat param
#define gles_glLightf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define gles_glLightf_INDEXED INDEXED_void_GLenum_GLenum_GLfloat
#define gles_glLightf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define gles_glLightfv_INDEX 80
#define gles_glLightfv_RETURN void
#define gles_glLightfv_ARG_NAMES light, pname, params
#define gles_glLightfv_ARG_EXPAND GLenum light, GLenum pname, const GLfloat * params
#define gles_glLightfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glLightfv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glLightfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glLightx_INDEX 81
#define gles_glLightx_RETURN void
#define gles_glLightx_ARG_NAMES light, pname, param
#define gles_glLightx_ARG_EXPAND GLenum light, GLenum pname, GLfixed param
#define gles_glLightx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define gles_glLightx_INDEXED INDEXED_void_GLenum_GLenum_GLfixed
#define gles_glLightx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define gles_glLightxv_INDEX 82
#define gles_glLightxv_RETURN void
#define gles_glLightxv_ARG_NAMES light, pname, params
#define gles_glLightxv_ARG_EXPAND GLenum light, GLenum pname, const GLfixed * params
#define gles_glLightxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glLightxv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glLightxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glLineWidth_INDEX 83
#define gles_glLineWidth_RETURN void
#define gles_glLineWidth_ARG_NAMES width
#define gles_glLineWidth_ARG_EXPAND GLfloat width
#define gles_glLineWidth_PACKED PACKED_void_GLfloat
#define gles_glLineWidth_INDEXED INDEXED_void_GLfloat
#define gles_glLineWidth_FORMAT FORMAT_void_GLfloat
#define gles_glLineWidthx_INDEX 84
#define gles_glLineWidthx_RETURN void
#define gles_glLineWidthx_ARG_NAMES width
#define gles_glLineWidthx_ARG_EXPAND GLfixed width
#define gles_glLineWidthx_PACKED PACKED_void_GLfixed
#define gles_glLineWidthx_INDEXED INDEXED_void_GLfixed
#define gles_glLineWidthx_FORMAT FORMAT_void_GLfixed
#define gles_glLoadIdentity_INDEX 85
#define gles_glLoadIdentity_RETURN void
#define gles_glLoadIdentity_ARG_NAMES 
#define gles_glLoadIdentity_ARG_EXPAND 
#define gles_glLoadIdentity_PACKED PACKED_void
#define gles_glLoadIdentity_INDEXED INDEXED_void
#define gles_glLoadIdentity_FORMAT FORMAT_void
#define gles_glLoadMatrixf_INDEX 86
#define gles_glLoadMatrixf_RETURN void
#define gles_glLoadMatrixf_ARG_NAMES m
#define gles_glLoadMatrixf_ARG_EXPAND const GLfloat * m
#define gles_glLoadMatrixf_PACKED PACKED_void_const_GLfloat___GENPT__
#define gles_glLoadMatrixf_INDEXED INDEXED_void_const_GLfloat___GENPT__
#define gles_glLoadMatrixf_FORMAT FORMAT_void_const_GLfloat___GENPT__
#define gles_glLoadMatrixx_INDEX 87
#define gles_glLoadMatrixx_RETURN void
#define gles_glLoadMatrixx_ARG_NAMES m
#define gles_glLoadMatrixx_ARG_EXPAND const GLfixed * m
#define gles_glLoadMatrixx_PACKED PACKED_void_const_GLfixed___GENPT__
#define gles_glLoadMatrixx_INDEXED INDEXED_void_const_GLfixed___GENPT__
#define gles_glLoadMatrixx_FORMAT FORMAT_void_const_GLfixed___GENPT__
#define gles_glLogicOp_INDEX 88
#define gles_glLogicOp_RETURN void
#define gles_glLogicOp_ARG_NAMES opcode
#define gles_glLogicOp_ARG_EXPAND GLenum opcode
#define gles_glLogicOp_PACKED PACKED_void_GLenum
#define gles_glLogicOp_INDEXED INDEXED_void_GLenum
#define gles_glLogicOp_FORMAT FORMAT_void_GLenum
#define gles_glMaterialf_INDEX 89
#define gles_glMaterialf_RETURN void
#define gles_glMaterialf_ARG_NAMES face, pname, param
#define gles_glMaterialf_ARG_EXPAND GLenum face, GLenum pname, GLfloat param
#define gles_glMaterialf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define gles_glMaterialf_INDEXED INDEXED_void_GLenum_GLenum_GLfloat
#define gles_glMaterialf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define gles_glMaterialfv_INDEX 90
#define gles_glMaterialfv_RETURN void
#define gles_glMaterialfv_ARG_NAMES face, pname, params
#define gles_glMaterialfv_ARG_EXPAND GLenum face, GLenum pname, const GLfloat * params
#define gles_glMaterialfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glMaterialfv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glMaterialfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glMaterialx_INDEX 91
#define gles_glMaterialx_RETURN void
#define gles_glMaterialx_ARG_NAMES face, pname, param
#define gles_glMaterialx_ARG_EXPAND GLenum face, GLenum pname, GLfixed param
#define gles_glMaterialx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define gles_glMaterialx_INDEXED INDEXED_void_GLenum_GLenum_GLfixed
#define gles_glMaterialx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define gles_glMaterialxv_INDEX 92
#define gles_glMaterialxv_RETURN void
#define gles_glMaterialxv_ARG_NAMES face, pname, params
#define gles_glMaterialxv_ARG_EXPAND GLenum face, GLenum pname, const GLfixed * params
#define gles_glMaterialxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glMaterialxv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glMaterialxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glMatrixMode_INDEX 93
#define gles_glMatrixMode_RETURN void
#define gles_glMatrixMode_ARG_NAMES mode
#define gles_glMatrixMode_ARG_EXPAND GLenum mode
#define gles_glMatrixMode_PACKED PACKED_void_GLenum
#define gles_glMatrixMode_INDEXED INDEXED_void_GLenum
#define gles_glMatrixMode_FORMAT FORMAT_void_GLenum
#define gles_glMultMatrixf_INDEX 94
#define gles_glMultMatrixf_RETURN void
#define gles_glMultMatrixf_ARG_NAMES m
#define gles_glMultMatrixf_ARG_EXPAND const GLfloat * m
#define gles_glMultMatrixf_PACKED PACKED_void_const_GLfloat___GENPT__
#define gles_glMultMatrixf_INDEXED INDEXED_void_const_GLfloat___GENPT__
#define gles_glMultMatrixf_FORMAT FORMAT_void_const_GLfloat___GENPT__
#define gles_glMultMatrixx_INDEX 95
#define gles_glMultMatrixx_RETURN void
#define gles_glMultMatrixx_ARG_NAMES m
#define gles_glMultMatrixx_ARG_EXPAND const GLfixed * m
#define gles_glMultMatrixx_PACKED PACKED_void_const_GLfixed___GENPT__
#define gles_glMultMatrixx_INDEXED INDEXED_void_const_GLfixed___GENPT__
#define gles_glMultMatrixx_FORMAT FORMAT_void_const_GLfixed___GENPT__
#define gles_glMultiTexCoord4f_INDEX 96
#define gles_glMultiTexCoord4f_RETURN void
#define gles_glMultiTexCoord4f_ARG_NAMES target, s, t, r, q
#define gles_glMultiTexCoord4f_ARG_EXPAND GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q
#define gles_glMultiTexCoord4f_PACKED PACKED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glMultiTexCoord4f_INDEXED INDEXED_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glMultiTexCoord4f_FORMAT FORMAT_void_GLenum_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glMultiTexCoord4x_INDEX 97
#define gles_glMultiTexCoord4x_RETURN void
#define gles_glMultiTexCoord4x_ARG_NAMES target, s, t, r, q
#define gles_glMultiTexCoord4x_ARG_EXPAND GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q
#define gles_glMultiTexCoord4x_PACKED PACKED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glMultiTexCoord4x_INDEXED INDEXED_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glMultiTexCoord4x_FORMAT FORMAT_void_GLenum_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glNormal3f_INDEX 98
#define gles_glNormal3f_RETURN void
#define gles_glNormal3f_ARG_NAMES nx, ny, nz
#define gles_glNormal3f_ARG_EXPAND GLfloat nx, GLfloat ny, GLfloat nz
#define gles_glNormal3f_PACKED PACKED_void_GLfloat_GLfloat_GLfloat
#define gles_glNormal3f_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat
#define gles_glNormal3f_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat
#define gles_glNormal3x_INDEX 99
#define gles_glNormal3x_RETURN void
#define gles_glNormal3x_ARG_NAMES nx, ny, nz
#define gles_glNormal3x_ARG_EXPAND GLfixed nx, GLfixed ny, GLfixed nz
#define gles_glNormal3x_PACKED PACKED_void_GLfixed_GLfixed_GLfixed
#define gles_glNormal3x_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed
#define gles_glNormal3x_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed
#define gles_glNormalPointer_INDEX 100
#define gles_glNormalPointer_RETURN void
#define gles_glNormalPointer_ARG_NAMES type, stride, pointer
#define gles_glNormalPointer_ARG_EXPAND GLenum type, GLsizei stride, const GLvoid * pointer
#define gles_glNormalPointer_PACKED PACKED_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glNormalPointer_INDEXED INDEXED_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glNormalPointer_FORMAT FORMAT_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glOrthof_INDEX 101
#define gles_glOrthof_RETURN void
#define gles_glOrthof_ARG_NAMES left, right, bottom, top, near, far
#define gles_glOrthof_ARG_EXPAND GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat near, GLfloat far
#define gles_glOrthof_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glOrthof_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glOrthof_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glOrthox_INDEX 102
#define gles_glOrthox_RETURN void
#define gles_glOrthox_ARG_NAMES left, right, bottom, top, near, far
#define gles_glOrthox_ARG_EXPAND GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed near, GLfixed far
#define gles_glOrthox_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glOrthox_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glOrthox_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glPixelStorei_INDEX 103
#define gles_glPixelStorei_RETURN void
#define gles_glPixelStorei_ARG_NAMES pname, param
#define gles_glPixelStorei_ARG_EXPAND GLenum pname, GLint param
#define gles_glPixelStorei_PACKED PACKED_void_GLenum_GLint
#define gles_glPixelStorei_INDEXED INDEXED_void_GLenum_GLint
#define gles_glPixelStorei_FORMAT FORMAT_void_GLenum_GLint
#define gles_glPointParameterf_INDEX 104
#define gles_glPointParameterf_RETURN void
#define gles_glPointParameterf_ARG_NAMES pname, param
#define gles_glPointParameterf_ARG_EXPAND GLenum pname, GLfloat param
#define gles_glPointParameterf_PACKED PACKED_void_GLenum_GLfloat
#define gles_glPointParameterf_INDEXED INDEXED_void_GLenum_GLfloat
#define gles_glPointParameterf_FORMAT FORMAT_void_GLenum_GLfloat
#define gles_glPointParameterfv_INDEX 105
#define gles_glPointParameterfv_RETURN void
#define gles_glPointParameterfv_ARG_NAMES pname, params
#define gles_glPointParameterfv_ARG_EXPAND GLenum pname, const GLfloat * params
#define gles_glPointParameterfv_PACKED PACKED_void_GLenum_const_GLfloat___GENPT__
#define gles_glPointParameterfv_INDEXED INDEXED_void_GLenum_const_GLfloat___GENPT__
#define gles_glPointParameterfv_FORMAT FORMAT_void_GLenum_const_GLfloat___GENPT__
#define gles_glPointParameterx_INDEX 106
#define gles_glPointParameterx_RETURN void
#define gles_glPointParameterx_ARG_NAMES pname, param
#define gles_glPointParameterx_ARG_EXPAND GLenum pname, GLfixed param
#define gles_glPointParameterx_PACKED PACKED_void_GLenum_GLfixed
#define gles_glPointParameterx_INDEXED INDEXED_void_GLenum_GLfixed
#define gles_glPointParameterx_FORMAT FORMAT_void_GLenum_GLfixed
#define gles_glPointParameterxv_INDEX 107
#define gles_glPointParameterxv_RETURN void
#define gles_glPointParameterxv_ARG_NAMES pname, params
#define gles_glPointParameterxv_ARG_EXPAND GLenum pname, const GLfixed * params
#define gles_glPointParameterxv_PACKED PACKED_void_GLenum_const_GLfixed___GENPT__
#define gles_glPointParameterxv_INDEXED INDEXED_void_GLenum_const_GLfixed___GENPT__
#define gles_glPointParameterxv_FORMAT FORMAT_void_GLenum_const_GLfixed___GENPT__
#define gles_glPointSize_INDEX 108
#define gles_glPointSize_RETURN void
#define gles_glPointSize_ARG_NAMES size
#define gles_glPointSize_ARG_EXPAND GLfloat size
#define gles_glPointSize_PACKED PACKED_void_GLfloat
#define gles_glPointSize_INDEXED INDEXED_void_GLfloat
#define gles_glPointSize_FORMAT FORMAT_void_GLfloat
#define gles_glPointSizePointerOES_INDEX 109
#define gles_glPointSizePointerOES_RETURN void
#define gles_glPointSizePointerOES_ARG_NAMES type, stride, pointer
#define gles_glPointSizePointerOES_ARG_EXPAND GLenum type, GLsizei stride, const GLvoid * pointer
#define gles_glPointSizePointerOES_PACKED PACKED_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glPointSizePointerOES_INDEXED INDEXED_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glPointSizePointerOES_FORMAT FORMAT_void_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glPointSizex_INDEX 110
#define gles_glPointSizex_RETURN void
#define gles_glPointSizex_ARG_NAMES size
#define gles_glPointSizex_ARG_EXPAND GLfixed size
#define gles_glPointSizex_PACKED PACKED_void_GLfixed
#define gles_glPointSizex_INDEXED INDEXED_void_GLfixed
#define gles_glPointSizex_FORMAT FORMAT_void_GLfixed
#define gles_glPolygonOffset_INDEX 111
#define gles_glPolygonOffset_RETURN void
#define gles_glPolygonOffset_ARG_NAMES factor, units
#define gles_glPolygonOffset_ARG_EXPAND GLfloat factor, GLfloat units
#define gles_glPolygonOffset_PACKED PACKED_void_GLfloat_GLfloat
#define gles_glPolygonOffset_INDEXED INDEXED_void_GLfloat_GLfloat
#define gles_glPolygonOffset_FORMAT FORMAT_void_GLfloat_GLfloat
#define gles_glPolygonOffsetx_INDEX 112
#define gles_glPolygonOffsetx_RETURN void
#define gles_glPolygonOffsetx_ARG_NAMES factor, units
#define gles_glPolygonOffsetx_ARG_EXPAND GLfixed factor, GLfixed units
#define gles_glPolygonOffsetx_PACKED PACKED_void_GLfixed_GLfixed
#define gles_glPolygonOffsetx_INDEXED INDEXED_void_GLfixed_GLfixed
#define gles_glPolygonOffsetx_FORMAT FORMAT_void_GLfixed_GLfixed
#define gles_glPopMatrix_INDEX 113
#define gles_glPopMatrix_RETURN void
#define gles_glPopMatrix_ARG_NAMES 
#define gles_glPopMatrix_ARG_EXPAND 
#define gles_glPopMatrix_PACKED PACKED_void
#define gles_glPopMatrix_INDEXED INDEXED_void
#define gles_glPopMatrix_FORMAT FORMAT_void
#define gles_glPushMatrix_INDEX 114
#define gles_glPushMatrix_RETURN void
#define gles_glPushMatrix_ARG_NAMES 
#define gles_glPushMatrix_ARG_EXPAND 
#define gles_glPushMatrix_PACKED PACKED_void
#define gles_glPushMatrix_INDEXED INDEXED_void
#define gles_glPushMatrix_FORMAT FORMAT_void
#define gles_glReadPixels_INDEX 115
#define gles_glReadPixels_RETURN void
#define gles_glReadPixels_ARG_NAMES x, y, width, height, format, type, pixels
#define gles_glReadPixels_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels
#define gles_glReadPixels_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define gles_glReadPixels_INDEXED INDEXED_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define gles_glReadPixels_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_GLvoid___GENPT__
#define gles_glRotatef_INDEX 116
#define gles_glRotatef_RETURN void
#define gles_glRotatef_ARG_NAMES angle, x, y, z
#define gles_glRotatef_ARG_EXPAND GLfloat angle, GLfloat x, GLfloat y, GLfloat z
#define gles_glRotatef_PACKED PACKED_void_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glRotatef_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glRotatef_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat_GLfloat
#define gles_glRotatex_INDEX 117
#define gles_glRotatex_RETURN void
#define gles_glRotatex_ARG_NAMES angle, x, y, z
#define gles_glRotatex_ARG_EXPAND GLfixed angle, GLfixed x, GLfixed y, GLfixed z
#define gles_glRotatex_PACKED PACKED_void_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glRotatex_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glRotatex_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed_GLfixed
#define gles_glSampleCoverage_INDEX 118
#define gles_glSampleCoverage_RETURN void
#define gles_glSampleCoverage_ARG_NAMES value, invert
#define gles_glSampleCoverage_ARG_EXPAND GLclampf value, GLboolean invert
#define gles_glSampleCoverage_PACKED PACKED_void_GLclampf_GLboolean
#define gles_glSampleCoverage_INDEXED INDEXED_void_GLclampf_GLboolean
#define gles_glSampleCoverage_FORMAT FORMAT_void_GLclampf_GLboolean
#define gles_glSampleCoveragex_INDEX 119
#define gles_glSampleCoveragex_RETURN void
#define gles_glSampleCoveragex_ARG_NAMES value, invert
#define gles_glSampleCoveragex_ARG_EXPAND GLclampx value, GLboolean invert
#define gles_glSampleCoveragex_PACKED PACKED_void_GLclampx_GLboolean
#define gles_glSampleCoveragex_INDEXED INDEXED_void_GLclampx_GLboolean
#define gles_glSampleCoveragex_FORMAT FORMAT_void_GLclampx_GLboolean
#define gles_glScalef_INDEX 120
#define gles_glScalef_RETURN void
#define gles_glScalef_ARG_NAMES x, y, z
#define gles_glScalef_ARG_EXPAND GLfloat x, GLfloat y, GLfloat z
#define gles_glScalef_PACKED PACKED_void_GLfloat_GLfloat_GLfloat
#define gles_glScalef_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat
#define gles_glScalef_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat
#define gles_glScalex_INDEX 121
#define gles_glScalex_RETURN void
#define gles_glScalex_ARG_NAMES x, y, z
#define gles_glScalex_ARG_EXPAND GLfixed x, GLfixed y, GLfixed z
#define gles_glScalex_PACKED PACKED_void_GLfixed_GLfixed_GLfixed
#define gles_glScalex_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed
#define gles_glScalex_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed
#define gles_glScissor_INDEX 122
#define gles_glScissor_RETURN void
#define gles_glScissor_ARG_NAMES x, y, width, height
#define gles_glScissor_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define gles_glScissor_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei
#define gles_glScissor_INDEXED INDEXED_void_GLint_GLint_GLsizei_GLsizei
#define gles_glScissor_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei
#define gles_glShadeModel_INDEX 123
#define gles_glShadeModel_RETURN void
#define gles_glShadeModel_ARG_NAMES mode
#define gles_glShadeModel_ARG_EXPAND GLenum mode
#define gles_glShadeModel_PACKED PACKED_void_GLenum
#define gles_glShadeModel_INDEXED INDEXED_void_GLenum
#define gles_glShadeModel_FORMAT FORMAT_void_GLenum
#define gles_glStencilFunc_INDEX 124
#define gles_glStencilFunc_RETURN void
#define gles_glStencilFunc_ARG_NAMES func, ref, mask
#define gles_glStencilFunc_ARG_EXPAND GLenum func, GLint ref, GLuint mask
#define gles_glStencilFunc_PACKED PACKED_void_GLenum_GLint_GLuint
#define gles_glStencilFunc_INDEXED INDEXED_void_GLenum_GLint_GLuint
#define gles_glStencilFunc_FORMAT FORMAT_void_GLenum_GLint_GLuint
#define gles_glStencilMask_INDEX 125
#define gles_glStencilMask_RETURN void
#define gles_glStencilMask_ARG_NAMES mask
#define gles_glStencilMask_ARG_EXPAND GLuint mask
#define gles_glStencilMask_PACKED PACKED_void_GLuint
#define gles_glStencilMask_INDEXED INDEXED_void_GLuint
#define gles_glStencilMask_FORMAT FORMAT_void_GLuint
#define gles_glStencilOp_INDEX 126
#define gles_glStencilOp_RETURN void
#define gles_glStencilOp_ARG_NAMES fail, zfail, zpass
#define gles_glStencilOp_ARG_EXPAND GLenum fail, GLenum zfail, GLenum zpass
#define gles_glStencilOp_PACKED PACKED_void_GLenum_GLenum_GLenum
#define gles_glStencilOp_INDEXED INDEXED_void_GLenum_GLenum_GLenum
#define gles_glStencilOp_FORMAT FORMAT_void_GLenum_GLenum_GLenum
#define gles_glTexCoordPointer_INDEX 127
#define gles_glTexCoordPointer_RETURN void
#define gles_glTexCoordPointer_ARG_NAMES size, type, stride, pointer
#define gles_glTexCoordPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define gles_glTexCoordPointer_PACKED PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glTexCoordPointer_INDEXED INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glTexCoordPointer_FORMAT FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glTexEnvf_INDEX 128
#define gles_glTexEnvf_RETURN void
#define gles_glTexEnvf_ARG_NAMES target, pname, param
#define gles_glTexEnvf_ARG_EXPAND GLenum target, GLenum pname, GLfloat param
#define gles_glTexEnvf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define gles_glTexEnvf_INDEXED INDEXED_void_GLenum_GLenum_GLfloat
#define gles_glTexEnvf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define gles_glTexEnvfv_INDEX 129
#define gles_glTexEnvfv_RETURN void
#define gles_glTexEnvfv_ARG_NAMES target, pname, params
#define gles_glTexEnvfv_ARG_EXPAND GLenum target, GLenum pname, const GLfloat * params
#define gles_glTexEnvfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glTexEnvfv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glTexEnvfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glTexEnvi_INDEX 130
#define gles_glTexEnvi_RETURN void
#define gles_glTexEnvi_ARG_NAMES target, pname, param
#define gles_glTexEnvi_ARG_EXPAND GLenum target, GLenum pname, GLint param
#define gles_glTexEnvi_PACKED PACKED_void_GLenum_GLenum_GLint
#define gles_glTexEnvi_INDEXED INDEXED_void_GLenum_GLenum_GLint
#define gles_glTexEnvi_FORMAT FORMAT_void_GLenum_GLenum_GLint
#define gles_glTexEnviv_INDEX 131
#define gles_glTexEnviv_RETURN void
#define gles_glTexEnviv_ARG_NAMES target, pname, params
#define gles_glTexEnviv_ARG_EXPAND GLenum target, GLenum pname, const GLint * params
#define gles_glTexEnviv_PACKED PACKED_void_GLenum_GLenum_const_GLint___GENPT__
#define gles_glTexEnviv_INDEXED INDEXED_void_GLenum_GLenum_const_GLint___GENPT__
#define gles_glTexEnviv_FORMAT FORMAT_void_GLenum_GLenum_const_GLint___GENPT__
#define gles_glTexEnvx_INDEX 132
#define gles_glTexEnvx_RETURN void
#define gles_glTexEnvx_ARG_NAMES target, pname, param
#define gles_glTexEnvx_ARG_EXPAND GLenum target, GLenum pname, GLfixed param
#define gles_glTexEnvx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define gles_glTexEnvx_INDEXED INDEXED_void_GLenum_GLenum_GLfixed
#define gles_glTexEnvx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define gles_glTexEnvxv_INDEX 133
#define gles_glTexEnvxv_RETURN void
#define gles_glTexEnvxv_ARG_NAMES target, pname, params
#define gles_glTexEnvxv_ARG_EXPAND GLenum target, GLenum pname, const GLfixed * params
#define gles_glTexEnvxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glTexEnvxv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glTexEnvxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glTexImage2D_INDEX 134
#define gles_glTexImage2D_RETURN void
#define gles_glTexImage2D_ARG_NAMES target, level, internalformat, width, height, border, format, type, pixels
#define gles_glTexImage2D_ARG_EXPAND GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels
#define gles_glTexImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__
#define gles_glTexImage2D_INDEXED INDEXED_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__
#define gles_glTexImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLsizei_GLsizei_GLint_GLenum_GLenum_const_GLvoid___GENPT__
#define gles_glTexParameterf_INDEX 135
#define gles_glTexParameterf_RETURN void
#define gles_glTexParameterf_ARG_NAMES target, pname, param
#define gles_glTexParameterf_ARG_EXPAND GLenum target, GLenum pname, GLfloat param
#define gles_glTexParameterf_PACKED PACKED_void_GLenum_GLenum_GLfloat
#define gles_glTexParameterf_INDEXED INDEXED_void_GLenum_GLenum_GLfloat
#define gles_glTexParameterf_FORMAT FORMAT_void_GLenum_GLenum_GLfloat
#define gles_glTexParameterfv_INDEX 136
#define gles_glTexParameterfv_RETURN void
#define gles_glTexParameterfv_ARG_NAMES target, pname, params
#define gles_glTexParameterfv_ARG_EXPAND GLenum target, GLenum pname, const GLfloat * params
#define gles_glTexParameterfv_PACKED PACKED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glTexParameterfv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glTexParameterfv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfloat___GENPT__
#define gles_glTexParameteri_INDEX 137
#define gles_glTexParameteri_RETURN void
#define gles_glTexParameteri_ARG_NAMES target, pname, param
#define gles_glTexParameteri_ARG_EXPAND GLenum target, GLenum pname, GLint param
#define gles_glTexParameteri_PACKED PACKED_void_GLenum_GLenum_GLint
#define gles_glTexParameteri_INDEXED INDEXED_void_GLenum_GLenum_GLint
#define gles_glTexParameteri_FORMAT FORMAT_void_GLenum_GLenum_GLint
#define gles_glTexParameteriv_INDEX 138
#define gles_glTexParameteriv_RETURN void
#define gles_glTexParameteriv_ARG_NAMES target, pname, params
#define gles_glTexParameteriv_ARG_EXPAND GLenum target, GLenum pname, const GLint * params
#define gles_glTexParameteriv_PACKED PACKED_void_GLenum_GLenum_const_GLint___GENPT__
#define gles_glTexParameteriv_INDEXED INDEXED_void_GLenum_GLenum_const_GLint___GENPT__
#define gles_glTexParameteriv_FORMAT FORMAT_void_GLenum_GLenum_const_GLint___GENPT__
#define gles_glTexParameterx_INDEX 139
#define gles_glTexParameterx_RETURN void
#define gles_glTexParameterx_ARG_NAMES target, pname, param
#define gles_glTexParameterx_ARG_EXPAND GLenum target, GLenum pname, GLfixed param
#define gles_glTexParameterx_PACKED PACKED_void_GLenum_GLenum_GLfixed
#define gles_glTexParameterx_INDEXED INDEXED_void_GLenum_GLenum_GLfixed
#define gles_glTexParameterx_FORMAT FORMAT_void_GLenum_GLenum_GLfixed
#define gles_glTexParameterxv_INDEX 140
#define gles_glTexParameterxv_RETURN void
#define gles_glTexParameterxv_ARG_NAMES target, pname, params
#define gles_glTexParameterxv_ARG_EXPAND GLenum target, GLenum pname, const GLfixed * params
#define gles_glTexParameterxv_PACKED PACKED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glTexParameterxv_INDEXED INDEXED_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glTexParameterxv_FORMAT FORMAT_void_GLenum_GLenum_const_GLfixed___GENPT__
#define gles_glTexSubImage2D_INDEX 141
#define gles_glTexSubImage2D_RETURN void
#define gles_glTexSubImage2D_ARG_NAMES target, level, xoffset, yoffset, width, height, format, type, pixels
#define gles_glTexSubImage2D_ARG_EXPAND GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels
#define gles_glTexSubImage2D_PACKED PACKED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define gles_glTexSubImage2D_INDEXED INDEXED_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define gles_glTexSubImage2D_FORMAT FORMAT_void_GLenum_GLint_GLint_GLint_GLsizei_GLsizei_GLenum_GLenum_const_GLvoid___GENPT__
#define gles_glTranslatef_INDEX 142
#define gles_glTranslatef_RETURN void
#define gles_glTranslatef_ARG_NAMES x, y, z
#define gles_glTranslatef_ARG_EXPAND GLfloat x, GLfloat y, GLfloat z
#define gles_glTranslatef_PACKED PACKED_void_GLfloat_GLfloat_GLfloat
#define gles_glTranslatef_INDEXED INDEXED_void_GLfloat_GLfloat_GLfloat
#define gles_glTranslatef_FORMAT FORMAT_void_GLfloat_GLfloat_GLfloat
#define gles_glTranslatex_INDEX 143
#define gles_glTranslatex_RETURN void
#define gles_glTranslatex_ARG_NAMES x, y, z
#define gles_glTranslatex_ARG_EXPAND GLfixed x, GLfixed y, GLfixed z
#define gles_glTranslatex_PACKED PACKED_void_GLfixed_GLfixed_GLfixed
#define gles_glTranslatex_INDEXED INDEXED_void_GLfixed_GLfixed_GLfixed
#define gles_glTranslatex_FORMAT FORMAT_void_GLfixed_GLfixed_GLfixed
#define gles_glVertexPointer_INDEX 144
#define gles_glVertexPointer_RETURN void
#define gles_glVertexPointer_ARG_NAMES size, type, stride, pointer
#define gles_glVertexPointer_ARG_EXPAND GLint size, GLenum type, GLsizei stride, const GLvoid * pointer
#define gles_glVertexPointer_PACKED PACKED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glVertexPointer_INDEXED INDEXED_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glVertexPointer_FORMAT FORMAT_void_GLint_GLenum_GLsizei_const_GLvoid___GENPT__
#define gles_glViewport_INDEX 145
#define gles_glViewport_RETURN void
#define gles_glViewport_ARG_NAMES x, y, width, height
#define gles_glViewport_ARG_EXPAND GLint x, GLint y, GLsizei width, GLsizei height
#define gles_glViewport_PACKED PACKED_void_GLint_GLint_GLsizei_GLsizei
#define gles_glViewport_INDEXED INDEXED_void_GLint_GLint_GLsizei_GLsizei
#define gles_glViewport_FORMAT FORMAT_void_GLint_GLint_GLsizei_GLsizei

void gles_glActiveTexture(glActiveTexture_ARG_EXPAND);
void gles_glAlphaFunc(glAlphaFunc_ARG_EXPAND);
void gles_glAlphaFuncx(glAlphaFuncx_ARG_EXPAND);
void gles_glBindBuffer(glBindBuffer_ARG_EXPAND);
void gles_glBindTexture(glBindTexture_ARG_EXPAND);
void gles_glBlendFunc(glBlendFunc_ARG_EXPAND);
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

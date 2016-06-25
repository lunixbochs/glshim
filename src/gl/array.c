#include "array.h"
#include "eval.h"
#include "gl_str.h"

GLvoid *gl_copy_ptr(pointer_state_t *dst,
                    pointer_state_t *src,
                    GLsizei skip, GLsizei count,
                    GLboolean normalize) {
    if (!src->ptr || !count) {
        return NULL;
    }
    GLsizei dst_size = gl_sizeof(dst->type) * dst->size,
            src_size = gl_sizeof(src->type) * src->size;
    GLsizei dst_stride = (dst->stride) ? (dst->stride) : (dst_size),
            src_stride = (src->stride) ? (src->stride) : (src_size);

    const char *unknown_str = "libGL: gl_copy_array -> unsupported type %s\n";
    if (dst->size < src->size) {
        printf("Warning: gl_copy_ptr: %i < %i\n", dst->size, src->size);
        return NULL;
    }
    if (dst->ptr == NULL) {
        dst->ptr = calloc(1, count * dst_stride);
    }

    // if stride is weird, we need to be able to arbitrarily shift src
    // so we leave it in a uintptr_t and cast after incrementing
    uintptr_t in = (uintptr_t)src->ptr;
    uintptr_t out = (uintptr_t)dst->ptr;
    in += src_stride * skip;

    GL_TYPE_SWITCH(output, out, dst->type,
        for (int i = skip; i < (skip + count); i++) {
            GL_TYPE_SWITCH(input, in, src->type,
                output = out;
                input = in;
                for (int j = 0; j < src->size; j++) {
                    if (src->type != dst->type && normalize) {
                        // TODO: make sure this isn't clamping, maybe do in float space
                        output[j] = input[j] * gl_max_value(dst->type);
                        output[j] /= gl_max_value(src->type);
                    } else {
                        output[j] = input[j];
                    }
                }
                for (int j = src->size; j < dst->size; j++) {
                    if (j == 3) output[j] = 1;
                    else output[j] = 0;
                }
                out += dst_stride;
                in += src_stride;
            ,
                default:
                    printf(unknown_str, gl_str(src->type));
                    return NULL;
            )
        },
        default:
            printf(unknown_str, gl_str(dst->type));
            return NULL;
    )
    return dst->ptr;
}

GLfloat *gl_pointer_index(pointer_state_t *p, GLint index) {
    static GLfloat buf[4];
    GLsizei size = gl_sizeof(p->type);
    GLsizei stride = p->stride ? p->stride : size * p->size;
    uintptr_t ptr = (uintptr_t)p->ptr + (stride * index);

    GL_TYPE_SWITCH(src, ptr, p->type,
        for (int i = 0; i < p->size; i++) {
            buf[i] = src[i];
        }
        // zero anything not set by the pointer
        for (int i = p->size; i < 4; i++) {
            buf[i] = 0;
        },
        default:
            printf("libGL: unsupported pointer type: %s\n", gl_str(p->type));
    )
    return buf;
}


GLfloat *copy_eval_double(GLenum target, GLint ustride, GLint uorder,
                          GLint vstride, GLint vorder,
                          const GLdouble *src) {

    GLsizei width = get_map_width(target);
    GLsizei dwidth = (uorder == 2 && vorder == 2) ? 0 : uorder * vorder;
    GLsizei hwidth = (uorder > vorder ? uorder : vorder) * width;
    GLsizei elements;
    GLsizei uinc = ustride - vorder * vstride;

    if (hwidth > dwidth) {
        elements = (uorder * vorder * width + hwidth);
    } else {
        elements = (uorder * vorder * width + dwidth);
    }
    GLfloat *points = malloc(elements * sizeof(GLfloat));
    GLfloat *dst = points;

    for (int i = 0; i < uorder; i++, src += uinc) {
        for (int j = 0; j < vorder; j++, src += vstride) {
            for (int k = 0; k < width; k++) {
                *dst++ = src[k];
            }
        }
    }
    return points;
}

void normalize_indices(GLushort *indices, GLsizei *max, GLsizei *min, GLsizei count) {
    *max = 0;
    *min = -1;
    for (int i = 0; i < count; i++) {
        GLsizei n = indices[i];
        if (*min == -1)
            *min = n;
        *min = (n < *min) ? n : *min;
        *max = (n > *max) ? n : *max;
    }
    for (int i = 0; i < count; i++) {
        indices[i] -= *min;
    }
}

#include <stdio.h>

#include "block.h"
#include "error.h"
#include "texgen.h"
#include "vectorial/simd4f.h"
#include "vectorial/simd4x4f.h"

void glTexGeni(GLenum coord, GLenum pname, GLint param) {
    if (param != GL_TEXTURE_GEN_MODE) {
        gl_set_error(GL_INVALID_ENUM);
        return;
    }
    GLfloat fp = param;
    glTexGenfv(coord, pname, &fp);
}

void glTexGenfv(GLenum coord, GLenum pname, const GLfloat *param) {
    // pname is in: GL_TEXTURE_GEN_MODE, GL_OBJECT_PLANE, GL_EYE_PLANE
    ERROR_IN_BLOCK();

    texgen_state_t *texgen = &state.texgen[state.texture.active];
    if (pname == GL_TEXTURE_GEN_MODE) {
        switch ((GLenum)*param) {
            case GL_SPHERE_MAP:
                if (coord == GL_R || coord == GL_Q) {
                    ERROR(GL_INVALID_ENUM);
                }
            case GL_OBJECT_LINEAR:
            case GL_EYE_LINEAR:
            // TODO: missing GL_NORMAL_MAP implementation
            case GL_NORMAL_MAP:
            case GL_REFLECTION_MAP:
                break;
            default:
                ERROR(GL_INVALID_ENUM);
        }
        switch (coord) {
            case GL_S: texgen->S = *param; break;
            case GL_T: texgen->T = *param; break;
            case GL_R: texgen->R = *param; break;
            case GL_Q: texgen->Q = *param; break;
        }
    } else {
        if (pname != GL_OBJECT_PLANE && pname != GL_EYE_PLANE) {
            gl_set_error(GL_INVALID_ENUM);
            return;
        }

#define pcase(coord) \
    case GL_##coord: \
    if (pname == GL_OBJECT_PLANE) target = texgen->coord##obj; \
    else target = texgen->coord##eye; \
    break
        GLfloat *target = NULL;
        switch (coord) {
            pcase(S);
            pcase(T);
            pcase(R);
            pcase(Q);
            default:
                ERROR(GL_INVALID_ENUM);
                return;
        }
#undef pcase
        memcpy(target, param, 4 * sizeof(GLfloat));
    }
}

static inline void tex_coord_loop(block_t *block, GLfloat *out, GLenum type, GLfloat *plane_in) {
    GLfloat *vert = block->vert;
    GLfloat *normal = block->normal;
    // if we get sphere map and no normal, just barf and return?

    simd4x4f matrix, inverse;
    if (type != GL_OBJECT_LINEAR) {
        float tmp[16];
        glGetFloatv(GL_MODELVIEW_MATRIX, tmp);
        simd4x4f_uload(&matrix, tmp);
        simd4x4f_inverse(&matrix, &inverse);
    }
    simd4f plane = simd4f_uload4(plane_in);
    simd4f eyeplane;
    if (type == GL_EYE_LINEAR) {
        simd4x4f_matrix_vector_mul(&inverse, &plane, &eyeplane);
    }

    for (int i = 0; i < block->len; i++) {
        if (! block->normal) {
            normal = CURRENT->normal;
        }
        GLfloat tmp[2];
        simd4f v = simd4f_create(vert[0], vert[1], vert[2], 1);
        switch (type) {
            case GL_OBJECT_LINEAR:
                simd4f_ustore2(simd4f_dot4(v, plane), tmp);
                out[0] = tmp[0];
                break;
            case GL_EYE_LINEAR: {
                simd4f eye;
                simd4x4f_matrix_vector_mul(&matrix, &v, &eye);
                simd4f_ustore2(simd4f_dot4(eye, eyeplane), tmp);
                out[0] = tmp[0];
                break;
            }
            case GL_SPHERE_MAP: {
                simd4f eye, eye_normal, norm;

                norm = simd4f_create(normal[0], normal[1], normal[2], 1.0f);
                simd4x4f_matrix_vector_mul(&matrix, &v, &eye);
                eye = simd4f_normalize3(eye);

                // TODO: is normal multiplied wrong here?
                simd4x4f_matrix_vector_mul(&inverse, &norm, &eye_normal);

                // eye - eye_normal * 2 * dot3d(eye, eye_normal)
                simd4f reflect =
                    simd4f_sub(eye,
                        simd4f_mul(eye_normal,
                                simd4f_mul(simd4f_create(2.0f, 2.0f, 2.0f, 1.0f), simd4f_dot4(eye, eye_normal))));
                // reflect.z += 1
                reflect = simd4f_add(reflect, simd4f_create(0.0f, 0.0f, 1.0f, 0.0f));

                float ref[2], dot[2];
                simd4f_ustore2(reflect, ref);
                simd4f_ustore2(simd4f_dot4(reflect, reflect), dot);
                float m = 1.0 / (2.0 * sqrt(dot[0]));
                out[0] = ref[0] * m + 0.5;
                out[1] = ref[1] * m + 0.5;

                normal += 3;
                break;
            }
            case GL_REFLECTION_MAP: {
                float eye_[4], eye_normal_[4], dot[2];
                simd4f norm = simd4f_create(normal[0], normal[1], normal[2], 1.0f);
                simd4f eye;
                simd4x4f_matrix_vector_mul(&matrix, &v, &eye);
                eye = simd4f_normalize3(eye);
                simd4f_ustore4(eye, eye_);

                simd4f eye_normal;
                simd4x4f_matrix_vector_mul(&inverse, &norm, &eye_normal);
                simd4f_ustore4(eye_normal, eye_);

                simd4f_ustore2(simd4f_dot4(eye, eye_normal), dot);
                out[0] = eye_[0] - eye_normal_[0] * dot[0] * 2.0f;
                out[1] = eye_[1] - eye_normal_[1] * dot[0] * 2.0f;
                out[2] = eye_[2] - eye_normal_[2] * dot[0] * 2.0f;
                break;
            }
        }
        out += 4;
        vert += 3;
    }
}

void gen_tex_coords(block_t *block, GLuint texture) {
    // TODO: do less work when called from glDrawElements?

#define en(v) state.enable.texgen_##v[texture]
    block->tex[texture] = (GLfloat *)calloc(1, block->len * 4 * sizeof(GLfloat));
    texgen_state_t *texgen = &state.texgen[texture];
    if (en(s)) {
        if (texgen->S == GL_OBJECT_LINEAR) {
            tex_coord_loop(block, block->tex[texture], texgen->S, texgen->Sobj);
        } else if (texgen->S == GL_EYE_LINEAR) {
            tex_coord_loop(block, block->tex[texture], texgen->S, texgen->Seye);
        }
    }
    if (en(t)) {
        if (texgen->T == GL_OBJECT_LINEAR) {
            tex_coord_loop(block, block->tex[texture], texgen->T, texgen->Tobj);
        } else if (texgen->T == GL_EYE_LINEAR) {
            tex_coord_loop(block, block->tex[texture], texgen->T, texgen->Teye);
        }
    }
    if (en(s) && en(t) && texgen->S == texgen->T) {
        if (texgen->S == GL_SPHERE_MAP) {
            tex_coord_loop(block, block->tex[texture], texgen->S, NULL);
        } else if (en(r) && texgen->S == GL_REFLECTION_MAP && texgen->S == texgen->R) {
            tex_coord_loop(block, block->tex[texture], texgen->S, NULL);
        }
    }
#undef en
}

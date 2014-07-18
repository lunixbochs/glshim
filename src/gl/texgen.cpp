#define GLM_FORCE_RADIANS

#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_inverse.hpp>

extern "C" {

#include "block.h"
#include "texgen.h"

void glTexGeni(GLenum coord, GLenum pname, GLint param) {
    // coord is in: GL_S, GL_T, GL_R, GL_Q
    // pname == GL_TEXTURE_GEN_MODE
    /* param is in:
        GL_OBJECT_LINEAR, GL_EYE_LINEAR,
        GL_SPHERE_MAP, GL_NORMAL_MAP, or GL_REFLECTION_MAP
    */
    switch (coord) {
        case GL_S: state.texgen[state.texture.active].S = param; break;
        case GL_T: state.texgen[state.texture.active].T = param; break;
    }
}

void glTexGenfv(GLenum coord, GLenum pname, const GLfloat *param) {
    // pname is in: GL_TEXTURE_GEN_MODE, GL_OBJECT_PLANE, GL_EYE_PLANE

    if (pname == GL_TEXTURE_GEN_MODE) {
        switch (coord) {
            case GL_S: state.texgen[state.texture.active].S = *param; break;
            case GL_T: state.texgen[state.texture.active].T = *param; break;
        }
    } else {
        switch (coord) {
            case GL_S:
                memcpy(state.texgen[state.texture.active].Sv, param, 4 * sizeof(GLfloat));
                break;
            case GL_T:
                memcpy(state.texgen[state.texture.active].Tv, param, 4 * sizeof(GLfloat));
                break;
        }
    }

    /*
    If pname is GL_TEXTURE_GEN_MODE, then the array must contain
    a single symbolic constant, one of
    GL_OBJECT_LINEAR, GL_EYE_LINEAR, GL_SPHERE_MAP, GL_NORMAL_MAP,
    or GL_REFLECTION_MAP.
    Otherwise, params holds the coefficients for the texture-coordinate
    generation function specified by pname.
    */
}

static inline void tex_coord_loop(block_t *block, GLfloat *out, GLenum type, GLfloat *P) {
    GLfloat *vert = block->vert;
    GLfloat *normal = block->normal;
    // if we get sphere map and no normal, just barf and return?

    glm::mat4 matrix;
    if (type != GL_OBJECT_LINEAR) {
        glGetFloatv(GL_MODELVIEW_MATRIX, glm::value_ptr(matrix));
    }
    glm::vec4 plane = glm::vec4(P[0], P[1], P[2], P[3]);
    for (int i = 0; i < block->len; i++) {
        glm::vec4 v = glm::vec4(vert[0], vert[1], vert[2], 1);
        if (! block->normal) {
            normal = CURRENT->normal;
        }
        switch (type) {
            case GL_OBJECT_LINEAR: {
                out[0] = glm::dot(v, plane);
                break;
            }
            case GL_EYE_LINEAR: {
                glm::vec4 eye = matrix * v;
                out[0] = glm::dot(eye, plane);
                break;
            }
            case GL_SPHERE_MAP: {
                // TODO: process S and T at the same time?
                glm::vec3 norm = glm::vec3(normal[0], normal[1], normal[2]);
                glm::vec3 eye = glm::vec3(matrix * v);
                eye = glm::normalize(eye);
                glm::vec3 eye_normal = norm * glm::inverseTranspose(glm::mat3(matrix));
                glm::vec3 reflection = eye - eye_normal * glm::vec3(2.0 * glm::dot(eye, eye_normal));
                reflection.z += 1.0;
                GLfloat m = 1.0 / (2.0 * sqrt(glm::dot(reflection, reflection)));
                out[0] = reflection.x * m + 0.5;
                // t = reflection.y * m + 0.5;

                normal += 3;
                break;
            }
            case GL_REFLECTION_MAP: {
                glm::vec3 norm = glm::vec3(normal[0], normal[1], normal[2]);
                glm::vec3 eye = glm::vec3(matrix * v);
                eye = glm::normalize(eye);
                glm::vec3 eye_normal = norm * glm::inverseTranspose(glm::mat3(matrix));
                GLfloat dot = 2.0 * glm::dot(eye, eye_normal);
                out[0] = eye.x - eye_normal.x * dot;
                // out[1] = eye.x - eye_normal.y * dot;
                // out[2] = eye.x - eye_normal.z * dot;
                break;
            }
        }
        out += 2;
        vert += 3;
    }
}

void gen_tex_coords(block_t *block, GLuint texture) {
    // TODO: do less work when called from glDrawElements?

    block->tex[texture] = (GLfloat *)malloc(block->len * 2 * sizeof(GLfloat));
    texgen_state_t *texgen = &state.texgen[texture];
    if (state.enable.texgen_s[texture])
        tex_coord_loop(block, block->tex[texture], texgen->S, texgen->Sv);
    if (state.enable.texgen_t[texture])
        tex_coord_loop(block, block->tex[texture] + 1, texgen->T, texgen->Tv);
}

}

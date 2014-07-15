#include "gl.h"

#ifndef GL_STATE_H
#define GL_STATE_H

#include "eval.h"
#include "texture.h"

typedef struct {
    GLboolean line_stipple,
              blend,
              color_array,
              normal_array,
              tex_coord_array[MAX_TEX],
              texgen_s[MAX_TEX],
              texgen_t[MAX_TEX],
              texture_2d[MAX_TEX],
              vertex_array;
} enable_state_t;


typedef struct {
    GLenum S;
    GLenum T;
    GLfloat Sv[4];
    GLfloat Tv[4];
} texgen_state_t;

typedef struct {
    GLuint unpack_row_length,
           unpack_skip_pixels,
           unpack_skip_rows;
    GLboolean unpack_lsb_first;
    // TODO: do we only need to worry about GL_TEXTURE_2D?
    GLboolean rect_arb[MAX_TEX];
    gltexture_t *bound[MAX_TEX];
    khash_t(tex) *list;
    // active textures
    GLuint active;
    GLuint client;
} texture_state_t;


typedef struct {
    GLint size;
    GLenum type;
    GLsizei stride;
    const GLvoid *pointer;
} pointer_state_t;

typedef struct {
    pointer_state_t vertex, color, normal, tex_coord[MAX_TEX];
} pointer_states_t;


typedef struct {
    GLfloat color[4];
    GLfloat normal[3];
    GLfloat tex[MAX_TEX][2];
} current_state_t;


typedef struct {
    displaylist_t *active;
    current_state_t current;

    GLuint base;
    GLuint name;
    GLenum mode;

    GLuint count;
    GLuint cap;
} displaylist_state_t;


typedef struct {
    block_t *active;
    GLboolean locked;
} block_state_t;


typedef struct {
    map_state_t *vertex3,
                *vertex4,
                *index,
                *color4,
                *normal,
                *texture1,
                *texture2,
                *texture3,
                *texture4;
} map_states_t;


typedef struct {
    displaylist_state_t list;
    block_state_t block;
    enable_state_t enable;
    map_state_t *map_grid;
    map_states_t map1, map2;
    pointer_states_t pointers;
    displaylist_t **lists;
    texgen_state_t texgen[MAX_TEX];
    texture_state_t texture;
    current_state_t current;
} glstate_t;

#endif

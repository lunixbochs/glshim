#ifndef BLOCK_H
#define BLOCK_H

#include <stdint.h>
#include "gl.h"

#define DEFAULT_BLOCK_CAPACITY 16
#define RENDER_BLOCK_FORMAT -1

typedef struct {
    uint32_t len;
    uint32_t cap;
    GLenum mode;
    struct {
        GLfloat tex[2];
    } last;

    // TODO: dynamic type support?
    /*
    struct {
        GLenum vert, normal, color, tex;
    } type;
    */

    GLfloat *vert;
    GLfloat *normal;
    GLfloat *color;
    GLfloat *tex;
    GLushort *indices;
    GLboolean q2t;

    GLboolean open;
} block_t;

void (*block_draw_t)(block_t *block);

typedef struct {
    int format;
    block_t *block;
    int refs;
} block_call_t;

extern block_t *bl_new(GLenum mode);
extern void bl_free(block_t *block);
extern void bl_draw(block_t *block);
extern void bl_q2t(block_t *block);
extern void bl_end(block_t *block);

extern void bl_color4f(block_t *block, GLfloat r, GLfloat g, GLfloat b, GLfloat a);
extern void bl_normal3f(block_t *block, GLfloat x, GLfloat y, GLfloat z);
extern void bl_push_call(block_t *block, packed_call_t *data);
extern void bl_tex_coord2f(block_t *block, GLfloat s, GLfloat t);
extern void bl_vertex3f(block_t *block, GLfloat x, GLfloat y, GLfloat z);

#endif

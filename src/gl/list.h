#include "gl.h"

#ifndef DISPLAY_LIST_H
#define DISPLAY_LIST_H

typedef struct _call_list_t {
    unsigned long len;
    unsigned long cap;
    packed_call_t **calls;
} call_list_t;

typedef struct _renderlist_t {
    unsigned long len;
    unsigned long cap;
    GLenum mode;
    struct {
        GLfloat normal[3];
        GLfloat color[4];
        GLfloat tex[2];
    } last;

    call_list_t calls;
    GLfloat *vert;
    GLfloat *normal;
    GLfloat *color;
    GLfloat *tex;
    GLushort *indices;
    GLboolean q2t;

    struct _renderlist_t *prev;
    struct _renderlist_t *next;
    GLboolean open;
} renderlist_t;

#define DEFAULT_CALL_LIST_CAPACITY 20
#define DEFAULT_RENDER_LIST_CAPACITY 20

extern renderlist_t *rl_alloc();
extern renderlist_t *rl_extend(renderlist_t *list);
extern void rl_free(renderlist_t *list);
extern void rl_draw(renderlist_t *list);
extern void rl_q2t(renderlist_t *list);
extern void rl_end(renderlist_t *list);

extern void rl_color4f(renderlist_t *list, GLfloat r, GLfloat g, GLfloat b, GLfloat a);
extern void rl_normal3f(renderlist_t *list, GLfloat x, GLfloat y, GLfloat z);
extern void rl_push_call(renderlist_t *list, packed_call_t *data);
extern void rl_tex_coord2f(renderlist_t *list, GLfloat s, GLfloat t);
extern void rl_vertex3f(renderlist_t *list, GLfloat x, GLfloat y, GLfloat z);

#endif

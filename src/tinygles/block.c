#include "gl/types.h"
#include "zgl.h"

static inline void tgl_block_element(block_t *block, int i) {
    GLContext *c = gl_get_context();
    if (block->color) {
        int base = i * 4;
        tglColor4f(block->color[base],
                   block->color[base + 1],
                   block->color[base + 2],
                   block->color[base + 3]);
    }
    if (block->normal) {
        int base = i * 3;
        c->current.normal.X = block->normal[base];
        c->current.normal.Y = block->normal[base + 1];
        c->current.normal.Z = block->normal[base + 2];
        c->current.normal.W = 1.0f;
    }
    // TODO: multitexture?
    if (block->tex[0]) {
        int base = i * 4;
        c->current.tex_coord.X = block->tex[0][base];
        c->current.tex_coord.Y = block->tex[0][base + 1];
        c->current.tex_coord.Z = block->tex[0][base + 2];
        c->current.tex_coord.W = block->tex[0][base + 3];
    }
    if (block->vert) {
        int base = i * 3;
        tglVertex4f(block->vert[base],
                    block->vert[base + 1],
                    block->vert[base + 2],
                    1.0f);
    }
}

void tgl_block_draw(block_t *block, uint16_t *indices) {
    tglBegin(block->mode);
    if (indices) {
        for (int idx = 0; idx < block->count; idx++) {
            tgl_block_element(block, indices[idx]);
        }
    } else {
        for (int i = 0; i < block->len; i++) {
            tgl_block_element(block, i);
        }
    }
    tglEnd();
}

#include "zgl.h"

static void gl_enable_disable_light(GLContext *c, int light, int v) {
    GLLight *l = &c->light.lights[light];
    if (v && !l->enabled) {
        l->enabled = 1;
        l->next = c->light.first;
        c->light.first = l;
        l->prev = NULL;
    } else if (!v && l->enabled) {
        l->enabled = 0;
        if (l->prev == NULL) c->light.first = l->next;
        else l->prev->next = l->next;
        if (l->next != NULL) l->next->prev = l->prev;
    }
}

static int *gl_bit_pointer(GLContext *c, GLenum cap) {
#define map(magic, attr) case magic: return &attr
    switch (cap) {
        map(GL_BLEND, c->blend.enabled);
        map(GL_COLOR_MATERIAL, c->material.color.enabled);
        map(GL_CULL_FACE, c->cull_face_enabled);
        map(GL_DEPTH_TEST, c->depth_test);
        map(GL_LIGHTING, c->light.enabled);
        map(GL_TEXTURE_2D, c->texture.enabled_2d);
        default:
            return NULL;
    }
#undef map
}

static void gl_enable_disable(GLenum cap, int v) {
#define offset_bit(magic, bit) \
    case magic: \
        if (v) c->offset.states |= bit; \
        else c->offset.states &= ~bit;

    GLContext *c = gl_get_context();
    int *bit;
    switch(cap) {
        offset_bit(GL_POLYGON_OFFSET_FILL, TGL_OFFSET_FILL);
        offset_bit(GL_POLYGON_OFFSET_POINT, TGL_OFFSET_POINT);
        offset_bit(GL_POLYGON_OFFSET_LINE, TGL_OFFSET_LINE);
        default:
            if (cap >= GL_LIGHT0 && cap < GL_LIGHT0 + MAX_LIGHTS) {
                gl_enable_disable_light(c, cap - GL_LIGHT0, v);
            } else if ((bit = gl_bit_pointer(c, cap)) != NULL) {
                *bit = v;
            } else {
                fprintf(stderr, "gl_enable_disable(): 0x%04X not supported\n", cap);
            }
            break;
    }
#undef offset_bit
}

void tglEnable(GLenum cap) {
    gl_enable_disable(cap, 1);
}

void tglDisable(GLenum cap) {
    gl_enable_disable(cap, 0);
}

GLboolean tglIsEnabled(GLenum cap) {
#define offset_bit(magic, bit) \
    case magic: return (c->offset.states & bit) ? 1 : 0;

    GLContext *c = gl_get_context();
    int *bit;
    switch (cap) {
        offset_bit(GL_POLYGON_OFFSET_FILL, TGL_OFFSET_FILL);
        offset_bit(GL_POLYGON_OFFSET_POINT, TGL_OFFSET_POINT);
        offset_bit(GL_POLYGON_OFFSET_LINE, TGL_OFFSET_LINE);
        default:
            if (cap >= GL_LIGHT0 && cap < GL_LIGHT0 + MAX_LIGHTS) {
                GLLight *l = &c->light.lights[cap - GL_LIGHT0];
                return l->enabled;
            } else if ((bit = gl_bit_pointer(c, cap)) != NULL) {
                return *bit;
            } else {
                fprintf(stderr, "tglIsEnabled(): 0x%04X not supported\n", cap);
            }
    }
#undef offset_bit
}

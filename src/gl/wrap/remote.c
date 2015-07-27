#include "../remote.h"
#include "./glpack.h"
#include "./remote.h"
#include "gl_helpers.h"

int remote_local_pre(GlouijaCall *c, packed_call_t *call) {
    switch (call->index) {
        case glDeleteTextures_INDEX:
        {
            glDeleteTextures_PACKED *n = (glDeleteTextures_PACKED *)call;
            glouija_add_block(c, n->args.textures, n->args.n * sizeof(GLuint), true);
            break;
        }
        case glTexImage2D_INDEX:
        {
            glTexImage2D_PACKED *n = (glTexImage2D_PACKED *)call;
            size_t size = n->args.width * n->args.height * gl_pixel_sizeof(n->args.format, n->args.type);
            glouija_add_block(c, n->args.pixels, size, true);
            break;
        }
        case glLoadMatrixf_INDEX:
        {
            glLoadMatrixf_PACKED *n = (glLoadMatrixf_PACKED *)call;
            glouija_add_block(c, n->args.m, 16 * sizeof(GLfloat), true);
            break;
        }
#if 0
        // this is disabled to remove the X dependency for now
        // it looks like glXChooseVisual returns don't matter anyway
        case glXChooseVisual_INDEX:
        {
            glXChooseVisual_PACKED *n = (glXChooseVisual_PACKED *)call;
            int *attribList = n->args.attribList;
            int size = 0;
            while (attribList[size++]) {}
            glouija_add_block(c, attribList, size, true);
            return 1;
        }
#endif
    }
    return 0;
}

void remote_local_post(GlouijaCall *c, GlouijaCall *ret, packed_call_t *call, void *ret_v, size_t ret_size) {
    switch (call->index) {
#if 0
        // see above
        case glXChooseVisual_INDEX:
        {
            glXChooseVisual_PACKED *n = (glXChooseVisual_PACKED *)call;
            XVisualInfo **ret_vis = (XVisualInfo **)ret_v;
            if (*ret_vis) {
                XVisualInfo *visual = ret->arg[1].data.block.data;
                int count;
                XVisualInfo tmp;
                XMatchVisualInfo(n->args.dpy, visual->screen, visual->depth, visual->class, &tmp);
                memcpy(visual, &tmp, sizeof(XVisualInfo));
                *ret_vis = visual;
            }
            break;
        }
#endif
    }
}

void remote_target_process(GlouijaCall *c, GlouijaCall *response, packed_call_t *call, void *ret) {
    if (call->index >= 0) {
        printf("remote call: ");
        glIndexedPrint(call);
    }
    switch (call->index) {
        case REMOTE_BLOCK_DRAW:
        {
            block_t *block = remote_deserialize_block((void *)call);
            bl_draw(block);
            return;
        }
        case REMOTE_GL_GET:
        {
            return;
        }
        case REMOTE_RENDER_RASTER:
        {
            return;
        }
        case glDeleteTextures_INDEX:
            ((glDeleteTextures_PACKED *)call)->args.textures = c->arg[2].data.block.data;
            break;
        case glTexImage2D_INDEX:
            ((glTexImage2D_PACKED *)call)->args.pixels = c->arg[2].data.block.data;
            break;
        case glLoadMatrixf_INDEX:
            ((glLoadMatrixf_PACKED *)call)->args.m = c->arg[2].data.block.data;
            break;
#if 0
        // see above
        case glXChooseVisual_INDEX:
        {
            PACKED_glXChooseVisual *n = (PACKED_glXChooseVisual *)call;
            n->args.attribList = c->arg[2].data.block.data;
            int *attribList = n->args.attribList;
            XVisualInfo *info = NULL;
            glIndexedCall(call, (void *)&info);
            if (info) {
                glouija_add_block(response, info, sizeof(XVisualInfo), true);
            }
            return;
        }
#endif
    }
    glIndexedCall(call, (void *)ret);
}

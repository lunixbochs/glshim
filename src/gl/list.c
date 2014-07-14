#include <stdio.h>

#include "list.h"
#include "gl.h"

displaylist_t *dl_alloc() {
    displaylist_t *dl = malloc(sizeof(displaylist_t));
    dl->cap = 0;
    dl->len = 0;
    dl->calls = NULL;
    dl->open = true;
    return dl;
}

void dl_free(displaylist_t *dl) {
    for (int i = 0; i < dl->len; i++) {
        dl_decref(dl->calls[i]);
    }
    free(dl->calls);
    free(dl);
}

void dl_incref(packed_call_t *call) {
    call->refs++;
}

void dl_decref(packed_call_t *call) {
    // TODO: thread safety?
    if (--call->refs) {
        if (call->format == RENDER_BLOCK_FORMAT) {
            block_call_t *bcall = (block_call_t *)call;
            bl_free(bcall->block);
        }
        free(call);
    }
}

void dl_append(displaylist_t *dl, packed_call_t *call) {
    if (! dl->open) {
        printf("libGL: warning: trying to append to closed display list\n");
        return;
    }
    if (! dl->calls) {
        dl->cap = DEFAULT_DISPLAYLIST_CAPACITY;
        dl->calls = malloc(dl->cap * sizeof(uintptr_t));
    } else if (dl->len == dl->cap) {
        dl->cap *= 2;
        // TODO: check this
        dl->calls = realloc(dl->calls, dl->cap * sizeof(uintptr_t));
    }
    dl->calls[dl->len++] = call;
    dl_incref(call);
}

void dl_append_block(displaylist_t *dl, block_t *block) {
    block_call_t *call = malloc(sizeof(block_call_t));
    call->format = RENDER_BLOCK_FORMAT;
    call->refs = 0;
    call->block = state.block.active;
    dl_append(dl, (packed_call_t *)call);
}

void dl_extend(displaylist_t *dl, displaylist_t *append) {
    for (int i = 0; i < append->len; i++) {
        // TODO: reference count
        dl_append(dl, append->calls[i]);
    }
}

void dl_close(displaylist_t *dl) {
    dl->open = false;
}

void dl_call(displaylist_t *dl) {
    for (int i = 0; i < dl->len; i++) {
        packed_call_t *call = dl->calls[i];
        switch (call->format) {
            case RENDER_BLOCK_FORMAT: {
                block_t *block = ((block_call_t *)call)->block;
                bl_draw(block);
                bl_pollute(block);
                break;
            }
            default:
                glPackedCall(dl->calls[i]);
                break;
        }
    }
}

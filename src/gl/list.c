#include <stdio.h>

#include "block.h"
#include "gl.h"
#include "list.h"

displaylist_t *dl_alloc() {
    displaylist_t *dl = calloc(1, sizeof(displaylist_t));
    dl->open = true;
    return dl;
}

void dl_free(displaylist_t *dl) {
    int len = tack_len(&dl->calls);
    for (int i = 0; i < len; i++) {
        dl_decref(tack_get(&dl->calls, i));
    }
    free(dl);
    tack_clear(&dl->calls);
}

void dl_incref(packed_call_t *call) {
    call->refs++;
}

void dl_decref(packed_call_t *call) {
    // TODO: thread safety?
    if (--call->refs == 0) {
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
    tack_push(&dl->calls, call);
    dl_incref(call);
}

void dl_append_block(displaylist_t *dl, block_t *block) {
    block_call_t *call = malloc(sizeof(block_call_t));
    call->format = RENDER_BLOCK_FORMAT;
    call->refs = 0;
    call->block = block;
    dl_append(dl, (packed_call_t *)call);
}

void dl_extend(displaylist_t *dl, displaylist_t *append) {
    int len = tack_len(&append->calls);
    for (int i = 0; i < len; i++) {
        // TODO: reference count
        dl_append(dl, tack_get(&append->calls, i));
    }
}

void dl_close(displaylist_t *dl) {
    dl->open = false;
}

void dl_call(displaylist_t *dl) {
    int len = tack_len(&dl->calls);
    for (int i = 0; i < len; i++) {
        packed_call_t *call = tack_get(&dl->calls, i);
        switch (call->format) {
            case RENDER_BLOCK_FORMAT: {
                block_t *block = ((block_call_t *)call)->block;
                bl_draw(block);
                bl_pollute(block);
                break;
            }
            default:
                glPackedCall(call);
                break;
        }
    }
}

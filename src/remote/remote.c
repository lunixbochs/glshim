#include <stdbool.h>
#include <stdio.h>

#include "gl/wrap/gles.h"
#include "glouija/glouija.h"

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "usage: %s <shm fd>\n", argv[0]);
        return 1;
    }
    if (glouija_init_server(atoi(argv[1]))) {
        fprintf(stderr, "error mapping shared memory\n");
        return 2;
    }

    while (1) {
        GlouijaCall c = {0};
        glouija_command_read(&c);
        if (c.args != 3) {
            fprintf(stderr, "Invalid remote command.\n");
            return 3;
        }
        packed_call_t *call = c.arg[0].data.block.data;
        int retsize = c.arg[1].data.ui;
        if (retsize > 0) {
            char retbuf[8];
            glIndexedCall(call, (void *)retbuf);
            GlouijaCall ret = {
                .args = 1,
                .type = GLO_CALL_TYPE_CALL,
                .arg = {
                    {.type = GLO_ARG_TYPE_BLOCK,
                    .data.block = {
                        .data = retbuf,
                        .size = retsize,
                        .free = true,
                    }}, 0,
                },
            };
            glouija_command_write(&ret);
        } else {
            glIndexedCall(call, NULL);
        }
        free(call);
    }
}

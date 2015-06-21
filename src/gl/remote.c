#include <stdio.h>
#include <unistd.h>

#include "glouija/glouija.h"
#include "wrap/gles.h"
#include "wrap/types.h"

void remote_spawn() {
    int fd = glouija_init_client();
    printf("%d\n", fd);
    int pid = fork();
    if (pid == 0) {
        char *argv[] = {"./remote", NULL, NULL};
        asprintf(&argv[1], "%d", fd);
        execve("./remote", argv, NULL);
    }
}

void remote_call(packed_call_t *call, void *ret_v) {
    int ret_size = INDEX_RET_SIZE[call->index];
    int pack_size = INDEX_PACKED_SIZE[call->index];
    if (ret_v == NULL) {
        ret_size = 0;
    }
    GlouijaCall c = {
        .args = 2,
        .type = GLO_CALL_TYPE_CALL,
        .arg = {
            {
                .type = GLO_ARG_TYPE_BLOCK,
                .data.block = {
                    .data = call,
                    .size = pack_size,
                    .free = true,
                },
            },
            {
                .type = GLO_ARG_TYPE_UINT,
                .data.ui = ret_size,
            },
            0,
        },
    };
    glouija_command_write(&c);
    if (ret_size) {
        GlouijaCall ret = {0};
        glouija_command_read(&ret);
        memcpy(ret_v, ret.arg[0].data.block.data, ret_size);
    }
}

int remote_serve(int fd) {
    if (glouija_init_server(fd)) {
        fprintf(stderr, "error mapping shared memory from fd %d\n", fd);
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

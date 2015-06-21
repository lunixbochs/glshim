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

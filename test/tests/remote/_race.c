#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

#include "glouija/glouija.h"
#include "remote.h"
#include "wrap/glpack.h"
#include "types.h"

#define RACE_COUNT 100000

int main(int argc, char **argv) {
    if (argc == 1) {
        int pid = remote_spawn(argv[0]);
        state.remote = 1;
        for (int i = 0; i < RACE_COUNT; i++) {
            glRectf(0, 0, 1, 1);
        }
        int status = 0;
        waitpid(pid, &status, 0);
        if (status) {
            fprintf(stderr, "Error from libgl_remote: %d\n", status);
            return 1;
        }
    } else {
        if (glouija_init_server(argv[1])) {
            fprintf(stderr, "Error mapping shared memory: %s\n", argv[1]);
            return 2;
        }
        for (int i = 0; i < RACE_COUNT - 1; i++) {
            GlouijaCall c;
            glouija_command_read(&c);
            if (c.args != 2) {
                fprintf(stderr, "Invalid remote_call received.\n");
                return 1;
            }
            packed_call_t *call = c.arg[1].data.block.data;
            if (call->index != REMOTE_BLOCK_DRAW) {
                fprintf(stderr, "Expected REMOTE_BLOCK_DRAW.\nGot: ");
                glIndexedPrint(call);
                return 1;
            }
            void *buf = call;
            block_t *block = remote_deserialize_block(buf);
            assert(block->len == 4);
        }
    }
    return 0;
}

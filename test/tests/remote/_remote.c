#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

#include "glouija/glouija.h"
#include "remote.h"
#include "wrap/glpack.h"
#include "types.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        int pid = remote_spawn(argv[0]);
        state.remote = 1;
        glRectf(0, 0, 1, 1);
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
        printf("got a block: %p (len: %d)\n", block, block->len);
        if (block->vert) {
            printf("vert: {\n");
            for (int i = 0; i < block->len; i++) {
                GLfloat *v = &block->vert[i * 3];
                printf("    %.2f, %.2f, %.2f,\n", v[0], v[1], v[2]);
            }
            printf("}\n");
        }
        if (block->normal) {
            printf("normal: {\n");
            for (int i = 0; i < block->len; i++) {
                GLfloat *v = &block->color[i * 3];
                printf("    %.2f, %.2f, %.2f,\n", v[0], v[1], v[2]);
            }
            printf("}\n");
        }
        if (block->color) {
            printf("color: {\n");
            for (int i = 0; i < block->len; i++) {
                GLfloat *v = &block->color[i * 4];
                printf("    %.2f, %.2f, %.2f, %.2f,\n", v[0], v[1], v[2], v[3]);
            }
            printf("}\n");
        }
        for (int i = 0; i < MAX_TEX; i++) {
            if (block->tex[i]) {
                printf("tex[%d]: {\n", i);
                for (int i = 0; i < block->len; i++) {
                    GLfloat *v = &block->color[i * 2];
                    printf("    %.2f, %.2f,\n", v[0], v[1]);
                }
                printf("}\n");
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

#include "glouija/glouija.h"
#include "remote.h"
#include "wrap/gles.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        int pid = remote_spawn(argv[0]);
        printf("%d\n", INDEX_PACKED_SIZE[glDrawArrays_INDEX]);
        remote_call(pack_glDrawArrays(GL_TRIANGLES, 0, 100), NULL);
        remote_call(pack_glDrawArrays(GL_TRIANGLES, 1, 100), NULL);
        remote_call(pack_glDrawArrays(GL_TRIANGLES, 2, 100), NULL);
        remote_call(pack_glDrawArrays(GL_TRIANGLES, 3, 100), NULL);
        remote_call(pack_glDrawArrays(GL_TRIANGLES, 4, 100), NULL);
        int status = 0;
        waitpid(pid, &status, 0);
        if (WEXITSTATUS(status)) {
            fprintf(stderr, "Error from libgl_remote.\n");
            return 1;
        }
    } else {
        int fd = atoi(argv[1]);
        if (glouija_init_server(fd)) {
            fprintf(stderr, "Error mapping shared memory from fd %d.\n", fd);
            return 2;
        }
        for (int i = 0; i < 5; i++) {
            GlouijaCall c;
            glouija_command_read(&c);
            if (c.args != 2) {
                fprintf(stderr, "Invalid remote_call received.\n");
                return 1;
            }
            packed_call_t *call = c.arg[0].data.block.data;
            glIndexedPrint(call);
        }
    }
    return 0;
}

#ifndef GL_REMOTE_H
#define GL_REMOTE_H
#include <stdlib.h>
#include "block.h"
#include "wrap/types.h"

#define REMOTE_BLOCK_DRAW -1
#define REMOTE_GL_GET -2

int remote_serve(int fd);
int remote_spawn(const char *path);
void *remote_serialize_block(block_t *block, size_t *size);
block_t *remote_deserialize_block(void *buf);
void remote_call(packed_call_t *call, void *ret_v);

void remote_block_draw(block_t *block);
void remote_gl_get(GLenum pname, GLenum type, GLvoid *params);

void remote_glEnable(GLenum cap);
void remote_glDisable(GLenum cap);
void remote_glEnableClientState(GLenum cap);
void remote_glDisableClientState(GLenum cap);
#endif

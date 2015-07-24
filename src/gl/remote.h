#ifndef GL_REMOTE_H
#define GL_REMOTE_H
#include <stdlib.h>
#include "block.h"
#include "wrap/types.h"

int remote_serve(int fd);
int remote_spawn(char *path);
void remote_block_draw(block_t *block);
void remote_serialize_block(block_t *block);
block_t *remote_deserialize_block(void *buf, size_t *size);
void remote_call(packed_call_t *call, void *ret_v);
#endif

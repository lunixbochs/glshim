#ifndef GL_REMOTE_H
#define GL_REMOTE_H
#include "wrap/types.h"

int remote_spawn(char *path);
void remote_call(packed_call_t *call, void *ret_v);
int remote_serve(int fd);
#endif

#ifndef GL_REMOTE_H
#define GL_REMOTE_H
void remote_spawn();
void remote_call(packed_call_t *call, void *ret_v);
#endif

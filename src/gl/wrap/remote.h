#include "glouija/glouija.h"
#include "./types.h"

int remote_local_pre(GlouijaCall *c, packed_call_t *call);
void remote_local_post(GlouijaCall *c, GlouijaCall *ret, packed_call_t *call, void *ret_v, size_t ret_size);
void remote_target_process(GlouijaCall *c, GlouijaCall *response, packed_call_t *call, void *ret);

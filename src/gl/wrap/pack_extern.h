#ifndef GLPACK_EXTERN_H
#define GLPACK_EXTERN_H

#include "../types.h"

extern const int INDEX_RET_SIZE[];
extern const int INDEX_PACKED_SIZE[];
extern const char *INDEX_NAME[];
extern void glPushCall(void *data);
extern void glIndexedCall(const packed_call_t *packed, void *ret_v);
extern void glIndexedPrint(const packed_call_t *packed);

#endif

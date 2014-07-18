#ifndef PACKED_TYPE_H
#define PACKED_TYPE_H
typedef struct {
    int format;
    void *func;
    int refs;
    void *args;
} packed_call_t;

typedef struct {
    int func;
    void *args;
} indexed_call_t;
#endif

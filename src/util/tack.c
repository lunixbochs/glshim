#include <stdint.h>
#include <stdlib.h>

#include "tack.h"

#define TACK_DEFAULT_SIZE 8

static void tack_grow(tack_t *stack, int idx) {
    if (stack->data == NULL) {
        stack->cap = TACK_DEFAULT_SIZE;
        stack->data = malloc(sizeof(void *) * stack->cap);
    } else if (stack->len + idx >= stack->cap) {
        stack->cap = MAX(stack->cap * 2, stack->len + idx);
        stack->data = realloc(stack->data, sizeof(void *) * stack->cap);
    }
}

void tack_push(tack_t *stack, void *data) {
    tack_grow(stack, 0);
    stack->data[stack->len++] = data;
}

static bool tack_pop_bad(tack_t *stack) { 
    return (stack == NULL || stack->len <= 0);
}

static bool tack_shift_bad(tack_t *stack) {
    return (stack == NULL || stack->pos >= stack->len);
}

void *tack_pop(tack_t *stack) { 
    if (tack_pop_bad(stack))
        return NULL;
    return stack->data[--stack->len];
}

void *tack_peek(tack_t *stack) {
    if (tack_pop_bad(stack))
        return NULL;
    return stack->data[stack->len - 1];
}

void *tack_get(tack_t *stack, int idx) {
    if (stack == NULL || idx < 0 || idx >= stack->len)
        return NULL;
    return stack->data[idx];
}

void tack_set(tack_t *stack, int idx, void *data) {
    tack_grow(stack, idx);
    stack->data[idx] = data;
}

void *tack_cur(tack_t *stack) {
    if (tack_shift_bad(stack))
        return NULL;
    return stack->data[stack->pos];
}

void *tack_shift(tack_t *stack) {
    if (tack_shift_bad(stack))
        return NULL;
    return stack->data[stack->pos++];
}

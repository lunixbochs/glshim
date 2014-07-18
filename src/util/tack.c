#include <stdint.h>
#include <stdlib.h>

#include "tack.h"

#define TACK_DEFAULT_SIZE 8

void tack_push(tack_t *stack, void *data) {
    if (stack->data == NULL) {
        stack->cap = TACK_DEFAULT_SIZE;
        stack->data = malloc(sizeof(void *) * stack->cap);
    } else if (stack->len == stack->cap) {
        stack->cap *= 2;
        stack->data = realloc(stack->data, sizeof(void *) * stack->cap);
    }
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

void *tack_first(tack_t *stack) {
    if (tack_pop_bad(stack))
        return NULL;
    return stack->data[0];
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

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "tack.h"

#ifndef MAX
# define MAX(a, b) (((a) > (b)) ? (a) : (b))
#endif

#define TACK_DEFAULT_SIZE 8

static bool tack_pop_bad(tack_t *stack) {
    return (stack == NULL || stack->len <= 0);
}

static bool tack_shift_bad(tack_t *stack) {
    return (stack == NULL || stack->pos >= stack->len);
}

static bool tack_grow(tack_t *stack, int idx) {
    if (stack->data == NULL) {
        stack->cap = TACK_DEFAULT_SIZE;
        stack->data = malloc(sizeof(void *) * stack->cap);
        if (stack->data != NULL) {
            return true;
        }
    } else if (MAX(stack->len, idx) >= stack->cap) {
        stack->cap = MAX(stack->cap * 2, stack->len + idx);
        void **new = realloc(stack->data, sizeof(void *) * stack->cap);
        if (new != NULL) {
            stack->data = new;
            return true;
        }
    } else {
        return true;
    }
    fprintf(stderr, "warning: tack_grow() to %d failed\n", stack->cap);
    return false;
}

void tack_clear(tack_t *stack) {
    free(stack->data);
    stack->data = NULL;
    stack->cap = 0;
    stack->len = 0;
}

int tack_len(tack_t *stack) {
    return stack->len;
}

void tack_push(tack_t *stack, void *data) {
    if (tack_grow(stack, 0)) {
        stack->data[stack->len++] = data;
    }
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
    stack->len = MAX(stack->len, idx + 1);
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

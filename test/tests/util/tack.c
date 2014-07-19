int main() {
    tack_t stack = {0};
    tack_push(&stack, 1);
    assert(tack_peek(&stack) == 1);
    assert(tack_len(&stack) == 1);

    tack_push(&stack, 2);
    tack_push(&stack, 3);
    assert(tack_get(&stack, 0) == 1);
    assert(tack_peek(&stack) == 3);
    assert(tack_pop(&stack) == 3);
    assert(tack_peek(&stack) == 2);

    tack_clear(&stack);
    assert(tack_len(&stack) == 0);

    for (int i = 0; i < 10000; i++) {
        tack_push(&stack, i);
        assert(tack_peek(&stack) == i);
    }
    for (int i = 0; i < 10000; i++) {
        assert(tack_shift(&stack) == i);
    }
}

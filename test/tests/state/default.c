#define check(name, ...) { \
    GLfloat tmp[] = __VA_ARGS__; \
    assert(memcmp(state.name, tmp, sizeof(tmp)) == 0);}

int main() {
    check(current.color, {1.0f, 1.0f, 1.0f, 1.0f});
    check(current.normal, {0.0f, 0.0f, 1.0f});
    for (int i = 0; i < MAX_TEX; i++) {
        check(current.tex[i], {0, 0});
        texgen_state_t *t = &state.texgen[i];
        assert(t->R == GL_EYE_LINEAR);
        assert(t->Q == GL_EYE_LINEAR);
        assert(t->S == GL_EYE_LINEAR);
        assert(t->T == GL_EYE_LINEAR);
    }
    mock_return;
}

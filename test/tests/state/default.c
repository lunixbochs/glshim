#define check(name, ...) { \
    GLfloat name[] = __VA_ARGS__; \
    assert(memcmp(state.current.name, name, sizeof(name)) == 0);}

int main() {
    check(color, {1.0f, 1.0f, 1.0f, 1.0f});
    check(normal, {0.0f, 0.0f, 1.0f});

    GLfloat tex[2] = {0};
    for (int i = 0; i < MAX_TEX; i++) {
        assert(memcmp(state.current.tex[i], tex, sizeof(GLfloat) * 2) == 0);
    }
    mock_return;
}

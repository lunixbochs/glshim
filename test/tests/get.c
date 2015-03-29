int main() {
    char b;
    int i;
    float f;
    glGetBooleanv(GL_MAX_ELEMENTS_INDICES, &b);
    glGetFloatv(GL_MAX_ELEMENTS_INDICES, &f);
    glGetIntegerv(GL_MAX_ELEMENTS_INDICES, &i);
    assert(f == i);
    assert(b == !!i);
    mock_return;
}

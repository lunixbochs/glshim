int main() {
    int list = glGenLists(1);
    glNewList(list, GL_COMPILE);
    mock_assert(state.list.active, "glNewList failed\n");
    mock_return;
}

int main() {
    glBegin(GL_TRIANGLES);
    glVertex3f(0, 1, 2);
    glVertex3f(3, 4, 5);
    glVertex3f(6, 7, 8);
    glEnd();

    test_glEnableClientState(GL_VERTEX_ARRAY);
    block_attr_t attr[] = {
        {.vert={0, 1, 2}},
        {.vert={3, 4, 5}},
        {.vert={6, 7, 8}},
    };
    test_glVertexPointer(3, GL_FLOAT, sizeof(block_attr_t), attr);
    test_glDrawArrays(GL_TRIANGLES, 0, 3);
    test_glDisableClientState(GL_VERTEX_ARRAY);
    mock_return;
}

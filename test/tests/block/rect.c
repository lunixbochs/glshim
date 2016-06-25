int main() {
    for (int i = 0; i < 3; i++) {
        glRectf(0, 0, 1, 1);

        test_glEnableClientState(GL_VERTEX_ARRAY);
        block_attr_t attr[] = {
            {.vert={0, 0, 0}},
            {.vert={1, 0, 0}},
            {.vert={1, 1, 0}},
            {.vert={0, 1, 0}},
        };
        test_glVertexPointer(3, GL_FLOAT, sizeof(block_attr_t), attr);
        test_glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
        test_glDisableClientState(GL_VERTEX_ARRAY);
    }
    mock_return;
}

int main() {
    for (int i = 0; i < 3; i++) {
        glRectf(0, 0, 1, 1);

        test_glEnableClientState(GL_VERTEX_ARRAY);
        GLfloat verts[] = {
            0, 0, 0,
            1, 0, 0,
            1, 1, 0,
            0, 1, 0,
        };
        test_glVertexPointer(3, GL_FLOAT, 0, verts);
        test_glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
        test_glDisableClientState(GL_VERTEX_ARRAY);
    }
    mock_return;
}

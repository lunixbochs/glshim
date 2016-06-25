#define clobber(x) do { unsigned char *tmp = (unsigned char *)x; for (int i = 0; i < sizeof(x); i++) tmp[i] = (unsigned char)(i + 1); } while(0);

int main() {
    // tex
    GLubyte tex1[] = {255, 255, 255, 255};
    GLubyte tex2[] = {255, 255, 255, 255};
    // mat
    GLfloat mat1[] = {
        1, 1, 1, 1,
        2, 2, 2, 2,
        3, 3, 3, 3,
        4, 4, 4, 4,
    };
    GLfloat mat2[16]; memcpy(mat2, mat1, sizeof(mat1));
    GLfloat mat_transpose[] = {
        1, 2, 3, 4,
        1, 2, 3, 4,
        1, 2, 3, 4,
        1, 2, 3, 4,
    };

    int list = glGenLists(1);
    glNewList(list, GL_COMPILE);

    // tex
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, tex1);
    glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, 1, 1, GL_RGBA, GL_UNSIGNED_BYTE, tex1);

    // mat
    glLoadMatrixf(mat1);
    glLoadTransposeMatrixf(mat1);
    glLoadIdentity();
    glMultMatrixf(mat1);
    glLoadIdentity();
    glMultTransposeMatrixf(mat1);

    glEndList();

    clobber(tex1);
    clobber(mat1);

    glCallList(list);

    // tex
    test_glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, tex2);
    test_glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, 1, 1, GL_RGBA, GL_UNSIGNED_BYTE, tex2);

    // mat
    test_glLoadMatrixf(mat2);
    test_glLoadMatrixf(mat_transpose);
    test_glLoadIdentity();
    test_glLoadMatrixf(mat_transpose); // TODO likely a bug
    test_glLoadIdentity();
    test_glLoadMatrixf(mat_transpose);

    mock_return;
}

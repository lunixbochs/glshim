#include <stdio.h>

#include "../util/mat4.h"
#include "mock.h"

static int err = 0;

int fcmp(float *a, float *b, size_t len) {
	for (size_t i = 0; i < len; i++)
		if (a[i] - b[i] > 0.00001 || b[i] - a[i] > 0.00001)
			return 1;
	return 0;
}

void ftest(char *desc, float *a, float *b, size_t len) {
	if (fcmp(a, b, len) == 0) {
		return;
	}
	printf("ERROR: Test failed: %s\n", desc);
	err = 1;

	for (int i = 0; i < len; i++) {
		if (i > 0 && i % 4 == 0) printf("\n");
		if (a[i] - b[i] > 0.00001 || b[i] - a[i] > 0.00001) {
			printf(VT100_RED "%.5f " VT100_CLEAR, a[i]);
		} else {
			printf("%.5f ", a[i]);
		}
	}
	printf("\n");
	for (int i = 0; i < len; i++) {
		if (i > 0 && i % 4 == 0) printf("\n");
		if (a[i] - b[i] > 0.00001 || b[i] - a[i] > 0.00001) {
			printf(VT100_RED "%.5f, " VT100_CLEAR, b[i]);
		} else {
			printf("%.5f, ", b[i]);
		}
	}
	printf("\n");
	printf("====================\n");
}

void mtest(char *desc, float *m1, mat4 *m42) {
	float m2[16] = {0};
	mat4_save(m42, m2);
	ftest(desc, m1, m2, 16);
}

float identity[] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
float mat1[] = {2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2};
float mat1x2[] = {4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4};
float mat2[] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4};
float mat2_transpose[] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};

float rot1[] = {1.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.98481, 0.17365, 0.00000, 0.00000, -0.17365, 0.98481, 0.00000, 0.00000, 0.00000, 0.00000, 1.00000};
float rot2[] = {0.93969, 0.05939, -0.33682, 0.00000, 0.00000, 0.98481, 0.17365, 0.00000, 0.34202, -0.16318, 0.92542, 0.00000, 0.00000, 0.00000, 0.00000, 1.00000};
float rot3[] = {0.81380, 0.54384, -0.20487, 0.00000, -0.46985, 0.82317, 0.31880, 0.00000, 0.34202, -0.16318, 0.92542, 0.00000, 0.00000, 0.00000, 0.00000, 1.00000};
float rot4[] = {0.37561, 0.87653, -0.30101, 0.00000, -0.48151, 0.46209, 0.74473, 0.00000, 0.79188, -0.13478, 0.59562, 0.00000, 0.00000, 0.00000, 0.00000, 1.00000};
float scale[] = {2.00000, 0.00000, 0.00000, 0.00000, 0.00000, 3.00000, 0.00000, 0.00000, 0.00000, 0.00000, 4.00000, 0.00000, 0.00000, 0.00000, 0.00000, 1.00000};
float translate[] = {1.00000, 0.00000, 0.00000, 0.00000, 0.00000, 1.00000, 0.00000, 0.00000, 0.00000, 0.00000, 1.00000, 0.00000, 2.00000, 3.00000, 4.00000, 1.00000};

float ortho[] = {0.00625, 0.00000, 0.00000, 0.00000, 0.00000, -0.00833, 0.00000, 0.00000, 0.00000, 0.00000, -2.00000, 0.00000, -1.00000, 1.00000, -1.00000, 1.00000};
float frustum[] = {0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 1.00000, -1.00000, -1.00000, -1.00000, 0.00000, 0.00000, 0.00000, 0.00000};
float perspective[] = {0.39689, 0.00000, 0.00000, 0.00000, 0.00000, 0.52919, 0.00000, 0.00000, 0.00000, 0.00000, -1.00200, -1.00000, 0.00000, 0.00000, -2.00200, 0.00000};

int main() {
	float tmp1[16], tmp2[16];

	mat4 m = mat4_new();
	mtest("new/identity", identity, &m);

	mat4_identity(&m);
	mtest("identity", identity, &m);

	mat4_load(&m, mat1);
	mtest("load/save", mat1, &m);

	mat4_load(&m, mat2);
	mat4_transpose(&m);
	mtest("transpose/1", mat2_transpose, &m);

	mat4_load(&m, mat2_transpose);
	mat4_transpose(&m);
	mtest("transpose/2", mat2, &m);

	mat4 m2 = mat4_new();
	mat4_load(&m, mat1);
	mat4_load(&m2, mat1);
	mat4_mul(&m, &m2);
	mtest("mul", mat1x2, &m);

	mat4_identity(&m);
	mat4_rotate(&m, 10, 1, 0, 0);
	mtest("rot/1", rot1, &m);
	mat4_rotate(&m, 20, 0, 1, 0);
	mtest("rot/2", rot2, &m);
	mat4_rotate(&m, 30, 0, 0, 1);
	mtest("rot/3", rot3, &m);
	mat4_rotate(&m, 40, 1, 1, 1);
	mtest("rot/4", rot4, &m);

	mat4_identity(&m);
	mat4_scale(&m, 2, 3, 4);
	mtest("scale", scale, &m);

	mat4_identity(&m);
	mat4_translate(&m, 2, 3, 4);
	mtest("translate", translate, &m);

	mat4_identity(&m);
	mat4_ortho(&m, 0, 320, 240, 0, 0, 1);
	mtest("ortho", ortho, &m);

	mat4_identity(&m);
	mat4_frustum(&m, 0, 320, 240, 0, 0, 1);
	mtest("frustum", frustum, &m);

	mat4_identity(&m);
	mat4_perspective(&m, 65, 320 / 240.0, 1, 1000);
	mtest("perspective", perspective, &m);

	float v1[4] = {0}, v2[4] = {0};
	mat4_identity(&m);
	mat4_mul_vec2(&m, v1, v2);
	ftest("vec2*ident", v1, v2, 4);
	mat4_mul_vec3(&m, v1, v2);
	ftest("vec3*ident", v1, v2, 4);
	mat4_mul_vec4(&m, v1, v2);
	ftest("vec4*ident", v1, v2, 4);

	float v3[4]   = {1, 2, 3, 1};
	float v3_r[4] = {-2, 1, 3, 1};
	float v3_s[4] = {2, 6, 12, 1};
	float v3_t[4] = {3, 5, 7, 1};

    float v4[4] = {0};

	mat4_identity(&m);
	mat4_rotate(&m, 90, 0, 0, 1);
	mat4_mul_vec4(&m, v4, v3);
	ftest("vec/rot", v4, v3_r, 4);

	mat4_identity(&m);
	mat4_scale(&m, 2, 3, 4);
    mat4_mul_vec4(&m, v4, v3);
	ftest("vec/scale", v4, v3_s, 4);

	mat4_identity(&m);
    mat4_translate(&m, 2, 3, 4);
    mat4_mul_vec4(&m, v4, v3);
	ftest("vec/translate", v4, v3_t, 4);

	// TODO perspective mul vec3 to show window coord?

	return err;
}

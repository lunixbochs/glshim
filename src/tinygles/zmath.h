#ifndef __ZMATH__
#define __ZMATH__

/* Matrix & Vertex */

typedef struct {
	float m[4][4];
} M4;

typedef struct {
	float m[3][3];
} M3;

typedef struct {
	 float m[3][4];
} M34;


#define X v[0]
#define Y v[1]
#define Z v[2]
#define W v[3]

typedef struct {
	 float v[3];
} V3;

typedef struct {
	 float v[4];
} V4;
	
int  gl_V3_Norm(V3 *a);
V3 gl_V3_New(float x,float y,float z);
V4 gl_V4_New(float x,float y,float z,float w);

#endif // __ZMATH__

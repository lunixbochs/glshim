/* Some simple mathematical functions. Don't look for some logic in
   the function names :-) */

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "zmath.h"

/* vector arithmetic */

int gl_V3_Norm(V3 *a) {
    float n;
    n = sqrt(a->X * a->X + a->Y * a->Y + a->Z * a->Z);
    if (n == 0) return 1;
    a->X /= n;
    a->Y /= n;
    a->Z /= n;
    return 0;
}

V3 gl_V3_New(float x, float y, float z) {
    V3 a;
    a.X = x;
    a.Y = y;
    a.Z = z;
    return a;
}

V4 gl_V4_New(float x, float y, float z, float w) {
    V4 a;
    a.X = x;
    a.Y = y;
    a.Z = z;
    a.W = w;
    return a;
}

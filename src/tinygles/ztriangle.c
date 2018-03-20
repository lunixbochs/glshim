#include <stdlib.h>
#include "zbuffer.h"

#define ZCMP(z, zpix) ((z) >= (zpix))

void ZB_fillTriangleFlat(ZBuffer *zb, ZBufferPoint *p0, ZBufferPoint *p1, ZBufferPoint *p2) {
int color;

#define INTERP_Z

#define DRAW_INIT() \
    { \
        color = RGB_TO_PIXEL(p2->r, p2->g, p2->b); \
    }

#define PUT_PIXEL(_a) \
    { \
        zz = z >> ZB_POINT_Z_FRAC_BITS; \
        if (ZCMP(zz, pz[_a])) { \
            pp[_a] = color; \
            pz[_a] = zz; \
        } \
        z += dzdx; \
    }

#include "ztriangle.h"
}

/*
 * Smooth filled triangle.
 * The code below is very tricky :)
 */

void ZB_fillTriangleSmooth(ZBuffer *zb, ZBufferPoint *p0, ZBufferPoint *p1, ZBufferPoint *p2) {
#define INTERP_Z
#define INTERP_RGB

#define SAR_RND_TO_ZERO(v, n) (v / (1 << n))

#define DRAW_INIT() \
    { \
    }

#define PUT_PIXEL(_a) \
    { \
        zz = z >> ZB_POINT_Z_FRAC_BITS; \
        if (ZCMP(zz, pz[_a])) { \
            pp[_a] = RGB_TO_PIXEL(or1, og1, ob1); \
            pz[_a] = zz; \
        } \
        z += dzdx; \
        og1 += dgdx; \
        or1 += drdx; \
        ob1 += dbdx; \
    }

#ifdef __ARM_NEON__
#define DRAW_LINE() \
{ \
    register PIXEL *pp; \
    register int n; \
    register unsigned short *pz; \
    register unsigned short z, zz; \
    register unsigned short or1, og1, ob1; \
    n = (x2 >> 16) - x1; \
    pp = (PIXEL *)((char *)pp1 + x1 * PSZB); \
    /* INTERP_Z */ \
    pz = pz1 + x1; \
    z = z1; \
    /* INTERP_RGB */ \
    or1 = r1; \
    og1 = g1; \
    ob1 = b1; \
    unsigned short multiplier[4] = {0, 1, 2, 3}; \
    asm volatile ( \
        /* local vectors z, or1, og1, ob1 */ \
        "zzz .req d0\n"  /* d0     q0 */ \
        "red .req d1\n"  /* d1        */ \
        "grn .req d2\n"  /* d2     q1 */ \
        "blu .req d3\n"  /* d3        */ \
        /* {x4, x4, x4, x4} d*dx vectors */ \
        "dlz .req d4\n"  /* d4     q2 */ \
        "dlr .req d5\n"  /* d5        */ \
        "dlg .req d6\n"  /* d6     q3 */ \
        "dlb .req d7\n"  /* d7        */ \
        /* output pixel halves        */ \
        "rgba .req q4\n" /* d8     q4 */ \
        "rg  .req d8\n"  /* d8     q4 */ \
        "ba  .req d9\n"  /* d9        */ \
        /* local memory copies        */ \
        "pz  .req d10\n" /* d10    q5 */ \
        "zz2 .req d11\n"  /* d11       */ \
        "dst .req q6\n"  /* d12-13 q6 */ \
        "ds1 .req d12\n" /* d12    q6 */ \
        "ds2 .req d13\n" /* d13       */ \
        /* zbuf and pixel output masks are filled with a z test */ \
        "zma .req d14\n" /* d14    q7 */ \
        /* left-side half-pixel mask  */ \
        "lma .req d15\n" /* d15       */ \
        "pma .req q8\n"  /* d16    q8 */ \
        /* temporary vectors:         */ \
        /* initial {x0, x1, x2, x3} d*dx vectors */ \
        "tlz .req d8\n"  /* d8     q4 */ \
        "tlr .req d9\n"  /* d9        */ \
        "tlg .req d10\n" /* d10    q5 */ \
        "tlb .req d11\n" /* d11       */ \
        /* initial {x0, x1, x2, x3} multiplier */ \
        "tml .req d12\n" /* d12       */ \
        /* preload pixel and zbuf */ \
        "pld [%[pp]]\n" \
        "pld [%[pz]]\n" \
        /* early terminate condition */ \
        "cmp %[n], #3\n" \
        "blt .end\n" \
        /* 0xFF00 mask */ \
        "vmov.u16 lma, #0xFF00\n" \
        /* multiplier */ \
        "vld1.16 {tml}, [%[multiplier]]\n" \
        /* duplicate and align our locals */ \
        "vdup.16 zzz, %[z]\n" \
        "vdup.16 red, %[r1]\n" \
        "vdup.16 grn, %[g1]\n" \
        "vdup.16 blu, %[b1]\n" \
        /* load delta vectors */ \
        "vdup.u16 tlz, %[dzdx]\n" \
        "vdup.u16 tlr, %[drdx]\n" \
        "vdup.u16 tlg, %[dgdx]\n" \
        "vdup.u16 tlb, %[dbdx]\n" \
        "vdup.u16 dlz, %[dzdx]\n" \
        "vdup.u16 dlr, %[drdx]\n" \
        "vdup.u16 dlg, %[dgdx]\n" \
        "vdup.u16 dlb, %[dbdx]\n" \
        /* multiply delta vectors */ \
        "vmul.u16 tlz, tml\n" \
        "vmul.u16 tlr, tml\n" \
        "vmul.u16 tlg, tml\n" \
        "vmul.u16 tlb, tml\n" \
        "vmov.u16 tml, #4\n" \
        "vmul.u16 dlz, tml\n" \
        "vmul.u16 dlr, tml\n" \
        "vmul.u16 dlg, tml\n" \
        "vmul.u16 dlb, tml\n" \
        /* set initial z+color vector states */ \
        "vadd.u16 zzz, zzz, tlz\n" \
        "vadd.u16 red, red, tlr\n" \
        "vadd.u16 grn, grn, tlg\n" \
        "vadd.u16 blu, blu, tlb\n" \
        /* skip partway into the loop */ \
        /* to save some duplicate instructions later */ \
        "b .first\n" \
        ".loop:\n" \
            "vadd.u16 zzz, zzz, dlz\n" \
            "vadd.u16 red, red, dlr\n" \
            "vadd.u16 grn, grn, dlg\n" \
            "vadd.u16 blu, blu, dlb\n" \
            "vshr.u16 zz2, zzz, %[zb_point_z_frac_bits]\n" \
            ".first:\n" \
            /* pixel countdown */ \
            "sub %[n], %[n], #4\n" \
            /* load zbuf */ \
            "vld1.16 {pz}, [%[pz]]\n" \
            /* make z mask from z vec >= zbuf */ \
            "vcge.u16 zma, zz2, pz\n" \
            /* load dst pixels */ \
            "vld1.32 {dst}, [%[pp]]\n" \
            /* convert mask and load red, blue into rgba pixel */ \
            "vand.16 rg, red, lma\n" \
            "vand.16 ba, blu, lma\n" \
            /* extend z mask to 32-bits for pixel output */ \
            "vmovl.s16 pma, zma\n" \
            /* convert inject green into (rg)ba pixel */ \
            "vsri.16 rg, grn, #8\n" \
            /* use z mask to update passing zbuf and pixels */ \
            "vbit pz, zz2, zma\n" \
            "vbit dst, rgba, pma\n" \
            /* store updated pixel and zbuf to memory */ \
            "vst1.16 {pz}, [%[pz]]!\n" \
            /* TODO: make sure this pixel store is right */ \
            "vst2.32 {ds1, ds2}, [%[pp]]!\n" \
            /* get started on preloading, because ! increments */ \
            "pld [%[pz], #8]\n" \
            "pld [%[pp], #32]\n" \
            /* continue if we have at least 4 pixels left */ \
            "cmp %[n], #3\n" \
            "bge .loop\n" \
        "vadd.u16 zzz, zzz, dlz\n" \
        "vadd.u16 red, red, dlr\n" \
        "vadd.u16 grn, grn, dlg\n" \
        "vadd.u16 blu, blu, dlb\n" \
        "vmov.u16 %[z], zzz[0]\n" \
        "vmov.u16 %[r1], red[0]\n" \
        "vmov.u16 %[g1], grn[0]\n" \
        "vmov.u16 %[b1], blu[0]\n" \
        ".end:\n" \
        : [z]"+r"(z), [r1]"+r"(or1), [g1]"+r"(og1), [b1]"+r"(ob1), \
          [n]"+r"(n), [pp]"+r"(pp), [pz]"+r"(pz) \
        /* TODO: use pixel width %[pw]? */ \
        : [dzdx]"r"(dzdx), [drdx]"r"(drdx), [dgdx]"r"(dgdx), [dbdx]"r"(dbdx), \
          [multiplier]"r"(multiplier), \
          [zb_point_z_frac_bits]"i"(ZB_POINT_Z_FRAC_BITS), \
          [pw]"i"(4 * PSZB) \
        : "q0", "q1", "q2", "q3", "q4", "q5", "q6", "q7", "q8" \
    ); \
    while (n >= 0) { \
        PUT_PIXEL(0); \
        /* INTERP_Z */ \
        pz += 1; \
        pp = (PIXEL *)((char *)pp + PSZB); \
        n -= 1; \
    } \
}
#endif

#include "ztriangle.h"
}

void ZB_setTexture(ZBuffer *zb, PIXEL *texture) {
    zb->current_texture=texture;
}

void ZB_fillTriangleMapping(ZBuffer *zb, ZBufferPoint *p0, ZBufferPoint *p1, ZBufferPoint *p2) {
    PIXEL *texture;

#define INTERP_Z
#define INTERP_ST

#define DRAW_INIT() \
    { \
        texture = zb->current_texture; \
    }

#define PUT_PIXEL(_a) \
    { \
        zz = z >> ZB_POINT_Z_FRAC_BITS; \
        if (ZCMP(zz, pz[_a])) { \
            pp[_a] = texture[((t & 0x3FC00000) | s) >> 14]; \
            pz[_a] = zz; \
        } \
        z += dzdx; \
        s += dsdx; \
        t += dtdx; \
    }

#include "ztriangle.h"
}

/*
 * Texture mapping with perspective correction.
 * We use the gradient method to make less divisions.
 * TODO: pipeline the division
 */

void ZB_fillTriangleMappingPerspective(ZBuffer *zb, ZBufferPoint *p0, ZBufferPoint *p1, ZBufferPoint *p2) {
    PIXEL *texture;
    float fdzdx, fndzdx, ndszdx, ndtzdx;

#define INTERP_Z
#define INTERP_STZ

#define NB_INTERP 8

#define DRAW_INIT() \
    { \
        texture = zb->current_texture;\
        fdzdx = (float)dzdx;\
        fndzdx = NB_INTERP * fdzdx;\
        ndszdx = NB_INTERP * dszdx;\
        ndtzdx = NB_INTERP * dtzdx;\
    }


#define PUT_PIXEL(_a) \
    { \
        zz = z >> ZB_POINT_Z_FRAC_BITS; \
        if (ZCMP(zz, pz[_a])) { \
            pp[_a] = *(PIXEL *)((char *)texture + \
                    (((t & 0x3FC00000) | (s & 0x003FC000)) >> (17 - PSZSH)));\
            pz[_a] = zz; \
        } \
        z += dzdx; \
        s += dsdx; \
        t += dtdx; \
    }

#define DRAW_LINE() \
    { \
        register unsigned short *pz; \
        register PIXEL *pp; \
        register unsigned int s, t, z, zz; \
        register int n, dsdx, dtdx; \
        float sz, tz, fz, zinv; \
        n = (x2 >> 16) - x1; \
        fz = (float)z1; \
        zinv = 1.0 / fz; \
        pp = (PIXEL *)((char *)pp1 + x1 * PSZB); \
        pz = pz1 + x1; \
        z = z1; \
        sz = sz1; \
        tz = tz1; \
        while (n >= (NB_INTERP - 1)) { \
            { \
                float ss, tt; \
                ss = (sz * zinv); \
                tt = (tz * zinv); \
                s = (int)ss; \
                t = (int)tt; \
                dsdx = (int)((dszdx - ss*fdzdx) * zinv); \
                dtdx = (int)((dtzdx - tt*fdzdx) * zinv); \
                fz += fndzdx; \
                zinv = 1.0 / fz; \
            } \
            PUT_PIXEL(0); \
            PUT_PIXEL(1); \
            PUT_PIXEL(2); \
            PUT_PIXEL(3); \
            PUT_PIXEL(4); \
            PUT_PIXEL(5); \
            PUT_PIXEL(6); \
            PUT_PIXEL(7); \
            pz += NB_INTERP; \
            pp = (PIXEL *)((char *)pp + NB_INTERP * PSZB);\
            n -= NB_INTERP; \
            sz += ndszdx;\
            tz += ndtzdx;\
        } \
        { \
            float ss, tt; \
            ss = (sz * zinv); \
            tt = (tz * zinv); \
            s =(int) ss; \
            t =(int) tt; \
            dsdx = (int)((dszdx - ss*fdzdx)*zinv); \
            dtdx = (int)((dtzdx - tt*fdzdx)*zinv); \
        }\
        while (n >= 0) { \
            PUT_PIXEL(0); \
            pz+=1; \
            pp=(PIXEL *)((char *)pp + PSZB);\
            n-=1; \
        } \
    }
  
#include "ztriangle.h"
}

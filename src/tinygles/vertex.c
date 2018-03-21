#include "zgl.h"

void tglNormal3f(GLfloat x, GLfloat y, GLfloat z) {
    GLContext *c = gl_get_context();
    c->current.normal.X = x;
    c->current.normal.Y = y;
    c->current.normal.Z = z;
    c->current.normal.W = 0;
}

void tglTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
    GLContext *c = gl_get_context();
    c->current.tex_coord.X = s;
    c->current.tex_coord.Y = t;
    c->current.tex_coord.Z = r;
    c->current.tex_coord.W = q;
}

void tglEdgeFlag(GLboolean flag) {
    GLContext *c = gl_get_context();
    c->current.edge_flag = flag;
}

void tglColor4f(GLfloat r, GLfloat g, GLfloat b, GLfloat a) {
    GLContext *c = gl_get_context();
    c->current.color.X = r;
    c->current.color.Y = g;
    c->current.color.Z = b;
    c->current.color.W = a;

    c->current.longcolor[0] = (unsigned int) (r * (ZB_POINT_RED_MAX - ZB_POINT_RED_MIN) + ZB_POINT_RED_MIN);
    c->current.longcolor[1] = (unsigned int) (g * (ZB_POINT_GREEN_MAX - ZB_POINT_GREEN_MIN) + ZB_POINT_GREEN_MIN);
    c->current.longcolor[2] = (unsigned int) (b * (ZB_POINT_BLUE_MAX - ZB_POINT_BLUE_MIN) + ZB_POINT_BLUE_MIN);

    if (c->material.color.enabled) {
        GLfloat color[4] = {r, g, b, a};
        tglMaterialfv(c->material.color.current_mode, c->material.color.current_type, color);
    }
}


void gl_eval_viewport(GLContext * c) {
    GLViewport *v;
    float zsize = (1 << (ZB_Z_BITS + ZB_POINT_Z_FRAC_BITS));

    v = &c->viewport;

    v->trans.X = ((v->xsize - 0.5) / 2.0) + v->xmin;
    v->trans.Y = ((v->ysize - 0.5) / 2.0) + v->ymin;
    v->trans.Z = ((zsize - 0.5) / 2.0) + ((1 << ZB_POINT_Z_FRAC_BITS)) / 2;

    v->scale.X = (v->xsize - 0.5) / 2.0;
    v->scale.Y = -(v->ysize - 0.5) / 2.0;
    v->scale.Z = -((zsize - 0.5) / 2.0);
}

void tglBegin(GLenum type) {
    GLContext *c = gl_get_context();
    assert(c->in_begin == 0);

    c->begin_type = type;
    c->in_begin = 1;
    c->vertex_n = 0;
    c->vertex_cnt = 0;

    if (c->matrix.model_projection_updated) {

        if (c->light.enabled) {
            /* precompute inverse modelview */
            mat4_inverse(&c->matrix.model_view, &c->matrix.model_view_inv);
            mat4_transpose(&c->matrix.model_view_inv);
        } else {
            c->matrix.model_projection = c->matrix.projection;
            mat4_mul(&c->matrix.model_projection, &c->matrix.model_view);
        }

        /* test if the texture matrix is not Identity */
        c->matrix.apply_texture = !mat4_is_identity(&c->matrix.texture);
        c->matrix.model_projection_updated = 0;
    }
    /*  viewport */
    if (c->viewport.updated) {
        gl_eval_viewport(c);
        c->viewport.updated = 0;
    }
    /* triangle drawing functions */
    switch (c->polygon_mode_front) {
        case GL_POINT:
            c->draw_triangle_front = gl_draw_triangle_point;
            break;
        case GL_LINE:
            c->draw_triangle_front = gl_draw_triangle_line;
            break;
        default:
            c->draw_triangle_front = gl_draw_triangle_fill;
            break;
    }

    switch (c->polygon_mode_back) {
        case GL_POINT:
            c->draw_triangle_back = gl_draw_triangle_point;
            break;
        case GL_LINE:
            c->draw_triangle_back = gl_draw_triangle_line;
            break;
        default:
            c->draw_triangle_back = gl_draw_triangle_fill;
            break;
    }
}

/* coords, tranformation , clip code and projection */
/* TODO : handle all cases */
static inline void gl_vertex_transform(GLContext *c, GLVertex *v) {
    V4 *n;

    if (c->light.enabled) {
        /* eye coordinates needed for lighting */
        mat4_mul_vec4(&c->matrix.model_view, v->ec.v, v->coord.v);

        /* projection coordinates */
        mat4_mul_vec4(&c->matrix.projection, v->pc.v, v->ec.v);
        mat4_mul_vec3(&c->matrix.model_view_inv, v->normal.v, c->current.normal.v);
        if (c->normalize_enabled) {
            gl_V3_Norm(&v->normal);
        }
    } else {
        /* no eye coordinates needed, no normal */
        /* NOTE: W = 1 is assumed */
        mat4_mul_vec4(&c->matrix.model_projection, v->pc.v, v->coord.v);
    }

    v->clip_code = gl_clipcode(v->pc.X, v->pc.Y, v->pc.Z, v->pc.W);
}

void tglVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
    GLContext *c = gl_get_context();
    GLVertex *v;
    int n, i, cnt;

    assert(c->in_begin != 0);

    n = c->vertex_n;
    cnt = c->vertex_cnt;
    cnt++;
    c->vertex_cnt = cnt;

    /* quick fix to avoid crashes on large polygons */
    if (n >= c->vertex_max) {
        GLVertex *newarray;
        c->vertex_max <<= 1;	/* just double size */
        newarray = malloc(sizeof(GLVertex) * c->vertex_max);
        if (!newarray) {
            fprintf(stderr, "unable to allocate GLVertex array.\n");
        }
        memcpy(newarray, c->vertex, n * sizeof(GLVertex));
        free(c->vertex);
        c->vertex = newarray;
    }
    /* new vertex entry */
    v = &c->vertex[n];
    n++;

    v->coord.X = x;
    v->coord.Y = y;
    v->coord.Z = z;
    v->coord.W = w;

    gl_vertex_transform(c, v);

    /* color */

    if (c->light.enabled) {
        gl_shade_vertex(c, v);
    } else {
        v->color = c->current.color;
    }

    /* tex coords */
    if (c->texture.enabled_2d) {
        if (c->matrix.apply_texture) {
            mat4_mul_vec4(&c->matrix.texture, v->tex_coord.v, c->current.tex_coord.v);
        } else {
            v->tex_coord = c->current.tex_coord;
        }
    }

    /* precompute the mapping to the viewport */
    if (v->clip_code == 0)
        gl_transform_to_viewport(c, v);

    /* edge flag */

    v->edge_flag = c->current.edge_flag;

    switch (c->begin_type) {
        case GL_POINTS:
            gl_draw_point(c, &c->vertex[0]);
            n = 0;
            break;
        case GL_LINES:
            if (n == 2) {
                gl_draw_line(c, &c->vertex[0], &c->vertex[1]);
                n = 0;
            }
            break;
        case GL_LINE_STRIP:
        case GL_LINE_LOOP:
            if (n == 1) {
                c->vertex[2] = c->vertex[0];
            } else if (n == 2) {
                gl_draw_line(c, &c->vertex[0], &c->vertex[1]);
                c->vertex[0] = c->vertex[1];
                n = 1;
            }
            break;
        case GL_TRIANGLES:
            if (n == 3) {
                gl_draw_triangle(c, &c->vertex[0], &c->vertex[1], &c->vertex[2]);
                n = 0;
            }
            break;
        case GL_TRIANGLE_STRIP:
            if (cnt >= 3) {
                if (n == 3)
                    n = 0;
                /* needed to respect triangle orientation */
                switch(cnt & 1) {
                    case 0:
                        gl_draw_triangle(c, &c->vertex[2], &c->vertex[1], &c->vertex[0]);
                        break;
                    default:
                    case 1:
                        gl_draw_triangle(c, &c->vertex[0], &c->vertex[1], &c->vertex[2]);
                        break;
                }
            }
            break;
        case GL_TRIANGLE_FAN:
            if (n == 3) {
                gl_draw_triangle(c, &c->vertex[0], &c->vertex[1], &c->vertex[2]);
                c->vertex[1] = c->vertex[2];
                n = 2;
            }
            break;
        case GL_QUADS:
            if (n == 4) {
                c->vertex[2].edge_flag = 0;
                gl_draw_triangle(c, &c->vertex[0], &c->vertex[1], &c->vertex[2]);
                c->vertex[2].edge_flag = 1;
                c->vertex[0].edge_flag = 0;
                gl_draw_triangle(c, &c->vertex[0], &c->vertex[2], &c->vertex[3]);
                n = 0;
            }
            break;
        case GL_QUAD_STRIP:
            if (n == 4) {
                gl_draw_triangle(c, &c->vertex[0], &c->vertex[1], &c->vertex[2]);
                gl_draw_triangle(c, &c->vertex[1], &c->vertex[3], &c->vertex[2]);
                for (i = 0; i < 2; i++)
                    c->vertex[i] = c->vertex[i + 2];
                n = 2;
            }
            break;
        case GL_POLYGON:
            break;
        default:
            fprintf(stderr, "glBegin: type %x not handled\n", c->begin_type);
    }

    c->vertex_n = n;
}

void tglEnd() {
    GLContext *c = gl_get_context();
    assert(c->in_begin == 1);

    if (c->begin_type == GL_LINE_LOOP) {
        if (c->vertex_cnt >= 3) {
            gl_draw_line(c, &c->vertex[0], &c->vertex[2]);
        }
    } else if (c->begin_type == GL_POLYGON) {
        int i = c->vertex_cnt;
        while (i >= 3) {
            i--;
            gl_draw_triangle(c, &c->vertex[i], &c->vertex[0], &c->vertex[i - 1]);
        }
    }
    c->in_begin = 0;
}

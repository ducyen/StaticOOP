#ifndef __SHAPE_SPEC_H__
#define __SHAPE_SPEC_H__

typedef union tagSHAPE{
    struct{ SHAPE_CLASS }   as_SHAPE;
#ifdef CIRCLE_CLASS
    struct{ CIRCLE_CLASS }  as_CIRCLE;
#endif
#ifdef SQUARE_CLASS
    struct{ SQUARE_CLASS }  as_SQUARE;
#endif
#ifdef RCTNGL_CLASS
    struct{ RCTNGL_CLASS }  as_RCTNGL;
#endif
}SHAPE;

#endif//__SHAPE_SPEC_H__

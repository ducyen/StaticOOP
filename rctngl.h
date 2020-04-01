#ifndef __RCTNGL_H__
#define __RCTNGL_H__

#include "square.h"

/* ---------------------------- RCTNGL ---------------------------- */
#define RCTNGL_CLASS    \
    SQUARE_CLASS        \
    int length;

#define RCTNGL_Init( x, y, w, l )   \
    SQUARE_Init( x, y,w )           \
    .length = l,                 
#define RCTNGL_Ctor( ... )  { .as_RCTNGL = { .type = OBJ_RCTNGL, P( RCTNGL_Init( __VA_ARGS__ ) ) } }
#undef  RCTNGL_Func
#define RCTNGL_Func( func, me, ... )   SHAPE_IsKindOf( ( me ), OBJ_RCTNGL ) ? func( ( me ), ##__VA_ARGS__ ):

int RCTNGL_CalcArea( SHAPE* me );
int RCTNGL_CalcPeri( SHAPE* me );

#endif//__RCTNGL_H__

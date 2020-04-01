#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "shape.h"

/* ---------------------------- SQUARE ---------------------------- */
#define SQUARE_CLASS    \
    SHAPE_CLASS         \
    int width;

#define SQUARE_Init( x, y, w )  \
    SHAPE_Init( x, y )          \
    .width = w,
#define SQUARE_Ctor( ... )  { .as_SQUARE = { .type = OBJ_SQUARE, P( SQUARE_Init( __VA_ARGS__ ) ) } }
#undef  SQUARE_Func
#define SQUARE_Func( func, me, ... )   ( me )->as_SHAPE.type == OBJ_SQUARE ? func( ( me ), ##__VA_ARGS__ ):

int SQUARE_CalcArea( SHAPE* me );
int SQUARE_CalcPeri( SHAPE* me );
int SQUARE_HasRtAgl( SHAPE* me );

#endif//__SQUARE_H__

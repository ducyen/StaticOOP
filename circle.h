#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "shape.h"

/* ---------------------------- CIRCLE ---------------------------- */
#define CIRCLE_CLASS    \
    SHAPE_CLASS         \
    int radius;

#define CIRCLE_Init( x, y, r )  \
    SHAPE_Init( x, y )          \
    .radius = r,                
#define CIRCLE_Ctor( ... )  { .as_CIRCLE = { .type = OBJ_CIRCLE, P( CIRCLE_Init( __VA_ARGS__ ) ) } }
#undef  CIRCLE_Func
#define CIRCLE_Func( func, me, ... )   SHAPE_IsKindOf( ( me ), OBJ_CIRCLE ) ? (ENCODE( HASH_KEY, func )( ( me ), ##__VA_ARGS__ )):

VIRTUAL_DECL( int, CIRCLE_CalcArea, SHAPE* me );
VIRTUAL_DECL( int, CIRCLE_CalcPeri, SHAPE* me );
VIRTUAL_DECL( int, CIRCLE_HasRtAgl, SHAPE* me );

#endif//__CIRCLE_H__

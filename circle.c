/* gcc -fms-extensions */

#include <stdio.h>
#include "circle.h"
#include "shape_internal.h"

/*----------------------------------------------------------------------*/
#define VIRTUAL_IMPL( returnType, funcName, ... )                           \
static returnType funcName( __VA_ARGS__ );                                  \
returnType da39a3ee5e6b4b0d3255bfef95601890afd80709##funcName( __VA_ARGS__ ) __attribute__ ((alias (#funcName))); \
static returnType funcName( __VA_ARGS__ )

VIRTUAL_IMPL( int, CIRCLE_CalcArea, 
    SHAPE* me 
){
    return 2 * 3.14 * me->as_CIRCLE.radius;
}

/*----------------------------------------------------------------------*/
VIRTUAL_IMPL( int, CIRCLE_CalcPeri, 
    SHAPE* me 
){
    return 3 * me->as_CIRCLE.radius * me->as_CIRCLE.radius;
}

/*----------------------------------------------------------------------*/
VIRTUAL_IMPL( int, CIRCLE_HasRtAgl, 
    SHAPE* me 
){
    return 0;
}


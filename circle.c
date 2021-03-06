/* gcc -fms-extensions */

#include <stdio.h>
#include "circle.h"
#include "shape_internal.h"

/*----------------------------------------------------------------------*/
int CIRCLE_CalcArea( 
    SHAPE* me 
){
    return 2 * 3.14 * me->as_CIRCLE.radius;
}

/*----------------------------------------------------------------------*/
int CIRCLE_CalcPeri( 
    SHAPE* me 
){
    return 3 * me->as_CIRCLE.radius * me->as_CIRCLE.radius;
}

/*----------------------------------------------------------------------*/
int CIRCLE_HasRtAgl( 
    SHAPE* me 
){
    return 0;
}

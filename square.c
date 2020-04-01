/* gcc -fms-extensions */

#include <stdio.h>

#include "square.h"
#include "shape_internal.h"
/*----------------------------------------------------------------------*/
int SQUARE_CalcArea( 
    SHAPE* me 
){
    return me->as_SQUARE.width * me->as_SQUARE.width;
}

/*----------------------------------------------------------------------*/
int SQUARE_CalcPeri( 
    SHAPE* me 
){
    return me->as_SQUARE.width * 4;
}

/*----------------------------------------------------------------------*/
int SQUARE_HasRtAgl( 
    SHAPE* me 
){
    return 1;
}

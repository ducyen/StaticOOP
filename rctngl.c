/* gcc -fms-extensions */

#include <stdio.h>
#include "rctngl.h"
#include "shape_internal.h"
/*----------------------------------------------------------------------*/
int RCTNGL_CalcArea( 
    SHAPE* me 
){
    return me->as_RCTNGL.width * me->as_RCTNGL.length;
 }

/*----------------------------------------------------------------------*/
int RCTNGL_CalcPeri( 
    SHAPE* me 
){
    return 2 * ( me->as_RCTNGL.width + me->as_RCTNGL.length );
}

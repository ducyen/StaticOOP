#include <stdio.h>

#include "circle.h"
#include "square.h"
#include "rctngl.h"
#include "shape_internal.h"

/* ---------------------------- MAIN ---------------------------- */
int main(void) {
    SHAPE c = CIRCLE_Ctor(1, 2, 2);
    printf( "Circle area: %d\n", SHAPE_CalcArea( &c ) );
    printf( "Circle peri: %d\n", SHAPE_CalcPeri( &c ) );
    printf( "Circle has right angle: %d\n", SHAPE_HasRtAgl( &c ) );
    
    SHAPE s = SQUARE_Ctor(2, 3, 2);
    printf( "Square area: %d\n", SHAPE_CalcArea( &s ) );
    printf( "Square peri: %d\n", SHAPE_CalcPeri( &s ) );
    printf( "Square has right angle: %d\n", SHAPE_HasRtAgl( &s ) );

    SHAPE r = RCTNGL_Ctor(3, 4, 2, 3);
    printf( "Rectangle area: %d\n", SHAPE_CalcArea( &r ) );
    printf( "Rectangle peri: %d\n", SHAPE_CalcPeri( &r ) );
    printf( "Rectangle has right angle: %d\n", SHAPE_HasRtAgl( &r ) );

    getchar();

    return 0;
}
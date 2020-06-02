#include <stdio.h>

#include "builder.h"

/* ---------------------------- MAIN ---------------------------- */
int main(void) {
    SHAPE* c = Builder_Create( OBJ_CIRCLE );
    printf( "Circle area: %d\n", SHAPE_CalcArea( c ) );
    printf( "Circle peri: %d\n", SHAPE_CalcPeri( c ) );
    printf( "Circle has right angle: %d\n", SHAPE_HasRtAgl( c ) );
    
    SHAPE* s = Builder_Create( OBJ_SQUARE );
    printf( "Square area: %d\n", SHAPE_CalcArea( s ) );
    printf( "Square peri: %d\n", SHAPE_CalcPeri( s ) );
    printf( "Square has right angle: %d\n", SHAPE_HasRtAgl( s ) );

    SHAPE* r = Builder_Create( OBJ_RCTNGL );
    printf( "Rectangle area: %d\n", SHAPE_CalcArea( r ) );
    printf( "Rectangle peri: %d\n", SHAPE_CalcPeri( r ) );
    printf( "Rectangle has right angle: %d\n", SHAPE_HasRtAgl( r ) );

    return 0;
}

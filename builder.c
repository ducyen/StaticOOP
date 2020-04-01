#include <stdio.h>

#include "builder.h"
#include "shape_internal.h"

SHAPE* Builder_Create( int type ){
    if( type == OBJ_CIRCLE ){
        static SHAPE c = CIRCLE_Ctor(1, 2, 2);    
        return &c;
    }else if( type == OBJ_SQUARE ){
        static SHAPE s = SQUARE_Ctor(2, 3, 2);
        return &s;
    }else if( type == OBJ_RCTNGL ){
        static SHAPE r = RCTNGL_Ctor(3, 4, 2, 3);
        return &r;
    }else{
        return 0;
    }
}

int SHAPE_IsKindOf( SHAPE* me, int type ){
    if( me->as_SHAPE.type == type){
        return 1;
    }
    return 0;
}

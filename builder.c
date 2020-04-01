#include <stdio.h>

#include "builder.h"
#include "circle.h"
#include "square.h"
#include "rctngl.h"
#include "shape_internal.h"

SHAPE* Builder_Create( OBJECT_TYPE type ){
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

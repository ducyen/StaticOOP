#include "circle.h"
#include "square.h"
#include "rctngl.h"

typedef enum{
#ifdef CIRCLE_CLASS
    OBJ_CIRCLE,
#endif
#ifdef SQUARE_CLASS
    OBJ_SQUARE,
#endif
#ifdef RCTNGL_CLASS
    OBJ_RCTNGL,
#endif
}OBJECT_TYPE;

SHAPE* Builder_Create( int type );
int SHAPE_IsKindOf( SHAPE* me, int type );

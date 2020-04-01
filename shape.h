#ifndef __SHAPE_H__
#define __SHAPE_H__

/* ---------------------------- SHAPE ---------------------------- */
#define SHAPE_CLASS     \
    int type;           \
    int cbSize;         \
    int pos_x;          \
    int pos_y;              

#define SHAPE_Init( x, y )      \
    .cbSize = sizeof( SHAPE ),  \
    .pos_x = x,                 \
    .pos_y = y,

#define SHAPE_CalcArea( me, ... )  CIRCLE_Func( CIRCLE_CalcArea, me, ##__VA_ARGS__ ) SQUARE_Func( SQUARE_CalcArea, me, ##__VA_ARGS__ ) RCTNGL_Func( RCTNGL_CalcArea, me, ##__VA_ARGS__ ) 0
#define SHAPE_CalcPeri( me, ... )  CIRCLE_Func( CIRCLE_CalcPeri, me, ##__VA_ARGS__ ) SQUARE_Func( SQUARE_CalcPeri, me, ##__VA_ARGS__ ) RCTNGL_Func( RCTNGL_CalcPeri, me, ##__VA_ARGS__ ) 0
#define SHAPE_HasRtAgl( me, ... )  CIRCLE_Func( CIRCLE_HasRtAgl, me, ##__VA_ARGS__ ) SQUARE_Func( SQUARE_HasRtAgl, me, ##__VA_ARGS__ ) RCTNGL_Func( SQUARE_HasRtAgl, me, ##__VA_ARGS__ ) 0

typedef union tagSHAPE SHAPE;
#endif//__SHAPE_H__

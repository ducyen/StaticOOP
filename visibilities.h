#ifndef __VISIBILITIES_H__
#define __VISIBILITIES_H__

typedef struct tagVISIBILITIES VISIBILITIES;

#endif//__VISIBILITIES_H__


#if !defined( VISIBILITIES_CLASS ) && ( defined( __VISIBILITIES_C__ ) || defined( __BUILDER_C__ ) )
#define VISIBILITIES_CLASS
typedef struct tagVISIBILITIES{
    int x;
    char y;
}VISIBILITIES;
#endif//__VISIBILITIES_INTERNAL__ && VISIBILITIES_CLASS


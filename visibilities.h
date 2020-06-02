#ifndef __VISIBILITIES_H__
#define __VISIBILITIES_H__

typedef struct tagVISIBILITIES VISIBILITIES;

#endif//__VISIBILITIES_H__

#if defined( __BUILDER_INTERNAL__ )
#define __VISIBILITIES_INTERNAL__
#endif

#if defined( __VISIBILITIES_INTERNAL__ ) && !defined( VISIBILITIES_CLASS )
#define VISIBILITIES_CLASS
typedef struct tagVISIBILITIES{
    int x;
    char y;
}VISIBILITIES;
#endif//__VISIBILITIES_INTERNAL__ && VISIBILITIES_CLASS


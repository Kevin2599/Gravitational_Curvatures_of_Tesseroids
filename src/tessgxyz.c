/*
Program to calculate gxyz of a tesseroid model on a set of points.
*/
/* ==================================================================================
 /* ==================================================================================
 /* ==================================================================================
 /* ==================================================================================
 /* Created by Xiao-Le Deng (Email: xldeng@whu.edu.cn)
 /* Date: 2017/1/8
 TESSEROID_GXYZ_SIZE_RATIO needs to be changed
 /* ==================================================================================
 /* ==================================================================================
 /* ==================================================================================
 /* ==================================================================================
 */

#include "constants.h"
#include "grav_tess.h"
#include "tessg_main.h"


/** Main */
int main(int argc, char **argv)
{
    return run_tessg_main(argc, argv, "tessgxyz", &tess_gxyz,
                          TESSEROID_GXYZ_SIZE_RATIO);
}

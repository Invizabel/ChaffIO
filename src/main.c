#include <stdio.h>
#include "engine.h"
#include "models.h"

int main()
{
    int x = 9;
    int y = 3;
    int z = 2;
    int f = 70;
    int d = 10;
    int div = divide(x,y);
    int * proj = project(x,y,z,f);
    int * aff = affine(x,y,z,d);
    printf("divide: %d; affine: (%d, %d, %d); project: (%d, %d)\n", div, aff[1], aff[1], aff[2], proj[0], proj[1]);
    return 0;
}
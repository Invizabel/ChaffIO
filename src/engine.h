int screenWidth = 128;
int screenHeight = 64;
int focal = 7;
int xArray;
int xyArray[2];
int xyzArray[3];
int xyrgbArray[5];

// Credit: https://personal.math.ubc.ca/~cass/courses/m309-03a/a1/olafson/affine_fuctions.htm AND https://www.tutorialspoint.com/computer_graphics/computer_graphics_affine_transformation.htm
int * affine(int x, int y, int z, int d)
{
    xyzArray[0] = x + d;
    xyzArray[1] = y + d;
    xyzArray[2] = z + d;
    return xyzArray;
}

int divide(int x, int y)
{
    xArray = 0;
    for (int i = 0; i < x; i += y)
    {
        xArray += 1;
    }

    return xArray;
}

int * project(int x, int y, int z, int f)
{
    if (z == 0)
    {
        xyArray[0] = f * x;
        xyArray[1] = f * y;
    }
    else
    {
        xyArray[0] = f * divide(x, z);
        xyArray[1] = f * divide(y, z);
    }
    return xyArray;
}
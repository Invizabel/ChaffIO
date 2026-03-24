#include "engine.h"

int pixelArray[128*64][3];

void pipeline(int r, int g, int b, int vertices[128*64][3])
{
    int sizeOfModel = divide(sizeof(vertices[0]), sizeof(vertices[0][0]));
    // we will check what pixel color here
    for (int i = 0; i < sizeOfModel; i++)
    {
        int isInFrame = scanline(vertices[i][0], vertices[i][1], vertices[i][2], focal);
        if (isInFrame)
        {
            int * proj = project(vertices[i][0], vertices[i][1], vertices[i][2], focal);
            pixelArray[proj[0] + proj[1]][0] = r;
            pixelArray[proj[0] + proj[1]][1] = g;
            pixelArray[proj[0] + proj[1]][2] = b;
        }
    }
}
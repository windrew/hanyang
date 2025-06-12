#include <stdio.h>
#include "pointmath.h"

Point* getScale2xPoint(const Point* a)
{
    Point* ret;
    ret->xpos = a->xpos*2;
    ret->ypos = a->ypos*2;
    return ret;
}
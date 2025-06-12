#include <stdio.h>
#include <stdlib.h>
#include "pointmath.h"

int main()
{
    Point* n = malloc(sizeof(Point));
    scanf("%d %d",&n->xpos,&n->ypos);
    n = getScale2xPoint(n);
    printf("%d %d",n->xpos,n->ypos);
}
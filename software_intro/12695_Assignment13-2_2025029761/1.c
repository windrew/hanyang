#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int xpos;
    int ypos;
}Point;

int main()
{
    Point* p = (Point*) malloc(6 * sizeof(Point));

    scanf("%d %d",&(p->xpos),&(p->ypos));

    printf("%d %d",p->xpos,p->ypos);

    free(p);
}
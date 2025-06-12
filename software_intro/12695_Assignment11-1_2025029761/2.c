#include <stdio.h>
#include <string.h>

typedef struct {
    int xpos;
    int ypos;
   } Point;

int main()
{
    Point p;
    scanf("%d %d",&p.xpos,&p.ypos);
    p.xpos *= 2;
    p.ypos *= 2;
    printf("%d %d",p.xpos,p.ypos);
    return 0;
}
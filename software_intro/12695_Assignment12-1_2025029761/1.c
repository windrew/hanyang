#include <stdio.h>
#define pi 3.141592

int main()
{
    double r;
    scanf("%lf",&r);
    printf("Perimeter: %lf\n",2*pi*r);
    printf("Area: %lf",pi*r*r);
    return 0;
}
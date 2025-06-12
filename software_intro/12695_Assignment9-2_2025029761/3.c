#include <stdio.h>

int main()
{
    int i;
    double a[5],s = 0;
    double *parr = a;

    for(i=0;i<5;i++)
    {
        scanf("%lf",parr);
        *parr = *parr * 2;
        parr++;
    }

    parr = a;

    for(i=0;i<5;i++)
    {
        printf("%lf\n",*(parr+i));
        s += *(parr+i);
    }

    printf("sum: %lf",s);

    return 0;
}
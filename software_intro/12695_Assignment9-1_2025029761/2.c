#include <stdio.h>

int main()
{
    int i;
    double d;
    char c;

    scanf("%d %lf %c",&i,&d,&c);

    int* pi = &i;
    double* pd = &d;
    char* pc = &c;

    printf("i: %d, %p\n",i,pi);
    printf("d: %lf, %p\n",d,pd);
    printf("c: %c, %p\n\n",c,pc);

    *pi += 1;
    *pd += 1;
    *pc += 1;

    printf("i+1: %d\n",i);
    printf("d+1: %lf\n",d);
    printf("c+1: %c\n\n",c);

    printf("size of pi: %d\n",sizeof(pi));
    printf("size of pd: %d\n",sizeof(pd));
    printf("size of pc: %d",sizeof(pc));

    return 0;
}
#include <stdio.h>

int gMul = 1;

int addTotal(int n)
{
    int s = 0;
    while(n)
    {
        s += n--;
    }
    return s;
}

void mulTotal(int n)
{
    while(n)
    {
        gMul *= n--;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("addTotal(): %d\n",addTotal(n));
    mulTotal(n);
    printf("gMul: %d\n",gMul);
    return 0;
}
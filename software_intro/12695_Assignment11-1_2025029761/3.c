#include <stdio.h>

void getSumDiff(int a, int b, int* pSum, int* pDiff)
{
    *pSum = a + b;
    *pDiff = a - b;
}

int main()
{
    int sum,diff,a,b;
    scanf("%d %d",&a,&b);
    getSumDiff(a,b,&sum,&diff);
    printf("sum: %d\ndiff:%d",sum,diff);
    return 0;
}
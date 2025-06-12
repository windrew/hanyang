#include <stdio.h>

int ncr(int n,int r)
{
    if(n < 0)return 0;
    if(n == r)return 1;
    return ncr(n-1,r-1) + ncr(n-1,r);
}

int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    printf("%d",ncr(n,r));
}
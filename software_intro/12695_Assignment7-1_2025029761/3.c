#include <stdio.h>

int add(int n)
{
    if(n)return n + add(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",add(n));
}
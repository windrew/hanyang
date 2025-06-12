#include <stdio.h>

int main()
{
    int n = 1;
    int s = 0;
    while(n != 0)
    {
        scanf("%d",&n);
        s += n;
    }
    printf("sum: %d",s);
}
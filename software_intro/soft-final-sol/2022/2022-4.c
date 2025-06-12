#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,a,n,s=0,mn = 0,mx = 0;
    printf("How many inputs? ");
    scanf("%d",&n);
    r = n;
    if(n >= 1)
    {
        n--;
        scanf("%d",&a);
        s += a;
        mn = a;
        mx = a;
    }
    while(n--)
    {
        scanf("%d",&a);
        s += a;
        if(a < mn)mn = a;
        if(a > mx)mx = a;
    }
    printf("min: %d\nmax: %d\nsum: %d\naverage: %.2lf",mn,mx,s,(double)s/r);
}
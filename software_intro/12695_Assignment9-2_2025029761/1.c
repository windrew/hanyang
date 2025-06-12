#include <stdio.h>

int main()
{
    int i,a[5],mx,mn,s = 0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    mx = a[0];
    mn = a[0];
    for(i=0;i<5;i++)
    {
        s += a[i];
        if(mx < a[i])mx = a[i];
        if(mn > a[i])mn = a[i];
    }
    printf("min: %d\n",mn);
    printf("max: %d\n",mx);
    printf("sum: %d",s);
}
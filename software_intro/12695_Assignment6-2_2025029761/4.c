#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<i+1;j++)
        {
            if(j == i)printf("*");
            else printf("* ");
        }
        printf("\n");
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf(" ");
        }
        for(j=0;j<n-i-1;j++)
        {
            if(j == n-i-2)printf("*");
            else printf("* ");
        }
        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    int n,i = 0,j;
    scanf("%d",&n);
    while(i < n)
    {
        j = 0;
        while(j < n-i-1)
        {
            printf(" ");
            j += 1;
        }
        j = 0;
        while(j < i+1)
        {
            if(j == i)printf("*");
            else printf("* ");
            j += 1;
        }
        printf("\n");
        i += 1;
    }
    i = 0;
    while(i < n-1)
    {
        j = 0;
        while(j < i+1)
        {
            printf(" ");
            j += 1;
        }
        j = 0;
        while(j < n-i-1)
        {
            if(j == n-i-2)printf("*");
            else printf("* ");
            j += 1;
        }
        printf("\n");
        i += 1;
    }
}
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i = 0;
    while(i < n)
    {
        int j = 0;
        while(j < i+1)
        {
            printf("%d ",j+1);
            j += 1;
        }
        printf("\n");
        i += 1;
    }
    i = 0;
    while(i < n)
    {
        int j = 0;
        while(j < n-i)
        {
            printf("%d ",j+1);
            j += 1;
        }
        printf("\n");
        i += 1;
    }
}
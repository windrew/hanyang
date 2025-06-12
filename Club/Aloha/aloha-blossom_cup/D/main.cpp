#include <stdio.h>

int main()
{
    int i,j,n = 10,cnt = 1,f = 3;
    printf("128\n");
    for(i=1;i<=n;i+=2)
    {
        for(j=1;j<=n;j+=2)
        {
            printf("max(%d,%d)\n",i,j);
            f += 1;
            printf("minus(%d,%d,%d)\n",i,j,cnt);
            printf("minus(%d,%d,%d)\n",i,j+1,cnt);
            printf("minus(%d,%d,%d)\n",i+1,j,cnt);
            printf("minus(%d,%d,%d)\n",i+1,j+1,cnt++);
            f += 4;
        }
    }
    printf("min(9,9)\n");
    printf("minus(10,10,%d)\n",cnt);
    printf("submit(10,10)\n");
    //printf("%d",f);
}

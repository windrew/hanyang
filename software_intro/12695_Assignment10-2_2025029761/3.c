#include <stdio.h>

int d[260];

int main()
{
    int i,len;
    char a[15];
    scanf("%s",a);
    len = strlen(a);
    for(i=0;i<strlen(a);i++)
    {
        d[a[i]] += 1;
    }
    for(i=0;i<260;i++)
    {
        if(d[i] >= 1)
        {
            printf("'%c': %d\n",i,d[i]);
        }
    }
    return 0;
}
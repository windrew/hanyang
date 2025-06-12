#include <stdio.h>

int main()
{
    int i;
    char a[15];
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i] >= 'a')a[i] -= 'a' - 'A';
        else a[i] -= 'A' - 'a';
    }
    printf("%s",a);
    return 0;
}
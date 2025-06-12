#include <stdio.h>

int main()
{
    int i=0;
    char s[10005];
    scanf("%s",s);
    for(;*(s+i) != '\0';i++){}
    printf("%d",i);
}
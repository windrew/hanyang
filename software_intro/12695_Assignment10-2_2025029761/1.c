#include <stdio.h>
#include <string.h>

int main()
{
    int i,len;
    char a[15];
    scanf("%s",a);
    len = strlen(a);
    for(i=0;i<len/2;i++)
    {
        if(a[i] != a[len-i-1])break;
    }
    if(i == len/2)printf("This is a palindrome");
    else printf("This is not a palindrome");
    return 0;
}
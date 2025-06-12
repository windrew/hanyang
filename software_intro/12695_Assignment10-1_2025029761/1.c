#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char a[15],b[15],c[25];
    scanf("%s %s",a,b);
    printf("str1: %s\n",a);
    printf("str2: %s\n",b);
    printf("length of str1: %d\n",strlen(a));
    printf("length of str2: %d\n",strlen(b));
    for(i=0;i<strlen(a);i++)
    {
        c[i] = a[i];
    }
    for(i=strlen(a);i<strlen(a)+strlen(b);i++)
    {
        c[i] = b[i-strlen(a)];
    }
    c[strlen(a)+strlen(b)]='\0';
    printf("str1+str2: %s\n",c);
    if(strlen(a)!=strlen(b))
    {
        printf("not same");
    }
    else
    {
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]!=b[i])break;
        }
        if(i==strlen(a))printf("same");
        else printf("not same");
    }
    return 0;
}
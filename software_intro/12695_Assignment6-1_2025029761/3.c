#include <stdio.h>

int main()
{
    while(1)
    {
        char c,d;
        scanf("%c%c",&c,&d);
        if('a' <= c && c <= 'z')printf("%c\n",c-'a'+'A');
        else if('A' <= c && c <= 'Z')printf("%c\n",c-'A'+'a');
        else if('0' <= c && c <= '9')printf("%c\n",c);
        else break;
    }
    printf("exit");
}
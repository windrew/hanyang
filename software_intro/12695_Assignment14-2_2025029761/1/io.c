#include "io.h"
#include <stdio.h>

void getString(char* buf, int size, const char* prompt)
{
    int i;
    char b;
    scanf("%c",&b);
    printf("%s",prompt);
    for(i=0;i<size;i++)
    {
        scanf("%c",(buf+i));
        if(*(buf+i)=='\0'||*(buf+i)=='\n')break;
    }
    *(buf+i) = '\0';
}

int getInt(const char* prompt)
{
    int x;
    printf("%s", prompt);
    scanf("%d",&x);
    return x;
}

void printAccount(const Account* acc)
{
    printf("Name: %s | Balance: %d\n",acc->name,acc->balance);
}
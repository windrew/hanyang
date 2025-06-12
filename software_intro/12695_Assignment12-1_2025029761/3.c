#include <stdio.h>

char s[3][6] = {{'O','n','e'},{'T','w','e'},{'T','h','r','e','e'}};

void printString(const char* str)
{
    int i;
    printf("%s\n",str);
}

int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printString(s[i]);
    }
    return 0;
}
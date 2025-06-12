#include <stdio.h>
#include <stdlib.h>

char *my_strstr(const char *haystack, const char *needle)
{
    int i,j;
    for(i=0;;i++)
    {
        if(haystack[i] == '\0')break;
    }
    int hlen = i;
    for(i=0;;i++)
    {
        if(needle[i] == '\0')break;
    }
    int nlen = i;
    if(nlen == 0)return (char *)haystack;
    for(i=0;i<hlen;i++)
    {
        for(j=i;j<nlen+i;j++)
        {
            if(j > hlen)break;
            if(haystack[j] != needle[j-i])break;
        }
        if(j == nlen + i)
        {
            return (char *)(haystack + i);
        }
    }
    return NULL;
}

int main() // There's no main function in real test.
{
    char *result;
    result = my_strstr("abcde", "a");
    printf("Result: %c\n",*result);
    result = my_strstr("abcde", "");
    printf("Result: %c\n",*result);
}
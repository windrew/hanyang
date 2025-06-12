#include <stdio.h>

char s[1000005];

int main()
{
    int n;
    scanf("%d",&n);
    scanf("%s",s);
    if(s[0]=='B'||s[n-1]=='A')printf("No");
    else printf("Yes");
}

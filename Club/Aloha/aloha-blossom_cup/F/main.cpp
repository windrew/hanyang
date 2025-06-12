#include <stdio.h>
#include <algorithm>
using namespace std;

char s[100005];

int main()
{
    int i,n,ans = 0,r=100005;
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='B')ans++;
    }
    r = ans;
    for(i=0;i<n;i++)
    {
        if(s[i]=='B')ans--;
        else ans++;
        r = min(r,ans);
    }
    printf("%d",r);
}

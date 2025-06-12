#include <stdio.h>
#include <algorithm>
using namespace std;

int d[250005],f[10000005],ans;

void up(int st)
{
    if(f[st]>0 && f[st+1]>0)
    {
        int p = min(f[st],f[st+1]);
        ans -= p;
        f[st] -= p;
        f[st+1] -= p;
        f[st+2] += p;
        up(st+1);
    }
}

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&d[i]);
        f[d[i]]++;
        ans += 1;
        if(f[1]+f[2]>=3)
        {
            f[3] += 1;
            f[2] = 0;
            f[1] = 0;
            ans -= 1;
        }
        up(d[i]-1);
        up(d[i]);
        printf("%d ",ans);
    }
}

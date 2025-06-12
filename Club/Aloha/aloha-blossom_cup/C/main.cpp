#include <stdio.h>

int p[5005],q1[5005],q2[5005],cnt1,cnt2;

int main()
{
    int i,j,n,l = 1,r,f = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
        if(p[i]%2!=i%2)
        {
            if(i%2)q1[cnt1++] = p[i];
            else q2[cnt2++] = p[i];
        }
    }
    printf("10000\n");
    for(i=1;i<=cnt1;i++)
    {
        int v;
        for(j=1;j<=n;j++)
        {
            if(p[j]==q1[i-1])break;
        }
        v = j;
        for(j=i*2-1;j<=(v+i*2-1)/2;j++)
        {
            int temp = p[j];
            p[j] = p[v+i*2-1-j];
            p[v+i*2-1-j] = temp;
        }
        if(i*2-1 != v)
        {
            printf("%d %d\n",i*2-1,v);
            f++;
        }
        for(j=1;j<=n;j++)
        {
            if(p[j]==q2[i-1])break;
        }
        v = j;
        for(j=i*2;j<=(v+i*2)/2;j++)
        {
            int temp = p[j];
            p[j] = p[v+i*2-j];
            p[v+i*2-j] = temp;
        }
        if(i*2 != v)
        {
            printf("%d %d\n",i*2,v);
            f++;
        }
    }
    if(cnt1 != 0)
    {
        for(i=1;i<=cnt1;i++)
        {
            int temp = p[i];
            p[i] = p[cnt1*2+1-i];
            p[cnt1*2+1-i] = temp;
        }
        printf("%d %d\n",1,cnt1*2);
        f++;
    }
    l = 1;
    r = n;
    while(l<r)
    {
        int v;
        for(i=1;i<=n;i++)
        {
            if(p[i]==l)break;
        }
        v = i;
        for(i=l;i<=(v+l)/2;i++)
        {
            int temp = p[i];
            p[i] = p[v+l-i];
            p[v+l-i] = temp;
        }
        printf("%d %d\n",l,v);
        f++;
        if(l >= r)break;
        for(i=1;i<=n;i++)
        {
            if(p[i]==r)break;
        }
        v = i;
        for(i=v;i<=(v+r)/2;i++)
        {
            int temp = p[i];
            p[i] = p[v+r-i];
            p[v+r-i] = temp;
        }
        printf("%d %d\n",v,r);
        f++;
        l++;
        r--;
    }
    for(i=0;i<10000-f;i++)
    {
        printf("1 1\n");
    }
}

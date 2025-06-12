#include <stdio.h>

int main()
{
    int a[5];
    int *p = a;
    int i;

    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }

    int *st = a;
    int *en = a + 4;
    while (st < en)
    {
        int temp = *st;
        *st = *en;
        *en = temp;
        st++;
        en--;
    }

    for(i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
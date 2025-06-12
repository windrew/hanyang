#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    int** arr = (int**) malloc(3 * sizeof(int*));
    for(i=0;i<3;i++)
    {
        arr[i] = (int*) malloc(2 * sizeof(int*));
        for(j=0;j<2;j++)
        {
            arr[i][j] = i*2+j+1;
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        free(arr[i]);
    }

    free(arr);

    return 0;
}
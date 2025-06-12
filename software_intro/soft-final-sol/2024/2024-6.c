#include <stdio.h>
#include <stdlib.h>

void *my_realloc(void *ptr, size_t old_size, size_t new_size)
{
    if(ptr == NULL)return malloc(new_size);
    if(new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    void *temp = malloc(new_size);
    char *p = (char*) ptr;
    char *t = (char*) temp;
    int i;

    if(temp == NULL)
    {
        return ptr;
    }

    if(new_size > old_size)
    {
        for(i=0;i<old_size;i++)
        {
            t[i] = p[i];
        }
    }
    else
    {
        for(i=0;i<new_size;i++)
        {
            t[i] = p[i];
        }
    }
    free(ptr);
    return temp;
}

int main() // There's no main function in real test.
{
    int *arr = (int*) malloc(5 * sizeof(int));

    for(int i=0;i<5;i++)
    {
        arr[i] = i + 1;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int *new_arr = (int*)my_realloc(arr, 5*sizeof(int), 10*sizeof(int));

    for(int i=5;i<10;i++)
    {
        new_arr[i] = (i + 1) * 10;
    }

    for(int i=0;i<10;i++)
    {
        printf("%d ", new_arr[i]);
    }
    printf("\n");

    int *smaller_arr = (int*)my_realloc(new_arr, 10 * sizeof(int), 3 * sizeof(int));

    for (int i=0;i<3;i++)
    {
        printf("%d ", smaller_arr[i]);
    }
    printf("\n");

    free(smaller_arr);
    return 0;
}

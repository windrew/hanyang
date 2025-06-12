#include <stdio.h>

char arr[2][5] = {"aaa","bbb"};

void swap(char* p1,char* p2)
{
    for(int i=0;i<3;i++)
    {
        char temp = *(p1+i);
        *(p1+i) = *(p2+i);
        *(p2+i) = temp;
    }
}

void printArray()
{
    printf("Array [0]:%s, [1]:%s,\n",arr[0],arr[1]);
}

int main()
{
    printArray();
    swap(arr[0],arr[1]);
    printArray();
}
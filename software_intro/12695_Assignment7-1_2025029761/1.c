#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

float div(int x, int y)
{
    return (float)x / (float)y;
}

int mod(int x, int y)
{
    return x % y;
}

void printMsg()
{
    printf("completed");
}

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("sum: %d\n",add(a,b));
    printf("difference: %d\n",sub(a,b));
    printf("product: %d\n",mul(a,b));
    printf("division: %f\n",div(a,b));
    printf("remainder: %d\n",mod(a,b));
    printMsg();
    return 0;
}
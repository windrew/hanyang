#include <stdio.h>

struct user
{
    char name[15];
    int age;
}a;


int main()
{
    scanf("%s %d",a.name,&a.age);
    printf("name: %s\nage: %d",a.name,a.age);
}
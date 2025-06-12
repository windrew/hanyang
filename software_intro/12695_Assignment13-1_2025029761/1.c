#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printString(char* str)
{
    printf("%s\n",str);
}

int main()
{
    char* one = (char*) malloc(6 * sizeof(char));
    char* two = (char*) malloc(6 * sizeof(char));
    char* three = (char*) malloc(6 * sizeof(char));

    strcpy(one,"One");
    strcpy(two,"Two");
    strcpy(three,"Three");

    printString(one);
    printString(two);
    printString(three);

    free(one);
    free(two);
    free(three);
}
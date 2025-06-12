#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[7];
    int score;
} Person;

void printScoreStars(Person* persons, int len)
{
    int i,j;
    for(i=0;i<len;i++)
    {
        printf("%s\t",persons[i].name);
        for(j=0;j<persons[i].score/5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int i,len = 0;
    Person* p1 = (Person*) malloc(sizeof(Person) * 0);
    while(1)
    {
        Person* r = (Person*) malloc(sizeof(Person) * len);
        Person a;
        scanf("%s %d",a.name,&a.score);
        if(strcmp(a.name,"END") == 0 && a.score == 0)
        {
            free(r);
            break;
        }
        for(i=0;i<len;i++)
        {
            strcpy(r[i].name,p1[i].name);
            r[i].score = p1[i].score;
        }
        free(p1);
        len++;
        p1 = (Person*) malloc(sizeof(Person) * len);
        for(i=0;i<len-1;i++)
        {
            strcpy(p1[i].name,r[i].name);
            p1[i].score = r[i].score;
        }
        strcpy(p1[len-1].name,a.name);
        p1[len-1].score = a.score;
        free(r);
    }
    printScoreStars(p1, len);
    free(p1);
    return 0;
}
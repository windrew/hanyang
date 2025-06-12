#include <stdio.h>

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
    Person p1[3];
    for(int i=0;i<3;i++)
    {
        scanf("%s %d",p1[i].name,&p1[i].score);
    }
    printScoreStars(p1, 3);
    return 0;
}
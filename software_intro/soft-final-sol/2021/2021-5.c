#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   char name[21];
   double age;
}person;


int main()
{
    person *persons = (person*) malloc(1 * sizeof(person));
    int len = 0,i;
    while(1)
    {
        printf("Input[%d]\n",len+1);
        person *temp = (person*) malloc((len+1) * sizeof(person));
        scanf("%s %lf",temp[len].name,&temp[len].age);
        if(strcmp(temp[len].name,"END") == 0 && temp[len].age == -1)
        {
            free(temp);
            break;
        }
        if((int)temp[len].age != temp[len].age || temp[len].age > 100 || temp[len].age < 1)
        {
            printf("Invalid input!\n");
            free(temp);
            continue;
        }
        for(i=0;i<len;i++)
        {
            temp[i] = persons[i];
        }
        free(persons);
        persons = temp;
        len++;
    }

    double avg = 0;
    person mx;
    person mn;
    mx.age = -1;
    mn.age = 101;
    for(i=0;i<len;i++)
    {
        avg += persons[i].age;
        if(persons[i].age > mx.age)
        {
            mx = persons[i];
        }
        if(persons[i].age < mn.age)
        {
            mn = persons[i];
        }
    }
    printf("\n===RESULTS===\n");
    printf("Average age: %.1lf\n",avg/(double)len);
    printf("Youngest person: %s %d\n",mn.name,(int)mn.age);
    printf("Oldest person: %s %d\n",mx.name,(int)mx.age);
    return 0;
}

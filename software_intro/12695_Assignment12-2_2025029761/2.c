#include <stdio.h>
#include <string.h>

int len;
char word[15][25];

int main()
{
    int i;
    while(1)
    {
        char w[25];
        printf("Enter a word (Enter 'end' to quit): ");
        scanf("%s",w);
        if(strlen(w) == 3)
        {
            if(w[0] == 'e'&&w[1] == 'n'&&w[2] == 'd')break;
        }
        for(i=0;i<len;i++)
        {
            if(strcmp(w,word[i]) == 0)
            {
                printf("This word already exists. Please enter another word.\n");
                break;
            }
        }
        if(i == len)
        {
            int l = strlen(w);
            for(i=0;i<=l;i++)
            {
                word[len][i] = w[i];
            }
            len++;
        }
    }
    printf("%d words in the list:\n",len);
    for(i=0;i<len;i++)
    {
        printf("%s ",word[i]);
    }
    printf("\n");
    while(1)
    {
        char w[25];
        printf("Enter a word to search (Enter 'end' to quit): ");
        scanf("%s",w);
        if(strlen(w) == 3)
        {
            if(w[0] == 'e'&&w[1] == 'n'&&w[2] == 'd')break;
        }
        for(i=0;i<len;i++)
        {
            if(strcmp(w,word[i]) == 0)
            {
                printf("This word is in the list.\n");
                break;
            }
        }
        if(i == len)
        {
            printf("This word is NOT in the list.\n");
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len;

int main()
{
    int i,j;
    char** word = (char**) malloc(sizeof(char*) * 0);
    while(1)
    {
        char* w = (char*) malloc(sizeof(char) * 25);
        char** rword = (char**) malloc(sizeof(char*) * len);
        printf("Enter a word (Enter 'end' to quit): ");
        scanf("%s",w);
        if(strlen(w) == 3)
        {
            if(w[0] == 'e'&&w[1] == 'n'&&w[2] == 'd')
            {
                free(w);
                free(rword);
                break;
            }
        }
        for(i=0;i<len;i++)
        {
            if(strcmp(w,word[i]) == 0)
            {
                printf("This word already exists. Please enter another word.\n");
                free(rword);
                break;
            }
        }
        if(i == len)
        {
            for(i=0;i<len;i++)
            {
                rword[i] = (char*) malloc(sizeof(char) * 25);
                int l = strlen(word[i]);
                for(j=0;j<=l;j++)
                {
                    rword[i][j] = word[i][j];
                }
                free(word[i]);
            }
            free(word);
            word = (char**) malloc(sizeof(char*) * (len+1));
            for(i=0;i<len;i++)
            {
                word[i] = (char*) malloc(sizeof(char) * 25);
                int l = strlen(rword[i]);
                for(j=0;j<=l;j++)
                {
                    word[i][j] = rword[i][j];
                }
                free(rword[i]);
            }
            free(rword);
            int l = strlen(w);
            word[len] = (char*) malloc(sizeof(char) * 25);
            for(i=0;i<=l;i++)
            {
                word[len][i] = w[i];
            }
            len++;
        }
        free(w);
    }
    printf("%d words in the list:\n",len);
    for(i=0;i<len;i++)
    {
        printf("%s ",word[i]);
    }
    printf("\n");
    while(1)
    {
        char* w = (char*) malloc(sizeof(char) * 25);
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
    for(i=0;i<len;i++)
    {
        free(word[i]);
    }
    return 0;
}
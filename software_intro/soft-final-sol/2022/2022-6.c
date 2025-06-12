#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* selectAnswer(char words[][6])
{
    srand((unsigned)time(NULL));
    int idx = rand() % 10;
    return words[idx];
}

void getInputFromUser(char *input)
{
    printf("Input 5 letters\n");
    int i;
    while(1)
    {
        scanf("%s",input);
        for(i=0;i<5;i++)
        {
            if(!('a' <= *(input+i) && *(input+i) <= 'z'))break;
        }
        if(i == 5)break;
        printf("%s is an invalid input. Try again.\n",input);
    }
}

char* checkLetters(char* user_input, char* answer, char* ret)
{
    int i,j;
    for(i=0;i<5;i++)
    {
        if(user_input[i] == answer[i])ret[i] = 'G';
        else
        {
            for(j=0;j<5;j++)
            {
                if(user_input[i] == answer[i])
                {
                    ret[i] = 'Y';
                    break;
                }
            }
            if(j == 5)ret[i] = 'B';
        }
    }
    ret[5] = '\0';
}

int main()
{
    int cnt = 0;
    printf("Wordle-like game starts!\n");
    char *ans;
    char words[10][6] = {
        "apple", "bound", "nasty", "seven", "world",
        "piano", "green", "woman", "dream", "death"
    };
    ans = selectAnswer(words);
    while(1)
    {
        char user[6], pr[6];
        getInputFromUser(user);
        checkLetters(user, ans, pr);
        printf("%s\n",pr);
        if(strcmp(pr,"GGGGG") == 0)break;
        cnt += 1;
        if(cnt >= 6)break;
    }
    if(cnt >= 6)printf("You Lose...\n");
    else printf("You Win!\n");
    return 0;
}

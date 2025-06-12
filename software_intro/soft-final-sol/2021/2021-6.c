#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
    int strike;
    int ball;
    int out;
} Result;


char *getThreeNumbers(char *arr)
{
    srand((unsigned)time(NULL));

    int a[3];

    a[0] = rand()%10;
    a[1] = rand()%9;
    a[2] = rand()%8;

    if(a[1] >= a[0])a[1]++;
    if(a[2] >= a[0])a[2]++;
    if(a[2] >= a[1])a[2]++;

    a[1] %= 10;
    a[2] %= 10;

    arr[0] = a[0] + '0';
    arr[1] += a[1] + '0';
    arr[2] += a[2] + '0';

    return arr;
}

char *getNumbersFromUser(char *arr)
{
    char input[4];
    int i,flag = 0;
    printf("Input 3-digit numbers\n");
    while(1)
    {
        if(flag)printf("%s is an invalid input. Try again.\n");
        scanf("%s",input);
        for(i=0;i<3;i++)
        {
            if(input[i] > '9' || input[i] < '1')break;
        }
        if(i != 3)continue;
        if(input[0] == input[1])continue;
        if(input[1] == input[2])continue;
        if(input[2] == input[0])continue;
        flag = 1;
        break;
    }
    arr[0] = input[0];
    arr[1] = input[1];
    arr[2] = input[2];
    return arr;
}

Result checkNumbers(const char *inputNumbers, const char *arr)
{
    Result ret;
    ret.strike = 0;
    ret.ball = 0;
    ret.out = 0;
    int i,j;
    for(i=0;i<3;i++)
    {
        if(inputNumbers[i] == arr[i])ret.strike += 1;
        for(j=0;j<3;j++)
        {
            if(i==j)continue;
            if(inputNumbers[i] == arr[j])ret.ball += 1;
        }
    }
    if(ret.strike == 0 && ret.ball == 0)ret.out = 1;
    return ret;
}

int main()
{
    int cnt = 0, out = 0;
    char ans[4];
    char arr[4];
    printf("Baseball game starts!\n");
    getThreeNumbers(ans);
    while(1)
    {
        if(cnt > 5 || out > 2)break;
        cnt += 1;
        getNumbersFromUser(arr);
        Result p = checkNumbers(arr, ans);
        if(p.out != 0)
        {
            printf("OUT!\n");
            out += 1;
            continue;
        }
        printf("%s:",arr);
        if(p.strike != 0)printf(" %dS",p.strike);
        if(p.ball != 0)printf(" %dB",p.ball);
        printf("\n");
        if(p.strike == 3)
        {
            printf("You Win!\n");
            break;
        }
    }
    if(cnt > 5 || out > 2)printf("You Lose!\n");
    return 0;
}

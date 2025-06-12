#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int y,x;
} movement;


void displayBoard(char board[][8])
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            printf("%c",board[i][j]);
        }
        printf("\n");
    }
}

movement getMoveFromUser(char board[][8])
{
    int p = 1;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(board[i][j] == 'X')p--;
            if(board[i][j] == 'O')p++;
        }
    }
    int x,y;
    printf("Input P%d's move\n",p);
    while(1)
    {
        scanf("%d %d",&y,&x);
        if(!(x < 8 && x >= 0 && y < 8 && y >= 0))
        {
            printf("Invalid move. Try again.\n");
            continue;
        }
        if(board[y][x] != '.')
        {
            printf("Invalid move. Try again.\n");
            continue;
        }
        break;
    }
    movement ret;
    ret.y = y;
    ret.x = x;
    return ret;
}

bool checkWinner(char board[][8], movement move, char symbol)
{
    int dx[4] = {0,1,1,1};
    int dy[4] = {1,0,1,-1};
    int i,j;
    for(i=0;i<4;i++)
    {
        int nx = move.x;
        int ny = move.y;
        while(1)
        {
            if(nx - dx[i] < 0 || nx - dx[i] >= 8 || ny - dy[i] < 0 || ny - dy[i] >= 8)break;
            if(board[ny - dy[i]][nx - dx[i]] != symbol)break;
            ny -= dy[i];
            nx -= dx[i];
        }
        for(j=0;j<4;j++)
        {
            if(nx + dx[i] < 0 || nx + dx[i] >= 8 || ny + dy[i] < 0 || ny + dy[i] >= 8)break;
            if(board[ny + dy[i]][nx + dx[i]] != symbol)break;
            ny += dy[i];
            nx += dx[i];
        }
        if(j == 4)return true;
    }
    return false;
}

bool makeMove(char board[][8], movement move, char symbol)
{
    board[move.y][move.x] = symbol;
    return checkWinner(board, move, symbol);
}

int main()
{
    int p = 1;
    char board[8][8] = {"........","........","........","........","........","........","........","........"};
    printf("Gomoku starts!\n");
    while(1)
    {
        displayBoard(board);
        int f = 0;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(board[i][j] == '.')
                {
                    f = 1;
                }
            }
        }
        if(!f)
        {
            printf("Draw!");
            return 0;
        }
        movement now = getMoveFromUser(board);
        bool v;
        if(p == 1)v = makeMove(board, now, 'O');
        else v = makeMove(board, now, 'X');
        if(v)break;
        p = 3 - p;
    }
    displayBoard(board);
    printf("P%d wins!",p);
}
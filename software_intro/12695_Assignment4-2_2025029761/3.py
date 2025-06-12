board = [['.']*9 for _ in range(9)]

def displayBoard(board):
    for i in range(9):
        for j in range(9):
            print(board[i][j],end="")
        print()

def getMoveFromUser():
    y,x = map(int,input().split(','))
    if 0 <= y < 9 and 0 <= x < 9:
        if board[y][x] != '.':
            print("Invalid move. Try again.")
            return getMoveFromUser()
        return [y,x]
    else:
        print("Invalid move. Try again.")
        return getMoveFromUser()

def checkWinner(board,move,symbol):
    y,x = move
    for j in range(0,5):
        flag = 0
        for k in range(j,j+5):
            if board[y][k] == symbol:
                flag += 1
        if flag == 5:
            return True
    
    for j in range(0,5):
        flag = 0
        for k in range(j,j+5):
            if board[k][x] == symbol:
                flag += 1
        if flag == 5:
            return True
    
    flag = 0
    for k in range(-min(x,y),9-max(x,y)):
        if board[y+k][x+k] == symbol:
            flag += 1
        else:
            flag = 0
        if flag == 5:
            return True
    
    flag = 0
    for k in range(-min(x,8-y),min(y+1,9-x)):
        if board[y-k][x+k] == symbol:
            flag += 1
        else:
            flag = 0
        if flag == 5:
            return True
    return False

def makeMove(board,move,player):
    flag = 0
    for i in range(9):
        for j in range(9):
            if board[i][j] == '.':
                flag = 1
    if player == 1:
        board[move[0]][move[1]] = 'O'
        if checkWinner(board,move,'O'):
            return 2
        else:
            if flag == 0:
                return 4
            return 1
    else:
        board[move[0]][move[1]] = 'X'
        if checkWinner(board,move,'X'):
            return 3
        else:
            if flag == 0:
                return 4
            return 1


print("Gomoku starts!")
displayBoard(board)
player = 1

while True:
    print("Input P"+str(player)+"'s move")
    move = getMoveFromUser()
    ret = makeMove(board,move,player)
    displayBoard(board)
    if ret == 2:
        print("P1 wins!")
        break
    elif ret == 3:
        print("P2 wins!")
        break
    elif ret == 4:
        print("Draw!")
        break
    player += 1
    if player == 3:
        player = 1
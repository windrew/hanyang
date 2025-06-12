import random

def getThreeNumbers():
    L = [1,2,3,4,5,6,7,8,9]
    ret = []
    for j in range(3):
        while True:
            x = int(random.random()*9) + 1
            for i in range(len(L)):
                if L[i] == x:
                    L.remove(x)
                    break
            if len(L) == 8 - j:
                break
        ret.append(x)
    return ret

def getNumbersFromUser():
    while True:
        s = input("Input 3-digit numbers\n")
        if len(s) != 3:
            print(s,"is an invalid input. Try again.")
            continue
        if '0' <= s[0] <= '9' and '0' <= s[1] <= '9' and '0' <= s[2] <= '9' and s[0] != s[1] and s[1] != s[2] and s[0] != s[2]:
            break;
        print(s,"is an invalid input. Try again.")
    return s

def checkNumbers(inputNumbers):
    a,b,c = int(inputNumbers[0]),int(inputNumbers[1]),int(inputNumbers[2])
    global d
    global e
    global f
    ret = [0,0,0]
    if a == d:
        ret[0] += 1
    elif a == e or a == f:
        ret[1] += 1
    else:
        ret[2] += 1
    if b == e:
        ret[0] += 1
    elif b == d or b == f:
        ret[1] += 1
    else:
        ret[2] += 1
    if c == f:
        ret[0] += 1
    elif c == d or c == e:
        ret[1] += 1
    else:
        ret[2] += 1
    if ret[2] == 3:
        return [0,0,1]
    else:
        return ret

print("Baseball game starts!")
L = getThreeNumbers()
d,e,f = L[0],L[1],L[2]
flag = 0
ck = 1
while True:
    ret = checkNumbers(getNumbersFromUser())
    if ret == [0,0,1]:
        print("Out!",end="")
        flag += 1
    if ret[0] != 0:
        print(str(ret[0])+"S",end=" ")
    if ret[1] != 0:
        print(str(ret[1])+"B",end="")
    print()
    if ret[0] == 3:
        print("You Win!")
        break
    if flag == 3:
        print("You Lose! The number is",str(L[0])+str(L[1])+str(L[2])+'.')
        break
    if ck == 5:
        print("You Lose! The number is",str(L[0])+str(L[1])+str(L[2])+'.')
        break
    ck += 1

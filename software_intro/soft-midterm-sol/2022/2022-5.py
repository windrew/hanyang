import random

def selectAnswer(wordList):
    return wordList[int(random.random()*len(wordList))]

def genInputFromUser():
    while True:
        s = input("Input 5 letters\n")
        if len(s) != 5:
            print(s,"is an invalid input. Try again.")
            continue
        flag = 5
        for i in s:
            if 'a' <= i <= 'z':
                flag -= 1
        if flag == 0:
            break
        print(s,"is an invalid input. Try again.")
    return s

def checkLetters(inputLetters):
    global word
    ret = ''
    for i in range(len(inputLetters)):
        if inputLetters[i] == word[i]:
            ret = ret + 'G'
        elif inputLetters[i] in word:
            ret = ret + 'Y'
        else:
            ret = ret + 'B'
    return ret

print("Wordle-like game starts!")
word = selectAnswer(["apple","bound","nasty","seven","world","piano","green","woman","dream","death"])
flag = 1
while True:
    L = checkLetters(genInputFromUser())
    print(L)
    if L == "GGGGG":
        print("You Win!")
        break
    if flag == 6:
        print("You Lose!")
        break
    flag += 1
def printLine(n):
    for i in range(1,n+1):
        print(i,end=" ")
    print()

n = int(input())

for i in range(n):
    printLine(i+1)

for i in range(n):
    printLine(n-i)
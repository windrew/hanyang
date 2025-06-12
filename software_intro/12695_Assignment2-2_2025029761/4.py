n = int(input())
for i in range(n):
    print(" "*(n-i-1),end = "")
    for j in range(i+1):
        if j == i:print("*",end="")
        else:print("*",end=" ")
    print()
for i in range(n-1):
    print(" "*(i+1),end = "")
    for j in range(n-i-1):
        if j == n-i-2:print("*",end="")
        else:print("*",end=" ")
    print()
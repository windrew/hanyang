n = int(input())
i = 0
while i < n:
    print(" "*(n-i-1),end = "")
    j = 0
    while j < i + 1:
        if j == i:print("*",end="")
        else:print("*",end=" ")
        j += 1
    print()
    i += 1
i = 0
while i < n-1:
    print(" "*(i+1),end = "")
    j = 0
    while j < n-i-1:
        if j == n-i-2:print("*",end="")
        else:print("*",end=" ")
        j += 1
    print()
    i += 1
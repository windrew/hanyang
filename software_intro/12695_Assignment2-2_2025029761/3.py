n = int(input())
i = 0
while i < n:
    j = 0
    while j < i+1:
        print(j+1,end=" ")
        j += 1
    print()
    i += 1
i = 0
while i < n:
    j = 0
    while j < n-i:
        print(j+1,end=" ")
        j += 1
    print()
    i += 1
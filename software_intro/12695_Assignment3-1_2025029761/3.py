n = int(input())
fact = 1

for i in range(1,n+1):
    fact *= i

print("addTotal():",n*(n+1)//2)
print("gMul:",fact)
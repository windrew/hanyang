def factorial(n):
    fact = 1
    for i in range(1,n+1):
        fact *= i
    return fact

def combination(n,r):
    return factorial(n)//factorial(n-r)//factorial(r)

n = int(input())

for i in range(1,n+1):
    for j in range(0,i):
        print(combination(i-1,j),end=" ")
    print()

def problemDescription():
    print("* Number of divisors *")

def getNumOfDivisors(n):
    cnt = 0
    for i in range(1,n+1):
        if n % i == 0:
            cnt += 1
    return cnt

a = int(input("Type the first number:\n"))
b = int(input("Type the second number:\n"))

print("Number of divisors of the first number is",getNumOfDivisors(a))
print("Number of divisors of the second number is",getNumOfDivisors(b))
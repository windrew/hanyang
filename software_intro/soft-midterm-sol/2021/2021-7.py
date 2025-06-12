li1 = [1,2,3,4]
li2 = li1[::-1]
print(li2)
li3 = li1 + ['1','2','3','4']
print(li3)
li4 = li3[2:6:2]
print(li4)
li5 = li3[2::2]
print(li5)

"""
n = int(input("n=?\n"))

for i in range(1,n+1):
    s = str(i)
    flag = 0
    for j in s:
        if int(j) % 3 == 0 and int(j) != 0:
            flag = 1
            print("clap!",end=" ")
    if flag == 0:
        print(i)
    else:
        print()
"""
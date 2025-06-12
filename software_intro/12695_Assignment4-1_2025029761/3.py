d = dict()

a = input().split()
b,c = str(a[0]),int(a[1])
d[b] = c

a = input().split()
b,c = str(a[0]),int(a[1])
d[b] = c

a = input().split()
b,c = str(a[0]),int(a[1])
d[b] = c

name = input("Which student's score?\n")

if name in d:
    print(name+"'s score:",d[name])
else:
    print(name+" is not in the database.")
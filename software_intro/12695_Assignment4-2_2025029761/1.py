d = dict()
a = input().split()

for i in a:
    if i not in d:
        d[i] = 1
    else:
        d[i] += 1

for i in a:
    if d[i] > 0:
        print(i+":",d[i])
        d[i] = 0
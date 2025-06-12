d = dict()
for i in range(2,10,2):
    a = []
    for j in range(1,9):
        a.append(i*j)
    d[i] = a
print(d)
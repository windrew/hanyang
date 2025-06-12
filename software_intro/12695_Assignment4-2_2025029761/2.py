def cleanText(text):
    new = ""
    for i in text:
        if 'A' <= i <= 'Z' or '0' <= i <= '9' or 'a' <= i <= 'z' or i == ' ':
            new = new + i
    return new.lower()

def wordFrequency(cleanText):
    d = dict()
    cleanText = cleanText.split()

    for i in cleanText:
        if i not in d:
            d[i] = 1
        else:
            d[i] += 1

    return d

a = input("Input string\n")
a = cleanText(a)
d = wordFrequency(a)
key = d.keys()


mx = 0

for i in key:
    if mx < d[i]:
        mx = d[i]
    print(i+":",d[i])
print("The most frequent word: ",end="")

flag = 0

for i in key:
    if mx == d[i]:
        if flag == 0:
            print(i,end="")
            flag = 1
        else:
            print(" ,"+i,end="")

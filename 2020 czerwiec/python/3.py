pary = []
with open("pary.txt", "r") as f:
    file = f.read().strip().split('\n')
    for i in file:
        n, s = i.split()
        if n == len(s): pary.append((int(n), s))

pary.sort()
print(*pary[0])

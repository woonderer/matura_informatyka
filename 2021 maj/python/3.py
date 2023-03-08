with open("instrukcje.txt", "r") as f:
    inst = f.read().strip().split('\n')

d = dict()

for line in inst:
    s, c = line.split()
    
    if s == "DOPISZ":
        if c not in d.keys():
            d[c] = 0
        d[c] += 1

best = max(d.values())
for i, j in d.items():
    if j == best:
        print(i, j)
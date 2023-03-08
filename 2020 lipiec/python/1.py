with open("identyfikator.txt", "r") as f:
    ident = f.read().strip().split('\n')

best = 0
for id in ident:
    cur = 0
    for i in id[3:]:
        cur += int(i)
    if cur > best:
        best = cur

with open("wyniki4_1.txt", "w") as f:
    for id in ident:
        cur = 0
        for i in id[3:]:
            cur += int(i)
        if cur == best:
            f.write(id + '\n')
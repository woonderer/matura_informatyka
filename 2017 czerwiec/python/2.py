with open("punkty.txt", "r") as f:
    p = f.read().strip().split('\n')

ans = 0
for pair in p:
    x, y = pair.split()
    x = set(x)
    y = set(y)
    if len(x) == len(y):
        good = True
        for v in x:
            if v not in y:
                good = False
                break
        if good:
            ans += 1
print(ans)
with open("sygnaly.txt", "r") as f:
    slowa = f.read().strip().split('\n')

best, ans = 0, ""
for s in slowa:
    if len(set(s)) > best:
        ans = s
        best = len(set(s))
print(ans, best)
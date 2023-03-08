with open("instrukcje.txt", "r") as f:
    inst = f.read().strip().split('\n')

ans, prv, cur = ["", 0], "", 0
for line in inst:
    s, c = line.split()
    
    if prv == s:
        cur += 1
        if cur > ans[1]:
            ans = [s, cur]
    else:
        cur = 1

    prv = s
print(*ans)
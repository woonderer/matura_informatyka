with open("instrukcje.txt", "r") as f:
    inst = f.read().strip().split('\n')

ans = 0
for line in inst:
    s, c = line.split()
    if s == "DOPISZ":
        ans += 1
    elif s == "USUN":
        ans -= 1
print(ans)
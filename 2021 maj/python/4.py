with open("instrukcje.txt", "r") as f:
    inst = f.read().strip().split('\n')

ans, alf = [], "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for line in inst:
    s, c = line.split()
    if s == "DOPISZ":
        ans.append(c)
    elif s == "ZMIEN":
        ans[-1] = c
    elif s == "USUN":
        ans.pop()
    elif s == "PRZESUN":
        try:
            idx = ans.index(c)
        except ValueError:
            continue

        if c == 'Z':
            ans[idx] = 'A'
        else:
            ans[idx] = alf[alf.find(c) + 1]
print(''.join(ans))

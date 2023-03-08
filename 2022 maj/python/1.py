with open("liczby.txt", "r") as f:
    file = f.read().strip().split('\n')

cnt, ans = 0, ""
for n in file:
    if n[0] == n[-1]:
        cnt += 1
        if len(ans) == 0:
            ans = n
print(cnt, ans)
with open("liczby.txt", "r") as f:
    liczby = list(map(int, f.read().strip().split('\n')))

s = set()
i = 1
while i <= 100000:
    s.add(i)
    i *= 3

ans = 0
for i in liczby:
    if i in s:
        ans += 1
print(ans)
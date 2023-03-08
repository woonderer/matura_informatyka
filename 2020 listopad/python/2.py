with open("dane.txt", "r") as f:
    dane = list(map(int, f.read().strip().split('\n')))

lucky = [i for i in range(1, 10001, 2)]
cur = 1
while cur < len(lucky):
    crossed = [lucky[i] for i in range(lucky[cur] - 1, len(lucky), lucky[cur])]
    for i in crossed:
        lucky.remove(i)
    cur += 1
lucky = set(lucky)

ans, cur, was = [0, 0], [0, 0], False
for i in dane:
    if i in lucky:
        if was:
            cur[0] += 1
        else:
            cur = [1, i]
        
        if cur[0] > ans[0]:
            ans = cur

        was = True
    else:
        cur = (0, 0)
        was = False
        
print(*ans)
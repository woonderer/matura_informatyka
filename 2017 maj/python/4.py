with open("dane.txt", "r") as f:
    file = f.read().strip().split('\n')
file = list(map(lambda x: x.split(), file))

ans = 0
for j in range(len(file[0])):
    prv, cur = "", 0
    for i in range(len(file)):
        if prv == file[i][j]:
            cur += 1
            ans = max(ans, cur)
        else:
            cur = 1
        prv = file[i][j]
print(ans)
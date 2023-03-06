with open("dane.txt", "r") as f:
    file = f.read().strip().split('\n')
file = list(map(lambda x: x.split(), file))

def kontr(i, j):
    if i - 1 >= 0:
        if abs(int(file[i][j]) - int(file[i - 1][j])) > 128:
            return True
    if j - 1 >= 0:
        if abs(int(file[i][j]) - int(file[i][j - 1])) > 128:
            return True
    if i + 1 <= 199:
        if abs(int(file[i][j]) - int(file[i + 1][j])) > 128:
            return True
    if j + 1 <= 319:
        if abs(int(file[i][j]) - int(file[i][j + 1])) > 128:
            return True
    return False

ans = 0
for i in range(len(file)):
    for j in range(len(file[i])):
        if kontr(i, j):
            ans += 1
print(ans)
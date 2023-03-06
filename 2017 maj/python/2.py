with open("dane.txt", "r") as f:
    file = f.read().strip().split('\n')

def is_pal(l1, l2):
    for i, j in zip(l1, l2):
        if i != j:
            return False
    return True

ans = 0
for row in file:
    row = row.split()
    if not is_pal(row, row[::-1]):
        ans += 1
print(ans)
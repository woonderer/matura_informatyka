with open("napisy.txt", "r") as f:
    file = f.read().strip().split('\n')

ans = 0
for s in file:
    for i in s:
        if i in '0123456789':
            ans += 1
print(ans)
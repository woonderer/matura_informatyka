with open("napisy.txt", "r") as f:
    file = f.read().strip().split('\n')

for i, s in enumerate(file, 1):
    if i % 20 == 0:
        print(s[i // 20 - 1], end="")
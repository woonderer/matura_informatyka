with open("napisy.txt", "r") as f:
    file = f.read().strip().split('\n')

def is_pal(s):
    return s == s[::-1]

for s in file:
    if is_pal(s + s[0]):
        print(s[len(s) // 2], end="")
    elif is_pal(s[-1] + s):
        print(s[len(s) // 2 - 1], end="")
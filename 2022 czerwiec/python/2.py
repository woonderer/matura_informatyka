with open("liczby.txt", "r") as f:
    file = f.read().strip().split('\n')

best = [0, 0]
for s in file:
    if abs(int(s) - int(s[::-1])) > best[1]:
        best = [s, abs(int(s) - int(s[::-1]))]
print(*best)
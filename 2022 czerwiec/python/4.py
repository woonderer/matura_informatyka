with open("liczby.txt", "r") as f:
    file = list(map(int, f.read().strip().split('\n')))

cnt = dict()
for i in file:
    if i not in cnt.keys():
        cnt[i] = 0
    cnt[i] += 1

print(len(cnt.keys()), sum(1 for i in cnt.values() if i == 2), sum(1 for i in cnt.values() if i == 3))
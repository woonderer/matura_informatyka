with open("dane4.txt", "r") as f:
    liczby = list(map(int, f.read().strip().split('\n')))

cnt = dict()
for i in range(1, len(liczby)):
    if abs(liczby[i] - liczby[i - 1]) not in cnt.keys():
        cnt[abs(liczby[i] - liczby[i - 1])] = 0
    cnt[abs(liczby[i] - liczby[i - 1])] += 1

best = max(cnt.values())
print("Krotność najczęstszej luki:", best)
print("Wartości najczęstszych luk:")
for i, j in cnt.items():
    if j == best:
        print(i)
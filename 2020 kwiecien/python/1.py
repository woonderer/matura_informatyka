with open("dane4.txt", "r") as f:
    liczby = list(map(int, f.read().strip().split('\n')))

maxx, minx = 0, 2e9
for i in range(1, len(liczby)):
    if abs(liczby[i] - liczby[i - 1]) > maxx: maxx = abs(liczby[i] - liczby[i - 1])
    if abs(liczby[i] - liczby[i - 1]) < minx: minx = abs(liczby[i] - liczby[i - 1])

print("Największa:", maxx)
print("Najemniejsza:", minx)
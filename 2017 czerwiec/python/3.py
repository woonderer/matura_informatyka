with open("punkty.txt", "r") as f:
    p = f.read().strip().split('\n')
p = list(map(lambda x: tuple(map(int, x.split())), p))

from math import sqrt
def dist(p1, p2):
    x = p2[0] - p1[0]
    y = p2[1] - p1[1]
    return sqrt(x * x + y * y)

best = (0, 0)
for i in range(len(p)):
    for j in range(len(p)):
        if dist(p[i], p[j]) > dist(p[best[0]], p[best[1]]):
            best = (i, j)

print(p[best[0]], p[best[1]])
print(round(dist(p[best[0]], p[best[1]])))
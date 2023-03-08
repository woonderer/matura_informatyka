with open("galerie.txt", "r") as f:
    galerie = f.read().strip().split('\n')

kraj, miasto, lokal = [], [], []
for g in galerie:
    g = g.split()
    kraj.append(g[0])
    miasto.append(g[1])
    lokal.append(list(map(int, g[2:])))

d = dict()
for k in kraj:
    if k not in d.keys():
        d[k] = 0
    d[k] += 1

with open("wynik4_1.txt", "w") as f:
    for k, i in d.items():
        f.write(str(k) + ' ' + str(i) + '\n')
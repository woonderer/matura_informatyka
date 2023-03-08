with open("galerie.txt", "r") as f:
    galerie = f.read().strip().split('\n')

kraj, miasto, lokal = [], [], []
for g in galerie:
    g = g.split()
    kraj.append(g[0])
    miasto.append(g[1])
    lokal.append(list(map(int, g[2:])))

ans = []
with open("wynik4_2a.txt", "w") as f:
    for i in range(50):
        p, l = 0, 0
        for j in range(0, 140, 2):
            cur = lokal[i][j] * lokal[i][j + 1]
            if cur == 0:
                break
            p += cur
            l += 1

        f.write(miasto[i] + ' ' + str(p) + ' ' + str(l) + '\n')
        ans.append((p, miasto[i]))

ans.sort()
with open("wynik4_2b.txt", "w") as f:
    f.write(ans[49][1] + ' ' + str(ans[49][0]) + '\n')
    f.write(ans[0][1] + ' ' + str(ans[0][0]))
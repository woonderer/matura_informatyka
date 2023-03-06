with open("liczby.txt", "r") as f:
    liczby = list(map(int, f.read().strip().split('\n')))

def nwd(a, b):
    if b == 0:
        return a
    return nwd(b, a % b)

ans = [0, 0, 0] # pierwsza liczba, długość ciągu, nwd
for i in range(len(liczby)):
    cur, j = [liczby[i], 1, liczby[i]], i + 1
    while j < len(liczby) and nwd(cur[2], liczby[j]) != 1:
        cur[1] += 1
        cur[2] = nwd(cur[2], liczby[j])
        j += 1
    
    if cur[1] > ans[1]:
        ans = cur

print(*ans)
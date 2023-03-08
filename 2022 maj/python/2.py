with open("liczby.txt", "r") as f:
    file = list(map(int, f.read().strip().split('\n')))

ans1, ans2 = [0, 0], [0, 0]
for n in file:
    cnt, r, _n, i = 0, 0, n, 2
    while _n != 1:
        if _n % i == 0:
            r += 1
        
        while _n % i == 0:
            cnt += 1
            _n //= i

        i += 1

    if cnt > ans1[1]:
        ans1 = [n, cnt]
    if r > ans2[1]:
        ans2 = [n, r]
print(*ans1, *ans2)
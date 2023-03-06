with open("liczby.txt", "r") as f:
    file = f.read().strip().split('\n')

ans = 0
with open("wyniki_6_4.txt", "w") as f:
    for s in file:
        if s[-1] == '8':
            ans += int(s[:-1], 8)
    f.write(str(ans))
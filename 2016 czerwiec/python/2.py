with open("liczby.txt", "r") as f:
    file = f.read().strip().split('\n')

ans = 0
with open("wyniki_6_2.txt", "w") as f:
    for s in file:
        if s[-1] == '4' and '0' not in s[:-1]:
            ans += 1
    f.write(str(ans))
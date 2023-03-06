with open("liczby.txt", "r") as f:
    file = f.read().strip().split('\n')

ans = 0
with open("wyniki_6_1.txt", "w") as f:
    for s in file:
        if s[-1] == '8':
            ans += 1
    f.write(str(ans))
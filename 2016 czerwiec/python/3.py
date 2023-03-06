with open("liczby.txt", "r") as f:
    file = f.read().strip().split('\n')

ans = 0
with open("wyniki_6_3.txt", "w") as f:
    for s in file:
        if s[-1] == '2' and s[-2] == '0':
            ans += 1
    f.write(str(ans))
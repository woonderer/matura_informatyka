with open("liczby.txt") as f:
    s = f.read().strip().split('\n')

ans = 0
for liczba in s:
    zero, one = 0, 0
    for i in liczba:
        if i == '0':
            zero += 1
        else:
            one += 1
    if zero > one:
        ans += 1
print(ans)
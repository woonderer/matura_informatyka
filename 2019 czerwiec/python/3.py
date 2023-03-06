with open("pierwsze.txt", "r") as f:
    liczby = list(map(int, f.read().strip().split('\n')))

def w(n):
    if n < 10:
        return n
    
    ans = 0
    while n:
        ans += n % 10
        n //= 10
    return w(ans)

ans = 0
with open("wyniki4_3.txt", "w") as f:
    for n in liczby:
        if w(n) == 1:
            ans += 1
    f.write(str(ans))
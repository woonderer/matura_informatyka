with open("punkty.txt", "r") as f:
    p = f.read().strip().split('\n')

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

ans = 0
for pair in p:
    x, y = list(map(int, pair.split()))
    if is_prime(x) and is_prime(y):
        ans += 1
print(ans)
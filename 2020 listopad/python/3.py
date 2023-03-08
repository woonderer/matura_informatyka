with open("dane.txt", "r") as f:
    dane = list(map(int, f.read().strip().split('\n')))

def is_prime(n):
    if n <= 1:
        return False

    for i in range(2, n):
        if n % i == 0:
            return False
    return True

lucky = [i for i in range(1, 10001, 2)]
cur = 1
while cur < len(lucky):
    crossed = [lucky[i] for i in range(lucky[cur] - 1, len(lucky), lucky[cur])]
    for i in crossed:
        lucky.remove(i)
    cur += 1
lucky = set(lucky)

ans = 0
for i in dane:
    if i in lucky and is_prime(i):
        ans += 1
print(ans)
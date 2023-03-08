with open("pary.txt", "r") as f:
    pary = f.read().strip().split('\n')

def is_prime(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

for p in pary:
    n, s = p.split()
    n = int(n)

    if n % 2 == 0:
        i = 3
        while not is_prime(i) or not is_prime(n - i):
            i += 1
        print(n, i, n - i)
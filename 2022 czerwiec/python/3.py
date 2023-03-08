with open("liczby.txt", "r") as f:
    file = f.read().strip().split('\n')

def is_prime(n):
    if n <= 1:
        return False

    for i in range(2, n):
        if n % i == 0:
            return False
    return True

for s in file:
    if is_prime(int(s)) and is_prime(int(s[::-1])):
        print(s)
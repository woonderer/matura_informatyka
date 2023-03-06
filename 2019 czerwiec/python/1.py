with open("liczby.txt", "r") as f:
    liczby = list(map(int, f.read().strip().split('\n')))

def is_prime(n):
    if n == 1:
        return False
    
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

with open("wyniki4_1.txt", "w") as f:
    for n in liczby:
        if n >= 100 and n <= 5000 and is_prime(n):
            f.write(str(n) + '\n')
with open("pierwsze.txt", "r") as f:
    liczby = f.read().strip().split('\n')

def is_prime(n):
    if n == 1:
        return False
    
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

with open("wyniki4_2.txt", "w") as f:
    for n in liczby:
        if is_prime(int(n[::-1])):
            f.write(n + '\n')
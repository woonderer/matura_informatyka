with open("liczby.txt", "r") as f:
    file = f.read().strip().split('\n')

for s in file:
    if int(s[::-1]) % 17 == 0:
        print(s[::-1])

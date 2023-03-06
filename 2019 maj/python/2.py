with open("liczby.txt", "r") as f:
    liczby = f.read().strip().split('\n')

silnia = [1] * 10
for i in range(1, 10):
    silnia[i] = silnia[i - 1] * i

for n in liczby:
    if int(n) == sum(silnia[int(i)] for i in list(n)):
        print(n)
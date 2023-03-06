with open("dane1.txt", "r") as f:
    d1 = f.read().strip().split('\n')

with open("dane2.txt", "r") as f:
    d2 = f.read().strip().split('\n')

ans = 0
with open("wynik4_1.txt", "w") as f:
    for l1, l2 in zip(d1, d2):
        l1 = list(map(int, l1.split()))
        l2 = list(map(int, l2.split()))
        if l1[-1] == l2[-1]:
            ans += 1
    f.write(str(ans))
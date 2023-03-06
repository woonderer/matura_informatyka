with open("dane1.txt", "r") as f:
    d1 = f.read().strip().split('\n')

with open("dane2.txt", "r") as f:
    d2 = f.read().strip().split('\n')

ans = 0
with open("wynik4_2.txt", "w") as f:
    for l1, l2 in zip(d1, d2):
        l1 = list(map(int, l1.split()))
        l2 = list(map(int, l2.split()))

        even1 = sum(1 for i in l1 if i % 2 == 0)
        even2 = sum(1 for i in l2 if i % 2 == 0)

        if even1 == 5 and even2 == 5:
            ans += 1
    f.write(str(ans))
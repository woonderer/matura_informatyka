with open("dane1.txt", "r") as f:
    d1 = f.read().strip().split('\n')

with open("dane2.txt", "r") as f:
    d2 = f.read().strip().split('\n')

ans, row = [], 1
with open("wynik4_4.txt", "w") as f:
    for l1, l2 in zip(d1, d2):
        l1 = list(map(int, l1.split()))
        l2 = list(map(int, l2.split()))

        i, j = 0, 0
        while i < len(l1) and j < len(l2):
            if l1[i] <= l2[j]:
                f.write(str(l1[i]) + ' ')
                i += 1
            else:
                f.write(str(l2[j]) + ' ')
                j += 1
        
        while i < len(l1):
            f.write(str(l1[i]) + ' ')
            i += 1
        
        while j < len(l2):
            f.write(str(l2[j]) + ' ')
            j += 1
        f.write('\n')
    
with open("dane1.txt", "r") as f:
    d1 = f.read().strip().split('\n')

with open("dane2.txt", "r") as f:
    d2 = f.read().strip().split('\n')

ans, row = [], 1
with open("wynik4_3.txt", "w") as f:
    for l1, l2 in zip(d1, d2):
        l1 = list(map(int, l1.split()))
        l2 = list(map(int, l2.split()))

        # usuwanie duplikatów, sortowanie i zamienianie na string żeby się łatwo dało je porównać
        s1 = ' '.join(list(map(str, sorted(list(set(l1))))))
        s2 = ' '.join(list(map(str, sorted(list(set(l2))))))

        if s1 == s2:
            ans.append(str(row))
        row += 1
    f.write(str(len(ans)) + '\n' + ' '.join(ans))
    
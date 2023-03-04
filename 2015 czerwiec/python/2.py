with open("kody.txt", "r") as f:
    k = f.read().strip().split('\n')

kody = {0: '10101110111010', 1: '11101010101110', 2: '10111010101110', 3: '11101110101010', 4: '10101110101110', 5: '11101011101010', 6: '10111011101010', 7: '10101011101110', 8: '11101010111010', 9: '10111010111010'}

with open("kody2.txt", "w") as f:
    for liczba in k:
        even, odd = 0, 0
        for i in range(len(liczba)):
            if (i + 1) % 2:
                odd += int(liczba[i])
            else:
                even += int(liczba[i])
        r = (10 - ((even * 3 + odd) % 10)) % 10
        f.write(str(r) + ' ' + kody[r] + '\n')
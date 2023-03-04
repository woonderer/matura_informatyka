with open("kody.txt", "r") as f:
    k = f.read().strip().split('\n')

with open("kody1.txt", "w") as f:
    for liczba in k:
        even, odd = 0, 0
        for i in range(len(liczba)):
            if (i + 1) % 2:
                odd += int(liczba[i])
            else:
                even += int(liczba[i])
        f.write(str(even) + ' ' + str(odd) + '\n')
with open("identyfikator.txt", "r") as f:
    ident = f.read().strip().split('\n')

w = (7, 3, 1, 0, 7, 3, 1, 7, 3)
alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

with open("wyniki4_3.txt", "w") as f:
    for id in ident:
        suma = 0
        for i, j in enumerate(id):
            if i < 3:
                suma += (alf.find(j) + 10) * w[i]
            else:
                suma += int(j) * w[i]
        
        if suma % 10 != int(id[3]):
            f.write(id + '\n')
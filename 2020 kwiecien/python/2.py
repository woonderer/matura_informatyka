with open("dane4.txt", "r") as f:
    liczby = list(map(int, f.read().strip().split('\n')))

dlugosc, head, tail, i = 0, 0, 0, 0
while i < len(liczby) - 1:
    j, r = i + 1, abs(liczby[i] - liczby[i + 1])
    while j + 1 < len(liczby) and r == abs(liczby[j] - liczby[j + 1]):
        j += 1
    
    if j - i + 1 > dlugosc:
        dlugosc = j - i + 1
        head = liczby[i]
        tail = liczby[j]
    
    i = j
    
print("Długość: ", dlugosc)
print("Wartość na początku:", head)
print("Wartość na końcu:", tail)
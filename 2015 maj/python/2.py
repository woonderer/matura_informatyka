with open("liczby.txt") as f:
    s = f.read().strip().split('\n')

two, eight = 0, 0
for liczba in s:
    if liczba[-1] == '0':
        two += 1
    
    if liczba[-3:] == '000':
        eight += 1
print(two, eight)
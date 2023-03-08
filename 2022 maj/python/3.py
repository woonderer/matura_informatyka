with open("liczby.txt", "r") as f:
    file = list(map(int, f.read().strip().split('\n')))

def good(x, y, z):
    if y % x != 0:
        return False
    if z % y != 0:
        return False
    return True

file.sort() # każda dobra trójka (x, y, z) spełnia zależność x < y < z
three = []
with open("trojki.txt", "w") as f:
    for i in range(len(file)):
        for j in range(i + 1, len(file)):
            for k in range(j + 1, len(file)):
                if good(file[i], file[j], file[k]):
                    three.append((file[i], file[k]))
                    f.write(str(file[i]) + ' ' + str(file[j]) + ' ' + str(file[k]) + '\n')
print("a)", len(three))

# dobrą piątkę można stworzyć z dwóch dobrych trójek
# jeżeli ostatnia liczba pierwszej trójki jest taka sama jak pierwsza liczba drugiej
three.sort()
ans = 0
for i in range(len(three)):
    for j in range(i + 1, len(three)):
        if three[i][1] == three[j][0]:
            ans += 1
print("b)", ans)
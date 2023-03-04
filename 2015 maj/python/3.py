with open("liczby.txt") as f:
    s = f.read().strip().split('\n')

smallest, biggest = 0, 0
for i in range(1, 1000):

    """
        Jeżeli liczby są różnej długości to mniejsza jest ta krótsza, a większa jest ta dłuższa
        Jeżeli liczby są tej samej długości to mniejsza ma 0 na pierwszym różniącym się dla porównywanych słów bicie od lewej
    """

    if len(s[i]) < len(s[smallest]):
        smallest = i
    elif len(s[i]) == len(s[smallest]):
        for j in range(len(s[i])):
            if s[i][j] != s[smallest][j] and s[i][j] == '0':
                smallest = i
                break

    if len(s[i]) > len(s[biggest]):
        biggest = i
    elif len(s[i]) == len(s[biggest]):
        for j in range(len(s[i])):
            if s[i][j] != s[biggest][j] and s[i][j] == '1':
                biggest = i
                break

print(smallest + 1, biggest + 1)
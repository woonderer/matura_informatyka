with open("liczby.txt", "r") as f:
    file = f.read().strip().split('\n')

minx, maxx = 0, 0
with open("wyniki_6_5.txt", "w") as f:
    for i, s in enumerate(file):
        if int(s[:-1], int(s[-1])) > int(file[maxx][:-1], int(file[maxx][-1])):
            maxx = i
        if int(s[:-1], int(s[-1])) < int(file[minx][:-1], int(file[minx][-1])):
            minx = i
    f.write("Najmniejsza: " + file[minx] + ", " + str(int(file[minx][:-1], int(file[minx][-1]))) + '\n')
    f.write("Najmniejsza: " + file[maxx] + ", " + str(int(file[maxx][:-1], int(file[maxx][-1]))))
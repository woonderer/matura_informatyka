with open("napisy.txt", "r") as f:
    file = f.read().strip().split('\n')

ans = ""
for s in file:
    if ans[-3:] == "XXX":
        break

    tmp = ""
    for i in s:
        if i in '0123456789':
            tmp += i
            if len(tmp) == 2:
                if int(tmp) >= 65 and int(tmp) <= 90:
                    ans += chr(int(tmp))
                tmp = ""

print(ans) 
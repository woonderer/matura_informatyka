with open("sygnaly.txt", "r") as f:
    slowa = f.read().strip().split('\n')

def check(s):
    for i in s:
        for j in s:
            if abs(ord(i) - ord(j)) > 10:
                return False
    return True

for s in slowa:
    if check(s):
        print(s)
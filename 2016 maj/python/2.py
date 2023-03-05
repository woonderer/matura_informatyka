with open("dane_6_2.txt", "r") as f:
    file = f.read().strip().split('\n')

def decode(s, key):
    return ''.join([chr(65 + ((ord(i) - 65 - key) % 26 + 26) % 26) for i in s])

with open("wyniki_6_2.txt", "w") as f:
    for s in file:
        s = s.split()
        slowo, key = s[0], 0
        if len(s) > 1:
            key = int(s[1])
        f.write(decode(slowo, key) + '\n')
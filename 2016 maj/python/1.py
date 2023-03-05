with open("dane_6_1.txt", "r") as f:
    file = f.read().strip().split('\n')

def encode(s, key = 107):
    return ''.join([chr(65 + (ord(i) - 65 + key) % 26) for i in s])

with open("wyniki_6_1.txt", "w") as f:
    for s in file:
        f.write(encode(s) + '\n')
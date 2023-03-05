with open("dane_6_3.txt", "r") as f:
    file = f.read().strip().split('\n')

def encode(s, key = 107):
    return ''.join([chr(65 + (ord(i) - 65 + key) % 26) for i in s])

def valid(s1, s2):
    for key in range(26):
        if encode(s1, key) == s2:
            return True
    return False

with open("wyniki_6_3.txt", "w") as f:
    for s in file:
        s = s.split()
        if not valid(s[0], s[1]):
            f.write(s[0] + '\n')
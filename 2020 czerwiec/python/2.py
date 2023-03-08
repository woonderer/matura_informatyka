with open("pary.txt", "r") as f:
    pary = f.read().strip().split('\n')

for p in pary:
    n, s = p.split()
    best, symbol, prv, cur = 1, s[0], ' ', 0
    for c in s:
        if c == prv:
            cur += 1
            if cur > best:
                best = cur
                symbol = c
        else:
            cur = 1
        
        prv = c
    
    print(symbol * best, best)
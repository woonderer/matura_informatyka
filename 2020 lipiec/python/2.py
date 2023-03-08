with open("identyfikator.txt", "r") as f:
    ident = f.read().strip().split('\n')

with open("wyniki4_2.txt", "w") as f:
    for id in ident:
        letters = id[:3]
        numbers = id[3:]
        if letters == letters[::-1] or numbers == numbers[::-1]:
            f.write(id + '\n')
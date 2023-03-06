with open("punkty.txt", "r") as f:
    p = f.read().strip().split('\n')

inside, boundary, outside = 0, 0, 0
for pair in p:
    x, y = list(map(int, pair.split()))
    if x < 5000 and y < 5000:
        inside += 1
    elif x > 5000 or y > 5000:
        outside += 1
    else:
        boundary += 1
print(inside, boundary, outside)    
with open("dane.txt", "r") as f:
    file = list(map(int, f.read().strip().replace('\n', ' ').split()))

print(max(file), min(file))
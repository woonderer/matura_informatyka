with open("sygnaly.txt", "r") as f:
    slowa = f.read().strip().split('\n')

ans = ""
for i in range(39, len(slowa), 40):
    ans += slowa[i][9]
print(ans)
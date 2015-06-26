from itertools import permutations
n = int(input())
ans = 0
r = [int(input(), 2) for i in range(n)]
for i in range(n):
    x = 0
    for j in range(n):
        if r[i] == r[j]:
            x += 1
    ans = max(x, ans)
print(ans)

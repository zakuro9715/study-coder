input()
s = []
for i in sorted(map(int, input().split())):
    if not s or s[-1][0] != i:
        s.append([i, 0])
    s[-1][1] += 1


def take():
    n = -1
    while s:
        x = s[n][0]
        if s[n][1] >= 2:
            s[n][1] -= 2
            if not s[n][1]:
                s.pop()
            return x
        if len(s) > 1 and s[n][0] - s[n - 1][0] == 1 and s[n][1] + s[n - 1][1] >= 2:
            nn = s.pop()[1]
            s[n][1] -= 2 - nn
            if not s[n][1]:
                s.pop()
            return x - 1
        s.pop()

ans = 0
while True:
    n1 = take()
    n2 = take()
    if not(n1 and n2):
        break
    ans += n1 * n2
print(ans)

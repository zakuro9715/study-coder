w, mm = map(int, input().split())
m = []
for i in reversed(range(0, 40)):
    x = mm // w**i
    m.append(x)
    mm -= x * w**i
s = [False] * len(m)
m = list(reversed(m))
for i in range(0, len(m) - 1):
    v = m[i]
    if v == 0:
        pass
    elif v == 1:
        s[i] = True
    elif v == w - 1:
        s[i] = True
        if i + 1 < len(m):
            m[i + 1] += 1
    elif v == w:
        if i + 1 < len(m):
            m[i + 1] += 1
    else:
        print('NO')
        break
else:
    print('YES')

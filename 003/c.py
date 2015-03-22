from itertools import chain
N = int(input())
M = list(map(int, input().split()))
p = list(chain.from_iterable([[(x , y) for x in range(m)] for y, m in enumerate(M)]))
c = []
values = []
for i in range(N):
    x = list(map(int, input().split()))
    c.append(x)
    values.extend(x)

values = list(sorted(values))

def find(v):
    for y in range(N):
        for x in range(M[y]):
            if c[y][x] == v:
                return (x, y)

s = []
for i, v in enumerate(values):
    x1, y1 = find(v)
    x2, y2 = p[i]
    if (x1, y1) == (x2, y2):
        continue
    s.append((y1, x1, y2, x2))
    c[y1][x1], c[y2][x2] = c[y2][x2], c[y1][x1]
print(len(s))
print('\n'.join(map(lambda v: ' '.join(list(map(lambda vv: str(vv + 1), v))) ,s)))

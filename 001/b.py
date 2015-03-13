import sys
sys.setrecursionlimit(10000000)
def dfs(gn, i, cnt):
    if cnt > 3:
        raise ValueError()
    if belong[i] != -1:
        raise ValueError()
    belong[i] = gn
    groups[gn].append(i)
    for n in g[i]:
        if belong[n] != gn:
            dfs(gn, n, cnt + 1)


N, M = map(int, input().split())
g = [[] for i in range(50)]
belong = [-1] * 50
alone = []
groups = []

for i in range(M):
    a, b = map(int, input().split())
    g[a - 1].append(b - 1)
    g[b - 1].append(a - 1)

gn = 0
for i in range(N):
    if len(g[i]) == 0:
        alone.append(i)
        continue
    if belong[i] != -1:
        continue
    groups.append([])
    try:
        dfs(gn, i, 1)
    except:
        print(-1)
        sys.exit()
    gn += 1

for group in groups:
    if len(group) == 2:
        if len(alone) == 0:
            print(-1)
            sys.exit()
        group.append(alone.pop())
    elif len(group) > 3:
        print(-1)
        sys.exit()
for group in groups:
    print(' '.join(map(lambda x: str(x + 1), group)))

for i, v in enumerate(alone):
    print(v + 1, end=(' ' if (i + 1) % 3 else '\n'))

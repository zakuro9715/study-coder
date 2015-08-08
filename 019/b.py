n, k = map(int, input().split())
m = [['S' for i in range(n)] for j in range(n)]
yes = False
for y in range(0, n):
    for x in range(y % 2, n, 2):
        if not k:
            break
        m[y][x] = 'L'
        k -= 1
    else:
        continue
    break
if k:
    print('NO')
else:
    print('YES')
    print('\n'.join([''.join(mm) for mm in m]))

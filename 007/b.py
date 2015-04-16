a, b = map(int, input().split())
x = [5, 3, 2]
xx = [1, 1, 1]
aa, bb = [0] * 7, [0] * 7
for i, v in enumerate(x):
    while a % v == 0:    
        aa[i] += 1
        a //= v
    while b % v == 0:
        bb[i] += 1
        b //= v
if a != b:
    print(-1)
else:
    print(sum([ abs(aaa - bbb) for aaa, bbb in zip(aa, bb)]))

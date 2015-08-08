n = int(input())
a = list(map(int, input().split()))
v = [0] * 2001
for aa in a:
    v[aa] += 1
print(' '.join([str(sum(v[aa + 1:]) + 1) for aa in a]))

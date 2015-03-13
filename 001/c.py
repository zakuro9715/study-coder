N, K = map(int, input().split())
s = list(map(int, input().split()))
ss = []
sn = 0
for i in range(K - 1):
    ss.append(s[i])
    sn += s[i]

a = 0
an = sn
for i in range(1, N):
    n = (i + K) % N
    print(n, sn)
    sn -= ss.pop(0)
    ss.append(s[n])
    sn += s[n]
    if an > sn:
        an = sn
        a = i
print(i)

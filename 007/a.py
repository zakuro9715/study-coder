a, b = map(int, input().split())
v = list(sorted(map(int, input().split())))
v.append(v[-1])
print('{0:.9f}'.format(max(max([v[i] - v[i - 1] for i in range(1, len(v))]) / 2, max(v[0], (b - v[-1])))))

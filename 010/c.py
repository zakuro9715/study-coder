print(sum(map(lambda x: (-1 if (x[0] % 2) else 1) *x[1]**2 * 3.14159265358979, enumerate(reversed(sorted(map(int,  list(input())[:0] + input().split())))))))

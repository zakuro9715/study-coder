input()
s = list(sorted(map(int, input().split())))
print(1, s[0])
if s[-1] > 0:
    print(1, s[-1])
    print(len(s) - 2, ' '.join(map(str, s[1:-1])))
else:
    print(2, s[1], s[2]) # print -y, -z
    print(len(s) - 3, ' '.join(map(str, s[3:])))

print('Oh, my keyboard!' if int(input()) - len(set(map(int, input().split()[1:] + input().split()[1:]))) else 'I become the guy.')

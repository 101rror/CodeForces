import re

t = int(input())

for i in range(0, t):
    n = int(input())
    s = str(input())

    if re.match('^[mM]+[eE]+[oO]+[wW]+$',s):
        print('YES')
    else:
        print('NO')
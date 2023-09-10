t = int(input())

for _ in range(t):
    l, r = map(int, input().split())

    a = l
    b = (2 * l)

    if(b <= r):
        print(a, b)
    else:
        print(-1, -1)
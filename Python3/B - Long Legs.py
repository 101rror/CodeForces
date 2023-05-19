t = int(input())

for _ in range(t):
    a, b = map(int, input().split())
    N = 100010

    ans = (a + b)

    for i in range(1, N):
        x = (a + i - 1) // i + (b + i - 1) // i + (i - 1)
        ans = min(ans, x)

    print(ans)
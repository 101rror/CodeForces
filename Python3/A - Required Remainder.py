t = int(input())

for _ in range(t):
    x, y, n = map(int, input().split())
    check = (n % x)
    ans = (n - n % x + y)
    
    if (check < y):
        print(int(ans - x))
    else:
        print(int(ans))
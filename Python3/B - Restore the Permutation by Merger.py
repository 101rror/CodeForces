t = int(input())

for _ in range(t):
    ans = []
    n = int(input())
    lst = list(map(int, input().strip().split()))

    for num in lst:
        if num not in ans:
            ans.append(num)

    print(*ans , sep=' ')
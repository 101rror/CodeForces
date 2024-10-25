t = int(input())

for _ in range(t):
    ans = []
    lst = list(map(int, input().strip().split()))

    ans.append(lst[0])
    ans.append(lst[1])
    ans.append(lst[len(lst) - 1] - (lst[0] + lst[1]))

    print(*ans , sep=' ')
t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    count = 0
    mx = 1

    for i in range(1, n - 1):
        if(arr[i] == arr[i - 1]):
            mx += 1
        else:
            count += mx - 1
            mx = 1
    count += mx - 1

    print(count)
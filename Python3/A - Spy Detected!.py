t = int(input())

for _ in range(t):
    n = int(input())

    arr = list(map(int, input().split()))

    for i in range(0, n - 1):
        if(arr[0] != arr[1] and arr[1] == arr[2]):
            print(1)
            break
        elif(arr[i] != arr[i + 1]):
            print(i + 2)
            break
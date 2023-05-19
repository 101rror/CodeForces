arr = list(map(int, input().split(' ')))

ans = sum(arr)

x1 = arr[0] + arr[1]
x2 = arr[2] + arr[3]
x3 = arr[0] + arr[3]
x4 = arr[1] + arr[2]
x5 = arr[0] + arr[2]
x6 = arr[1] + arr[3]
x7 = arr[1] + arr[2] + arr[3]
x8 = arr[0]
x9 = arr[0] + arr[2] + arr[3]
x10 = arr[1]
x11 = arr[0] + arr[1] + arr[3]
x12 = arr[2]
x13 = arr[0] + arr[1] + arr[2]
x14 = arr[3]

if(x1 == x2 or x3 == x4 or x5 == x6 or x7 == x8 or x9 == x10 or x11 == x12 or x13 == x14):
    print("YES")
else:
    print("NO")
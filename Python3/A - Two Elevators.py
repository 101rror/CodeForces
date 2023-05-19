t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())

    x = abs(a - 1)
    y = abs(c - b) + (c - 1)

    if(x == y):
        print("3")
    elif(x < y):
        print("1")
    else:
        print("2")
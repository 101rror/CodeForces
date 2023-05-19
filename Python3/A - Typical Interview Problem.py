t = int(input())

for _ in range(t):
    x = int(input())
    s = str(input())

    check = "FBFFBFFBFBFFBFFBFB"

    if s in check:
        print("YES")
    else:
        print("NO")
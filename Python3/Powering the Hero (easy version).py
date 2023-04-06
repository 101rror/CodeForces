t = int(input())

for i in range(t):
    n = int(input())
    card = list(map(int, input().split()))
    ans = 0
    newlist = []

    for i in card:
        if(i > 0):
            newlist.append(i)
        if(i == 0):
            if(newlist):
                mx = max(newlist)
                ans += mx
                newlist.remove(mx)

    print(ans)
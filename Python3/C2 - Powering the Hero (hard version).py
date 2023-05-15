from heapq import heappush,heappop

t = int(input())

for i in range(t):
    n = int(input())
    card = list(map(int, input().split()))
    ans = 0
    newlist = []

    for i in card:
        if(i == 0):
            if(newlist):
                mx = heappop(newlist)
                ans += mx
        else:
            heappush(newlist, -i)
        
    print(abs(ans))
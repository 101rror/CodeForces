k = int(input())
a = list(map(int, input().split()))
a = sorted(a, reverse = True)

tsum = sum(a)
if(tsum < k):
    print(-1)
else:
    j = 0
    sm = 0
    count = 0

    while(sm < k):
        sm += a[j]
        count += 1
        j += 1

    print(count)
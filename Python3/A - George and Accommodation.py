n = int(input())
count = 0

for i in range(n):
    p, q = map(int, input().split())

    check = (q - p)

    if(check >= 2):
        count += 1

print (count)
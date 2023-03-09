a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
c = [int(i) for i in input().split()]
d = [int(i) for i in input().split()]
e = [int(i) for i in input().split()]

if(sum(a) != 0):
    i = 1
    j = a.index(1)+1
elif(sum(b) != 0):
    i = 2
    j = b.index(1)+1
elif(sum(c) != 0):
    i = 3
    j = c.index(1)+1
elif(sum(d) != 0):
    i = 4
    j = d.index(1)+1
elif(sum(e) != 0):
    i = 5
    j = e.index(1)+1

ans = abs(i - 3) + abs(3 - j)

print(ans)
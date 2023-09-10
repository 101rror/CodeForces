s1 = str(input())
s2 = str(input())
ans = ''

n = int(len(s1))

for i in range(n):
    if(s1[i] == s2[i]):
        ans += str(0)
    else:
        ans += str(1)

print(ans)
t = int(input())

for _ in range(t):
    n = int(input())
    s = str(input())

    count = n

    for i in range(0, n - 2):
        if(s[i] == s[i + 2]):
            count -= 1
    
    print(count - 1)
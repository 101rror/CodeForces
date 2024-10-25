def passion():
    n = int(input())
    
    if(n % 2 == 0):
        ans = []

        for i in range(n):
            if(i % 2 == 0):
                ans.append(i + 2)
            else:
                ans.append(i)

        print(*ans)

    else:
        ans = [3,1,2]

        for i in range(4, n, 2):
            ans.append(i + 1)
            ans.append(i)

        print(*ans)


def main():
    ToS = int(input())
    ToE = ToS

    while(ToE > 0):
        passion()
        ToE -= 1

if __name__ == "__main__":
    main()
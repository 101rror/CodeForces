def passion():
    a, b, c = map(int, input().split())
 
    n = 2 * abs(a - b)
    
    if (a > n or b > n or c > n):
        print(-1)
    else:
        ans = n // 2 + c
        while ans > n:
            ans -= n
        print(ans)

    
def main():
    ToS = int(input())
    ToE = ToS

    while(ToE > 0):
        passion()
        ToE -= 1

if __name__ == "__main__":
    main()
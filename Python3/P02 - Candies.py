n = int(input())

arr = list(map(int, input().split()))

A, B = map(int, input().split())
sum = 0

for i in range(A, B + 1):
    sum += arr[i]

print(sum)
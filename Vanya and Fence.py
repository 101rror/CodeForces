import array as arr

n, h = map(int,input().split())

arr = [int(i) for i in input().split()]

sum = 0

for i in range (0, n):
    if(arr[i] % h != 0):
        sum += (arr[i] // h) + 1
    elif(arr[i] % h == 0):
        sum += arr[i] // h

print (int(sum))
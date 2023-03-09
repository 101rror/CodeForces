import array as arr

n = int(input())
arr = [int(i) for i in input().split()]
arr = sorted(arr)

sarr = [str(i) for i in arr]

print(' '.join(sarr))
x = int(input())
 
if(x <= 5):
    print(1)
 
else:
    if(x % 5 != 0):
        print(int(x / 5) + 1)
    else:
        print(int(x / 5))
n = int(input())
s = str(input())
CA = 0
CD = 0

for i in range(n):
    if(s[i] == 'A'):
        CA += 1
    else:
        CD += 1

if(CA > CD):
    print("Anton")
elif(CA < CD):
    print("Danik")
else:
    print("Friendship")

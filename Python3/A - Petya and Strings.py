s1 = str(input())
s2 = str(input())

s1 = s1.lower()
s2 = s2.lower()

if(s1 == s2):
    print("0")
elif(s1 > s2):
    print("1")
else:
    print("-1")
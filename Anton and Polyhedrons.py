t = int(input())
sum = 0

for i in range(0, t):
    s = str(input())
    if(s == "Tetrahedron"):
        sum += 4
    elif(s == "Cube"):
        sum += 6
    elif(s == "Octahedron"):
        sum += 8
    elif(s == "Dodecahedron"):
        sum += 12
    elif(s == "Icosahedron"):
        sum += 20

print(sum)
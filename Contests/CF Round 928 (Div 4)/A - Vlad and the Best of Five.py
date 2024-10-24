t = int(input())

for _ in range(t):
	s = str(input())
	
	a = s.count("A")
	b = s.count("B")
	
	if(a < b):
		print("B")
	else:
		print("A")
	
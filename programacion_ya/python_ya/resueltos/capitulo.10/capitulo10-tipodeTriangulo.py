cantidad = int(input("Ingrese cantidad: "))

for i in range(cantidad):
	l1 = int(input("Lado 1: "))
	l2 = int(input("Lado 2: "))
	l3 = int(input("Lado 3: "))

	if l1 == l2 and l1 == l3:
		print("Equilatero")
	else:
		if l1 == l2 or l1 == l3 or l2 == l3:
			print("Isoceles")
		else:
			print("Escaleno")
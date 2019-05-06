sumaTotal = 0
for i in range(10):
	n = int(input("Ingrese valor "))
	if i > 4:
		sumaTotal += n

print("Suma ultimos 5: ", sumaTotal)
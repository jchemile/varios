cantDeTriangulos = int(input("Cantida de Triangulos"))
mayora12 = 0

for i in range(cantDeTriangulos):
	base = int(input("Ingrese Base: "))
	altura = int(input("Ingrese Altura: "))
	superficie = (base * altura) / 2
	print("superficie: ", superficie)
	if superficie > 12:
		mayora12 += 1

print("Mayores a 12", mayora12)

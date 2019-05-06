cantidad = int(input("Cantidad a procesar: "))

for i in range(cantidad):
	x = int(input("X: "))
	y = int(input("Y: "))

	if x > 0 and y > 0:
		print("Cuadrante 1")
	else:
		if x < 0 and y > 0:
			print("Cuadrante 2")
		else:
			if x < 0 and y < 0:
				print("Cuadrante 3")
			else: 
				if x > 0 and y < 0:
					print("Cuadrante 4")

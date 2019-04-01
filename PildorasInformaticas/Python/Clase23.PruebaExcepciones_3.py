def evaluaEdad(edad):

	if edad < 0:
		raise TypeError("No se permiten edades negativas")


	if edad < 20:
		print("Eres muy joven")
	elif edad < 40:
		print("Eres joven")
	elif edad < 65:
		print("Eres maduro")
	elif edad < 100:
		print("Cuidate...")

print(evaluaEdad(-15))
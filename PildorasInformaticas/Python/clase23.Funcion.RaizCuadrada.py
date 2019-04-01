import math

def calcularRaiz(num1):

	if num1 < 0:
		raise ValueError("El número no puede ser negativo")
	else:
		return math.sqrt(num1)


print(calcularRaiz(25))
valor = int(input("Valor entre 1 y 10: "))

if valor < 1 or valor > 10:
	print("Está fuera del rango")
else:
	for i in range(1,13):
		print(valor, " X ", i, " = ", i * valor)
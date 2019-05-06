positivos = 0
negativos = 0
multiplos15 = 0
acumuladosPares = 0

for i in range(10):
	n = int(input("Valor: "))

	if n > 0:
		positivos += 1
	else:
		if n < 0:
			negativos += 1

	if n % 15 == 0:
		multiplos15 += 1

	if n % 2 == 0:
		acumuladosPares += 1

print("Positivos = ", positivos, " Negativos = ", negativos)
print("Múltiplos de 15 = ", multiplos15, " Sumatoria de los pares = ", acumuladosPares)

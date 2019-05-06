cantidad = 0
n = int(input("Cantidad de numeros a ingresar"))

for f in range(n):
	valor = int(input("Ingrese valor: "))
	if valor >= 1000:
		cantidad = cantidad + 1

print("Mayores a 1000: ", cantidad)
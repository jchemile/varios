cantidad = 0
suma = 0

while cantidad < 10:
    n = int(input("Ingrese valor: "))
    suma += n
    cantidad += 1

print("La suma de lo ingresado es: ", suma)
print("El promedio es: ", suma/10)

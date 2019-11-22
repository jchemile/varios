nota = 0
ingresadas = 0
mayorOIgualA7 = 0
menorA7 = 0

while ingresadas < 10:
    nota = int(input("Ingrese nota: "))
    if nota < 7:
        menorA7 += 1
    else:
        mayorOIgualA7 += 1
    ingresadas += 1

print("Mayores o iguales: ", mayorOIgualA7, ". Menores: ", menorA7)

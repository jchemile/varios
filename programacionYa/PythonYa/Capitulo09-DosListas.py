lista1 = 0
lista2 = 0
ingresados = 0

print("Valores para la lista 1")
while ingresados < 5:
    valor = int(input("Ingrese valor: "))
    lista1 += valor
    ingresados += 1

ingresados = 0

print("Valores para la lista 2")
while ingresados < 5:
    valor = int(input("Ingrese valor: "))
    lista2 += valor
    ingresados += 1


if lista1 > lista2:
    print("Lista 1")
else:
    if lista2 > lista1:
        print("Lista 2")
    else:
        print("Iguales")

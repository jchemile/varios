valor1 = int(input("Valor 1: "))
valor2 = int(input("Valor 2: "))
suma = valor1 + valor2

print(f"La suma de {valor1} y {valor2} es {suma}")

lista = [2000, 1, 4, 500,200000]

for elem in lista:
    print(f"{elem:10}")
print("-----------------------")
print(f"{sum(lista):10}")


lista2 = [1.3, 20.52, 50.19823]

for elem2 in lista:
    print(f"{elem2:10.2f}")
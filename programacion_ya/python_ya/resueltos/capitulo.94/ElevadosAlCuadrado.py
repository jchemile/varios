lista1 = [8,5,4,10,2]
lista2 = []

for elem in lista1:
    lista2.append(elem*elem)

print(lista1)
print(lista2)

lista3 = [elemento * elemento for elemento in lista1]
print(lista3)
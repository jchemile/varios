import random

def cargar():
    lista = []
    for x in range(2):
        valor = random.randint(1,3)
        lista.append(valor)
        lista.append(1)
    return lista

def mezclar(lista):
    primerElemento = lista[0]

    while primerElemento!= 1:
        random.shuffle(lista)
        primerElemento = lista[0]

lista = cargar()
print(lista)
mezclar(lista)
print(lista)
import random

def cargar():
    lista = []
    for x in range(10):
        lista.append(random.randint(0,1000))
    return lista

def imprimir(lista):
    print(lista)

def mezclar(lista):
    random.shuffle(lista)


lista = cargar()
print("Lista Generada: ")
imprimir(lista)
print("Lista Mezclada: ")
mezclar(lista)
imprimir(lista)
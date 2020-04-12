def cargar():
    lista = []
    for x in range(10):
        valor = int(input("Valor: "))
        lista.append(valor)
    return lista


def imprimir(lista):
    for x in range(len(lista)):
        print(lista[x], end=",")

lista = cargar()
imprimir(lista)
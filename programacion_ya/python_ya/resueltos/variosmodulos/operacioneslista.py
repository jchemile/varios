def cargar():
    lista = []
    for x in range(5):
        valor=int(input("Ingrese valor: "))
        lista.append(valor)
    return lista

def imprimir_mayor(lista):
    may=lista[0]
    for x in range(len(lista)):
        if lista[x] > may:
            may = lista[x]
    print("Mayor: ", may)

def imprimir_suma(lista):
    suma = 0
    for elem in lista:
        suma += elem
    print("Suma:", suma)

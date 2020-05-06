def cargar():
    lista = []
    for x in range(5):
        num = int(input("Ingrese Valor: "))
        lista.append(num)
    return lista

def imprimir(lista):
    print("Lista completa")
    for elemento in lista:
        print(elemento)

def mayor(lista):
    may = lista[0]
    for elemento in lista:
        if elemento > may:
            may = elemento
    print("El elemento mayor en la lista es", may)

def sumar_elemento(lista):
    suma = 0
    for elemento in lista:
        suma = suma + elemento
    print("La suma de los elementos es: ", suma)

lista = cargar()
imprimir(lista)
mayor(lista)
sumar_elemento(lista)
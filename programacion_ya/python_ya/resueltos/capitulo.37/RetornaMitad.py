def cargar():
    lista = []
    for x in range(10):
        numero = int(input("Numero: "))
        lista.append(numero)
    return lista

def mitad(lista):
    primeraMitad = lista[:5]
    return primeraMitad

def imprimir(lista):
    for elements in lista:
        print(elements)

listacompleta = cargar()
imprimir(listacompleta)
mitad = mitad(listacompleta)
print(mitad)




def cargar():
    lista= []
    for x in range(5):
        palabra = input("Palabra: ")
        lista.append(palabra)
    return lista

test = ["a","b","c","d","e"]

def intercambiar(lista):
    primero = lista[0]
    ultimo  = lista[-1]
    lista[0] = ultimo
    lista[-1] = primero

print(test)
intercambiar(test)
print(test)
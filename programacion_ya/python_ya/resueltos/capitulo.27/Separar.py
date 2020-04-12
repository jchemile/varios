def cargarEnteros(enteros):
    for i in range(10):
        x = int(input("Ingrese numero: "))
        enteros.append(x)
    return enteros

def separarPorSigno(enteros):
    positivos = []
    negativos = []
    for x in range(len(enteros)):
        if enteros[x] > 0:
            positivos.append(enteros[x])
        else:
            if enteros[x] < 0:
                negativos.append(enteros[x])

    return positivos, negativos

numeros = []
numeros = cargarEnteros(numeros)
positivos, negativos = separarPorSigno(numeros)
print(positivos)
print("")
print(negativos)
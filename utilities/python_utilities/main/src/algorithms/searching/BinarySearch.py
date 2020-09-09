def binary_search(numeros, buscado):
    izq, der = 0, len(numeros) - 1
    encontrado = False

    while izq <= der:
        mid = (izq + der) // 2
        if buscado == numeros[mid]:
            encontrado = True
        elif buscado > numeros[mid]:
            izq = mid + 1
        else:
            der = mid - 1

    return encontrado


numeros = [1, 2, 3, 4, 5, 6, 7, 8, 12, 31, 5, 54, 5, 6, 135, 73, 64, 54, 21, 441, 14, 20]

numeros.sort()
print(binary_search(numeros, 11))

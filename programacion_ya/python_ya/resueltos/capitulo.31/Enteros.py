def cagarEnteros():
    lista = []
    for i in range(5):
        valor = int(input("Numero: "))
        lista.append(valor)
    return lista

def mayorYMenor(lista):
    mayor = lista[0]
    menor = lista[0]

    for x in range(len(lista)):

        if mayor < lista[x]:
            mayor = lista[x]

        if menor > lista[x]:
            menor = lista[x]

    return (mayor, menor)

numeros = cagarEnteros()
print(type(numeros))

mayorymenor = mayorYMenor(numeros)
print(mayorymenor[0])
print(mayorymenor[1])
print(type(mayorymenor))
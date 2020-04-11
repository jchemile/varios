def mayormenor(lista):
    may = lista[0]
    men = lista[0]
    for x in range(1, len(lista)):
        if lista[x] > may:
            may = lista[x]
        else:
            if lista[x] < men:
                men = lista[x]
    print("Mayor", may)
    print("Menor", men)

lista = []
for x in range(5):
    valor = int(input("Valor: "))
    lista.append(valor)
mayormenor(lista)
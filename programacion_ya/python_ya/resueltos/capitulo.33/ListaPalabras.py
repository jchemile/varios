def mayorAcinco(lista):
    for palabra in lista:
        if len(palabra) > 5:
            print(palabra)

lista =  ["Casa", "Arbol", "carabobo"]
mayorAcinco(lista)
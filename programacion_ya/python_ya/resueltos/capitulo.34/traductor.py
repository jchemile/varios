def cargar():
    diccionario = {}
    continua = "s"
    while continua =="s":
        caste = input("Palabra en castellano: ")
        ing = input("Palabra en Ingles: ")
        diccionario[ing] = caste
        continua = input("Continua [s/n]")
    return diccionario

def imprimir(diccionario):
    print("Listado: ")
    for ingles in diccionario:
        print(ingles, diccionario[ingles])

def consultar_palabra(diccionario):
    pal = input("Ingrese: ")
    if pal in diccionario:
        print("Castellano: ", diccionario[pal])

diccionario = cargar()
imprimir(diccionario)
consultar_palabra(diccionario)


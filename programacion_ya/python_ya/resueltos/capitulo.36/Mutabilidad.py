def cargar():
    lista = []
    continua = "s"
    while continua == "s":
        valor = int(input("Valor: "))
        lista.append(valor)
        continua = input("Continua [s/n]: ")
    return lista

def fijar_cero(li):
    for x in range(len(li)):
        if li[x] < 10:
            li[x] = 0

def imprimir(li):
    for elemento in li:
        print(elemento)
    print("")


lista = cargar()
imprimir(lista)
fijar_cero(lista)
imprimir(lista)
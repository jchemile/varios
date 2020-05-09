def cargar():
    nombres = []
    for x in range(5):
        nom = input("Nombre: ")
        nombres.append(nom)
    return nombres

def ordenar(nombres):
    for k in range(4):
        for x in range(4):
            if nombres[x]>nombres[x+1]:
                aux = nombres[x]
                nombres[x] = nombres[x+1]
                nombres[x+1] = aux

def imprimir(nombres):
    for nombre in nombres:
        print(nombre)

nombres = cargar()
ordenar(nombres)
imprimir(nombres)
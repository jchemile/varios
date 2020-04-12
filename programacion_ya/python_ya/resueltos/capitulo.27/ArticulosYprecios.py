def cargarArticulos(articulos, precios):
    for x in range(5):
        articulo = input("Articulo: ")
        precio = int(input("Precio: "))
        articulos.append(articulo)
        precios.append(precio)
    return [articulos, precios]

def imprimirNombreYPrecios(articulos, precios):
    for x in range(len(articulos)):
        print("Articulo: ", articulos[x], " Precio: ", precios[x])

def imprimirNombreMayor(articulos, precios):
    my = precios[0]
    nombre = articulos[0]
    for x in range(len(articulos)):
        if my < precios[x]:
            nombre = articulos[x]
    print("Articulo MAYOR: ", nombre, " Precio: ", precios[x])


def menorQue(articulos,precios, precio):
    for x in range(len(articulos)):
        if(precios[x] < precio):
            print("Articulo: ", articulos[x], " Precio: ", precios[x])


articulos = []
precio = []

articulos, precio = cargarArticulos(articulos, precio)
imprimirNombreYPrecios(articulos, precio)
imprimirNombreMayor(articulos, precio)
menorQue(articulos, precio, 50)
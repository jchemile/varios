def cargar():
    productos = []
    for i in range(5):
        producto = input("Producto: ")
        precio = int(input("Precio: "))
        productos.append((producto, precio))
    return productos

def imprimir(productos):
    for producto, precio in productos:
        print("Producto ", producto, "Precio ", precio)


def entreDiezYQuince(productos):
    for producto, precio in productos:
        if precio >= 10 and precio <= 15:
            print("Producto ", producto, "Precio ", precio)

productos = cargar()
imprimir(productos)
entreDiezYQuince(productos)
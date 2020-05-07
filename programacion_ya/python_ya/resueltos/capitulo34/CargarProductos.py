def cargar():
    productos = {}
    for x in range(5):
        nombre = input("Ingrese nombre del prodcuto: ")
        precio = int(input("Ingrese el precio: "))
        productos[nombre] = precio
    return productos

def imprimir(productos):
    print("Listad de todos los artículos:")
    for nombre in productos:
        print(nombre, productos[nombre])

def imprimirMayorA100(productos):
    print("Mayores a 100")
    for nombre in productos:
        if productos[nombre] > 100:
            print(nombre)

productos = cargar()
imprimir(productos)
imprimirMayorA100(productos)
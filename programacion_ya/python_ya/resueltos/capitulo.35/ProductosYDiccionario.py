def cargar():
    productos = {}
    continua = "s"
    while continua =="s":
        codigo = int(input("Codigo: "))
        descripcion = input("Descripcion: ")
        precio = float(input("Precio: "))
        stock = int(input("Stock: "))
        productos[codigo] = (descripcion, precio, stock)
        continua = input("otro producto [s/n]")
    return productos

def imprimir(productos):
    print("Listado: ")
    for codigo in productos:
        print(codigo, productos[codigo][0],productos[codigo][1],productos[codigo][2])


def consulta(productos):
    codigo = int(input("Codigo: "))
    if codigo in productos:
        print(codigo, productos[codigo][0],productos[codigo][0],productos[codigo][0])

def listado_stock_cero(productos):
    print("Sin stock: ")
    for codigo in productos:
        if productos[codigo][2] == 0:
            print(codigo, productos[codigo][0],productos[codigo][0],productos[codigo][0])

productos = cargar()
imprimir(productos)
consulta(productos)
listado_stock_cero(productos)
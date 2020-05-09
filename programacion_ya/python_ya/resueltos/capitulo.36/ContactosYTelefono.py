def cargar():
    contactos = {}
    continua = "s"
    while continua == "s":
        nombre   =input("Nombre: ")
        telefono =input("Telefono: ")
        contactos[nombre] = telefono
        continua = input("Continua [s/n]: ")
    return contactos

def modificar_telefono(contactos):
    nombre = input("Ingrese el nombre del contacto: ")
    if nombre in contactos:
        telefono = input("Ingrese el numero: ")
        contactos[nombre] = telefono
    else:
        print("No existe un contacto con el nombre ingresado")

def imprimir(contactos):
    print("CONTACTOS")
    for nombre in contactos:
        print(nombre, contactos[nombre])

contactos = cargar()
modificar_telefono(contactos)
imprimir(contactos)
def cargar():
    persona = {}
    for i in range(5):
        dni = input("DNI: ")
        nombre = input("Nombre: ")
        persona[dni] = nombre
    return persona

def imprimirListado(personas):
    for dni in personas:
        print(dni, personas[dni])

def consultaPersona(personas):
    dniABuscar = input("DNI a Buscar: ")
    for dni in personas:
        if dni == dniABuscar:
            print(personas[dni])

personas = cargar()
imprimirListado(personas)
consultaPersona(personas)
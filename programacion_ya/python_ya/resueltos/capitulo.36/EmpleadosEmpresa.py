def cargar():
    empleados = {}
    continua = "s"
    while continua == "s":
        legajo = input("Legajo: ")
        nombre = input("Nombre: ")
        profesion = input("Profesion: ")
        sueldo = int(input("Sueldo: "))
        empleados[legajo] = [nombre, profesion, sueldo]
        continua = input("Otro empleado: [s/n] ")
    return empleados


def modificarSueldo(empleados):
    legajoAModificar = input("Legajo a Modificar: ")
    for legajo in empleados:
        if legajoAModificar == legajo:
            sueldoNuevo = int(input("Sueldo Nuevo: "))
            empleados[legajoAModificar][2] = sueldoNuevo
        else:
            print("No Encontrado")
    return 0

def imprimir(empleados):
    for legajo in empleados:
        print(legajo, empleados[legajo][0],empleados[legajo][1],empleados[legajo][2])


empleados = cargar()
modificarSueldo(empleados)
imprimir(empleados)
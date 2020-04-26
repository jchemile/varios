def cargarEmpleado():
    nombre = input("Nombre: ")
    sueldo = int(input("Sueldo: "))

    return (nombre, sueldo)

def mayor_sueldo(empleado1, empleado2):

    if empleado1[1] > empleado2[1]:
        return empleado1[0]
    else:
        return empleado2[0]

juan = cargarEmpleado()
pedro = cargarEmpleado()

print(mayor_sueldo(juan,pedro))
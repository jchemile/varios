def cargar():
    empleados=[]
    for x in range(5):
        nombre = input("Nombre del empleado: ")
        sueldo = int(input("Ingrese el sueldo: "))
        empleados.append((nombre,sueldo))
    return empleados

def imprimir(empleados):
    print("Listado de los nombres de empleados y sus sueldos: ")
    for nombre, sueldo in empleados:
        print(nombre, sueldo)

def mayor_sueldo(empleados):
    cant = 0
    for empleado in empleados:
        if empleado[1]<1000:
            cant = cant + 1
        print("Cantidad de empleados con un sueldo menor a 1000 son: ", cant)


def sueldo_menor1000(empleados):
    cant = 0
    for empleado in empleados:
        if empleados[1] < 1000:
            cant = cant+1
    print("Cantida de empleados con sueldo menor a 1000: ", cant)

empleados = cargar()
imprimir(empleados)
mayor_sueldo(empleados)
sueldo_menor1000(empleados)
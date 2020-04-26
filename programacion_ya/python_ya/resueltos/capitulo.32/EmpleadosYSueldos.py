def cargarEmpleados():
    datosEmpleados = []
    for e in range(2):
        nombre = input("Nombre: ")
        sueldo1 = int(input("Sueldo: "))
        sueldo2 = int(input("Sueldo: "))
        sueldo3 = int(input("Sueldo: "))
        datosEmpleados.append([nombre, (sueldo1, sueldo2, sueldo3)])
    return datosEmpleados

def montototal(datos):
    for i in range(len(datos)):
        total = datos[i][1][0] + datos[i][1][1] + datos[i][1][2]
        print(datos[i][0], total)

def mayoresADiezMil(datos):
        for i in range(len(datos)):
            total = datos[i][1][0] + datos[i][1][1] + datos[i][1][2]
            if total > 10000:
                print(datos[i][0], "mas de 10000")



operarios = cargarEmpleados()
#print(operarios)
montototal(operarios)
mayoresADiezMil(operarios)


def cargar_sueldo(sueldos):
    for x in range(4):
        sueldo = int(input("Ingrese sueldo: "))
        sueldos.append(sueldo)
    return sueldos

def imprimir_sueldos(sueldos):
    for x in range(len(sueldos)):
        print("Sueldo: ", sueldos[x])

def imprimir_sueldosMayorACuatroMil(sueldos):
    for x in range(len(sueldos)):
        if sueldos[x] > 4000:
            print("Sueldo mayor a 4000: ", sueldos[x])

def promedio(sueldos):
    suma = 0
    for x in range(len(sueldos)):
        suma += sueldos[x]

    print("Promedio: ", (suma/len(sueldos)))


sueldos = []
sueldos = cargar_sueldo(sueldos)
imprimir_sueldos(sueldos)
imprimir_sueldosMayorACuatroMil(sueldos)
promedio(sueldos)

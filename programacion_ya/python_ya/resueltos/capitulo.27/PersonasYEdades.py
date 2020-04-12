def cargar_datos():
    nom = []
    ed  = []
    for x in range(5):
        v1 = input("Nombre: ")
        nom.append(v1)
        v2 = int(input("Edad: "))
        ed.append(v2)
    return [nom, ed]

def mayores_edad(nom, ed):
    print("Nombre mayores: ")
    for x in range(len(nom)):
        if ed[x] >= 18:
            print(nom[x])

def prom_edades(ed):
    suma = 0
    for x in range(len(ed)):
        suma = suma+ed[x]
    promedio = suma//5
    print("Promedio: ", promedio)

nombres, edades = cargar_datos()
mayores_edad(nombres, edades)
prom_edades(edades)
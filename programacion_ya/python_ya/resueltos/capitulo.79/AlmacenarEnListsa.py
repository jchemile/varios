archil = open("datos.txt", "r")
lineas = archil.readline()
print("Lineas: ", len(lineas))
print("Contenido:")
for linea in lineas:
    print(linea, end='')
archil.close()
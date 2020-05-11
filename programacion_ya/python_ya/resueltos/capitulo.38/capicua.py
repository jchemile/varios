def capicua(cadena):
    indice  = -1
    iguales = 0
    for x in range(0,len(cadena)//2):
        if cadena[x] == cadena[indice]:
            iguales = iguales + 1
        indice = indice - 1
    if iguales == (len(cadena)//2):
        print(cadena, "Capicua")
    else:
        print(cadena, "No Capicua")

capicua("neuquen")
capicua("casa")
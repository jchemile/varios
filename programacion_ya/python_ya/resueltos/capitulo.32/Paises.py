def cargar_paisespoblacion():
    paises=[]
    for x in range(5):
        nom  = input("Pais: ")
        cant = int(input("Habitantes: "))
        paises.append((nom,cant))
    return paises

def imprimir(paises):
    print("Paises y su poblacion")
    for x in range(len(paises)):
        print(paises[x][0], paises[x][1])

def pais_maspoblacion(paises):
    pos = 0
    for x in range(1, len(paises)):
        if paises[x][1]> paises[pos][1]:
            pos = x
    print("Mas Poblado: ", paises[pos][0])


paises= cargar_paisespoblacion()
imprimir(paises)
pais_maspoblacion(paises)
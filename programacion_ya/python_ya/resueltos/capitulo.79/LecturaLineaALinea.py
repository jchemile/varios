archil = open("datos.txt", "r")
linea = archil.readline()
while linea != '':
    print(linea, end='')
    linea=archil.readline()
archil.close()

archil = open("datos.txt", "r")
for linea in archil:
    print(linea)
archil.close()
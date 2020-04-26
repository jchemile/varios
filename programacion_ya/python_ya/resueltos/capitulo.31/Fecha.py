def cargar_fecha():
    dd = int(input("Dia: "))
    mm = int(input("Mes: "))
    yy = int(input("Año: "))
    return (dd,mm, yy)

def imprimir_fecha(fecha):
    print(fecha[0],fecha[1],fecha[2],sep="/")

fecha = cargar_fecha()
imprimir_fecha(fecha)
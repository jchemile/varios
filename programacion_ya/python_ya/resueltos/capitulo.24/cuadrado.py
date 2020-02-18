def mostrar_perimetro(lado):
    per = lado * 4
    print("El perimetro es", per)

def mostrar_superficie(lado):
    sup = lado * lado
    print("La superficie es", sup)

def cargar_dato():
    la = int(input("Ingrese Lado: "))
    resp = input("perimetro[p]/area[a]")
    if resp == "p":
        mostrar_perimetro(la)
    else:
        mostrar_superficie(la)

cargar_dato()
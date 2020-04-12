def titulo_subrayado(titulo, caracter ="*"):
    print(titulo)
    print(caracter*len(titulo))


titulo_subrayado("Prueba de titulo")
titulo_subrayado("Ventas", "-")

def sumaEnteros(val1, val2, val3=1, val4=1, val5=1):
    print(val1+val2+val3+val4+val5)


sumaEnteros(1,-20)
sumaEnteros(1,-20,-5,-8,-10)
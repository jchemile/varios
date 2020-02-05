def presentacion():
    print("Carga dos valores por teclado")
    print("Suma los valores")
    print("Muestra el resultado")

def cargar_suma():
    valor1 = int(input("Ingrese el primer valor"))
    valor2 = int(input("Ingrese segundo valor"))
    suma = valor1 + valor2
    print("la suma es: ", suma)

def finalizacion():
    print("Programa finalizado")


presentacion()
cargar_suma()
finalizacion()
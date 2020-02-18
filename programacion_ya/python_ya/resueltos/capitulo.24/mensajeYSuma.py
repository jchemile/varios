def monstrar_mensaje(mensaje):
    print("***************************************")
    print(mensaje)
    print("***************************************")

def cargar_suma():
    valor1 = int(input("Ingrese primer valor: "))
    valor2 = int(input("Ingrese segundo valor: "))
    suma = valor1 + valor2
    print("La suma de los valores es: ", suma)

monstrar_mensaje("Ingrese valores")
cargar_suma()
monstrar_mensaje("gracias")
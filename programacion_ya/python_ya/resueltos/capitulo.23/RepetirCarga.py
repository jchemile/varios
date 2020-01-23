def cargar_suma():
    valor1 = int(input("Ingrese el primer valor"))
    valor2 = int(input("Ingrese segundo valor"))
    suma = valor1 + valor2
    print("la suma es: ", suma)

def separcion():
    print("****************************")

for x in range(5):
    cargar_suma()
    separcion()
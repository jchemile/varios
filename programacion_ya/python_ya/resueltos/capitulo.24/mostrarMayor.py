def mostrar_mayor(v1,v2,v3):
    print("El valor mayor de los tres numeros es: ")
    if v1 > v2 and v1 > v3:
        print(v1)
    else:
        if v2 > v3:
            print(v2)
        else:
            print(v3)

def cargar():
    valor1 = int(input("Ingrese primer valor: "))
    valor2 = int(input("Ingrese segundo valor: "))
    valor3 = int(input("Ingrese tercero valor: "))
    mostrar_mayor(valor1, valor2, valor3)


cargar()
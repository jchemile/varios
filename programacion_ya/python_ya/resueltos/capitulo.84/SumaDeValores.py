while True:
    try:
        valor1 = int(input("Valor 1: "))
        valor2 = int(input("Valor 2: "))
        suma = valor1 + valor2
        print("La suma es: ")
    except ValueError:
        print("Debe Ingresar Varlor: ")
    respuesta = input("Desa ingresar otro valro[s/n]")
    if respuesta == "n":
        break
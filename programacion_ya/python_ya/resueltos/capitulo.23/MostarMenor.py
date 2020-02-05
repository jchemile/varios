def cargar_valores():
    valor1 = int(input("Val 1: "))
    valor2 = int(input("Val 2: "))
    valor3 = int(input("Val 3: "))

    if valor1 < valor2 & valor1 < valor3:
        print("Menor: ", valor1)
    else:
        if valor2 < valor3:
            print("Menor: ", valor2)
        else:
            print("Menor: ", valor3)

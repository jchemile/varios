num = int(input("Ingrese numero: "))
if(num < 10):
    print(num, " tiene 1 cifras")
else:
    if(num < 100):
        print(num, " tiene 2 cifras")
    else:
        if(num < 10000):
            print(num, "tiene 3 cifras")
        else:
            print("No es un numero valido")

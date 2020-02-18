
def ordenar_enteros(v1,v2,v3):

    if v1 < v2 and v1 < v3:
        print(v1)
        if v2 < v3:
            print(v2)
            print(v3)
        else:
            print(v3)
            print(v2)

    else:
        if v2 < v3:
            print(v2)
            if v1 < v3:
                print(v1)
                print(v3)
            else:
                print(v3)
                print(v1)
        else:
            if v3 < v2:
                print(v3)
                if v1 < v2:
                    print(v1)
                    print(v2)
                else:
                    print(v2)
                    print(v1)



def solicitarEnteros():
    v1 = int(input("Ingrese valor 1: "))
    v2 = int(input("Ingrese valor 2: "))
    v3 = int(input("Ingrese valor 3: "))

    ordenar_enteros(v1,v2,v3)


ordenar_enteros(1,2,3)
print("")
ordenar_enteros(3,1,2)
print("")
ordenar_enteros(2,3,1)
print("")
ordenar_enteros(2,1,3)

solicitarEnteros()
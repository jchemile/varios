def largo(cadena):
    return len(cadena)

cad1 = input("Ingrese el valor : ")
cad2 = input("Ingrese el valor : ")

la1 = largo(cad1)
la2 = largo(cad2)

if la1 == la2:
    print("Los nombres: ", cad1, cad2, "tienen la misma cantidad de caracteres")
else:
    if la1 > la2:
        print(cad1, "Mas largo")
    else:
        print(cad2, "mas largo")
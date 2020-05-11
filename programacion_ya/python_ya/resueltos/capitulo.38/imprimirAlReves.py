def alreves(cadena):
    tam = len(cadena)
    for letra in range(tam):
        print(cadena[tam-1-letra],end="")


alreves("123456")
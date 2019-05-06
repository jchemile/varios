numero = int(input("Numero:"))
if numero < 10:
    print("Un digito")
else:
    if numero < 99:
        print("Dos digitos")
    else:
        print("Fuera del rango permitido")

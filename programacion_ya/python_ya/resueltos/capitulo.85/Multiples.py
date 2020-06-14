try:
    valor1 = int(input("Dividendo: "))
    valor2 = int(input("Divisor: "))
    division = valor1/valor2
    print(division)
except ZeroDivisionError:
    print("No se puede dividir por cero")
except ValueError:
    print("Los valores a ingresar deben ser enteros")
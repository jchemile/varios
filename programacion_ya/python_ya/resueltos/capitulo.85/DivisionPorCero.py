try:
    valor1 = int(input("Valor 1: "))
    valor2 = int(input("Valor 2: "))
    division = valor1/valor2
    print("Resultado: ")
except ZeroDivisionError:
    print("No se puede dividir por cero")
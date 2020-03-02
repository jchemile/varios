def retornar_mayor(v1, v2):
    if v1 > v2:
        mayor = v1
    else:
        mayor = v2
    return mayor

valor1 = int(input("Ingrese el valor : "))
valor2 = int(input("Ingrese el valor : "))

print(retornar_mayor(valor1, valor2))
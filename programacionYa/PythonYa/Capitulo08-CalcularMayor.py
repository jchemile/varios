num1 = int(input("Ingrese el primer valor: "))
num2 = int(input("Ingrese el segundo valor: "))
num3 = int(input("Ingrese el tercer valor: "))
if num1 > num2 and num1 > num3:
    mayor = num1
    if num2 > num3:
        menor = num3
    else:
        menor = num2
else:
    if num2 > num3:
        mayor = num2
        if num1 > num3:
            menor = num3
        else:
            menor = num1
        
    else:
        mayor = num3
        if num1 > num2:
            menor = num2
        else:
            menor = num1


print("Mayor")
print(mayor)
print("Menor")
print(menor)
print("Distancia")
print(mayor - menor)

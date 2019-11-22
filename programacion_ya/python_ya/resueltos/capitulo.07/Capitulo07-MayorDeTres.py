num1 = int(input("Primer valor: "))
num2 = int(input("Segundo valor: "))
num3 = int(input("tercer valor: "))
mayor = 0
if (num1 > num2):
    if(num1 > num3):
        mayor = num1
    else:
        mayor = num3
else:
    if(num2 > num3):
        mayor = num2
    else:
        mayor = num3

print("Mayor: ", mayor)

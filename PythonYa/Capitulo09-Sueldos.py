n = int(input("Ingrese la cantida de empleados: "))
totalGastado = 0
entre100Y300 = 0
masDe300 = 0
ingresados = 0

while ingresados < n:
    sueldo = int(input("Ingrese sueldo: "))
    totalGastado += sueldo
    if sueldo >= 100 and sueldo <= 300:
        entre100Y300 += 1
    else:
        if sueldo > 300:
            masDe300 += 1
    ingresados += 1

print("Total gastado = ", totalGastado)
print("Entre 100 y 300 = ", entre100Y300, "Mayor a 300 = ", masDe300)


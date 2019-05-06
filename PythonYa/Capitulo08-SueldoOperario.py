sueldo = int(input("Ingrese sueldo: "))
antiguedad = int(input("Ingrese Antiguedad: "))
if sueldo < 500 and antiguedad > 10:
    print("Aumento del 20%")
    print(sueldo + (sueldo * 0.2))
else:
    if sueldo < 500 and antiguedad < 10:
        print("Aumento del 20%")
        print(sueldo + (sueldo * 0.05))
    else:
        print("No hay sueldo para vos gato")

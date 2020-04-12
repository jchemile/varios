def calcular_sueldo(nombre, costohora, cantidadhoras):
    sueldo = costohora*cantidadhoras
    print(nombre, costohora, cantidadhoras, sueldo)

calcular_sueldo("Juan", 10, 40)
calcular_sueldo(costohora=10,cantidadhoras=40,nombre="Juan")
calcular_sueldo(cantidadhoras=40,nombre="Juan",costohora=10)
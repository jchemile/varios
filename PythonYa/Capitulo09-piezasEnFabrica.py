n = int(input("Ingrese las piezas a analizar: "))
aptas = 0
noAptas = 0
ingresadas = 0

while ingresadas < n:
    longitud = float(input("Longitud: "))
    if longitud >= 1.20 and longitud <= 1.30:
        aptas += 1
    else:
        noAptas += 0
    ingresadas += 1

print("Aptas: ", aptas, ". No aptas: ", noAptas)
    

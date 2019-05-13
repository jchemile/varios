n = int(input("Cantida de alturas a evaluar: "))
ingresadas = 0
sumatoria = 0

while ingresadas < n:
    altura = int(input("Ingrese altura: "))
    sumatoria += altura
    ingresadas += 1
 
print("La altura promedio es de: ", altura/ingresadas)

n = int(input("Cantidad de numeros a ingresar: "))
ingresados = 0
par = 0
impar = 0

while ingresados < n:
    valor = int(input("Ingrese valor: "))
    if valor % 2 == 0:
        par += 1
    else:
        impar += 1
    ingresados += 1

print("Pares: ", par, ". Impares: ", impar)

def imprimir_si(lista, fn):
    for elem in lista:
        if fn(elem):
            print(elem)


lista1 = [9,20,70,60,19]
print("Pares")
imprimir_si(lista1, lambda x: x % 2 == 0)
print("Multiplo de 3 y 5")
imprimir_si(lista1, lambda x:x%3 == 0 and x%5==0)
print("Mayores a 50")
imprimir_si(lista1, lambda  x: x>= 50)

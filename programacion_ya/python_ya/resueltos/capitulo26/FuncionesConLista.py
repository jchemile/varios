def multiplicar(lista):
    multiplicada = []
    for i in range(len(lista)):
        multiplicada.append(lista[i]*3)
    return multiplicada

lista = [3,7,8,10,2]
print(multiplicar(lista))

def mascaracteres(lista):
    mayor = lista[0]
    for palabra in range(len(lista)):
        if len(lista[palabra]) > len(mayor):
            mayor = lista[palabra]
    return mayor

palabras=["enero", "febrero", "marzo", "abril", "mayo", "junio"]
print("Palabra con mas caracteres:",mascaracteres(palabras))

def multiplicarYSumarizar(lista):
    multiplicada = 1
    for i in range(len(lista)):
        multiplicada *= lista[i]
    return multiplicada

lista = [3,2,9]
print(multiplicarYSumarizar(lista))
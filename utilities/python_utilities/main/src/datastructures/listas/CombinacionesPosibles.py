#Crear una funcion que analice las combinaciones posibles de los elementos
#De una lista que sumen lo que se solicite en un pivot

def obtener_combinaciones(lista_numeros, numero_objetivo):
    combinaciones_posibles = []
    for i in range(len(lista_numeros)):
        for j in range(0, len(lista_numeros)):
            if i == j:
                continue
            n1 = lista_numeros[i]
            n2 = lista_numeros[j]
            if n1 + n2 == numero_objetivo:
                combinaciones_posibles.append([i, j])
    return combinaciones_posibles

numeros = [10,20,10,40,5,25,25]
objetivo = 50

print(obtener_combinaciones(numeros, objetivo))
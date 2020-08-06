#Entrada: Listas de numeros flotantes
# 1-Sumar 1
# 2-elevar al cuadrado
# 3-Convertir a entero
# 4-Retornar pares

numeroFlot = [1.0, 2.5, 3.6, 8.2, 1.025]

def solution(numeroFlot):
    #Operacion Artimetica
    #Si Se producer una excepcion Capturarla
    #Salir de la funcion.

    resultList = []
    for i in numeroFlot:
        addAndPow = (i+1)**2
        intengerResult = round(addAndPow)
        if intengerResult % 2 == 0:
            resultList.append(intengerResult)
    return resultList

prueba = solution(numeroFlot)
print(prueba)

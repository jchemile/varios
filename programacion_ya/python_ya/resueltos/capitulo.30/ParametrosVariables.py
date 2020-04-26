def suma(v1, v2, *lista):
    suma=v1+v2
    for i in range(len(lista)):
        suma = suma + lista[i]
    return suma

print(suma(1,0))
print(suma(1,2))
print(suma(1,2,3,4,5,6,7,8))

def sumar(v1,v2,v3):
    return v1+v2+v3

print(suma(1,2,3))
lista = [1,2,3]
print(sumar(*lista))

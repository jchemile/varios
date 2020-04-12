def carga_lista():
    li=[]
    for x in range(5):
        valor = int(input("Ingrese valor:"))
        li.append(valor)
    return li

def imprimir_mayor_a_diez(li):
    print("Mayor a diez: ")
    for x in range(len(li)):
        if li[x] > 10:
            print(li[x])

lista = carga_lista()
imprimir_mayor_a_diez(lista)

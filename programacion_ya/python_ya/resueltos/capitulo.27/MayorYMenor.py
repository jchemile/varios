def carga_lista():
    li=[]
    for x in range(5):
        valor = int(input("Ingrese valor: "))
        li.append(valor)
    return li

def retormar_mayormenor(li):
    ma=li[0]
    me=li[0]
    for x in range(1, len(li)):
        if li[x] > ma:
            ma = li[x]
        else:
            if li[x] < me:
                me = li[x]
    return [ma, me]

lista = carga_lista()
rango = retormar_mayormenor(lista)
print("Mayor: ", rango[0], "menor: ", rango[1])
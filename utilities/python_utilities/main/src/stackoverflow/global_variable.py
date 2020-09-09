cuenta = 100


def calculo():
    saldo = int()
    global cuenta
    while saldo < cuenta:
        total = cuenta - 1
        cuenta = total
        
        print(cuenta)

calculo()





def promedio(n1, n2, n3):
    return (n1 + n2 + n3) / 3.0

print(promedio(25,5,0))

def perimetro(lado):
    return lado * 4

print(perimetro(5))

def superficie(lado1, lado2):
    return lado1 * lado2

print(superficie(5,8))

def retornarA(cadena):
    q = 0
    for letra in cadena:
        if letra == "a" or letra == "A":
            q += 1
    return q

print(retornarA("la cAsA esta en orden"))
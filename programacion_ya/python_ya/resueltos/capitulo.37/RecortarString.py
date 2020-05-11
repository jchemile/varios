def cargar():
    cadena = input("Cadena: ")
    return cadena

def dosPrimeros(cadena):
    return cadena[:2]

def dosUltimos(cadena):
    return cadena[len(cadena)-2:]

def elMedio(cadena):
    return cadena[1:len(cadena)-1]

cadena = cargar()
print("Dos Primeros",dosPrimeros(cadena))
print("Dos Ultimos",dosUltimos(cadena))
print("El Medio", elMedio(cadena))
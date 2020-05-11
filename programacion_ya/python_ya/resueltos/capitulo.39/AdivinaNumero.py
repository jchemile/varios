import random


def juego():
    jugador = -1
    cantidad = 0
    numero = random.randint(0, 1000)
    victoria = False

    while jugador != numero:
        jugador = int(input("Numero: "))

        if numero > jugador:
            print("El numero elegido es menor")
        else:
            if numero < jugador:
                print("El numero elegido es mayor")
            else:
                if jugador == numero:
                    victoria = True
        cantidad += 1
        print("Elecciones: ", cantidad)

    if victoria:
        print("Correcto: ", numero, "Elecciones: ", cantidad)


juego()

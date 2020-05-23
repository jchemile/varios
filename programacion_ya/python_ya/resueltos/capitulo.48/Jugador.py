class Jugador:
    tiempo = 30

    def __init__(self, nombre, puntaje):
        self.nombre  = nombre
        self.puntaje = puntaje


    def imprimir(self):
        print("Nombre: ", self.nombre)
        print("Puntaje: ", self.puntaje)
        print("Faltante: ", Jugador.tiempo)

    def pasarMinuto(self):
        Jugador.tiempo -= 1


jug1 = Jugador("a", 1)
jug2 = Jugador("b", 2)

while Jugador.tiempo > 0:
    jug1.imprimir()
    jug2.imprimir()
    jug1.pasarMinuto()
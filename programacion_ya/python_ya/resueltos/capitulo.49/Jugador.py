class Jugador:

    def __init__(self, nombre, puntaje):
        self.nombre = nombre
        self.puntaje = puntaje

    def __str__(self):
        cadena = self.nombre
        if self.puntaje > 1000:
            cadena += ", " + "Experto"
        else:
            cadena += ", " + "Principiante"
        return cadena

jug1 = Jugador("Carlos", 500)
jug2 = Jugador("Jose", 1500)

print(jug1)
print(jug2)
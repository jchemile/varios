class Socio:
    nombre = ""
    antiguedad = ""

    def __init__(self):
        self.nombre = input("Nombre: ")
        self.antiguedad = int(input("Antiguedad: "))


class Club:

    def __init__(self):
        self.socio1 = Socio()
        self.socio2 = Socio()
        self.socio3 = Socio()

    def masAntiguo(self):
        if self.socio1.antiguedad > self.socio2.antiguedad:
            print(self.socio1.nombre)
        else:
            if self.socio2.antiguedad > self.socio3.antiguedad:
                print(self.socio2.nombre)
            else:
                print(self.socio3.nombre)


club = Club()
club.masAntiguo()
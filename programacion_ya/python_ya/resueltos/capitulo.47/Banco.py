class Cuenta():

    def __init__(self):
        self.titular = input("Titular: ")
        self.monto = int(input("Monto: "))

    def imprimir(self):
        print(self.titular, self.monto)


class CajaAhorro(Cuenta):

    def __init__(self):
        super().__init__()

class PlazoFijo(Cuenta):

    def __init__(self):
        super().__init__()
        self.cantDias = int(input("Dias: "))
        self.interes = int(input("Interes Anual"))

    def constituirPlazoFijo(self):
        self.monto = self.monto * (self.cantDias * self.interes/365)



cajaAhorro = CajaAhorro()
cajaAhorro.imprimir()

plazoFijo = PlazoFijo()
plazoFijo.imprimir()
plazoFijo.constituirPlazoFijo()
plazoFijo.imprimir()
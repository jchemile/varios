class Cuadrado:

    def __init__(self, lado):
        self.lado = lado

    def perimetro(self):
        print("Perimetro: ", self.lado * 4)

    def superficie(self):
        print("Superficie: ", self.lado**2)


cuad1 = Cuadrado(6)
cuad1.perimetro()
cuad1.superficie()
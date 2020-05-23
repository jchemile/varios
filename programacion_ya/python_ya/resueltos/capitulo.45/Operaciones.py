class Operaciones:

    def __init__(self):
        self.valor1 = int(input("Valor 1: "))
        self.valor2 = int(input("Valor 2: "))
        self.sumar()
        self.resta()
        self.mult()
        self.div()



    def sumar(self):
        res = self.valor1 + self.valor2
        print("Suma: ", res)

    def resta(self):
        res = self.valor1 - self.valor2
        print("Resta: ", res)

    def mult(self):
        res = self.valor1 * self.valor2
        print("Multiplicacion: ", res)

    def div(self):
        res = self.valor1 / self.valor2
        print("Division: ", res)

op1 = Operaciones()
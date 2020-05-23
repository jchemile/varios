class Operaciones:

    def __init__(self):
        self.val1 = int(input("Valor 1: "))
        self.val2 = int(input("Valor 2: "))

    def suma(self):
        res = self.val1 + self.val2
        print("Suma: ", res)

    def resta(self):
        res = self.val1 - self.val2
        print("resta: ", res)

    def multiplicacion(self):
        res = self.val1 * self.val2
        print("Multiplicacion: ", res)

    def division(self):
        res = self.val1 / self.val2
        print("Division: ", res)

op1 = Operaciones()
op1.suma()
op1.multiplicacion()
op1.division()
op1.resta()

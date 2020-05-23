class Empleado:

    def __init__(self):
        self.nombre = input("Nombre: ")
        self.sueldo = float(input("Sueldo: "))

    def imprimir(self):
        print("Nombre: ", self.nombre)
        print("Sueldo: ", self.sueldo)

    def pagar_impuestos(self):
        if self.sueldo > 3000:
            print("Paga")
        else:
            print("No Paga")

emp1 = Empleado()
emp1.imprimir()
emp1.pagar_impuestos()
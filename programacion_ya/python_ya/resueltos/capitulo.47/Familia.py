class Persona:

    def __init__(self):
        self.nombre = input("Nombre: ")
        self.edad = int(input("Edad: "))

    def imprimir(self):
        print("Nombre:", self.nombre)
        print("Edad: ", self.edad)

class Empleado(Persona):

    def __init__(self):
        super().__init__()
        self.sueldo = float(input("Ingrese el sueldo: "))

    def imprimir(self):
        super().imprimir()
        print("Sueldo: ", self.sueldo)

    def paga_impuesto(self):
        if self.sueldo > 3000:
            print("Paga")
        else:
            print("No Paga")


persona1 = Persona()
persona1.imprimir()
print("****************")
empleado1 = Empleado()
empleado1.imprimir()
empleado1.paga_impuesto()
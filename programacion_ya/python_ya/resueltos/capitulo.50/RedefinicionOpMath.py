class Cliente:

    def __init__(self, nombre, monto):
        self.nombre = nombre
        self.monto = monto

    def __add__(self, objeto2):
        s = self.monto + objeto2.monto
        return s

cli1 = Cliente("Ana", 1200)
cli2 = Cliente("Juan", 1200)

print("Depositado", cli1 + cli2)
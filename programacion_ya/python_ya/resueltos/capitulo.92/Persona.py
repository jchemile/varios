class Persona:

    def __init__(self, nombre, edad):
        self.nombre=nombre
        self.edad=edad

    def es_mayor(self, fn):
        return fn(self.edad)

def mayor_eeuu(edad):
    if edad >= 21:
        return True
    else:
        return False

def mayor_arg(edad):
    if edad >= 18:
        return True
    else:
        return False

persona1 = Persona("Juan", 18)

if persona1.es_mayor(mayor_arg):
    print("Mayor Arg")
else:
    print("No Mayor Arg")

if persona1.es_mayor(mayor_eeuu):
    print("mayor USA")
else:
    print("No mayor USA")
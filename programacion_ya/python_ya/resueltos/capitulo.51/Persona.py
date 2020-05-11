class Persona:

    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def __eq__(self, objeto2):
        if self.edad==objeto2.edad:
            return True
        else:
            return False

    def __ne__(self, objeto2):
        if self.edad != objeto2.edad:
            return True
        else:
            return False

    def __gt__(self, objeto2):
        if self.edad > objeto2.edad:
            return True
        else:
            return False

    def __ge__(self, objeto2):
        if self.edad >= objeto2.edad:
            return True
        else:
            return False

    def __lt__(self, objeto2):
        if self.edad < objeto2.edad:
            return True
        else:
            return False

    def __le__(self, objeto2):
        if self.edad <= objeto2.edad:
            return True
        else:
            return False

pers1 = Persona("Alberto", 22)
pers2 = Persona("Juana", 22)

print(pers1==pers2)
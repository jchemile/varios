class Rectangulo:

    def __init__(self, lmenor, lmayor):
        self.lmayor = lmayor
        self.lmenor = lmenor

    def retornar_superficie(self):
        return self.lmayor * self.lmenor

    def __eq__(self, objeto2):
        if self.retornar_superficie()==objeto2.retornar_superficie():
            return True
        else:
            return False

    def __ne__(self, objeto2):
        if self.retornar_superficie()!=objeto2.retornar_superficie():
            return True
        else:
            return False

    def __gt__(self, objeto2):
        if self.retornar_superficie()>objeto2.retornar_superficie():
            return True
        else:
            return False

    def __ge__(self, objeto2):
        if self.retornar_superficie()>=objeto2.retornar_superficie():
            return True
        else:
            return False

    def __lt__(self, objeto2):
        if self.retornar_superficie()<objeto2.retornar_superficie():
            return True
        else:
            return False

    def __le__(self, objeto2):
        if self.retornar_superficie()<=objeto2.retornar_superficie():
            return True
        else:
            return False


rec1 = Rectangulo(10, 10)
rec2 = Rectangulo(5,20)

print(rec1==rec2)
print(rec1!=rec2)
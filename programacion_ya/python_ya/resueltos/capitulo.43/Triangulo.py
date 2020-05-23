class Triangulo:

    def inicializar(self,l1,l2,l3):
        self.l1 = l1
        self.l2 = l2
        self.l3 = l3

    def imprimirMayor(self):
        print(max(self.l1, self.l3, self.l2))

    def equilatero(self):
        igualdad = (self.l1 == self.l3 == self.l2)
        if igualdad:
            print("Equilatero")
        else:
            print("No equilatero")

triang1 = Triangulo()
triang1.inicializar(1,1,1)
triang1.imprimirMayor()
triang1.equilatero()

triang2 = Triangulo()
triang2.inicializar(1,2,1)
triang2.imprimirMayor()
triang2.equilatero()

triang3 = Triangulo()
triang3.inicializar(1,1,3)
triang3.imprimirMayor()
triang3.equilatero()
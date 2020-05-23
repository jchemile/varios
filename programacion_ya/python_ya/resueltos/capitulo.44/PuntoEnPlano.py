class PuntoEnPlano:

    def __init__(self,x,y):
        self.x = x
        self.y = y

    def imprimir(self):
        print("X: ", self.x, "Y: ",self.y)

    def imprimirCuadrante(self):
        if self.x > 0 and self.y > 0:
            print("Cuadrante 1")
        else:
            if self.x < 0 and self.y > 0:
                print("Cuadrante 2")
            else:
                if self.x < 0 and self.y < 0:
                    print("Cuadrante 3")
                else:
                    if self.x > 0 and self.y < 0:
                        print("Cuadrante 4")
                    else:
                        print("Origen")

punt1 = PuntoEnPlano(10,-2)
punt1.imprimir()
punt1.imprimirCuadrante()
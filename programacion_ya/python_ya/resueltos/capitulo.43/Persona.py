class Persona:

    def inicializar(self,nom):
        self.nombre=nom

    def imprimir(self):
        print("Nombre: ", self.nombre)

pers1 = Persona()
pers1.inicializar("Juan")
pers1.imprimir()

pers2 = Persona()
pers2.inicializar("Maria")
pers2.imprimir()
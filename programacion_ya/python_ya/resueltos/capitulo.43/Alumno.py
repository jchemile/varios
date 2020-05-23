class Alumno:

    def inicializar(self, nombre, nota):
        self.nombre = nombre
        self.nota   = nota

    def imprimir(self):
        print("Nombre: ", self.nombre)
        print("Nomta: ", self.nota)

    def mostrar_estado(self):
        if self.nota >= 4:
            print("Regular")
        else:
            print("Libre")

alum1 = Alumno()
alum1.inicializar("Juan", 4)
alum1.imprimir()
alum1.mostrar_estado()

alum2 = Alumno()
alum2.inicializar("Perdo", 2)
alum2.imprimir()
alum2.mostrar_estado()
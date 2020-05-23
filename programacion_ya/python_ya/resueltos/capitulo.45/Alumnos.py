class Alumnos:

    def __init__(self):
        self.nombres = []
        self.notas = []

    def menu(self):
        opcion = 0
        while opcion != 4:
            print("1 - Cargar")
            print("2 - Listar")
            print("3 - Listar mayor a 7")
            print("4 - Finalizar")
            opcion = int(input("Opcion: "))
            if opcion == 1:
                self.cargar()
            elif opcion == 2:
                self.listar()
            elif opcion == 3:
                self.notasAltas()


    def cargar(self):
        for x in range(1):
            nombre = input("Nombre: ")
            self.nombres.append(nombre)
            nota = int(input("Nota: "))
            self.notas.append(nota)

    def listar(self):
        for x in range(len(self.nombres)):
            print("Alumno: ", self.nombres[x], "Nota: ", self.notas[x])


    def notasAltas(self):
            for x in range(len(self.nombres)):
                if self.notas[x] >= 7:
                    print("Alumno: ", self.nombres[x], "Nota: ", self.notas[x])


alums = Alumnos()
alums.menu()
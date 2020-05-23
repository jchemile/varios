class Agenda:

    def __init__(self):
        self.nombres = []
        self.telefonos = []
        self.mails = []

    def menu(self):
        opcion = 0
        while opcion != 6:
            print("1 - Cargar contacto")
            print("2 - Listar todos los contactos")
            print("3 - Buscar contacto")
            print("4 - Modificar telefono")
            print("5 - Modificar mail")
            print("6 - Finalizar Programa")

            opcion = int(input("Opcion: "))
            if opcion == 1:
                self.cargar()
            elif opcion == 2:
                self.listar()
            elif opcion == 3:
                self.buscarNombre()
            elif opcion == 4:
                self.modificarTelefono()
            elif opcion == 5:
                self.modificaMail()


    def cargar(self):
        nombre = input("Nombre: ")
        self.nombres.append(nombre)
        telefono = input("Telefono: ")
        self.telefonos.append(telefono)
        mail = input("mail: ")
        self.mails.append(mail)

    def listar(self):
        for x in range(len(self.nombres)):
            print("Nombre: ", self.nombres[x], "Telefono: ", self.telefonos[x], "Mail: ", self.mails[x])

    def buscarNombre(self):
        nombre = input("Nombre a buscar: ")
        for x in range(len(self.nombres)):
            if nombre == self.nombres[x]:
                print("Nombre: ", self.nombres[x], "Telefono: ", self.telefonos[x], "Mail: ", self.mails[x])
            else:
                print("No Encontrado")


    def modificarTelefono(self):
        nombre = input("Nombre a buscar: ")
        tel   = input("Nuevo Mail: ")
        for x in range(len(self.nombres)):
            if nombre == self.nombres[x]:
                self.mails[x] = tel

    def modificaMail(self):
        nombre = input("Nombre a buscar: ")
        mail   = input("Nuevo Mail: ")
        for x in range(len(self.nombres)):
            if nombre == self.nombres[x]:
                self.mails[x] = mail



agenda = Agenda()
agenda.menu()
class personaBis:

    def inicializar(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def mostrarDatos(self):
        print(self.nombre, self.edad)

    def mayorDeEdad(self):
        if self.edad >= 18:
            print("Mayor")
        else:
            print("Menor")

persBis1 = personaBis()
persBis1.inicializar("Jose", 19)
persBis1.mostrarDatos()
persBis1.mayorDeEdad()

persBis2 = personaBis()
persBis2.inicializar("Josfe", 5)
persBis2.mostrarDatos()
persBis2.mayorDeEdad()
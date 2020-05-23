class Clientes:
    suspendidos = []

    def __init__(self, codigo, nombre):
        self.codigo = codigo
        self.nombre = nombre

    def imprimir(self):
        print("Codigo: ", self.codigo)
        print("Nombre: ", self.nombre)
        self.esta_suspendido()

    def esta_suspendido(self):
        if self.codigo in Clientes.suspendidos:
            print("Suspendido")
        else:
            print("No Suspendido")

    def suspender(self):
        Clientes.suspendidos.append(self.codigo)

cliente1 = Clientes(1,"a")
cliente2 = Clientes(2,"b")
cliente3 = Clientes(3,"c")
cliente4 = Clientes(4,"d")

cliente1.suspender()
cliente4.suspender()

cliente1.imprimir()
cliente2.imprimir()
cliente3.imprimir()
cliente4.imprimir()

print(Clientes.suspendidos)
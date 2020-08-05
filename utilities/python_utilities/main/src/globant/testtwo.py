# Objeto trasaccion. Asociada a cuenta
# Transaccion: timestamp, cuentaorigen, destino, tipo, monto
# Cuentas: origen, destino
# Cuentas asociadas a un cliente: consumidor, proveedor


class Cliente:

    def __init__(self, nombre, dni):
        self.nombre = nombre
        self.dni = dni


class Proveedor(Cliente):

    def __init__(self, nombre, dni):
        super.__init__(nombre, dni)


class Consumidor(Cliente):

    def __init__(self, nombre, dni):
        super.__init__(nombre, dni)

class Cuenta():

    def __init__(self, cliente):
        self.cliente = cliente





class Transaccion:

    def __init__(self, timeStamp, cOrigen, cDestino, tipo, monto):
        self.timeStamp = timeStamp
        self.cOrigen = cOrigen
        self.cDestino = cDestino
        self.tipo = tipo
        self.monto = monto

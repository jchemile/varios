def meses_faltantes(numero):
    meses = ("enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre")
    return meses[numero:]


mes = int(input("Numero Mes: "))
print(meses_faltantes(mes))
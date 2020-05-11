def primeros_tres(cadena):
    return cadena[:3]

meses = ("enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto","septiembre", "octubre", "nomviembre", "diciembre")
for x in meses:
    print(primeros_tres(x))
meses = ("enero", "febrero", "marzo", "abril", "mayo", "junio",
         "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre")

try:
    nromes=int(input("Ingres nro del mes: "))
    print(meses[nromes-1])
except IndexError:
    print("Tiene que ser entre 1 y 12")
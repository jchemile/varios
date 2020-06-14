try:
    archil1 = open("datos.txt", "w")
    archil1.write("Primer linea.\n")
    archil1.write("Segunda linea.\n")
    archil1.write("Tercera linea.\n")
    archil1.write(334)
except TypeError:
    print("No se puede grabar un entero con un write")
finally:
    archil1.close()
    print("Se cerró el archivo")
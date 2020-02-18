def contarVocales(palabra):
    vocales = ("a","e","i","o","u")
    cant = 0

    for letra in palabra:
        if letra.lower() in vocales:
            cant += 1

    print("Cantidad e vocales: ", cant)

contarVocales("dad1e21e131")
contarVocales("aE")
contarVocales("s2d1gfgf")
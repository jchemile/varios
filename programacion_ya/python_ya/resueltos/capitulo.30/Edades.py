def edades(edad, *edades):

    def mayor(edadAEvaluar):
        if edadAEvaluar >= 18:
            print("mayor")
        else:
            print("menor")

    mayor(edad)

    for e in range(len(edades)):
        mayor(edades[e])


edades(1)
edades(1,18,2,6,19)


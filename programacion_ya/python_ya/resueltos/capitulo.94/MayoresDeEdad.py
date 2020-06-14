personas = [("Perdo", 33), ("Ana", 3), ("Juan", 13), ("Carla", 45)]
personas_mayores = [per for per in personas if per[1] > 18]

print(personas_mayores)

print("Multiplo de 8")

multiplo8 = [valor for valor in range(1, 501) if valor % 8 ==0]
print(multiplo8)

print("Combinacion de Nombres:")

nombres = ["Juan", "Pedro", "Jose", "Maria"]
nombres_compuestos = [[nombre1, nombre2] for nombre1 in nombres for nombre2 in nombres if nombre1 != nombre2 ]
print(nombres_compuestos)
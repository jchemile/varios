"""
def area_triangulo(base, altura):

	return (base * altura)/2

print(area_triangulo(5,7))
"""

area_triangulo = lambda base, altura: ((base*altura)/2)

al_cubo = lambda base : base ** 3

destacar_valor = lambda comision: "¡{}! $".format(comision)

comision_Ana=15585

print(destacar_valor(comision_Ana))
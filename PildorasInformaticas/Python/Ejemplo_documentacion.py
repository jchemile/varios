class Areas:

	def areaCuadrado(lado):
		"""Calcula el área de un cuadrado"""
		return "El área del cuadrado es: " + str(lado*lado)
	
	
	def areaTriangulo(base, altura):
		"""Calcula el área del triángulo utilizando como parámetro Base y Altura"""
		return "El área del triángulo es: " + str((base*altura)/2)



#print(areaTriangulo(2,7))
#print(areaCuadrado.__doc__)
help(Areas.areaTriangulo)
class Persona():

	def __init__(self,nombre, edad, residencia):

		self.nombre = nombre
		self.edad = edad
		self.residencia = residencia

	def descripcion(self):

		print("Nombre: ", self.nombre,
			  "\nEdad: ", self.edad,
			  "\nResidencia ", self.residencia)

class Empleado(Persona):

	def __init__(self, salario, antiguedad,nombre_empleado, edad_empleado, residencia_empleado):

		super().__init__(nombre_empleado, edad_empleado, residencia_empleado)

		self.salario = salario
		self.antiguedad = antiguedad

	def descripcion(self):

		super().descripcion()

		print("Salario: ", self.salario, 
			  "\nAntiguedad: ", self.antiguedad)

Manuel = Persona("Manuel", 55, "Colombia")
Manuel.descripcion()

print(isinstance(Manuel,Empleado))
print(isinstance(Manuel,Persona))
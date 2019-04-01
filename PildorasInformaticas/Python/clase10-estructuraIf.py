print("Programa de evaluacion de notas de alumnos: ")

nota_alumno= input("Ingrese Nota: ")
	
def evaluacion(nota):
	valoracion = "aprobado"
	if nota < 5:
		valoracion = "suspenso"
	return valoracion

print(evaluacion(int(nota_alumno)))
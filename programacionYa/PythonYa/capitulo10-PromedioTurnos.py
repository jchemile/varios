print("Alumnos turno mañana")
sumatoriaTM = 0
for i in range(5):
	edad = int(input("Edad: "))
	sumatoriaTM += edad


print("Alumnos turno tarde")
sumatoriaTT = 0
for i in range(6):
	edad = int(input("Edad: "))
	sumatoriaTT += edad
	

print("Alumnos turno noche")
sumatoriaTN = 0
for i in range(11):
	edad = int(input("Edad: "))
	sumatoriaTN += edad
	

print("Promedios. Turno Mañana: ", sumatoriaTM/5, ". Turno Tarde: ", sumatoriaTT/6, "Turno Noche: ", sumatoriaTN/11)


if sumatoriaTM > sumatoriaTT and sumatoriaTM > sumatoriaTN:
	print("Turno Mañana Mayor")
else:
	if sumatoriaTT > sumatoriaTN:
		print("Turno Tarde Mayor")
	else:
		print("Turno Noche Mayor")
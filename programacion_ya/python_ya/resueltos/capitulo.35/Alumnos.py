def cargar():
    alumnos = {}
    continua1 = "s"
    while continua1 == "s":
        dni = input("DNI: ")
        materias = []
        continua2 = "s"
        while continua2 == "s":
            materia = input("Materia: ")
            nota = int(input("Nota: "))
            materias.append((materia, nota))
            continua2 = input("Otra materia [s/n]: ")
        alumnos[dni] = materias
        continua1 = input("Otro Alumno [s/n]: ")
    return alumnos

def imprimirAlumnos(alumnos):
    for dni in alumnos:
        for nota, materia in alumnos[dni]:
            print(dni, materia, nota)

def consultarAlumno(alumnos):
    dniABuscar = input("DNI: ")
    if dniABuscar in alumnos:
        for nota, materia in alumnos[dniABuscar]:
            print("Alumno: ",dniABuscar, nota, materia)
    else:
        print("No Encontrado")



alumnos = cargar()
imprimirAlumnos(alumnos)
consultarAlumno(alumnos)
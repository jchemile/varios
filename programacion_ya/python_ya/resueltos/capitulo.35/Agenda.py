def cargar():
    agenda = {}
    continua1 = "s"
    while continua1 == "s":
        fecha = input("dd/mm/aa: ")
        continua2 = "s"
        lista = []
        while continua2 == "s":
            hora = input("hh:mm: ")
            actividad = input("actividad: ")
            lista.append((hora,actividad))
            continua2 = input("Otra actividad?[s/n]: ")
        agenda[fecha] = lista
        continua1 = input("Otra fecha?[s/n]")

def imprimir(agenda):
    print("Listado completa: ")
    for fecha in agenda:
        print("Fecha: ")
        for hora, actividad in agenda[fecha]:
            print(hora, actividad)

def consultar_fecha(agenda):
    fecha=input("Ingrese la fecha que desa consultar: ")
    if fecha in agenda:
        for hora, actividad in agenda[fecha]:
            print(hora, actividad)
    else:
        print("No hay actividades agendadas")

agenda= cargar()
imprimir(agenda)
consultar_fecha(agenda)
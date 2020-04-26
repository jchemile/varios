def cargaCandidatos():
    candidatos = []
    for i in range(3):
        nom = input("Candidato: ")
        cantProv = int(input("Cantidad de provincias: "))
        provincias = []
        for z in range(cantProv):
            prov = input("Provincia: ")
            votos = int(input("Votos: "))
            provincias.append((prov, votos))
        candidatos.append((nom, provincias))
    return candidatos

def totalvotos_candidato(candidatos):
    for x in sum(range(len(candidatos))):
        suma = 0
        for z in range(len(candidatos[x][1])):
            suma=suma+candidatos[x][1][z][1]
        print(candidatos[x][0],suma)

candidatos= cargaCandidatos()
totalvotos_candidato(candidatos)
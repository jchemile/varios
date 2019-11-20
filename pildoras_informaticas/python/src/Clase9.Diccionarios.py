midiccionario = {
"Alemania":"Berlín",
"Francia":"Paris",
"Reino Unido": "Londres",
"España":"Madrid"
}

midiccionario["Italia"] = "Lisboa"

#print(midiccionario)

midiccionario["Italia"] = "Roma"

#print(midiccionario)

del midiccionario["Reino Unido"]

#print(midiccionario)

midiccionario2 = {
	"Alemania": "Berlín",
	23:"Jordan",
	"Mosqueteros": 3
}

#print(midiccionario2)

mitupla = ("España", "Francia", "Reino Unido", "Alemania")


diccionarioPaises = {
	mitupla[0] : "Madrid",
	mitupla[1] : "Paris",
	mitupla[2] : "Londres",
	mitupla[3] : "Berlín"
}

#print(diccionarioPaises)

mi
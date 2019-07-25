import re

nombre1 = "Jara Lopez"
nombre2 = "Antonio Gómez"
nombre3 = "Lara Lopez"

cadena1 = "Jara López"
cadena2 = "548415215"
cadena3 = "a45487485"

codigo1 = "asdasdasdasdasdasdas71asdsadsadasdas"
codigo2 = "sdasdasad71dasdasdsadasdasdsadasd"
codigo3 = "sadas asd asd asd asd asd asd asd a"

if re.search("71",codigo1, re.IGNORECASE):
	print("Hemos encontrado el número")
else:
	print("No lo hemos número")
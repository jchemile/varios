email = False
miEmail = input("Introduce tu dirección de email: ")

for i in miEmail:
	if(i == "@"):
		email = True

if email == True:
	print("Email es correcto")
else:
	print("El email no es correcto")
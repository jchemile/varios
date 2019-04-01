import re

# Práctica 1

"""
cadena = "Vamos a aprender expresiones regulares en Python. Python es un lenguaje de sintaxis sencilla"

textoBuscar = "Python"

print(len(re.findall(textoBuscar, cadena)))

textoEncontrado=re.search(textoBuscar, cadena)

print(textoEncontrado.start(), textoEncontrado.end(), textoEncontrado.span())

if re.search(textoBuscar, cadena) is not None:

	print("He encontrado el texto")

else:

	print("No he encontrado el texto")
"""

"""
lista_nombres = ['Ana Gomez',
				 'María Martín',
			     'Sandra Lopez',
				 'Santiago Martín',
				 'Sandra Fernandez',
				 'Marcos Porteño']

for elemento in lista_nombres:

	if re.findall('^Sandra', elemento):
		print(elemento)

	if re.findall('Mártín$', elemento):
		print(elemento)

	if re.findall('[ñ]', elemento):
		print(elemento)

	if re.findall('r[ía]',elemento):
		print(elemento)
"""

lista_nombres = ['Ana',
				 'Pedro',
				 'María',
				 'Rosa',
				 'Sandra',
				 'Celia']

for elemento in lista_nombres:
	if re.findall('[o-t]$',elemento):
		print(elemento)

lista_codigos = ['Ma.1',
				 'Se1',
				 'Ma2',
				 'Ba1',
				 'Ma:3',
				 'Va1',
				 'Va2',
				 'Ma4',
				 'MaA',
				 'Ma.5',
				 'MaB',
				 'Ma:C']

for codigo in lista_codigos:
	if re.findall('Ma[.:]', codigo):
		print(codigo)
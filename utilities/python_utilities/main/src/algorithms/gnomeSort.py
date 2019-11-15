def gnome_sort(lista):
	i = 0
	n = len(lista)

	while i < n:
		if i == 0 or lista[i] >= lista[i-1]:
			i = i + 1
		else:
			temp = lista[i-1]
			lista[i-1] = lista[i]
			lista[i] = temp
			i = i - 1
	return lista

lista = [4,1,2,6,3,77,456,33,992]

resultado = gnome_sort(lista)

print(resultado)
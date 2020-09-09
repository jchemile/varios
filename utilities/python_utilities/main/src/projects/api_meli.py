#Manipulando la API de mercado libre:
    #1: Obtener una lista de categorías por medio del método get
    #2: Imprimirlas en la consola
    #3: Guardar los los links obtenidos en un archivo de texto

import requests
import json

url = 'https://api.mercadolibre.com/categories/MLM1748'

# Obtengo los datos y los voy guardando en una lista por medio de un bucle for

r = requests.get(url)
dta = r.json()
lista = []

for element in dta['children_categories']:
    ide = element['id']
    name = element['name']
    links = 'https://api.mercadolibre.com/categories/' + ide
    lista.append(links)

with open("resultado.txt", "w") as f:
    for elemento in lista:
        f.write(elemento)
        f.write("\n")

r = requests.get(url)
dta = r.json()

with open("resultado.txt", "w") as f:
    for element in dta['children_categories']:
        ide = element['id']
        name = element['name']
        links = 'https://api.mercadolibre.com/categories/' + ide
        print(links, file=f)






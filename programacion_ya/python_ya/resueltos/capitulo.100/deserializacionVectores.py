import json

cadena = """
[
    {
    "codigo":"1",
    "descripcion":"papas",
    "precio":"13.45"
    },
    {
    "codigo":"2",
    "descripcion":"manzanas",
    "precio":"45"
    }
]
"""

print(cadena)
lista = json.loads(cadena)
print(lista)
data = [
{'text': 'Real Madrid', 'type': 'ORG'}, 
{'text': 'España', 'type': 'LOC'}, 
{'text': 'Real Madrid TV', 'type': 'MISC'}, 
{'text': 'España', 'type': 'PER'}, 
{'text': 'España', 'type': 'PER'}, 
{'text': 'Real Madrid', 'type': 'ORG'}, 
{'text': 'Atlético de Madrid', 'type': 'LOC'}, 
{'text': 'Real Madrid', 'type': 'ORG'}, 
{'text': 'Real Madrid', 'type': 'ORG'}, 
{'text': 'Real Mad', 'type': 'ORG'}, 
{'text': 'Ricardo Rodríguez', 'type': 'PER'}]

new_datalist = []
items_found = []
for element in data:
    if (not element in items_found):
        # items_found acumula los dic que ya se analizaron para no repetirlos
        items_found.append(element)
        elem_count = data.count(element) # Se cuentan los elementos
        if elem_count > 1:
            # Si hay mas de 1 repeticion, crear el diccionario nuevo
            new_elem = {}
            new_elem['text'] = element['text']
            new_elem['type'] = element['type']
            new_elem['cantidad'] = elem_count 
            new_datalist.append(new_elem)
print(new_datalist)
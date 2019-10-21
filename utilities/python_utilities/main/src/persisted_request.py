#!/usr/bin/env python
# coding: utf-8

# In[49]:


#Manipulando la API de mercado libre:
    #1: Obtener una lista de categorías por medio del método get
    #2: Imprimirlas en la consola
    #3: Guardar los los links obtenidos en un archivo de texto


# In[50]:


import requests
import json


# In[52]:


url = 'https://api.mercadolibre.com/categories/MLM1748'


# In[51]:


# Obtengo los datos y los voy guardando en una lista por medio de un bucle for


# In[53]:


r = requests.get(url)
dta = r.json()
lista = []


# In[54]:


for element in dta['children_categories']:
    ide = element['id']
    name = element['name']
    links = 'https://api.mercadolibre.com/categories/' + ide
    lista.append(links)


# In[55]:


with open("resultado.txt", "w") as f:
    for elemento in lista:
        f.write(elemento)
        f.write("\n")


# In[56]:


# Abro el fichero antes de entrar al bucle y en cada iteración agrego un lugar


# In[60]:


r = requests.get(url)
dta = r.json()


# In[61]:


with open("resultado.txt", "w") as f:
    for element in dta['children_categories']:
        ide = element['id']
        name = element['name']
        links = 'https://api.mercadolibre.com/categories/' + ide
        print(links, file=f)


# In[ ]:





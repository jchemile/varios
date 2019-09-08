#!/usr/bin/env python
# coding: utf-8

# In[2]:


#Almacenar 5 enteros en una lista. Sumar todos los elementos. retornar la suma


# In[4]:


lista = [10,7,3,7,2]
suma = 0
x = 0


# In[5]:


while x < len(lista):
    suma += lista[x]
    x += 1


# In[9]:


print(lista)
print("Suma igual a: ", suma)


# In[10]:


#Definir una lista con 8 enteros y contar cuántos son mayor a 100
lista_enteros = [10, 108,150,2,4,9,442]


# In[12]:


mayor = 0
for elemento in lista_enteros:
    if elemento > 100:
        mayor += 1
print("Mayores: ", mayor)


# In[13]:


#Definir una lista. Mostrar los elmentos mayores a 7
for elemento in lista_enteros:
    if elemento >= 7:
        print(elemento)


# In[16]:


#Almacenar una lista de 5 peronas. Contar cuántas de ellas tienen un nombre con más de 5 caracteres
nombres = ["Juan", "Abel", "Joaquín", "Silvia", "Mateo"]


# In[21]:


mayor = 0
for nombre in nombres:
    if len(nombre) >= 5:
        mayor += 1
print("Mayores a 5 caracteres", mayor)


# In[ ]:





# In[ ]:





#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Infgresar datos y definir mayor altura


# In[8]:


print("Datos de la primera persona")
nombre1 = input("Nombre: ")
edad1 = int(input("Edad: "))
altura1 = float(input("Altura: "))


# In[9]:


print("Datos de la segunda persona")
nombre2 = input("Nombre: ")
edad2 = int(input("Edad: "))
altura2 = float(input("Altura: "))


# In[10]:


print("La persona más alta es")
if altura1 > altura2:
    print(nombre1)
else:
    print(nombre2)


# In[11]:


#Cargar nombres e indicar el mayor


# In[12]:


nombre1 = input("Ingrese el primer nombre")
nombre2 = input("Ingrese el segundo nombre")


# In[13]:


if nombre1 == nombre2:
    print("Son Iguales")
else:
    if nombre1 > nombre2:
        print(nombre1, " Es mayor alfabeticamente")
    else:
        print(nombre1, " Es mayor alfabeticamente")


# In[2]:


# Ej 3 - Cargar valores por teclado. Informar la suma

opcion = "si"
suma = 0

while opcion == "si":
    valor = int(input("Ingrese valor: "))
    suma = suma + valor
    opcion = input("¿Desea continuar?(si/no)")
print("la suma es: ", suma)


# In[4]:


#Realizar carga de dos nombres. Mostrar ordenados alfabeticamente

nombre1 = input("Ingrese el primer nombre: ")
nombre2 = input("Ingrese el segundo nombre: ")


# In[6]:


if nombre1 == nombre2:
    print("Son Iguales")
else:
    if nombre1 < nombre2:
        print(nombre1)
    else:
        print(nombre2)


# In[ ]:





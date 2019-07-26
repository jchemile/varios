#!/usr/bin/env python
# coding: utf-8

# In[1]:


lista = [10,20,30,40]


# In[2]:


lista.append(120)


# In[3]:


lista


# In[4]:


lista.pop(2)


# In[6]:


lista


# In[7]:


lista1 = [10,20,30,40,50]
print(lista)


# In[8]:


lista.pop(0)


# In[9]:


lista


# In[12]:


#Problema 2:
#Crear una lista y almacenar 10 enteros pedidos por teclado. Eliminar todos los elementos que sean iguales al número entero 5.


# In[13]:


lista = []
for x in range(10):
    valor = int(input("Ingrese valor:"))
    lista.append(valor)


# In[14]:


print(lista)


# In[15]:


posicion = 0
while posicion < len(lista):
    if lista[posicion] == 5:
        lista.pop(posicion)
    else:
        posicion=posicion +1


# In[16]:


print(lista)


# In[19]:


#Problema 3
"""
Crear dos listas paralelas. En la primera ingresar los nombres de empleados y en la segunda los sueldos de cada empleado.
Ingresar por teclado cuando inicia el programa la cantidad de empleados de la empresa.
Borrar luego todos los empleados que tienen un sueldo mayor a 10000 (tanto el sueldo como su nombre)
"""


# In[34]:


nombres = []
sueldos = []


# In[35]:


def carga_usuarios(nombre, sueldo, cant):
    
    for i in range(cant):
        nom = input("Ingrese Nombre: ")
        nombre.append(nom)
        suel = int(input("Ingrese sueldo: "))
        sueldo.append(suel)


# In[36]:


carga_usuarios(nombres,sueldos,5)


# In[77]:


def eliminar(nombre, sueldo):
    for i in range(len(nombre)):
        if sueldo[i] > 10:
            nombre.pop(i)
            sueldo.pop(i)


# In[78]:


def imprimir(nombres,sueldos):
    for i in range(len(nombres)):
        print("Nombre",  nombres[i], "Sueldo", sueldos[i])


# In[79]:


imprimir(nombres, sueldos)


# In[80]:


eliminar(nombres, sueldos)


# In[81]:


imprimir(nombres, sueldos)


# In[20]:


#Problema 4
"""
Crear una lista de 5 enteros y cargarlos por teclado.
Borrar los elementos mayores o iguales a 10 y generar una nueva lista con dichos valores.
"""


# In[103]:


lista_de_enteros = []


# In[104]:


def carga_enteros(lista_enteros, cant):
    for i in range(cant):
        ent = int(input("Ingrese entero: "))
        lista_enteros.append(ent)


# In[114]:


carga_enteros(lista_de_enteros, 5)


# In[122]:


def eliminar_enteros(lista):
    nueva_lista = []
    for i in range(len(lista)):
        if lista[i] >= 10:
            print(i)
            print(lista[i], "Es mayor que ", 10)
            nueva_lista.append(lista[i])
            lista.pop()
    return nueva_lista


# In[123]:


prueba = eliminar_enteros(lista_de_enteros)


# In[124]:


print(prueba)


# In[125]:


lista_de_enteros


# In[ ]:





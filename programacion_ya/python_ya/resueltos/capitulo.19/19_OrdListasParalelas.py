#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Crear dos listas. Una con nombres y otras con notas. Ordenar las notas y los nombres respectivamente


# In[2]:


alumnos = ["Juan", "Pedro", "Carla", "Maica", "Josefina"]
notas = [7,5,7,8,9]


# In[10]:


rango = len(alumnos)
for x in range(rango):
    print("Alumno", x, "\nNombre: ", alumnos[x], "\nNota: ", notas[x], "\n-----------")


# In[12]:


for k in range(4):
    for x in range(4-k):
        if notas[x] < notas[x + 1]:
            auxNota = notas[x]
            notas[x] = notas[x+ 1]
            notas[x + 1] = auxNota
            
            auxAlumno = alumnos[x]
            alumnos[x] = alumnos[x+ 1]
            alumnos[x + 1] = auxAlumno


# In[13]:


for x in range(rango):
    print("Alumno", x, "\nNombre: ", alumnos[x], "\nNota: ", notas[x], "\n-----------")


# In[14]:


#Crear una lista de paises y poblaciones. Ordenar por nombre y por poblacion


# In[19]:


paises = ["Brazil", "Australia","Argentina","Congo", "Zambia", "Canadá"]
habitantes = [150,50,40,30,120,200]


# In[20]:


#Ordeno por nombre de A a Z
for k in range(len(paises) - 1):
    for x in range(len(paises) - 1 - k):
        if paises[x] > paises[x + 1]:
            auxPaises = paises[x]
            paises[x] = paises[x + 1]
            paises[x + 1] = auxPaises
            
            auxHabitantes = habitantes[x]
            habitantes[x] = habitantes[x + 1]
            habitantes[x + 1] = auxHabitantes


# In[25]:


for x in range(len(paises)):
    print(paises[x], " ", habitantes[x])


# In[26]:


#Ordeno por poblacion
for k in range(len(paises) - 1):
    for x in range(len(paises) - 1 - k):
        if habitantes[x] > habitantes[x + 1]:
            auxPaises = paises[x]
            paises[x] = paises[x + 1]
            paises[x + 1] = auxPaises
            
            auxHabitantes = habitantes[x]
            habitantes[x] = habitantes[x + 1]
            habitantes[x + 1] = auxHabitantes


# In[27]:


for x in range(len(paises)):
    print(paises[x], " ", habitantes[x])


# In[ ]:





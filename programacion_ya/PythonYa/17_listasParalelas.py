#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Cargar 5 nombres y sus edades en listas diferentes. Imprimir los mayores de edad


# In[2]:


nombres = []
edades = []


# In[3]:


for x in range(5):
    nom = input("Nombre: ")
    nombres.append(nom)
    edad = int(input("Edad: "))
    edades.append(edad)


# In[4]:


for x in range(5):
    if edades[x] > 18:
        print(nombres[x])


# In[5]:


#Definir precio y producto. Mostrar productos que tengan un precio mayor al primero


# In[10]:


productos = []
precios = []


# In[11]:


for x in range(5):
    producto = input("Producto: ")
    productos.append(producto)
    precio = int(input("precio: "))
    precios.append(precio)


# In[14]:


cantidad = 0

for x in range(5):
    if precios[0] < precios[x]:
        cantidad += 1
        
print("Mayores: ", cantidad)


# In[15]:


#Ingresar nombre y nota de alumno. 


# In[33]:


alumnos = []
notas = []


# In[34]:


for x in range(4):
    alu = input("Alumno: ")
    alumnos.append(alu)
    nota = int(input("Nota: "))
    notas.append(nota)


# In[27]:


# Mostrar nombre y Nota. 


# In[37]:


for x in range(4):
    condicion = ""
    if notas[x] >= 8:
        condicion = "Muy Bueno"
    else:
        if notas[x] >= 4:
            condicion = "Bueno"
        else:
            if notas[x] > 0:
                condicion = "Insuficiente"
    
    print("Alumno: ", alumnos[x], "Condicion: ", condicion)


# In[39]:


muy_bueno = 0

for x in range(4):
    if notas[x] >= 8:
        muy_bueno += 1

print("Muy buenos: ", muy_bueno)


# In[40]:


#Cree dos listas de elemento. Que la tercera retorne la suma


# In[47]:


lista_1 = [1,8,3,5]
lista_2 = [3,2,6,7]


# In[48]:


for x in range(4):
    lista_suma[x] = lista_1[x] + lista_2[x]
    
print(lista_suma)


# In[ ]:





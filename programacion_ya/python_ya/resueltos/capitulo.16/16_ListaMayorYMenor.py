#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Crear y Cargar en una lista 5 enteros.
#Implementar un algoritmo que identifique al mayor de la lista


# In[2]:


lista = []
for x in range(5):
    valor = int(input("Ingrese valor: "))
    lista.append(valor)


# In[3]:


mayor = lista[0]
for x in range(1,5):
    if lista[x] > mayor:
        mayor = lista[x]


# In[9]:


print("Lista: ", lista, "Mayor: ", mayor)


# In[5]:


#Crear y Cargar en una lista 5 enteros.
#Implementar un algoritmo que identifique al menor de la lista


# In[7]:


menor = lista[0]
for x in range(1, 5):
    if lista[x] < menor:
        menor = lista[x]


# In[8]:


print("Lista: ", lista, "Mayor: ", mayor, "Menor: ", menor)


# In[4]:


#Ingresar los nombres de 5 personas. Mostrar el de menor orden alfabético
nombres = []
x = 0

while x < 5:
    nombre = input("Ingrese nombre: ")
    nombres.append(nombre)
    x += 1


# In[7]:


menorOrden = nombres[0]
for x in range(1,5):
    if menorOrden > nombres[x]:
        menorOrden = nombres[x]


# In[8]:


print("Nombres: ", nombres, ". Menor Orden: ", menorOrden)


# In[10]:


#Cargar una lista con 5 elementos. Buscar el mayor. Mostrar si se repite.


# In[11]:


lista = []
for x in range(5):
    valor = int(input("Ingrese valor: "))
    lista.append(valor)


# In[16]:


mayor = lista[0]

for x in range(1,5):
    if mayor < lista[x]:
        mayor = lista[x]


# In[18]:


repite = 0

for x in range(1,5):
    if mayor == lista[x]:
        repite += 1


# In[19]:


print("Lista: ", lista, "Mayor: ", mayor, "Se Repite: ", repite)


# In[ ]:





#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Crear una lista con otra lista dentro y que tenga tres enteros dentro


# In[10]:


lista = [[1,2,3],[4,5,6],[7,8,9],[10,11,12]]


# In[11]:


print(lista)


# In[12]:


print(lista[0])


# In[13]:


print(lista[0][0])


# In[14]:


for i in range(len(lista[0])):
    print(lista[0][i])


# In[15]:


for k in range(len(lista)):
    for x in range(len(lista[k])):
        print(lista[k][x])


# In[17]:


#Crear una lista. Dentro otra lsita que teiene que tener dos elemento con 5 enteros. Mostrar la suma de los elementos


# In[18]:


lista = [[1,1,1,1,1],[2,2,2,2,2]]


# In[20]:


suma1 = lista[0][0] + lista[0][1] + lista[0][2] + lista[0][3] + lista[0][4]
suma2 = lista[1][0] + lista[1][1] + lista[1][2] + lista[1][3] + lista[1][4]
print("Suma 1:", suma1, "\nSuma 2:", suma2)


# In[21]:


#Con una iteración
suma1 = 0
suma2 = 0
for x in range(len(lista[0])):
    suma1 += lista[0][x]
    
for x in range(len(lista[1])):
    suma2 += lista[1][x]
    
print("Suma 1:", suma1, "\nSuma 2:", suma2)


# In[23]:


for k in range(len(lista)):
    suma = 0
    for x in range(len(lista[k])):
        suma += lista[k][x] 
    print(suma)    


# In[24]:


#Crear una lista que tenga 5 elementos. Cada elemento debe ser una lista. La listas deben tener elementos variables


# In[27]:


lista = [[1],[1,2],[1,2,3],[1,2,3,4],[1,2,3,4,5]]


# In[29]:


suma = 0
for k in range(len(lista)):
    for x in range(len(lista[k])):
        suma += lista[k][x]
print(suma)


# In[35]:


#Ejercicio 1 - Se tiene una lista. Imprimir mi lista. Cambiar a 0 los valores mayores del primer elemento de la lista
#volver a imprimir

lista = [[100,7,85,8],[4,8,56,25],[67,89,23,1],[78,56]]
print(lista)


# In[42]:


for k in range(len(lista)):
    for x in range(len(lista[k])):
        if k == 0:
            if lista[k][x] > 50:
                lista[k][x] = 0


# In[43]:


print(lista)


# In[44]:


#Ejercicio2 - Imprimir lista. Fijar como cero todos los valores mayores a 10. Volver a imprimir
lista = [[4,12,5,66],[14,6,25],[3,4,5,67,89,23,11],[78,56]]
print(lista)


# In[45]:


for k in range(len(lista)):
    for x in range(len(lista[k])):
        if lista[k][x] > 10:
            lista[k][x] = 0
print(lista)


# In[46]:


#Imprimir el último elemento de la lista principal
print(lista[-1])


# In[ ]:





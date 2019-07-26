#!/usr/bin/env python
# coding: utf-8

# In[5]:


sueldos = [123,3,5,67,156]


# In[8]:


#Ordeno Sueldos
for x in range(4):
    if sueldos[x] > sueldos[x +1]:
        aux = sueldos[x]
        sueldos[x] = sueldos[x +1]
        sueldos[x+1] = aux
    


# In[9]:


print(sueldos)


# In[27]:


#Lista Paises
paises = ["Zaire", "Brazil","Perú", "Bolivia","Argentina"]


# In[28]:


#Ordeno Paises
for k in range(4):
    for x in range(4-k):
        if paises[x] > paises[x + 1]:
            aux = paises[x]
            paises[x] = paises[x + 1]
            paises[x + 1] = aux


# In[29]:


print(paises)


# In[34]:


#Sueldos
sueldos = [123,3,5,67,156]


# In[32]:


for k in range(len(sueldos) - 1):
    for x in range(len(sueldos) - 1 - k):
        if sueldos[x] > sueldos[x + 1]:
            aux = sueldos[x]
            sueldos[x] = sueldos[x + 1]
            sueldos[x + 1] = aux


# In[35]:


print(sueldos)


# In[36]:


#Elementos
elementos = [45, 98, 65, 154, 890]


# In[37]:


#Mayor a Menor
for k in range(len(elementos) - 1):
    for x in range(len(elementos) - 1 - k):
        if elementos[x] < elementos[x+1]:
            aux = elementos[x]
            elementos[x] = elementos[x + 1]
            elementos[x + 1] = aux


# In[38]:


print(elementos)


# In[39]:


#De Menor a Mayor
for k in range(len(elementos) - 1):
    for x in range(len(elementos) - 1 - k):
        if elementos[x] > elementos[x + 1]:
            aux = elementos[x]
            elementos[x] = elementos[x + 1]
            elementos[x + 1] = aux


# In[40]:


print(elementos)


# In[ ]:





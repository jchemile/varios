#!/usr/bin/env python
# coding: utf-8

# In[3]:


#Usando While
print("Tabla del 5 usando while")
x = 5
while x <= 50:
    print(x)
    x = x + 5


# In[4]:


#Usando For
print("Tabla del 5 usando for")
for x in range(5,51,5):
    print(x)


# In[8]:


#Valor por teclado y sumar. Finaliza con -1

x = int(input("Ingrese un valor. Si ingresa -1 el programa finalizará\n"))
total = 0

while x > -1:
    total = total + x
    x = int(input("Ingrese un valor. Si ingresa -1 el programa finalizará\n"))

print("El total ingresado es", total)


# In[11]:


#Ejercicio para comentarios
n = 0
suma = 0
numero = 0

while n < 10:
    numero = int(input("Ingrese un valor\n"))
    suma = suma + numero
    n = n + 1
    
print("La suma total ingresada es igual a ", suma)


# In[ ]:





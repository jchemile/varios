#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Definir lista vacía y cargar valores por teclado


# In[2]:


lista = []
for x in range(5):
    valor = int(input("Ingrese valor: "))
    lista.append(valor)

print(lista)


# In[4]:


#Ingresar valores. Finalizar la carga con un cero


# In[6]:


lista = []
valor = int(input("Ingrese valor: "))


# In[7]:


while valor != 0:
    lista.append(valor)
    valor = int(input("Ingrese valor: "))


# In[8]:


print("Tamaño de la lista: ", len(lista))


# In[9]:


# Crear lista de sueldo de 5 operarios. Imprimir la lista y el promedio de sueldos


# In[10]:


sueldos = []
x = 0
suma = 0

while x < 5:
    sueldo = int(input("Ingrese el sueldo del operario: "))
    sueldos.append(sueldo)
    suma += sueldo 
    x += 1
    
print("Sueldos: ", sueldos, "Promedio: ", suma/5 )


# In[11]:


# Cargar 5 personas. Calcular el promedio. Calcular cuántas son más altas que el promedio


# In[1]:


alturas = []
x = 0
suma = 0
sobre_promedio = 0
promedio = 0

while x < 5:
    altura = float(input("Ingrese la altura: "))
    alturas.append(altura)
    suma += altura
    x += 1
    
promedio = suma / 5

for altura in alturas:
    if altura > promedio:
        sobre_promedio += 1
        
print("Alturas: ", alturas, ".Promedio: ", promedio, ".Sobre el promedio: ", sobre_promedio)


# In[3]:


#Crear dos listas. Almacenar los sueldos en dos listas. Imprimirlas


# In[5]:


turnoMan = []
turnoTar = []
x = 0

while x < 4:
    sueldo = int(input("Sueldo Mañana: "))
    turnoMan.append(sueldo)
    x += 1

while x > 0:
    sueldo = int(input("Sueldo Tarde: "))
    turnoTar.append(sueldo)
    x -= 1
    
print("Mañana: ", turnoMan, "Tarde: ", turnoTar)


# In[ ]:





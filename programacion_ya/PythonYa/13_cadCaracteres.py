#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Ejemplo 1 - Cargar nombre y mostrar primer caracter
nombre = input("Nombre: ")
print("Primer carcter: ", nombre[0], ".Cantidad de letras: ", len(nombre))


# In[4]:


#Ejemplo 2 - Cargar el nombre. Si comienza con minúscula informar
nombre = input("Nombre: ")


# In[5]:


if nombre[0] == "a" or nombre[0] == "e" or nombre[0] == "i" or nombre[0] == "o" or nombre[0] == "u":
    print("Empieza con Vocal")
else:
    print("No empieza con Vocal")


# In[6]:


#Ejemplo 3 - verificar si el string contiene @
mail = input("mail: ")


# In[9]:


for i in mail:
    if i == "@":
        print("Contiene @")


# In[10]:


cantidad = 0
x = 0

while x < len(mail):
    if mail[x] == "@":
        cantidad = cantidad + 1
    x = x + 1
    
if cantidad == 1:
    print("Contiene @")
else:
    print("No contiene @")


# In[16]:


#Con un string = maRiA  realizar modificaciones con upper, lower y capitalize

string = "mAriA"
print(string)
print("Upper:", string.upper(), "Lower:", string.lower(), "Capitalize:", string.capitalize() )


# In[24]:


#Contar espacios
texto = "De 3 toneladsde peso y fabricado íntegramente en el país, servirá para generar sistemas de alerta temprana de inundaciones elaborar mapas de riesgo de enfermedades de los cultivos, vigilancia del mar argentino frente a la pesca ilegal, y también para dar soporte a la gestión de emergencias ambientales"

espacio = 0
for letra in texto:
    if letra == " ":
        espacio += 1
        
print("Espacios = ", espacio)


# In[25]:


texto_minuscula = texto.lower()

vocales = 0


# In[26]:


for letra in texto_minuscula:
    if letra == "a" or letra == "e" or letra == "i" or letra == "o" or letra == "u":
        vocales += 1
        
print("Vocales: ", vocales)


# In[30]:


#String de 20 a 30 caracteres
clave = input("Ingrese clave. Tienen que ser más de 5 caracteres:\n")


# In[31]:


if len(clave) < 5:
    print("Son menos de 5")
else:
    print("Es correcto")


# In[ ]:





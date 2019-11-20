#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Cargar notas por teclado


# In[2]:


nombres = []
notas = []

for x in range(3):
    nom = input("Nombre: ")
    nombres.append(nom)
    no1 = int(input("Ingrese la primera nota: "))
    no2 = int(input("Ingrese la segunda nota: "))
    notas.append([no1, no2])


# In[4]:


for x in range(len(nombres)):
    print(nombres[x], notas[x][0], notas[x][1])


# In[5]:


#Problema: Cargar nombre, sueldo, pagado por empleado y el mayor sueldo
nombres = []
sueldos = []
totalsueldos = []


# In[6]:


#Ingreso lo svalores
for x in range(3):
    nom = input("Ingrese el nombre del empleado")
    nombres.append(nom)
    su1 = int(input("Ingrese el primer sueldo: "))
    su2 = int(input("Ingrese el segundo sueldo: "))
    su3 = int(input("Ingrese el tercer sueldo: "))
    sueldos.append([su1, su2, su3])


# In[7]:


#Obtengo el total
for x in range(3):
    total = sueldos[x][0] + sueldos[x][1] + sueldos[x][2]
    totalsueldos.append(total)


# In[7]:


print(sueldos)


# In[8]:


#Imprimo nombre y sueldo total
for x in range(3):
    print(nombres[x], totalsueldos[x])


# In[14]:


#Obtengo el empleado con mayor sueldo
posmayor = 0
mayor = totalsueldos[0]

for x in range(1,3):
    if totalsueldos[x] > mayor:
        mayor = totalsueldos[x]
        posmayor = x


# In[16]:


print("Empleado con mayor sueldo: ", nombres[posmayor], "Sueldo: ", mayor )


# In[17]:


#Solicitar enteros. El primer valor indica la cantida de elementos. El segundo indica la cantidad de elementos de cada.
#Mostrar la lista y sumar todos los elementos
lista=[]
elementos = int(input("Cuantos elementos pondremos en la lista: "))
sub = int(input("Cuantos elementos tenrán las listas internas: "))


# In[18]:


for k in range(elementos):
    lista.append([])
    for x in range(sub):
        valor = int(input("Ingrese valor: "))
        lista[k].append(valor)


# In[19]:


print(lista)


# In[21]:


suma = 0
for k in range(len(lista)):
    for x in range(len(lista[k])):
        suma += lista[k][x]


# In[22]:


print("Suma: ", suma)


# In[23]:


#Definir 3 listas.
#La primera es una sublista con los nombres del padre y madre
#La segunda tiene los nombres de los hijos. Puede haber familias sin hijos
#Imprimir los resultados
padres = []
hijos = []


# In[25]:


#Cargo Padres e hijos
for k in range(3):
    pa = input("Padre: ")
    ma = input("Madre: ")
    padres.append([pa, ma])
    cant = int(input("Cuantos hijos tiene esta familia"))
    hijos.append([])
    for x in range(cant):
        nom = input("Hijo: ")
        hijos[k].append(nom)
        


# In[31]:


#Listo Padre madre e hijo
for k in range(3):
    print("Padre: ", padres[k][0])
    print("Madre: ", padres[k][1])
    for x in range(len(hijos[k])):
        print("         Hijo: ", hijos[k][x])


# In[35]:


#Padres y cantidad de hijos
for x in range(3):
    print("Padre: ", padres[x][0])
    print("Cantidad de hijos: ", len(hijos[x]))


# In[1]:


#Se desea saber la temperatura media trimestral de cuatro paises. Para ello se tiene como dato las temperaturas medias mensuales de dichos paises.
#Se debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales.
#Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
#a - Cargar por teclado los nombres de los paises y las temperaturas medias mensuales.
#b - Imprimir los nombres de las paises y las temperaturas medias mensuales de las mismas.
#c - Calcular la temperatura media trimestral de cada país.
#c - Imprimr los nombres de los paises y las temperaturas medias trimestrales.
#b - Imprimir el nombre del pais con la temperatura media trimestral mayor.

paises = []
temperaturas = []


# In[2]:


#Carga de países y temperaturas
for k in range(4):
    pais = input("País: ")
    paises.append(pais)
    te1= int(input("Temperatura: "))
    te2= int(input("Temperatura: "))
    te3= int(input("Temperatura: "))
    temperaturas.append([te1,te2,te3])


# In[5]:


print(temperaturas)
len(temperaturas)


# In[7]:


print(paises)
len(paises)


# In[17]:


#b - Imprimir los nombres de las paises y las temperaturas medias mensuales de las mismas.
for k in range(len(paises)):
    print("País: ", paises[k], "T1: ", temperaturas[k][0],"T2: ", temperaturas[k][1],"T3: ", temperaturas[k][2])


# In[1]:


#c - Calcular la temperatura media trimestral de cada país.
for k in range(len(paises)):
    total = 0
    for x in range(len(temperaturas)):
        total += temperaturas[k][x]
        promedio = total/len(temperaturas)
    print("País: ", pais[k], "Promedio:", promedio)


# In[2]:


#Probmea 2
#Definir una lista y almacenar los nombres de 3 empleados.
#Por otro lado definir otra lista y almacenar en cada elemento una sublista con los números de días del mes que el empleado faltó
#Imprimir los nombres de empleados y los días que faltó.
#Mostrar los empleados con la cantidad de inasistencias.
#Finalmente mostrar el nombre o los nombres de empleados que faltaron menos días.


# In[19]:


employees = []
days = []


# In[21]:


for x in range(3):
    employee = input("Write the name of the employee: ")
    employees.append(employee)
    cant = int(input("Quantity of days the employee was outside: "))
    days.append([])
    for x in range(cant):
        day = int(input("Day: "))
        days[k].append(day)
        


# In[31]:



for k in range(3):
    print("Name: ", employees[k])
    for x in range(len(days[k])):
        print("Día: ", days[k][x])


# In[33]:


for k in range(3):
    print("Name: ", employees[k])
    cantidad = 0
    for x in range(len(days[k])):
        cantidad += 1
    print("Cantidad: ", cantidad)    


# In[35]:


men = len(days[0])
for x in range(1,3):
    if len(days[x]) < men:
        men=len(days[x])
        
print("Less Absent by: ")
for x in range(3):
    if(len(days[x])==men):
        print(employees[x])


# In[35]:


#Desarrollar una lista que cree una lista de 50 elementos donde el primer elemento tenga un entero, el segundo, dos elementos.
lista = []
cant = 1


# In[38]:


for x in range(50):
    lista.append([])
    valor = 1
    for x in range(cant):
        lista[k].append(valor)
        valor = valor + 1
    cant = cant + 1


# In[39]:


print(lista)


# In[1]:


print("H")


# In[ ]:





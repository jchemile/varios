lenguajes1 = {"C", "Pascal", "PHP", "Python"}
lenguajes2 = {"C++", "Java", "Python"}

print(lenguajes1)
print(lenguajes2)

#Union
conjunto1 = lenguajes1 | lenguajes2
print(conjunto1)

#Intrseccion
conjunto2 = lenguajes1 & lenguajes2
print(conjunto2)

#Diferencia
conjunto3 = lenguajes1 - lenguajes2
print(conjunto3)

#No en ambos
conjunto4 = lenguajes1 ^ lenguajes2
print(conjunto4)
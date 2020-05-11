import mysql.connector

conexion1 = mysql.connector.connect(user="world", passwd="world")

cursor1 = conexion1.cursor()
cursor1.execute("show databases")

for base in cursor1:
    print(base)

conexion1.close
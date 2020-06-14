import sqlite3

conexion= sqlite3.connect("db1.db")

conexion.execute("INSERT INTO articulos(descripcion, precio) values(?,?)", ("Naranjas", 23.5))
conexion.execute("INSERT INTO articulos(descripcion, precio) values(?,?)", ("Manzanas", 12.5))
conexion.execute("INSERT INTO articulos(descripcion, precio) values(?,?)", ("Peras", 3.5))

conexion.commit()
conexion.close()
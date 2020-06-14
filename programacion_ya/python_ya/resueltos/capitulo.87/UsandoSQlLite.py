import sqlite3

conexion= sqlite3.connect("resueltos\\capitulo.87\\bd1.db")

try:
    conexion.execute("""CREATE TABLE articulos (
                        codigo INTEGER PRIMARY KEY AUTOINCREMENT,
                        descripcion TEXT,
                        precio REAL)""")
    print("se creo la tabla articulos")

except sqlite3.OperationalError:
    print("La tabla ya existe")

conexion.close()
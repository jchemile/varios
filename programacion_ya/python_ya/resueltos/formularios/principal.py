import tkinter as tk
from tkinter import ttk

from resueltos.formularios import login
from resueltos.formularios import mensaje

class Aplicacion:
    def __init__(self):
        self.ventana1 = tk.Tk()
        self.ventana1.title("Hola Mundo")

        self.boton1 = ttk.Button(self.ventana1, text="Mostrar Mensaje", command = self.mostrar_mensaje)
        self.boton1.grid(column=0, row=0)

        self.boton2 = ttk.Button(self.ventana1, text="Mostrar Formulario Login", command= self.mostrar_login)
        self.boton2.grid(column=0, row=1)
        self.ventana1.mainloop()

    def mostrar_mensaje(self):
        mensaje.mostrar("prueba para acceder al modulo paquete: ")

    def mostrar_login(self):
        login.mostrar()

aplicacion1 = Aplicacion()
import tkinter as tk
from tkinter import ttk

class Aplicacion:

    def __init__(self):
        self.ventana1=tk.Tk()

        self.label1 = ttk.Label(text="ingrese nombre de usuario:")
        self.label1.grid(column=0, row=0)
        self.dato1 = tk.StringVar()
        self.entry1=ttk.Entry(self.ventana1, width=30, textvariable=self.dato1)
        self.entry1.grid(column=1, row=0)


        self.label2 = ttk.Label(self.ventana1, text="Seleccione País: ")
        self.label2.grid(column=0, row=1)
        self.opcion = tk.StringVar()
        pais=("Argentina", "Brasil", "Mexico", "Ecuador", "Chile", "Uruguay", "Peru")
        self.combobox1 = ttk.Combobox(self.ventana1,
                                      width=10,
                                      textvariable=self.opcion,
                                      values=pais)

        self.combobox1.current(0)
        self.combobox1.grid(column=0, row=2)
        self.boton1=tk.Button(self.ventana1, text="Recuperar", command=self.recuperar)
        self.boton1.grid(column=0,row=3)
        self.label3=ttk.Label(self.ventana1, text="Datos de usted: ")
        self.label3.grid(column=0, row=4)
        self.ventana1.mainloop()

    def recuperar(self):
        self.label3.configure(text=self.dato1.get() + " de " + self.opcion.get())

app = Aplicacion()
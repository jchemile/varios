import tkinter as tk
import tkinter as ttk
import sys

class Aplicacion:

    def __init__(self):
        self.ventana1 = tk.Tk()
        menubar1 = tk.Menu(self.ventana1)
        self.ventana1.config(menu=menubar1)

        opciones1 = tk.Menu(menubar1)
        opciones1 = tk.Menu(menubar1)
        opciones1.add_command(label="Cambiar dimension ventana", command=self.fijartam)
        opciones1.add_command(label="Finalizar", command=self.finalizar)
        menubar1.add_cascade(label="Opciones", menu=opciones1)
        self.label1=ttk.Label(text="Ingrese ancho de la ventana en X:")
        self.label1.grid(column=0, row=0)
        self.ancho=tk.StringVar()
        self.entry1=ttk.Entry(self.ventana1, width=10, textvariable=self.ancho)
        self.entry1.grid(column=0, row=1)
        self.label2=ttk.Label(text="Ingrese el ancho en la ventana Y: ")
        self.label2.grid(column=0, row=2)
        self.alto=tk.StringVar()
        self.entry2=ttk.Entry(self.ventana1, width=10, textvariable=self.alto)
        self.entry2.grid(column=0, row=3)

        self.ventana1.mainloop()

    def fijartam(self):
        self.ventana1.geometry(self.ancho.get() + "x" + self.alto.get())

    def finalizar(self):
        sys.exit()

aplicacion = Aplicacion()
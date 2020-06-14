import tkinter as tk
from tkinter import ttk
import random

class Aplicacion:
    def __init__(self):
        self.ventana1 = tk.Tk()
        self.boton1 = ttk.Button(self.ventana1, text="Sortear", command =self.sortear)
        self.boton1.grid(column=0, row=0)
        self.canvas1=tk.Canvas(self.ventana1, width=300, height=500, background="black")
        self.canvas1.grid(column=0, row=1)
        self.archi1=tk.PhotoImage(file="carta1.png")
        self.archi2=tk.PhotoImage(file="carta2.png")
        self.archi3=tk.PhotoImage(file="carta3.png")
        self.canvas1.create_image(50,100,image=self.archi1, anchor="nw")
        self.ventana1.mainloop()

    def sortear(self):
        valor = random.randint(1,3)
        if valor==1:
            self.canvas1.create_image(50,100, image=self.archi1, anchor="nw")
        if valor==2:
            self.canvas1.create_image(50,100, image=self.archi2, anchor="nw")
        if valor==3:
            self.canvas1.create_image(50,100, image=self.archi3, anchor="nw")

app = Aplicacion()
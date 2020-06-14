import tkinter as tk

class Aplicacion:

    def __init__(self):
        self.ventana1 = tk.Tk()
        self.canvas1= tk.Canvas(self.ventana1, width=700, height=500, background="black")
        self.canvas1.grid(column=0, row=0)
        archi1=tk.PhotoImage(file="carta1.png")
        self.canvas1.create_image(30,100, image=archi1, anchor="nw")
        archi2=tk.PhotoImage(file="carta2.png")
        self.canvas1.create_image(240,100, image=archi2, anchor="nw")
        archi3=tk.PhotoImage(file="carta3.png")
        self.canvas1.create_image(450,100, image=archi3, anchor="nw")
        self.ventana1.mainloop()

aplicacion= Aplicacion()
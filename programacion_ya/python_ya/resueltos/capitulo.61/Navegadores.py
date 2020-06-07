import tkinter as tk

class Aplicacion:

    def __init__(self):
        self.ventana1 = tk.Tk()

        self.seleccion1 = tk.IntVar()
        self.check1 = tk.Checkbutton(self.ventana1, text="Mozilla", variable=self.seleccion1)
        self.check1.grid(column=0, row=0)

        self.seleccion2 = tk.IntVar()
        self.check2 = tk.Checkbutton(self.ventana1, text="Firefox", variable=self.seleccion2)
        self.check2.grid(column=0, row=1)

        self.seleccion3 = tk.IntVar()
        self.check3 = tk.Checkbutton(self.ventana1, text="Safari", variable=self.seleccion3)
        self.check3.grid(column=0, row=2)

        self.boton1 = tk.Button(self.ventana1, text="Verificar", command=self.verificar)
        self.boton1.grid(column=0, row=4)

        self.ventana1.mainloop()

    def verificar(self):
        seleccionado = []
        if self.seleccion1.get() == 1:
            seleccionado.append("Mozilla")
        if self.seleccion2.get() == 1:
            seleccionado.append("Firefox")
        if self.seleccion3.get() == 1:
            seleccionado.append("Safari")
        self.ventana1.title(seleccionado)

applicacion = Aplicacion()
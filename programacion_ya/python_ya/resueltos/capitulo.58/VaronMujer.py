import tkinter as tk


class Aplicacion:

    def __init__(self):
        self.valor = "No Identificado"
        self.ventana1 = tk.Tk()

        self.ventana1.title("Seleccionar si es varon o mujer")

        self.label1 = tk.Label(self.ventana1, text=self.valor)
        self.label1.grid(column=0,row=0)
        self.label1.configure(foreground="red")

        self.boton1 = tk.Button(self.ventana1, text="Varon", command = self.varon)
        self.boton1.grid(column = 0, row=1)

        self.boton2 = tk.Button(self.ventana1, text="Mujer", command = self.mujer)
        self.boton2.grid(column = 0, row=2)

        self.ventana1.mainloop()


    def varon(self):
        self.valor = "varon"
        self.label1.config(text=self.valor)

    def mujer(self):
        self.valor = "mujer"
        self.label1.config(text=self.valor)


aplicacion = Aplicacion()
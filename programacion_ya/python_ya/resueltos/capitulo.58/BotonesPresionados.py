import tkinter as tk


class Aplicacion:

    def __init__(self):
        self.valor = ""

        self.ventana1 = tk.Tk()
        self.ventana1.title("Controles de Button y Label")

        self.label1 = tk.Label(self.ventana1, text=self.valor)
        self.label1.grid(column=0,row=0)
        self.label1.configure(foreground="red")

        self.boton1 = tk.Button(self.ventana1, text="1", command = self.presiona1)
        self.boton1.grid(column = 0, row=1)

        self.boton2 = tk.Button(self.ventana1, text="2", command = self.presiona2)
        self.boton2.grid(column = 0, row=2)

        self.boton3 = tk.Button(self.ventana1, text="3", command = self.presiona3)
        self.boton3.grid(column = 0, row=3)

        self.boton4 = tk.Button(self.ventana1, text="4", command = self.presiona4)
        self.boton4.grid(column = 0, row=4)

        self.boton5 = tk.Button(self.ventana1, text="5", command = self.presiona5)
        self.boton5.grid(column = 0, row=5)

        self.ventana1.mainloop()


    def presiona1(self):
        self.valor = self.valor+"-1"
        self.label1.config(text=self.valor)

    def presiona2(self):
        self.valor = self.valor+"-2"
        self.label1.config(text=self.valor)

    def presiona3(self):
        self.valor = self.valor+"-3"
        self.label1.config(text=self.valor)

    def presiona4(self):
        self.valor = self.valor+"-4"
        self.label1.config(text=self.valor)

    def presiona5(self):
        self.valor = self.valor+"-5"
        self.label1.config(text=self.valor)

aplicacion = Aplicacion()
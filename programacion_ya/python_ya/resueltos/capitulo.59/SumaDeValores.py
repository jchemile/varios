import tkinter as tk

class Aplicacion:

    def __init__(self):
        self.ventana1 = tk.Tk()

        self.label1 = tk.Label(self.ventana1, text="Ingrese un número")
        self.label1.grid(column=0, row=0)

        self.dato1= tk.StringVar()
        self.entry1 = tk.Entry(self.ventana1, width=10, textvariable=self.dato1)
        self.entry1.grid(column=0, row=1)

        self.dato2  = tk.StringVar()
        self.entry2 = tk.Entry(self.ventana1, width=10, textvariable=self.dato2)
        self.entry2.grid(column=2, row=1)

        self.boton1 = tk.Button(self.ventana1, text="Calcular suma", command=self.calcularsuma)
        self.boton1.grid(column=0, row=2)

        self.label2 = tk.Label(self.ventana1, text="resultado")
        self.label2.grid(column=0, row=3)
        self.ventana1.mainloop()

    def calcularsuma(self):
        valor1 = int(self.dato1.get())
        valor2 = int(self.dato2.get())
        res = valor1 + valor2
        self.label2.configure(text=res)


        self.ventana1.mainloop()



app1 = Aplicacion()
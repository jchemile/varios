import tkinter as tk

class Aplicacion:

    def __init__(self):
        self.ventana1 = tk.Tk()

        self.label1 = tk.Label(self.ventana1, text="Ingrese nombre y contraseña")
        self.label1.grid(column=0, row=0)


        self.label2 = tk.Label(self.ventana1, text="Nombre")
        self.label2.grid(column=0, row=1)
        self.usuario= tk.StringVar()
        self.entry1 = tk.Entry(self.ventana1, width=10, textvariable=self.usuario)
        self.entry1.grid(column=1, row=1)

        self.label3 = tk.Label(self.ventana1, text="Contraseña")
        self.label3.grid(column=0, row=2)
        self.clave  = tk.StringVar()
        self.entry2 = tk.Entry(self.ventana1, width=10, textvariable=self.clave, show="*")
        self.entry2.grid(column=1, row=2)

        self.boton1 = tk.Button(self.ventana1, text="Checkear", command=self.verClave)
        self.boton1.grid(column=0, row=3)

        self.ventana1.mainloop()

    def verClave(self):
        usuario = self.usuario.get()
        clave   = self.clave.get()

        if usuario == "juan" and clave == "abc123":
            self.ventana1.title("Correcto")
        else:
            self.ventana1.title("incorrecto")



app1 = Aplicacion()
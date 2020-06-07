import tkinter as tk

class Aplicacion:

    def __init__(self):
        self.ventana1 = tk.Tk()

        self.label1 = tk.Label(self.ventana1, text="Nombre: ")
        self.label1.grid(column=0, row=1)

        self.nombre= tk.StringVar()

        self.entry1 = tk.Entry(self.ventana1, width=10, textvariable=self.nombre)
        self.entry1.grid(column=0, row=2)

        self.listbox1 = tk.Listbox(self.ventana1)
        self.listbox1.grid(column=0, row=3)
        self.listbox1.insert(0,"arg")
        self.listbox1.insert(1,"bra")
        self.listbox1.insert(2,"chi")
        self.listbox1.insert(3,"col")
        self.listbox1.insert(4,"ecu")
        self.listbox1.insert(5,"mex")

        self.boton1 = tk.Button(self.ventana1, text="Recuperar", command=self.recuperar)
        self.boton1.grid(column=0, row=4)

        self.label1 = tk.Label(self.ventana1, text="Seleccionado:")
        self.label1.grid(column=0,row=5)
        self.ventana1.mainloop()


    def recuperar(self):
        nombre = self.nombre.get()

        if len(self.listbox1.curselection())!=0:
            self.label1.configure(text=self.listbox1.get(self.listbox1.curselection()[0]))
            self.ventana1.title(nombre +" es de " + self.listbox1.get(self.listbox1.curselection()[0]))


app = Aplicacion()
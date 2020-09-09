from datetime import datetime


class Alumno:
    def __init__(self, name, surname, bornDate, address, phone, email):
        self.name = name
        self.surname = surname
        self.bornDate = bornDate
        self.address = address
        self.phone = phone
        self.email = email
        
    def get_years(self):
        today = datetime.now()
        fecha = datetime.strptime(self.bornDate, "%d/%m/%Y")
        years_old = ((today - fecha)/365).days       
        return years_old
        

juanPerez = Alumno("Juan", "Perez", "08/07/1987", "Direccion falsa 1234", "1548688520", "juanperez@gmail.com")


juanPerez_years = juanPerez.get_years()
print(juanPerez_years)
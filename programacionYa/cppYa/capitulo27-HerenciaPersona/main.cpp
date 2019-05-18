#include <iostream>

using namespace std;

class Persona{
protected:
    char nombre[40];
    int edad;
public:
    void cargar();
    void imprimir();
};

class Empleado: public Persona{
private:
    int sueldo;
public:
    void cargarSueldo();
    void imprimirSueldo();
};

void Persona::cargar()
{
    cout << "Nombre: ";
    cin.getline(nombre,40);
    cout << "Edad: ";
    cin >> edad;
    cin.get();
}

void Persona::imprimir()
{
    cout << "Nombre: " << nombre << ". Edad: " << edad << endl;
}

void Empleado::cargarSueldo()
{
    cout << "Sueldo: ";
    cin >> sueldo;
}

void Empleado::imprimirSueldo()
{
    cout << "Sueldo: " << sueldo << endl;
}

int main()
{
    Persona persona;
    persona.cargar();
    persona.imprimir();
    cout << endl;

    Empleado empleado;
    empleado.cargar();
    empleado.cargarSueldo();
    empleado.imprimir();
    empleado.imprimirSueldo();
    return 0;
}

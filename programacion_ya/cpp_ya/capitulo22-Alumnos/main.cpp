#include <iostream>

using namespace std;

class Alumno{
private:
    char nombre[40];
    int edad;
public:
    Alumno();
    void imprimir();
    void esMayorEdad();
};

Alumno::Alumno()
{
    cout << "Ingrese nombre:";
    cin.getline(nombre, 40);
    cout << "Ingrese la edad: ";
    cin >> edad;
}

void Alumno::imprimir()
{
    cout << "Nombre: " << nombre << ". Edad: " << edad << endl;
}

void Alumno::esMayorEdad()
{
    if(edad >= 18)
        cout << "Es mayor";
    else
        cout << "No es mayor";
}

int main()
{
    Alumno prueba;
    prueba.imprimir();
    prueba.esMayorEdad();
    return 0;
}

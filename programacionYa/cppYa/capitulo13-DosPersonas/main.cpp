#include <iostream>

using namespace std;

class Persona{
private:
    char nombre[40];
    int edad;
public:
    void inicializar();
    void imprimir();
    void esMayorEdad();
};

void Persona::inicializar()
{
    cout << "Nombre: ";
    cin.getline(nombre, 40);
    cout << "Edad: ";
    cin >> edad;
}

void Persona::imprimir()
{
    cout << "Nombre: " << nombre << ". Edad: " << edad << endl;
}

void Persona::esMayorEdad()
{
    if(edad >= 18)
        cout << "Es mayor" << endl;
    else
        cout << "No es mayor" << endl;
}

int main()
{
    Persona persona1;
    Persona persona2;
    persona1.inicializar();
    cin.get();
    persona2.inicializar();
    persona1.imprimir();
    persona2.imprimir();
    persona1.esMayorEdad();
    persona2.esMayorEdad();
    return 0;
}

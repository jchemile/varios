#include <iostream>

using namespace std;

class Persona{
private:
    char nombre[40];
    int edad;
public:
    void inicializar();
    void imprimir();
    void esMayorDeEdad();
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

void Persona::esMayorDeEdad()
{
    if(edad >= 18)
        cout << "Mayor";
    else
        cout << "No es mayor";
}

int main()
{
    Persona *persona1;
    persona1 = new Persona();
    persona1 ->inicializar();
    persona1 ->imprimir();
    persona1 ->esMayorDeEdad();
    delete persona1;
    return 0;
}

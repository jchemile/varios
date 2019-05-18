#include <iostream>

using namespace std;

class Empleado{
private:
    char nombre[40];
    int sueldo;
public:
    void inicializar();
    void imprimir();
    void pagaImpuestos();
};

void Empleado::inicializar()
{
    cout << "Nombre: ";
    cin.getline(nombre, 40);
    cout << "Sueldo: ";
    cin >> sueldo;
}

void Empleado::imprimir()
{
    cout << "Nombre: " << nombre << ". " << "Sueldo: " << sueldo << endl;
}

void Empleado::pagaImpuestos()
{
    if(sueldo > 3000)
        cout << "Paga Impuestos" << endl;
    else
        cout << "No Paga" << endl;
}

int main()
{
    Empleado empleado1;
    empleado1.inicializar();
    empleado1.imprimir();
    empleado1.pagaImpuestos();
    return 0;
}

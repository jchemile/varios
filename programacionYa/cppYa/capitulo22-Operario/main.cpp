#include <iostream>

using namespace std;

class Operario{
private:
    char nombre[40];
    int sueldo;
public:
    Operario();
    void imprimir();
    void pagaImpuestos();
};

Operario::Operario()
{
    cout << "Nombre: ";
    cin.getline(nombre, 40);
    cout << "Sueldo: ";
    cin >> sueldo;
}

void Operario::imprimir()
{
    cout << "Nombre: " << nombre << "Sueldo: " << sueldo << endl;
}

void Operario::pagaImpuestos()
{
    if(sueldo > 3000)
        cout << "PAGA IMPUESTOS";
    else
        cout << "NO PAGA IMPUESTO";
}


int main()
{
    Operario prueba;
    prueba.imprimir();
    prueba.pagaImpuestos();
    return 0;
}

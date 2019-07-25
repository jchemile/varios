#include <iostream>

using namespace std;

int main()
{
    int cantidadAIngresar, cantidadIngresadas, altura, sumaAlturas;
    float promedio;

    sumaAlturas = 0;
    cantidadIngresadas = 1;

    cout << "Alturas a ingresar: ";
    cin >> cantidadAIngresar;

    while(cantidadIngresadas <= cantidadAIngresar)
    {
        cout << "Ingrese altura:";
        cin >> altura;
        sumaAlturas += altura;
        cantidadIngresadas++;
    }

    promedio = sumaAlturas/(cantidadIngresadas-1);

    cout << "El promedio es: " << promedio;

    return 0;
}

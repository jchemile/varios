#include <iostream>

using namespace std;

int main()
{
    int sueldo, sueldosCargados, cantidadDeEmpleados;
    int entre100Y300, masDe300, gastoTotal;

    sueldosCargados = 1;
    entre100Y300 = 0;
    masDe300 = 0;
    gastoTotal = 0;

    cout << "Empleados a cargar: " << endl;
    cin >> cantidadDeEmpleados;

    while(sueldosCargados <= cantidadDeEmpleados)
    {
        cout << "Ingrese sueldo: ";
        cin >> sueldo;
        gastoTotal += sueldo;

        if(sueldo > 300)
            masDe300++;
        else
            if(sueldo >= 100)
                entre100Y300++;

        sueldosCargados++;
    }

    cout << "Gasto total = " << gastoTotal << endl;
    cout << "Entre 100 y 300 = " << entre100Y300 << endl;
    cout << "Sobre 300 = " << masDe300;
    return 0;
}

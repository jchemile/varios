#include <iostream>
#include <string.h>

using namespace std;

class SueldoEmpleados{
private:
    char empleados[4][40];
    int sueldos[4][3];
    int sueldosTot[4];
public:
    void cargar();
    void calcularSumaSueldos();
    void imprimirTotalPagado();
    void empleadoMayorSueldo();
};

void SueldoEmpleados::cargar()
{
    for(int f = 0; f < 4; f++)
    {
        cout << "Ingrese el nombre del empleado:";
        cin.get(empleados[f],40);
        for(int c = 0; c < 3;c++)
        {
            cout << "Ingrese sueldo: ";
            cin >> sueldos[f][c];
            cin.get();
        }
    }
}

void SueldoEmpleados::calcularSumaSueldos()
{
    for(int f = 0; f < 4; f++)
    {
        int suma = 0;
        for(int c = 0; c < 3; c++)
        {
            suma = suma + sueldos[f][c];
        }
        sueldosTot[f] = suma;
    }
}

void SueldoEmpleados::imprimirTotalPagado()
{
    cout << "Total de sueldos pagados por empleado." << endl;
    for(int f = 0; f < 4; f++)
        cout << empleados[f] << " - " << sueldosTot[f] << endl;
}

void SueldoEmpleados::empleadoMayorSueldo()
{
    int may = sueldosTot[0];
    char nom[40];
    strcpy(nom, empleados[0]);
    for(int f = 0; f < 4 ; f++)
    {
        if(sueldosTot[f] > may)
        {
            may = sueldosTot[f];
            {
                may = sueldosTot[f];
                strcpy(nom, empleados[f]);
            }
        }
    }
    cout << "El empleado con mayor sueldo es " << nom << ". Sueldo: " << may;
}

int main()
{
    SueldoEmpleados prueba;
    prueba.cargar();
    prueba.calcularSumaSueldos();
    prueba.imprimirTotalPagado();
    prueba.empleadoMayorSueldo();
    return 0;
}

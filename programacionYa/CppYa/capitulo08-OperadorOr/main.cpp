#include <iostream>

using namespace std;

int main()
{
    int dia, mes, anio;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> anio;

    if( mes == 1 || mes == 2 || mes == 4)
        cout << "Corresponde al primer trimestre";
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int cuenta, saldo, saldosAcreedores;

    saldosAcreedores = 0;

    cout << "Numero de cuenta: ";
    cin >> cuenta;

    do{

        cout << "Ingrese saldo: ";
        cin >> saldo;

        if(saldo == 0)
            cout << "Nulo"<< endl;
        else
            if(saldo < 0)
                cout << "Deudor" << endl;
            else
                {
                    cout << "Acreedor" << endl;
                    saldosAcreedores += saldo;
                }

        cout << "Numero de cuenta: ";
        cin >> cuenta;

    }while(cuenta > 0);

    cout << "Suma total de Acreedores: " << saldosAcreedores;

    return 0;
}

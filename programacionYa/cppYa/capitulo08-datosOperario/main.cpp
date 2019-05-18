#include <iostream>

using namespace std;

int main()
{
    int antiguedad;
    float sueldo;

    cout << "Antiguedad: ";
    cin >> antiguedad;
    cout << "Sueldo: ";
    cin >> sueldo;

    if(sueldo < 500 & antiguedad > 10)
        cout << "Sueldo con aumento del 20% = " << sueldo + (sueldo*0.2);
    else
        if(sueldo < 500 & antiguedad < 10)
            cout << "Sueldo con aumento del 5% = " << sueldo + (sueldo*0.05);
        else
        if(sueldo > 500)
            cout << "Sueldo = " << sueldo;

    return 0;
}

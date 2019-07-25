#include <iostream>

using namespace std;

int main()
{
    int cantidad;
    int lado1, lado2, lado3;
    int equilatero, escaleno, isoceles;

    equilatero = 0;
    escaleno = 0;
    isoceles = 0;

    cout << "Triangulos a ingresar: ";
    cin >> cantidad;

    for(int i = 0; i < cantidad; i++)
    {
        cout << "Lado 1: ";
        cin >> lado1;
        cout << "Lado 2: ";
        cin >> lado2;
        cout << "Lado 3: ";
        cin >> lado3;

        if(lado1 == lado2 && lado1 == lado3)
        {
            cout << "Equilatero" << endl;
            equilatero++;
        }
        else
        {
            if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
            {
                cout << "Escaleno" << endl;
                escaleno++;
            }
            else
            {
                cout << "Isoceles" << endl;
                isoceles++;
            }
        }

    }

    cout << "Ingresados: " << cantidad << endl;
    cout << "Equilatero: " << equilatero << ". Escaleno: " << escaleno << ". Isceles: " << isoceles;

    return 0;
}

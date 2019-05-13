#include <iostream>

using namespace std;

int main()
{
    int nota1, nota2, nota3;
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    cout << "Nota 3: ";
    cin >> nota3;
    int promedio = (nota1+nota2+nota3)/3;
    if(promedio >= 7)
        cout << "Promocionado";
    else
        if(promedio >= 4)
            cout << "Regular";
        else
            cout << "Reprobado";
    return 0;
}

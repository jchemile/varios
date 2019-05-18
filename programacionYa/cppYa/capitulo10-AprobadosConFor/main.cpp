#include <iostream>

using namespace std;

int main()
{
    int aprobados, reprobados, f, nota;
    aprobados = 0;
    reprobados = 0;
    for(f = 1; f <= 10; f++)
    {
        cout << "Ingrese la nota: ";
        cin >> nota;
        if(nota >= 7)
            aprobados++;
        else
            reprobados++;
    }
    cout << "Aprobados: " << aprobados;
    cout << "Reprobados: " << reprobados;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int notas, nota, mayorOIguala7, menorA7;

    mayorOIguala7 = 0;
    menorA7 = 0;
    notas = 1;
    while(notas <= 10)
    {
        cout << "Ingrese nota[Podra ingresar 10]: ";
        cin >> nota;
        if(nota >= 7)
            mayorOIguala7++;
        else
            menorA7++;
        notas++;
    }
    cout << "Mayor a 7: " << mayorOIguala7 << " menor a 7 " << menorA7;
    return 0;
}

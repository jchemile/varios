#include <iostream>

using namespace std;

int main()
{
    int nota1, nota2, nota3;
    float promedio;
    cout << "Nota 1:";
    cin >> nota1;
    cout << "Nota 2:";
    cin >> nota2;
    cout << "Nota 3:";
    cin >> nota3;
    promedio = ((float)nota1+nota2+nota3)/3.0;
    if(promedio >= 7)
        cout << "Promocionado!!";

    return 0;
}

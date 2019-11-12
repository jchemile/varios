#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int *puntero = arr;
    cout << "Ingresar 5 elementos" << endl;
    //Ingreso con aritmética de punteros
    for(int i = 0; i < 5; i++)
    {
        cout << "Indice "<< i <<": ";
        cin >> *(puntero + i);
    }
    //Imprimo con aritmética de puntero
    cout << "Imprimo 5 elementos" << endl;
    for(int f = 0; f < 5; f++)
    {
        cout << "Indice "<< f <<": " << *(puntero + f) <<endl;
    }
}

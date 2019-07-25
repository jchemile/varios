#include <iostream>

using namespace std;

int main()
{
    int cant1, cant2, cant3, suma;
    float peso;
    cant1 = 0;
    cant2 = 0;
    cant3 = 0;

    do{
        cout << "Ingrese el peso de la pieza (0 para finalizar)";
        cin >> peso;
        if(peso > 10.2)
            cant1++;
        else
            if(peso >= 9.8)
                cant2++;
            else
                if(peso > 0)
                    cant3++;
    } while(peso != 0);
    suma = cant1 + cant2 + cant3;
    cout << "Aptas: " << cant2 << endl;
    cout << "Superior a 10.2: " << cant1 << endl;
    cout << "Inferior a 9.8: " << cant3 << endl;
    return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char cadena1[50];
    char cadena2[50];
    cout << "Cadena 1: ";
    cin.getline(cadena1, 50);
    cout << "Cadena 2: ";
    cin.getline(cadena2, 50);
    if(strcmp(cadena1, cadena2) == 0)
        cout << "Iguales";
    else
        if(strcmp(cadena1, cadena2) > 0)
            cout << "La primera cadena es mayor alfabeticamente";
        else
            cout << "La segunda cadena es mayor alfabeticamente";
    return 0;
}

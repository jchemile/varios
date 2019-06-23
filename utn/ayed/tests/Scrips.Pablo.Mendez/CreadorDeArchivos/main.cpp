#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    FILE *archivoprueba;
    int vectPrueba[5] = {};
    archivoprueba = fopen("archivoprueba", "w");

    cout << " podra cargar 5 valores: ";

    for(int i = 0; i < 5; i++){
        cout << "Ingrese el indice " << i << " : ";
        fwrite(vectPrueba, sizeof(int), 5, archivoprueba);
    }
    return 0;
}

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class OrdenamientoPaises{
private:
    char paises[5][40];
public:
    void cargar();
    void ordenar();
    void imprimir();
};

void OrdenamientoPaises::cargar()
{
    for(int i = 0; i < 5;i++)
    {
        cout << "Pais:";
        cin.getline(paises[i],40);
    }
}

void OrdenamientoPaises::ordenar()
{
    for(int k = 0; k < 4;k++)
        for(int f = 0; f < 4 - k; f++)
        {
            if(strcmp(paises[f], paises[f+1]) > 0)
            {
                char aux[40];
                strcpy(aux, paises[f]);
                strcpy(paises[f] ,paises[f+1]);
                strcpy(paises[f+1],aux);
            }
        }
}

void OrdenamientoPaises::imprimir()
{
    for(int i = 0; i < 5; i++)
    {
        cout << paises[i] << endl;
    }
}

int main()
{
    OrdenamientoPaises prueba;
    prueba.cargar();
    prueba.imprimir();
    prueba.ordenar();
    cout << "ORDENADOS" << endl;
    prueba.imprimir();
    return 0;
}

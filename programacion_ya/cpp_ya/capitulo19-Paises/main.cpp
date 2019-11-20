#include <iostream>
#include <string.h>

using namespace std;

class Paises{
private:
    char nombres[5][40];
    int habitantes[5];
public:
    void cargar();
    void ordenarAlfabeticamente();
    void ordenarMayorAMenor();
    void imprimir();
};

void Paises::cargar()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Nombre: ";
        cin.getline(nombres[i], 40);
        cout << "Habitantes: ";
        cin >> habitantes[i];
        cin.get();
    }
}

void Paises::imprimir()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Pais: " << nombres[i] << ". Habitantes: " << habitantes[i] << endl;
    }
}

void Paises::ordenarAlfabeticamente()
{
    for(int i = 0; i < 5; i ++)
        for(int c = 0; c < 4 - i; c++)
        {
            if(strcmp(nombres[c], nombres[c+1]) > 0)
            {
                //Ordeno Nombres
                char auxNombres[40];
                strcpy(auxNombres, nombres[c + 1]);
                strcpy(nombres[c+1], nombres[c]);
                strcpy(nombres[c], auxNombres);
                //Ordeno Habitantes
                int auxHabitantes;
                auxHabitantes = habitantes[c+1];
                habitantes[c+1] = habitantes[c];
                habitantes[c] = auxHabitantes;

            }
        }
}

void Paises::ordenarMayorAMenor()
{
    for(int i = 0; i < 5; i++)
        for(int c = 0; c < 4 - i; c++)
        {
            if(habitantes[c] < habitantes[c+1])
            {
                //Ordeno Nombres
                char auxNombres[40];
                strcpy(auxNombres, nombres[c]);
                strcpy(nombres[c], nombres[c+1]);
                strcpy(nombres[c+1], auxNombres);
                //Ordeno Habitantes
                int auxHabitantes;
                auxHabitantes = habitantes[c];
                habitantes[c] = habitantes[c+1];
                habitantes[c+1] = auxHabitantes;
            }
        }
}




int main()
{
    Paises prueba;
    prueba.cargar();
    cout << "POR ORDEN DE CARGA" << endl;
    prueba.imprimir();
    cout << "ALFABETICAMENTE" << endl;
    prueba.ordenarAlfabeticamente();
    prueba.imprimir();
    cout << "MAYOR A MENOR" << endl;
    prueba.ordenarMayorAMenor();
    prueba.imprimir();
    return 0;
}

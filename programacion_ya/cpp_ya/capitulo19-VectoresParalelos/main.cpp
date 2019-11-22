#include <iostream>
#include <string.h>

using namespace std;

class NotaAlumnos{
private:
    char nombres[5][40];
    int notas[5];
public:
    void cargar();
    void ordenar();
    void imprimir();
};

void NotaAlumnos::cargar()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Nombre: ";
        cin.getline(nombres[i],40);
        cout << "Nota: ";
        cin >> notas[i];
        cin.get();
    }
}

void NotaAlumnos::imprimir()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Nombre: " << nombres[i] << ". Nota: " << notas[i] << endl;
    }
}

void NotaAlumnos::ordenar()
{
    for(int i = 0; i < 4; i++)
        for(int f = 0; f < 4 - i; f++)
        {
            if(notas[f] < notas[f+1])
            {
            //Cambio Notas
            int auxnota;
            auxnota = notas[f + 1];
            notas[f+1] = notas[f];
            notas[f] = auxnota;
            //Cambio Alumnos
            char auxnombre[40];
            strcpy(auxnombre,nombres[f + 1]);
            strcpy(nombres[f+1],nombres[f]);
            strcpy(nombres[f],auxnombre);
            }
        }
}

int main()
{
    NotaAlumnos prueba;
    prueba.cargar();
    cout << "NORMAL" << endl;
    prueba.imprimir();
    cout << "MAYOR A MENOR" << endl;
    prueba.ordenar();
    prueba.imprimir();
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Elementos{
    int elementos[5];
    int definirNumero();
public:
    Elementos();
    void mayor();
    void menor();
    void imprimir();
};



Elementos::Elementos()
{
    cout << "Se van a cargar valores" << endl;
    srand(time(NULL));
    for(int i = 0 ; i < 5;i++)
    {
        elementos[i] = rand() % 11;
    }
}

void Elementos::imprimir()
{
    for(int i = 0 ; i < 5;i++)
    {
        cout << "Indice: " << i << ". Valor: " << elementos[i] << endl;
    }
}

void Elementos::mayor()
{
    int mayor;
    for(int i = 0 ; i < 5;i++)
    {
        if(i == 0 || mayor < elementos[i])
        {
            mayor = elementos[i];
        }
    }
    cout << "Mayor: " << mayor << endl;
}

void Elementos::menor()
{
    int menor;
    for(int i = 0 ; i < 5;i++)
    {
        if(i == 0 || menor > elementos[i])
        {
            menor = elementos[i];
        }
    }
    cout << "Menor: " << menor << endl;
}
int main()
{
    Elementos prueba;
    prueba.imprimir();
    prueba.mayor();
    prueba.menor();
    return 0;
}

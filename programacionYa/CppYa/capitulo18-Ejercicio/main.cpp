#include <iostream>

using namespace std;

class Enteros{
private:
    int valores[5];
public:
    void cargar();
    void mayorAMenor();
    void menorAMayor();
    void imprimir();
};

void Enteros::cargar()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Valor: ";
        cin >> valores[i];
    }
}

void Enteros::imprimir()
{
    for(int i = 0; i < 5; i++)
    {
        cout << valores[i] << endl;
    }
}

void Enteros::mayorAMenor()
{
    for(int i = 0; i < 4; i++)
    {
        for(int f = 0; f < 4 - i;f++)
        {
            if(valores[f] < valores[f+1])
            {
                int aux;
                aux = valores[f+1];
                valores[f+1] = valores[f];
                valores[f] = aux;
            }
        }
    }
}

void Enteros::menorAMayor()
{
    for(int i = 0; i < 4; i++)
    {
        for(int f = 0; f < 4 - i;f++)
        {
            if(valores[f] > valores[f+1])
            {
                int aux;
                aux = valores[f+1];
                valores[f+1] = valores[f];
                valores[f] = aux;
            }
        }
    }
}

int main()
{
    Enteros prueba;
    prueba.cargar();
    cout << "POR ORDEN DE CARGA" << endl;
    prueba.imprimir();
    prueba.mayorAMenor();
    cout << "MAYOR A MENOR" << endl;
    prueba.imprimir();
    prueba.menorAMayor();
    cout << "MENOR A MAYOR" << endl;
    prueba.imprimir();
    return 0;
}

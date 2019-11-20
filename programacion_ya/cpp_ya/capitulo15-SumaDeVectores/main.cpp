#include <iostream>

using namespace std;

class SumaDeVectores{
private:
    int primerVector[4];
    int segundoVector[4];
    int vectorSuma[4];
public:
    void cargarVectores();
    void sumarVectores();
    void imprimirVectores();
};

void SumaDeVectores::cargarVectores()
{
    cout << "Cargamos el primer vector" << endl;
    for(int i = 0; i < 4; i++)
    {
        cout << "Valor para indice: " << i << ": " ;
        cin >> primerVector[i];
    }

    cout << "Cargamos el segundo vector" << endl;
    for(int i = 0; i < 4; i++)
    {
        cout << "Valor para indice: " << i << ": " ;
        cin >> segundoVector[i];
    }
}

void SumaDeVectores::sumarVectores()
{
    for(int i = 0; i < 4; i++)
        vectorSuma[i] = primerVector[i] + segundoVector[i];
}

void SumaDeVectores::imprimirVectores()
{
    cout << "Vector Suma"<< endl;
    for(int i = 0; i < 4; i++)
        cout << vectorSuma[i] << " ";
}

int main()
{
    SumaDeVectores prueba;
    prueba.cargarVectores();
    prueba.sumarVectores();
    prueba.imprimirVectores();
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    float valorIngresado;
    float maximoNegativo = 0, minimoPostivo;
    float minimoEnelRango;
    float sumaValores;
    int valoresIngresados;

    while(valorIngresado != 0){
        cout << "Por favor ingrese un valor ";
        cin >> valorIngresado;
        valoresIngresados++;

        if(valorIngresado < 0 && valorIngresado > maximoNegativo){
            maximoNegativo = valorIngresado;
        }
    }
    cout << maximoNegativo;

    return 0;
}

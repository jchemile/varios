#include <iostream>

using namespace std;

int main()
{
    int valor1, valor2, valor3;
    int mayor, menor;
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
    cout << "Valor 3: ";
    cin >> valor3;

//CALCULO MAYOR

if(valor1 == valor2 && valor1 == valor3 && valor2 == valor3)
    cout << "Ingreso tres valores iguales. No se puede calcular MAYOR " << endl;
else
{
    if (valor1 > valor2 & valor1 > valor3)
        mayor = valor1;
    else
        if(valor2 > valor3)
            mayor = valor2;
        else
            mayor = valor3;
}

//CALCULO MENOR

if(valor1 == valor2 && valor1 == valor3 && valor2 == valor3)
    cout << "Ingreso tres valores iguales. No se puede calcular MENOR " << endl.;
else
{
    if (valor1 < valor2 & valor1 < valor3)
        menor = valor1;
    else
        if(valor2 < valor3)
            menor = valor2;
        else
            menor = valor3;
}

if(valor1 != valor2 && valor1 != valor3 && valor2 != valor3)
    cout << "Mayor: " << mayor << ". Menor: " << menor << ". Distancia: " << mayor - menor;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int lote=1, valor, pos, suma, maximo=-1, minimo,maximolote,posmaximolote;
    do
    {
        pos = 0;
        suma = 0;
        cout << "Ingrese un valor para el lote: " << lote << endl;
        cin >> valor;
        minimo = valor;
        while (valor > 0)
        {
            suma += valor;
            pos++;
            if (valor > maximo) /*no servir�a poner || lote==1 para el primer valor
                ya que puedo tener n lotes vacios al ppio*/
            {
                maximo = valor;
                maximolote = lote;
                posmaximolote = pos;
            }
            if (valor < minimo)
                minimo = valor;

            cout << "Ingrese un valor para el lote: " << lote << endl;
            cin >> valor;
        }
        if (pos)
        {
            cout << "Promedio del lote " << lote << ": " << (float) suma / pos << endl;
            cout << "Minimo del lote " << lote << ": " << minimo << endl;
        }
        else
            cout << "Sublote vac�o." << endl;
        lote++;
    }
    while (valor >= 0);
    if (maximo != -1)
        cout << "El maximo es: " << maximo << ", en el lote " << maximolote << ", posicion " << posmaximolote << endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int exponente, i;
    float base, pot = 1;
    cout << "Ingrese base y exponenete:" << endl;
    cin >> base >> exponente;
    if (!base && exponente<=0)
        cout << "Error: indeterminado";
    else
    {
        if (exponente < 0 && base!=0)
            base = 1/base;
        for (i=1;i <= abs(exponente);i++)
            pot *= base;
        cout << "Resultado: " << pot << endl;
    }
    return 0;
}

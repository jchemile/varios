#include <iostream>

using namespace std;

int main()
{
    int x, y, cantidad;
    int primero, segundo, tercero, cuarto;

    primero = 0;
    segundo = 0;
    tercero = 0;
    cuarto = 0;

    cout << "Cantidad a ingresar: ";
    cin >> cantidad;

    for(int i = 0; i < cantidad; i++)
    {
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;

        if(x > 0 && y > 0)
        {
            cout << "Primero" << endl;
            primero++;
        }
        else
        {
            if(x < 0 && y > 0)
            {
                cout << "Segundo" << endl;
                segundo++;
            }
            else
            {
                if(x < 0 && y < 0)
                {
                    cout << "Tercero" << endl;
                    tercero++;
                }
                else
                {
                    if(x > 0 && y < 0)
                    {
                        cout << "Cuarto" << endl;
                        cuarto++;
                    }
                }
            }
        }
    }
    cout << "Primero: " << primero << endl;
    cout << "Segundo: " << segundo << endl;
    cout << "Tercero: " << tercero << endl;
    cout << "Cuarto: " << cuarto << endl;
    return 0;
}

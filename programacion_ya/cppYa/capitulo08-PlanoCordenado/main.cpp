#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Ingrese x";
    cin >> x;
    cout << "Ingrese y";
    cin >> y;

    if(x > 0 && y > 0)
        cout << "Primer Cuadrante";
    else
        if(x < 0 && y > 0)
            cout << "Segundo Cuadrante";
        else
            if(x < 0 && y < 0)
                cout << "Tercer Cuadrante";
            else
                if(x > 0 && y < 0)
                    cout << "Cuarto Cuadrante";
    return 0;
}

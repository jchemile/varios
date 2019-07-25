#include <iostream>

using namespace std;

int main()
{
    int valor;
    do{
        cout << "Ingrese un valor entre 0 y 999(0 finaliza): ";
        cin >> valor;
        if (valor >= 100)
            cout << "Tiene 3 digitos" << endl;
        else
            if(valor >= 10)
                cout << "Tiene dos digitos." << endl;
            else
                cout << "Tiene un difito" <<endl;

    } while(valor != 0);
    return 0;
}

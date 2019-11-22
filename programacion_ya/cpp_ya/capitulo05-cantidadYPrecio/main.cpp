#include <iostream>

using namespace std;

int main()
{
    int cantidad, precio;
    cout << "Cantidad: ";
    cin >> cantidad;
    cout << "Precio: ";
    cin >> precio;
    cout << "El monto total a abonar es: " << cantidad * precio;

    return 0;
}

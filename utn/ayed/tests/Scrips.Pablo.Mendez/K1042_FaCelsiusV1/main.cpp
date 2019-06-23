#include <iostream>

using namespace std;

int main()
{
    float f,c;
    cout << "Ingrese una temperatura en F:" << endl;
    cin >> f;
    /* La siguiente linea la modificamos porque daba
    cero en todos los casos, ya que las operaciones aritmeticas
    se evaluan de izq a derecha y 5/9=0 trabajando en enteros
    c = 5/9 * (f-32);
    */
    /* Una forma de solucionarlo es la siguiente: */
    //c = (f-32) * 5 / 9;
    //Otra forma sería:
    c = 5.0 / 9 * (f-32);
    cout << f << " F = " << c << " C" << endl;
    return 0;
}

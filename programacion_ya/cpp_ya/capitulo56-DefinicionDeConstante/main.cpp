#include <iostream>

using namespace std;

const int inicio = 1;
const float altura = 1.92f;
const char mensaje1[]="Bienvenido al programa";

int main()
{
    cout << "Constante entera: " << inicio << endl;
    cout << "Constante flotante: " << altura << endl;
    cout << "Constante de tipo cadena de caracteres: " << mensaje1 << endl;
    const int fin = 10;
    cout << "Constante local: " << fin;
    return 0;
}

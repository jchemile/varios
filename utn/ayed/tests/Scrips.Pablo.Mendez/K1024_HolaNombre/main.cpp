#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    /* Es buena práctica de programación que las variables
    estén declaradas al inicio del algoritmo */
    string nombre;
    int edad; //Esto es un comentario de una linea
    /*
    cout << "Ingrese su nombre:" << endl;
    cin >> nombre;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    */
    cout << "Ingrese su nombre y su edad: " << endl;
    //Asinación externa de entrada:
    cin >> nombre >> edad;
    cout << "Hola " << nombre << " su edad es: " << edad << endl;
    getch();
    return 0;
}

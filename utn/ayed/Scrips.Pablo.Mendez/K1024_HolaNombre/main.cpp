#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    /* Es buena pr�ctica de programaci�n que las variables
    est�n declaradas al inicio del algoritmo */
    string nombre;
    int edad; //Esto es un comentario de una linea
    /*
    cout << "Ingrese su nombre:" << endl;
    cin >> nombre;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    */
    cout << "Ingrese su nombre y su edad: " << endl;
    //Asinaci�n externa de entrada:
    cin >> nombre >> edad;
    cout << "Hola " << nombre << " su edad es: " << edad << endl;
    getch();
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int edad;
    float turnoMan, turnoTar, turnoNoch;
    float promMan, promTar, promNoch;

    cout << "Ingresara las edades de los 5 estudiantes del turno Mañana" << endl;
    for(int i = 1; i <= 5; i++)
    {
        cout << "Alumno " << i << ": ";
        cin >> edad;
        turnoMan += edad;
    }

    cout << "Ingresara las edades de los 6 estudiantes del turno Tarde" << endl;
    for(int i = 1; i <= 6; i++)
    {
        cout << "Alumno " << i << ": ";
        cin >> edad;
        turnoTar += edad;
    }

    cout << "Ingresara las edades de los 11 estudiantes del turno Noche" << endl;
    for(int i = 1; i <= 11; i++)
    {
        cout << "Alumno " << i << ": ";
        cin >> edad;
        turnoNoch += edad;
    }

    promMan = turnoMan / 5.0;
    promTar = turnoTar / 6.0;
    promNoch = turnoNoch / 11.0;

    cout << "Promedio Mañana: " << promMan <<endl;
    cout << "Promedio Tarde: " << promTar <<endl;
    cout << "Promedio Noche: " << promNoch <<endl;

    if(turnoMan > turnoTar && turnoMan > turnoNoch)
        cout << "Mayor turno Mañana";
    else
        if(turnoTar > turnoNoch)
            cout << "Mayor turno Tarde";
        else
            cout << "Mayor turno Noche";

    return 0;
}

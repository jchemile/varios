#include <iostream>

using namespace std;

int main()
{
    int preguntas, respuestas, efectividad;
    cout << "Preguntas: ";
    cin >> preguntas;
    cout << "Respuesta: ";
    cin >> respuestas;
    efectividad = (respuestas * 100) / preguntas;
    cout << efectividad << endl;

    if(efectividad >= 90)
        cout << "Nivel Maximo";
    else
        if(efectividad >= 75)
            cout << "Nivel Medio";
        else
            if(efectividad >= 50)
                cout << "Nivel Regular";
            else
                cout << "Fuera de Nivel";
    return 0;
}

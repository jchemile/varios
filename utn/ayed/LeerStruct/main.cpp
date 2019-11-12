#include <iostream>

#define ARCHIVOINCIDENTES "Incidentes.BAK"

using namespace std;

struct incidente
{
    int incidenteID;
    char fechahora[14];
    char dniasegurado[11];
    char patente[15];
    char dniotro[11];
    char calle[50];
    int altura;
};

int main()
{

    return 0;
}

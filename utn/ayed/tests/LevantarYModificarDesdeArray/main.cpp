#include <iostream>

using namespace std;

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>

#define ARCHIVOINCIDENTES "archivo.incidentes"
#define ARCHIVOASEGURADOS "Asegurados.BAK"
#define TAMANO 12

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

struct poliza
{
    int nroPoliza;
    char dniAsegurado[11];
    char nombreAsegurado[50];
    char apellidoAsegurado[50];
    char cuotaAlDia[1];
    char patenteAuto[10];
    char polizaActiva[1];
    int cantIncidentes;
};


void levantarAsegurados(poliza V[], int tam)
{
    FILE*F;
    int i = 0;
    F = fopen(ARCHIVOASEGURADOS,"ab+");
    fseek(F,0,SEEK_SET);
    fread(&V[i],sizeof(poliza),1,F);
    while (!feof(F))
    {
       V[i].nroPoliza;
       V[i].dniAsegurado;
       V[i].nombreAsegurado;
       V[i].apellidoAsegurado;
       V[i].cuotaAlDia;
       V[i].patenteAuto;
       V[i].polizaActiva;
       V[i].cantIncidentes;
        i++;
        fread(&V[i],sizeof(poliza),1,F);
    }
    fclose(F);
}


int main()
{
    poliza polizaEnMemoria[TAMANO];
    levantarAsegurados(polizaEnMemoria, TAMANO);
    /*
    for(int i = 0; i < 12;i++)
    {
        cout << V[i].nroPoliza << endl;
        cout << V[i].dniAsegurado << endl;
        cout << V[i].nombreAsegurado << endl;
        cout << V[i].apellidoAsegurado << endl;
        cout << V[i].cuotaAlDia << endl;
        cout << V[i].patenteAuto << endl;
        cout << V[i].polizaActiva << endl;
        cout << V[i].cantIncidentes << endl;
    }
    */
    return 0;
}

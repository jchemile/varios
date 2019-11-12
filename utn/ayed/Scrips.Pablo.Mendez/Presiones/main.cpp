#include <iostream>
#define VACIO 0

using namespace std;




 void mayores(float valores[],int horas[], int tam)
 {
     float mayor_valor;
     int i=0;
     while (i < tam && valores[i] != VACIO)
     {
         if (i==0 || valores[i] > mayor_valor)
         {
             mayor_valor = valores[i];
         }
         i++;
     }
     cout << "La mayor presión fue " << mayor_valor << " en los horarios:" << endl;
     i=0;
     while (i < tam && valores[i] != VACIO)
     {
         if (valores[i] == mayor_valor)
         {
             cout << horas[i] << " hs." << endl;
         }
         i++;
     }
    return;
 }

void promedio_hora(float valores[],int horas[], int tam)
{
    int i=0, cont=0;
    float suma =0;
    while (i < tam && valores[i] != VACIO)
    {
         if (horas[i] == 16)
         {
             suma += valores[i];
             cont++;
         }
         i++;
    }
    if (cont>0)
        cout << "El promedio a las 16 hs es: " << suma/cont << endl;
    else
        cout << "No hubo mediciones a las 16 hs" << endl;
    return;
}
int main()
{
    float vals[200] = {1011,1013,1012,1013.5,1012,1013.5,1010,1013.5};
    int hs[200] = {16,12,9,16,15,22,16,21};
    mayores(vals,hs,200);
    promedio_hora(vals,hs,200);
    return 0;
}

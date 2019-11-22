#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, anio;
    printf("Por favor ingrese dia: ");
    scanf("%i", &dia);
    printf("Por favor ingrese mes: ");
    scanf("%i", &mes);
    printf("Por favor ingrese año: ");
    scanf("%i", &anio);

    if(dia == 25 && mes == 12)
    {
        printf("Es navidad!! Dame sidra gato.");
    }
    return 0;
}

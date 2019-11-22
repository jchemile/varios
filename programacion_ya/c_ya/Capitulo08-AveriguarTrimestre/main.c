#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dd, mm, aa;
    printf("Por favor ingrese dia: ");
    scanf("%i", &dd);
    printf("Por favor ingrese el mes: ");
    scanf("%i", &mm);
    printf("Por favor ingrese el año: ");
    scanf("%i", &aa);

    if(mm == 1 || mm == 2 || mm == 3)
    {
        printf("Corresponde al primer trimestre");
    }
    return 0;
}

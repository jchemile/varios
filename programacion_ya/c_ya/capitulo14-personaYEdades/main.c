#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre1[21], nombre2[21];
    int edad1, edad2;

    printf("Nombre primera persona: ");
    gets(nombre1);
    printf("Edad: ");
    scanf("%i", &edad1);
    fflush(stdin);
    printf("Nombre segunda persona: ");
    gets(nombre2);
    printf("Edad: ");
    scanf("%i", &edad2);

    if(edad1 > edad2)
        printf("La persona con mayor edad es %s",nombre1);
    else
        if(edad2 > edad1)
            printf("La persona con mayor edad es %s",nombre2);
        else
            printf("Tienen la misma edad.");

    return 0;
}

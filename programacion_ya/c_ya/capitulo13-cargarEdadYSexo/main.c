#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int edad, edadMayor, contador;
    char sexo, sexoMayor, otro;
    bool inicializar = true;


    do
    {
        printf("Edad: ");
        scanf("%i", &edad);
        printf("Sexo[m/f]: ");
        scanf(" %c", &sexo);

        if(inicializar == true)
        {
            inicializar = false;
            edadMayor = edad;
            sexoMayor = sexo;
        }

        if(edad > edadMayor)
        {
            edadMayor = edad;
            sexoMayor = sexo;
        }

        printf("Otro[s/n]: ");
        scanf(" %c", &otro);
    }while (otro == 's');

    printf("Sexo mayor: %c. Edad Mayor: %i", sexoMayor, edadMayor);
    return 0;
}

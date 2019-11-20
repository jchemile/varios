#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargar(char nombres[5][41])
{
    int f;
    for(f = 0; f < 5; f++)
    {
        printf("Nombre:");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41])
{
    int f;
    for(f = 0; f < 5; f++)
    {
        printf("%s\n", nombres[f]);
    }
}

void imprimirElMenor(char nombres[5][41])
{
    int k;
    char menor[41];
    for (k = 0; k < 5; k++)
    {
        if(k == 0 || strcmp(nombres[k], menor)< 0 )
            strcpy(menor, nombres[k]);
    }

    printf("Menor: %s",menor);
}

int main()
{
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    imprimirElMenor(nombres);
    return 0;
}

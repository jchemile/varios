#include <stdio.h>
#include <stdlib.h>

int main()
{
    float turnoMan[4];
    float turnoTar[4];
    int f;
    float man, tar;

    printf("Turno mañana\n");
    for(f = 0; f < 4; f++)
    {
        printf("Sueldo: ");
        scanf("%f", &turnoMan[f]);
    }

    printf("Turno Tarde\n");
    for(f = 0; f < 4; f++)
    {
        printf("Sueldo: ");
        scanf("%f", &turnoTar[f]);
    }

    man = 0;
    tar = 0;
    for(f = 0; f < 4; f++)
    {
        man += turnoMan[f];
        tar += turnoTar[f];
    }

    printf("Mañana: %0.2f, tarde: %0.2f.", man, tar);
    return 0;
}

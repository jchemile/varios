#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aprobados, reprobados, f, nota;

    aprobados = 0;
    reprobados = 0;

    for(f = 1; f <= 10; f++)
    {
        printf("Ingrese nota: ");
        scanf("%i", &nota);

        if(nota >= 7)
            aprobados++;
        else
            if(nota < 7)
                reprobados++;
    }

    printf("Reprobados: %i, aprobados: %i", reprobados, aprobados);
    return 0;
}

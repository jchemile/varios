#include <stdio.h>
#include <stdlib.h>

int main()
{
    int enteroAEvaluar;

    printf("Por favor, ingrese un valor entero: ");
    scanf("%i", &enteroAEvaluar);

    if(enteroAEvaluar > 0)
        printf("Es positivo");
        else
            if(enteroAEvaluar < 0)
                printf("Es negativo");
                else
                    printf("Es nulo");
    return 0;
}

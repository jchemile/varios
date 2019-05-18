#include <stdio.h>
#include <stdlib.h>

int main()
{
    int enteroAEvaluar;

    printf("Ingrese un valor: ");
    scanf("%i", &enteroAEvaluar);

    if(enteroAEvaluar > 0 && enteroAEvaluar < 10)
        printf("El numero tiene 1 cifra");
            else
                if(enteroAEvaluar >= 10 && enteroAEvaluar < 100)
                    printf("El numero tien 2 cifras");
                        else
                            if(enteroAEvaluar >= 100 && enteroAEvaluar <= 999)
                                printf("El numero tiene 3 cifras");
                                    else
                                        if(enteroAEvaluar > 999 )
                                            printf("El numero tiene mas de tres cifras");
                                                else
                                                printf("El numero es menor que 1");
    return 0;
}

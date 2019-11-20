#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3;
    int mayor, menor, distancia;

    printf("Por favor ingrese el valor 1 ");
    scanf("%i", &valor1);
    printf("Por favor ingrese el valor 2 ");
    scanf("%i", &valor2);
    printf("Por favor ingrese el valor 3 ");
    scanf("%i", &valor3);

    if(valor1 > valor2 && valor1 > valor3)
    {
        mayor = valor1;
        if(valor2<valor3)
            menor = valor2;
        else
            menor = valor3;
    }
    else
    {
        if(valor2>valor3){
            mayor = valor2;
            if(valor3 < valor1)
                menor = valor3;
            else
                menor = valor1;
        }
        else
        {
            mayor = valor3;
            if(valor2 < valor1)
                menor = valor2;
            else
                menor = valor1;
        }
    }
    distancia = mayor - menor;

    printf("El mayor es %i \n", mayor);
    printf("El menor es %i \n", menor);
    printf("la distancia entre ambos es %i", distancia);

return 0;
}

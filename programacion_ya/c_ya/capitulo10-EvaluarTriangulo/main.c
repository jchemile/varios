#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, lado3;
    int equilatero, escaleno, isosceles;
    int contador, cantidadAIngresar;

    equilatero = 0;
    escaleno = 0;
    isosceles = 0;

    printf("Triangulos a ingresar: ");
    scanf("%i", &cantidadAIngresar);

    for(contador = 1; contador <= cantidadAIngresar; contador++)
    {
        printf("Triangulo %i", contador);
        printf("\nIngrese Lado 1: ");
        scanf("%i", &lado1);
        printf("Ingrese Lado 2: ");
        scanf("%i", &lado2);
        printf("Ingrese Lado 3: ");
        scanf("%i", &lado3);

        if(lado1 == lado2 && lado1 == lado3)
            equilatero++;
        else
            if(lado2 == lado3 || lado1 == lado2)
                isosceles++;
            else
                escaleno++;
    }

    printf("Equilateros: %i, isosceles: %i, escaleno: %i", equilatero, isosceles, escaleno);

    if(equilatero > isosceles && equilatero > escaleno)
        printf("\nMayor cantidad: equilatero");
    else
        if(isosceles > escaleno)
            printf("\nMayor cantidad: isosceles");
                else
                    printf("\nMayor cantidad: escaleno");

    return 0;
}

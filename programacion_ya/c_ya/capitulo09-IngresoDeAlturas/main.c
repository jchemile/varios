#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int n,x;
    float altura,suma,promedio;
    printf("Cuantas personas hay:");
    scanf("%i",&n);
    x=1;
    suma=0;
    while (x <= n)
    {
        printf("Ingrese la altura:");
        scanf("%f",&altura);
        suma=suma + altura;
        x=x + 1;
    }
    promedio=suma/n;
    printf("Altura promedio:");
    printf("%f",promedio);
    getch();
    return 0;
}
*/


int main()
{
    int cantidadIngresada, cantidadAingresar;
    float altura, sumaTotal, promedio;

    printf("Cuantas personas ingresara: ");
    scanf("%i", &cantidadAingresar);

    cantidadIngresada = 0;
    sumaTotal = 0;

    while(cantidadIngresada < cantidadAingresar)
    {
        printf("Ingrese la altura: ");
        scanf("%f", &altura);
        sumaTotal = sumaTotal + altura;
        cantidadIngresada = cantidadIngresada + 1;
    }
    promedio = sumaTotal / cantidadIngresada;

    printf("La altura promedio es de: %0.2f", promedio);

    return 0;
}

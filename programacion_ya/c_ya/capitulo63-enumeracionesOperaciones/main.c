#include <stdio.h>
#include <stdlib.h>

enum operacion {SUMAR, RESTAR, MULTIPLICAR, DIVIDIR};

int operar(int v1, int v2, enum operacion op)
{
    switch(op)
    {
        case SUMAR: return v1 + v2;
        case RESTAR: return v1 - v2;
        case MULTIPLICAR: return v1*v2;
        case DIVIDIR: return v1/v2;
        default:printf("El programa se detiene por operacion no valida");
            exit(1);
    }
}


int main()
{
    int valor1 = 10;
    int valor2 = 5;
    printf("La SUMA de %i y %i es %i\n", valor1, valor2, operar(valor1, valor2, SUMAR));
    printf("La RESTA de %i y %i es %i\n", valor1, valor2, operar(valor1, valor2, RESTAR));
    printf("La DIVISION de %i y %i es %i\n", valor1, valor2, operar(valor1, valor2, MULTIPLICAR));
    printf("La MULTIPLICACION de %i y %i es %i\n", valor1, valor2, operar(valor1, valor2, DIVIDIR));
    return 0;
}

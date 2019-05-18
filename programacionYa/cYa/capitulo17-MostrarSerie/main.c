#include <stdio.h>
#include <stdlib.h>

void mostrarSerie(int x)
{
    int contador;
    if(x < 1)
        printf("Valor invalido");
    else
        for(contador = 1; contador <= x; contador++)
        {
            printf("%i\n", contador);
        }
}

int main()
{
    int valor;
    printf("Valor: ");
    scanf("%i", &valor);
    mostrarSerie(valor);
    return 0;
}

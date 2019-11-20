#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma, valor;
    char continua;

    suma = 0;

    do{
      printf("Entero: ");
      scanf("%i", &valor);
      suma += valor;
      printf("Cargar otro [s/n]: ");
      scanf(" %c", &continua);

    } while(continua == 's');

    printf("Suma: %i", suma);
    return 0;
}

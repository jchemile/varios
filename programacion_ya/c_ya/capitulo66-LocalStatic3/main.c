#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificarFin()
{
    static int intentos = 8;
    intentos--;
    if(intentos == 0)
    {
        printf("PERDIO");
        return 1;
    }
    return 0;
}

int jugar()
{
    srand(time(NULL));
    int numero = rand() % 100 + 1;
    int valor;
    do{
        printf("Advinia el numero que pense entre 1 y 100: ");
        scanf("%i", &valor);
        if(valor == numero)
        {
            printf("Ganaste");
            break;
        }
        else
            if(valor < numero)
                printf("El numero que pense es mayor\n");
            else
                printf("El numero que pense es menor\n");
    } while (verificarFin()== 0);
}

int main()
{
    jugar();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Numero: ");
    scanf("%i", &num);

    if(num > 1 && num < 10)
    {
        printf("Posee un digito");
    }
    else
    {
        printf("Posee m�s de un d�gito");
    }


    return 0;
}

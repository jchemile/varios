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
        printf("Posee más de un dígito");
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &num3);

    if(num1 > num2 && num1 > num3)
    {
        printf("%i", num1);
    }
    else
    {
        if(num2 > num3)
        {
            printf("%i", num2);
        }
        else
        {
            printf("%i", num3);
        }
    }
    return 0;
}

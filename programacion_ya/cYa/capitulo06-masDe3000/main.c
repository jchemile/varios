#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sueldo;
    printf("Sueldo: ");
    scanf("%f", &sueldo);
    if(sueldo > 3000)
    {
        printf("Mas de tres mil");
    }
    getch();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct pais{
    char nombre[40];
    int cantidadhab;
};



int main()
{
    struct pais pais1,pais2, pais3;
    //Pais 1
    printf("Pais:");
    gets(pais1.nombre);
    printf("Habitantes:");
    scanf("%i", &pais1.cantidadhab);
    fflush(stdin);

    //Pais 2
    printf("Pais:");
    gets(pais2.nombre);
    printf("Habitantes:");
    scanf("%i", &pais2.cantidadhab);
    fflush(stdin);

    //Pais 3
    printf("Pais:");
    gets(pais3.nombre);
    printf("Habitantes:");
    scanf("%i", &pais3.cantidadhab);
    fflush(stdin);

    if(pais1.cantidadhab > pais2.cantidadhab && pais1.cantidadhab > pais3.cantidadhab)
        printf("%s tiene mas habitantes", pais1.nombre);
    else
        if(pais2.cantidadhab > pais3.cantidadhab)
            printf("%s tiene mas habitantes", pais2.nombre);
        else
            printf("%s tiene mas habitantes", pais3.nombre);

    return 0;
}

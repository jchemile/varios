#include <stdio.h>
#include <stdlib.h>

struct punto{
    int x;
    int y;
};

struct punto cargar(){
    struct punto p;
    printf("VALORES DEL CUADRANTE\n");
    printf("Valor x: ");
    scanf("%i", &p.x);
    printf("Valor y: ");
    scanf("%i", &p.y);
    return p;
};

void imprimirCuadrante(struct punto p)
{
    if(p.x > 0 && p.y > 0)
        printf("1 Cuadrante");
    else
        if(p.x < 0 && p.y > 0)
            printf("2 Cuadrante");
        else
            if(p.x < 0 && p.y < 0)
                printf("3 Cuadrante");
            else
                if(p.x > 0 && p.y < 0)
                    printf("4 Cuadrante");
}

int main()
{
    struct punto punto1, punto2, punto3, punto4;
    punto1 = cargar();
    imprimirCuadrante(punto1);
    printf("\n");
    punto2 = cargar();
    imprimirCuadrante(punto2);
    printf("\n");
    punto3 = cargar();
    imprimirCuadrante(punto3);
    printf("\n");
    punto4 = cargar();
    imprimirCuadrante(punto4);

    return 0;
}

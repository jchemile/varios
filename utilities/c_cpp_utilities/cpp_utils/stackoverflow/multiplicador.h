
void multiplicador(){
char seguir, a;
float gg, tot, n1, n2;

printf("\t\t\tCuanto cuesta.");
printf("\nEste programa te dice cuanto cuesta cada item de un paquete,");
printf("\npor ejemplo, cuanto cuesta cada galleta de un paquete que cuesta n");
printf("\n==============================================================================");

do{
printf("\n\nCuanto costo el paquete / bolsa / etc: ");
scanf("%f", &n1);

printf("\nCuantos items hay?: ");
scanf("%f", &n2);

tot= n1*n2;
printf("\nEl valor de cada item es: %.2f centavos", tot);

printf("\n\nQuieres hacerlo de nuevo?: (s/n) ");
fflush(stdin);
scanf("%c", &seguir);
system("cls");

}while(seguir != 'n');
}

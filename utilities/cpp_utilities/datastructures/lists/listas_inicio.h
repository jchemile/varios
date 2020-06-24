#ifndef LISTAS_INICIO_H_INCLUDED
#define LISTAS_INICIO_H_INCLUDED

struct Nodo
{
    int info;
    Nodo *sig;
};

void ejecutar_listas()
{
    Nodo *inicio = NULL;
    inicio = new Nodo();

    inicio ->info = 5; // Primer Valor.
    inicio ->sig = NULL;

    inicio -> sig = new Nodo();
    inicio -> sig -> info = 27; // Segundo Valor
    inicio -> sig -> sig = NULL;

    Nodo *paux;
    paux = inicio -> sig; // ¡Donde está apuntando?¿Principio del primer nodo? ¿final?
    paux -> sig = new Nodo();
    paux = paux -> sig;
    paux -> info = 32; // ¿Modifica un valor o lo intercala en el medio?
    paux -> sig = NULL;

    paux = inicio;

    while(paux)
    {
        cout << "Direccion del nodo: " << paux << endl;
        cout << "info: " << paux -> info << endl;
        cout << "Siguiente en: " << paux -> sig << endl;
        cout << "==================================" << endl;
        paux = paux -> sig;
    }

}

#endif // LISTAS_INICIO_H_INCLUDED

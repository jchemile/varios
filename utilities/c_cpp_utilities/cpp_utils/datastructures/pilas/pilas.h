#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct t_nodo{
    int valor;
    t_nodo* sgte;
};

void meter_pila(t_nodo*&, int);
void sacar_pila(t_nodo*&, int&); 

void implementar(){
     t_nodo* pila = NULL;
    int valor;
    char respuesta = 's';

    cout << " ingrese un valor: ";
    cin >> valor;
    cout << endl;

    while (respuesta == 's') {
        meter_pila(pila, valor);

        cout << "   desea cargar mas valores (s/n): ";
        cin >> respuesta;
        cout << endl;

        if (respuesta == 's'){
            cout << " ingrese un valor: ";
            cin >> valor;
            cout << endl;
      } 
    } 
 
   cout << endl;
   cout << "  LA CARGA DE LA PILA FUE EXITOSA.." << endl;
   cout << endl;

   cout << "  INFORME DE LA ESTRUCTURA PILA: " << endl;
   cout << endl;
   cout << " ";

   while (pila != NULL){
       sacar_pila(pila, valor);

       if (pila != NULL){
           cout << valor << ", ";
       } else {
           cout << valor << '.' << endl;
       } 
    }  

   cout << endl;
   cout << "        FIN DEL LISTADO..." << endl;
}


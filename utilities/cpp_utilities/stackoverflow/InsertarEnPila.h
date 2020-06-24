struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;
    nuevo_nodo ->siguiente = pila;
    pila = nuevo_nodo;
};
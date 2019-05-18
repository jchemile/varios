#include <iostream>

using namespace std;

class ListaGenerica{
private:
    class Nodo{
    public:
        int info;
        Nodo *sig;
    };

    Nodo *raiz;

public:
    ListaGenerica();
    ~ListaGenerica();
    int cantidad();
    void insertar(int pos, int x);
    int extraer(int pos);
    void borrar(int pos);
    void intercambiar(int pos1, int pos2);
    bool vacia();
    int mayor();
    void imprimir();
    int posMayor();
    bool ordenada();
    bool existe(int x);
    //Creados
    void insertarPrimero(int x);
    void insertarUltimo(int x);
    void insertarSegundo(int x);
    void insertarAnteUltimo(int x);
    void borrarPrimero();
    void borrarSegundo();
    void borrarUltimo();
    void borrarMayor();
};

ListaGenerica::ListaGenerica()
{
    raiz = NULL;
}

ListaGenerica::~ListaGenerica()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while(reco != NULL)
    {
        bor = reco;
        reco = reco -> sig;
        delete bor;
    }
}

int ListaGenerica::cantidad()
{
    Nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco -> sig;
    }
    return cant;
}

void ListaGenerica::insertar(int pos, int x)
{
    if(pos <= cantidad() + 1)
    {
        Nodo *nuevo = new Nodo();
        nuevo -> info = x;
        if(pos == 1)
        {
            nuevo -> sig = raiz;
            raiz = nuevo;
        }
        else
            if(pos == cantidad() + 1)
            {
                Nodo *reco = raiz;
                while (reco -> sig != NULL)
                {
                    reco = reco -> sig;
                }
                reco -> sig = nuevo;
                nuevo -> sig = NULL;
            }
            else
            {
                Nodo *reco = raiz;
                for(int f = 1; f <= pos - 2 ; f++)
                {
                    reco = reco -> sig;
                }
                Nodo *siguiente = reco -> sig;
                reco -> sig = nuevo;
                nuevo -> sig = siguiente;
            }
    }
}

int ListaGenerica::extraer(int pos)
{
    if(pos <= cantidad())
    {
        int informacion;
        Nodo *bor;
        if(pos == 1)
        {
            informacion = raiz -> info;
            bor = raiz;
            raiz = raiz -> sig;
        }
        else
        {
            Nodo *reco;
            reco = raiz;
            for(int f = 1 ; f <= pos -2; f++)
            {
                reco = reco -> sig;
            }
            Nodo *prox = reco -> sig;
            reco -> sig = prox -> sig;
            informacion = prox -> info;
            bor = prox;
        }
        delete bor;
        return informacion;
    }
    else
        return -1;
}

void ListaGenerica::borrar(int pos)
{
    if(pos <= cantidad())
    {
        Nodo *bor;
        if(pos == 1)
        {
            bor = raiz;
            raiz = raiz -> sig;
        }
        else
        {
            Nodo *reco;
            reco = raiz;
            for(int f = 1; f <= pos -2; f++)
            {
                reco = reco -> sig;
            }
            Nodo *prox = reco -> sig;
            reco -> sig = prox -> sig;
            bor = prox;
        }
        delete bor;
    }
}

void ListaGenerica::intercambiar(int pos1, int pos2)
{
    if(pos1 <= cantidad() && pos2 <= cantidad())
    {
        Nodo *reco1 = raiz;
        for(int f = 1; f < pos1; f++)
        {
            reco1 = reco1 -> sig;
        }
        Nodo *reco2 = raiz;
        for(int f = 1; f < pos2; f++)
        {
            reco2 = reco2 -> sig;
        }
        int aux = reco1 -> info;
        reco1 -> info = reco2 -> info;
        reco2 -> info = aux;
    }
}

bool ListaGenerica::vacia()
{
    if(raiz == NULL)
        return true;
    else
        return false;
}

int ListaGenerica::mayor()
{
    if(!vacia())
    {
        int may = raiz -> info;
        Nodo *reco = raiz -> sig;
        while(reco != NULL)
        {
            if(reco -> info > may)
            {
                may = reco -> info;
            }
            reco = reco -> sig;
        }
        return may;
    }
    else
        return -1;
}

void ListaGenerica::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado completo" << endl;
    while(reco != NULL)
    {
        cout << reco -> info << endl;
        reco = reco -> sig;
    }
    cout << endl;
}

int ListaGenerica::posMayor()
{
    if(!vacia())
    {
        int may = raiz -> info;
        int x = 1;
        int pos = x;
        Nodo *reco = raiz -> sig;
        while(reco != NULL)
        {
            if(reco -> info > may)
            {
                may = reco -> info;
                pos = x;
            }
            reco = reco -> sig;
            x++;
        }
        return pos;
    }
    else
        return -1;
}

bool ListaGenerica::ordenada()
{
    if(cantidad() > 1)
    {
        Nodo *reco1 = raiz;
        Nodo *reco2 = raiz -> sig;
        while(reco2 != NULL)
        {
            if(reco2 -> info < reco1 -> info)
            {
                return false;
            }
            reco2 = reco2 -> sig;
            reco1 = reco1 -> sig;
        }
    }
    return true;
}

bool ListaGenerica::existe(int x)
{
    Nodo *reco = raiz;
    while (reco != NULL)
    {
        if(reco -> info == x)
        {
            if(reco -> info == x)
                return true;
            reco = reco -> sig;
        }
    }
    return false;
}

void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo -> info = x;
    nuevo -> sig = raiz;
    raiz = nuevo;
}

void ListaGenerica::insertarUltimo(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo -> info = x;
    if(raiz == NULL)
        raiz = nuevo;
    else
    {
        Nodo * reco = raiz;
        while(reco->sig != NULL)
        {
            reco = reco -> sig;
        }
        reco -> sig = nuevo;
    }
}

void ListaGenerica::insertarSegundo(int x)
{
    if(raiz != NULL)
    {
        Nodo *nuevo = new Nodo();
        nuevo -> info = x;
        if(raiz -> sig == NULL)
        {
            //hay un solo nodo
            raiz -> sig = nuevo;
        }
        else
        {
            nuevo -> sig = raiz -> sig;
            raiz -> sig = nuevo;
        }
    }
}

void ListaGenerica::insertarAnteUltimo(int x)
{
    if (raiz != NULL)
    {
        Nodo *nuevo = new Nodo();
        nuevo -> info = x;
        if (raiz -> sig == NULL)
        {
            //hay un solo nodo
            nuevo -> sig = raiz;
            raiz = nuevo;
        }
        else
        {
            Nodo *atras = raiz;
            Nodo *reco = raiz -> sig;
            while(reco -> sig != NULL)
            {
                atras = reco;
                reco = reco -> sig;
            }

            nuevo -> sig = atras -> sig;
            atras -> sig = nuevo;
        }
    }
}

void ListaGenerica::borrarPrimero()
{
    if(raiz != NULL)
    {
        Nodo *bor = raiz;
        raiz = raiz -> sig;
        delete bor;
    }
}

void ListaGenerica::borrarSegundo()
{
    if(raiz != NULL)
    {
        if(raiz -> sig != NULL)
        {
            Nodo *bor = raiz -> sig;
            Nodo *tercero = raiz -> sig;
            tercero = tercero -> sig;
            raiz -> sig = tercero;
            delete bor;
        }
    }
}

void ListaGenerica::borrarUltimo()
{
    if(raiz != NULL)
    {
        if(raiz -> sig == NULL)
        {
            delete raiz;
            raiz = NULL;
        }
        else
        {
            Nodo *reco = raiz -> sig;
            Nodo *atras = reco;
            while (reco -> sig != NULL)
            {
                atras = reco;
                reco = reco -> sig;
            }
            atras -> sig = NULL;
            delete reco;
        }
    }
}

void ListaGenerica::borrarMayor()
{
    if(raiz != NULL)
    {
        Nodo *reco = raiz;
        int may = raiz -> info;
        while(reco != NULL)
        {
            if(reco -> info > may)
            {
                may = reco -> info;
            }
            reco = reco -> sig;
        }
        reco = raiz;
        Nodo *atras = raiz;
        Nodo *bor;
        while(reco != NULL)
        {
            if(reco -> info == may)
            {
                if(reco == raiz)
                {
                    bor = raiz;
                    raiz = raiz -> sig;
                    atras = raiz;
                    reco = raiz;
                    delete bor;
                }
                else
                {
                    atras -> sig = reco -> sig;
                    bor = reco;
                    reco = reco -> sig;
                    delete bor;
                }
            }
            else
            {
                atras = reco;
                reco = reco -> sig;
            }
        }
    }
}

int main()
{
    ListaGenerica *lg = new ListaGenerica();
    lg -> insertarPrimero(10);
    lg -> insertarPrimero(45);
    lg -> insertarPrimero(23);
    lg -> insertarPrimero(89);
    lg -> imprimir();
    cout << "Insertamos un nodo al final" << endl;
    lg -> insertarUltimo(160);
    lg -> imprimir();
    cout << "Insertamos un nodo en la segunda posicion" <<endl;
    lg -> insertarSegundo(13);
    lg -> imprimir();
    cout << "Insertamos en la anteultima posicion" << endl;
    lg -> insertarAnteUltimo(300);
    lg -> imprimir();
    cout << "Borramos el primero"<< endl;
    lg->borrarPrimero();
    lg -> imprimir();
    cout << "Borramos el segundo"<< endl;
    lg->borrarSegundo();
    lg -> imprimir();
    cout << "Borramos el ultimo"<< endl;
    lg->borrarUltimo();
    lg -> imprimir();
    cout << "Borramos el mayor"<< endl;
    lg->borrarMayor();
    lg -> imprimir();

    return 0;
}

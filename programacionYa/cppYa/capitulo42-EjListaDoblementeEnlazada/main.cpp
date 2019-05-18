#include <iostream>

using namespace std;

class ListaGenericaDoble{
private:
    class Nodo{
    public:
        int info;
        Nodo *sig;
        Nodo *ant;
    };

    Nodo *raiz;
public:
    ListaGenericaDoble();
    ~ListaGenericaDoble();
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
    //Metodos pedidos.
    void insertarPrimero(int x);
    void insertarSegundo(int x);
    void insertarAnteultimo(int x);
    void insertarUltimo(int x);
    void borrarPrimero();
    void borrarSegundo();
    void borrarUltimo();
    void borrarMayor();
};

ListaGenericaDoble::ListaGenericaDoble()
{
    raiz = NULL;
}

ListaGenericaDoble::~ListaGenericaDoble()
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

int ListaGenericaDoble::cantidad()
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

void ListaGenericaDoble::insertar(int pos, int x)
{
    if(pos <= cantidad() + 1)
    {
        Nodo *nuevo = new Nodo();
        nuevo -> info = x;
        if(pos == 1)
        {
            nuevo -> sig = raiz;
            if(raiz != NULL)
                raiz -> ant = nuevo;
            raiz = nuevo;
        }
        else
        {
            if(pos == cantidad() + 1)
            {
                Nodo *reco = raiz;
                while(reco -> sig != NULL)
                {
                    reco = reco -> sig;
                }
                reco -> sig = nuevo;
                nuevo -> ant = reco;
                nuevo -> sig = NULL;
            }
            else
            {
                Nodo *reco = raiz;
                for(int f = 1; f <= pos -2; f++)
                    reco = reco -> sig;
                Nodo *siguiente = reco -> sig;
                reco -> sig = nuevo;
                nuevo -> ant = reco;
                nuevo -> sig = siguiente;
                siguiente -> ant = nuevo;
            }
        }
    }
}

int ListaGenericaDoble::extraer(int pos)
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
            if((raiz != NULL))
                raiz -> ant = NULL;
        }
        else
        {
            Nodo *reco;
            reco = raiz;
            for(int f = 1; f <= pos - 2;f++)
                reco = reco -> sig;
            Nodo *prox = reco -> sig;
            bor = prox;
            reco -> sig = prox -> sig;
            Nodo *siguiente = prox -> sig;
            if(siguiente != NULL)
                siguiente -> ant = reco;
            informacion = prox -> info;
        }
        delete bor;
        return informacion;
    }
    else
        return -1;
}

void ListaGenericaDoble::borrar(int pos)
{
    if(pos <= cantidad())
    {
        Nodo *bor;
        if(pos == 1)
        {
            bor = raiz;
            raiz = raiz -> sig;
            if(raiz != NULL)
                raiz -> ant = NULL;
        }
        else
        {
            Nodo *reco;
            reco = raiz;
            for(int f = 1; f <= pos -2; f++)
                reco = reco -> sig;
            Nodo *prox = reco-> sig;
            bor = prox;
            reco -> sig = prox -> sig;
            Nodo *siguiente = prox->sig;
            if(siguiente != NULL)
                siguiente -> ant = reco;
        }
        delete bor;
    }
}

void ListaGenericaDoble::intercambiar(int pos1, int pos2)
{
    if(pos1 <= cantidad() && pos2 <= cantidad())
    {
        Nodo *reco1 = raiz;
        for(int f = 1; f < pos1;f++)
        {
            reco1 = reco1->sig;
        }
        Nodo *reco2 = raiz;
        for(int f = 1; f < pos2;f++)
        {
            reco2 = reco2 -> sig;
        }
        int aux = reco1 -> info;
        reco1 -> info = reco2 -> info;
        reco2 -> info = aux;
    }
}


bool ListaGenericaDoble::vacia()
{
    if(raiz == NULL)
        return true;
    else
        return false;
}

int ListaGenericaDoble::mayor()
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

void ListaGenericaDoble::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado completo."<< endl;
    while(reco != NULL)
    {
        cout << reco -> info << " - ";
        reco = reco -> sig;
    }
    cout << endl;
}

int ListaGenericaDoble::posMayor()
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

bool ListaGenericaDoble::ordenada()
{
    if(cantidad()>1)
    {
        Nodo *reco1 = raiz;
        Nodo *reco2 = raiz -> sig;
        while (reco2 != NULL)
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

bool ListaGenericaDoble::existe(int x)
{
    Nodo *reco = raiz;
    while(reco != NULL)
    {
        if(reco -> info == x)
            return true;
        reco = reco -> sig;
    }
    return false;
}

void ListaGenericaDoble::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo -> info = x;
    nuevo -> sig = raiz;
    if(raiz != NULL)
        raiz -> ant = nuevo;
    raiz = nuevo;
}

void ListaGenericaDoble::insertarUltimo(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo -> info = x;
    if(raiz == NULL)
        raiz = nuevo;
    else
    {
        Nodo *reco = raiz;
        while(reco -> sig != NULL)
        {
            reco = reco -> sig;
        }
        reco -> sig = nuevo;
        nuevo -> ant = reco;
    }
}

void ListaGenericaDoble::insertarSegundo(int x)
{
    if(raiz != NULL)
    {
        Nodo *nuevo = new Nodo();
        nuevo -> info = x;
        if(raiz -> sig == NULL)
        {
            //hay un solo nodo.
            raiz -> sig = nuevo;
            nuevo -> ant = raiz;
        }
        else
        {
            Nodo *segundo = raiz -> sig;
            nuevo -> sig = segundo;
            nuevo -> ant = raiz;
            raiz -> sig = nuevo;
            segundo -> ant = nuevo;
        }
    }
}

void ListaGenericaDoble::insertarAnteultimo(int x)
{
    if(raiz != NULL)
    {
        Nodo *nuevo = new Nodo();
        nuevo -> info = x;
        if(raiz -> sig = NULL)
        {
            //hay un solo nodo
            nuevo -> sig = raiz;
            raiz -> ant = nuevo;
            nuevo -> ant = NULL;
            raiz = nuevo;
        }
        else
        {
            Nodo *reco = raiz;
            while(reco -> sig != NULL)
            {
                reco = reco -> sig;
            }
            Nodo *anteultimo = reco -> ant;
            anteultimo -> sig = nuevo;
            nuevo -> ant = anteultimo;
            nuevo -> sig = reco;
            reco -> ant = nuevo;
        }
    }
}

void ListaGenericaDoble::borrarPrimero()
{
    if(raiz != NULL)
    {
        Nodo *bor = raiz;
        raiz = raiz -> sig;
        if(raiz != NULL)
            raiz -> ant = NULL;
        delete bor;
    }
}

void ListaGenericaDoble::borrarSegundo()
{
    if(raiz != NULL)
    {
        if(raiz -> sig != NULL)
        {
            Nodo *bor = raiz -> sig;
            Nodo *tercero = raiz -> sig;
            tercero = tercero -> sig;
            raiz -> sig = tercero;
            if(tercero != NULL)
                tercero -> ant = raiz;
            delete bor;
        }
    }
}

void ListaGenericaDoble::borrarUltimo()
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
            Nodo *reco = raiz;
            while(reco -> sig != NULL)
            {
                reco = reco -> sig;
            }
            Nodo *ante = reco -> ant;
            ante -> sig = NULL;
            delete reco;
        }
    }
}

void ListaGenericaDoble::borrarMayor()
{
    if(raiz != NULL)
    {
        Nodo *reco = raiz;
        int may = raiz -> info;
        while(reco != NULL)
        {
            if(reco -> info < may)
            {
                may = reco -> info;
            }
            reco = reco -> sig;
        }
        reco = raiz;
        Nodo *bor;
        while(reco != NULL)
        {
            if(reco -> info = may)
            {
                if(reco == raiz)
                {
                    bor = raiz;
                    raiz = raiz -> sig;
                    if(raiz != NULL)
                        raiz -> ant = NULL;
                    delete bor;
                    return;
                }
                else
                {
                    if(reco -> sig == NULL)
                    {
                        bor = reco;
                        reco = reco -> ant;
                        reco -> sig = NULL;
                        delete bor;
                        return;
                    }
                    else
                    {
                        Nodo *ante = reco -> ant;
                        bor = reco;
                        reco = reco -> sig;
                        ante -> sig = reco;
                        reco -> ant = ante;
                        delete bor;
                        return;
                    }
                }
            }
            else
            {
                reco = reco -> sig;
            }
        }
    }
}

int main()
{
    ListaGenericaDoble *lg = new ListaGenericaDoble();
    lg -> insertarPrimero(10);
    lg -> insertarPrimero(45);
    lg -> insertarPrimero(23);
    lg -> insertarPrimero(89);
    lg -> imprimir();
    cout << "Insertamos un nodo al final" << endl;
    lg -> insertarUltimo(160);
    lg -> imprimir();
    cout << "Insertamos un nodo en la segunda posicion" << endl;
    lg -> insertarSegundo(13);
    lg -> imprimir();
    cout << "Borramos el primero" << endl;
    lg -> borrarPrimero();
    lg -> imprimir();
    cout << "Borramos el segundo" << endl;
    lg -> borrarSegundo();
    lg -> imprimir();
    cout << "Borramos el ultimo" << endl;
    lg -> borrarUltimo();
    lg -> imprimir();
    cout << "Borramos el mayor" << endl;
    lg -> borrarMayor();
    lg -> imprimir();

    return 0;
}

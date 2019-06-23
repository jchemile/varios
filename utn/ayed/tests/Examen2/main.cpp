#include <iostream>

using namespace std;

struct cuenta
{
    char nro_cuenta[20];
    char CUIT[20];
    int fechaYHora;
    int saldoAnterior;
    int importe;
    int saldoSiguiente;
};

struct listaDeCuentasSE
{
    char cuenta[20];
    int saldo;
    listaDeCuentasSE* sig;
};

void cargarArchivo(listadeCuentasSE*& listaDeCuentasSE)
{
    FILE *f;
    cuenta c;
    f = fopen("cuentas.dat", "rb");
    if(f != NULL)
    {
        fread(&c, sizeof(cuenta), 1, f)
        while(!feof(f))
        {
            if(listaDeCuentasSE == NULL )
        }
    }

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
